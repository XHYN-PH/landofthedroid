#include "recomp.h"
#include "rec_mod.h"

void f_ea0c8e(void) {
  LOAD_REGS();
L_ea0c8e: /* ea0c8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea0c8f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea0c90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0c91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea0c92: xor esi, esi */
  esi = 0;
/* ea0c94: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ea0c96: mov dword ptr [0xebee88], esi */
  W32((uint32_t)(0xebee88u), esi);
/* ea0c9c: mov dword ptr [0xebee84], esi */
  W32((uint32_t)(0xebee84u), esi);
/* ea0ca2: mov dword ptr [0xebee7c], 0xebea88 */
  W32((uint32_t)(0xebee7cu), 0xebea88u);
/* ea0cac: mov dword ptr [0xebee78], 0xebe2b8 */
  W32((uint32_t)(0xebee78u), 0xebe2b8u);
/* ea0cb6: mov word ptr [0xebea88], si */
  W16((uint32_t)(0xebea88u), (esi & 0xffffu));
/* ea0cbd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ea0cbe: /* ea0cbe: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0cc1: mov dword ptr [0xebee80], eax */
  W32((uint32_t)(0xebee80u), eax);
L_ea0cc6: /* ea0cc6: movsx ecx, word ptr [esi*2 + 0xeba300] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi*2 + 0xeba300u)));
/* ea0cce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0cd0: jne 0xea0dac */
  if (!zf) goto L_ea0dac;
L_ea0cd6: /* ea0cd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0cd8: jge 0xea0cf5 */
  if ((sf == of)) goto L_ea0cf5;
L_ea0cda: /* ea0cda: mov ecx, dword ptr [0xebee90] */
  ecx = R32((uint32_t)(0xebee90u));
/* ea0ce0: call 0xe9fe3f */
  esp -= 4; W32(esp, 0xea0ce5u); SPILL(); f_e9fe3f(); if (g_unwind) return; RELOAD();
/* ea0ce5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0ce7: mov dword ptr [0xebee80], eax */
  W32((uint32_t)(0xebee80u), eax);
/* ea0cec: jge 0xea0cf5 */
  if ((sf == of)) goto L_ea0cf5;
L_ea0cee: /* ea0cee: xor eax, eax */
  eax = 0;
/* ea0cf0: mov dword ptr [0xebee80], eax */
  W32((uint32_t)(0xebee80u), eax);
L_ea0cf5: /* ea0cf5: movsx ecx, word ptr [esi*2 + 0xeba3f8] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi*2 + 0xeba3f8u)));
/* ea0cfd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0cff: je 0xea0d6f */
  if (zf) goto L_ea0d6f;
L_ea0d01: /* ea0d01: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* ea0d03: js 0xea0d6f */
  if (sf) goto L_ea0d6f;
L_ea0d05: /* ea0d05: mov edi, 0x107 */
  edi = 0x107u;
/* ea0d0a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea0d0c: jg 0xea0d74 */
  if ((!zf && sf == of)) goto L_ea0d74;
L_ea0d0e: /* ea0d0e: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ea0d10: movsx edx, word ptr [ecx + 0xeba7c8] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0xeba7c8u)));
/* ea0d17: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0d19: jne 0xea0d74 */
  if (!zf) goto L_ea0d74;
L_ea0d1b: /* ea0d1b: mov eax, dword ptr [0xebee7c] */
  eax = R32((uint32_t)(0xebee7cu));
/* ea0d20: cmp eax, 0xebee6e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xebee6eu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0d25: jae 0xea1069 */
  if (!cf) goto L_ea1069;
L_ea0d2b: /* ea0d2b: movsx esi, word ptr [ecx + 0xeba5b8] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0xeba5b8u)));
/* ea0d32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0d33: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0d34: mov dword ptr [0xebee7c], eax */
  W32((uint32_t)(0xebee7cu), eax);
/* ea0d39: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* ea0d3c: add dword ptr [0xebee78], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee78u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xebee78u), r);
  }
/* ea0d42: mov eax, dword ptr [0xebee70] */
  eax = R32((uint32_t)(0xebee70u));
/* ea0d47: mov ecx, dword ptr [0xebee78] */
  ecx = R32((uint32_t)(0xebee78u));
/* ea0d4d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ea0d4f: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0d52: cmp dword ptr [0xebee84], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee84u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea0d59: mov dword ptr [0xebee80], eax */
  W32((uint32_t)(0xebee80u), eax);
/* ea0d5e: jle 0xea0cc6 */
  if ((zf || sf != of)) goto L_ea0cc6;
L_ea0d64: /* ea0d64: dec dword ptr [0xebee84] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee84u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xebee84u), r);
  }
/* ea0d6a: jmp 0xea0cc6 */
  goto L_ea0cc6;
L_ea0d6f: /* ea0d6f: mov edi, 0x107 */
  edi = 0x107u;
L_ea0d74: /* ea0d74: movsx ecx, word ptr [esi*2 + 0xeba4c0] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi*2 + 0xeba4c0u)));
/* ea0d7c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0d7e: je 0xea0fa9 */
  if (zf) goto L_ea0fa9;
L_ea0d84: /* ea0d84: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* ea0d86: js 0xea0fa9 */
  if (sf) goto L_ea0fa9;
L_ea0d8c: /* ea0d8c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea0d8e: jg 0xea0fa9 */
  if ((!zf && sf == of)) goto L_ea0fa9;
L_ea0d94: /* ea0d94: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ea0d96: movsx edx, word ptr [ecx + 0xeba7c8] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0xeba7c8u)));
/* ea0d9d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0d9f: jne 0xea0fa9 */
  if (!zf) goto L_ea0fa9;
L_ea0da5: /* ea0da5: movsx ecx, word ptr [ecx + 0xeba5b8] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0xeba5b8u)));
L_ea0dac: /* ea0dac: mov eax, dword ptr [0xebee78] */
  eax = R32((uint32_t)(0xebee78u));
/* ea0db1: lea edi, [ecx + ecx] */
  edi = (uint32_t)(ecx + ecx);
/* ea0db4: movsx esi, word ptr [edi + 0xeba298] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edi + 0xeba298u)));
/* ea0dbb: mov ebx, esi */
  ebx = esi;
/* ea0dbd: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* ea0dc0: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ea0dc2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* ea0dc5: mov dword ptr [0xebee74], eax */
  W32((uint32_t)(0xebee74u), eax);
/* ea0dca: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* ea0dcd: cmp eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea0dd0: ja 0xea0ed9 */
  if ((!cf && !zf)) goto L_ea0ed9;
L_ea0dd6: /* ea0dd6: jmp dword ptr [eax*4 + 0xea1083] */
  switch (R32((uint32_t)(eax*4 + 0xea1083u))) {
    case 0xea0dddu: goto L_ea0ddd;
    case 0xea0de4u: goto L_ea0de4;
    case 0xea0debu: goto L_ea0deb;
    case 0xea0df1u: goto L_ea0df1;
    case 0xea0df8u: goto L_ea0df8;
    case 0xea0dffu: goto L_ea0dff;
    case 0xea0e06u: goto L_ea0e06;
    case 0xea0e0du: goto L_ea0e0d;
    case 0xea0e14u: goto L_ea0e14;
    case 0xea0e1bu: goto L_ea0e1b;
    case 0xea0e22u: goto L_ea0e22;
    case 0xea0e29u: goto L_ea0e29;
    case 0xea0e30u: goto L_ea0e30;
    case 0xea0e37u: goto L_ea0e37;
    case 0xea0e3eu: goto L_ea0e3e;
    case 0xea0e45u: goto L_ea0e45;
    case 0xea0e4cu: goto L_ea0e4c;
    case 0xea0e50u: goto L_ea0e50;
    case 0xea0e54u: goto L_ea0e54;
    case 0xea0e58u: goto L_ea0e58;
    case 0xea0e5cu: goto L_ea0e5c;
    case 0xea0e60u: goto L_ea0e60;
    case 0xea0e64u: goto L_ea0e64;
    case 0xea0e68u: goto L_ea0e68;
    case 0xea0e6cu: goto L_ea0e6c;
    case 0xea0e70u: goto L_ea0e70;
    case 0xea0e74u: goto L_ea0e74;
    case 0xea0e78u: goto L_ea0e78;
    case 0xea0e7cu: goto L_ea0e7c;
    case 0xea0e80u: goto L_ea0e80;
    case 0xea0e84u: goto L_ea0e84;
    case 0xea0e88u: goto L_ea0e88;
    case 0xea0e8cu: goto L_ea0e8c;
    case 0xea0e90u: goto L_ea0e90;
    case 0xea0e94u: goto L_ea0e94;
    case 0xea0e98u: goto L_ea0e98;
    case 0xea0e9cu: goto L_ea0e9c;
    case 0xea0ea0u: goto L_ea0ea0;
    case 0xea0ea4u: goto L_ea0ea4;
    case 0xea0ea8u: goto L_ea0ea8;
    case 0xea0eacu: goto L_ea0eac;
    case 0xea0eb0u: goto L_ea0eb0;
    case 0xea0eb4u: goto L_ea0eb4;
    case 0xea0eb8u: goto L_ea0eb8;
    case 0xea0ebcu: goto L_ea0ebc;
    case 0xea0ec0u: goto L_ea0ec0;
    case 0xea0ec4u: goto L_ea0ec4;
    case 0xea0ec8u: goto L_ea0ec8;
    case 0xea0eccu: goto L_ea0ecc;
    default: guest_badjump(0xea0dd6, R32((uint32_t)(eax*4 + 0xea1083u))); return;
  }
L_ea0ddd: /* ea0ddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ea0ddf: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0de4: /* ea0de4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ea0de6: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0deb: /* ea0deb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea0dec: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0df1: /* ea0df1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ea0df3: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0df8: /* ea0df8: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ea0dfa: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0dff: /* ea0dff: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* ea0e01: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e06: /* ea0e06: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ea0e08: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e0d: /* ea0e0d: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* ea0e0f: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e14: /* ea0e14: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* ea0e16: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e1b: /* ea0e1b: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* ea0e1d: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e22: /* ea0e22: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ea0e24: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e29: /* ea0e29: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* ea0e2b: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e30: /* ea0e30: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* ea0e32: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e37: /* ea0e37: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* ea0e39: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e3e: /* ea0e3e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ea0e40: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e45: /* ea0e45: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* ea0e47: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e4c: /* ea0e4c: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* ea0e4e: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e50: /* ea0e50: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* ea0e52: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e54: /* ea0e54: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* ea0e56: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e58: /* ea0e58: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* ea0e5a: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e5c: /* ea0e5c: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* ea0e5e: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e60: /* ea0e60: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* ea0e62: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e64: /* ea0e64: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* ea0e66: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e68: /* ea0e68: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* ea0e6a: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e6c: /* ea0e6c: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* ea0e6e: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e70: /* ea0e70: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* ea0e72: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e74: /* ea0e74: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* ea0e76: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e78: /* ea0e78: push 0x1d */
  { uint32_t v = 0x1du; esp -= 4; W32(esp, v); }
/* ea0e7a: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e7c: /* ea0e7c: push 0x1e */
  { uint32_t v = 0x1eu; esp -= 4; W32(esp, v); }
/* ea0e7e: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e80: /* ea0e80: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* ea0e82: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e84: /* ea0e84: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ea0e86: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e88: /* ea0e88: push 0x21 */
  { uint32_t v = 0x21u; esp -= 4; W32(esp, v); }
/* ea0e8a: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e8c: /* ea0e8c: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* ea0e8e: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e90: /* ea0e90: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* ea0e92: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e94: /* ea0e94: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* ea0e96: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e98: /* ea0e98: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* ea0e9a: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0e9c: /* ea0e9c: push 0x26 */
  { uint32_t v = 0x26u; esp -= 4; W32(esp, v); }
/* ea0e9e: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ea0: /* ea0ea0: push 0x27 */
  { uint32_t v = 0x27u; esp -= 4; W32(esp, v); }
/* ea0ea2: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ea4: /* ea0ea4: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* ea0ea6: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ea8: /* ea0ea8: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* ea0eaa: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0eac: /* ea0eac: push 0x2a */
  { uint32_t v = 0x2au; esp -= 4; W32(esp, v); }
/* ea0eae: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0eb0: /* ea0eb0: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* ea0eb2: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0eb4: /* ea0eb4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* ea0eb6: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0eb8: /* ea0eb8: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* ea0eba: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ebc: /* ea0ebc: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* ea0ebe: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ec0: /* ea0ec0: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* ea0ec2: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ec4: /* ea0ec4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* ea0ec6: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ec8: /* ea0ec8: push 0x31 */
  { uint32_t v = 0x31u; esp -= 4; W32(esp, v); }
/* ea0eca: jmp 0xea0ece */
  goto L_ea0ece;
L_ea0ecc: /* ea0ecc: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
L_ea0ece: /* ea0ece: mov ecx, dword ptr [0xebee90] */
  ecx = R32((uint32_t)(0xebee90u));
/* ea0ed4: call 0xea0357 */
  esp -= 4; W32(esp, 0xea0ed9u); SPILL(); f_ea0357(); if (g_unwind) return; RELOAD();
L_ea0ed9: /* ea0ed9: mov eax, dword ptr [0xebee7c] */
  eax = R32((uint32_t)(0xebee7cu));
/* ea0ede: movsx edx, word ptr [edi + 0xeba230] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edi + 0xeba230u)));
/* ea0ee5: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* ea0ee7: lea eax, [eax + esi*2] */
  eax = (uint32_t)(eax + esi*2);
/* ea0eea: mov dword ptr [0xebee7c], eax */
  W32((uint32_t)(0xebee7cu), eax);
/* ea0eef: movsx ecx, word ptr [eax] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax)));
/* ea0ef2: sub dword ptr [0xebee78], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee78u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xebee78u), r);
  }
/* ea0ef8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0efa: jne 0xea0f53 */
  if (!zf) goto L_ea0f53;
L_ea0efc: /* ea0efc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0efe: jne 0xea0f53 */
  if (!zf) goto L_ea0f53;
L_ea0f00: /* ea0f00: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0f01: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0f02: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ea0f04: mov dword ptr [0xebee7c], eax */
  W32((uint32_t)(0xebee7cu), eax);
/* ea0f09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea0f0a: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* ea0f0d: add dword ptr [0xebee78], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee78u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xebee78u), r);
  }
/* ea0f13: mov eax, dword ptr [0xebee74] */
  eax = R32((uint32_t)(0xebee74u));
/* ea0f18: mov ecx, dword ptr [0xebee78] */
  ecx = R32((uint32_t)(0xebee78u));
/* ea0f1e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ea0f20: mov eax, dword ptr [0xebee80] */
  eax = R32((uint32_t)(0xebee80u));
/* ea0f25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0f27: jge 0xea0f46 */
  if ((sf == of)) goto L_ea0f46;
L_ea0f29: /* ea0f29: mov ecx, dword ptr [0xebee90] */
  ecx = R32((uint32_t)(0xebee90u));
/* ea0f2f: call 0xe9fe3f */
  esp -= 4; W32(esp, 0xea0f34u); SPILL(); f_e9fe3f(); if (g_unwind) return; RELOAD();
/* ea0f34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0f36: mov dword ptr [0xebee80], eax */
  W32((uint32_t)(0xebee80u), eax);
/* ea0f3b: jge 0xea0f46 */
  if ((sf == of)) goto L_ea0f46;
L_ea0f3d: /* ea0f3d: xor eax, eax */
  eax = 0;
/* ea0f3f: mov dword ptr [0xebee80], eax */
  W32((uint32_t)(0xebee80u), eax);
/* ea0f44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_ea0f46: /* ea0f46: jne 0xea0cc6 */
  if (!zf) goto L_ea0cc6;
L_ea0f4c: /* ea0f4c: xor eax, eax */
  eax = 0;
/* ea0f4e: jmp 0xea107e */
  goto L_ea107e;
L_ea0f53: /* ea0f53: lea esi, [edx + edx] */
  esi = (uint32_t)(edx + edx);
/* ea0f56: movsx edx, word ptr [esi + 0xeba588] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi + 0xeba588u)));
/* ea0f5d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0f5f: je 0xea0f83 */
  if (zf) goto L_ea0f83;
L_ea0f61: /* ea0f61: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* ea0f63: js 0xea0f83 */
  if (sf) goto L_ea0f83;
L_ea0f65: /* ea0f65: cmp edx, 0x107 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x107u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea0f6b: jg 0xea0f83 */
  if ((!zf && sf == of)) goto L_ea0f83;
L_ea0f6d: /* ea0f6d: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ea0f6f: movsx edi, word ptr [edx + 0xeba7c8] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0xeba7c8u)));
/* ea0f76: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0f78: jne 0xea0f83 */
  if (!zf) goto L_ea0f83;
L_ea0f7a: /* ea0f7a: movsx esi, word ptr [edx + 0xeba5b8] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0xeba5b8u)));
/* ea0f81: jmp 0xea0f8a */
  goto L_ea0f8a;
L_ea0f83: /* ea0f83: movsx esi, word ptr [esi + 0xeba3c8] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi + 0xeba3c8u)));
L_ea0f8a: /* ea0f8a: cmp eax, 0xebee6e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xebee6eu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0f8f: jae 0xea1069 */
  if (!cf) goto L_ea1069;
L_ea0f95: /* ea0f95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0f96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0f97: mov dword ptr [0xebee7c], eax */
  W32((uint32_t)(0xebee7cu), eax);
/* ea0f9c: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* ea0f9f: mov eax, dword ptr [0xebee74] */
  eax = R32((uint32_t)(0xebee74u));
/* ea0fa4: jmp 0xea1048 */
  goto L_ea1048;
L_ea0fa9: /* ea0fa9: cmp dword ptr [0xebee84], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee84u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0fb0: jne 0xea0fcf */
  if (!zf) goto L_ea0fcf;
L_ea0fb2: /* ea0fb2: push 0xeb3628 */
  { uint32_t v = 0xeb3628u; esp -= 4; W32(esp, v); }
/* ea0fb7: push dword ptr [0xebee90] */
  { uint32_t v = R32((uint32_t)(0xebee90u)); esp -= 4; W32(esp, v); }
/* ea0fbd: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea0fc2u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea0fc2: inc dword ptr [0xebee88] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee88u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xebee88u), r);
  }
/* ea0fc8: mov eax, dword ptr [0xebee80] */
  eax = R32((uint32_t)(0xebee80u));
/* ea0fcd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0fce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea0fcf: /* ea0fcf: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ea0fd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0fd2: cmp dword ptr [0xebee84], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee84u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea0fd8: jge 0xea1060 */
  if ((sf == of)) goto L_ea1060;
L_ea0fde: /* ea0fde: mov dword ptr [0xebee84], ecx */
  W32((uint32_t)(0xebee84u), ecx);
/* ea0fe4: mov ecx, dword ptr [0xebee7c] */
  ecx = R32((uint32_t)(0xebee7cu));
/* ea0fea: mov edx, 0x100 */
  edx = 0x100u;
L_ea0fef: /* ea0fef: movsx eax, word ptr [ecx] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx)));
/* ea0ff2: movsx eax, word ptr [eax*2 + 0xeba3f8] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax*2 + 0xeba3f8u)));
/* ea0ffa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0ffc: je 0xea1010 */
  if (zf) goto L_ea1010;
L_ea0ffe: /* ea0ffe: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ea1000: js 0xea1010 */
  if (sf) goto L_ea1010;
L_ea1002: /* ea1002: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea1004: jg 0xea1010 */
  if ((!zf && sf == of)) goto L_ea1010;
L_ea1006: /* ea1006: cmp word ptr [eax*2 + 0xeba7c8], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax*2 + 0xeba7c8u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* ea100e: je 0xea1028 */
  if (zf) goto L_ea1028;
L_ea1010: /* ea1010: cmp ecx, 0xebea88 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xebea88u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea1016: jbe 0xea107b */
  if ((cf | zf)) goto L_ea107b;
L_ea1018: /* ea1018: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ea1019: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ea101a: sub dword ptr [0xebee78], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee78u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xebee78u), r);
  }
/* ea1020: mov dword ptr [0xebee7c], ecx */
  W32((uint32_t)(0xebee7cu), ecx);
/* ea1026: jmp 0xea0fef */
  goto L_ea0fef;
L_ea1028: /* ea1028: cmp ecx, 0xebee6e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xebee6eu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea102e: jae 0xea1069 */
  if (!cf) goto L_ea1069;
L_ea1030: /* ea1030: movsx esi, word ptr [eax*2 + 0xeba5b8] */
  esi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax*2 + 0xeba5b8u)));
/* ea1038: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ea1039: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ea103a: mov dword ptr [0xebee7c], ecx */
  W32((uint32_t)(0xebee7cu), ecx);
/* ea1040: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* ea1043: mov eax, dword ptr [0xebee70] */
  eax = R32((uint32_t)(0xebee70u));
L_ea1048: /* ea1048: add dword ptr [0xebee78], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebee78u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xebee78u), r);
  }
/* ea104e: mov ecx, dword ptr [0xebee78] */
  ecx = R32((uint32_t)(0xebee78u));
/* ea1054: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ea1056: mov eax, dword ptr [0xebee80] */
  eax = R32((uint32_t)(0xebee80u));
/* ea105b: jmp 0xea0cc6 */
  goto L_ea0cc6;
L_ea1060: /* ea1060: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea1062: je 0xea107b */
  if (zf) goto L_ea107b;
L_ea1064: /* ea1064: jmp 0xea0cbe */
  goto L_ea0cbe;
L_ea1069: /* ea1069: push 0xeb3aa8 */
  { uint32_t v = 0xeb3aa8u; esp -= 4; W32(esp, v); }
/* ea106e: push dword ptr [0xebee90] */
  { uint32_t v = R32((uint32_t)(0xebee90u)); esp -= 4; W32(esp, v); }
/* ea1074: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea1079u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea1079: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea107a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea107b: /* ea107b: xor eax, eax */
  eax = 0;
/* ea107d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_ea107e: /* ea107e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea107f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea1080: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea1081: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea1082: ret  */
  esp += 4; SPILL(); return;
}

void f_ea1147(void) {
  LOAD_REGS();
L_ea1147: /* ea1147: mov eax, 0xead360 */
  eax = 0xead360u;
/* ea114c: call 0xeac854 */
  esp -= 4; W32(esp, 0xea1151u); SPILL(); f_eac854(); if (g_unwind) return; RELOAD();
/* ea1151: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea1154: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* ea1157: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea1158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1159: xor esi, esi */
  esi = 0;
/* ea115b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea115d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea115e: mov ebx, ecx */
  ebx = ecx;
/* ea1160: je 0xea1164 */
  if (zf) goto L_ea1164;
L_ea1162: /* ea1162: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_ea1164: /* ea1164: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* ea1167: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1169: je 0xea116d */
  if (zf) goto L_ea116d;
L_ea116b: /* ea116b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_ea116d: /* ea116d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* ea1170: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1172: je 0xea1176 */
  if (zf) goto L_ea1176;
L_ea1174: /* ea1174: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_ea1176: /* ea1176: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea1179: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea117b: je 0xea15f4 */
  if (zf) goto L_ea15f4;
L_ea1181: /* ea1181: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ea1184: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1186: je 0xea15f4 */
  if (zf) goto L_ea15f4;
L_ea118c: /* ea118c: mov dword ptr [ebx + 0xb8], eax */
  W32((uint32_t)(ebx + 0xb8u), eax);
/* ea1192: mov dword ptr [ebx + 0xbc], eax */
  W32((uint32_t)(ebx + 0xbcu), eax);
/* ea1198: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea119e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea11a0: mov dword ptr [ebx + 0xc4], eax */
  W32((uint32_t)(ebx + 0xc4u), eax);
/* ea11a6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ea11a9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea11ab: jne 0xea11b0 */
  if (!zf) goto L_ea11b0;
L_ea11ad: /* ea11ad: xor eax, eax */
  eax = 0;
/* ea11af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_ea11b0: /* ea11b0: mov dword ptr [ebx + 0x1d0], eax */
  W32((uint32_t)(ebx + 0x1d0u), eax);
/* ea11b6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea11b9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea11bc: mov dword ptr [ebx + 0xb0], eax */
  W32((uint32_t)(ebx + 0xb0u), eax);
/* ea11c2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ea11c5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea11c7: mov dword ptr [ebx + 0x3d8], esi */
  W32((uint32_t)(ebx + 0x3d8u), esi);
/* ea11cd: mov dword ptr [ebx + 0x3dc], esi */
  W32((uint32_t)(ebx + 0x3dcu), esi);
/* ea11d3: mov dword ptr [ebx + 0x3e0], esi */
  W32((uint32_t)(ebx + 0x3e0u), esi);
/* ea11d9: mov dword ptr [ebx + 0x3e4], esi */
  W32((uint32_t)(ebx + 0x3e4u), esi);
/* ea11df: mov dword ptr [ebx + 0xac], esi */
  W32((uint32_t)(ebx + 0xacu), esi);
/* ea11e5: mov dword ptr [ebx + 0xb4], esi */
  W32((uint32_t)(ebx + 0xb4u), esi);
/* ea11eb: je 0xea1201 */
  if (zf) goto L_ea1201;
L_ea11ed: /* ea11ed: lea edx, [ebx + 0x1d4] */
  edx = (uint32_t)(ebx + 0x1d4u);
/* ea11f3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_ea11f5: /* ea11f5: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ea11f7: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* ea11fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea11fb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea11fd: jne 0xea11f5 */
  if (!zf) goto L_ea11f5;
L_ea11ff: /* ea11ff: jmp 0xea120f */
  goto L_ea120f;
L_ea1201: /* ea1201: and byte ptr [ebx + 0x1d4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1d4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebx + 0x1d4u), r);
  }
/* ea1208: mov ecx, ebx */
  ecx = ebx;
/* ea120a: call 0xe9fbf2 */
  esp -= 4; W32(esp, 0xea120fu); SPILL(); f_e9fbf2(); if (g_unwind) return; RELOAD();
L_ea120f: /* ea120f: and byte ptr [ebx + 0x2d8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x2d8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebx + 0x2d8u), r);
  }
/* ea1216: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1217: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ea1219: mov dword ptr [ebx + 0x2d4], esi */
  W32((uint32_t)(ebx + 0x2d4u), esi);
/* ea121f: call 0xeac8aa */
  esp -= 4; W32(esp, 0xea1224u); SPILL(); f_eac8aa(); if (g_unwind) return; RELOAD();
/* ea1224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1225: call 0xeac8a4 */
  esp -= 4; W32(esp, 0xea122au); SPILL(); f_eac8a4(); if (g_unwind) return; RELOAD();
/* ea122a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea122d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea122f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ea1232: je 0xea1246 */
  if (zf) goto L_ea1246;
L_ea1234: /* ea1234: mov esi, eax */
  esi = eax;
/* ea1236: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ea1238: mov edi, 0xeb3b68 */
  edi = 0xeb3b68u;
/* ea123d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea123e: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ea1240: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea1242: je 0xea1256 */
  if (zf) goto L_ea1256;
L_ea1244: /* ea1244: xor esi, esi */
  esi = 0;
L_ea1246: /* ea1246: push 0xeb3b68 */
  { uint32_t v = 0xeb3b68u; esp -= 4; W32(esp, v); }
/* ea124b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ea124d: call 0xeac8aa */
  esp -= 4; W32(esp, 0xea1252u); SPILL(); f_eac8aa(); if (g_unwind) return; RELOAD();
/* ea1252: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea1253: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea1254: jmp 0xea1258 */
  goto L_ea1258;
L_ea1256: /* ea1256: xor esi, esi */
  esi = 0;
L_ea1258: /* ea1258: call 0xea0c8e */
  esp -= 4; W32(esp, 0xea125du); SPILL(); f_ea0c8e(); if (g_unwind) return; RELOAD();
/* ea125d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea125f: je 0xea126b */
  if (zf) goto L_ea126b;
L_ea1261: /* ea1261: mov dword ptr [ebx + 0x98], 1 */
  W32((uint32_t)(ebx + 0x98u), 0x1u);
L_ea126b: /* ea126b: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea126e: je 0xea1298 */
  if (zf) goto L_ea1298;
L_ea1270: /* ea1270: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ea1273: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ea1275: mov edi, 0xeb3b68 */
  edi = 0xeb3b68u;
/* ea127a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea127b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ea127d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea127f: je 0xea128d */
  if (zf) goto L_ea128d;
L_ea1281: /* ea1281: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* ea1284: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ea1286: call 0xeac8aa */
  esp -= 4; W32(esp, 0xea128bu); SPILL(); f_eac8aa(); if (g_unwind) return; RELOAD();
/* ea128b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea128c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea128d: /* ea128d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* ea1290: call 0xeac89e */
  esp -= 4; W32(esp, 0xea1295u); SPILL(); f_eac89e(); if (g_unwind) return; RELOAD();
/* ea1295: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea1296: xor esi, esi */
  esi = 0;
L_ea1298: /* ea1298: cmp dword ptr [ebx + 0x98], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x98u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea129e: jne 0xea15c4 */
  if (!zf) goto L_ea15c4;
L_ea12a4: /* ea12a4: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea12a7: je 0xea1330 */
  if (zf) goto L_ea1330;
L_ea12ad: /* ea12ad: cmp dword ptr [ebx + 0xac], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xacu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea12b3: jne 0xea1330 */
  if (!zf) goto L_ea1330;
L_ea12b5: /* ea12b5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ea12b7: call 0xe9b060 */
  esp -= 4; W32(esp, 0xea12bcu); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* ea12bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea12bd: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ea12c0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea12c2: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* ea12c5: je 0xea12d2 */
  if (zf) goto L_ea12d2;
L_ea12c7: /* ea12c7: mov ecx, eax */
  ecx = eax;
/* ea12c9: call 0xea2349 */
  esp -= 4; W32(esp, 0xea12ceu); SPILL(); f_ea2349(); if (g_unwind) return; RELOAD();
/* ea12ce: mov edi, eax */
  edi = eax;
/* ea12d0: jmp 0xea12d4 */
  goto L_ea12d4;
L_ea12d2: /* ea12d2: xor edi, edi */
  edi = 0;
L_ea12d4: /* ea12d4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea12d8: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea12da: je 0xea13bc */
  if (zf) goto L_ea13bc;
L_ea12e0: /* ea12e0: push dword ptr [ebx + 0x9c] */
  { uint32_t v = R32((uint32_t)(ebx + 0x9cu)); esp -= 4; W32(esp, v); }
/* ea12e6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ea12e8: mov ecx, edi */
  ecx = edi;
/* ea12ea: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xea12edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea12ed: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ea12f0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea12f2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ea12f4: jge 0xea12ff */
  if ((sf == of)) goto L_ea12ff;
L_ea12f6: /* ea12f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ea12f8: mov ecx, edi */
  ecx = edi;
/* ea12fa: jmp 0xea13b9 */
  goto L_ea13b9;
L_ea12ff: /* ea12ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea1300: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xea1303u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea1303: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* ea1306: jmp 0xea1323 */
  goto L_ea1323;
L_ea1308: /* ea1308: add dword ptr [ebx + 0x9c], -4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x9cu))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x9cu), r);
  }
/* ea130f: mov eax, dword ptr [ebx + 0x9c] */
  eax = R32((uint32_t)(ebx + 0x9cu));
/* ea1315: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ea1318: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea131a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea131b: lea ecx, [ebx + 0x64] */
  ecx = (uint32_t)(ebx + 0x64u);
/* ea131e: call 0xea204f */
  esp -= 4; W32(esp, 0xea1323u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
L_ea1323: /* ea1323: cmp dword ptr [ebx + 0x9c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x9cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1329: jne 0xea1308 */
  if (!zf) goto L_ea1308;
L_ea132b: /* ea132b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* ea132e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_ea1330: /* ea1330: cmp dword ptr [ebx + 0x98], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x98u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1336: jne 0xea15c4 */
  if (!zf) goto L_ea15c4;
L_ea133c: /* ea133c: cmp dword ptr [ebp + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea133f: je 0xea144d */
  if (zf) goto L_ea144d;
L_ea1345: /* ea1345: mov eax, dword ptr [ebx + 0xa0] */
  eax = R32((uint32_t)(ebx + 0xa0u));
/* ea134b: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* ea134d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* ea1350: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea1353: cmp dword ptr [ebx + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea135a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea135b: mov esi, 0xeb3b44 */
  esi = 0xeb3b44u;
/* ea1360: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* ea1363: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea1365: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* ea1368: je 0xea1373 */
  if (zf) goto L_ea1373;
L_ea136a: /* ea136a: add eax, dword ptr [ebx + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x9cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea1370: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_ea1373: /* ea1373: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ea1375: call 0xe9b060 */
  esp -= 4; W32(esp, 0xea137au); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* ea137a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea137b: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ea137e: xor edi, edi */
  edi = 0;
/* ea1380: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ea1381: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea1383: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ea1386: je 0xea1393 */
  if (zf) goto L_ea1393;
L_ea1388: /* ea1388: mov ecx, eax */
  ecx = eax;
/* ea138a: call 0xea2349 */
  esp -= 4; W32(esp, 0xea138fu); SPILL(); f_ea2349(); if (g_unwind) return; RELOAD();
/* ea138f: mov esi, eax */
  esi = eax;
/* ea1391: jmp 0xea1395 */
  goto L_ea1395;
L_ea1393: /* ea1393: xor esi, esi */
  esi = 0;
L_ea1395: /* ea1395: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea1399: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea139b: mov dword ptr [ebp + 0x14], esi */
  W32((uint32_t)(ebp + 0x14u), esi);
/* ea139e: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* ea13a1: je 0xea13bc */
  if (zf) goto L_ea13bc;
L_ea13a3: /* ea13a3: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* ea13a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ea13a8: mov ecx, esi */
  ecx = esi;
/* ea13aa: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xea13adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea13ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea13af: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ea13b2: jge 0xea13c6 */
  if ((sf == of)) goto L_ea13c6;
L_ea13b4: /* ea13b4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ea13b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea13b7: mov ecx, esi */
  ecx = esi;
L_ea13b9: /* ea13b9: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xea13bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ea13bc: /* ea13bc: mov eax, 0x8007000e */
  eax = 0x8007000eu;
/* ea13c1: jmp 0xea15f9 */
  goto L_ea15f9;
L_ea13c6: /* ea13c6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ea13c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ea13cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea13cc: call dword ptr [ecx + 0xc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, 0xea13cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea13cf: mov edx, eax */
  edx = eax;
/* ea13d1: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* ea13d7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ea13d9: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* ea13db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea13dc: xor eax, eax */
  eax = 0;
/* ea13de: mov dword ptr [edx + 4], 0x9fffe */
  W32((uint32_t)(edx + 0x4u), 0x9fffeu);
/* ea13e5: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
/* ea13e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ea13ea: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* ea13ed: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* ea13ef: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
/* ea13f2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ea13f4: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea13f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea13f9: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* ea13fc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea13fe: mov dword ptr [edx - 4], 0xffff */
  W32((uint32_t)(edx + 0xfffffffcu), 0xffffu);
/* ea1405: lea edi, [edx - 8] */
  edi = (uint32_t)(edx + 0xfffffff8u);
/* ea1408: je 0xea141e */
  if (zf) goto L_ea141e;
L_ea140a: /* ea140a: lea esi, [ebx + 0x74] */
  esi = (uint32_t)(ebx + 0x74u);
L_ea140d: /* ea140d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea140e: mov ecx, esi */
  ecx = esi;
/* ea1410: call 0xea204f */
  esp -= 4; W32(esp, 0xea1415u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea1415: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ea1418: sub dword ptr [ebp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* ea141c: jne 0xea140d */
  if (!zf) goto L_ea140d;
L_ea141e: /* ea141e: cmp dword ptr [ebx + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1425: je 0xea1443 */
  if (zf) goto L_ea1443;
L_ea1427: /* ea1427: lea esi, [ebx + 0x9c] */
  esi = (uint32_t)(ebx + 0x9cu);
/* ea142d: jmp 0xea143e */
  goto L_ea143e;
L_ea142f: /* ea142f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea1430: lea ecx, [ebx + 0x64] */
  ecx = (uint32_t)(ebx + 0x64u);
/* ea1433: call 0xea204f */
  esp -= 4; W32(esp, 0xea1438u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea1438: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ea143b: add dword ptr [esi], -4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
L_ea143e: /* ea143e: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1441: jne 0xea142f */
  if (!zf) goto L_ea142f;
L_ea1443: /* ea1443: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ea1446: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* ea1449: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ea144b: xor esi, esi */
  esi = 0;
L_ea144d: /* ea144d: cmp dword ptr [ebx + 0x98], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x98u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1453: jne 0xea15c4 */
  if (!zf) goto L_ea15c4;
L_ea1459: /* ea1459: test byte ptr [ebp + 0x18], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x18u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea145d: jne 0xea15c4 */
  if (!zf) goto L_ea15c4;
L_ea1463: /* ea1463: cmp dword ptr [ebx + 0xa0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1469: je 0xea15b7 */
  if (zf) goto L_ea15b7;
L_ea146f: /* ea146f: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* ea1472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1473: push 0xeb3b28 */
  { uint32_t v = 0xeb3b28u; esp -= 4; W32(esp, v); }
/* ea1478: push 0x80000002 */
  { uint32_t v = 0x80000002u; esp -= 4; W32(esp, v); }
/* ea147d: xor edi, edi */
  edi = 0;
/* ea147f: call dword ptr [0xeae004] */
  esp -= 4; W32(esp, 0xea1485u); SPILL(); call_ind(R32(0xeae004u)); if (g_unwind) return; /* ADVAPI32!RegOpenKeyA */ RELOAD();
/* ea1485: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea1487: jne 0xea14eb */
  if (!zf) goto L_ea14eb;
L_ea1489: /* ea1489: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* ea148c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea148d: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* ea1490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1491: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* ea1494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1496: push 0xeb3b14 */
  { uint32_t v = 0xeb3b14u; esp -= 4; W32(esp, v); }
/* ea149b: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* ea149e: mov dword ptr [ebp + 0x1c], 4 */
  W32((uint32_t)(ebp + 0x1cu), 0x4u);
/* ea14a5: call dword ptr [0xeae000] */
  esp -= 4; W32(esp, 0xea14abu); SPILL(); call_ind(R32(0xeae000u)); if (g_unwind) return; /* ADVAPI32!RegQueryValueExA */ RELOAD();
/* ea14ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea14ad: jne 0xea14c3 */
  if (!zf) goto L_ea14c3;
L_ea14af: /* ea14af: cmp dword ptr [ebp + 0x18], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea14b3: jne 0xea14c3 */
  if (!zf) goto L_ea14c3;
L_ea14b5: /* ea14b5: cmp dword ptr [ebp + 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea14b9: jne 0xea14c3 */
  if (!zf) goto L_ea14c3;
L_ea14bb: /* ea14bb: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea14be: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ea14c1: mov edi, eax */
  edi = eax;
L_ea14c3: /* ea14c3: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* ea14c6: call dword ptr [0xeae008] */
  esp -= 4; W32(esp, 0xea14ccu); SPILL(); call_ind(R32(0xeae008u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
/* ea14cc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea14ce: je 0xea14eb */
  if (zf) goto L_ea14eb;
L_ea14d0: /* ea14d0: mov edi, 0xeb3b08 */
  edi = 0xeb3b08u;
/* ea14d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea14d6: call dword ptr [0xeae2f0] */
  esp -= 4; W32(esp, 0xea14dcu); SPILL(); call_ind(R32(0xeae2f0u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* ea14dc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea14de: jne 0xea150a */
  if (!zf) goto L_ea150a;
L_ea14e0: /* ea14e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea14e1: call dword ptr [0xeae2ec] */
  esp -= 4; W32(esp, 0xea14e7u); SPILL(); call_ind(R32(0xeae2ecu)); if (g_unwind) return; /* KERNEL32!LoadLibraryA */ RELOAD();
/* ea14e7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea14e9: jne 0xea150a */
  if (!zf) goto L_ea150a;
L_ea14eb: /* ea14eb: mov edi, 0xeb3afc */
  edi = 0xeb3afcu;
/* ea14f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea14f1: call dword ptr [0xeae2f0] */
  esp -= 4; W32(esp, 0xea14f7u); SPILL(); call_ind(R32(0xeae2f0u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* ea14f7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea14f9: jne 0xea150a */
  if (!zf) goto L_ea150a;
L_ea14fb: /* ea14fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea14fc: call dword ptr [0xeae2ec] */
  esp -= 4; W32(esp, 0xea1502u); SPILL(); call_ind(R32(0xeae2ecu)); if (g_unwind) return; /* KERNEL32!LoadLibraryA */ RELOAD();
/* ea1502: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1504: je 0xea15c4 */
  if (zf) goto L_ea15c4;
L_ea150a: /* ea150a: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* ea150d: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edi = r;
  }
/* ea150f: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* ea1511: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* ea1514: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ea1516: xor ecx, ecx */
  ecx = 0;
/* ea1518: cmp dword ptr [ebp + 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea151b: mov dword ptr [ebp + 0x1c], esi */
  W32((uint32_t)(ebp + 0x1cu), esi);
/* ea151e: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ea1521: cmp dword ptr [ebx + 0xac], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xacu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1527: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* ea152a: je 0xea1553 */
  if (zf) goto L_ea1553;
L_ea152c: /* ea152c: push 0xeb3ae8 */
  { uint32_t v = 0xeb3ae8u; esp -= 4; W32(esp, v); }
/* ea1531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1532: call dword ptr [0xeae2f4] */
  esp -= 4; W32(esp, 0xea1538u); SPILL(); call_ind(R32(0xeae2f4u)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* ea1538: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea153a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* ea153d: je 0xea157c */
  if (zf) goto L_ea157c;
L_ea153f: /* ea153f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ea1542: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ea1544: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea1545: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* ea1548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea154a: call dword ptr [ecx + 0xc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, 0xea154du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea154d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea154e: call dword ptr [ebp + 0xc] */
  { uint32_t t = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, 0xea1551u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea1551: jmp 0xea1579 */
  goto L_ea1579;
L_ea1553: /* ea1553: push 0xeb3ad0 */
  { uint32_t v = 0xeb3ad0u; esp -= 4; W32(esp, v); }
/* ea1558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1559: call dword ptr [0xeae2f4] */
  esp -= 4; W32(esp, 0xea155fu); SPILL(); call_ind(R32(0xeae2f4u)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* ea155f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1561: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* ea1564: je 0xea157c */
  if (zf) goto L_ea157c;
L_ea1566: /* ea1566: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ea1569: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ea156b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea156c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* ea156f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1571: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1572: call dword ptr [ecx + 0xc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, 0xea1575u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea1575: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1576: call dword ptr [ebp + 0xc] */
  { uint32_t t = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, 0xea1579u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ea1579: /* ea1579: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ea157c: /* ea157c: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea157f: jge 0xea158b */
  if ((sf == of)) goto L_ea158b;
L_ea1581: /* ea1581: mov dword ptr [ebx + 0x98], 1 */
  W32((uint32_t)(ebx + 0x98u), 0x1u);
L_ea158b: /* ea158b: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea158e: je 0xea15c4 */
  if (zf) goto L_ea15c4;
L_ea1590: /* ea1590: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* ea1593: lea ecx, [ebx + 0x84] */
  ecx = (uint32_t)(ebx + 0x84u);
/* ea1599: call 0xea20c7 */
  esp -= 4; W32(esp, 0xea159eu); SPILL(); f_ea20c7(); if (g_unwind) return; RELOAD();
/* ea159e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* ea15a1: inc dword ptr [ebx + 0xa4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0xa4u), r);
  }
/* ea15a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea15a8: call dword ptr [0xeae2f8] */
  esp -= 4; W32(esp, 0xea15aeu); SPILL(); call_ind(R32(0xeae2f8u)); if (g_unwind) return; /* KERNEL32!GetProcessHeap */ RELOAD();
/* ea15ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea15af: call dword ptr [0xeae2fc] */
  esp -= 4; W32(esp, 0xea15b5u); SPILL(); call_ind(R32(0xeae2fcu)); if (g_unwind) return; /* KERNEL32!HeapFree */ RELOAD();
/* ea15b5: jmp 0xea15c4 */
  goto L_ea15c4;
L_ea15b7: /* ea15b7: push 0xeb3abc */
  { uint32_t v = 0xeb3abcu; esp -= 4; W32(esp, v); }
/* ea15bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea15bd: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea15c2u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea15c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea15c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea15c4: /* ea15c4: cmp dword ptr [ebx + 0xa4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea15ca: je 0xea15e3 */
  if (zf) goto L_ea15e3;
L_ea15cc: /* ea15cc: cmp dword ptr [ebp + 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea15cf: je 0xea15e3 */
  if (zf) goto L_ea15e3;
L_ea15d1: /* ea15d1: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* ea15d4: lea ecx, [ebx + 0x84] */
  ecx = (uint32_t)(ebx + 0x84u);
/* ea15da: call 0xea2182 */
  esp -= 4; W32(esp, 0xea15dfu); SPILL(); f_ea2182(); if (g_unwind) return; RELOAD();
/* ea15df: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea15e1: jl 0xea15f9 */
  if ((sf != of)) goto L_ea15f9;
L_ea15e3: /* ea15e3: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* ea15e9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* ea15eb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* ea15ed: and eax, 0x88760b59 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760b59u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea15f2: jmp 0xea15f9 */
  goto L_ea15f9;
L_ea15f4: /* ea15f4: mov eax, 0x8876086c */
  eax = 0x8876086cu;
L_ea15f9: /* ea15f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ea15fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea15fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea15fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea15ff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ea1606: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea1607: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_ea1610(void) {
  LOAD_REGS();
L_ea1610: /* ea1610: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1614: mov dword ptr [eax + 0x70], 0xea36f0 */
  W32((uint32_t)(eax + 0x70u), 0xea36f0u);
/* ea161b: mov dword ptr [eax], 0xea2370 */
  W32((uint32_t)(eax), 0xea2370u);
/* ea1621: mov dword ptr [eax + 0x34], 0xea3470 */
  W32((uint32_t)(eax + 0x34u), 0xea3470u);
/* ea1628: mov dword ptr [eax + 0x6c], 0xea3560 */
  W32((uint32_t)(eax + 0x6cu), 0xea3560u);
/* ea162f: mov dword ptr [eax + 0x2c], 0xea33a0 */
  W32((uint32_t)(eax + 0x2cu), 0xea33a0u);
/* ea1636: mov dword ptr [eax + 0xc0], 0xea3280 */
  W32((uint32_t)(eax + 0xc0u), 0xea3280u);
/* ea1640: mov dword ptr [eax + 0xbc], 0xea2ea0 */
  W32((uint32_t)(eax + 0xbcu), 0xea2ea0u);
/* ea164a: mov dword ptr [eax + 0x44], 0xea3140 */
  W32((uint32_t)(eax + 0x44u), 0xea3140u);
/* ea1651: mov dword ptr [eax + 0xd8], 0xea3230 */
  W32((uint32_t)(eax + 0xd8u), 0xea3230u);
/* ea165b: mov dword ptr [eax + 0xd4], 0xea2f30 */
  W32((uint32_t)(eax + 0xd4u), 0xea2f30u);
/* ea1665: mov dword ptr [eax + 0xd0], 0xea30a0 */
  W32((uint32_t)(eax + 0xd0u), 0xea30a0u);
/* ea166f: mov dword ptr [eax + 0xcc], 0xea31d0 */
  W32((uint32_t)(eax + 0xccu), 0xea31d0u);
/* ea1679: mov dword ptr [eax + 0xc8], 0xea2de0 */
  W32((uint32_t)(eax + 0xc8u), 0xea2de0u);
/* ea1683: mov dword ptr [eax + 0xc4], 0xea2fe0 */
  W32((uint32_t)(eax + 0xc4u), 0xea2fe0u);
/* ea168d: mov dword ptr [eax + 0x48], 0xea29d0 */
  W32((uint32_t)(eax + 0x48u), 0xea29d0u);
/* ea1694: mov dword ptr [eax + 0x58], 0xea32e0 */
  W32((uint32_t)(eax + 0x58u), 0xea32e0u);
/* ea169b: mov dword ptr [eax + 0x64], 0xea3a90 */
  W32((uint32_t)(eax + 0x64u), 0xea3a90u);
/* ea16a2: mov dword ptr [eax + 0x60], 0xea3970 */
  W32((uint32_t)(eax + 0x60u), 0xea3970u);
/* ea16a9: mov dword ptr [eax + 0x4c], 0xea37d0 */
  W32((uint32_t)(eax + 0x4cu), 0xea37d0u);
/* ea16b0: mov dword ptr [eax + 0xb0], 0xea3900 */
  W32((uint32_t)(eax + 0xb0u), 0xea3900u);
/* ea16ba: mov dword ptr [eax + 0x50], 0xea3860 */
  W32((uint32_t)(eax + 0x50u), 0xea3860u);
/* ea16c1: mov dword ptr [eax + 0x40], 0xea2c90 */
  W32((uint32_t)(eax + 0x40u), 0xea2c90u);
/* ea16c8: mov dword ptr [eax + 0x54], 0xea28f0 */
  W32((uint32_t)(eax + 0x54u), 0xea28f0u);
/* ea16cf: mov dword ptr [eax + 0x20], 0xea2d40 */
  W32((uint32_t)(eax + 0x20u), 0xea2d40u);
/* ea16d6: mov dword ptr [eax + 0x1c], 0xea2820 */
  W32((uint32_t)(eax + 0x1cu), 0xea2820u);
/* ea16dd: mov dword ptr [eax + 0x28], 0xea2510 */
  W32((uint32_t)(eax + 0x28u), 0xea2510u);
/* ea16e4: mov dword ptr [eax + 0x24], 0xea23b0 */
  W32((uint32_t)(eax + 0x24u), 0xea23b0u);
/* ea16eb: mov dword ptr [eax + 0x18], 0xea3b60 */
  W32((uint32_t)(eax + 0x18u), 0xea3b60u);
/* ea16f2: mov dword ptr [eax + 0x14], 0xea2410 */
  W32((uint32_t)(eax + 0x14u), 0xea2410u);
/* ea16f9: mov dword ptr [eax + 0x10], 0xea3dd0 */
  W32((uint32_t)(eax + 0x10u), 0xea3dd0u);
/* ea1700: mov dword ptr [eax + 0xc], 0xea26d0 */
  W32((uint32_t)(eax + 0xcu), 0xea26d0u);
/* ea1707: mov dword ptr [eax + 8], 0xea2610 */
  W32((uint32_t)(eax + 0x8u), 0xea2610u);
/* ea170e: mov dword ptr [eax + 4], 0xea2450 */
  W32((uint32_t)(eax + 0x4u), 0xea2450u);
/* ea1715: ret  */
  esp += 4; SPILL(); return;
}

void f_ea1716(void) {
  LOAD_REGS();
L_ea1716: /* ea1716: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea1719: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea1720(); return;
}

void f_ea1720(void) {
  LOAD_REGS();
L_ea1720: /* ea1720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1724: mov dword ptr [eax + 0x70], 0xea4370 */
  W32((uint32_t)(eax + 0x70u), 0xea4370u);
/* ea172b: mov dword ptr [eax], 0xea2370 */
  W32((uint32_t)(eax), 0xea2370u);
/* ea1731: mov dword ptr [eax + 0x34], 0xea40f0 */
  W32((uint32_t)(eax + 0x34u), 0xea40f0u);
/* ea1738: mov dword ptr [eax + 0x6c], 0xea41e0 */
  W32((uint32_t)(eax + 0x6cu), 0xea41e0u);
/* ea173f: mov dword ptr [eax + 0x2c], 0xea33a0 */
  W32((uint32_t)(eax + 0x2cu), 0xea33a0u);
/* ea1746: mov dword ptr [eax + 0xc0], 0xea3280 */
  W32((uint32_t)(eax + 0xc0u), 0xea3280u);
/* ea1750: mov dword ptr [eax + 0xbc], 0xea2ea0 */
  W32((uint32_t)(eax + 0xbcu), 0xea2ea0u);
/* ea175a: mov dword ptr [eax + 0x44], 0xea3140 */
  W32((uint32_t)(eax + 0x44u), 0xea3140u);
/* ea1761: mov dword ptr [eax + 0xd8], 0xea3230 */
  W32((uint32_t)(eax + 0xd8u), 0xea3230u);
/* ea176b: mov dword ptr [eax + 0xd4], 0xea2f30 */
  W32((uint32_t)(eax + 0xd4u), 0xea2f30u);
/* ea1775: mov dword ptr [eax + 0xd0], 0xea30a0 */
  W32((uint32_t)(eax + 0xd0u), 0xea30a0u);
/* ea177f: mov dword ptr [eax + 0xcc], 0xea31d0 */
  W32((uint32_t)(eax + 0xccu), 0xea31d0u);
/* ea1789: mov dword ptr [eax + 0xc8], 0xea2de0 */
  W32((uint32_t)(eax + 0xc8u), 0xea2de0u);
/* ea1793: mov dword ptr [eax + 0xc4], 0xea2fe0 */
  W32((uint32_t)(eax + 0xc4u), 0xea2fe0u);
/* ea179d: mov dword ptr [eax + 0x48], 0xea29d0 */
  W32((uint32_t)(eax + 0x48u), 0xea29d0u);
/* ea17a4: mov dword ptr [eax + 0x58], 0xea32e0 */
  W32((uint32_t)(eax + 0x58u), 0xea32e0u);
/* ea17ab: mov dword ptr [eax + 0x64], 0xea4570 */
  W32((uint32_t)(eax + 0x64u), 0xea4570u);
/* ea17b2: mov dword ptr [eax + 0x60], 0xea4450 */
  W32((uint32_t)(eax + 0x60u), 0xea4450u);
/* ea17b9: mov dword ptr [eax + 0x7c], 0xea4060 */
  W32((uint32_t)(eax + 0x7cu), 0xea4060u);
/* ea17c0: mov dword ptr [eax + 0x78], 0xea3fe0 */
  W32((uint32_t)(eax + 0x78u), 0xea3fe0u);
/* ea17c7: mov dword ptr [eax + 0x4c], 0xea37d0 */
  W32((uint32_t)(eax + 0x4cu), 0xea37d0u);
/* ea17ce: mov dword ptr [eax + 0x50], 0xea3860 */
  W32((uint32_t)(eax + 0x50u), 0xea3860u);
/* ea17d5: mov dword ptr [eax + 0x40], 0xea3f30 */
  W32((uint32_t)(eax + 0x40u), 0xea3f30u);
/* ea17dc: mov dword ptr [eax + 0x54], 0xea3cf0 */
  W32((uint32_t)(eax + 0x54u), 0xea3cf0u);
/* ea17e3: mov dword ptr [eax + 0x20], 0xea2d40 */
  W32((uint32_t)(eax + 0x20u), 0xea2d40u);
/* ea17ea: mov dword ptr [eax + 0x1c], 0xea3c20 */
  W32((uint32_t)(eax + 0x1cu), 0xea3c20u);
/* ea17f1: mov dword ptr [eax + 0x28], 0xea2510 */
  W32((uint32_t)(eax + 0x28u), 0xea2510u);
/* ea17f8: mov dword ptr [eax + 0x24], 0xea23b0 */
  W32((uint32_t)(eax + 0x24u), 0xea23b0u);
/* ea17ff: mov dword ptr [eax + 0x18], 0xea3b60 */
  W32((uint32_t)(eax + 0x18u), 0xea3b60u);
/* ea1806: mov dword ptr [eax + 0x14], 0xea2410 */
  W32((uint32_t)(eax + 0x14u), 0xea2410u);
/* ea180d: mov dword ptr [eax + 0x10], 0xea3dd0 */
  W32((uint32_t)(eax + 0x10u), 0xea3dd0u);
/* ea1814: mov dword ptr [eax + 0xc], 0xea26d0 */
  W32((uint32_t)(eax + 0xcu), 0xea26d0u);
/* ea181b: mov dword ptr [eax + 8], 0xea2610 */
  W32((uint32_t)(eax + 0x8u), 0xea2610u);
/* ea1822: mov dword ptr [eax + 4], 0xea2450 */
  W32((uint32_t)(eax + 0x4u), 0xea2450u);
/* ea1829: ret  */
  esp += 4; SPILL(); return;
}

void f_ea182a(void) {
  LOAD_REGS();
L_ea182a: /* ea182a: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea1830(); return;
}

void f_ea1830(void) {
  LOAD_REGS();
L_ea1830: /* ea1830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea1831: mov ebp, esp */
  ebp = esp;
/* ea1833: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea1836: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea1837: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1838: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea1839: mov esi, 0xeb3cb0 */
  esi = 0xeb3cb0u;
/* ea183e: lea edi, [ebp - 0x18] */
  edi = (uint32_t)(ebp + 0xffffffe8u);
/* ea1841: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* ea1842: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* ea1843: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* ea1844: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* ea1845: mov esi, 0xeb3ca0 */
  esi = 0xeb3ca0u;
/* ea184a: lea edi, [ebp - 0x28] */
  edi = (uint32_t)(ebp + 0xffffffd8u);
/* ea184d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* ea184e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* ea184f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* ea1850: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* ea1851: xor eax, eax */
  eax = 0;
/* ea1853: xor ebx, ebx */
  ebx = 0;
/* ea1855: xor ecx, ecx */
  ecx = 0;
/* ea1857: xor edx, edx */
  edx = 0;
/* ea1859: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* ea185b: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* ea1862: xor eax, eax */
  eax = 0;
/* ea1864: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* ea1866: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* ea1869: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ea186c: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* ea186f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea1871: je 0xea18fd */
  if (zf) goto L_ea18fd;
L_ea1877: /* ea1877: or dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea187b: mov eax, 1 */
  eax = 0x1u;
/* ea1880: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* ea1882: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* ea1885: mov ecx, 0x800000 */
  ecx = 0x800000u;
/* ea188a: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea188c: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* ea188e: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* ea1890: and ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea1893: or dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea1896: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* ea189b: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* ea189d: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea18a2: jbe 0xea18fd */
  if ((cf | zf)) goto L_ea18fd;
L_ea18a4: /* ea18a4: or dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea18a8: mov eax, 0x80000001 */
  eax = 0x80000001u;
/* ea18ad: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* ea18af: mov ecx, 0x80000000 */
  ecx = 0x80000000u;
/* ea18b4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea18b6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* ea18b8: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* ea18ba: and ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea18c0: or dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea18c3: lea esi, [ebp - 0x28] */
  esi = (uint32_t)(ebp + 0xffffffd8u);
/* ea18c6: lea edi, [ebp - 0x18] */
  edi = (uint32_t)(ebp + 0xffffffe8u);
/* ea18c9: mov ecx, 0xc */
  ecx = 0xcu;
/* ea18ce: cld  */
  DF = 0;
/* ea18cf: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea18d1: jne 0xea18fd */
  if (!zf) goto L_ea18fd;
L_ea18d3: /* ea18d3: mov ecx, 0x40000000 */
  ecx = 0x40000000u;
/* ea18d8: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea18da: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* ea18dc: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* ea18de: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea18e4: or dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea18e7: mov ecx, 0x400000 */
  ecx = 0x400000u;
/* ea18ec: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea18ee: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* ea18f0: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* ea18f2: and ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea18f8: or dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea18fb: jmp 0xea18fd */
  goto L_ea18fd;
L_ea18fd: /* ea18fd: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea1900: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea1901: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea1902: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea1903: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea1904: ret  */
  esp += 4; SPILL(); return;
}

void f_ea1905(void) {
  LOAD_REGS();
L_ea1905: /* ea1905: call 0xea1830 */
  esp -= 4; W32(esp, 0xea190au); SPILL(); f_ea1830(); if (g_unwind) return; RELOAD();
/* ea190a: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea190c: je 0xea1b2a */
  if (zf) goto L_ea1b2a;
L_ea1912: /* ea1912: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* ea1914: jns 0xea1b2a */
  if (!sf) goto L_ea1b2a;
L_ea191a: /* ea191a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea191d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea1921: mov dword ptr [ecx], 0xeaa418 */
  W32((uint32_t)(ecx), 0xeaa418u);
/* ea1927: mov dword ptr [ecx + 4], 0xea995a */
  W32((uint32_t)(ecx + 0x4u), 0xea995au);
/* ea192e: mov dword ptr [ecx + 8], 0xeaa6d9 */
  W32((uint32_t)(ecx + 0x8u), 0xeaa6d9u);
/* ea1935: mov dword ptr [ecx + 0xc], 0xea5baa */
  W32((uint32_t)(ecx + 0xcu), 0xea5baau);
/* ea193c: mov dword ptr [ecx + 0x14], 0xeaa46d */
  W32((uint32_t)(ecx + 0x14u), 0xeaa46du);
/* ea1943: mov dword ptr [ecx + 0x18], 0xea99cb */
  W32((uint32_t)(ecx + 0x18u), 0xea99cbu);
/* ea194a: mov dword ptr [ecx + 0x1c], 0xea9a32 */
  W32((uint32_t)(ecx + 0x1cu), 0xea9a32u);
/* ea1951: mov dword ptr [ecx + 0x20], 0xeaa75b */
  W32((uint32_t)(ecx + 0x20u), 0xeaa75bu);
/* ea1958: mov dword ptr [ecx + 0x24], 0xeaa4a6 */
  W32((uint32_t)(ecx + 0x24u), 0xeaa4a6u);
/* ea195f: mov dword ptr [ecx + 0x28], 0xea9f12 */
  W32((uint32_t)(ecx + 0x28u), 0xea9f12u);
/* ea1966: mov dword ptr [ecx + 0x2c], 0xea5ddc */
  W32((uint32_t)(ecx + 0x2cu), 0xea5ddcu);
/* ea196d: mov dword ptr [ecx + 0x30], 0xeaab03 */
  W32((uint32_t)(ecx + 0x30u), 0xeaab03u);
/* ea1974: mov dword ptr [ecx + 0x34], 0xeaab46 */
  W32((uint32_t)(ecx + 0x34u), 0xeaab46u);
/* ea197b: mov dword ptr [ecx + 0x38], 0xea9f17 */
  W32((uint32_t)(ecx + 0x38u), 0xea9f17u);
/* ea1982: mov dword ptr [ecx + 0x3c], 0xeaa09f */
  W32((uint32_t)(ecx + 0x3cu), 0xeaa09fu);
/* ea1989: mov dword ptr [ecx + 0x40], 0xeaa7ba */
  W32((uint32_t)(ecx + 0x40u), 0xeaa7bau);
/* ea1990: mov dword ptr [ecx + 0x44], 0xeaa50a */
  W32((uint32_t)(ecx + 0x44u), 0xeaa50au);
/* ea1997: mov dword ptr [ecx + 0x48], 0xea993e */
  W32((uint32_t)(ecx + 0x48u), 0xea993eu);
/* ea199e: mov dword ptr [ecx + 0x4c], 0xea4640 */
  W32((uint32_t)(ecx + 0x4cu), 0xea4640u);
/* ea19a5: mov dword ptr [ecx + 0x50], 0xea46d9 */
  W32((uint32_t)(ecx + 0x50u), 0xea46d9u);
/* ea19ac: mov dword ptr [ecx + 0x54], 0xeaace8 */
  W32((uint32_t)(ecx + 0x54u), 0xeaace8u);
/* ea19b3: mov dword ptr [ecx + 0x58], 0xeaac2a */
  W32((uint32_t)(ecx + 0x58u), 0xeaac2au);
/* ea19ba: mov dword ptr [ecx + 0x5c], 0xea4736 */
  W32((uint32_t)(ecx + 0x5cu), 0xea4736u);
/* ea19c1: mov dword ptr [ecx + 0x60], 0xea47e9 */
  W32((uint32_t)(ecx + 0x60u), 0xea47e9u);
/* ea19c8: mov dword ptr [ecx + 0x64], 0xea4c1a */
  W32((uint32_t)(ecx + 0x64u), 0xea4c1au);
/* ea19cf: mov dword ptr [ecx + 0x68], 0xea5eab */
  W32((uint32_t)(ecx + 0x68u), 0xea5eabu);
/* ea19d6: mov dword ptr [ecx + 0x6c], 0xea5efb */
  W32((uint32_t)(ecx + 0x6cu), 0xea5efbu);
/* ea19dd: mov dword ptr [ecx + 0x70], 0xea5fe6 */
  W32((uint32_t)(ecx + 0x70u), 0xea5fe6u);
/* ea19e4: mov dword ptr [ecx + 0x74], 0xea4cdf */
  W32((uint32_t)(ecx + 0x74u), 0xea4cdfu);
/* ea19eb: mov dword ptr [ecx + 0x78], 0xea60c2 */
  W32((uint32_t)(ecx + 0x78u), 0xea60c2u);
/* ea19f2: mov dword ptr [ecx + 0x7c], 0xea6125 */
  W32((uint32_t)(ecx + 0x7cu), 0xea6125u);
/* ea19f9: mov dword ptr [ecx + 0x80], 0xea6183 */
  W32((uint32_t)(ecx + 0x80u), 0xea6183u);
/* ea1a03: mov dword ptr [ecx + 0x84], 0xea61dc */
  W32((uint32_t)(ecx + 0x84u), 0xea61dcu);
/* ea1a0d: mov dword ptr [ecx + 0x88], 0xeaad4c */
  W32((uint32_t)(ecx + 0x88u), 0xeaad4cu);
/* ea1a17: mov dword ptr [ecx + 0x8c], 0xea4d4b */
  W32((uint32_t)(ecx + 0x8cu), 0xea4d4bu);
/* ea1a21: mov dword ptr [ecx + 0x90], 0xea4e82 */
  W32((uint32_t)(ecx + 0x90u), 0xea4e82u);
/* ea1a2b: mov dword ptr [ecx + 0x94], 0xea6223 */
  W32((uint32_t)(ecx + 0x94u), 0xea6223u);
/* ea1a35: mov dword ptr [ecx + 0x98], 0xea62cb */
  W32((uint32_t)(ecx + 0x98u), 0xea62cbu);
/* ea1a3f: mov dword ptr [ecx + 0x9c], 0xea6452 */
  W32((uint32_t)(ecx + 0x9cu), 0xea6452u);
/* ea1a49: mov dword ptr [ecx + 0xa0], 0xea75ea */
  W32((uint32_t)(ecx + 0xa0u), 0xea75eau);
/* ea1a53: mov dword ptr [ecx + 0xa4], 0xea778f */
  W32((uint32_t)(ecx + 0xa4u), 0xea778fu);
/* ea1a5d: mov dword ptr [ecx + 0xa8], 0xea7cc3 */
  W32((uint32_t)(ecx + 0xa8u), 0xea7cc3u);
/* ea1a67: mov dword ptr [ecx + 0xac], 0xea4f0f */
  W32((uint32_t)(ecx + 0xacu), 0xea4f0fu);
/* ea1a71: mov dword ptr [ecx + 0xb0], 0xea4fa1 */
  W32((uint32_t)(ecx + 0xb0u), 0xea4fa1u);
/* ea1a7b: mov dword ptr [ecx + 0xd8], 0xeaa8ec */
  W32((uint32_t)(ecx + 0xd8u), 0xeaa8ecu);
/* ea1a85: mov dword ptr [ecx + 0xcc], 0xea9a91 */
  W32((uint32_t)(ecx + 0xccu), 0xea9a91u);
/* ea1a8f: mov dword ptr [ecx + 0xc0], 0xeaa5a2 */
  W32((uint32_t)(ecx + 0xc0u), 0xeaa5a2u);
/* ea1a99: mov dword ptr [ecx + 0xb8], 0xeaa5eb */
  W32((uint32_t)(ecx + 0xb8u), 0xeaa5ebu);
/* ea1aa3: mov dword ptr [ecx + 0xd0], 0xeaa95d */
  W32((uint32_t)(ecx + 0xd0u), 0xeaa95du);
/* ea1aad: mov dword ptr [ecx + 0xc4], 0xea9b02 */
  W32((uint32_t)(ecx + 0xc4u), 0xea9b02u);
/* ea1ab7: mov dword ptr [ecx + 0xdc], 0xea5005 */
  W32((uint32_t)(ecx + 0xdcu), 0xea5005u);
/* ea1ac1: mov dword ptr [ecx + 0xe0], 0xea50ac */
  W32((uint32_t)(ecx + 0xe0u), 0xea50acu);
/* ea1acb: mov dword ptr [ecx + 0xd4], 0xeaaa25 */
  W32((uint32_t)(ecx + 0xd4u), 0xeaaa25u);
/* ea1ad5: mov dword ptr [ecx + 0xbc], 0xeaa62e */
  W32((uint32_t)(ecx + 0xbcu), 0xeaa62eu);
/* ea1adf: mov dword ptr [ecx + 0xc8], 0xea9bd6 */
  W32((uint32_t)(ecx + 0xc8u), 0xea9bd6u);
/* ea1ae9: mov dword ptr [ecx + 0x10], 0xea9212 */
  W32((uint32_t)(ecx + 0x10u), 0xea9212u);
/* ea1af0: mov dword ptr [ecx + 0xb4], 0xea5151 */
  W32((uint32_t)(ecx + 0xb4u), 0xea5151u);
/* ea1afa: je 0xea1b2a */
  if (zf) goto L_ea1b2a;
L_ea1afc: /* ea1afc: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea1aff: je 0xea1b2a */
  if (zf) goto L_ea1b2a;
L_ea1b01: /* ea1b01: mov dword ptr [ecx + 0x3c], 0xeaa2c5 */
  W32((uint32_t)(ecx + 0x3cu), 0xeaa2c5u);
/* ea1b08: mov dword ptr [ecx + 0x48], 0xea8f30 */
  W32((uint32_t)(ecx + 0x48u), 0xea8f30u);
/* ea1b0f: mov dword ptr [ecx + 0x98], 0xea639d */
  W32((uint32_t)(ecx + 0x98u), 0xea639du);
/* ea1b19: mov dword ptr [ecx + 0x9c], 0xea7ddc */
  W32((uint32_t)(ecx + 0x9cu), 0xea7ddcu);
/* ea1b23: mov dword ptr [ecx + 0x60], 0xea4a05 */
  W32((uint32_t)(ecx + 0x60u), 0xea4a05u);
L_ea1b2a: /* ea1b2a: ret  */
  esp += 4; SPILL(); return;
}

void f_ea1b2b(void) {
  LOAD_REGS();
L_ea1b2b: /* ea1b2b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea1b2f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea1b33: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea1b37: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1b39: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ea1b3b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1b3d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* ea1b40: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1b42: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ea1b45: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1b47: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* ea1b4a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1b4c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1b4f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* ea1b52: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1b55: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* ea1b58: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1b5b: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* ea1b5e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1b61: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* ea1b64: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1b66: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1b68: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1b6a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1b6c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1b6e: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* ea1b71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1b73: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* ea1b76: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* ea1b78: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* ea1b7b: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1b7d: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* ea1b80: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1b82: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ea1b84: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ea1b87: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ea1b8a: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* ea1b8d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1b91: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea1b94(void) {
  LOAD_REGS();
L_ea1b94: /* ea1b94: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea1b98: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea1b9c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea1ba0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1ba2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ea1ba4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1ba6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ea1ba9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* ea1bab: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1bae: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* ea1bb1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1bb4: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* ea1bb7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* ea1bb9: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* ea1bbb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* ea1bbd: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ea1bbf: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ea1bc2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1bc6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea1bc9(void) {
  LOAD_REGS();
L_ea1bc9: /* ea1bc9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea1bcd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea1bd1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea1bd5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1bd7: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ea1bd9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1bdb: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* ea1bde: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1be0: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ea1be3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1be5: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* ea1be8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1bea: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1bed: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* ea1bf0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1bf3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* ea1bf6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1bf9: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* ea1bfc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1bff: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* ea1c02: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1c04: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c06: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c08: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c0a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c0c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1c0f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* ea1c12: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1c15: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* ea1c18: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1c1b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* ea1c1e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1c21: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* ea1c24: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1c26: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c28: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c2a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c2c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c2e: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* ea1c31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1c33: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* ea1c36: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* ea1c38: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* ea1c3b: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1c3d: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* ea1c40: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1c42: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ea1c44: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ea1c47: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ea1c4a: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* ea1c4d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1c51: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea1c54(void) {
  LOAD_REGS();
L_ea1c54: /* ea1c54: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea1c58: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea1c5c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea1c60: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1c62: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ea1c64: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1c66: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ea1c69: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1c6b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* ea1c6e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1c70: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1c73: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* ea1c76: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1c79: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* ea1c7c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1c7f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* ea1c82: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1c84: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1c86: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1c88: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1c8a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1c8d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* ea1c90: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1c93: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* ea1c96: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1c99: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* ea1c9c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1c9e: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1ca0: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1ca2: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* ea1ca4: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ea1ca6: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ea1ca9: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ea1cac: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1cb0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea1cb3(void) {
  LOAD_REGS();
L_ea1cb3: /* ea1cb3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea1cb7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea1cbb: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea1cbf: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1cc1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ea1cc3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1cc5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* ea1cc8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1cca: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ea1ccd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ea1ccf: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* ea1cd2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1cd4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1cd7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* ea1cda: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1cdd: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* ea1ce0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1ce3: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* ea1ce6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ea1ce9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* ea1cec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1cee: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1cf0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1cf2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1cf4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1cf6: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1cf9: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* ea1cfc: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1cff: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* ea1d02: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1d05: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* ea1d08: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ea1d0b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* ea1d0e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1d10: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d12: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d14: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d16: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d18: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ea1d1b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* ea1d1e: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ea1d21: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* ea1d24: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ea1d27: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* ea1d2a: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ea1d2d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* ea1d30: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1d32: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d34: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d36: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d38: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* ea1d3a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ea1d3c: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ea1d3f: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ea1d42: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* ea1d45: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1d49: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea1d4c(void) {
  LOAD_REGS();
L_ea1d4c: /* ea1d4c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea1d4d: mov ebp, esp */
  ebp = esp;
/* ea1d4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea1d50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea1d51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea1d52: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea1d55: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ea1d58: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ea1d5a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ea1d5c: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* ea1d5f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ea1d62: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ea1d65: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* ea1d68: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1d6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1d6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1d6e: fst dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0);
/* ea1d71: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ea1d74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea1d76: jne 0xea1d87 */
  if (!zf) goto L_ea1d87;
L_ea1d78: /* ea1d78: ffree st(0) */
/* ea1d7a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ea1d7c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* ea1d7f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* ea1d82: jmp 0xea1e0e */
  goto L_ea1e0e;
L_ea1d87: /* ea1d87: fld1  */
  FPUSH(1.0);
/* ea1d89: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ea1d8b: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ea1d8e: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea1d91: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea1d96: cmp eax, 0x3727c5ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3727c5acu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea1d9b: jg 0xea1db3 */
  if ((!zf && sf == of)) goto L_ea1db3;
L_ea1d9d: /* ea1d9d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1d9f: je 0xea1e0e */
  if (zf) goto L_ea1e0e;
L_ea1da1: /* ea1da1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ea1da3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ea1da5: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ea1da8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* ea1dab: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ea1dae: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* ea1db1: jmp 0xea1e0e */
  goto L_ea1e0e;
L_ea1db3: /* ea1db3: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ea1db6: mov edi, eax */
  edi = eax;
/* ea1db8: shr edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* ea1dbb: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea1dc0: and edi, 0xff8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xff8u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ea1dc6: or eax, 0x3f000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea1dcb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ea1dce: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ea1dd1: fmul dword ptr [edi + 0xeba9e0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xeba9e0u)));
/* ea1dd7: mov eax, 0xbeffffff */
  eax = 0xbeffffffu;
/* ea1ddc: sub eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ea1ddf: fadd dword ptr [edi + 0xeba9e4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xeba9e4u)));
/* ea1de5: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ea1de7: and eax, 0xff800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea1dec: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ea1def: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ea1df2: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ea1df4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea1df6: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* ea1df9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* ea1dfb: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ea1dfe: fmul st(3) */
  ST0 = ST0 * STI(3);
/* ea1e00: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1e02: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ea1e04: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ea1e07: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ea1e0a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ea1e0c: jmp 0xea1e0e */
  goto L_ea1e0e;
L_ea1e0e: /* ea1e0e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea1e11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea1e12: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea1e13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea1e16(void) {
  LOAD_REGS();
L_ea1e16: /* ea1e16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea1e17: mov ebp, esp */
  ebp = esp;
/* ea1e19: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea1e1c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea1e1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea1e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1e21: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* ea1e24: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1e26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea1e27: jne 0xea1e9a */
  if (!zf) goto L_ea1e9a;
L_ea1e29: /* ea1e29: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1e2c: je 0xea1e8c */
  if (zf) goto L_ea1e8c;
L_ea1e2e: /* ea1e2e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ea1e31: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ea1e34: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ea1e37: mov edi, 0xfffffffc */
  edi = 0xfffffffcu;
L_ea1e3c: /* ea1e3c: mov esi, 0xfffffff0 */
  esi = 0xfffffff0u;
/* ea1e41: fld dword ptr [edx + edi*4 + 0x10] */
  { double v = F32((uint32_t)(edx + edi*4 + 0x10u)); FPUSH(v); }
/* ea1e45: fld dword ptr [edx + edi*4 + 0x20] */
  { double v = F32((uint32_t)(edx + edi*4 + 0x20u)); FPUSH(v); }
/* ea1e49: fld dword ptr [edx + edi*4 + 0x30] */
  { double v = F32((uint32_t)(edx + edi*4 + 0x30u)); FPUSH(v); }
/* ea1e4d: fld dword ptr [edx + edi*4 + 0x40] */
  { double v = F32((uint32_t)(edx + edi*4 + 0x40u)); FPUSH(v); }
L_ea1e51: /* ea1e51: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1e53: fmul dword ptr [ecx + esi*4 + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi*4 + 0x40u)));
/* ea1e57: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1e59: fmul dword ptr [ecx + esi*4 + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi*4 + 0x44u)));
/* ea1e5d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1e5f: fmul dword ptr [ecx + esi*4 + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi*4 + 0x48u)));
/* ea1e63: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1e65: fmul dword ptr [ecx + esi*4 + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + esi*4 + 0x4cu)));
/* ea1e69: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1e6b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1e6d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1e6f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1e71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1e73: fstp dword ptr [ebx + esi*4 + 0x40] */
  WF32((uint32_t)(ebx + esi*4 + 0x40u), ST0); FPOP();
/* ea1e77: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* ea1e7a: jne 0xea1e51 */
  if (!zf) goto L_ea1e51;
L_ea1e7c: /* ea1e7c: ffree st(3) */
/* ea1e7e: ffree st(2) */
/* ea1e80: ffree st(1) */
/* ea1e82: ffree st(0) */
/* ea1e84: lea ebx, [ebx + 4] */
  ebx = (uint32_t)(ebx + 0x4u);
/* ea1e87: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edi = r;
  }
/* ea1e88: jne 0xea1e3c */
  if (!zf) goto L_ea1e3c;
L_ea1e8a: /* ea1e8a: jmp 0xea1ef2 */
  goto L_ea1ef2;
L_ea1e8c: /* ea1e8c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ea1e8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea1e8f: lea edi, [ebp - 0x40] */
  edi = (uint32_t)(ebp + 0xffffffc0u);
/* ea1e92: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea1e94: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* ea1e97: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
L_ea1e9a: /* ea1e9a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ea1e9d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ea1ea0: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ea1ea3: mov edi, 0xfffffffc */
  edi = 0xfffffffcu;
L_ea1ea8: /* ea1ea8: mov esi, 0xfffffffc */
  esi = 0xfffffffcu;
/* ea1ead: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ea1eaf: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* ea1eb2: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ea1eb5: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
L_ea1eb8: /* ea1eb8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1eba: fmul dword ptr [edx + esi*4 + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x10u)));
/* ea1ebe: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1ec0: fmul dword ptr [edx + esi*4 + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x20u)));
/* ea1ec4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1ec6: fmul dword ptr [edx + esi*4 + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x30u)));
/* ea1eca: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1ecc: fmul dword ptr [edx + esi*4 + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x40u)));
/* ea1ed0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1ed2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1ed4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1ed6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1ed8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1eda: fstp dword ptr [ebx + esi*4 + 0x10] */
  WF32((uint32_t)(ebx + esi*4 + 0x10u), ST0); FPOP();
/* ea1ede: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  esi = r;
  }
/* ea1edf: jne 0xea1eb8 */
  if (!zf) goto L_ea1eb8;
L_ea1ee1: /* ea1ee1: ffree st(3) */
/* ea1ee3: ffree st(2) */
/* ea1ee5: ffree st(1) */
/* ea1ee7: ffree st(0) */
/* ea1ee9: lea ecx, [ecx + 0x10] */
  ecx = (uint32_t)(ecx + 0x10u);
/* ea1eec: lea ebx, [ebx + 0x10] */
  ebx = (uint32_t)(ebx + 0x10u);
/* ea1eef: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edi = r;
  }
/* ea1ef0: jne 0xea1ea8 */
  if (!zf) goto L_ea1ea8;
L_ea1ef2: /* ea1ef2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea1ef3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea1ef4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea1ef5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea1ef6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea1ef9(void) {
  LOAD_REGS();
L_ea1ef9: /* ea1ef9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea1efa: mov ebp, esp */
  ebp = esp;
/* ea1efc: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea1eff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea1f02: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1f05: je 0xea1f0c */
  if (zf) goto L_ea1f0c;
L_ea1f07: /* ea1f07: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1f0a: jne 0xea1f0f */
  if (!zf) goto L_ea1f0f;
L_ea1f0c: /* ea1f0c: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
L_ea1f0f: /* ea1f0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea1f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea1f11: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ea1f14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea1f15: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea1f18: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ea1f1b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ea1f1e: mov edi, 0xfffffffc */
  edi = 0xfffffffcu;
L_ea1f23: /* ea1f23: mov esi, 0xfffffffc */
  esi = 0xfffffffcu;
/* ea1f28: lea ebx, [eax + edi*4 + 0x10] */
  ebx = (uint32_t)(eax + edi*4 + 0x10u);
/* ea1f2c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ea1f2e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* ea1f31: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ea1f34: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
L_ea1f37: /* ea1f37: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1f39: fmul dword ptr [edx + esi*4 + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x10u)));
/* ea1f3d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1f3f: fmul dword ptr [edx + esi*4 + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x20u)));
/* ea1f43: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1f45: fmul dword ptr [edx + esi*4 + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x30u)));
/* ea1f49: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* ea1f4b: fmul dword ptr [edx + esi*4 + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4 + 0x40u)));
/* ea1f4f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* ea1f51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1f53: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* ea1f55: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1f57: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ea1f59: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* ea1f5b: lea ebx, [ebx + 0x10] */
  ebx = (uint32_t)(ebx + 0x10u);
/* ea1f5e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  esi = r;
  }
/* ea1f5f: jne 0xea1f37 */
  if (!zf) goto L_ea1f37;
L_ea1f61: /* ea1f61: ffree st(3) */
/* ea1f63: ffree st(2) */
/* ea1f65: ffree st(1) */
/* ea1f67: ffree st(0) */
/* ea1f69: lea ecx, [ecx + 0x10] */
  ecx = (uint32_t)(ecx + 0x10u);
/* ea1f6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  edi = r;
  }
/* ea1f6d: jne 0xea1f23 */
  if (!zf) goto L_ea1f23;
L_ea1f6f: /* ea1f6f: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea1f72: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea1f75: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1f77: je 0xea1f80 */
  if (zf) goto L_ea1f80;
L_ea1f79: /* ea1f79: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ea1f7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea1f7c: mov edi, eax */
  edi = eax;
/* ea1f7e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_ea1f80: /* ea1f80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea1f81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea1f82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea1f83: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea1f84: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea1f87(void) {
  LOAD_REGS();
L_ea1f87: /* ea1f87: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea1f8b: mov dword ptr [eax], 0xea1b2b */
  W32((uint32_t)(eax), 0xea1b2bu);
/* ea1f91: mov dword ptr [eax + 4], 0xea1bc9 */
  W32((uint32_t)(eax + 0x4u), 0xea1bc9u);
/* ea1f98: mov dword ptr [eax + 8], 0xea1cb3 */
  W32((uint32_t)(eax + 0x8u), 0xea1cb3u);
/* ea1f9f: mov dword ptr [eax + 0xc], 0xea1e16 */
  W32((uint32_t)(eax + 0xcu), 0xea1e16u);
/* ea1fa6: mov dword ptr [eax + 0x10], 0xea1ef9 */
  W32((uint32_t)(eax + 0x10u), 0xea1ef9u);
/* ea1fad: mov dword ptr [eax + 0x14], 0xea1b94 */
  W32((uint32_t)(eax + 0x14u), 0xea1b94u);
/* ea1fb4: mov dword ptr [eax + 0x18], 0xea1c54 */
  W32((uint32_t)(eax + 0x18u), 0xea1c54u);
/* ea1fbb: mov dword ptr [eax + 0x1c], 0xea1d4c */
  W32((uint32_t)(eax + 0x1cu), 0xea1d4cu);
/* ea1fc2: ret  */
  esp += 4; SPILL(); return;
}

void f_ea1fc3(void) {
  LOAD_REGS();
L_ea1fc3: /* ea1fc3: mov eax, ecx */
  eax = ecx;
/* ea1fc5: xor ecx, ecx */
  ecx = 0;
/* ea1fc7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ea1fc9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* ea1fcc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* ea1fcf: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* ea1fd2: ret  */
  esp += 4; SPILL(); return;
}

void f_ea1fd3(void) {
  LOAD_REGS();
L_ea1fd3: /* ea1fd3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ea1fd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea1fd7: je 0xea1fe0 */
  if (zf) goto L_ea1fe0;
L_ea1fd9: /* ea1fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1fda: call 0xe81220 */
  esp -= 4; W32(esp, 0xea1fdfu); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea1fdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea1fe0: /* ea1fe0: ret  */
  esp += 4; SPILL(); return;
}

void f_ea1fe1(void) {
  LOAD_REGS();
L_ea1fe1: /* ea1fe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea1fe2: mov ebx, ecx */
  ebx = ecx;
/* ea1fe4: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea1fe7: cmp dword ptr [ebx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea1fea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea1feb: jne 0xea2039 */
  if (!zf) goto L_ea2039;
L_ea1fed: /* ea1fed: lea eax, [eax*4 + 0x40] */
  eax = (uint32_t)(eax*4 + 0x40u);
/* ea1ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea1ff5: call 0xe9b060 */
  esp -= 4; W32(esp, 0xea1ffau); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* ea1ffa: mov ebp, eax */
  ebp = eax;
/* ea1ffc: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea1ffe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea1fff: jne 0xea200b */
  if (!zf) goto L_ea200b;
L_ea2001: /* ea2001: mov eax, 0x8007000e */
  eax = 0x8007000eu;
/* ea2006: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* ea2009: jmp 0xea204a */
  goto L_ea204a;
L_ea200b: /* ea200b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea200c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ea200e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2010: je 0xea2032 */
  if (zf) goto L_ea2032;
L_ea2012: /* ea2012: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ea2015: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ea2018: mov eax, ecx */
  eax = ecx;
/* ea201a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea201b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ea201e: mov edi, ebp */
  edi = ebp;
/* ea2020: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea2022: mov ecx, eax */
  ecx = eax;
/* ea2024: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea2027: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ea2029: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* ea202b: call 0xe81220 */
  esp -= 4; W32(esp, 0xea2030u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea2030: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea2031: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_ea2032: /* ea2032: add dword ptr [ebx + 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x8u), r);
  }
/* ea2036: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* ea2038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_ea2039: /* ea2039: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ea203c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ea203e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea2042: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* ea2045: inc dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x4u), r);
  }
/* ea2048: xor eax, eax */
  eax = 0;
L_ea204a: /* ea204a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea204b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea204c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea204f(void) {
  LOAD_REGS();
L_ea204f: /* ea204f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ea2052: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2054: jne 0xea206b */
  if (!zf) goto L_ea206b;
L_ea2056: /* ea2056: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea205a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea205c: je 0xea2061 */
  if (zf) goto L_ea2061;
L_ea205e: /* ea205e: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_ea2061: /* ea2061: mov eax, 0x80004005 */
  eax = 0x80004005u;
/* ea2066: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* ea2069: jmp 0xea2080 */
  goto L_ea2080;
L_ea206b: /* ea206b: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ea206f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ea2070: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2072: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* ea2075: je 0xea207e */
  if (zf) goto L_ea207e;
L_ea2077: /* ea2077: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ea2079: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* ea207c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
L_ea207e: /* ea207e: xor eax, eax */
  eax = 0;
L_ea2080: /* ea2080: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea2083(void) {
  LOAD_REGS();
L_ea2083: /* ea2083: mov eax, ecx */
  eax = ecx;
/* ea2085: xor ecx, ecx */
  ecx = 0;
/* ea2087: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ea2089: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* ea208c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* ea208f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* ea2092: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* ea2095: ret  */
  esp += 4; SPILL(); return;
}

void f_ea2096(void) {
  LOAD_REGS();
L_ea2096: /* ea2096: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea2097: mov esi, ecx */
  esi = ecx;
/* ea2099: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea209c: je 0xea20c5 */
  if (zf) goto L_ea20c5;
L_ea209e: /* ea209e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea209f: xor edi, edi */
  edi = 0;
/* ea20a1: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea20a4: jbe 0xea20bc */
  if ((cf | zf)) goto L_ea20bc;
L_ea20a6: /* ea20a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ea20a8: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ea20ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea20ad: je 0xea20b6 */
  if (zf) goto L_ea20b6;
L_ea20af: /* ea20af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea20b0: call 0xe81220 */
  esp -= 4; W32(esp, 0xea20b5u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea20b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea20b6: /* ea20b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ea20b7: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea20ba: jb 0xea20a6 */
  if (cf) goto L_ea20a6;
L_ea20bc: /* ea20bc: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* ea20be: call 0xe81220 */
  esp -= 4; W32(esp, 0xea20c3u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea20c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea20c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_ea20c5: /* ea20c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea20c6: ret  */
  esp += 4; SPILL(); return;
}

void f_ea20c7(void) {
  LOAD_REGS();
L_ea20c7: /* ea20c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea20c8: mov ebx, ecx */
  ebx = ecx;
/* ea20ca: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea20cd: cmp dword ptr [ebx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea20d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea20d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea20d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea20d3: jne 0xea2113 */
  if (!zf) goto L_ea2113;
L_ea20d5: /* ea20d5: lea eax, [eax*4 + 0x40] */
  eax = (uint32_t)(eax*4 + 0x40u);
/* ea20dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea20dd: call 0xe9b060 */
  esp -= 4; W32(esp, 0xea20e2u); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* ea20e2: mov ebp, eax */
  ebp = eax;
/* ea20e4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea20e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea20e7: je 0xea2138 */
  if (zf) goto L_ea2138;
L_ea20e9: /* ea20e9: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ea20eb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea20ed: je 0xea210d */
  if (zf) goto L_ea210d;
L_ea20ef: /* ea20ef: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ea20f2: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ea20f5: mov eax, ecx */
  eax = ecx;
/* ea20f7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ea20fa: mov edi, ebp */
  edi = ebp;
/* ea20fc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea20fe: mov ecx, eax */
  ecx = eax;
/* ea2100: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea2103: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ea2105: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* ea2107: call 0xe81220 */
  esp -= 4; W32(esp, 0xea210cu); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea210c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea210d: /* ea210d: add dword ptr [ebx + 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x8u), r);
  }
/* ea2111: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
L_ea2113: /* ea2113: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ea2117: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2119: je 0xea2165 */
  if (zf) goto L_ea2165;
L_ea211b: /* ea211b: mov ebp, esi */
  ebp = esi;
/* ea211d: lea eax, [ebp + 1] */
  eax = (uint32_t)(ebp + 0x1u);
L_ea2120: /* ea2120: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* ea2123: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ea2124: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea2126: jne 0xea2120 */
  if (!zf) goto L_ea2120;
L_ea2128: /* ea2128: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ea212a: lea eax, [ebp + 1] */
  eax = (uint32_t)(ebp + 0x1u);
/* ea212d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea212e: call 0xe9b060 */
  esp -= 4; W32(esp, 0xea2133u); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* ea2133: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2135: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea2136: jne 0xea2142 */
  if (!zf) goto L_ea2142;
L_ea2138: /* ea2138: mov eax, 0x8007000e */
  eax = 0x8007000eu;
/* ea213d: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* ea2140: jmp 0xea2173 */
  goto L_ea2173;
L_ea2142: /* ea2142: mov ecx, ebp */
  ecx = ebp;
/* ea2144: mov edx, ecx */
  edx = ecx;
/* ea2146: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ea2149: mov edi, eax */
  edi = eax;
/* ea214b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea214d: mov ecx, edx */
  ecx = edx;
/* ea214f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea2152: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ea2154: and byte ptr [eax + ebp], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebp))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + ebp), r);
  }
/* ea2158: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ea215b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ea215d: add dword ptr [ebx + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x10u), r);
  }
/* ea2160: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* ea2163: jmp 0xea216e */
  goto L_ea216e;
L_ea2165: /* ea2165: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ea2168: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ea216a: and dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + eax*4), r);
  }
L_ea216e: /* ea216e: inc dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x4u), r);
  }
/* ea2171: xor eax, eax */
  eax = 0;
L_ea2173: /* ea2173: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea2174: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea2175: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2176: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2177: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea217a(void) {
  LOAD_REGS();
L_ea217a: /* ea217a: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* ea217d: and dword ptr [ecx + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* ea2181: ret  */
  esp += 4; SPILL(); return;
}

void f_ea2182(void) {
  LOAD_REGS();
L_ea2182: /* ea2182: mov eax, 0xead374 */
  eax = 0xead374u;
/* ea2187: call 0xeac854 */
  esp -= 4; W32(esp, 0xea218cu); SPILL(); f_eac854(); if (g_unwind) return; RELOAD();
/* ea218c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea218f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2192: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea2193: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea2194: xor esi, esi */
  esi = 0;
/* ea2196: mov ebx, ecx */
  ebx = ecx;
/* ea2198: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* ea219a: cmp dword ptr [ebx + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea219d: jne 0xea21a6 */
  if (!zf) goto L_ea21a6;
L_ea219f: /* ea219f: xor eax, eax */
  eax = 0;
/* ea21a1: jmp 0xea225a */
  goto L_ea225a;
L_ea21a6: /* ea21a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea21a7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ea21a9: call 0xe9b060 */
  esp -= 4; W32(esp, 0xea21aeu); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* ea21ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea21af: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ea21b2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea21b4: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* ea21b7: je 0xea21c7 */
  if (zf) goto L_ea21c7;
L_ea21b9: /* ea21b9: mov ecx, eax */
  ecx = eax;
/* ea21bb: call 0xea2349 */
  esp -= 4; W32(esp, 0xea21c0u); SPILL(); f_ea2349(); if (g_unwind) return; RELOAD();
/* ea21c0: mov edi, eax */
  edi = eax;
/* ea21c2: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ea21c5: jmp 0xea21cc */
  goto L_ea21cc;
L_ea21c7: /* ea21c7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* ea21ca: mov edi, esi */
  edi = esi;
L_ea21cc: /* ea21cc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* ea21d0: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea21d2: jne 0xea21db */
  if (!zf) goto L_ea21db;
L_ea21d4: /* ea21d4: mov eax, 0x8007000e */
  eax = 0x8007000eu;
/* ea21d9: jmp 0xea2259 */
  goto L_ea2259;
L_ea21db: /* ea21db: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ea21de: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ea21e1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ea21e3: lea ecx, [ecx + edx + 1] */
  ecx = (uint32_t)(ecx + edx + 0x1u);
/* ea21e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea21e8: mov ecx, edi */
  ecx = edi;
/* ea21ea: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xea21edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea21ed: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* ea21f0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ea21f2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ea21f4: jge 0xea2202 */
  if ((sf == of)) goto L_ea2202;
L_ea21f6: /* ea21f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ea21f8: mov ecx, edi */
  ecx = edi;
/* ea21fa: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xea21fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea21fd: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ea2200: jmp 0xea2259 */
  goto L_ea2259;
L_ea2202: /* ea2202: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea2203: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xea2206u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea2206: cmp dword ptr [ebx + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea2209: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* ea220c: jbe 0xea224f */
  if ((cf | zf)) goto L_ea224f;
L_ea220e: /* ea220e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ea2210: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ea2213: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* ea2216: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2218: je 0xea2244 */
  if (zf) goto L_ea2244;
L_ea221a: /* ea221a: mov ecx, esi */
  ecx = esi;
/* ea221c: lea edi, [ecx + 1] */
  edi = (uint32_t)(ecx + 0x1u);
L_ea221f: /* ea221f: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* ea2221: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ea2222: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea2224: jne 0xea221f */
  if (!zf) goto L_ea221f;
L_ea2226: /* ea2226: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ea2228: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ea222b: mov edx, ecx */
  edx = ecx;
/* ea222d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ea2230: mov edi, eax */
  edi = eax;
/* ea2232: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea2234: mov ecx, edx */
  ecx = edx;
/* ea2236: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea2239: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea223b: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ea223d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* ea2240: mov byte ptr [eax], 0xa */
  W8((uint32_t)(eax), 0xau);
/* ea2243: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_ea2244: /* ea2244: inc dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* ea2247: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ea224a: cmp ecx, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea224d: jb 0xea220e */
  if (cf) goto L_ea220e;
L_ea224f: /* ea224f: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* ea2252: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2255: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ea2257: xor eax, eax */
  eax = 0;
L_ea2259: /* ea2259: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_ea225a: /* ea225a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ea225d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea225e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea225f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* ea2266: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea2267: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea226a(void) {
  LOAD_REGS();
L_ea226a: /* ea226a: mov dword ptr [ecx], 0xeb4304 */
  W32((uint32_t)(ecx), 0xeb4304u);
/* ea2270: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* ea2273: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2275: je 0xea227e */
  if (zf) goto L_ea227e;
L_ea2277: /* ea2277: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea2278: call 0xe81220 */
  esp -= 4; W32(esp, 0xea227du); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea227d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea227e: /* ea227e: ret  */
  esp += 4; SPILL(); return;
}

void f_ea227f(void) {
  LOAD_REGS();
L_ea227f: /* ea227f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea2283: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea2284: mov esi, ecx */
  esi = ecx;
/* ea2286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea2287: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ea228a: call 0xe9b060 */
  esp -= 4; W32(esp, 0xea228fu); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* ea228f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ea2292: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* ea2294: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* ea2296: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea2297: and eax, 0x7ff8fff2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff8fff2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea229c: add eax, 0x8007000e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8007000eu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea22a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea22a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea22a5(void) {
  LOAD_REGS();
L_ea22a5: /* ea22a5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea22a9: inc dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* ea22ac: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* ea22af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea22b2(void) {
  LOAD_REGS();
L_ea22b2: /* ea22b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea22b6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ea22b9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea22bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea22bd: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* ea22c0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* ea22c3: jne 0xea22cc */
  if (!zf) goto L_ea22cc;
L_ea22c5: /* ea22c5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ea22c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ea22c9: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xea22ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_ea22cc: /* ea22cc: mov eax, esi */
  eax = esi;
/* ea22ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea22cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea22d2(void) {
  LOAD_REGS();
L_ea22d2: /* ea22d2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea22d6: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* ea22d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea22dc(void) {
  LOAD_REGS();
L_ea22dc: /* ea22dc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea22e0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* ea22e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea22e6(void) {
  LOAD_REGS();
L_ea22e6: /* ea22e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea22e7: mov esi, ecx */
  esi = ecx;
/* ea22e9: call 0xea226a */
  esp -= 4; W32(esp, 0xea22eeu); SPILL(); f_ea226a(); if (g_unwind) return; RELOAD();
/* ea22ee: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea22f3: je 0xea22fc */
  if (zf) goto L_ea22fc;
L_ea22f5: /* ea22f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea22f6: call 0xe81220 */
  esp -= 4; W32(esp, 0xea22fbu); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea22fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea22fc: /* ea22fc: mov eax, esi */
  eax = esi;
/* ea22fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea22ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea2302(void) {
  LOAD_REGS();
L_ea2302: /* ea2302: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2303: mov ebp, esp */
  ebp = esp;
/* ea2305: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ea2308: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* ea230b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea230c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ea230f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea2310: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ea2312: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea2313: mov edi, 0xeb6480 */
  edi = 0xeb6480u;
/* ea2318: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ea231a: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R32(esi); b = R32(edi); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; any = 1; r = (uint32_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea231c: je 0xea232f */
  if (zf) goto L_ea232f;
L_ea231e: /* ea231e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ea2321: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ea2323: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea2324: mov edi, 0xeb3cc0 */
  edi = 0xeb3cc0u;
/* ea2329: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ea232b: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R32(esi); b = R32(edi); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; any = 1; r = (uint32_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea232d: jne 0xea233e */
  if (!zf) goto L_ea233e;
L_ea232f: /* ea232f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea2332: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ea2334: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ea2336: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea2337: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xea233au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ea233a: xor eax, eax */
  eax = 0;
/* ea233c: jmp 0xea2343 */
  goto L_ea2343;
L_ea233e: /* ea233e: mov eax, 0x80004002 */
  eax = 0x80004002u;
L_ea2343: /* ea2343: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea2344: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea2345: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2346: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea2349(void) {
  LOAD_REGS();
L_ea2349: /* ea2349: mov eax, ecx */
  eax = ecx;
/* ea234b: and dword ptr [eax + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* ea234f: and dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* ea2353: mov dword ptr [eax], 0xeb4304 */
  W32((uint32_t)(eax), 0xeb4304u);
/* ea2359: mov dword ptr [eax + 4], 1 */
  W32((uint32_t)(eax + 0x4u), 0x1u);
/* ea2360: ret  */
  esp += 4; SPILL(); return;
}

void f_ea2370(void) {
  LOAD_REGS();
L_ea2370: /* ea2370: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2371: mov ebp, esp */
  ebp = esp;
/* ea2373: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea2376: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea2379: movups xmm3, xmmword ptr [ecx] */
  guest_unsupported(0xea2379); /* movups xmm3, xmmword ptr [ecx] */
/* ea237c: movss xmm2, dword ptr [eax] */
  guest_unsupported(0xea237c); /* movss xmm2, dword ptr [eax] */
/* ea2380: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea2380); /* shufps xmm2, xmm2, 0 */
/* ea2384: movups xmm4, xmmword ptr [ecx + 0x10] */
  guest_unsupported(0xea2384); /* movups xmm4, xmmword ptr [ecx + 0x10] */
/* ea2388: mulps xmm2, xmm3 */
  guest_unsupported(0xea2388); /* mulps xmm2, xmm3 */
/* ea238b: movss xmm1, dword ptr [eax + 4] */
  guest_unsupported(0xea238b); /* movss xmm1, dword ptr [eax + 4] */
/* ea2390: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2390); /* shufps xmm1, xmm1, 0 */
/* ea2394: movups xmm3, xmmword ptr [ecx + 0x30] */
  guest_unsupported(0xea2394); /* movups xmm3, xmmword ptr [ecx + 0x30] */
/* ea2398: mulps xmm1, xmm4 */
  guest_unsupported(0xea2398); /* mulps xmm1, xmm4 */
/* ea239b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea239e: addps xmm2, xmm3 */
  guest_unsupported(0xea239e); /* addps xmm2, xmm3 */
/* ea23a1: addps xmm2, xmm1 */
  guest_unsupported(0xea23a1); /* addps xmm2, xmm1 */
/* ea23a4: movups xmmword ptr [eax], xmm2 */
  guest_unsupported(0xea23a4); /* movups xmmword ptr [eax], xmm2 */
/* ea23a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea23aa: mov esp, ebp */
  esp = ebp;
/* ea23ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea23ad: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea23b0(void) {
  LOAD_REGS();
L_ea23b0: /* ea23b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea23b1: mov ebp, esp */
  ebp = esp;
/* ea23b3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea23b6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea23b9: movups xmm3, xmmword ptr [ecx] */
  guest_unsupported(0xea23b9); /* movups xmm3, xmmword ptr [ecx] */
/* ea23bc: movss xmm2, dword ptr [eax] */
  guest_unsupported(0xea23bc); /* movss xmm2, dword ptr [eax] */
/* ea23c0: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea23c0); /* shufps xmm2, xmm2, 0 */
/* ea23c4: movups xmm4, xmmword ptr [ecx + 0x10] */
  guest_unsupported(0xea23c4); /* movups xmm4, xmmword ptr [ecx + 0x10] */
/* ea23c8: mulps xmm2, xmm3 */
  guest_unsupported(0xea23c8); /* mulps xmm2, xmm3 */
/* ea23cb: movss xmm1, dword ptr [eax + 4] */
  guest_unsupported(0xea23cb); /* movss xmm1, dword ptr [eax + 4] */
/* ea23d0: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea23d0); /* shufps xmm1, xmm1, 0 */
/* ea23d4: movups xmm3, xmmword ptr [ecx + 0x30] */
  guest_unsupported(0xea23d4); /* movups xmm3, xmmword ptr [ecx + 0x30] */
/* ea23d8: mulps xmm1, xmm4 */
  guest_unsupported(0xea23d8); /* mulps xmm1, xmm4 */
/* ea23db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea23de: addps xmm2, xmm3 */
  guest_unsupported(0xea23de); /* addps xmm2, xmm3 */
/* ea23e1: addps xmm2, xmm1 */
  guest_unsupported(0xea23e1); /* addps xmm2, xmm1 */
/* ea23e4: rcpps xmm0, xmm2 */
  guest_unsupported(0xea23e4); /* rcpps xmm0, xmm2 */
/* ea23e7: movaps xmm1, xmm0 */
  guest_unsupported(0xea23e7); /* movaps xmm1, xmm0 */
/* ea23ea: mulps xmm1, xmm0 */
  guest_unsupported(0xea23ea); /* mulps xmm1, xmm0 */
/* ea23ed: addps xmm0, xmm0 */
  guest_unsupported(0xea23ed); /* addps xmm0, xmm0 */
/* ea23f0: mulps xmm1, xmm2 */
  guest_unsupported(0xea23f0); /* mulps xmm1, xmm2 */
/* ea23f3: subps xmm0, xmm1 */
  guest_unsupported(0xea23f3); /* subps xmm0, xmm1 */
/* ea23f6: shufps xmm1, xmm1, 0xff */
  guest_unsupported(0xea23f6); /* shufps xmm1, xmm1, 0xff */
/* ea23fa: mulps xmm2, xmm1 */
  guest_unsupported(0xea23fa); /* mulps xmm2, xmm1 */
/* ea23fd: movlps qword ptr [eax], xmm2 */
  guest_unsupported(0xea23fd); /* movlps qword ptr [eax], xmm2 */
/* ea2400: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2403: mov esp, ebp */
  esp = ebp;
/* ea2405: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2406: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea2409(void) {
  LOAD_REGS();
L_ea2409: /* ea2409: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea2410(); return;
}

void f_ea2410(void) {
  LOAD_REGS();
L_ea2410: /* ea2410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2411: mov ebp, esp */
  ebp = esp;
/* ea2413: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea2416: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea2419: movss xmm2, dword ptr [eax] */
  guest_unsupported(0xea2419); /* movss xmm2, dword ptr [eax] */
/* ea241d: movups xmm3, xmmword ptr [ecx] */
  guest_unsupported(0xea241d); /* movups xmm3, xmmword ptr [ecx] */
/* ea2420: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea2420); /* shufps xmm2, xmm2, 0 */
/* ea2424: movups xmm4, xmmword ptr [ecx + 0x10] */
  guest_unsupported(0xea2424); /* movups xmm4, xmmword ptr [ecx + 0x10] */
/* ea2428: movss xmm1, dword ptr [eax + 4] */
  guest_unsupported(0xea2428); /* movss xmm1, dword ptr [eax + 4] */
/* ea242d: mulps xmm2, xmm3 */
  guest_unsupported(0xea242d); /* mulps xmm2, xmm3 */
/* ea2430: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2430); /* shufps xmm1, xmm1, 0 */
/* ea2434: mulps xmm1, xmm4 */
  guest_unsupported(0xea2434); /* mulps xmm1, xmm4 */
/* ea2437: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea243a: addps xmm2, xmm1 */
  guest_unsupported(0xea243a); /* addps xmm2, xmm1 */
/* ea243d: movlps qword ptr [eax], xmm2 */
  guest_unsupported(0xea243d); /* movlps qword ptr [eax], xmm2 */
/* ea2440: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2443: mov esp, ebp */
  esp = ebp;
/* ea2445: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2446: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea2449(void) {
  LOAD_REGS();
L_ea2449: /* ea2449: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea2450(); return;
}

void f_ea2450(void) {
  LOAD_REGS();
L_ea2450: /* ea2450: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea2451: mov ebx, esp */
  ebx = esp;
/* ea2453: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2456: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea2459: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea245c: jmp 0xea2461 */
  goto L_ea2461;
L_ea2461: /* ea2461: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea2464: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2467: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea246a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ea246d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea246f: jne 0xea24ab */
  if (!zf) goto L_ea24ab;
L_ea2471: /* ea2471: xorps xmm0, xmm0 */
  guest_unsupported(0xea2471); /* xorps xmm0, xmm0 */
/* ea2474: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea2474); /* movlps xmm0, qword ptr [edx] */
/* ea2477: movss xmm1, dword ptr [edx + 8] */
  guest_unsupported(0xea2477); /* movss xmm1, dword ptr [edx + 8] */
/* ea247c: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea247c); /* shufps xmm1, xmm1, 0 */
/* ea2480: mulps xmm1, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea2480); /* mulps xmm1, xmmword ptr [eax + 0x20] */
/* ea2484: addps xmm1, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea2484); /* addps xmm1, xmmword ptr [eax + 0x30] */
/* ea2488: movaps xmm2, xmm0 */
  guest_unsupported(0xea2488); /* movaps xmm2, xmm0 */
/* ea248b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea248b); /* shufps xmm0, xmm0, 0 */
/* ea248f: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea248f); /* mulps xmm0, xmmword ptr [eax] */
/* ea2492: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea2492); /* shufps xmm2, xmm2, 0x55 */
/* ea2496: mulps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea2496); /* mulps xmm2, xmmword ptr [eax + 0x10] */
/* ea249a: addps xmm0, xmm2 */
  guest_unsupported(0xea249a); /* addps xmm0, xmm2 */
/* ea249d: addps xmm0, xmm1 */
  guest_unsupported(0xea249d); /* addps xmm0, xmm1 */
/* ea24a0: movups xmmword ptr [ecx], xmm0 */
  guest_unsupported(0xea24a0); /* movups xmmword ptr [ecx], xmm0 */
/* ea24a3: mov eax, ecx */
  eax = ecx;
/* ea24a5: mov esp, ebx */
  esp = ebx;
/* ea24a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea24a8: ret 0xc */
  esp += 16; SPILL(); return;
L_ea24ab: /* ea24ab: xorps xmm2, xmm2 */
  guest_unsupported(0xea24ab); /* xorps xmm2, xmm2 */
/* ea24ae: movlps xmm2, qword ptr [edx] */
  guest_unsupported(0xea24ae); /* movlps xmm2, qword ptr [edx] */
/* ea24b1: movlps xmm4, qword ptr [eax] */
  guest_unsupported(0xea24b1); /* movlps xmm4, qword ptr [eax] */
/* ea24b4: movhps xmm4, qword ptr [eax + 8] */
  guest_unsupported(0xea24b4); /* movhps xmm4, qword ptr [eax + 8] */
/* ea24b8: movlps xmm3, qword ptr [eax + 0x10] */
  guest_unsupported(0xea24b8); /* movlps xmm3, qword ptr [eax + 0x10] */
/* ea24bc: movhps xmm3, qword ptr [eax + 0x18] */
  guest_unsupported(0xea24bc); /* movhps xmm3, qword ptr [eax + 0x18] */
/* ea24c0: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea24c0); /* movss xmm5, dword ptr [edx + 8] */
/* ea24c5: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea24c5); /* shufps xmm5, xmm5, 0 */
/* ea24c9: movaps xmm6, xmm2 */
  guest_unsupported(0xea24c9); /* movaps xmm6, xmm2 */
/* ea24cc: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea24cc); /* shufps xmm2, xmm2, 0 */
/* ea24d0: mulps xmm4, xmm2 */
  guest_unsupported(0xea24d0); /* mulps xmm4, xmm2 */
/* ea24d3: shufps xmm6, xmm6, 0x55 */
  guest_unsupported(0xea24d3); /* shufps xmm6, xmm6, 0x55 */
/* ea24d7: mulps xmm3, xmm6 */
  guest_unsupported(0xea24d7); /* mulps xmm3, xmm6 */
/* ea24da: addps xmm4, xmm3 */
  guest_unsupported(0xea24da); /* addps xmm4, xmm3 */
/* ea24dd: movlps xmm1, qword ptr [eax + 0x20] */
  guest_unsupported(0xea24dd); /* movlps xmm1, qword ptr [eax + 0x20] */
/* ea24e1: movhps xmm1, qword ptr [eax + 0x28] */
  guest_unsupported(0xea24e1); /* movhps xmm1, qword ptr [eax + 0x28] */
/* ea24e5: mulps xmm1, xmm5 */
  guest_unsupported(0xea24e5); /* mulps xmm1, xmm5 */
/* ea24e8: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea24e8); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea24ec: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea24ec); /* movhps xmm0, qword ptr [eax + 0x38] */
/* ea24f0: addps xmm1, xmm0 */
  guest_unsupported(0xea24f0); /* addps xmm1, xmm0 */
/* ea24f3: addps xmm4, xmm1 */
  guest_unsupported(0xea24f3); /* addps xmm4, xmm1 */
/* ea24f6: movups xmmword ptr [ecx], xmm4 */
  guest_unsupported(0xea24f6); /* movups xmmword ptr [ecx], xmm4 */
/* ea24f9: mov eax, ecx */
  eax = ecx;
/* ea24fb: mov esp, ebx */
  esp = ebx;
/* ea24fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea24fe: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea245e(void) {
  LOAD_REGS();
L_ea245e: /* ea245e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea245f: mov ebx, esp */
  ebx = esp;
/* ea2461: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea2464: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2467: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea246a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ea246d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea246f: jne 0xea24ab */
  if (!zf) goto L_ea24ab;
L_ea2471: /* ea2471: xorps xmm0, xmm0 */
  guest_unsupported(0xea2471); /* xorps xmm0, xmm0 */
/* ea2474: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea2474); /* movlps xmm0, qword ptr [edx] */
/* ea2477: movss xmm1, dword ptr [edx + 8] */
  guest_unsupported(0xea2477); /* movss xmm1, dword ptr [edx + 8] */
/* ea247c: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea247c); /* shufps xmm1, xmm1, 0 */
/* ea2480: mulps xmm1, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea2480); /* mulps xmm1, xmmword ptr [eax + 0x20] */
/* ea2484: addps xmm1, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea2484); /* addps xmm1, xmmword ptr [eax + 0x30] */
/* ea2488: movaps xmm2, xmm0 */
  guest_unsupported(0xea2488); /* movaps xmm2, xmm0 */
/* ea248b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea248b); /* shufps xmm0, xmm0, 0 */
/* ea248f: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea248f); /* mulps xmm0, xmmword ptr [eax] */
/* ea2492: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea2492); /* shufps xmm2, xmm2, 0x55 */
/* ea2496: mulps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea2496); /* mulps xmm2, xmmword ptr [eax + 0x10] */
/* ea249a: addps xmm0, xmm2 */
  guest_unsupported(0xea249a); /* addps xmm0, xmm2 */
/* ea249d: addps xmm0, xmm1 */
  guest_unsupported(0xea249d); /* addps xmm0, xmm1 */
/* ea24a0: movups xmmword ptr [ecx], xmm0 */
  guest_unsupported(0xea24a0); /* movups xmmword ptr [ecx], xmm0 */
/* ea24a3: mov eax, ecx */
  eax = ecx;
/* ea24a5: mov esp, ebx */
  esp = ebx;
/* ea24a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea24a8: ret 0xc */
  esp += 16; SPILL(); return;
L_ea24ab: /* ea24ab: xorps xmm2, xmm2 */
  guest_unsupported(0xea24ab); /* xorps xmm2, xmm2 */
/* ea24ae: movlps xmm2, qword ptr [edx] */
  guest_unsupported(0xea24ae); /* movlps xmm2, qword ptr [edx] */
/* ea24b1: movlps xmm4, qword ptr [eax] */
  guest_unsupported(0xea24b1); /* movlps xmm4, qword ptr [eax] */
/* ea24b4: movhps xmm4, qword ptr [eax + 8] */
  guest_unsupported(0xea24b4); /* movhps xmm4, qword ptr [eax + 8] */
/* ea24b8: movlps xmm3, qword ptr [eax + 0x10] */
  guest_unsupported(0xea24b8); /* movlps xmm3, qword ptr [eax + 0x10] */
/* ea24bc: movhps xmm3, qword ptr [eax + 0x18] */
  guest_unsupported(0xea24bc); /* movhps xmm3, qword ptr [eax + 0x18] */
/* ea24c0: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea24c0); /* movss xmm5, dword ptr [edx + 8] */
/* ea24c5: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea24c5); /* shufps xmm5, xmm5, 0 */
/* ea24c9: movaps xmm6, xmm2 */
  guest_unsupported(0xea24c9); /* movaps xmm6, xmm2 */
/* ea24cc: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea24cc); /* shufps xmm2, xmm2, 0 */
/* ea24d0: mulps xmm4, xmm2 */
  guest_unsupported(0xea24d0); /* mulps xmm4, xmm2 */
/* ea24d3: shufps xmm6, xmm6, 0x55 */
  guest_unsupported(0xea24d3); /* shufps xmm6, xmm6, 0x55 */
/* ea24d7: mulps xmm3, xmm6 */
  guest_unsupported(0xea24d7); /* mulps xmm3, xmm6 */
/* ea24da: addps xmm4, xmm3 */
  guest_unsupported(0xea24da); /* addps xmm4, xmm3 */
/* ea24dd: movlps xmm1, qword ptr [eax + 0x20] */
  guest_unsupported(0xea24dd); /* movlps xmm1, qword ptr [eax + 0x20] */
/* ea24e1: movhps xmm1, qword ptr [eax + 0x28] */
  guest_unsupported(0xea24e1); /* movhps xmm1, qword ptr [eax + 0x28] */
/* ea24e5: mulps xmm1, xmm5 */
  guest_unsupported(0xea24e5); /* mulps xmm1, xmm5 */
/* ea24e8: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea24e8); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea24ec: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea24ec); /* movhps xmm0, qword ptr [eax + 0x38] */
/* ea24f0: addps xmm1, xmm0 */
  guest_unsupported(0xea24f0); /* addps xmm1, xmm0 */
/* ea24f3: addps xmm4, xmm1 */
  guest_unsupported(0xea24f3); /* addps xmm4, xmm1 */
/* ea24f6: movups xmmword ptr [ecx], xmm4 */
  guest_unsupported(0xea24f6); /* movups xmmword ptr [ecx], xmm4 */
/* ea24f9: mov eax, ecx */
  eax = ecx;
/* ea24fb: mov esp, ebx */
  esp = ebx;
/* ea24fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea24fe: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea2502(void) {
  LOAD_REGS();
L_ea2502: /* ea2502: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea2509: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea2510(); return;
}

void f_ea2510(void) {
  LOAD_REGS();
L_ea2510: /* ea2510: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea2511: mov ebx, esp */
  ebx = esp;
/* ea2513: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2516: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea2519: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea251c: jmp 0xea2521 */
  goto L_ea2521;
L_ea2521: /* ea2521: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea2524: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2527: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ea252a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ea252d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea252f: jne 0xea258c */
  if (!zf) goto L_ea258c;
L_ea2531: /* ea2531: movss xmm1, dword ptr [ecx + 8] */
  guest_unsupported(0xea2531); /* movss xmm1, dword ptr [ecx + 8] */
/* ea2536: xorps xmm0, xmm0 */
  guest_unsupported(0xea2536); /* xorps xmm0, xmm0 */
/* ea2539: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2539); /* shufps xmm1, xmm1, 0 */
/* ea253d: movlps xmm0, qword ptr [ecx] */
  guest_unsupported(0xea253d); /* movlps xmm0, qword ptr [ecx] */
/* ea2540: mulps xmm1, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea2540); /* mulps xmm1, xmmword ptr [eax + 0x20] */
/* ea2544: addps xmm1, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea2544); /* addps xmm1, xmmword ptr [eax + 0x30] */
/* ea2548: movaps xmm2, xmm0 */
  guest_unsupported(0xea2548); /* movaps xmm2, xmm0 */
/* ea254b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea254b); /* shufps xmm0, xmm0, 0 */
/* ea254f: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea254f); /* shufps xmm2, xmm2, 0x55 */
/* ea2553: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea2553); /* mulps xmm0, xmmword ptr [eax] */
/* ea2556: mulps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea2556); /* mulps xmm2, xmmword ptr [eax + 0x10] */
/* ea255a: addps xmm0, xmm2 */
  guest_unsupported(0xea255a); /* addps xmm0, xmm2 */
/* ea255d: addps xmm0, xmm1 */
  guest_unsupported(0xea255d); /* addps xmm0, xmm1 */
/* ea2560: rcpps xmm1, xmm0 */
  guest_unsupported(0xea2560); /* rcpps xmm1, xmm0 */
/* ea2563: movaps xmm2, xmm1 */
  guest_unsupported(0xea2563); /* movaps xmm2, xmm1 */
/* ea2566: mulps xmm1, xmm0 */
  guest_unsupported(0xea2566); /* mulps xmm1, xmm0 */
/* ea2569: mulps xmm1, xmm2 */
  guest_unsupported(0xea2569); /* mulps xmm1, xmm2 */
/* ea256c: addps xmm2, xmm2 */
  guest_unsupported(0xea256c); /* addps xmm2, xmm2 */
/* ea256f: subps xmm2, xmm1 */
  guest_unsupported(0xea256f); /* subps xmm2, xmm1 */
/* ea2572: shufps xmm2, xmm2, 0xff */
  guest_unsupported(0xea2572); /* shufps xmm2, xmm2, 0xff */
/* ea2576: mulps xmm0, xmm2 */
  guest_unsupported(0xea2576); /* mulps xmm0, xmm2 */
/* ea2579: movlps qword ptr [edx], xmm0 */
  guest_unsupported(0xea2579); /* movlps qword ptr [edx], xmm0 */
/* ea257c: movhlps xmm0, xmm0 */
  guest_unsupported(0xea257c); /* movhlps xmm0, xmm0 */
/* ea257f: movss dword ptr [edx + 8], xmm0 */
  guest_unsupported(0xea257f); /* movss dword ptr [edx + 8], xmm0 */
/* ea2584: mov eax, edx */
  eax = edx;
/* ea2586: mov esp, ebx */
  esp = ebx;
/* ea2588: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2589: ret 0xc */
  esp += 16; SPILL(); return;
L_ea258c: /* ea258c: xorps xmm2, xmm2 */
  guest_unsupported(0xea258c); /* xorps xmm2, xmm2 */
/* ea258f: movlps xmm4, qword ptr [eax] */
  guest_unsupported(0xea258f); /* movlps xmm4, qword ptr [eax] */
/* ea2592: movlps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea2592); /* movlps xmm2, qword ptr [ecx] */
/* ea2595: movhps xmm4, qword ptr [eax + 8] */
  guest_unsupported(0xea2595); /* movhps xmm4, qword ptr [eax + 8] */
/* ea2599: movlps xmm3, qword ptr [eax + 0x10] */
  guest_unsupported(0xea2599); /* movlps xmm3, qword ptr [eax + 0x10] */
/* ea259d: movss xmm5, dword ptr [ecx + 8] */
  guest_unsupported(0xea259d); /* movss xmm5, dword ptr [ecx + 8] */
/* ea25a2: movhps xmm3, qword ptr [eax + 0x18] */
  guest_unsupported(0xea25a2); /* movhps xmm3, qword ptr [eax + 0x18] */
/* ea25a6: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea25a6); /* shufps xmm5, xmm5, 0 */
/* ea25aa: movaps xmm6, xmm2 */
  guest_unsupported(0xea25aa); /* movaps xmm6, xmm2 */
/* ea25ad: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea25ad); /* shufps xmm2, xmm2, 0 */
/* ea25b1: shufps xmm6, xmm6, 0x55 */
  guest_unsupported(0xea25b1); /* shufps xmm6, xmm6, 0x55 */
/* ea25b5: mulps xmm4, xmm2 */
  guest_unsupported(0xea25b5); /* mulps xmm4, xmm2 */
/* ea25b8: mulps xmm3, xmm6 */
  guest_unsupported(0xea25b8); /* mulps xmm3, xmm6 */
/* ea25bb: movlps xmm1, qword ptr [eax + 0x20] */
  guest_unsupported(0xea25bb); /* movlps xmm1, qword ptr [eax + 0x20] */
/* ea25bf: addps xmm4, xmm3 */
  guest_unsupported(0xea25bf); /* addps xmm4, xmm3 */
/* ea25c2: movhps xmm1, qword ptr [eax + 0x28] */
  guest_unsupported(0xea25c2); /* movhps xmm1, qword ptr [eax + 0x28] */
/* ea25c6: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea25c6); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea25ca: mulps xmm1, xmm5 */
  guest_unsupported(0xea25ca); /* mulps xmm1, xmm5 */
/* ea25cd: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea25cd); /* movhps xmm0, qword ptr [eax + 0x38] */
/* ea25d1: addps xmm1, xmm0 */
  guest_unsupported(0xea25d1); /* addps xmm1, xmm0 */
/* ea25d4: addps xmm4, xmm1 */
  guest_unsupported(0xea25d4); /* addps xmm4, xmm1 */
/* ea25d7: rcpps xmm0, xmm4 */
  guest_unsupported(0xea25d7); /* rcpps xmm0, xmm4 */
/* ea25da: movaps xmm1, xmm0 */
  guest_unsupported(0xea25da); /* movaps xmm1, xmm0 */
/* ea25dd: mulps xmm0, xmm4 */
  guest_unsupported(0xea25dd); /* mulps xmm0, xmm4 */
/* ea25e0: mulps xmm0, xmm1 */
  guest_unsupported(0xea25e0); /* mulps xmm0, xmm1 */
/* ea25e3: addps xmm1, xmm1 */
  guest_unsupported(0xea25e3); /* addps xmm1, xmm1 */
/* ea25e6: subps xmm1, xmm0 */
  guest_unsupported(0xea25e6); /* subps xmm1, xmm0 */
/* ea25e9: shufps xmm1, xmm1, 0xff */
  guest_unsupported(0xea25e9); /* shufps xmm1, xmm1, 0xff */
/* ea25ed: mulps xmm4, xmm1 */
  guest_unsupported(0xea25ed); /* mulps xmm4, xmm1 */
/* ea25f0: movlps qword ptr [edx], xmm4 */
  guest_unsupported(0xea25f0); /* movlps qword ptr [edx], xmm4 */
/* ea25f3: movhlps xmm4, xmm4 */
  guest_unsupported(0xea25f3); /* movhlps xmm4, xmm4 */
/* ea25f6: movss dword ptr [edx + 8], xmm4 */
  guest_unsupported(0xea25f6); /* movss dword ptr [edx + 8], xmm4 */
/* ea25fb: mov eax, edx */
  eax = edx;
/* ea25fd: mov esp, ebx */
  esp = ebx;
/* ea25ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2600: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea251e(void) {
  LOAD_REGS();
L_ea251e: /* ea251e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea251f: mov ebx, esp */
  ebx = esp;
/* ea2521: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea2524: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2527: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ea252a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ea252d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea252f: jne 0xea258c */
  if (!zf) goto L_ea258c;
L_ea2531: /* ea2531: movss xmm1, dword ptr [ecx + 8] */
  guest_unsupported(0xea2531); /* movss xmm1, dword ptr [ecx + 8] */
/* ea2536: xorps xmm0, xmm0 */
  guest_unsupported(0xea2536); /* xorps xmm0, xmm0 */
/* ea2539: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2539); /* shufps xmm1, xmm1, 0 */
/* ea253d: movlps xmm0, qword ptr [ecx] */
  guest_unsupported(0xea253d); /* movlps xmm0, qword ptr [ecx] */
/* ea2540: mulps xmm1, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea2540); /* mulps xmm1, xmmword ptr [eax + 0x20] */
/* ea2544: addps xmm1, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea2544); /* addps xmm1, xmmword ptr [eax + 0x30] */
/* ea2548: movaps xmm2, xmm0 */
  guest_unsupported(0xea2548); /* movaps xmm2, xmm0 */
/* ea254b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea254b); /* shufps xmm0, xmm0, 0 */
/* ea254f: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea254f); /* shufps xmm2, xmm2, 0x55 */
/* ea2553: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea2553); /* mulps xmm0, xmmword ptr [eax] */
/* ea2556: mulps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea2556); /* mulps xmm2, xmmword ptr [eax + 0x10] */
/* ea255a: addps xmm0, xmm2 */
  guest_unsupported(0xea255a); /* addps xmm0, xmm2 */
/* ea255d: addps xmm0, xmm1 */
  guest_unsupported(0xea255d); /* addps xmm0, xmm1 */
/* ea2560: rcpps xmm1, xmm0 */
  guest_unsupported(0xea2560); /* rcpps xmm1, xmm0 */
/* ea2563: movaps xmm2, xmm1 */
  guest_unsupported(0xea2563); /* movaps xmm2, xmm1 */
/* ea2566: mulps xmm1, xmm0 */
  guest_unsupported(0xea2566); /* mulps xmm1, xmm0 */
/* ea2569: mulps xmm1, xmm2 */
  guest_unsupported(0xea2569); /* mulps xmm1, xmm2 */
/* ea256c: addps xmm2, xmm2 */
  guest_unsupported(0xea256c); /* addps xmm2, xmm2 */
/* ea256f: subps xmm2, xmm1 */
  guest_unsupported(0xea256f); /* subps xmm2, xmm1 */
/* ea2572: shufps xmm2, xmm2, 0xff */
  guest_unsupported(0xea2572); /* shufps xmm2, xmm2, 0xff */
/* ea2576: mulps xmm0, xmm2 */
  guest_unsupported(0xea2576); /* mulps xmm0, xmm2 */
/* ea2579: movlps qword ptr [edx], xmm0 */
  guest_unsupported(0xea2579); /* movlps qword ptr [edx], xmm0 */
/* ea257c: movhlps xmm0, xmm0 */
  guest_unsupported(0xea257c); /* movhlps xmm0, xmm0 */
/* ea257f: movss dword ptr [edx + 8], xmm0 */
  guest_unsupported(0xea257f); /* movss dword ptr [edx + 8], xmm0 */
/* ea2584: mov eax, edx */
  eax = edx;
/* ea2586: mov esp, ebx */
  esp = ebx;
/* ea2588: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2589: ret 0xc */
  esp += 16; SPILL(); return;
L_ea258c: /* ea258c: xorps xmm2, xmm2 */
  guest_unsupported(0xea258c); /* xorps xmm2, xmm2 */
/* ea258f: movlps xmm4, qword ptr [eax] */
  guest_unsupported(0xea258f); /* movlps xmm4, qword ptr [eax] */
/* ea2592: movlps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea2592); /* movlps xmm2, qword ptr [ecx] */
/* ea2595: movhps xmm4, qword ptr [eax + 8] */
  guest_unsupported(0xea2595); /* movhps xmm4, qword ptr [eax + 8] */
/* ea2599: movlps xmm3, qword ptr [eax + 0x10] */
  guest_unsupported(0xea2599); /* movlps xmm3, qword ptr [eax + 0x10] */
/* ea259d: movss xmm5, dword ptr [ecx + 8] */
  guest_unsupported(0xea259d); /* movss xmm5, dword ptr [ecx + 8] */
/* ea25a2: movhps xmm3, qword ptr [eax + 0x18] */
  guest_unsupported(0xea25a2); /* movhps xmm3, qword ptr [eax + 0x18] */
/* ea25a6: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea25a6); /* shufps xmm5, xmm5, 0 */
/* ea25aa: movaps xmm6, xmm2 */
  guest_unsupported(0xea25aa); /* movaps xmm6, xmm2 */
/* ea25ad: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea25ad); /* shufps xmm2, xmm2, 0 */
/* ea25b1: shufps xmm6, xmm6, 0x55 */
  guest_unsupported(0xea25b1); /* shufps xmm6, xmm6, 0x55 */
/* ea25b5: mulps xmm4, xmm2 */
  guest_unsupported(0xea25b5); /* mulps xmm4, xmm2 */
/* ea25b8: mulps xmm3, xmm6 */
  guest_unsupported(0xea25b8); /* mulps xmm3, xmm6 */
/* ea25bb: movlps xmm1, qword ptr [eax + 0x20] */
  guest_unsupported(0xea25bb); /* movlps xmm1, qword ptr [eax + 0x20] */
/* ea25bf: addps xmm4, xmm3 */
  guest_unsupported(0xea25bf); /* addps xmm4, xmm3 */
/* ea25c2: movhps xmm1, qword ptr [eax + 0x28] */
  guest_unsupported(0xea25c2); /* movhps xmm1, qword ptr [eax + 0x28] */
/* ea25c6: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea25c6); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea25ca: mulps xmm1, xmm5 */
  guest_unsupported(0xea25ca); /* mulps xmm1, xmm5 */
/* ea25cd: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea25cd); /* movhps xmm0, qword ptr [eax + 0x38] */
/* ea25d1: addps xmm1, xmm0 */
  guest_unsupported(0xea25d1); /* addps xmm1, xmm0 */
/* ea25d4: addps xmm4, xmm1 */
  guest_unsupported(0xea25d4); /* addps xmm4, xmm1 */
/* ea25d7: rcpps xmm0, xmm4 */
  guest_unsupported(0xea25d7); /* rcpps xmm0, xmm4 */
/* ea25da: movaps xmm1, xmm0 */
  guest_unsupported(0xea25da); /* movaps xmm1, xmm0 */
/* ea25dd: mulps xmm0, xmm4 */
  guest_unsupported(0xea25dd); /* mulps xmm0, xmm4 */
/* ea25e0: mulps xmm0, xmm1 */
  guest_unsupported(0xea25e0); /* mulps xmm0, xmm1 */
/* ea25e3: addps xmm1, xmm1 */
  guest_unsupported(0xea25e3); /* addps xmm1, xmm1 */
/* ea25e6: subps xmm1, xmm0 */
  guest_unsupported(0xea25e6); /* subps xmm1, xmm0 */
/* ea25e9: shufps xmm1, xmm1, 0xff */
  guest_unsupported(0xea25e9); /* shufps xmm1, xmm1, 0xff */
/* ea25ed: mulps xmm4, xmm1 */
  guest_unsupported(0xea25ed); /* mulps xmm4, xmm1 */
/* ea25f0: movlps qword ptr [edx], xmm4 */
  guest_unsupported(0xea25f0); /* movlps qword ptr [edx], xmm4 */
/* ea25f3: movhlps xmm4, xmm4 */
  guest_unsupported(0xea25f3); /* movhlps xmm4, xmm4 */
/* ea25f6: movss dword ptr [edx + 8], xmm4 */
  guest_unsupported(0xea25f6); /* movss dword ptr [edx + 8], xmm4 */
/* ea25fb: mov eax, edx */
  eax = edx;
/* ea25fd: mov esp, ebx */
  esp = ebx;
/* ea25ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2600: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea2603(void) {
  LOAD_REGS();
L_ea2603: /* ea2603: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea2609: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea2610(); return;
}

void f_ea2610(void) {
  LOAD_REGS();
L_ea2610: /* ea2610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea2611: mov ebx, esp */
  ebx = esp;
/* ea2613: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2616: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea2619: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea261c: jmp 0xea2621 */
  goto L_ea2621;
L_ea2621: /* ea2621: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea2624: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2627: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ea262a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ea262d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea262f: jne 0xea2670 */
  if (!zf) goto L_ea2670;
L_ea2631: /* ea2631: movups xmm0, xmmword ptr [ecx] */
  guest_unsupported(0xea2631); /* movups xmm0, xmmword ptr [ecx] */
/* ea2634: movaps xmm1, xmm0 */
  guest_unsupported(0xea2634); /* movaps xmm1, xmm0 */
/* ea2637: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2637); /* shufps xmm0, xmm0, 0 */
/* ea263b: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea263b); /* mulps xmm0, xmmword ptr [eax] */
/* ea263e: movaps xmm2, xmm1 */
  guest_unsupported(0xea263e); /* movaps xmm2, xmm1 */
/* ea2641: shufps xmm1, xmm1, 0x55 */
  guest_unsupported(0xea2641); /* shufps xmm1, xmm1, 0x55 */
/* ea2645: mulps xmm1, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea2645); /* mulps xmm1, xmmword ptr [eax + 0x10] */
/* ea2649: addps xmm0, xmm1 */
  guest_unsupported(0xea2649); /* addps xmm0, xmm1 */
/* ea264c: movaps xmm1, xmm2 */
  guest_unsupported(0xea264c); /* movaps xmm1, xmm2 */
/* ea264f: shufps xmm2, xmm2, 0xaa */
  guest_unsupported(0xea264f); /* shufps xmm2, xmm2, 0xaa */
/* ea2653: mulps xmm2, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea2653); /* mulps xmm2, xmmword ptr [eax + 0x20] */
/* ea2657: shufps xmm1, xmm1, 0xff */
  guest_unsupported(0xea2657); /* shufps xmm1, xmm1, 0xff */
/* ea265b: mulps xmm1, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea265b); /* mulps xmm1, xmmword ptr [eax + 0x30] */
/* ea265f: addps xmm2, xmm1 */
  guest_unsupported(0xea265f); /* addps xmm2, xmm1 */
/* ea2662: addps xmm0, xmm2 */
  guest_unsupported(0xea2662); /* addps xmm0, xmm2 */
/* ea2665: movups xmmword ptr [edx], xmm0 */
  guest_unsupported(0xea2665); /* movups xmmword ptr [edx], xmm0 */
/* ea2668: mov eax, edx */
  eax = edx;
/* ea266a: mov esp, ebx */
  esp = ebx;
/* ea266c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea266d: ret 0xc */
  esp += 16; SPILL(); return;
L_ea2670: /* ea2670: movups xmm4, xmmword ptr [ecx] */
  guest_unsupported(0xea2670); /* movups xmm4, xmmword ptr [ecx] */
/* ea2673: movlps xmm3, qword ptr [eax] */
  guest_unsupported(0xea2673); /* movlps xmm3, qword ptr [eax] */
/* ea2676: movhps xmm3, qword ptr [eax + 8] */
  guest_unsupported(0xea2676); /* movhps xmm3, qword ptr [eax + 8] */
/* ea267a: movlps xmm2, qword ptr [eax + 0x10] */
  guest_unsupported(0xea267a); /* movlps xmm2, qword ptr [eax + 0x10] */
/* ea267e: movhps xmm2, qword ptr [eax + 0x18] */
  guest_unsupported(0xea267e); /* movhps xmm2, qword ptr [eax + 0x18] */
/* ea2682: movlps xmm1, qword ptr [eax + 0x20] */
  guest_unsupported(0xea2682); /* movlps xmm1, qword ptr [eax + 0x20] */
/* ea2686: movaps xmm5, xmm4 */
  guest_unsupported(0xea2686); /* movaps xmm5, xmm4 */
/* ea2689: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea2689); /* shufps xmm4, xmm4, 0 */
/* ea268d: mulps xmm3, xmm4 */
  guest_unsupported(0xea268d); /* mulps xmm3, xmm4 */
/* ea2690: movhps xmm1, qword ptr [eax + 0x28] */
  guest_unsupported(0xea2690); /* movhps xmm1, qword ptr [eax + 0x28] */
/* ea2694: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea2694); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea2698: movaps xmm4, xmm5 */
  guest_unsupported(0xea2698); /* movaps xmm4, xmm5 */
/* ea269b: shufps xmm5, xmm5, 0x55 */
  guest_unsupported(0xea269b); /* shufps xmm5, xmm5, 0x55 */
/* ea269f: mulps xmm2, xmm5 */
  guest_unsupported(0xea269f); /* mulps xmm2, xmm5 */
/* ea26a2: addps xmm3, xmm2 */
  guest_unsupported(0xea26a2); /* addps xmm3, xmm2 */
/* ea26a5: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea26a5); /* movhps xmm0, qword ptr [eax + 0x38] */
/* ea26a9: movaps xmm2, xmm4 */
  guest_unsupported(0xea26a9); /* movaps xmm2, xmm4 */
/* ea26ac: shufps xmm4, xmm4, 0xaa */
  guest_unsupported(0xea26ac); /* shufps xmm4, xmm4, 0xaa */
/* ea26b0: mulps xmm1, xmm4 */
  guest_unsupported(0xea26b0); /* mulps xmm1, xmm4 */
/* ea26b3: shufps xmm2, xmm2, 0xff */
  guest_unsupported(0xea26b3); /* shufps xmm2, xmm2, 0xff */
/* ea26b7: mulps xmm0, xmm2 */
  guest_unsupported(0xea26b7); /* mulps xmm0, xmm2 */
/* ea26ba: addps xmm1, xmm0 */
  guest_unsupported(0xea26ba); /* addps xmm1, xmm0 */
/* ea26bd: addps xmm3, xmm1 */
  guest_unsupported(0xea26bd); /* addps xmm3, xmm1 */
/* ea26c0: movups xmmword ptr [edx], xmm3 */
  guest_unsupported(0xea26c0); /* movups xmmword ptr [edx], xmm3 */
/* ea26c3: mov eax, edx */
  eax = edx;
/* ea26c5: mov esp, ebx */
  esp = ebx;
/* ea26c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea26c8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea261e(void) {
  LOAD_REGS();
L_ea261e: /* ea261e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea261f: mov ebx, esp */
  ebx = esp;
/* ea2621: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea2624: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2627: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ea262a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ea262d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea262f: jne 0xea2670 */
  if (!zf) goto L_ea2670;
L_ea2631: /* ea2631: movups xmm0, xmmword ptr [ecx] */
  guest_unsupported(0xea2631); /* movups xmm0, xmmword ptr [ecx] */
/* ea2634: movaps xmm1, xmm0 */
  guest_unsupported(0xea2634); /* movaps xmm1, xmm0 */
/* ea2637: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2637); /* shufps xmm0, xmm0, 0 */
/* ea263b: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea263b); /* mulps xmm0, xmmword ptr [eax] */
/* ea263e: movaps xmm2, xmm1 */
  guest_unsupported(0xea263e); /* movaps xmm2, xmm1 */
/* ea2641: shufps xmm1, xmm1, 0x55 */
  guest_unsupported(0xea2641); /* shufps xmm1, xmm1, 0x55 */
/* ea2645: mulps xmm1, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea2645); /* mulps xmm1, xmmword ptr [eax + 0x10] */
/* ea2649: addps xmm0, xmm1 */
  guest_unsupported(0xea2649); /* addps xmm0, xmm1 */
/* ea264c: movaps xmm1, xmm2 */
  guest_unsupported(0xea264c); /* movaps xmm1, xmm2 */
/* ea264f: shufps xmm2, xmm2, 0xaa */
  guest_unsupported(0xea264f); /* shufps xmm2, xmm2, 0xaa */
/* ea2653: mulps xmm2, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea2653); /* mulps xmm2, xmmword ptr [eax + 0x20] */
/* ea2657: shufps xmm1, xmm1, 0xff */
  guest_unsupported(0xea2657); /* shufps xmm1, xmm1, 0xff */
/* ea265b: mulps xmm1, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea265b); /* mulps xmm1, xmmword ptr [eax + 0x30] */
/* ea265f: addps xmm2, xmm1 */
  guest_unsupported(0xea265f); /* addps xmm2, xmm1 */
/* ea2662: addps xmm0, xmm2 */
  guest_unsupported(0xea2662); /* addps xmm0, xmm2 */
/* ea2665: movups xmmword ptr [edx], xmm0 */
  guest_unsupported(0xea2665); /* movups xmmword ptr [edx], xmm0 */
/* ea2668: mov eax, edx */
  eax = edx;
/* ea266a: mov esp, ebx */
  esp = ebx;
/* ea266c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea266d: ret 0xc */
  esp += 16; SPILL(); return;
L_ea2670: /* ea2670: movups xmm4, xmmword ptr [ecx] */
  guest_unsupported(0xea2670); /* movups xmm4, xmmword ptr [ecx] */
/* ea2673: movlps xmm3, qword ptr [eax] */
  guest_unsupported(0xea2673); /* movlps xmm3, qword ptr [eax] */
/* ea2676: movhps xmm3, qword ptr [eax + 8] */
  guest_unsupported(0xea2676); /* movhps xmm3, qword ptr [eax + 8] */
/* ea267a: movlps xmm2, qword ptr [eax + 0x10] */
  guest_unsupported(0xea267a); /* movlps xmm2, qword ptr [eax + 0x10] */
/* ea267e: movhps xmm2, qword ptr [eax + 0x18] */
  guest_unsupported(0xea267e); /* movhps xmm2, qword ptr [eax + 0x18] */
/* ea2682: movlps xmm1, qword ptr [eax + 0x20] */
  guest_unsupported(0xea2682); /* movlps xmm1, qword ptr [eax + 0x20] */
/* ea2686: movaps xmm5, xmm4 */
  guest_unsupported(0xea2686); /* movaps xmm5, xmm4 */
/* ea2689: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea2689); /* shufps xmm4, xmm4, 0 */
/* ea268d: mulps xmm3, xmm4 */
  guest_unsupported(0xea268d); /* mulps xmm3, xmm4 */
/* ea2690: movhps xmm1, qword ptr [eax + 0x28] */
  guest_unsupported(0xea2690); /* movhps xmm1, qword ptr [eax + 0x28] */
/* ea2694: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea2694); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea2698: movaps xmm4, xmm5 */
  guest_unsupported(0xea2698); /* movaps xmm4, xmm5 */
/* ea269b: shufps xmm5, xmm5, 0x55 */
  guest_unsupported(0xea269b); /* shufps xmm5, xmm5, 0x55 */
/* ea269f: mulps xmm2, xmm5 */
  guest_unsupported(0xea269f); /* mulps xmm2, xmm5 */
/* ea26a2: addps xmm3, xmm2 */
  guest_unsupported(0xea26a2); /* addps xmm3, xmm2 */
/* ea26a5: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea26a5); /* movhps xmm0, qword ptr [eax + 0x38] */
/* ea26a9: movaps xmm2, xmm4 */
  guest_unsupported(0xea26a9); /* movaps xmm2, xmm4 */
/* ea26ac: shufps xmm4, xmm4, 0xaa */
  guest_unsupported(0xea26ac); /* shufps xmm4, xmm4, 0xaa */
/* ea26b0: mulps xmm1, xmm4 */
  guest_unsupported(0xea26b0); /* mulps xmm1, xmm4 */
/* ea26b3: shufps xmm2, xmm2, 0xff */
  guest_unsupported(0xea26b3); /* shufps xmm2, xmm2, 0xff */
/* ea26b7: mulps xmm0, xmm2 */
  guest_unsupported(0xea26b7); /* mulps xmm0, xmm2 */
/* ea26ba: addps xmm1, xmm0 */
  guest_unsupported(0xea26ba); /* addps xmm1, xmm0 */
/* ea26bd: addps xmm3, xmm1 */
  guest_unsupported(0xea26bd); /* addps xmm3, xmm1 */
/* ea26c0: movups xmmword ptr [edx], xmm3 */
  guest_unsupported(0xea26c0); /* movups xmmword ptr [edx], xmm3 */
/* ea26c3: mov eax, edx */
  eax = edx;
/* ea26c5: mov esp, ebx */
  esp = ebx;
/* ea26c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea26c8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea26cc(void) {
  LOAD_REGS();
L_ea26cc: /* ea26cc: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea26d0(); return;
}

void f_ea26d0(void) {
  LOAD_REGS();
L_ea26d0: /* ea26d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea26d1: mov ebx, esp */
  ebx = esp;
/* ea26d3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea26d6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea26d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea26dc: jmp 0xea26e1 */
  goto L_ea26e1;
L_ea26e1: /* ea26e1: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea26e4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea26e7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea26ea: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea26ed: movss xmm4, dword ptr [edx] */
  guest_unsupported(0xea26ed); /* movss xmm4, dword ptr [edx] */
/* ea26f1: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea26f1); /* shufps xmm4, xmm4, 0 */
/* ea26f5: movlps xmm3, qword ptr [ecx] */
  guest_unsupported(0xea26f5); /* movlps xmm3, qword ptr [ecx] */
/* ea26f8: movhps xmm3, qword ptr [ecx + 8] */
  guest_unsupported(0xea26f8); /* movhps xmm3, qword ptr [ecx + 8] */
/* ea26fc: mulps xmm4, xmm3 */
  guest_unsupported(0xea26fc); /* mulps xmm4, xmm3 */
/* ea26ff: movss xmm5, dword ptr [edx + 4] */
  guest_unsupported(0xea26ff); /* movss xmm5, dword ptr [edx + 4] */
/* ea2704: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea2704); /* shufps xmm5, xmm5, 0 */
/* ea2708: movlps xmm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea2708); /* movlps xmm2, qword ptr [ecx + 0x10] */
/* ea270c: movhps xmm2, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea270c); /* movhps xmm2, qword ptr [ecx + 0x18] */
/* ea2710: mulps xmm5, xmm2 */
  guest_unsupported(0xea2710); /* mulps xmm5, xmm2 */
/* ea2713: addps xmm4, xmm5 */
  guest_unsupported(0xea2713); /* addps xmm4, xmm5 */
/* ea2716: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea2716); /* movss xmm5, dword ptr [edx + 8] */
/* ea271b: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea271b); /* shufps xmm5, xmm5, 0 */
/* ea271f: movlps xmm1, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea271f); /* movlps xmm1, qword ptr [ecx + 0x20] */
/* ea2723: movhps xmm1, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea2723); /* movhps xmm1, qword ptr [ecx + 0x28] */
/* ea2727: mulps xmm5, xmm1 */
  guest_unsupported(0xea2727); /* mulps xmm5, xmm1 */
/* ea272a: addps xmm4, xmm5 */
  guest_unsupported(0xea272a); /* addps xmm4, xmm5 */
/* ea272d: movss xmm5, dword ptr [edx + 0xc] */
  guest_unsupported(0xea272d); /* movss xmm5, dword ptr [edx + 0xc] */
/* ea2732: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea2732); /* shufps xmm5, xmm5, 0 */
/* ea2736: movlps xmm0, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea2736); /* movlps xmm0, qword ptr [ecx + 0x30] */
/* ea273a: movhps xmm0, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea273a); /* movhps xmm0, qword ptr [ecx + 0x38] */
/* ea273e: mulps xmm5, xmm0 */
  guest_unsupported(0xea273e); /* mulps xmm5, xmm0 */
/* ea2741: addps xmm4, xmm5 */
  guest_unsupported(0xea2741); /* addps xmm4, xmm5 */
/* ea2744: movss xmm5, dword ptr [edx + 0x10] */
  guest_unsupported(0xea2744); /* movss xmm5, dword ptr [edx + 0x10] */
/* ea2749: movss xmm6, dword ptr [edx + 0x14] */
  guest_unsupported(0xea2749); /* movss xmm6, dword ptr [edx + 0x14] */
/* ea274e: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea274e); /* shufps xmm5, xmm5, 0 */
/* ea2752: mulps xmm5, xmm3 */
  guest_unsupported(0xea2752); /* mulps xmm5, xmm3 */
/* ea2755: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2755); /* shufps xmm6, xmm6, 0 */
/* ea2759: mulps xmm6, xmm2 */
  guest_unsupported(0xea2759); /* mulps xmm6, xmm2 */
/* ea275c: addps xmm5, xmm6 */
  guest_unsupported(0xea275c); /* addps xmm5, xmm6 */
/* ea275f: movss xmm6, dword ptr [edx + 0x18] */
  guest_unsupported(0xea275f); /* movss xmm6, dword ptr [edx + 0x18] */
/* ea2764: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2764); /* shufps xmm6, xmm6, 0 */
/* ea2768: mulps xmm6, xmm1 */
  guest_unsupported(0xea2768); /* mulps xmm6, xmm1 */
/* ea276b: addps xmm5, xmm6 */
  guest_unsupported(0xea276b); /* addps xmm5, xmm6 */
/* ea276e: movss xmm6, dword ptr [edx + 0x1c] */
  guest_unsupported(0xea276e); /* movss xmm6, dword ptr [edx + 0x1c] */
/* ea2773: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2773); /* shufps xmm6, xmm6, 0 */
/* ea2777: mulps xmm6, xmm0 */
  guest_unsupported(0xea2777); /* mulps xmm6, xmm0 */
/* ea277a: addps xmm5, xmm6 */
  guest_unsupported(0xea277a); /* addps xmm5, xmm6 */
/* ea277d: movss xmm6, dword ptr [edx + 0x20] */
  guest_unsupported(0xea277d); /* movss xmm6, dword ptr [edx + 0x20] */
/* ea2782: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2782); /* shufps xmm6, xmm6, 0 */
/* ea2786: mulps xmm6, xmm3 */
  guest_unsupported(0xea2786); /* mulps xmm6, xmm3 */
/* ea2789: mov ecx, eax */
  ecx = eax;
/* ea278b: movss xmm7, dword ptr [edx + 0x24] */
  guest_unsupported(0xea278b); /* movss xmm7, dword ptr [edx + 0x24] */
/* ea2790: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea2790); /* shufps xmm7, xmm7, 0 */
/* ea2794: mulps xmm7, xmm2 */
  guest_unsupported(0xea2794); /* mulps xmm7, xmm2 */
/* ea2797: addps xmm6, xmm7 */
  guest_unsupported(0xea2797); /* addps xmm6, xmm7 */
/* ea279a: movss xmm7, dword ptr [edx + 0x28] */
  guest_unsupported(0xea279a); /* movss xmm7, dword ptr [edx + 0x28] */
/* ea279f: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea279f); /* shufps xmm7, xmm7, 0 */
/* ea27a3: mulps xmm7, xmm1 */
  guest_unsupported(0xea27a3); /* mulps xmm7, xmm1 */
/* ea27a6: addps xmm6, xmm7 */
  guest_unsupported(0xea27a6); /* addps xmm6, xmm7 */
/* ea27a9: movss xmm7, dword ptr [edx + 0x2c] */
  guest_unsupported(0xea27a9); /* movss xmm7, dword ptr [edx + 0x2c] */
/* ea27ae: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea27ae); /* shufps xmm7, xmm7, 0 */
/* ea27b2: mulps xmm7, xmm0 */
  guest_unsupported(0xea27b2); /* mulps xmm7, xmm0 */
/* ea27b5: addps xmm6, xmm7 */
  guest_unsupported(0xea27b5); /* addps xmm6, xmm7 */
/* ea27b8: movss xmm7, dword ptr [edx + 0x30] */
  guest_unsupported(0xea27b8); /* movss xmm7, dword ptr [edx + 0x30] */
/* ea27bd: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea27bd); /* shufps xmm7, xmm7, 0 */
/* ea27c1: mulps xmm7, xmm3 */
  guest_unsupported(0xea27c1); /* mulps xmm7, xmm3 */
/* ea27c4: movss xmm3, dword ptr [edx + 0x34] */
  guest_unsupported(0xea27c4); /* movss xmm3, dword ptr [edx + 0x34] */
/* ea27c9: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea27c9); /* shufps xmm3, xmm3, 0 */
/* ea27cd: mulps xmm3, xmm2 */
  guest_unsupported(0xea27cd); /* mulps xmm3, xmm2 */
/* ea27d0: addps xmm7, xmm3 */
  guest_unsupported(0xea27d0); /* addps xmm7, xmm3 */
/* ea27d3: movss xmm2, dword ptr [edx + 0x38] */
  guest_unsupported(0xea27d3); /* movss xmm2, dword ptr [edx + 0x38] */
/* ea27d8: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea27d8); /* shufps xmm2, xmm2, 0 */
/* ea27dc: mulps xmm2, xmm1 */
  guest_unsupported(0xea27dc); /* mulps xmm2, xmm1 */
/* ea27df: movss xmm1, dword ptr [edx + 0x3c] */
  guest_unsupported(0xea27df); /* movss xmm1, dword ptr [edx + 0x3c] */
/* ea27e4: movlps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea27e4); /* movlps qword ptr [ecx], xmm4 */
/* ea27e7: movhps qword ptr [ecx + 8], xmm4 */
  guest_unsupported(0xea27e7); /* movhps qword ptr [ecx + 8], xmm4 */
/* ea27eb: movlps qword ptr [ecx + 0x10], xmm5 */
  guest_unsupported(0xea27eb); /* movlps qword ptr [ecx + 0x10], xmm5 */
/* ea27ef: movhps qword ptr [ecx + 0x18], xmm5 */
  guest_unsupported(0xea27ef); /* movhps qword ptr [ecx + 0x18], xmm5 */
/* ea27f3: movlps qword ptr [ecx + 0x20], xmm6 */
  guest_unsupported(0xea27f3); /* movlps qword ptr [ecx + 0x20], xmm6 */
/* ea27f7: movhps qword ptr [ecx + 0x28], xmm6 */
  guest_unsupported(0xea27f7); /* movhps qword ptr [ecx + 0x28], xmm6 */
/* ea27fb: addps xmm7, xmm2 */
  guest_unsupported(0xea27fb); /* addps xmm7, xmm2 */
/* ea27fe: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea27fe); /* shufps xmm1, xmm1, 0 */
/* ea2802: mulps xmm1, xmm0 */
  guest_unsupported(0xea2802); /* mulps xmm1, xmm0 */
/* ea2805: addps xmm7, xmm1 */
  guest_unsupported(0xea2805); /* addps xmm7, xmm1 */
/* ea2808: movlps qword ptr [ecx + 0x30], xmm7 */
  guest_unsupported(0xea2808); /* movlps qword ptr [ecx + 0x30], xmm7 */
/* ea280c: movhps qword ptr [ecx + 0x38], xmm7 */
  guest_unsupported(0xea280c); /* movhps qword ptr [ecx + 0x38], xmm7 */
/* ea2810: mov esp, ebx */
  esp = ebx;
/* ea2812: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2813: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea26de(void) {
  LOAD_REGS();
L_ea26de: /* ea26de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea26df: mov ebx, esp */
  ebx = esp;
/* ea26e1: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea26e4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea26e7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea26ea: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea26ed: movss xmm4, dword ptr [edx] */
  guest_unsupported(0xea26ed); /* movss xmm4, dword ptr [edx] */
/* ea26f1: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea26f1); /* shufps xmm4, xmm4, 0 */
/* ea26f5: movlps xmm3, qword ptr [ecx] */
  guest_unsupported(0xea26f5); /* movlps xmm3, qword ptr [ecx] */
/* ea26f8: movhps xmm3, qword ptr [ecx + 8] */
  guest_unsupported(0xea26f8); /* movhps xmm3, qword ptr [ecx + 8] */
/* ea26fc: mulps xmm4, xmm3 */
  guest_unsupported(0xea26fc); /* mulps xmm4, xmm3 */
/* ea26ff: movss xmm5, dword ptr [edx + 4] */
  guest_unsupported(0xea26ff); /* movss xmm5, dword ptr [edx + 4] */
/* ea2704: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea2704); /* shufps xmm5, xmm5, 0 */
/* ea2708: movlps xmm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea2708); /* movlps xmm2, qword ptr [ecx + 0x10] */
/* ea270c: movhps xmm2, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea270c); /* movhps xmm2, qword ptr [ecx + 0x18] */
/* ea2710: mulps xmm5, xmm2 */
  guest_unsupported(0xea2710); /* mulps xmm5, xmm2 */
/* ea2713: addps xmm4, xmm5 */
  guest_unsupported(0xea2713); /* addps xmm4, xmm5 */
/* ea2716: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea2716); /* movss xmm5, dword ptr [edx + 8] */
/* ea271b: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea271b); /* shufps xmm5, xmm5, 0 */
/* ea271f: movlps xmm1, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea271f); /* movlps xmm1, qword ptr [ecx + 0x20] */
/* ea2723: movhps xmm1, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea2723); /* movhps xmm1, qword ptr [ecx + 0x28] */
/* ea2727: mulps xmm5, xmm1 */
  guest_unsupported(0xea2727); /* mulps xmm5, xmm1 */
/* ea272a: addps xmm4, xmm5 */
  guest_unsupported(0xea272a); /* addps xmm4, xmm5 */
/* ea272d: movss xmm5, dword ptr [edx + 0xc] */
  guest_unsupported(0xea272d); /* movss xmm5, dword ptr [edx + 0xc] */
/* ea2732: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea2732); /* shufps xmm5, xmm5, 0 */
/* ea2736: movlps xmm0, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea2736); /* movlps xmm0, qword ptr [ecx + 0x30] */
/* ea273a: movhps xmm0, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea273a); /* movhps xmm0, qword ptr [ecx + 0x38] */
/* ea273e: mulps xmm5, xmm0 */
  guest_unsupported(0xea273e); /* mulps xmm5, xmm0 */
/* ea2741: addps xmm4, xmm5 */
  guest_unsupported(0xea2741); /* addps xmm4, xmm5 */
/* ea2744: movss xmm5, dword ptr [edx + 0x10] */
  guest_unsupported(0xea2744); /* movss xmm5, dword ptr [edx + 0x10] */
/* ea2749: movss xmm6, dword ptr [edx + 0x14] */
  guest_unsupported(0xea2749); /* movss xmm6, dword ptr [edx + 0x14] */
/* ea274e: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea274e); /* shufps xmm5, xmm5, 0 */
/* ea2752: mulps xmm5, xmm3 */
  guest_unsupported(0xea2752); /* mulps xmm5, xmm3 */
/* ea2755: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2755); /* shufps xmm6, xmm6, 0 */
/* ea2759: mulps xmm6, xmm2 */
  guest_unsupported(0xea2759); /* mulps xmm6, xmm2 */
/* ea275c: addps xmm5, xmm6 */
  guest_unsupported(0xea275c); /* addps xmm5, xmm6 */
/* ea275f: movss xmm6, dword ptr [edx + 0x18] */
  guest_unsupported(0xea275f); /* movss xmm6, dword ptr [edx + 0x18] */
/* ea2764: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2764); /* shufps xmm6, xmm6, 0 */
/* ea2768: mulps xmm6, xmm1 */
  guest_unsupported(0xea2768); /* mulps xmm6, xmm1 */
/* ea276b: addps xmm5, xmm6 */
  guest_unsupported(0xea276b); /* addps xmm5, xmm6 */
/* ea276e: movss xmm6, dword ptr [edx + 0x1c] */
  guest_unsupported(0xea276e); /* movss xmm6, dword ptr [edx + 0x1c] */
/* ea2773: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2773); /* shufps xmm6, xmm6, 0 */
/* ea2777: mulps xmm6, xmm0 */
  guest_unsupported(0xea2777); /* mulps xmm6, xmm0 */
/* ea277a: addps xmm5, xmm6 */
  guest_unsupported(0xea277a); /* addps xmm5, xmm6 */
/* ea277d: movss xmm6, dword ptr [edx + 0x20] */
  guest_unsupported(0xea277d); /* movss xmm6, dword ptr [edx + 0x20] */
/* ea2782: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea2782); /* shufps xmm6, xmm6, 0 */
/* ea2786: mulps xmm6, xmm3 */
  guest_unsupported(0xea2786); /* mulps xmm6, xmm3 */
/* ea2789: mov ecx, eax */
  ecx = eax;
/* ea278b: movss xmm7, dword ptr [edx + 0x24] */
  guest_unsupported(0xea278b); /* movss xmm7, dword ptr [edx + 0x24] */
/* ea2790: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea2790); /* shufps xmm7, xmm7, 0 */
/* ea2794: mulps xmm7, xmm2 */
  guest_unsupported(0xea2794); /* mulps xmm7, xmm2 */
/* ea2797: addps xmm6, xmm7 */
  guest_unsupported(0xea2797); /* addps xmm6, xmm7 */
/* ea279a: movss xmm7, dword ptr [edx + 0x28] */
  guest_unsupported(0xea279a); /* movss xmm7, dword ptr [edx + 0x28] */
/* ea279f: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea279f); /* shufps xmm7, xmm7, 0 */
/* ea27a3: mulps xmm7, xmm1 */
  guest_unsupported(0xea27a3); /* mulps xmm7, xmm1 */
/* ea27a6: addps xmm6, xmm7 */
  guest_unsupported(0xea27a6); /* addps xmm6, xmm7 */
/* ea27a9: movss xmm7, dword ptr [edx + 0x2c] */
  guest_unsupported(0xea27a9); /* movss xmm7, dword ptr [edx + 0x2c] */
/* ea27ae: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea27ae); /* shufps xmm7, xmm7, 0 */
/* ea27b2: mulps xmm7, xmm0 */
  guest_unsupported(0xea27b2); /* mulps xmm7, xmm0 */
/* ea27b5: addps xmm6, xmm7 */
  guest_unsupported(0xea27b5); /* addps xmm6, xmm7 */
/* ea27b8: movss xmm7, dword ptr [edx + 0x30] */
  guest_unsupported(0xea27b8); /* movss xmm7, dword ptr [edx + 0x30] */
/* ea27bd: shufps xmm7, xmm7, 0 */
  guest_unsupported(0xea27bd); /* shufps xmm7, xmm7, 0 */
/* ea27c1: mulps xmm7, xmm3 */
  guest_unsupported(0xea27c1); /* mulps xmm7, xmm3 */
/* ea27c4: movss xmm3, dword ptr [edx + 0x34] */
  guest_unsupported(0xea27c4); /* movss xmm3, dword ptr [edx + 0x34] */
/* ea27c9: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea27c9); /* shufps xmm3, xmm3, 0 */
/* ea27cd: mulps xmm3, xmm2 */
  guest_unsupported(0xea27cd); /* mulps xmm3, xmm2 */
/* ea27d0: addps xmm7, xmm3 */
  guest_unsupported(0xea27d0); /* addps xmm7, xmm3 */
/* ea27d3: movss xmm2, dword ptr [edx + 0x38] */
  guest_unsupported(0xea27d3); /* movss xmm2, dword ptr [edx + 0x38] */
/* ea27d8: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea27d8); /* shufps xmm2, xmm2, 0 */
/* ea27dc: mulps xmm2, xmm1 */
  guest_unsupported(0xea27dc); /* mulps xmm2, xmm1 */
/* ea27df: movss xmm1, dword ptr [edx + 0x3c] */
  guest_unsupported(0xea27df); /* movss xmm1, dword ptr [edx + 0x3c] */
/* ea27e4: movlps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea27e4); /* movlps qword ptr [ecx], xmm4 */
/* ea27e7: movhps qword ptr [ecx + 8], xmm4 */
  guest_unsupported(0xea27e7); /* movhps qword ptr [ecx + 8], xmm4 */
/* ea27eb: movlps qword ptr [ecx + 0x10], xmm5 */
  guest_unsupported(0xea27eb); /* movlps qword ptr [ecx + 0x10], xmm5 */
/* ea27ef: movhps qword ptr [ecx + 0x18], xmm5 */
  guest_unsupported(0xea27ef); /* movhps qword ptr [ecx + 0x18], xmm5 */
/* ea27f3: movlps qword ptr [ecx + 0x20], xmm6 */
  guest_unsupported(0xea27f3); /* movlps qword ptr [ecx + 0x20], xmm6 */
/* ea27f7: movhps qword ptr [ecx + 0x28], xmm6 */
  guest_unsupported(0xea27f7); /* movhps qword ptr [ecx + 0x28], xmm6 */
/* ea27fb: addps xmm7, xmm2 */
  guest_unsupported(0xea27fb); /* addps xmm7, xmm2 */
/* ea27fe: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea27fe); /* shufps xmm1, xmm1, 0 */
/* ea2802: mulps xmm1, xmm0 */
  guest_unsupported(0xea2802); /* mulps xmm1, xmm0 */
/* ea2805: addps xmm7, xmm1 */
  guest_unsupported(0xea2805); /* addps xmm7, xmm1 */
/* ea2808: movlps qword ptr [ecx + 0x30], xmm7 */
  guest_unsupported(0xea2808); /* movlps qword ptr [ecx + 0x30], xmm7 */
/* ea280c: movhps qword ptr [ecx + 0x38], xmm7 */
  guest_unsupported(0xea280c); /* movhps qword ptr [ecx + 0x38], xmm7 */
/* ea2810: mov esp, ebx */
  esp = ebx;
/* ea2812: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2813: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea2816(void) {
  LOAD_REGS();
L_ea2816: /* ea2816: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea2819: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea2820(); return;
}

void f_ea2820(void) {
  LOAD_REGS();
L_ea2820: /* ea2820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea2821: mov ebx, esp */
  ebx = esp;
/* ea2823: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2826: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea2829: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea282c: jmp 0xea2831 */
  goto L_ea2831;
L_ea2831: /* ea2831: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea2834: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2837: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea283a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea283a); /* movss xmm0, dword ptr [edx] */
/* ea283e: movss xmm6, dword ptr [edx + 4] */
  guest_unsupported(0xea283e); /* movss xmm6, dword ptr [edx + 4] */
/* ea2843: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea2843); /* movss xmm5, dword ptr [edx + 8] */
/* ea2848: movss xmm1, dword ptr [0xebf000] */
  guest_unsupported(0xea2848); /* movss xmm1, dword ptr [0xebf000] */
/* ea2850: movaps xmm2, xmm0 */
  guest_unsupported(0xea2850); /* movaps xmm2, xmm0 */
/* ea2853: mulss xmm2, xmm2 */
  guest_unsupported(0xea2853); /* mulss xmm2, xmm2 */
/* ea2857: movaps xmm3, xmm6 */
  guest_unsupported(0xea2857); /* movaps xmm3, xmm6 */
/* ea285a: mulss xmm3, xmm3 */
  guest_unsupported(0xea285a); /* mulss xmm3, xmm3 */
/* ea285e: addss xmm2, xmm3 */
  guest_unsupported(0xea285e); /* addss xmm2, xmm3 */
/* ea2862: movaps xmm3, xmm5 */
  guest_unsupported(0xea2862); /* movaps xmm3, xmm5 */
/* ea2865: mulss xmm3, xmm3 */
  guest_unsupported(0xea2865); /* mulss xmm3, xmm3 */
/* ea2869: movaps xmm4, xmm3 */
  guest_unsupported(0xea2869); /* movaps xmm4, xmm3 */
/* ea286c: movaps xmm3, xmm2 */
  guest_unsupported(0xea286c); /* movaps xmm3, xmm2 */
/* ea286f: addss xmm3, xmm4 */
  guest_unsupported(0xea286f); /* addss xmm3, xmm4 */
/* ea2873: comiss xmm1, xmm3 */
  guest_unsupported(0xea2873); /* comiss xmm1, xmm3 */
/* ea2876: jbe 0xea288f */
  if ((cf | zf)) goto L_ea288f;
L_ea2878: /* ea2878: xorps xmm0, xmm0 */
  guest_unsupported(0xea2878); /* xorps xmm0, xmm0 */
/* ea287b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea287b); /* movss dword ptr [eax], xmm0 */
/* ea287f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea287f); /* movss dword ptr [eax + 4], xmm0 */
/* ea2884: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea2884); /* movss dword ptr [eax + 8], xmm0 */
/* ea2889: mov esp, ebx */
  esp = ebx;
/* ea288b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea288c: ret 8 */
  esp += 12; SPILL(); return;
L_ea288f: /* ea288f: movss xmm1, dword ptr [0xebf008] */
  guest_unsupported(0xea288f); /* movss xmm1, dword ptr [0xebf008] */
/* ea2897: movss xmm2, dword ptr [0xebf004] */
  guest_unsupported(0xea2897); /* movss xmm2, dword ptr [0xebf004] */
/* ea289f: movaps xmm4, xmm3 */
  guest_unsupported(0xea289f); /* movaps xmm4, xmm3 */
/* ea28a2: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea28a2); /* rsqrtss xmm3, xmm3 */
/* ea28a6: mulss xmm4, xmm3 */
  guest_unsupported(0xea28a6); /* mulss xmm4, xmm3 */
/* ea28aa: mulss xmm2, xmm3 */
  guest_unsupported(0xea28aa); /* mulss xmm2, xmm3 */
/* ea28ae: mulss xmm4, xmm3 */
  guest_unsupported(0xea28ae); /* mulss xmm4, xmm3 */
/* ea28b2: subss xmm1, xmm4 */
  guest_unsupported(0xea28b2); /* subss xmm1, xmm4 */
/* ea28b6: movaps xmm3, xmm0 */
  guest_unsupported(0xea28b6); /* movaps xmm3, xmm0 */
/* ea28b9: movaps xmm0, xmm2 */
  guest_unsupported(0xea28b9); /* movaps xmm0, xmm2 */
/* ea28bc: mulss xmm0, xmm1 */
  guest_unsupported(0xea28bc); /* mulss xmm0, xmm1 */
/* ea28c0: movaps xmm1, xmm0 */
  guest_unsupported(0xea28c0); /* movaps xmm1, xmm0 */
/* ea28c3: mulss xmm1, xmm3 */
  guest_unsupported(0xea28c3); /* mulss xmm1, xmm3 */
/* ea28c7: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea28c7); /* movss dword ptr [eax], xmm1 */
/* ea28cb: movaps xmm1, xmm0 */
  guest_unsupported(0xea28cb); /* movaps xmm1, xmm0 */
/* ea28ce: mulss xmm1, xmm6 */
  guest_unsupported(0xea28ce); /* mulss xmm1, xmm6 */
/* ea28d2: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea28d2); /* movss dword ptr [eax + 4], xmm1 */
/* ea28d7: mulss xmm0, xmm5 */
  guest_unsupported(0xea28d7); /* mulss xmm0, xmm5 */
/* ea28db: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea28db); /* movss dword ptr [eax + 8], xmm0 */
/* ea28e0: mov esp, ebx */
  esp = ebx;
/* ea28e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea28e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea282e(void) {
  LOAD_REGS();
L_ea282e: /* ea282e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea282f: mov ebx, esp */
  ebx = esp;
/* ea2831: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea2834: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2837: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea283a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea283a); /* movss xmm0, dword ptr [edx] */
/* ea283e: movss xmm6, dword ptr [edx + 4] */
  guest_unsupported(0xea283e); /* movss xmm6, dword ptr [edx + 4] */
/* ea2843: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea2843); /* movss xmm5, dword ptr [edx + 8] */
/* ea2848: movss xmm1, dword ptr [0xebf000] */
  guest_unsupported(0xea2848); /* movss xmm1, dword ptr [0xebf000] */
/* ea2850: movaps xmm2, xmm0 */
  guest_unsupported(0xea2850); /* movaps xmm2, xmm0 */
/* ea2853: mulss xmm2, xmm2 */
  guest_unsupported(0xea2853); /* mulss xmm2, xmm2 */
/* ea2857: movaps xmm3, xmm6 */
  guest_unsupported(0xea2857); /* movaps xmm3, xmm6 */
/* ea285a: mulss xmm3, xmm3 */
  guest_unsupported(0xea285a); /* mulss xmm3, xmm3 */
/* ea285e: addss xmm2, xmm3 */
  guest_unsupported(0xea285e); /* addss xmm2, xmm3 */
/* ea2862: movaps xmm3, xmm5 */
  guest_unsupported(0xea2862); /* movaps xmm3, xmm5 */
/* ea2865: mulss xmm3, xmm3 */
  guest_unsupported(0xea2865); /* mulss xmm3, xmm3 */
/* ea2869: movaps xmm4, xmm3 */
  guest_unsupported(0xea2869); /* movaps xmm4, xmm3 */
/* ea286c: movaps xmm3, xmm2 */
  guest_unsupported(0xea286c); /* movaps xmm3, xmm2 */
/* ea286f: addss xmm3, xmm4 */
  guest_unsupported(0xea286f); /* addss xmm3, xmm4 */
/* ea2873: comiss xmm1, xmm3 */
  guest_unsupported(0xea2873); /* comiss xmm1, xmm3 */
/* ea2876: jbe 0xea288f */
  if ((cf | zf)) goto L_ea288f;
L_ea2878: /* ea2878: xorps xmm0, xmm0 */
  guest_unsupported(0xea2878); /* xorps xmm0, xmm0 */
/* ea287b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea287b); /* movss dword ptr [eax], xmm0 */
/* ea287f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea287f); /* movss dword ptr [eax + 4], xmm0 */
/* ea2884: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea2884); /* movss dword ptr [eax + 8], xmm0 */
/* ea2889: mov esp, ebx */
  esp = ebx;
/* ea288b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea288c: ret 8 */
  esp += 12; SPILL(); return;
L_ea288f: /* ea288f: movss xmm1, dword ptr [0xebf008] */
  guest_unsupported(0xea288f); /* movss xmm1, dword ptr [0xebf008] */
/* ea2897: movss xmm2, dword ptr [0xebf004] */
  guest_unsupported(0xea2897); /* movss xmm2, dword ptr [0xebf004] */
/* ea289f: movaps xmm4, xmm3 */
  guest_unsupported(0xea289f); /* movaps xmm4, xmm3 */
/* ea28a2: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea28a2); /* rsqrtss xmm3, xmm3 */
/* ea28a6: mulss xmm4, xmm3 */
  guest_unsupported(0xea28a6); /* mulss xmm4, xmm3 */
/* ea28aa: mulss xmm2, xmm3 */
  guest_unsupported(0xea28aa); /* mulss xmm2, xmm3 */
/* ea28ae: mulss xmm4, xmm3 */
  guest_unsupported(0xea28ae); /* mulss xmm4, xmm3 */
/* ea28b2: subss xmm1, xmm4 */
  guest_unsupported(0xea28b2); /* subss xmm1, xmm4 */
/* ea28b6: movaps xmm3, xmm0 */
  guest_unsupported(0xea28b6); /* movaps xmm3, xmm0 */
/* ea28b9: movaps xmm0, xmm2 */
  guest_unsupported(0xea28b9); /* movaps xmm0, xmm2 */
/* ea28bc: mulss xmm0, xmm1 */
  guest_unsupported(0xea28bc); /* mulss xmm0, xmm1 */
/* ea28c0: movaps xmm1, xmm0 */
  guest_unsupported(0xea28c0); /* movaps xmm1, xmm0 */
/* ea28c3: mulss xmm1, xmm3 */
  guest_unsupported(0xea28c3); /* mulss xmm1, xmm3 */
/* ea28c7: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea28c7); /* movss dword ptr [eax], xmm1 */
/* ea28cb: movaps xmm1, xmm0 */
  guest_unsupported(0xea28cb); /* movaps xmm1, xmm0 */
/* ea28ce: mulss xmm1, xmm6 */
  guest_unsupported(0xea28ce); /* mulss xmm1, xmm6 */
/* ea28d2: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea28d2); /* movss dword ptr [eax + 4], xmm1 */
/* ea28d7: mulss xmm0, xmm5 */
  guest_unsupported(0xea28d7); /* mulss xmm0, xmm5 */
/* ea28db: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea28db); /* movss dword ptr [eax + 8], xmm0 */
/* ea28e0: mov esp, ebx */
  esp = ebx;
/* ea28e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea28e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea28e6(void) {
  LOAD_REGS();
L_ea28e6: /* ea28e6: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea28e9: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea28f0(); return;
}

void f_ea28f0(void) {
  LOAD_REGS();
L_ea28f0: /* ea28f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea28f1: mov ebx, esp */
  ebx = esp;
/* ea28f3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea28f6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea28f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea28fc: jmp 0xea2901 */
  goto L_ea2901;
L_ea2901: /* ea2901: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea2904: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2907: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea290a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea290a); /* movss xmm0, dword ptr [edx] */
/* ea290e: movss xmm4, dword ptr [edx + 4] */
  guest_unsupported(0xea290e); /* movss xmm4, dword ptr [edx + 4] */
/* ea2913: movss xmm6, dword ptr [edx + 8] */
  guest_unsupported(0xea2913); /* movss xmm6, dword ptr [edx + 8] */
/* ea2918: movss xmm1, dword ptr [0xebf00c] */
  guest_unsupported(0xea2918); /* movss xmm1, dword ptr [0xebf00c] */
/* ea2920: movaps xmm2, xmm0 */
  guest_unsupported(0xea2920); /* movaps xmm2, xmm0 */
/* ea2923: mulss xmm2, xmm2 */
  guest_unsupported(0xea2923); /* mulss xmm2, xmm2 */
/* ea2927: movaps xmm3, xmm4 */
  guest_unsupported(0xea2927); /* movaps xmm3, xmm4 */
/* ea292a: mulss xmm3, xmm3 */
  guest_unsupported(0xea292a); /* mulss xmm3, xmm3 */
/* ea292e: addss xmm2, xmm3 */
  guest_unsupported(0xea292e); /* addss xmm2, xmm3 */
/* ea2932: movaps xmm3, xmm6 */
  guest_unsupported(0xea2932); /* movaps xmm3, xmm6 */
/* ea2935: mulss xmm3, xmm3 */
  guest_unsupported(0xea2935); /* mulss xmm3, xmm3 */
/* ea2939: movaps xmm5, xmm3 */
  guest_unsupported(0xea2939); /* movaps xmm5, xmm3 */
/* ea293c: movaps xmm3, xmm2 */
  guest_unsupported(0xea293c); /* movaps xmm3, xmm2 */
/* ea293f: addss xmm3, xmm5 */
  guest_unsupported(0xea293f); /* addss xmm3, xmm5 */
/* ea2943: comiss xmm1, xmm3 */
  guest_unsupported(0xea2943); /* comiss xmm1, xmm3 */
/* ea2946: jbe 0xea2964 */
  if ((cf | zf)) goto L_ea2964;
L_ea2948: /* ea2948: xorps xmm0, xmm0 */
  guest_unsupported(0xea2948); /* xorps xmm0, xmm0 */
/* ea294b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea294b); /* movss dword ptr [eax], xmm0 */
/* ea294f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea294f); /* movss dword ptr [eax + 4], xmm0 */
/* ea2954: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea2954); /* movss dword ptr [eax + 8], xmm0 */
/* ea2959: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea2959); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea295e: mov esp, ebx */
  esp = ebx;
/* ea2960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2961: ret 8 */
  esp += 12; SPILL(); return;
L_ea2964: /* ea2964: movss xmm1, dword ptr [0xebf014] */
  guest_unsupported(0xea2964); /* movss xmm1, dword ptr [0xebf014] */
/* ea296c: movss xmm2, dword ptr [0xebf010] */
  guest_unsupported(0xea296c); /* movss xmm2, dword ptr [0xebf010] */
/* ea2974: movaps xmm5, xmm3 */
  guest_unsupported(0xea2974); /* movaps xmm5, xmm3 */
/* ea2977: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea2977); /* rsqrtss xmm3, xmm3 */
/* ea297b: mulss xmm5, xmm3 */
  guest_unsupported(0xea297b); /* mulss xmm5, xmm3 */
/* ea297f: mulss xmm2, xmm3 */
  guest_unsupported(0xea297f); /* mulss xmm2, xmm3 */
/* ea2983: mulss xmm5, xmm3 */
  guest_unsupported(0xea2983); /* mulss xmm5, xmm3 */
/* ea2987: subss xmm1, xmm5 */
  guest_unsupported(0xea2987); /* subss xmm1, xmm5 */
/* ea298b: movaps xmm3, xmm0 */
  guest_unsupported(0xea298b); /* movaps xmm3, xmm0 */
/* ea298e: movaps xmm0, xmm2 */
  guest_unsupported(0xea298e); /* movaps xmm0, xmm2 */
/* ea2991: mulss xmm0, xmm1 */
  guest_unsupported(0xea2991); /* mulss xmm0, xmm1 */
/* ea2995: movaps xmm1, xmm0 */
  guest_unsupported(0xea2995); /* movaps xmm1, xmm0 */
/* ea2998: mulss xmm1, xmm3 */
  guest_unsupported(0xea2998); /* mulss xmm1, xmm3 */
/* ea299c: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea299c); /* movss dword ptr [eax], xmm1 */
/* ea29a0: movaps xmm1, xmm0 */
  guest_unsupported(0xea29a0); /* movaps xmm1, xmm0 */
/* ea29a3: mulss xmm1, xmm4 */
  guest_unsupported(0xea29a3); /* mulss xmm1, xmm4 */
/* ea29a7: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea29a7); /* movss dword ptr [eax + 4], xmm1 */
/* ea29ac: movaps xmm1, xmm0 */
  guest_unsupported(0xea29ac); /* movaps xmm1, xmm0 */
/* ea29af: mulss xmm1, xmm6 */
  guest_unsupported(0xea29af); /* mulss xmm1, xmm6 */
/* ea29b3: movss dword ptr [eax + 8], xmm1 */
  guest_unsupported(0xea29b3); /* movss dword ptr [eax + 8], xmm1 */
/* ea29b8: mulss xmm0, dword ptr [edx + 0xc] */
  guest_unsupported(0xea29b8); /* mulss xmm0, dword ptr [edx + 0xc] */
/* ea29bd: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea29bd); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea29c2: mov esp, ebx */
  esp = ebx;
/* ea29c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea29c5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea28fe(void) {
  LOAD_REGS();
L_ea28fe: /* ea28fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea28ff: mov ebx, esp */
  ebx = esp;
/* ea2901: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea2904: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2907: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea290a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea290a); /* movss xmm0, dword ptr [edx] */
/* ea290e: movss xmm4, dword ptr [edx + 4] */
  guest_unsupported(0xea290e); /* movss xmm4, dword ptr [edx + 4] */
/* ea2913: movss xmm6, dword ptr [edx + 8] */
  guest_unsupported(0xea2913); /* movss xmm6, dword ptr [edx + 8] */
/* ea2918: movss xmm1, dword ptr [0xebf00c] */
  guest_unsupported(0xea2918); /* movss xmm1, dword ptr [0xebf00c] */
/* ea2920: movaps xmm2, xmm0 */
  guest_unsupported(0xea2920); /* movaps xmm2, xmm0 */
/* ea2923: mulss xmm2, xmm2 */
  guest_unsupported(0xea2923); /* mulss xmm2, xmm2 */
/* ea2927: movaps xmm3, xmm4 */
  guest_unsupported(0xea2927); /* movaps xmm3, xmm4 */
/* ea292a: mulss xmm3, xmm3 */
  guest_unsupported(0xea292a); /* mulss xmm3, xmm3 */
/* ea292e: addss xmm2, xmm3 */
  guest_unsupported(0xea292e); /* addss xmm2, xmm3 */
/* ea2932: movaps xmm3, xmm6 */
  guest_unsupported(0xea2932); /* movaps xmm3, xmm6 */
/* ea2935: mulss xmm3, xmm3 */
  guest_unsupported(0xea2935); /* mulss xmm3, xmm3 */
/* ea2939: movaps xmm5, xmm3 */
  guest_unsupported(0xea2939); /* movaps xmm5, xmm3 */
/* ea293c: movaps xmm3, xmm2 */
  guest_unsupported(0xea293c); /* movaps xmm3, xmm2 */
/* ea293f: addss xmm3, xmm5 */
  guest_unsupported(0xea293f); /* addss xmm3, xmm5 */
/* ea2943: comiss xmm1, xmm3 */
  guest_unsupported(0xea2943); /* comiss xmm1, xmm3 */
/* ea2946: jbe 0xea2964 */
  if ((cf | zf)) goto L_ea2964;
L_ea2948: /* ea2948: xorps xmm0, xmm0 */
  guest_unsupported(0xea2948); /* xorps xmm0, xmm0 */
/* ea294b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea294b); /* movss dword ptr [eax], xmm0 */
/* ea294f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea294f); /* movss dword ptr [eax + 4], xmm0 */
/* ea2954: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea2954); /* movss dword ptr [eax + 8], xmm0 */
/* ea2959: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea2959); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea295e: mov esp, ebx */
  esp = ebx;
/* ea2960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2961: ret 8 */
  esp += 12; SPILL(); return;
L_ea2964: /* ea2964: movss xmm1, dword ptr [0xebf014] */
  guest_unsupported(0xea2964); /* movss xmm1, dword ptr [0xebf014] */
/* ea296c: movss xmm2, dword ptr [0xebf010] */
  guest_unsupported(0xea296c); /* movss xmm2, dword ptr [0xebf010] */
/* ea2974: movaps xmm5, xmm3 */
  guest_unsupported(0xea2974); /* movaps xmm5, xmm3 */
/* ea2977: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea2977); /* rsqrtss xmm3, xmm3 */
/* ea297b: mulss xmm5, xmm3 */
  guest_unsupported(0xea297b); /* mulss xmm5, xmm3 */
/* ea297f: mulss xmm2, xmm3 */
  guest_unsupported(0xea297f); /* mulss xmm2, xmm3 */
/* ea2983: mulss xmm5, xmm3 */
  guest_unsupported(0xea2983); /* mulss xmm5, xmm3 */
/* ea2987: subss xmm1, xmm5 */
  guest_unsupported(0xea2987); /* subss xmm1, xmm5 */
/* ea298b: movaps xmm3, xmm0 */
  guest_unsupported(0xea298b); /* movaps xmm3, xmm0 */
/* ea298e: movaps xmm0, xmm2 */
  guest_unsupported(0xea298e); /* movaps xmm0, xmm2 */
/* ea2991: mulss xmm0, xmm1 */
  guest_unsupported(0xea2991); /* mulss xmm0, xmm1 */
/* ea2995: movaps xmm1, xmm0 */
  guest_unsupported(0xea2995); /* movaps xmm1, xmm0 */
/* ea2998: mulss xmm1, xmm3 */
  guest_unsupported(0xea2998); /* mulss xmm1, xmm3 */
/* ea299c: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea299c); /* movss dword ptr [eax], xmm1 */
/* ea29a0: movaps xmm1, xmm0 */
  guest_unsupported(0xea29a0); /* movaps xmm1, xmm0 */
/* ea29a3: mulss xmm1, xmm4 */
  guest_unsupported(0xea29a3); /* mulss xmm1, xmm4 */
/* ea29a7: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea29a7); /* movss dword ptr [eax + 4], xmm1 */
/* ea29ac: movaps xmm1, xmm0 */
  guest_unsupported(0xea29ac); /* movaps xmm1, xmm0 */
/* ea29af: mulss xmm1, xmm6 */
  guest_unsupported(0xea29af); /* mulss xmm1, xmm6 */
/* ea29b3: movss dword ptr [eax + 8], xmm1 */
  guest_unsupported(0xea29b3); /* movss dword ptr [eax + 8], xmm1 */
/* ea29b8: mulss xmm0, dword ptr [edx + 0xc] */
  guest_unsupported(0xea29b8); /* mulss xmm0, dword ptr [edx + 0xc] */
/* ea29bd: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea29bd); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea29c2: mov esp, ebx */
  esp = ebx;
/* ea29c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea29c5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea29c9(void) {
  LOAD_REGS();
L_ea29c9: /* ea29c9: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea29d0(); return;
}

void f_ea29d0(void) {
  LOAD_REGS();
L_ea29d0: /* ea29d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea29d1: mov ebx, esp */
  ebx = esp;
/* ea29d3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea29d6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea29d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea29dc: jmp 0xea29e1 */
  goto L_ea29e1;
L_ea29e1: /* ea29e1: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esp = r;
  }
/* ea29e7: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea29ea: movlps xmm0, qword ptr [eax + 8] */
  guest_unsupported(0xea29ea); /* movlps xmm0, qword ptr [eax + 8] */
/* ea29ee: movlps xmm4, qword ptr [eax + 0x28] */
  guest_unsupported(0xea29ee); /* movlps xmm4, qword ptr [eax + 0x28] */
/* ea29f2: movhps xmm0, qword ptr [eax + 0x18] */
  guest_unsupported(0xea29f2); /* movhps xmm0, qword ptr [eax + 0x18] */
/* ea29f6: movhps xmm4, qword ptr [eax + 0x38] */
  guest_unsupported(0xea29f6); /* movhps xmm4, qword ptr [eax + 0x38] */
/* ea29fa: movlps xmm3, qword ptr [eax + 0x20] */
  guest_unsupported(0xea29fa); /* movlps xmm3, qword ptr [eax + 0x20] */
/* ea29fe: movlps xmm1, qword ptr [eax] */
  guest_unsupported(0xea29fe); /* movlps xmm1, qword ptr [eax] */
/* ea2a01: movhps xmm3, qword ptr [eax + 0x30] */
  guest_unsupported(0xea2a01); /* movhps xmm3, qword ptr [eax + 0x30] */
/* ea2a05: movhps xmm1, qword ptr [eax + 0x10] */
  guest_unsupported(0xea2a05); /* movhps xmm1, qword ptr [eax + 0x10] */
/* ea2a09: movaps xmm5, xmm0 */
  guest_unsupported(0xea2a09); /* movaps xmm5, xmm0 */
/* ea2a0c: shufps xmm0, xmm4, 0x88 */
  guest_unsupported(0xea2a0c); /* shufps xmm0, xmm4, 0x88 */
/* ea2a10: shufps xmm4, xmm5, 0xdd */
  guest_unsupported(0xea2a10); /* shufps xmm4, xmm5, 0xdd */
/* ea2a14: movaps xmm5, xmm4 */
  guest_unsupported(0xea2a14); /* movaps xmm5, xmm4 */
/* ea2a17: mulps xmm5, xmm0 */
  guest_unsupported(0xea2a17); /* mulps xmm5, xmm0 */
/* ea2a1a: shufps xmm5, xmm5, 0xb1 */
  guest_unsupported(0xea2a1a); /* shufps xmm5, xmm5, 0xb1 */
/* ea2a1e: movaps xmm6, xmm5 */
  guest_unsupported(0xea2a1e); /* movaps xmm6, xmm5 */
/* ea2a21: shufps xmm5, xmm5, 0x4e */
  guest_unsupported(0xea2a21); /* shufps xmm5, xmm5, 0x4e */
/* ea2a25: movaps xmm7, xmm3 */
  guest_unsupported(0xea2a25); /* movaps xmm7, xmm3 */
/* ea2a28: shufps xmm3, xmm1, 0xdd */
  guest_unsupported(0xea2a28); /* shufps xmm3, xmm1, 0xdd */
/* ea2a2c: shufps xmm1, xmm7, 0x88 */
  guest_unsupported(0xea2a2c); /* shufps xmm1, xmm7, 0x88 */
/* ea2a30: movaps xmm7, xmm3 */
  guest_unsupported(0xea2a30); /* movaps xmm7, xmm3 */
/* ea2a33: mulps xmm3, xmm5 */
  guest_unsupported(0xea2a33); /* mulps xmm3, xmm5 */
/* ea2a36: xorps xmm2, xmm2 */
  guest_unsupported(0xea2a36); /* xorps xmm2, xmm2 */
/* ea2a39: mulps xmm5, xmm1 */
  guest_unsupported(0xea2a39); /* mulps xmm5, xmm1 */
/* ea2a3c: movaps xmmword ptr [esp + 0x30], xmm5 */
  guest_unsupported(0xea2a3c); /* movaps xmmword ptr [esp + 0x30], xmm5 */
/* ea2a41: movaps xmm5, xmm7 */
  guest_unsupported(0xea2a41); /* movaps xmm5, xmm7 */
/* ea2a44: mulps xmm7, xmm6 */
  guest_unsupported(0xea2a44); /* mulps xmm7, xmm6 */
/* ea2a47: mulps xmm6, xmm1 */
  guest_unsupported(0xea2a47); /* mulps xmm6, xmm1 */
/* ea2a4a: subps xmm3, xmm7 */
  guest_unsupported(0xea2a4a); /* subps xmm3, xmm7 */
/* ea2a4d: movaps xmm7, xmm5 */
  guest_unsupported(0xea2a4d); /* movaps xmm7, xmm5 */
/* ea2a50: mulps xmm5, xmm0 */
  guest_unsupported(0xea2a50); /* mulps xmm5, xmm0 */
/* ea2a53: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2a53); /* shufps xmm0, xmm0, 0x4e */
/* ea2a57: shufps xmm5, xmm5, 0xb1 */
  guest_unsupported(0xea2a57); /* shufps xmm5, xmm5, 0xb1 */
/* ea2a5b: movaps xmmword ptr [esp + 0x40], xmm6 */
  guest_unsupported(0xea2a5b); /* movaps xmmword ptr [esp + 0x40], xmm6 */
/* ea2a60: movaps xmm6, xmm4 */
  guest_unsupported(0xea2a60); /* movaps xmm6, xmm4 */
/* ea2a63: mulps xmm6, xmm5 */
  guest_unsupported(0xea2a63); /* mulps xmm6, xmm5 */
/* ea2a66: addps xmm6, xmm3 */
  guest_unsupported(0xea2a66); /* addps xmm6, xmm3 */
/* ea2a69: movaps xmm3, xmm5 */
  guest_unsupported(0xea2a69); /* movaps xmm3, xmm5 */
/* ea2a6c: shufps xmm5, xmm5, 0x4e */
  guest_unsupported(0xea2a6c); /* shufps xmm5, xmm5, 0x4e */
/* ea2a70: mulps xmm3, xmm1 */
  guest_unsupported(0xea2a70); /* mulps xmm3, xmm1 */
/* ea2a73: movaps xmmword ptr [esp + 0x50], xmm3 */
  guest_unsupported(0xea2a73); /* movaps xmmword ptr [esp + 0x50], xmm3 */
/* ea2a78: movaps xmm3, xmm4 */
  guest_unsupported(0xea2a78); /* movaps xmm3, xmm4 */
/* ea2a7b: mulps xmm3, xmm5 */
  guest_unsupported(0xea2a7b); /* mulps xmm3, xmm5 */
/* ea2a7e: mulps xmm5, xmm1 */
  guest_unsupported(0xea2a7e); /* mulps xmm5, xmm1 */
/* ea2a81: subps xmm6, xmm3 */
  guest_unsupported(0xea2a81); /* subps xmm6, xmm3 */
/* ea2a84: movaps xmm3, xmm7 */
  guest_unsupported(0xea2a84); /* movaps xmm3, xmm7 */
/* ea2a87: shufps xmm7, xmm7, 0x4e */
  guest_unsupported(0xea2a87); /* shufps xmm7, xmm7, 0x4e */
/* ea2a8b: mulps xmm7, xmm4 */
  guest_unsupported(0xea2a8b); /* mulps xmm7, xmm4 */
/* ea2a8e: shufps xmm7, xmm7, 0xb1 */
  guest_unsupported(0xea2a8e); /* shufps xmm7, xmm7, 0xb1 */
/* ea2a92: movaps xmmword ptr [esp + 0x60], xmm5 */
  guest_unsupported(0xea2a92); /* movaps xmmword ptr [esp + 0x60], xmm5 */
/* ea2a97: movaps xmm5, xmm0 */
  guest_unsupported(0xea2a97); /* movaps xmm5, xmm0 */
/* ea2a9a: mulps xmm0, xmm7 */
  guest_unsupported(0xea2a9a); /* mulps xmm0, xmm7 */
/* ea2a9d: addps xmm0, xmm6 */
  guest_unsupported(0xea2a9d); /* addps xmm0, xmm6 */
/* ea2aa0: movaps xmm6, xmm7 */
  guest_unsupported(0xea2aa0); /* movaps xmm6, xmm7 */
/* ea2aa3: shufps xmm7, xmm7, 0x4e */
  guest_unsupported(0xea2aa3); /* shufps xmm7, xmm7, 0x4e */
/* ea2aa7: mulps xmm6, xmm1 */
  guest_unsupported(0xea2aa7); /* mulps xmm6, xmm1 */
/* ea2aaa: movaps xmmword ptr [esp + 0x70], xmm4 */
  guest_unsupported(0xea2aaa); /* movaps xmmword ptr [esp + 0x70], xmm4 */
/* ea2aaf: movaps xmm4, xmm5 */
  guest_unsupported(0xea2aaf); /* movaps xmm4, xmm5 */
/* ea2ab2: mulps xmm5, xmm7 */
  guest_unsupported(0xea2ab2); /* mulps xmm5, xmm7 */
/* ea2ab5: mulps xmm7, xmm1 */
  guest_unsupported(0xea2ab5); /* mulps xmm7, xmm1 */
/* ea2ab8: subps xmm0, xmm5 */
  guest_unsupported(0xea2ab8); /* subps xmm0, xmm5 */
/* ea2abb: subps xmm7, xmm6 */
  guest_unsupported(0xea2abb); /* subps xmm7, xmm6 */
/* ea2abe: movaps xmm5, xmm1 */
  guest_unsupported(0xea2abe); /* movaps xmm5, xmm1 */
/* ea2ac1: mulps xmm1, xmm0 */
  guest_unsupported(0xea2ac1); /* mulps xmm1, xmm0 */
/* ea2ac4: shufps xmm7, xmm7, 0x4e */
  guest_unsupported(0xea2ac4); /* shufps xmm7, xmm7, 0x4e */
/* ea2ac8: movaps xmm6, xmm1 */
  guest_unsupported(0xea2ac8); /* movaps xmm6, xmm1 */
/* ea2acb: shufps xmm1, xmm1, 0x4e */
  guest_unsupported(0xea2acb); /* shufps xmm1, xmm1, 0x4e */
/* ea2acf: movaps xmmword ptr [esp + 0x20], xmm0 */
  guest_unsupported(0xea2acf); /* movaps xmmword ptr [esp + 0x20], xmm0 */
/* ea2ad4: addps xmm1, xmm6 */
  guest_unsupported(0xea2ad4); /* addps xmm1, xmm6 */
/* ea2ad7: movaps xmm0, xmm1 */
  guest_unsupported(0xea2ad7); /* movaps xmm0, xmm1 */
/* ea2ada: shufps xmm1, xmm1, 0xb1 */
  guest_unsupported(0xea2ada); /* shufps xmm1, xmm1, 0xb1 */
/* ea2ade: addss xmm1, xmm0 */
  guest_unsupported(0xea2ade); /* addss xmm1, xmm0 */
/* ea2ae2: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea2ae2); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea2ae7: movaps xmm0, xmm5 */
  guest_unsupported(0xea2ae7); /* movaps xmm0, xmm5 */
/* ea2aea: mulps xmm5, xmm3 */
  guest_unsupported(0xea2aea); /* mulps xmm5, xmm3 */
/* ea2aed: shufps xmm5, xmm5, 0xb1 */
  guest_unsupported(0xea2aed); /* shufps xmm5, xmm5, 0xb1 */
/* ea2af1: movaps xmm6, xmm5 */
  guest_unsupported(0xea2af1); /* movaps xmm6, xmm5 */
/* ea2af4: shufps xmm5, xmm5, 0x4e */
  guest_unsupported(0xea2af4); /* shufps xmm5, xmm5, 0x4e */
/* ea2af8: movaps xmmword ptr [esp + 0x80], xmm4 */
  guest_unsupported(0xea2af8); /* movaps xmmword ptr [esp + 0x80], xmm4 */
/* ea2b00: movaps xmm4, xmmword ptr [esp + 0x70] */
  guest_unsupported(0xea2b00); /* movaps xmm4, xmmword ptr [esp + 0x70] */
/* ea2b05: movaps xmmword ptr [esp + 0x90], xmm3 */
  guest_unsupported(0xea2b05); /* movaps xmmword ptr [esp + 0x90], xmm3 */
/* ea2b0d: movaps xmm3, xmm4 */
  guest_unsupported(0xea2b0d); /* movaps xmm3, xmm4 */
/* ea2b10: mulps xmm3, xmm6 */
  guest_unsupported(0xea2b10); /* mulps xmm3, xmm6 */
/* ea2b13: addps xmm3, xmm7 */
  guest_unsupported(0xea2b13); /* addps xmm3, xmm7 */
/* ea2b16: movaps xmm7, xmm4 */
  guest_unsupported(0xea2b16); /* movaps xmm7, xmm4 */
/* ea2b19: mulps xmm7, xmm5 */
  guest_unsupported(0xea2b19); /* mulps xmm7, xmm5 */
/* ea2b1c: subps xmm7, xmm3 */
  guest_unsupported(0xea2b1c); /* subps xmm7, xmm3 */
/* ea2b1f: movaps xmm3, xmm4 */
  guest_unsupported(0xea2b1f); /* movaps xmm3, xmm4 */
/* ea2b22: mulps xmm3, xmm0 */
  guest_unsupported(0xea2b22); /* mulps xmm3, xmm0 */
/* ea2b25: shufps xmm3, xmm3, 0xb1 */
  guest_unsupported(0xea2b25); /* shufps xmm3, xmm3, 0xb1 */
/* ea2b29: movaps xmmword ptr [esp + 0xa0], xmm5 */
  guest_unsupported(0xea2b29); /* movaps xmmword ptr [esp + 0xa0], xmm5 */
/* ea2b31: movaps xmm5, xmmword ptr [esp + 0x90] */
  guest_unsupported(0xea2b31); /* movaps xmm5, xmmword ptr [esp + 0x90] */
/* ea2b39: movaps xmmword ptr [esp + 0xb0], xmm6 */
  guest_unsupported(0xea2b39); /* movaps xmmword ptr [esp + 0xb0], xmm6 */
/* ea2b41: movaps xmm6, xmm5 */
  guest_unsupported(0xea2b41); /* movaps xmm6, xmm5 */
/* ea2b44: mulps xmm5, xmm3 */
  guest_unsupported(0xea2b44); /* mulps xmm5, xmm3 */
/* ea2b47: addps xmm5, xmm7 */
  guest_unsupported(0xea2b47); /* addps xmm5, xmm7 */
/* ea2b4a: movaps xmm7, xmm3 */
  guest_unsupported(0xea2b4a); /* movaps xmm7, xmm3 */
/* ea2b4d: shufps xmm3, xmm3, 0x4e */
  guest_unsupported(0xea2b4d); /* shufps xmm3, xmm3, 0x4e */
/* ea2b51: movaps xmmword ptr [esp + 0xc0], xmm4 */
  guest_unsupported(0xea2b51); /* movaps xmmword ptr [esp + 0xc0], xmm4 */
/* ea2b59: movaps xmm4, xmm6 */
  guest_unsupported(0xea2b59); /* movaps xmm4, xmm6 */
/* ea2b5c: mulps xmm4, xmm3 */
  guest_unsupported(0xea2b5c); /* mulps xmm4, xmm3 */
/* ea2b5f: movaps xmmword ptr [esp + 0xd0], xmm6 */
  guest_unsupported(0xea2b5f); /* movaps xmmword ptr [esp + 0xd0], xmm6 */
/* ea2b67: movaps xmm6, xmm5 */
  guest_unsupported(0xea2b67); /* movaps xmm6, xmm5 */
/* ea2b6a: subps xmm6, xmm4 */
  guest_unsupported(0xea2b6a); /* subps xmm6, xmm4 */
/* ea2b6d: movaps xmm4, xmmword ptr [esp + 0x30] */
  guest_unsupported(0xea2b6d); /* movaps xmm4, xmmword ptr [esp + 0x30] */
/* ea2b72: movaps xmm5, xmmword ptr [esp + 0x40] */
  guest_unsupported(0xea2b72); /* movaps xmm5, xmmword ptr [esp + 0x40] */
/* ea2b77: subps xmm4, xmm5 */
  guest_unsupported(0xea2b77); /* subps xmm4, xmm5 */
/* ea2b7a: shufps xmm4, xmm4, 0x4e */
  guest_unsupported(0xea2b7a); /* shufps xmm4, xmm4, 0x4e */
/* ea2b7e: movaps xmm5, xmmword ptr [esp + 0x80] */
  guest_unsupported(0xea2b7e); /* movaps xmm5, xmmword ptr [esp + 0x80] */
/* ea2b86: mulps xmm7, xmm5 */
  guest_unsupported(0xea2b86); /* mulps xmm7, xmm5 */
/* ea2b89: mulps xmm3, xmm5 */
  guest_unsupported(0xea2b89); /* mulps xmm3, xmm5 */
/* ea2b8c: subps xmm4, xmm7 */
  guest_unsupported(0xea2b8c); /* subps xmm4, xmm7 */
/* ea2b8f: mulps xmm0, xmm5 */
  guest_unsupported(0xea2b8f); /* mulps xmm0, xmm5 */
/* ea2b92: addps xmm4, xmm3 */
  guest_unsupported(0xea2b92); /* addps xmm4, xmm3 */
/* ea2b95: shufps xmm0, xmm0, 0xb1 */
  guest_unsupported(0xea2b95); /* shufps xmm0, xmm0, 0xb1 */
/* ea2b99: movaps xmm3, xmm0 */
  guest_unsupported(0xea2b99); /* movaps xmm3, xmm0 */
/* ea2b9c: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2b9c); /* shufps xmm0, xmm0, 0x4e */
/* ea2ba0: movaps xmm7, xmmword ptr [esp + 0xc0] */
  guest_unsupported(0xea2ba0); /* movaps xmm7, xmmword ptr [esp + 0xc0] */
/* ea2ba8: movaps xmmword ptr [esp + 0xe0], xmm6 */
  guest_unsupported(0xea2ba8); /* movaps xmmword ptr [esp + 0xe0], xmm6 */
/* ea2bb0: movaps xmm6, xmm7 */
  guest_unsupported(0xea2bb0); /* movaps xmm6, xmm7 */
/* ea2bb3: mulps xmm7, xmm3 */
  guest_unsupported(0xea2bb3); /* mulps xmm7, xmm3 */
/* ea2bb6: mulps xmm6, xmm0 */
  guest_unsupported(0xea2bb6); /* mulps xmm6, xmm0 */
/* ea2bb9: addps xmm4, xmm7 */
  guest_unsupported(0xea2bb9); /* addps xmm4, xmm7 */
/* ea2bbc: subps xmm4, xmm6 */
  guest_unsupported(0xea2bbc); /* subps xmm4, xmm6 */
/* ea2bbf: movaps xmm6, xmmword ptr [esp + 0x60] */
  guest_unsupported(0xea2bbf); /* movaps xmm6, xmmword ptr [esp + 0x60] */
/* ea2bc4: movaps xmm7, xmmword ptr [esp + 0x50] */
  guest_unsupported(0xea2bc4); /* movaps xmm7, xmmword ptr [esp + 0x50] */
/* ea2bc9: subps xmm6, xmm7 */
  guest_unsupported(0xea2bc9); /* subps xmm6, xmm7 */
/* ea2bcc: shufps xmm6, xmm6, 0x4e */
  guest_unsupported(0xea2bcc); /* shufps xmm6, xmm6, 0x4e */
/* ea2bd0: movaps xmm7, xmmword ptr [esp + 0xb0] */
  guest_unsupported(0xea2bd0); /* movaps xmm7, xmmword ptr [esp + 0xb0] */
/* ea2bd8: mulps xmm7, xmm5 */
  guest_unsupported(0xea2bd8); /* mulps xmm7, xmm5 */
/* ea2bdb: subps xmm7, xmm6 */
  guest_unsupported(0xea2bdb); /* subps xmm7, xmm6 */
/* ea2bde: movaps xmm6, xmmword ptr [esp + 0xa0] */
  guest_unsupported(0xea2bde); /* movaps xmm6, xmmword ptr [esp + 0xa0] */
/* ea2be6: mulps xmm5, xmm6 */
  guest_unsupported(0xea2be6); /* mulps xmm5, xmm6 */
/* ea2be9: subps xmm7, xmm5 */
  guest_unsupported(0xea2be9); /* subps xmm7, xmm5 */
/* ea2bec: movaps xmm5, xmmword ptr [esp + 0xd0] */
  guest_unsupported(0xea2bec); /* movaps xmm5, xmmword ptr [esp + 0xd0] */
/* ea2bf4: mulps xmm3, xmm5 */
  guest_unsupported(0xea2bf4); /* mulps xmm3, xmm5 */
/* ea2bf7: mulps xmm5, xmm0 */
  guest_unsupported(0xea2bf7); /* mulps xmm5, xmm0 */
/* ea2bfa: subps xmm7, xmm3 */
  guest_unsupported(0xea2bfa); /* subps xmm7, xmm3 */
/* ea2bfd: movaps xmm0, xmm2 */
  guest_unsupported(0xea2bfd); /* movaps xmm0, xmm2 */
/* ea2c00: movaps xmm2, xmm5 */
  guest_unsupported(0xea2c00); /* movaps xmm2, xmm5 */
/* ea2c03: addps xmm2, xmm7 */
  guest_unsupported(0xea2c03); /* addps xmm2, xmm7 */
/* ea2c06: comiss xmm1, xmm0 */
  guest_unsupported(0xea2c06); /* comiss xmm1, xmm0 */
/* ea2c09: movaps xmm6, xmmword ptr [esp + 0xe0] */
  guest_unsupported(0xea2c09); /* movaps xmm6, xmmword ptr [esp + 0xe0] */
/* ea2c11: je 0xea2c7b */
  if (zf) goto L_ea2c7b;
L_ea2c13: /* ea2c13: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ea2c16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2c18: je 0xea2c21 */
  if (zf) goto L_ea2c21;
L_ea2c1a: /* ea2c1a: movaps xmm0, xmm1 */
  guest_unsupported(0xea2c1a); /* movaps xmm0, xmm1 */
/* ea2c1d: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea2c1d); /* movss dword ptr [eax], xmm0 */
L_ea2c21: /* ea2c21: movaps xmm0, xmm1 */
  guest_unsupported(0xea2c21); /* movaps xmm0, xmm1 */
/* ea2c24: movaps xmm1, xmmword ptr [esp + 0x20] */
  guest_unsupported(0xea2c24); /* movaps xmm1, xmmword ptr [esp + 0x20] */
/* ea2c29: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2c2c: movaps xmm3, xmm0 */
  guest_unsupported(0xea2c2c); /* movaps xmm3, xmm0 */
/* ea2c2f: rcpss xmm0, xmm0 */
  guest_unsupported(0xea2c2f); /* rcpss xmm0, xmm0 */
/* ea2c33: movaps xmm5, xmm0 */
  guest_unsupported(0xea2c33); /* movaps xmm5, xmm0 */
/* ea2c36: mulss xmm0, xmm0 */
  guest_unsupported(0xea2c36); /* mulss xmm0, xmm0 */
/* ea2c3a: mulss xmm3, xmm0 */
  guest_unsupported(0xea2c3a); /* mulss xmm3, xmm0 */
/* ea2c3e: addss xmm5, xmm5 */
  guest_unsupported(0xea2c3e); /* addss xmm5, xmm5 */
/* ea2c42: subss xmm5, xmm3 */
  guest_unsupported(0xea2c42); /* subss xmm5, xmm3 */
/* ea2c46: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea2c46); /* shufps xmm5, xmm5, 0 */
/* ea2c4a: mulps xmm1, xmm5 */
  guest_unsupported(0xea2c4a); /* mulps xmm1, xmm5 */
/* ea2c4d: movlps qword ptr [eax], xmm1 */
  guest_unsupported(0xea2c4d); /* movlps qword ptr [eax], xmm1 */
/* ea2c50: movhps qword ptr [eax + 8], xmm1 */
  guest_unsupported(0xea2c50); /* movhps qword ptr [eax + 8], xmm1 */
/* ea2c54: mulps xmm4, xmm5 */
  guest_unsupported(0xea2c54); /* mulps xmm4, xmm5 */
/* ea2c57: movlps qword ptr [eax + 0x10], xmm4 */
  guest_unsupported(0xea2c57); /* movlps qword ptr [eax + 0x10], xmm4 */
/* ea2c5b: movhps qword ptr [eax + 0x18], xmm4 */
  guest_unsupported(0xea2c5b); /* movhps qword ptr [eax + 0x18], xmm4 */
/* ea2c5f: mulps xmm6, xmm5 */
  guest_unsupported(0xea2c5f); /* mulps xmm6, xmm5 */
/* ea2c62: movlps qword ptr [eax + 0x20], xmm6 */
  guest_unsupported(0xea2c62); /* movlps qword ptr [eax + 0x20], xmm6 */
/* ea2c66: movhps qword ptr [eax + 0x28], xmm6 */
  guest_unsupported(0xea2c66); /* movhps qword ptr [eax + 0x28], xmm6 */
/* ea2c6a: mulps xmm5, xmm2 */
  guest_unsupported(0xea2c6a); /* mulps xmm5, xmm2 */
/* ea2c6d: movlps qword ptr [eax + 0x30], xmm5 */
  guest_unsupported(0xea2c6d); /* movlps qword ptr [eax + 0x30], xmm5 */
/* ea2c71: movhps qword ptr [eax + 0x38], xmm5 */
  guest_unsupported(0xea2c71); /* movhps qword ptr [eax + 0x38], xmm5 */
/* ea2c75: mov esp, ebx */
  esp = ebx;
/* ea2c77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2c78: ret 0xc */
  esp += 16; SPILL(); return;
L_ea2c7b: /* ea2c7b: add esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea2c81: xor eax, eax */
  eax = 0;
/* ea2c83: mov esp, ebx */
  esp = ebx;
/* ea2c85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2c86: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea29de(void) {
  LOAD_REGS();
L_ea29de: /* ea29de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea29df: mov ebx, esp */
  ebx = esp;
/* ea29e1: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esp = r;
  }
/* ea29e7: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea29ea: movlps xmm0, qword ptr [eax + 8] */
  guest_unsupported(0xea29ea); /* movlps xmm0, qword ptr [eax + 8] */
/* ea29ee: movlps xmm4, qword ptr [eax + 0x28] */
  guest_unsupported(0xea29ee); /* movlps xmm4, qword ptr [eax + 0x28] */
/* ea29f2: movhps xmm0, qword ptr [eax + 0x18] */
  guest_unsupported(0xea29f2); /* movhps xmm0, qword ptr [eax + 0x18] */
/* ea29f6: movhps xmm4, qword ptr [eax + 0x38] */
  guest_unsupported(0xea29f6); /* movhps xmm4, qword ptr [eax + 0x38] */
/* ea29fa: movlps xmm3, qword ptr [eax + 0x20] */
  guest_unsupported(0xea29fa); /* movlps xmm3, qword ptr [eax + 0x20] */
/* ea29fe: movlps xmm1, qword ptr [eax] */
  guest_unsupported(0xea29fe); /* movlps xmm1, qword ptr [eax] */
/* ea2a01: movhps xmm3, qword ptr [eax + 0x30] */
  guest_unsupported(0xea2a01); /* movhps xmm3, qword ptr [eax + 0x30] */
/* ea2a05: movhps xmm1, qword ptr [eax + 0x10] */
  guest_unsupported(0xea2a05); /* movhps xmm1, qword ptr [eax + 0x10] */
/* ea2a09: movaps xmm5, xmm0 */
  guest_unsupported(0xea2a09); /* movaps xmm5, xmm0 */
/* ea2a0c: shufps xmm0, xmm4, 0x88 */
  guest_unsupported(0xea2a0c); /* shufps xmm0, xmm4, 0x88 */
/* ea2a10: shufps xmm4, xmm5, 0xdd */
  guest_unsupported(0xea2a10); /* shufps xmm4, xmm5, 0xdd */
/* ea2a14: movaps xmm5, xmm4 */
  guest_unsupported(0xea2a14); /* movaps xmm5, xmm4 */
/* ea2a17: mulps xmm5, xmm0 */
  guest_unsupported(0xea2a17); /* mulps xmm5, xmm0 */
/* ea2a1a: shufps xmm5, xmm5, 0xb1 */
  guest_unsupported(0xea2a1a); /* shufps xmm5, xmm5, 0xb1 */
/* ea2a1e: movaps xmm6, xmm5 */
  guest_unsupported(0xea2a1e); /* movaps xmm6, xmm5 */
/* ea2a21: shufps xmm5, xmm5, 0x4e */
  guest_unsupported(0xea2a21); /* shufps xmm5, xmm5, 0x4e */
/* ea2a25: movaps xmm7, xmm3 */
  guest_unsupported(0xea2a25); /* movaps xmm7, xmm3 */
/* ea2a28: shufps xmm3, xmm1, 0xdd */
  guest_unsupported(0xea2a28); /* shufps xmm3, xmm1, 0xdd */
/* ea2a2c: shufps xmm1, xmm7, 0x88 */
  guest_unsupported(0xea2a2c); /* shufps xmm1, xmm7, 0x88 */
/* ea2a30: movaps xmm7, xmm3 */
  guest_unsupported(0xea2a30); /* movaps xmm7, xmm3 */
/* ea2a33: mulps xmm3, xmm5 */
  guest_unsupported(0xea2a33); /* mulps xmm3, xmm5 */
/* ea2a36: xorps xmm2, xmm2 */
  guest_unsupported(0xea2a36); /* xorps xmm2, xmm2 */
/* ea2a39: mulps xmm5, xmm1 */
  guest_unsupported(0xea2a39); /* mulps xmm5, xmm1 */
/* ea2a3c: movaps xmmword ptr [esp + 0x30], xmm5 */
  guest_unsupported(0xea2a3c); /* movaps xmmword ptr [esp + 0x30], xmm5 */
/* ea2a41: movaps xmm5, xmm7 */
  guest_unsupported(0xea2a41); /* movaps xmm5, xmm7 */
/* ea2a44: mulps xmm7, xmm6 */
  guest_unsupported(0xea2a44); /* mulps xmm7, xmm6 */
/* ea2a47: mulps xmm6, xmm1 */
  guest_unsupported(0xea2a47); /* mulps xmm6, xmm1 */
/* ea2a4a: subps xmm3, xmm7 */
  guest_unsupported(0xea2a4a); /* subps xmm3, xmm7 */
/* ea2a4d: movaps xmm7, xmm5 */
  guest_unsupported(0xea2a4d); /* movaps xmm7, xmm5 */
/* ea2a50: mulps xmm5, xmm0 */
  guest_unsupported(0xea2a50); /* mulps xmm5, xmm0 */
/* ea2a53: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2a53); /* shufps xmm0, xmm0, 0x4e */
/* ea2a57: shufps xmm5, xmm5, 0xb1 */
  guest_unsupported(0xea2a57); /* shufps xmm5, xmm5, 0xb1 */
/* ea2a5b: movaps xmmword ptr [esp + 0x40], xmm6 */
  guest_unsupported(0xea2a5b); /* movaps xmmword ptr [esp + 0x40], xmm6 */
/* ea2a60: movaps xmm6, xmm4 */
  guest_unsupported(0xea2a60); /* movaps xmm6, xmm4 */
/* ea2a63: mulps xmm6, xmm5 */
  guest_unsupported(0xea2a63); /* mulps xmm6, xmm5 */
/* ea2a66: addps xmm6, xmm3 */
  guest_unsupported(0xea2a66); /* addps xmm6, xmm3 */
/* ea2a69: movaps xmm3, xmm5 */
  guest_unsupported(0xea2a69); /* movaps xmm3, xmm5 */
/* ea2a6c: shufps xmm5, xmm5, 0x4e */
  guest_unsupported(0xea2a6c); /* shufps xmm5, xmm5, 0x4e */
/* ea2a70: mulps xmm3, xmm1 */
  guest_unsupported(0xea2a70); /* mulps xmm3, xmm1 */
/* ea2a73: movaps xmmword ptr [esp + 0x50], xmm3 */
  guest_unsupported(0xea2a73); /* movaps xmmword ptr [esp + 0x50], xmm3 */
/* ea2a78: movaps xmm3, xmm4 */
  guest_unsupported(0xea2a78); /* movaps xmm3, xmm4 */
/* ea2a7b: mulps xmm3, xmm5 */
  guest_unsupported(0xea2a7b); /* mulps xmm3, xmm5 */
/* ea2a7e: mulps xmm5, xmm1 */
  guest_unsupported(0xea2a7e); /* mulps xmm5, xmm1 */
/* ea2a81: subps xmm6, xmm3 */
  guest_unsupported(0xea2a81); /* subps xmm6, xmm3 */
/* ea2a84: movaps xmm3, xmm7 */
  guest_unsupported(0xea2a84); /* movaps xmm3, xmm7 */
/* ea2a87: shufps xmm7, xmm7, 0x4e */
  guest_unsupported(0xea2a87); /* shufps xmm7, xmm7, 0x4e */
/* ea2a8b: mulps xmm7, xmm4 */
  guest_unsupported(0xea2a8b); /* mulps xmm7, xmm4 */
/* ea2a8e: shufps xmm7, xmm7, 0xb1 */
  guest_unsupported(0xea2a8e); /* shufps xmm7, xmm7, 0xb1 */
/* ea2a92: movaps xmmword ptr [esp + 0x60], xmm5 */
  guest_unsupported(0xea2a92); /* movaps xmmword ptr [esp + 0x60], xmm5 */
/* ea2a97: movaps xmm5, xmm0 */
  guest_unsupported(0xea2a97); /* movaps xmm5, xmm0 */
/* ea2a9a: mulps xmm0, xmm7 */
  guest_unsupported(0xea2a9a); /* mulps xmm0, xmm7 */
/* ea2a9d: addps xmm0, xmm6 */
  guest_unsupported(0xea2a9d); /* addps xmm0, xmm6 */
/* ea2aa0: movaps xmm6, xmm7 */
  guest_unsupported(0xea2aa0); /* movaps xmm6, xmm7 */
/* ea2aa3: shufps xmm7, xmm7, 0x4e */
  guest_unsupported(0xea2aa3); /* shufps xmm7, xmm7, 0x4e */
/* ea2aa7: mulps xmm6, xmm1 */
  guest_unsupported(0xea2aa7); /* mulps xmm6, xmm1 */
/* ea2aaa: movaps xmmword ptr [esp + 0x70], xmm4 */
  guest_unsupported(0xea2aaa); /* movaps xmmword ptr [esp + 0x70], xmm4 */
/* ea2aaf: movaps xmm4, xmm5 */
  guest_unsupported(0xea2aaf); /* movaps xmm4, xmm5 */
/* ea2ab2: mulps xmm5, xmm7 */
  guest_unsupported(0xea2ab2); /* mulps xmm5, xmm7 */
/* ea2ab5: mulps xmm7, xmm1 */
  guest_unsupported(0xea2ab5); /* mulps xmm7, xmm1 */
/* ea2ab8: subps xmm0, xmm5 */
  guest_unsupported(0xea2ab8); /* subps xmm0, xmm5 */
/* ea2abb: subps xmm7, xmm6 */
  guest_unsupported(0xea2abb); /* subps xmm7, xmm6 */
/* ea2abe: movaps xmm5, xmm1 */
  guest_unsupported(0xea2abe); /* movaps xmm5, xmm1 */
/* ea2ac1: mulps xmm1, xmm0 */
  guest_unsupported(0xea2ac1); /* mulps xmm1, xmm0 */
/* ea2ac4: shufps xmm7, xmm7, 0x4e */
  guest_unsupported(0xea2ac4); /* shufps xmm7, xmm7, 0x4e */
/* ea2ac8: movaps xmm6, xmm1 */
  guest_unsupported(0xea2ac8); /* movaps xmm6, xmm1 */
/* ea2acb: shufps xmm1, xmm1, 0x4e */
  guest_unsupported(0xea2acb); /* shufps xmm1, xmm1, 0x4e */
/* ea2acf: movaps xmmword ptr [esp + 0x20], xmm0 */
  guest_unsupported(0xea2acf); /* movaps xmmword ptr [esp + 0x20], xmm0 */
/* ea2ad4: addps xmm1, xmm6 */
  guest_unsupported(0xea2ad4); /* addps xmm1, xmm6 */
/* ea2ad7: movaps xmm0, xmm1 */
  guest_unsupported(0xea2ad7); /* movaps xmm0, xmm1 */
/* ea2ada: shufps xmm1, xmm1, 0xb1 */
  guest_unsupported(0xea2ada); /* shufps xmm1, xmm1, 0xb1 */
/* ea2ade: addss xmm1, xmm0 */
  guest_unsupported(0xea2ade); /* addss xmm1, xmm0 */
/* ea2ae2: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea2ae2); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea2ae7: movaps xmm0, xmm5 */
  guest_unsupported(0xea2ae7); /* movaps xmm0, xmm5 */
/* ea2aea: mulps xmm5, xmm3 */
  guest_unsupported(0xea2aea); /* mulps xmm5, xmm3 */
/* ea2aed: shufps xmm5, xmm5, 0xb1 */
  guest_unsupported(0xea2aed); /* shufps xmm5, xmm5, 0xb1 */
/* ea2af1: movaps xmm6, xmm5 */
  guest_unsupported(0xea2af1); /* movaps xmm6, xmm5 */
/* ea2af4: shufps xmm5, xmm5, 0x4e */
  guest_unsupported(0xea2af4); /* shufps xmm5, xmm5, 0x4e */
/* ea2af8: movaps xmmword ptr [esp + 0x80], xmm4 */
  guest_unsupported(0xea2af8); /* movaps xmmword ptr [esp + 0x80], xmm4 */
/* ea2b00: movaps xmm4, xmmword ptr [esp + 0x70] */
  guest_unsupported(0xea2b00); /* movaps xmm4, xmmword ptr [esp + 0x70] */
/* ea2b05: movaps xmmword ptr [esp + 0x90], xmm3 */
  guest_unsupported(0xea2b05); /* movaps xmmword ptr [esp + 0x90], xmm3 */
/* ea2b0d: movaps xmm3, xmm4 */
  guest_unsupported(0xea2b0d); /* movaps xmm3, xmm4 */
/* ea2b10: mulps xmm3, xmm6 */
  guest_unsupported(0xea2b10); /* mulps xmm3, xmm6 */
/* ea2b13: addps xmm3, xmm7 */
  guest_unsupported(0xea2b13); /* addps xmm3, xmm7 */
/* ea2b16: movaps xmm7, xmm4 */
  guest_unsupported(0xea2b16); /* movaps xmm7, xmm4 */
/* ea2b19: mulps xmm7, xmm5 */
  guest_unsupported(0xea2b19); /* mulps xmm7, xmm5 */
/* ea2b1c: subps xmm7, xmm3 */
  guest_unsupported(0xea2b1c); /* subps xmm7, xmm3 */
/* ea2b1f: movaps xmm3, xmm4 */
  guest_unsupported(0xea2b1f); /* movaps xmm3, xmm4 */
/* ea2b22: mulps xmm3, xmm0 */
  guest_unsupported(0xea2b22); /* mulps xmm3, xmm0 */
/* ea2b25: shufps xmm3, xmm3, 0xb1 */
  guest_unsupported(0xea2b25); /* shufps xmm3, xmm3, 0xb1 */
/* ea2b29: movaps xmmword ptr [esp + 0xa0], xmm5 */
  guest_unsupported(0xea2b29); /* movaps xmmword ptr [esp + 0xa0], xmm5 */
/* ea2b31: movaps xmm5, xmmword ptr [esp + 0x90] */
  guest_unsupported(0xea2b31); /* movaps xmm5, xmmword ptr [esp + 0x90] */
/* ea2b39: movaps xmmword ptr [esp + 0xb0], xmm6 */
  guest_unsupported(0xea2b39); /* movaps xmmword ptr [esp + 0xb0], xmm6 */
/* ea2b41: movaps xmm6, xmm5 */
  guest_unsupported(0xea2b41); /* movaps xmm6, xmm5 */
/* ea2b44: mulps xmm5, xmm3 */
  guest_unsupported(0xea2b44); /* mulps xmm5, xmm3 */
/* ea2b47: addps xmm5, xmm7 */
  guest_unsupported(0xea2b47); /* addps xmm5, xmm7 */
/* ea2b4a: movaps xmm7, xmm3 */
  guest_unsupported(0xea2b4a); /* movaps xmm7, xmm3 */
/* ea2b4d: shufps xmm3, xmm3, 0x4e */
  guest_unsupported(0xea2b4d); /* shufps xmm3, xmm3, 0x4e */
/* ea2b51: movaps xmmword ptr [esp + 0xc0], xmm4 */
  guest_unsupported(0xea2b51); /* movaps xmmword ptr [esp + 0xc0], xmm4 */
/* ea2b59: movaps xmm4, xmm6 */
  guest_unsupported(0xea2b59); /* movaps xmm4, xmm6 */
/* ea2b5c: mulps xmm4, xmm3 */
  guest_unsupported(0xea2b5c); /* mulps xmm4, xmm3 */
/* ea2b5f: movaps xmmword ptr [esp + 0xd0], xmm6 */
  guest_unsupported(0xea2b5f); /* movaps xmmword ptr [esp + 0xd0], xmm6 */
/* ea2b67: movaps xmm6, xmm5 */
  guest_unsupported(0xea2b67); /* movaps xmm6, xmm5 */
/* ea2b6a: subps xmm6, xmm4 */
  guest_unsupported(0xea2b6a); /* subps xmm6, xmm4 */
/* ea2b6d: movaps xmm4, xmmword ptr [esp + 0x30] */
  guest_unsupported(0xea2b6d); /* movaps xmm4, xmmword ptr [esp + 0x30] */
/* ea2b72: movaps xmm5, xmmword ptr [esp + 0x40] */
  guest_unsupported(0xea2b72); /* movaps xmm5, xmmword ptr [esp + 0x40] */
/* ea2b77: subps xmm4, xmm5 */
  guest_unsupported(0xea2b77); /* subps xmm4, xmm5 */
/* ea2b7a: shufps xmm4, xmm4, 0x4e */
  guest_unsupported(0xea2b7a); /* shufps xmm4, xmm4, 0x4e */
/* ea2b7e: movaps xmm5, xmmword ptr [esp + 0x80] */
  guest_unsupported(0xea2b7e); /* movaps xmm5, xmmword ptr [esp + 0x80] */
/* ea2b86: mulps xmm7, xmm5 */
  guest_unsupported(0xea2b86); /* mulps xmm7, xmm5 */
/* ea2b89: mulps xmm3, xmm5 */
  guest_unsupported(0xea2b89); /* mulps xmm3, xmm5 */
/* ea2b8c: subps xmm4, xmm7 */
  guest_unsupported(0xea2b8c); /* subps xmm4, xmm7 */
/* ea2b8f: mulps xmm0, xmm5 */
  guest_unsupported(0xea2b8f); /* mulps xmm0, xmm5 */
/* ea2b92: addps xmm4, xmm3 */
  guest_unsupported(0xea2b92); /* addps xmm4, xmm3 */
/* ea2b95: shufps xmm0, xmm0, 0xb1 */
  guest_unsupported(0xea2b95); /* shufps xmm0, xmm0, 0xb1 */
/* ea2b99: movaps xmm3, xmm0 */
  guest_unsupported(0xea2b99); /* movaps xmm3, xmm0 */
/* ea2b9c: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2b9c); /* shufps xmm0, xmm0, 0x4e */
/* ea2ba0: movaps xmm7, xmmword ptr [esp + 0xc0] */
  guest_unsupported(0xea2ba0); /* movaps xmm7, xmmword ptr [esp + 0xc0] */
/* ea2ba8: movaps xmmword ptr [esp + 0xe0], xmm6 */
  guest_unsupported(0xea2ba8); /* movaps xmmword ptr [esp + 0xe0], xmm6 */
/* ea2bb0: movaps xmm6, xmm7 */
  guest_unsupported(0xea2bb0); /* movaps xmm6, xmm7 */
/* ea2bb3: mulps xmm7, xmm3 */
  guest_unsupported(0xea2bb3); /* mulps xmm7, xmm3 */
/* ea2bb6: mulps xmm6, xmm0 */
  guest_unsupported(0xea2bb6); /* mulps xmm6, xmm0 */
/* ea2bb9: addps xmm4, xmm7 */
  guest_unsupported(0xea2bb9); /* addps xmm4, xmm7 */
/* ea2bbc: subps xmm4, xmm6 */
  guest_unsupported(0xea2bbc); /* subps xmm4, xmm6 */
/* ea2bbf: movaps xmm6, xmmword ptr [esp + 0x60] */
  guest_unsupported(0xea2bbf); /* movaps xmm6, xmmword ptr [esp + 0x60] */
/* ea2bc4: movaps xmm7, xmmword ptr [esp + 0x50] */
  guest_unsupported(0xea2bc4); /* movaps xmm7, xmmword ptr [esp + 0x50] */
/* ea2bc9: subps xmm6, xmm7 */
  guest_unsupported(0xea2bc9); /* subps xmm6, xmm7 */
/* ea2bcc: shufps xmm6, xmm6, 0x4e */
  guest_unsupported(0xea2bcc); /* shufps xmm6, xmm6, 0x4e */
/* ea2bd0: movaps xmm7, xmmword ptr [esp + 0xb0] */
  guest_unsupported(0xea2bd0); /* movaps xmm7, xmmword ptr [esp + 0xb0] */
/* ea2bd8: mulps xmm7, xmm5 */
  guest_unsupported(0xea2bd8); /* mulps xmm7, xmm5 */
/* ea2bdb: subps xmm7, xmm6 */
  guest_unsupported(0xea2bdb); /* subps xmm7, xmm6 */
/* ea2bde: movaps xmm6, xmmword ptr [esp + 0xa0] */
  guest_unsupported(0xea2bde); /* movaps xmm6, xmmword ptr [esp + 0xa0] */
/* ea2be6: mulps xmm5, xmm6 */
  guest_unsupported(0xea2be6); /* mulps xmm5, xmm6 */
/* ea2be9: subps xmm7, xmm5 */
  guest_unsupported(0xea2be9); /* subps xmm7, xmm5 */
/* ea2bec: movaps xmm5, xmmword ptr [esp + 0xd0] */
  guest_unsupported(0xea2bec); /* movaps xmm5, xmmword ptr [esp + 0xd0] */
/* ea2bf4: mulps xmm3, xmm5 */
  guest_unsupported(0xea2bf4); /* mulps xmm3, xmm5 */
/* ea2bf7: mulps xmm5, xmm0 */
  guest_unsupported(0xea2bf7); /* mulps xmm5, xmm0 */
/* ea2bfa: subps xmm7, xmm3 */
  guest_unsupported(0xea2bfa); /* subps xmm7, xmm3 */
/* ea2bfd: movaps xmm0, xmm2 */
  guest_unsupported(0xea2bfd); /* movaps xmm0, xmm2 */
/* ea2c00: movaps xmm2, xmm5 */
  guest_unsupported(0xea2c00); /* movaps xmm2, xmm5 */
/* ea2c03: addps xmm2, xmm7 */
  guest_unsupported(0xea2c03); /* addps xmm2, xmm7 */
/* ea2c06: comiss xmm1, xmm0 */
  guest_unsupported(0xea2c06); /* comiss xmm1, xmm0 */
/* ea2c09: movaps xmm6, xmmword ptr [esp + 0xe0] */
  guest_unsupported(0xea2c09); /* movaps xmm6, xmmword ptr [esp + 0xe0] */
/* ea2c11: je 0xea2c7b */
  if (zf) goto L_ea2c7b;
L_ea2c13: /* ea2c13: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ea2c16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea2c18: je 0xea2c21 */
  if (zf) goto L_ea2c21;
L_ea2c1a: /* ea2c1a: movaps xmm0, xmm1 */
  guest_unsupported(0xea2c1a); /* movaps xmm0, xmm1 */
/* ea2c1d: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea2c1d); /* movss dword ptr [eax], xmm0 */
L_ea2c21: /* ea2c21: movaps xmm0, xmm1 */
  guest_unsupported(0xea2c21); /* movaps xmm0, xmm1 */
/* ea2c24: movaps xmm1, xmmword ptr [esp + 0x20] */
  guest_unsupported(0xea2c24); /* movaps xmm1, xmmword ptr [esp + 0x20] */
/* ea2c29: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2c2c: movaps xmm3, xmm0 */
  guest_unsupported(0xea2c2c); /* movaps xmm3, xmm0 */
/* ea2c2f: rcpss xmm0, xmm0 */
  guest_unsupported(0xea2c2f); /* rcpss xmm0, xmm0 */
/* ea2c33: movaps xmm5, xmm0 */
  guest_unsupported(0xea2c33); /* movaps xmm5, xmm0 */
/* ea2c36: mulss xmm0, xmm0 */
  guest_unsupported(0xea2c36); /* mulss xmm0, xmm0 */
/* ea2c3a: mulss xmm3, xmm0 */
  guest_unsupported(0xea2c3a); /* mulss xmm3, xmm0 */
/* ea2c3e: addss xmm5, xmm5 */
  guest_unsupported(0xea2c3e); /* addss xmm5, xmm5 */
/* ea2c42: subss xmm5, xmm3 */
  guest_unsupported(0xea2c42); /* subss xmm5, xmm3 */
/* ea2c46: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea2c46); /* shufps xmm5, xmm5, 0 */
/* ea2c4a: mulps xmm1, xmm5 */
  guest_unsupported(0xea2c4a); /* mulps xmm1, xmm5 */
/* ea2c4d: movlps qword ptr [eax], xmm1 */
  guest_unsupported(0xea2c4d); /* movlps qword ptr [eax], xmm1 */
/* ea2c50: movhps qword ptr [eax + 8], xmm1 */
  guest_unsupported(0xea2c50); /* movhps qword ptr [eax + 8], xmm1 */
/* ea2c54: mulps xmm4, xmm5 */
  guest_unsupported(0xea2c54); /* mulps xmm4, xmm5 */
/* ea2c57: movlps qword ptr [eax + 0x10], xmm4 */
  guest_unsupported(0xea2c57); /* movlps qword ptr [eax + 0x10], xmm4 */
/* ea2c5b: movhps qword ptr [eax + 0x18], xmm4 */
  guest_unsupported(0xea2c5b); /* movhps qword ptr [eax + 0x18], xmm4 */
/* ea2c5f: mulps xmm6, xmm5 */
  guest_unsupported(0xea2c5f); /* mulps xmm6, xmm5 */
/* ea2c62: movlps qword ptr [eax + 0x20], xmm6 */
  guest_unsupported(0xea2c62); /* movlps qword ptr [eax + 0x20], xmm6 */
/* ea2c66: movhps qword ptr [eax + 0x28], xmm6 */
  guest_unsupported(0xea2c66); /* movhps qword ptr [eax + 0x28], xmm6 */
/* ea2c6a: mulps xmm5, xmm2 */
  guest_unsupported(0xea2c6a); /* mulps xmm5, xmm2 */
/* ea2c6d: movlps qword ptr [eax + 0x30], xmm5 */
  guest_unsupported(0xea2c6d); /* movlps qword ptr [eax + 0x30], xmm5 */
/* ea2c71: movhps qword ptr [eax + 0x38], xmm5 */
  guest_unsupported(0xea2c71); /* movhps qword ptr [eax + 0x38], xmm5 */
/* ea2c75: mov esp, ebx */
  esp = ebx;
/* ea2c77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2c78: ret 0xc */
  esp += 16; SPILL(); return;
L_ea2c7b: /* ea2c7b: add esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea2c81: xor eax, eax */
  eax = 0;
/* ea2c83: mov esp, ebx */
  esp = ebx;
/* ea2c85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2c86: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea2c89(void) {
  LOAD_REGS();
L_ea2c89: /* ea2c89: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea2c90(); return;
}

void f_ea2c90(void) {
  LOAD_REGS();
L_ea2c90: /* ea2c90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea2c91: mov ebx, esp */
  ebx = esp;
/* ea2c93: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2c96: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea2c99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea2c9c: jmp 0xea2ca1 */
  goto L_ea2ca1;
L_ea2ca1: /* ea2ca1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2ca2: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea2ca5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2ca8: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea2cab: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea2cae: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2cb1: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea2cb1); /* movlps xmm0, qword ptr [edx] */
/* ea2cb4: movhps xmm0, qword ptr [edx + 8] */
  guest_unsupported(0xea2cb4); /* movhps xmm0, qword ptr [edx + 8] */
/* ea2cb8: movlps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea2cb8); /* movlps xmm2, qword ptr [ecx] */
/* ea2cbb: movhps xmm2, qword ptr [ecx + 8] */
  guest_unsupported(0xea2cbb); /* movhps xmm2, qword ptr [ecx + 8] */
/* ea2cbf: shufps xmm2, xmm2, 0x39 */
  guest_unsupported(0xea2cbf); /* shufps xmm2, xmm2, 0x39 */
/* ea2cc3: movlps xmm1, qword ptr [ebp] */
  guest_unsupported(0xea2cc3); /* movlps xmm1, qword ptr [ebp] */
/* ea2cc7: movhps xmm1, qword ptr [ebp + 8] */
  guest_unsupported(0xea2cc7); /* movhps xmm1, qword ptr [ebp + 8] */
/* ea2ccb: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea2ccb); /* shufps xmm1, xmm1, 0x39 */
/* ea2ccf: movaps xmm3, xmm0 */
  guest_unsupported(0xea2ccf); /* movaps xmm3, xmm0 */
/* ea2cd2: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2cd2); /* shufps xmm0, xmm0, 0x4e */
/* ea2cd6: movaps xmm4, xmm0 */
  guest_unsupported(0xea2cd6); /* movaps xmm4, xmm0 */
/* ea2cd9: shufps xmm0, xmm0, 0x39 */
  guest_unsupported(0xea2cd9); /* shufps xmm0, xmm0, 0x39 */
/* ea2cdd: mulps xmm0, xmm2 */
  guest_unsupported(0xea2cdd); /* mulps xmm0, xmm2 */
/* ea2ce0: mulps xmm4, xmm2 */
  guest_unsupported(0xea2ce0); /* mulps xmm4, xmm2 */
/* ea2ce3: mulps xmm2, xmm3 */
  guest_unsupported(0xea2ce3); /* mulps xmm2, xmm3 */
/* ea2ce6: movaps xmm3, xmm0 */
  guest_unsupported(0xea2ce6); /* movaps xmm3, xmm0 */
/* ea2ce9: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2ce9); /* shufps xmm0, xmm0, 0x4e */
/* ea2ced: subps xmm0, xmm3 */
  guest_unsupported(0xea2ced); /* subps xmm0, xmm3 */
/* ea2cf0: movaps xmm3, xmm1 */
  guest_unsupported(0xea2cf0); /* movaps xmm3, xmm1 */
/* ea2cf3: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea2cf3); /* shufps xmm1, xmm1, 0x39 */
/* ea2cf7: mulps xmm0, xmm1 */
  guest_unsupported(0xea2cf7); /* mulps xmm0, xmm1 */
/* ea2cfa: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea2cfa); /* shufps xmm1, xmm1, 0x39 */
/* ea2cfe: movaps xmm5, xmm4 */
  guest_unsupported(0xea2cfe); /* movaps xmm5, xmm4 */
/* ea2d01: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xea2d01); /* shufps xmm4, xmm4, 0x39 */
/* ea2d05: movaps xmm6, xmm2 */
  guest_unsupported(0xea2d05); /* movaps xmm6, xmm2 */
/* ea2d08: shufps xmm2, xmm2, 0x4e */
  guest_unsupported(0xea2d08); /* shufps xmm2, xmm2, 0x4e */
/* ea2d0c: subps xmm4, xmm2 */
  guest_unsupported(0xea2d0c); /* subps xmm4, xmm2 */
/* ea2d0f: mulps xmm3, xmm4 */
  guest_unsupported(0xea2d0f); /* mulps xmm3, xmm4 */
/* ea2d12: addps xmm3, xmm0 */
  guest_unsupported(0xea2d12); /* addps xmm3, xmm0 */
/* ea2d15: shufps xmm6, xmm6, 0x39 */
  guest_unsupported(0xea2d15); /* shufps xmm6, xmm6, 0x39 */
/* ea2d19: subps xmm5, xmm6 */
  guest_unsupported(0xea2d19); /* subps xmm5, xmm6 */
/* ea2d1c: mulps xmm1, xmm5 */
  guest_unsupported(0xea2d1c); /* mulps xmm1, xmm5 */
/* ea2d1f: addps xmm3, xmm1 */
  guest_unsupported(0xea2d1f); /* addps xmm3, xmm1 */
/* ea2d22: xorps xmm3, xmmword ptr [0xebba00] */
  guest_unsupported(0xea2d22); /* xorps xmm3, xmmword ptr [0xebba00] */
/* ea2d29: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea2d29); /* movups xmmword ptr [eax], xmm3 */
/* ea2d2c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea2d2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2d30: mov esp, ebx */
  esp = ebx;
/* ea2d32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2d33: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea2c9e(void) {
  LOAD_REGS();
L_ea2c9e: /* ea2c9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea2c9f: mov ebx, esp */
  ebx = esp;
/* ea2ca1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2ca2: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea2ca5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea2ca8: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea2cab: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea2cae: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea2cb1: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea2cb1); /* movlps xmm0, qword ptr [edx] */
/* ea2cb4: movhps xmm0, qword ptr [edx + 8] */
  guest_unsupported(0xea2cb4); /* movhps xmm0, qword ptr [edx + 8] */
/* ea2cb8: movlps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea2cb8); /* movlps xmm2, qword ptr [ecx] */
/* ea2cbb: movhps xmm2, qword ptr [ecx + 8] */
  guest_unsupported(0xea2cbb); /* movhps xmm2, qword ptr [ecx + 8] */
/* ea2cbf: shufps xmm2, xmm2, 0x39 */
  guest_unsupported(0xea2cbf); /* shufps xmm2, xmm2, 0x39 */
/* ea2cc3: movlps xmm1, qword ptr [ebp] */
  guest_unsupported(0xea2cc3); /* movlps xmm1, qword ptr [ebp] */
/* ea2cc7: movhps xmm1, qword ptr [ebp + 8] */
  guest_unsupported(0xea2cc7); /* movhps xmm1, qword ptr [ebp + 8] */
/* ea2ccb: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea2ccb); /* shufps xmm1, xmm1, 0x39 */
/* ea2ccf: movaps xmm3, xmm0 */
  guest_unsupported(0xea2ccf); /* movaps xmm3, xmm0 */
/* ea2cd2: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2cd2); /* shufps xmm0, xmm0, 0x4e */
/* ea2cd6: movaps xmm4, xmm0 */
  guest_unsupported(0xea2cd6); /* movaps xmm4, xmm0 */
/* ea2cd9: shufps xmm0, xmm0, 0x39 */
  guest_unsupported(0xea2cd9); /* shufps xmm0, xmm0, 0x39 */
/* ea2cdd: mulps xmm0, xmm2 */
  guest_unsupported(0xea2cdd); /* mulps xmm0, xmm2 */
/* ea2ce0: mulps xmm4, xmm2 */
  guest_unsupported(0xea2ce0); /* mulps xmm4, xmm2 */
/* ea2ce3: mulps xmm2, xmm3 */
  guest_unsupported(0xea2ce3); /* mulps xmm2, xmm3 */
/* ea2ce6: movaps xmm3, xmm0 */
  guest_unsupported(0xea2ce6); /* movaps xmm3, xmm0 */
/* ea2ce9: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea2ce9); /* shufps xmm0, xmm0, 0x4e */
/* ea2ced: subps xmm0, xmm3 */
  guest_unsupported(0xea2ced); /* subps xmm0, xmm3 */
/* ea2cf0: movaps xmm3, xmm1 */
  guest_unsupported(0xea2cf0); /* movaps xmm3, xmm1 */
/* ea2cf3: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea2cf3); /* shufps xmm1, xmm1, 0x39 */
/* ea2cf7: mulps xmm0, xmm1 */
  guest_unsupported(0xea2cf7); /* mulps xmm0, xmm1 */
/* ea2cfa: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea2cfa); /* shufps xmm1, xmm1, 0x39 */
/* ea2cfe: movaps xmm5, xmm4 */
  guest_unsupported(0xea2cfe); /* movaps xmm5, xmm4 */
/* ea2d01: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xea2d01); /* shufps xmm4, xmm4, 0x39 */
/* ea2d05: movaps xmm6, xmm2 */
  guest_unsupported(0xea2d05); /* movaps xmm6, xmm2 */
/* ea2d08: shufps xmm2, xmm2, 0x4e */
  guest_unsupported(0xea2d08); /* shufps xmm2, xmm2, 0x4e */
/* ea2d0c: subps xmm4, xmm2 */
  guest_unsupported(0xea2d0c); /* subps xmm4, xmm2 */
/* ea2d0f: mulps xmm3, xmm4 */
  guest_unsupported(0xea2d0f); /* mulps xmm3, xmm4 */
/* ea2d12: addps xmm3, xmm0 */
  guest_unsupported(0xea2d12); /* addps xmm3, xmm0 */
/* ea2d15: shufps xmm6, xmm6, 0x39 */
  guest_unsupported(0xea2d15); /* shufps xmm6, xmm6, 0x39 */
/* ea2d19: subps xmm5, xmm6 */
  guest_unsupported(0xea2d19); /* subps xmm5, xmm6 */
/* ea2d1c: mulps xmm1, xmm5 */
  guest_unsupported(0xea2d1c); /* mulps xmm1, xmm5 */
/* ea2d1f: addps xmm3, xmm1 */
  guest_unsupported(0xea2d1f); /* addps xmm3, xmm1 */
/* ea2d22: xorps xmm3, xmmword ptr [0xebba00] */
  guest_unsupported(0xea2d22); /* xorps xmm3, xmmword ptr [0xebba00] */
/* ea2d29: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea2d29); /* movups xmmword ptr [eax], xmm3 */
/* ea2d2c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea2d2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2d30: mov esp, ebx */
  esp = ebx;
/* ea2d32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea2d33: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea2d36(void) {
  LOAD_REGS();
L_ea2d36: /* ea2d36: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea2d39: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea2d40(); return;
}

void f_ea2d40(void) {
  LOAD_REGS();
L_ea2d40: /* ea2d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2d41: mov ebp, esp */
  ebp = esp;
/* ea2d43: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea2d46: movss xmm0, dword ptr [eax] */
  guest_unsupported(0xea2d46); /* movss xmm0, dword ptr [eax] */
/* ea2d4a: movss xmm1, dword ptr [eax + 4] */
  guest_unsupported(0xea2d4a); /* movss xmm1, dword ptr [eax + 4] */
/* ea2d4f: movss xmm2, dword ptr [eax + 8] */
  guest_unsupported(0xea2d4f); /* movss xmm2, dword ptr [eax + 8] */
/* ea2d54: movss xmm3, dword ptr [eax + 0xc] */
  guest_unsupported(0xea2d54); /* movss xmm3, dword ptr [eax + 0xc] */
/* ea2d59: movss xmm4, xmm0 */
  guest_unsupported(0xea2d59); /* movss xmm4, xmm0 */
/* ea2d5d: movss xmm5, xmm1 */
  guest_unsupported(0xea2d5d); /* movss xmm5, xmm1 */
/* ea2d61: movss xmm6, xmm2 */
  guest_unsupported(0xea2d61); /* movss xmm6, xmm2 */
/* ea2d65: movss xmm7, xmm3 */
  guest_unsupported(0xea2d65); /* movss xmm7, xmm3 */
/* ea2d69: mulss xmm4, xmm0 */
  guest_unsupported(0xea2d69); /* mulss xmm4, xmm0 */
/* ea2d6d: mulss xmm5, xmm1 */
  guest_unsupported(0xea2d6d); /* mulss xmm5, xmm1 */
/* ea2d71: mulss xmm6, xmm2 */
  guest_unsupported(0xea2d71); /* mulss xmm6, xmm2 */
/* ea2d75: addss xmm4, xmm5 */
  guest_unsupported(0xea2d75); /* addss xmm4, xmm5 */
/* ea2d79: mulss xmm7, xmm3 */
  guest_unsupported(0xea2d79); /* mulss xmm7, xmm3 */
/* ea2d7d: addss xmm6, xmm7 */
  guest_unsupported(0xea2d7d); /* addss xmm6, xmm7 */
/* ea2d81: addss xmm4, xmm6 */
  guest_unsupported(0xea2d81); /* addss xmm4, xmm6 */
/* ea2d85: rsqrtss xmm5, xmm4 */
  guest_unsupported(0xea2d85); /* rsqrtss xmm5, xmm4 */
/* ea2d89: movss xmm6, xmm5 */
  guest_unsupported(0xea2d89); /* movss xmm6, xmm5 */
/* ea2d8d: mulss xmm5, xmm5 */
  guest_unsupported(0xea2d8d); /* mulss xmm5, xmm5 */
/* ea2d91: mulss xmm4, xmm5 */
  guest_unsupported(0xea2d91); /* mulss xmm4, xmm5 */
/* ea2d95: movss xmm5, dword ptr [0xebba20] */
  guest_unsupported(0xea2d95); /* movss xmm5, dword ptr [0xebba20] */
/* ea2d9d: subss xmm5, xmm4 */
  guest_unsupported(0xea2d9d); /* subss xmm5, xmm4 */
/* ea2da1: mulss xmm5, dword ptr [0xebba10] */
  guest_unsupported(0xea2da1); /* mulss xmm5, dword ptr [0xebba10] */
/* ea2da9: mulss xmm5, xmm6 */
  guest_unsupported(0xea2da9); /* mulss xmm5, xmm6 */
/* ea2dad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2db0: mulss xmm0, xmm5 */
  guest_unsupported(0xea2db0); /* mulss xmm0, xmm5 */
/* ea2db4: mulss xmm1, xmm5 */
  guest_unsupported(0xea2db4); /* mulss xmm1, xmm5 */
/* ea2db8: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea2db8); /* movss dword ptr [eax], xmm0 */
/* ea2dbc: mulss xmm2, xmm5 */
  guest_unsupported(0xea2dbc); /* mulss xmm2, xmm5 */
/* ea2dc0: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea2dc0); /* movss dword ptr [eax + 4], xmm1 */
/* ea2dc5: mulss xmm3, xmm5 */
  guest_unsupported(0xea2dc5); /* mulss xmm3, xmm5 */
/* ea2dc9: movss dword ptr [eax + 8], xmm2 */
  guest_unsupported(0xea2dc9); /* movss dword ptr [eax + 8], xmm2 */
/* ea2dce: movss dword ptr [eax + 0xc], xmm3 */
  guest_unsupported(0xea2dce); /* movss dword ptr [eax + 0xc], xmm3 */
/* ea2dd3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2dd6: mov esp, ebp */
  esp = ebp;
/* ea2dd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2dd9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea2ddc(void) {
  LOAD_REGS();
L_ea2ddc: /* ea2ddc: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea2de0(); return;
}

void f_ea2de0(void) {
  LOAD_REGS();
L_ea2de0: /* ea2de0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2de1: mov ebp, esp */
  ebp = esp;
/* ea2de3: movss xmm0, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea2de3); /* movss xmm0, dword ptr [ebp + 0x1c] */
/* ea2de8: movss xmm1, xmm0 */
  guest_unsupported(0xea2de8); /* movss xmm1, xmm0 */
/* ea2dec: mulss xmm1, xmm0 */
  guest_unsupported(0xea2dec); /* mulss xmm1, xmm0 */
/* ea2df0: movss xmm2, xmm0 */
  guest_unsupported(0xea2df0); /* movss xmm2, xmm0 */
/* ea2df4: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2df4); /* shufps xmm0, xmm0, 0 */
/* ea2df8: mulss xmm2, xmm1 */
  guest_unsupported(0xea2df8); /* mulss xmm2, xmm1 */
/* ea2dfc: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2dfc); /* shufps xmm1, xmm1, 0 */
/* ea2e00: mulps xmm0, xmmword ptr [0xebba60] */
  guest_unsupported(0xea2e00); /* mulps xmm0, xmmword ptr [0xebba60] */
/* ea2e07: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea2e07); /* shufps xmm2, xmm2, 0 */
/* ea2e0b: mulps xmm1, xmmword ptr [0xebba50] */
  guest_unsupported(0xea2e0b); /* mulps xmm1, xmmword ptr [0xebba50] */
/* ea2e12: addps xmm0, xmmword ptr [0xebba40] */
  guest_unsupported(0xea2e12); /* addps xmm0, xmmword ptr [0xebba40] */
/* ea2e19: mulps xmm2, xmmword ptr [0xebba30] */
  guest_unsupported(0xea2e19); /* mulps xmm2, xmmword ptr [0xebba30] */
/* ea2e20: addps xmm0, xmm1 */
  guest_unsupported(0xea2e20); /* addps xmm0, xmm1 */
/* ea2e23: addps xmm0, xmm2 */
  guest_unsupported(0xea2e23); /* addps xmm0, xmm2 */
/* ea2e26: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea2e29: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea2e2c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea2e2f: movaps xmm1, xmm0 */
  guest_unsupported(0xea2e2f); /* movaps xmm1, xmm0 */
/* ea2e32: shufps xmm1, xmm0, 0x55 */
  guest_unsupported(0xea2e32); /* shufps xmm1, xmm0, 0x55 */
/* ea2e36: movaps xmm2, xmm0 */
  guest_unsupported(0xea2e36); /* movaps xmm2, xmm0 */
/* ea2e39: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0xea2e39); /* shufps xmm2, xmm0, 0xaa */
/* ea2e3d: movaps xmm3, xmm0 */
  guest_unsupported(0xea2e3d); /* movaps xmm3, xmm0 */
/* ea2e40: shufps xmm3, xmm0, 0xff */
  guest_unsupported(0xea2e40); /* shufps xmm3, xmm0, 0xff */
/* ea2e44: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2e44); /* shufps xmm0, xmm0, 0 */
/* ea2e48: movss xmm4, dword ptr [eax + 8] */
  guest_unsupported(0xea2e48); /* movss xmm4, dword ptr [eax + 8] */
/* ea2e4d: movhps xmm4, qword ptr [eax] */
  guest_unsupported(0xea2e4d); /* movhps xmm4, qword ptr [eax] */
/* ea2e50: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea2e53: mulps xmm4, xmm0 */
  guest_unsupported(0xea2e53); /* mulps xmm4, xmm0 */
/* ea2e56: movss xmm5, dword ptr [ecx + 8] */
  guest_unsupported(0xea2e56); /* movss xmm5, dword ptr [ecx + 8] */
/* ea2e5b: movhps xmm5, qword ptr [ecx] */
  guest_unsupported(0xea2e5b); /* movhps xmm5, qword ptr [ecx] */
/* ea2e5e: mulps xmm5, xmm1 */
  guest_unsupported(0xea2e5e); /* mulps xmm5, xmm1 */
/* ea2e61: movss xmm6, dword ptr [edx + 8] */
  guest_unsupported(0xea2e61); /* movss xmm6, dword ptr [edx + 8] */
/* ea2e66: movhps xmm6, qword ptr [edx] */
  guest_unsupported(0xea2e66); /* movhps xmm6, qword ptr [edx] */
/* ea2e69: addps xmm4, xmm5 */
  guest_unsupported(0xea2e69); /* addps xmm4, xmm5 */
/* ea2e6c: mulps xmm6, xmm2 */
  guest_unsupported(0xea2e6c); /* mulps xmm6, xmm2 */
/* ea2e6f: addps xmm4, xmm6 */
  guest_unsupported(0xea2e6f); /* addps xmm4, xmm6 */
/* ea2e72: movss xmm7, dword ptr [eax + 8] */
  guest_unsupported(0xea2e72); /* movss xmm7, dword ptr [eax + 8] */
/* ea2e77: movhps xmm7, qword ptr [eax] */
  guest_unsupported(0xea2e77); /* movhps xmm7, qword ptr [eax] */
/* ea2e7a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea2e7d: mulps xmm7, xmm3 */
  guest_unsupported(0xea2e7d); /* mulps xmm7, xmm3 */
/* ea2e80: addps xmm4, xmm7 */
  guest_unsupported(0xea2e80); /* addps xmm4, xmm7 */
/* ea2e83: movhps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea2e83); /* movhps qword ptr [ecx], xmm4 */
/* ea2e86: movss dword ptr [ecx + 8], xmm4 */
  guest_unsupported(0xea2e86); /* movss dword ptr [ecx + 8], xmm4 */
/* ea2e8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2e8e: mov esp, ebp */
  esp = ebp;
/* ea2e90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2e91: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea2e94(void) {
  LOAD_REGS();
L_ea2e94: /* ea2e94: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea2e9a: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea2ea0(); return;
}

void f_ea2ea0(void) {
  LOAD_REGS();
L_ea2ea0: /* ea2ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2ea1: mov ebp, esp */
  ebp = esp;
/* ea2ea3: movss xmm0, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea2ea3); /* movss xmm0, dword ptr [ebp + 0x1c] */
/* ea2ea8: movss xmm1, xmm0 */
  guest_unsupported(0xea2ea8); /* movss xmm1, xmm0 */
/* ea2eac: mulss xmm1, xmm0 */
  guest_unsupported(0xea2eac); /* mulss xmm1, xmm0 */
/* ea2eb0: movss xmm2, xmm0 */
  guest_unsupported(0xea2eb0); /* movss xmm2, xmm0 */
/* ea2eb4: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2eb4); /* shufps xmm0, xmm0, 0 */
/* ea2eb8: mulss xmm2, xmm1 */
  guest_unsupported(0xea2eb8); /* mulss xmm2, xmm1 */
/* ea2ebc: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2ebc); /* shufps xmm1, xmm1, 0 */
/* ea2ec0: mulps xmm0, xmmword ptr [0xebba60] */
  guest_unsupported(0xea2ec0); /* mulps xmm0, xmmword ptr [0xebba60] */
/* ea2ec7: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea2ec7); /* shufps xmm2, xmm2, 0 */
/* ea2ecb: mulps xmm1, xmmword ptr [0xebba50] */
  guest_unsupported(0xea2ecb); /* mulps xmm1, xmmword ptr [0xebba50] */
/* ea2ed2: addps xmm0, xmmword ptr [0xebba40] */
  guest_unsupported(0xea2ed2); /* addps xmm0, xmmword ptr [0xebba40] */
/* ea2ed9: mulps xmm2, xmmword ptr [0xebba30] */
  guest_unsupported(0xea2ed9); /* mulps xmm2, xmmword ptr [0xebba30] */
/* ea2ee0: addps xmm0, xmm1 */
  guest_unsupported(0xea2ee0); /* addps xmm0, xmm1 */
/* ea2ee3: addps xmm0, xmm2 */
  guest_unsupported(0xea2ee3); /* addps xmm0, xmm2 */
/* ea2ee6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea2ee9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea2eec: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea2eef: movaps xmm2, xmm0 */
  guest_unsupported(0xea2eef); /* movaps xmm2, xmm0 */
/* ea2ef2: shufps xmm2, xmm0, 0xfa */
  guest_unsupported(0xea2ef2); /* shufps xmm2, xmm0, 0xfa */
/* ea2ef6: shufps xmm0, xmm0, 0x50 */
  guest_unsupported(0xea2ef6); /* shufps xmm0, xmm0, 0x50 */
/* ea2efa: movlps xmm4, qword ptr [eax] */
  guest_unsupported(0xea2efa); /* movlps xmm4, qword ptr [eax] */
/* ea2efd: movhps xmm4, qword ptr [ecx] */
  guest_unsupported(0xea2efd); /* movhps xmm4, qword ptr [ecx] */
/* ea2f00: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea2f03: mulps xmm4, xmm0 */
  guest_unsupported(0xea2f03); /* mulps xmm4, xmm0 */
/* ea2f06: movlps xmm6, qword ptr [edx] */
  guest_unsupported(0xea2f06); /* movlps xmm6, qword ptr [edx] */
/* ea2f09: movhps xmm6, qword ptr [eax] */
  guest_unsupported(0xea2f09); /* movhps xmm6, qword ptr [eax] */
/* ea2f0c: mulps xmm6, xmm2 */
  guest_unsupported(0xea2f0c); /* mulps xmm6, xmm2 */
/* ea2f0f: addps xmm4, xmm6 */
  guest_unsupported(0xea2f0f); /* addps xmm4, xmm6 */
/* ea2f12: movhlps xmm6, xmm4 */
  guest_unsupported(0xea2f12); /* movhlps xmm6, xmm4 */
/* ea2f15: addps xmm4, xmm6 */
  guest_unsupported(0xea2f15); /* addps xmm4, xmm6 */
/* ea2f18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea2f1b: movlps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea2f1b); /* movlps qword ptr [ecx], xmm4 */
/* ea2f1e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2f21: mov esp, ebp */
  esp = ebp;
/* ea2f23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2f24: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea2f27(void) {
  LOAD_REGS();
L_ea2f27: /* ea2f27: mov esi, esi */
  esi = esi;
/* ea2f29: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea2f30(); return;
}

void f_ea2f30(void) {
  LOAD_REGS();
L_ea2f30: /* ea2f30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2f31: mov ebp, esp */
  ebp = esp;
/* ea2f33: movss xmm0, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea2f33); /* movss xmm0, dword ptr [ebp + 0x1c] */
/* ea2f38: movss xmm1, xmm0 */
  guest_unsupported(0xea2f38); /* movss xmm1, xmm0 */
/* ea2f3c: mulss xmm1, xmm0 */
  guest_unsupported(0xea2f3c); /* mulss xmm1, xmm0 */
/* ea2f40: movss xmm2, xmm0 */
  guest_unsupported(0xea2f40); /* movss xmm2, xmm0 */
/* ea2f44: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2f44); /* shufps xmm0, xmm0, 0 */
/* ea2f48: mulss xmm2, xmm1 */
  guest_unsupported(0xea2f48); /* mulss xmm2, xmm1 */
/* ea2f4c: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2f4c); /* shufps xmm1, xmm1, 0 */
/* ea2f50: mulps xmm0, xmmword ptr [0xebba60] */
  guest_unsupported(0xea2f50); /* mulps xmm0, xmmword ptr [0xebba60] */
/* ea2f57: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea2f57); /* shufps xmm2, xmm2, 0 */
/* ea2f5b: mulps xmm1, xmmword ptr [0xebba50] */
  guest_unsupported(0xea2f5b); /* mulps xmm1, xmmword ptr [0xebba50] */
/* ea2f62: addps xmm0, xmmword ptr [0xebba40] */
  guest_unsupported(0xea2f62); /* addps xmm0, xmmword ptr [0xebba40] */
/* ea2f69: mulps xmm2, xmmword ptr [0xebba30] */
  guest_unsupported(0xea2f69); /* mulps xmm2, xmmword ptr [0xebba30] */
/* ea2f70: addps xmm0, xmm1 */
  guest_unsupported(0xea2f70); /* addps xmm0, xmm1 */
/* ea2f73: addps xmm0, xmm2 */
  guest_unsupported(0xea2f73); /* addps xmm0, xmm2 */
/* ea2f76: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea2f79: xorps xmm4, xmm4 */
  guest_unsupported(0xea2f79); /* xorps xmm4, xmm4 */
/* ea2f7c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea2f7f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea2f82: movaps xmm1, xmm0 */
  guest_unsupported(0xea2f82); /* movaps xmm1, xmm0 */
/* ea2f85: shufps xmm1, xmm0, 0x55 */
  guest_unsupported(0xea2f85); /* shufps xmm1, xmm0, 0x55 */
/* ea2f89: movaps xmm2, xmm0 */
  guest_unsupported(0xea2f89); /* movaps xmm2, xmm0 */
/* ea2f8c: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0xea2f8c); /* shufps xmm2, xmm0, 0xaa */
/* ea2f90: movaps xmm3, xmm0 */
  guest_unsupported(0xea2f90); /* movaps xmm3, xmm0 */
/* ea2f93: shufps xmm3, xmm0, 0xff */
  guest_unsupported(0xea2f93); /* shufps xmm3, xmm0, 0xff */
/* ea2f97: xorps xmm5, xmm5 */
  guest_unsupported(0xea2f97); /* xorps xmm5, xmm5 */
/* ea2f9a: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2f9a); /* shufps xmm0, xmm0, 0 */
/* ea2f9e: movups xmm4, xmmword ptr [eax] */
  guest_unsupported(0xea2f9e); /* movups xmm4, xmmword ptr [eax] */
/* ea2fa1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea2fa4: mulps xmm4, xmm0 */
  guest_unsupported(0xea2fa4); /* mulps xmm4, xmm0 */
/* ea2fa7: xorps xmm6, xmm6 */
  guest_unsupported(0xea2fa7); /* xorps xmm6, xmm6 */
/* ea2faa: movups xmm5, xmmword ptr [ecx] */
  guest_unsupported(0xea2faa); /* movups xmm5, xmmword ptr [ecx] */
/* ea2fad: mulps xmm5, xmm1 */
  guest_unsupported(0xea2fad); /* mulps xmm5, xmm1 */
/* ea2fb0: xorps xmm7, xmm7 */
  guest_unsupported(0xea2fb0); /* xorps xmm7, xmm7 */
/* ea2fb3: movups xmm6, xmmword ptr [edx] */
  guest_unsupported(0xea2fb3); /* movups xmm6, xmmword ptr [edx] */
/* ea2fb6: addps xmm4, xmm5 */
  guest_unsupported(0xea2fb6); /* addps xmm4, xmm5 */
/* ea2fb9: mulps xmm6, xmm2 */
  guest_unsupported(0xea2fb9); /* mulps xmm6, xmm2 */
/* ea2fbc: addps xmm4, xmm6 */
  guest_unsupported(0xea2fbc); /* addps xmm4, xmm6 */
/* ea2fbf: movups xmm7, xmmword ptr [eax] */
  guest_unsupported(0xea2fbf); /* movups xmm7, xmmword ptr [eax] */
/* ea2fc2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea2fc5: mulps xmm7, xmm3 */
  guest_unsupported(0xea2fc5); /* mulps xmm7, xmm3 */
/* ea2fc8: addps xmm4, xmm7 */
  guest_unsupported(0xea2fc8); /* addps xmm4, xmm7 */
/* ea2fcb: movups xmmword ptr [ecx], xmm4 */
  guest_unsupported(0xea2fcb); /* movups xmmword ptr [ecx], xmm4 */
/* ea2fce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea2fd1: mov esp, ebp */
  esp = ebp;
/* ea2fd3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea2fd4: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea2fd7(void) {
  LOAD_REGS();
L_ea2fd7: /* ea2fd7: mov esi, esi */
  esi = esi;
/* ea2fd9: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea2fe0(); return;
}

void f_ea2fe0(void) {
  LOAD_REGS();
L_ea2fe0: /* ea2fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea2fe1: mov ebp, esp */
  ebp = esp;
/* ea2fe3: movss xmm0, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea2fe3); /* movss xmm0, dword ptr [ebp + 0x1c] */
/* ea2fe8: movss xmm1, xmm0 */
  guest_unsupported(0xea2fe8); /* movss xmm1, xmm0 */
/* ea2fec: mulss xmm1, xmm0 */
  guest_unsupported(0xea2fec); /* mulss xmm1, xmm0 */
/* ea2ff0: movss xmm2, xmm0 */
  guest_unsupported(0xea2ff0); /* movss xmm2, xmm0 */
/* ea2ff4: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea2ff4); /* shufps xmm0, xmm0, 0 */
/* ea2ff8: mulss xmm2, xmm1 */
  guest_unsupported(0xea2ff8); /* mulss xmm2, xmm1 */
/* ea2ffc: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea2ffc); /* shufps xmm1, xmm1, 0 */
/* ea3000: mulps xmm0, xmmword ptr [0xebbaa0] */
  guest_unsupported(0xea3000); /* mulps xmm0, xmmword ptr [0xebbaa0] */
/* ea3007: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea3007); /* shufps xmm2, xmm2, 0 */
/* ea300b: mulps xmm1, xmmword ptr [0xebba90] */
  guest_unsupported(0xea300b); /* mulps xmm1, xmmword ptr [0xebba90] */
/* ea3012: addss xmm0, dword ptr [0xebba80] */
  guest_unsupported(0xea3012); /* addss xmm0, dword ptr [0xebba80] */
/* ea301a: mulps xmm2, xmmword ptr [0xebba70] */
  guest_unsupported(0xea301a); /* mulps xmm2, xmmword ptr [0xebba70] */
/* ea3021: addps xmm0, xmm1 */
  guest_unsupported(0xea3021); /* addps xmm0, xmm1 */
/* ea3024: addps xmm0, xmm2 */
  guest_unsupported(0xea3024); /* addps xmm0, xmm2 */
/* ea3027: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea302a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea302d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea3030: movaps xmm1, xmm0 */
  guest_unsupported(0xea3030); /* movaps xmm1, xmm0 */
/* ea3033: shufps xmm1, xmm0, 0x55 */
  guest_unsupported(0xea3033); /* shufps xmm1, xmm0, 0x55 */
/* ea3037: movaps xmm2, xmm0 */
  guest_unsupported(0xea3037); /* movaps xmm2, xmm0 */
/* ea303a: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0xea303a); /* shufps xmm2, xmm0, 0xaa */
/* ea303e: movaps xmm3, xmm0 */
  guest_unsupported(0xea303e); /* movaps xmm3, xmm0 */
/* ea3041: shufps xmm3, xmm0, 0xff */
  guest_unsupported(0xea3041); /* shufps xmm3, xmm0, 0xff */
/* ea3045: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea3045); /* shufps xmm0, xmm0, 0 */
/* ea3049: movss xmm4, dword ptr [eax + 8] */
  guest_unsupported(0xea3049); /* movss xmm4, dword ptr [eax + 8] */
/* ea304e: movhps xmm4, qword ptr [eax] */
  guest_unsupported(0xea304e); /* movhps xmm4, qword ptr [eax] */
/* ea3051: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea3054: mulps xmm4, xmm0 */
  guest_unsupported(0xea3054); /* mulps xmm4, xmm0 */
/* ea3057: movss xmm5, dword ptr [ecx + 8] */
  guest_unsupported(0xea3057); /* movss xmm5, dword ptr [ecx + 8] */
/* ea305c: movhps xmm5, qword ptr [ecx] */
  guest_unsupported(0xea305c); /* movhps xmm5, qword ptr [ecx] */
/* ea305f: mulps xmm5, xmm1 */
  guest_unsupported(0xea305f); /* mulps xmm5, xmm1 */
/* ea3062: movss xmm6, dword ptr [edx + 8] */
  guest_unsupported(0xea3062); /* movss xmm6, dword ptr [edx + 8] */
/* ea3067: movhps xmm6, qword ptr [edx] */
  guest_unsupported(0xea3067); /* movhps xmm6, qword ptr [edx] */
/* ea306a: addps xmm4, xmm5 */
  guest_unsupported(0xea306a); /* addps xmm4, xmm5 */
/* ea306d: mulps xmm6, xmm2 */
  guest_unsupported(0xea306d); /* mulps xmm6, xmm2 */
/* ea3070: addps xmm4, xmm6 */
  guest_unsupported(0xea3070); /* addps xmm4, xmm6 */
/* ea3073: movss xmm7, dword ptr [eax + 8] */
  guest_unsupported(0xea3073); /* movss xmm7, dword ptr [eax + 8] */
/* ea3078: movhps xmm7, qword ptr [eax] */
  guest_unsupported(0xea3078); /* movhps xmm7, qword ptr [eax] */
/* ea307b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea307e: mulps xmm7, xmm3 */
  guest_unsupported(0xea307e); /* mulps xmm7, xmm3 */
/* ea3081: addps xmm4, xmm7 */
  guest_unsupported(0xea3081); /* addps xmm4, xmm7 */
/* ea3084: movhps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea3084); /* movhps qword ptr [ecx], xmm4 */
/* ea3087: movss dword ptr [ecx + 8], xmm4 */
  guest_unsupported(0xea3087); /* movss dword ptr [ecx + 8], xmm4 */
/* ea308c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea308f: mov esp, ebp */
  esp = ebp;
/* ea3091: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea3092: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea3095(void) {
  LOAD_REGS();
L_ea3095: /* ea3095: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea3099: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea30a0(); return;
}

void f_ea30a0(void) {
  LOAD_REGS();
L_ea30a0: /* ea30a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea30a1: mov ebp, esp */
  ebp = esp;
/* ea30a3: movss xmm0, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea30a3); /* movss xmm0, dword ptr [ebp + 0x1c] */
/* ea30a8: movss xmm1, xmm0 */
  guest_unsupported(0xea30a8); /* movss xmm1, xmm0 */
/* ea30ac: mulss xmm1, xmm0 */
  guest_unsupported(0xea30ac); /* mulss xmm1, xmm0 */
/* ea30b0: movss xmm2, xmm0 */
  guest_unsupported(0xea30b0); /* movss xmm2, xmm0 */
/* ea30b4: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea30b4); /* shufps xmm0, xmm0, 0 */
/* ea30b8: mulss xmm2, xmm1 */
  guest_unsupported(0xea30b8); /* mulss xmm2, xmm1 */
/* ea30bc: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea30bc); /* shufps xmm1, xmm1, 0 */
/* ea30c0: mulps xmm0, xmmword ptr [0xebbaa0] */
  guest_unsupported(0xea30c0); /* mulps xmm0, xmmword ptr [0xebbaa0] */
/* ea30c7: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea30c7); /* shufps xmm2, xmm2, 0 */
/* ea30cb: mulps xmm1, xmmword ptr [0xebba90] */
  guest_unsupported(0xea30cb); /* mulps xmm1, xmmword ptr [0xebba90] */
/* ea30d2: addss xmm0, dword ptr [0xebba80] */
  guest_unsupported(0xea30d2); /* addss xmm0, dword ptr [0xebba80] */
/* ea30da: mulps xmm2, xmmword ptr [0xebba70] */
  guest_unsupported(0xea30da); /* mulps xmm2, xmmword ptr [0xebba70] */
/* ea30e1: addps xmm0, xmm1 */
  guest_unsupported(0xea30e1); /* addps xmm0, xmm1 */
/* ea30e4: addps xmm0, xmm2 */
  guest_unsupported(0xea30e4); /* addps xmm0, xmm2 */
/* ea30e7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea30ea: movaps xmm1, xmm0 */
  guest_unsupported(0xea30ea); /* movaps xmm1, xmm0 */
/* ea30ed: shufps xmm1, xmm0, 0x55 */
  guest_unsupported(0xea30ed); /* shufps xmm1, xmm0, 0x55 */
/* ea30f1: movaps xmm2, xmm0 */
  guest_unsupported(0xea30f1); /* movaps xmm2, xmm0 */
/* ea30f4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea30f7: shufps xmm2, xmm0, 0xaa */
  guest_unsupported(0xea30f7); /* shufps xmm2, xmm0, 0xaa */
/* ea30fb: movaps xmm3, xmm0 */
  guest_unsupported(0xea30fb); /* movaps xmm3, xmm0 */
/* ea30fe: shufps xmm3, xmm0, 0xff */
  guest_unsupported(0xea30fe); /* shufps xmm3, xmm0, 0xff */
/* ea3102: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea3105: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea3105); /* shufps xmm0, xmm0, 0 */
/* ea3109: movups xmm4, xmmword ptr [eax] */
  guest_unsupported(0xea3109); /* movups xmm4, xmmword ptr [eax] */
/* ea310c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea310f: mulps xmm4, xmm0 */
  guest_unsupported(0xea310f); /* mulps xmm4, xmm0 */
/* ea3112: movups xmm5, xmmword ptr [ecx] */
  guest_unsupported(0xea3112); /* movups xmm5, xmmword ptr [ecx] */
/* ea3115: mulps xmm5, xmm1 */
  guest_unsupported(0xea3115); /* mulps xmm5, xmm1 */
/* ea3118: movups xmm6, xmmword ptr [edx] */
  guest_unsupported(0xea3118); /* movups xmm6, xmmword ptr [edx] */
/* ea311b: addps xmm4, xmm5 */
  guest_unsupported(0xea311b); /* addps xmm4, xmm5 */
/* ea311e: mulps xmm6, xmm2 */
  guest_unsupported(0xea311e); /* mulps xmm6, xmm2 */
/* ea3121: addps xmm4, xmm6 */
  guest_unsupported(0xea3121); /* addps xmm4, xmm6 */
/* ea3124: movups xmm7, xmmword ptr [eax] */
  guest_unsupported(0xea3124); /* movups xmm7, xmmword ptr [eax] */
/* ea3127: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea312a: mulps xmm7, xmm3 */
  guest_unsupported(0xea312a); /* mulps xmm7, xmm3 */
/* ea312d: addps xmm4, xmm7 */
  guest_unsupported(0xea312d); /* addps xmm4, xmm7 */
/* ea3130: movups xmmword ptr [ecx], xmm4 */
  guest_unsupported(0xea3130); /* movups xmmword ptr [ecx], xmm4 */
/* ea3133: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea3136: mov esp, ebp */
  esp = ebp;
/* ea3138: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea3139: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea313c(void) {
  LOAD_REGS();
L_ea313c: /* ea313c: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea3140(); return;
}

void f_ea3140(void) {
  LOAD_REGS();
L_ea3140: /* ea3140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3141: mov ebp, esp */
  ebp = esp;
/* ea3143: movss xmm0, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea3143); /* movss xmm0, dword ptr [ebp + 0x1c] */
/* ea3148: movss xmm1, xmm0 */
  guest_unsupported(0xea3148); /* movss xmm1, xmm0 */
/* ea314c: mulss xmm1, xmm0 */
  guest_unsupported(0xea314c); /* mulss xmm1, xmm0 */
/* ea3150: movss xmm2, xmm0 */
  guest_unsupported(0xea3150); /* movss xmm2, xmm0 */
/* ea3154: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea3154); /* shufps xmm0, xmm0, 0 */
/* ea3158: mulss xmm2, xmm1 */
  guest_unsupported(0xea3158); /* mulss xmm2, xmm1 */
/* ea315c: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea315c); /* shufps xmm1, xmm1, 0 */
/* ea3160: mulps xmm0, xmmword ptr [0xebbaa0] */
  guest_unsupported(0xea3160); /* mulps xmm0, xmmword ptr [0xebbaa0] */
/* ea3167: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea3167); /* shufps xmm2, xmm2, 0 */
/* ea316b: mulps xmm1, xmmword ptr [0xebba90] */
  guest_unsupported(0xea316b); /* mulps xmm1, xmmword ptr [0xebba90] */
/* ea3172: addss xmm0, dword ptr [0xebba80] */
  guest_unsupported(0xea3172); /* addss xmm0, dword ptr [0xebba80] */
/* ea317a: mulps xmm2, xmmword ptr [0xebba70] */
  guest_unsupported(0xea317a); /* mulps xmm2, xmmword ptr [0xebba70] */
/* ea3181: addps xmm0, xmm1 */
  guest_unsupported(0xea3181); /* addps xmm0, xmm1 */
/* ea3184: addps xmm0, xmm2 */
  guest_unsupported(0xea3184); /* addps xmm0, xmm2 */
/* ea3187: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea318a: movaps xmm2, xmm0 */
  guest_unsupported(0xea318a); /* movaps xmm2, xmm0 */
/* ea318d: shufps xmm2, xmm0, 0xfa */
  guest_unsupported(0xea318d); /* shufps xmm2, xmm0, 0xfa */
/* ea3191: shufps xmm0, xmm0, 0x50 */
  guest_unsupported(0xea3191); /* shufps xmm0, xmm0, 0x50 */
/* ea3195: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea3198: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea319b: movlps xmm4, qword ptr [eax] */
  guest_unsupported(0xea319b); /* movlps xmm4, qword ptr [eax] */
/* ea319e: movhps xmm4, qword ptr [ecx] */
  guest_unsupported(0xea319e); /* movhps xmm4, qword ptr [ecx] */
/* ea31a1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea31a4: mulps xmm4, xmm0 */
  guest_unsupported(0xea31a4); /* mulps xmm4, xmm0 */
/* ea31a7: movlps xmm6, qword ptr [edx] */
  guest_unsupported(0xea31a7); /* movlps xmm6, qword ptr [edx] */
/* ea31aa: movhps xmm6, qword ptr [eax] */
  guest_unsupported(0xea31aa); /* movhps xmm6, qword ptr [eax] */
/* ea31ad: mulps xmm6, xmm2 */
  guest_unsupported(0xea31ad); /* mulps xmm6, xmm2 */
/* ea31b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea31b3: addps xmm4, xmm6 */
  guest_unsupported(0xea31b3); /* addps xmm4, xmm6 */
/* ea31b6: movhlps xmm3, xmm4 */
  guest_unsupported(0xea31b6); /* movhlps xmm3, xmm4 */
/* ea31b9: addps xmm4, xmm3 */
  guest_unsupported(0xea31b9); /* addps xmm4, xmm3 */
/* ea31bc: movlps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea31bc); /* movlps qword ptr [ecx], xmm4 */
/* ea31bf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea31c2: mov esp, ebp */
  esp = ebp;
/* ea31c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea31c5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea31c9(void) {
  LOAD_REGS();
L_ea31c9: /* ea31c9: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea31d0(); return;
}

void f_ea31d0(void) {
  LOAD_REGS();
L_ea31d0: /* ea31d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea31d1: mov ebp, esp */
  ebp = esp;
/* ea31d3: movss xmm0, dword ptr [ebp + 0x18] */
  guest_unsupported(0xea31d3); /* movss xmm0, dword ptr [ebp + 0x18] */
/* ea31d8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea31db: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea31db); /* shufps xmm0, xmm0, 0 */
/* ea31df: movss xmm2, dword ptr [eax + 8] */
  guest_unsupported(0xea31df); /* movss xmm2, dword ptr [eax + 8] */
/* ea31e4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea31e7: movhps xmm2, qword ptr [eax] */
  guest_unsupported(0xea31e7); /* movhps xmm2, qword ptr [eax] */
/* ea31ea: movss xmm1, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea31ea); /* movss xmm1, dword ptr [ebp + 0x1c] */
/* ea31ef: movss xmm3, dword ptr [ecx + 8] */
  guest_unsupported(0xea31ef); /* movss xmm3, dword ptr [ecx + 8] */
/* ea31f4: movhps xmm3, qword ptr [ecx] */
  guest_unsupported(0xea31f4); /* movhps xmm3, qword ptr [ecx] */
/* ea31f7: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea31f7); /* shufps xmm1, xmm1, 0 */
/* ea31fb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ea31fe: subps xmm3, xmm2 */
  guest_unsupported(0xea31fe); /* subps xmm3, xmm2 */
/* ea3201: movss xmm4, dword ptr [eax + 8] */
  guest_unsupported(0xea3201); /* movss xmm4, dword ptr [eax + 8] */
/* ea3206: movhps xmm4, qword ptr [eax] */
  guest_unsupported(0xea3206); /* movhps xmm4, qword ptr [eax] */
/* ea3209: mulps xmm3, xmm0 */
  guest_unsupported(0xea3209); /* mulps xmm3, xmm0 */
/* ea320c: subps xmm4, xmm2 */
  guest_unsupported(0xea320c); /* subps xmm4, xmm2 */
/* ea320f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea3212: addps xmm3, xmm2 */
  guest_unsupported(0xea3212); /* addps xmm3, xmm2 */
/* ea3215: mulps xmm4, xmm1 */
  guest_unsupported(0xea3215); /* mulps xmm4, xmm1 */
/* ea3218: addps xmm3, xmm4 */
  guest_unsupported(0xea3218); /* addps xmm3, xmm4 */
/* ea321b: movss dword ptr [eax + 8], xmm3 */
  guest_unsupported(0xea321b); /* movss dword ptr [eax + 8], xmm3 */
/* ea3220: movhps qword ptr [eax], xmm3 */
  guest_unsupported(0xea3220); /* movhps qword ptr [eax], xmm3 */
/* ea3223: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea3226: mov esp, ebp */
  esp = ebp;
/* ea3228: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea3229: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea322c(void) {
  LOAD_REGS();
L_ea322c: /* ea322c: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea3230(); return;
}

void f_ea3230(void) {
  LOAD_REGS();
L_ea3230: /* ea3230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3231: mov ebp, esp */
  ebp = esp;
/* ea3233: movss xmm0, dword ptr [ebp + 0x18] */
  guest_unsupported(0xea3233); /* movss xmm0, dword ptr [ebp + 0x18] */
/* ea3238: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea323b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea323b); /* shufps xmm0, xmm0, 0 */
/* ea323f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea3242: movups xmm2, xmmword ptr [eax] */
  guest_unsupported(0xea3242); /* movups xmm2, xmmword ptr [eax] */
/* ea3245: movss xmm1, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea3245); /* movss xmm1, dword ptr [ebp + 0x1c] */
/* ea324a: movups xmm3, xmmword ptr [ecx] */
  guest_unsupported(0xea324a); /* movups xmm3, xmmword ptr [ecx] */
/* ea324d: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea324d); /* shufps xmm1, xmm1, 0 */
/* ea3251: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ea3254: subps xmm3, xmm2 */
  guest_unsupported(0xea3254); /* subps xmm3, xmm2 */
/* ea3257: movups xmm4, xmmword ptr [eax] */
  guest_unsupported(0xea3257); /* movups xmm4, xmmword ptr [eax] */
/* ea325a: mulps xmm3, xmm0 */
  guest_unsupported(0xea325a); /* mulps xmm3, xmm0 */
/* ea325d: subps xmm4, xmm2 */
  guest_unsupported(0xea325d); /* subps xmm4, xmm2 */
/* ea3260: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea3263: addps xmm3, xmm2 */
  guest_unsupported(0xea3263); /* addps xmm3, xmm2 */
/* ea3266: mulps xmm4, xmm1 */
  guest_unsupported(0xea3266); /* mulps xmm4, xmm1 */
/* ea3269: addps xmm3, xmm4 */
  guest_unsupported(0xea3269); /* addps xmm3, xmm4 */
/* ea326c: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea326c); /* movups xmmword ptr [eax], xmm3 */
/* ea326f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea3272: mov esp, ebp */
  esp = ebp;
/* ea3274: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea3275: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea3279(void) {
  LOAD_REGS();
L_ea3279: /* ea3279: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea3280(); return;
}

void f_ea3280(void) {
  LOAD_REGS();
L_ea3280: /* ea3280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3281: mov ebp, esp */
  ebp = esp;
/* ea3283: xorps xmm2, xmm2 */
  guest_unsupported(0xea3283); /* xorps xmm2, xmm2 */
/* ea3286: movss xmm0, dword ptr [ebp + 0x18] */
  guest_unsupported(0xea3286); /* movss xmm0, dword ptr [ebp + 0x18] */
/* ea328b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea328e: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea328e); /* shufps xmm0, xmm0, 0 */
/* ea3292: xorps xmm3, xmm3 */
  guest_unsupported(0xea3292); /* xorps xmm3, xmm3 */
/* ea3295: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea3298: movhps xmm2, qword ptr [eax] */
  guest_unsupported(0xea3298); /* movhps xmm2, qword ptr [eax] */
/* ea329b: movss xmm1, dword ptr [ebp + 0x1c] */
  guest_unsupported(0xea329b); /* movss xmm1, dword ptr [ebp + 0x1c] */
/* ea32a0: movhps xmm3, qword ptr [ecx] */
  guest_unsupported(0xea32a0); /* movhps xmm3, qword ptr [ecx] */
/* ea32a3: xorps xmm4, xmm4 */
  guest_unsupported(0xea32a3); /* xorps xmm4, xmm4 */
/* ea32a6: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea32a6); /* shufps xmm1, xmm1, 0 */
/* ea32aa: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ea32ad: subps xmm3, xmm2 */
  guest_unsupported(0xea32ad); /* subps xmm3, xmm2 */
/* ea32b0: movhps xmm4, qword ptr [eax] */
  guest_unsupported(0xea32b0); /* movhps xmm4, qword ptr [eax] */
/* ea32b3: mulps xmm3, xmm0 */
  guest_unsupported(0xea32b3); /* mulps xmm3, xmm0 */
/* ea32b6: subps xmm4, xmm2 */
  guest_unsupported(0xea32b6); /* subps xmm4, xmm2 */
/* ea32b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea32bc: addps xmm3, xmm2 */
  guest_unsupported(0xea32bc); /* addps xmm3, xmm2 */
/* ea32bf: mulps xmm4, xmm1 */
  guest_unsupported(0xea32bf); /* mulps xmm4, xmm1 */
/* ea32c2: addps xmm3, xmm4 */
  guest_unsupported(0xea32c2); /* addps xmm3, xmm4 */
/* ea32c5: movhps qword ptr [eax], xmm3 */
  guest_unsupported(0xea32c5); /* movhps qword ptr [eax], xmm3 */
/* ea32c8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea32cb: mov esp, ebp */
  esp = ebp;
/* ea32cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea32ce: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea32d2(void) {
  LOAD_REGS();
L_ea32d2: /* ea32d2: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea32d9: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea32e0(); return;
}

void f_ea32e0(void) {
  LOAD_REGS();
L_ea32e0: /* ea32e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea32e1: mov ebp, esp */
  ebp = esp;
/* ea32e3: sub esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esp = r;
  }
/* ea32e6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea32e9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ea32ec: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea32f0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea32f3: movups xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea32f3); /* movups xmm0, xmmword ptr [eax] */
/* ea32f6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea32f9: movss xmm1, dword ptr [ecx + 8] */
  guest_unsupported(0xea32f9); /* movss xmm1, dword ptr [ecx + 8] */
/* ea32fe: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea3301: movhps xmm1, qword ptr [ecx] */
  guest_unsupported(0xea3301); /* movhps xmm1, qword ptr [ecx] */
/* ea3304: movss xmm2, dword ptr [edx + 8] */
  guest_unsupported(0xea3304); /* movss xmm2, dword ptr [edx + 8] */
/* ea3309: movaps xmm4, xmm0 */
  guest_unsupported(0xea3309); /* movaps xmm4, xmm0 */
/* ea330c: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea330c); /* shufps xmm0, xmm0, 0x4e */
/* ea3310: movaps xmm3, xmm1 */
  guest_unsupported(0xea3310); /* movaps xmm3, xmm1 */
/* ea3313: shufps xmm4, xmm4, 0xff */
  guest_unsupported(0xea3313); /* shufps xmm4, xmm4, 0xff */
/* ea3317: movhps xmm2, qword ptr [edx] */
  guest_unsupported(0xea3317); /* movhps xmm2, qword ptr [edx] */
/* ea331a: mulps xmm3, xmm0 */
  guest_unsupported(0xea331a); /* mulps xmm3, xmm0 */
/* ea331d: mulps xmm0, xmm2 */
  guest_unsupported(0xea331d); /* mulps xmm0, xmm2 */
/* ea3320: movhlps xmm5, xmm3 */
  guest_unsupported(0xea3320); /* movhlps xmm5, xmm3 */
/* ea3323: movhlps xmm6, xmm0 */
  guest_unsupported(0xea3323); /* movhlps xmm6, xmm0 */
/* ea3326: addps xmm3, xmm5 */
  guest_unsupported(0xea3326); /* addps xmm3, xmm5 */
/* ea3329: addps xmm0, xmm6 */
  guest_unsupported(0xea3329); /* addps xmm0, xmm6 */
/* ea332c: shufps xmm5, xmm3, 0x55 */
  guest_unsupported(0xea332c); /* shufps xmm5, xmm3, 0x55 */
/* ea3330: shufps xmm6, xmm0, 0x55 */
  guest_unsupported(0xea3330); /* shufps xmm6, xmm0, 0x55 */
/* ea3334: addss xmm3, xmm5 */
  guest_unsupported(0xea3334); /* addss xmm3, xmm5 */
/* ea3338: addss xmm0, xmm6 */
  guest_unsupported(0xea3338); /* addss xmm0, xmm6 */
/* ea333c: movss xmm5, xmm3 */
  guest_unsupported(0xea333c); /* movss xmm5, xmm3 */
/* ea3340: subss xmm5, xmm0 */
  guest_unsupported(0xea3340); /* subss xmm5, xmm0 */
/* ea3344: addss xmm3, xmm4 */
  guest_unsupported(0xea3344); /* addss xmm3, xmm4 */
/* ea3348: comiss xmm5, dword ptr [0xebeec0] */
  guest_unsupported(0xea3348); /* comiss xmm5, dword ptr [0xebeec0] */
/* ea334f: je 0xea338e */
  if (zf) goto L_ea338e;
L_ea3355: /* ea3355: rcpss xmm0, xmm5 */
  guest_unsupported(0xea3355); /* rcpss xmm0, xmm5 */
/* ea3359: movss xmm6, xmm0 */
  guest_unsupported(0xea3359); /* movss xmm6, xmm0 */
/* ea335d: addss xmm6, xmm6 */
  guest_unsupported(0xea335d); /* addss xmm6, xmm6 */
/* ea3361: mulss xmm5, xmm0 */
  guest_unsupported(0xea3361); /* mulss xmm5, xmm0 */
/* ea3365: mulss xmm5, xmm0 */
  guest_unsupported(0xea3365); /* mulss xmm5, xmm0 */
/* ea3369: subss xmm6, xmm5 */
  guest_unsupported(0xea3369); /* subss xmm6, xmm5 */
/* ea336d: mulss xmm3, xmm6 */
  guest_unsupported(0xea336d); /* mulss xmm3, xmm6 */
/* ea3371: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea3371); /* shufps xmm3, xmm3, 0 */
/* ea3375: subps xmm2, xmm1 */
  guest_unsupported(0xea3375); /* subps xmm2, xmm1 */
/* ea3378: mulps xmm3, xmm2 */
  guest_unsupported(0xea3378); /* mulps xmm3, xmm2 */
/* ea337b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea337e: addps xmm1, xmm3 */
  guest_unsupported(0xea337e); /* addps xmm1, xmm3 */
/* ea3381: movhps qword ptr [eax], xmm1 */
  guest_unsupported(0xea3381); /* movhps qword ptr [eax], xmm1 */
/* ea3384: movss dword ptr [eax + 8], xmm1 */
  guest_unsupported(0xea3384); /* movss dword ptr [eax + 8], xmm1 */
/* ea3389: jmp 0xea3395 */
  goto L_ea3395;
L_ea338e: /* ea338e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_ea3395: /* ea3395: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea3398: mov esp, ebp */
  esp = ebp;
/* ea339a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea339b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea339e(void) {
  LOAD_REGS();
L_ea339e: /* ea339e: mov esi, esi */
  esi = esi;
  SPILL(); f_ea33a0(); return;
}

void f_ea33a0(void) {
  LOAD_REGS();
L_ea33a0: /* ea33a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea33a1: mov ebx, esp */
  ebx = esp;
/* ea33a3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea33a6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea33a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea33ac: jmp 0xea33b1 */
  goto L_ea33b1;
L_ea33b1: /* ea33b1: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea33b4: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea33b7: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea33b9: jne 0xea33cc */
  if (!zf) goto L_ea33cc;
L_ea33bb: /* ea33bb: movaps xmm7, xmmword ptr [eax] */
  guest_unsupported(0xea33bb); /* movaps xmm7, xmmword ptr [eax] */
/* ea33be: movaps xmm1, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea33be); /* movaps xmm1, xmmword ptr [eax + 0x10] */
/* ea33c2: movaps xmm2, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea33c2); /* movaps xmm2, xmmword ptr [eax + 0x20] */
/* ea33c6: movaps xmm0, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea33c6); /* movaps xmm0, xmmword ptr [eax + 0x30] */
/* ea33ca: jmp 0xea33eb */
  goto L_ea33eb;
L_ea33cc: /* ea33cc: movlps xmm1, qword ptr [eax + 0x10] */
  guest_unsupported(0xea33cc); /* movlps xmm1, qword ptr [eax + 0x10] */
/* ea33d0: movlps xmm7, qword ptr [eax] */
  guest_unsupported(0xea33d0); /* movlps xmm7, qword ptr [eax] */
/* ea33d3: movhps xmm1, qword ptr [eax + 0x18] */
  guest_unsupported(0xea33d3); /* movhps xmm1, qword ptr [eax + 0x18] */
/* ea33d7: movhps xmm7, qword ptr [eax + 8] */
  guest_unsupported(0xea33d7); /* movhps xmm7, qword ptr [eax + 8] */
/* ea33db: movlps xmm2, qword ptr [eax + 0x20] */
  guest_unsupported(0xea33db); /* movlps xmm2, qword ptr [eax + 0x20] */
/* ea33df: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea33df); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea33e3: movhps xmm2, qword ptr [eax + 0x28] */
  guest_unsupported(0xea33e3); /* movhps xmm2, qword ptr [eax + 0x28] */
/* ea33e7: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea33e7); /* movhps xmm0, qword ptr [eax + 0x38] */
L_ea33eb: /* ea33eb: shufps xmm2, xmm2, 0x39 */
  guest_unsupported(0xea33eb); /* shufps xmm2, xmm2, 0x39 */
/* ea33ef: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea33ef); /* shufps xmm1, xmm1, 0x39 */
/* ea33f3: movaps xmm3, xmm0 */
  guest_unsupported(0xea33f3); /* movaps xmm3, xmm0 */
/* ea33f6: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea33f6); /* shufps xmm0, xmm0, 0x4e */
/* ea33fa: mulps xmm3, xmm2 */
  guest_unsupported(0xea33fa); /* mulps xmm3, xmm2 */
/* ea33fd: movaps xmm4, xmm0 */
  guest_unsupported(0xea33fd); /* movaps xmm4, xmm0 */
/* ea3400: shufps xmm0, xmm0, 0x39 */
  guest_unsupported(0xea3400); /* shufps xmm0, xmm0, 0x39 */
/* ea3404: mulps xmm4, xmm2 */
  guest_unsupported(0xea3404); /* mulps xmm4, xmm2 */
/* ea3407: mulps xmm2, xmm0 */
  guest_unsupported(0xea3407); /* mulps xmm2, xmm0 */
/* ea340a: movaps xmm0, xmm2 */
  guest_unsupported(0xea340a); /* movaps xmm0, xmm2 */
/* ea340d: shufps xmm2, xmm2, 0x4e */
  guest_unsupported(0xea340d); /* shufps xmm2, xmm2, 0x4e */
/* ea3411: subps xmm2, xmm0 */
  guest_unsupported(0xea3411); /* subps xmm2, xmm0 */
/* ea3414: movaps xmm0, xmm1 */
  guest_unsupported(0xea3414); /* movaps xmm0, xmm1 */
/* ea3417: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3417); /* shufps xmm1, xmm1, 0x39 */
/* ea341b: mulps xmm2, xmm1 */
  guest_unsupported(0xea341b); /* mulps xmm2, xmm1 */
/* ea341e: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea341e); /* shufps xmm1, xmm1, 0x39 */
/* ea3422: movaps xmm5, xmm4 */
  guest_unsupported(0xea3422); /* movaps xmm5, xmm4 */
/* ea3425: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xea3425); /* shufps xmm4, xmm4, 0x39 */
/* ea3429: movaps xmm6, xmm3 */
  guest_unsupported(0xea3429); /* movaps xmm6, xmm3 */
/* ea342c: shufps xmm3, xmm3, 0x4e */
  guest_unsupported(0xea342c); /* shufps xmm3, xmm3, 0x4e */
/* ea3430: shufps xmm6, xmm6, 0x39 */
  guest_unsupported(0xea3430); /* shufps xmm6, xmm6, 0x39 */
/* ea3434: subps xmm4, xmm3 */
  guest_unsupported(0xea3434); /* subps xmm4, xmm3 */
/* ea3437: subps xmm5, xmm6 */
  guest_unsupported(0xea3437); /* subps xmm5, xmm6 */
/* ea343a: mulps xmm0, xmm4 */
  guest_unsupported(0xea343a); /* mulps xmm0, xmm4 */
/* ea343d: mulps xmm1, xmm5 */
  guest_unsupported(0xea343d); /* mulps xmm1, xmm5 */
/* ea3440: addps xmm0, xmm2 */
  guest_unsupported(0xea3440); /* addps xmm0, xmm2 */
/* ea3443: addps xmm0, xmm1 */
  guest_unsupported(0xea3443); /* addps xmm0, xmm1 */
/* ea3446: mulps xmm0, xmm7 */
  guest_unsupported(0xea3446); /* mulps xmm0, xmm7 */
/* ea3449: movaps xmm1, xmm0 */
  guest_unsupported(0xea3449); /* movaps xmm1, xmm0 */
/* ea344c: movhlps xmm0, xmm0 */
  guest_unsupported(0xea344c); /* movhlps xmm0, xmm0 */
/* ea344f: addps xmm1, xmm0 */
  guest_unsupported(0xea344f); /* addps xmm1, xmm0 */
/* ea3452: movaps xmm0, xmm1 */
  guest_unsupported(0xea3452); /* movaps xmm0, xmm1 */
/* ea3455: shufps xmm1, xmm1, 1 */
  guest_unsupported(0xea3455); /* shufps xmm1, xmm1, 1 */
/* ea3459: subss xmm0, xmm1 */
  guest_unsupported(0xea3459); /* subss xmm0, xmm1 */
/* ea345d: movss dword ptr [esp], xmm0 */
  guest_unsupported(0xea345d); /* movss dword ptr [esp], xmm0 */
/* ea3462: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ea3465: mov esp, ebx */
  esp = ebx;
/* ea3467: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3468: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea33ae(void) {
  LOAD_REGS();
L_ea33ae: /* ea33ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea33af: mov ebx, esp */
  ebx = esp;
/* ea33b1: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea33b4: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea33b7: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea33b9: jne 0xea33cc */
  if (!zf) goto L_ea33cc;
L_ea33bb: /* ea33bb: movaps xmm7, xmmword ptr [eax] */
  guest_unsupported(0xea33bb); /* movaps xmm7, xmmword ptr [eax] */
/* ea33be: movaps xmm1, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea33be); /* movaps xmm1, xmmword ptr [eax + 0x10] */
/* ea33c2: movaps xmm2, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea33c2); /* movaps xmm2, xmmword ptr [eax + 0x20] */
/* ea33c6: movaps xmm0, xmmword ptr [eax + 0x30] */
  guest_unsupported(0xea33c6); /* movaps xmm0, xmmword ptr [eax + 0x30] */
/* ea33ca: jmp 0xea33eb */
  goto L_ea33eb;
L_ea33cc: /* ea33cc: movlps xmm1, qword ptr [eax + 0x10] */
  guest_unsupported(0xea33cc); /* movlps xmm1, qword ptr [eax + 0x10] */
/* ea33d0: movlps xmm7, qword ptr [eax] */
  guest_unsupported(0xea33d0); /* movlps xmm7, qword ptr [eax] */
/* ea33d3: movhps xmm1, qword ptr [eax + 0x18] */
  guest_unsupported(0xea33d3); /* movhps xmm1, qword ptr [eax + 0x18] */
/* ea33d7: movhps xmm7, qword ptr [eax + 8] */
  guest_unsupported(0xea33d7); /* movhps xmm7, qword ptr [eax + 8] */
/* ea33db: movlps xmm2, qword ptr [eax + 0x20] */
  guest_unsupported(0xea33db); /* movlps xmm2, qword ptr [eax + 0x20] */
/* ea33df: movlps xmm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea33df); /* movlps xmm0, qword ptr [eax + 0x30] */
/* ea33e3: movhps xmm2, qword ptr [eax + 0x28] */
  guest_unsupported(0xea33e3); /* movhps xmm2, qword ptr [eax + 0x28] */
/* ea33e7: movhps xmm0, qword ptr [eax + 0x38] */
  guest_unsupported(0xea33e7); /* movhps xmm0, qword ptr [eax + 0x38] */
L_ea33eb: /* ea33eb: shufps xmm2, xmm2, 0x39 */
  guest_unsupported(0xea33eb); /* shufps xmm2, xmm2, 0x39 */
/* ea33ef: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea33ef); /* shufps xmm1, xmm1, 0x39 */
/* ea33f3: movaps xmm3, xmm0 */
  guest_unsupported(0xea33f3); /* movaps xmm3, xmm0 */
/* ea33f6: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea33f6); /* shufps xmm0, xmm0, 0x4e */
/* ea33fa: mulps xmm3, xmm2 */
  guest_unsupported(0xea33fa); /* mulps xmm3, xmm2 */
/* ea33fd: movaps xmm4, xmm0 */
  guest_unsupported(0xea33fd); /* movaps xmm4, xmm0 */
/* ea3400: shufps xmm0, xmm0, 0x39 */
  guest_unsupported(0xea3400); /* shufps xmm0, xmm0, 0x39 */
/* ea3404: mulps xmm4, xmm2 */
  guest_unsupported(0xea3404); /* mulps xmm4, xmm2 */
/* ea3407: mulps xmm2, xmm0 */
  guest_unsupported(0xea3407); /* mulps xmm2, xmm0 */
/* ea340a: movaps xmm0, xmm2 */
  guest_unsupported(0xea340a); /* movaps xmm0, xmm2 */
/* ea340d: shufps xmm2, xmm2, 0x4e */
  guest_unsupported(0xea340d); /* shufps xmm2, xmm2, 0x4e */
/* ea3411: subps xmm2, xmm0 */
  guest_unsupported(0xea3411); /* subps xmm2, xmm0 */
/* ea3414: movaps xmm0, xmm1 */
  guest_unsupported(0xea3414); /* movaps xmm0, xmm1 */
/* ea3417: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3417); /* shufps xmm1, xmm1, 0x39 */
/* ea341b: mulps xmm2, xmm1 */
  guest_unsupported(0xea341b); /* mulps xmm2, xmm1 */
/* ea341e: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea341e); /* shufps xmm1, xmm1, 0x39 */
/* ea3422: movaps xmm5, xmm4 */
  guest_unsupported(0xea3422); /* movaps xmm5, xmm4 */
/* ea3425: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xea3425); /* shufps xmm4, xmm4, 0x39 */
/* ea3429: movaps xmm6, xmm3 */
  guest_unsupported(0xea3429); /* movaps xmm6, xmm3 */
/* ea342c: shufps xmm3, xmm3, 0x4e */
  guest_unsupported(0xea342c); /* shufps xmm3, xmm3, 0x4e */
/* ea3430: shufps xmm6, xmm6, 0x39 */
  guest_unsupported(0xea3430); /* shufps xmm6, xmm6, 0x39 */
/* ea3434: subps xmm4, xmm3 */
  guest_unsupported(0xea3434); /* subps xmm4, xmm3 */
/* ea3437: subps xmm5, xmm6 */
  guest_unsupported(0xea3437); /* subps xmm5, xmm6 */
/* ea343a: mulps xmm0, xmm4 */
  guest_unsupported(0xea343a); /* mulps xmm0, xmm4 */
/* ea343d: mulps xmm1, xmm5 */
  guest_unsupported(0xea343d); /* mulps xmm1, xmm5 */
/* ea3440: addps xmm0, xmm2 */
  guest_unsupported(0xea3440); /* addps xmm0, xmm2 */
/* ea3443: addps xmm0, xmm1 */
  guest_unsupported(0xea3443); /* addps xmm0, xmm1 */
/* ea3446: mulps xmm0, xmm7 */
  guest_unsupported(0xea3446); /* mulps xmm0, xmm7 */
/* ea3449: movaps xmm1, xmm0 */
  guest_unsupported(0xea3449); /* movaps xmm1, xmm0 */
/* ea344c: movhlps xmm0, xmm0 */
  guest_unsupported(0xea344c); /* movhlps xmm0, xmm0 */
/* ea344f: addps xmm1, xmm0 */
  guest_unsupported(0xea344f); /* addps xmm1, xmm0 */
/* ea3452: movaps xmm0, xmm1 */
  guest_unsupported(0xea3452); /* movaps xmm0, xmm1 */
/* ea3455: shufps xmm1, xmm1, 1 */
  guest_unsupported(0xea3455); /* shufps xmm1, xmm1, 1 */
/* ea3459: subss xmm0, xmm1 */
  guest_unsupported(0xea3459); /* subss xmm0, xmm1 */
/* ea345d: movss dword ptr [esp], xmm0 */
  guest_unsupported(0xea345d); /* movss dword ptr [esp], xmm0 */
/* ea3462: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ea3465: mov esp, ebx */
  esp = ebx;
/* ea3467: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3468: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea346c(void) {
  LOAD_REGS();
L_ea346c: /* ea346c: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea3470(); return;
}

void f_ea3470(void) {
  LOAD_REGS();
L_ea3470: /* ea3470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3471: mov ebx, esp */
  ebx = esp;
/* ea3473: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3476: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3479: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea347c: jmp 0xea3481 */
  goto L_ea3481;
L_ea3481: /* ea3481: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3482: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea3485: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3488: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea348b: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea348e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3491: movss xmm0, dword ptr [ebp + 8] */
  guest_unsupported(0xea3491); /* movss xmm0, dword ptr [ebp + 8] */
/* ea3496: movss xmm1, dword ptr [edx + 8] */
  guest_unsupported(0xea3496); /* movss xmm1, dword ptr [edx + 8] */
/* ea349b: movhps xmm0, qword ptr [ebp] */
  guest_unsupported(0xea349b); /* movhps xmm0, qword ptr [ebp] */
/* ea349f: movhps xmm1, qword ptr [edx] */
  guest_unsupported(0xea349f); /* movhps xmm1, qword ptr [edx] */
/* ea34a2: movss xmm2, dword ptr [ecx + 8] */
  guest_unsupported(0xea34a2); /* movss xmm2, dword ptr [ecx + 8] */
/* ea34a7: movhps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea34a7); /* movhps xmm2, qword ptr [ecx] */
/* ea34aa: movaps xmm3, xmm0 */
  guest_unsupported(0xea34aa); /* movaps xmm3, xmm0 */
/* ea34ad: subps xmm0, xmm1 */
  guest_unsupported(0xea34ad); /* subps xmm0, xmm1 */
/* ea34b0: movaps xmm1, xmm0 */
  guest_unsupported(0xea34b0); /* movaps xmm1, xmm0 */
/* ea34b3: shufps xmm0, xmm0, 0x78 */
  guest_unsupported(0xea34b3); /* shufps xmm0, xmm0, 0x78 */
/* ea34b7: shufps xmm1, xmm1, 0x63 */
  guest_unsupported(0xea34b7); /* shufps xmm1, xmm1, 0x63 */
/* ea34bb: movaps xmm4, xmm3 */
  guest_unsupported(0xea34bb); /* movaps xmm4, xmm3 */
/* ea34be: subps xmm3, xmm2 */
  guest_unsupported(0xea34be); /* subps xmm3, xmm2 */
/* ea34c1: movaps xmm2, xmmword ptr [0xebbac0] */
  guest_unsupported(0xea34c1); /* movaps xmm2, xmmword ptr [0xebbac0] */
/* ea34c8: movaps xmm5, xmm3 */
  guest_unsupported(0xea34c8); /* movaps xmm5, xmm3 */
/* ea34cb: shufps xmm3, xmm3, 0x63 */
  guest_unsupported(0xea34cb); /* shufps xmm3, xmm3, 0x63 */
/* ea34cf: shufps xmm5, xmm5, 0x78 */
  guest_unsupported(0xea34cf); /* shufps xmm5, xmm5, 0x78 */
/* ea34d3: mulps xmm0, xmm3 */
  guest_unsupported(0xea34d3); /* mulps xmm0, xmm3 */
/* ea34d6: mulps xmm5, xmm1 */
  guest_unsupported(0xea34d6); /* mulps xmm5, xmm1 */
/* ea34d9: movaps xmm1, xmmword ptr [0xebbad0] */
  guest_unsupported(0xea34d9); /* movaps xmm1, xmmword ptr [0xebbad0] */
/* ea34e0: subps xmm0, xmm5 */
  guest_unsupported(0xea34e0); /* subps xmm0, xmm5 */
/* ea34e3: shufps xmm4, xmm4, 0xe */
  guest_unsupported(0xea34e3); /* shufps xmm4, xmm4, 0xe */
/* ea34e7: movaps xmm3, xmm0 */
  guest_unsupported(0xea34e7); /* movaps xmm3, xmm0 */
/* ea34ea: mulps xmm0, xmm0 */
  guest_unsupported(0xea34ea); /* mulps xmm0, xmm0 */
/* ea34ed: movaps xmm5, xmm0 */
  guest_unsupported(0xea34ed); /* movaps xmm5, xmm0 */
/* ea34f0: movhlps xmm0, xmm0 */
  guest_unsupported(0xea34f0); /* movhlps xmm0, xmm0 */
/* ea34f3: addps xmm5, xmm0 */
  guest_unsupported(0xea34f3); /* addps xmm5, xmm0 */
/* ea34f6: movaps xmm0, xmm5 */
  guest_unsupported(0xea34f6); /* movaps xmm0, xmm5 */
/* ea34f9: shufps xmm5, xmm5, 1 */
  guest_unsupported(0xea34f9); /* shufps xmm5, xmm5, 1 */
/* ea34fd: addss xmm0, xmm5 */
  guest_unsupported(0xea34fd); /* addss xmm0, xmm5 */
/* ea3501: movaps xmm5, xmm0 */
  guest_unsupported(0xea3501); /* movaps xmm5, xmm0 */
/* ea3504: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea3504); /* rsqrtss xmm0, xmm0 */
/* ea3508: mulss xmm1, xmm0 */
  guest_unsupported(0xea3508); /* mulss xmm1, xmm0 */
/* ea350c: movaps xmm6, xmm5 */
  guest_unsupported(0xea350c); /* movaps xmm6, xmm5 */
/* ea350f: mulss xmm5, xmm0 */
  guest_unsupported(0xea350f); /* mulss xmm5, xmm0 */
/* ea3513: mulss xmm5, xmm0 */
  guest_unsupported(0xea3513); /* mulss xmm5, xmm0 */
/* ea3517: subss xmm2, xmm5 */
  guest_unsupported(0xea3517); /* subss xmm2, xmm5 */
/* ea351b: mulss xmm1, xmm2 */
  guest_unsupported(0xea351b); /* mulss xmm1, xmm2 */
/* ea351f: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea351f); /* shufps xmm1, xmm1, 0 */
/* ea3523: mulps xmm3, xmm1 */
  guest_unsupported(0xea3523); /* mulps xmm3, xmm1 */
/* ea3526: mulps xmm4, xmm3 */
  guest_unsupported(0xea3526); /* mulps xmm4, xmm3 */
/* ea3529: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea3529); /* movups xmmword ptr [eax], xmm3 */
/* ea352c: movhlps xmm6, xmm4 */
  guest_unsupported(0xea352c); /* movhlps xmm6, xmm4 */
/* ea352f: movaps xmm0, xmm4 */
  guest_unsupported(0xea352f); /* movaps xmm0, xmm4 */
/* ea3532: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea3532); /* shufps xmm4, xmm4, 0x55 */
/* ea3536: addss xmm6, xmm4 */
  guest_unsupported(0xea3536); /* addss xmm6, xmm4 */
/* ea353a: addss xmm0, xmm6 */
  guest_unsupported(0xea353a); /* addss xmm0, xmm6 */
/* ea353e: xorps xmm0, xmmword ptr [0xebbab0] */
  guest_unsupported(0xea353e); /* xorps xmm0, xmmword ptr [0xebbab0] */
/* ea3545: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea3545); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea354a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea354d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea354e: mov esp, ebx */
  esp = ebx;
/* ea3550: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3551: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea347e(void) {
  LOAD_REGS();
L_ea347e: /* ea347e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea347f: mov ebx, esp */
  ebx = esp;
/* ea3481: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3482: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea3485: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3488: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea348b: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea348e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3491: movss xmm0, dword ptr [ebp + 8] */
  guest_unsupported(0xea3491); /* movss xmm0, dword ptr [ebp + 8] */
/* ea3496: movss xmm1, dword ptr [edx + 8] */
  guest_unsupported(0xea3496); /* movss xmm1, dword ptr [edx + 8] */
/* ea349b: movhps xmm0, qword ptr [ebp] */
  guest_unsupported(0xea349b); /* movhps xmm0, qword ptr [ebp] */
/* ea349f: movhps xmm1, qword ptr [edx] */
  guest_unsupported(0xea349f); /* movhps xmm1, qword ptr [edx] */
/* ea34a2: movss xmm2, dword ptr [ecx + 8] */
  guest_unsupported(0xea34a2); /* movss xmm2, dword ptr [ecx + 8] */
/* ea34a7: movhps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea34a7); /* movhps xmm2, qword ptr [ecx] */
/* ea34aa: movaps xmm3, xmm0 */
  guest_unsupported(0xea34aa); /* movaps xmm3, xmm0 */
/* ea34ad: subps xmm0, xmm1 */
  guest_unsupported(0xea34ad); /* subps xmm0, xmm1 */
/* ea34b0: movaps xmm1, xmm0 */
  guest_unsupported(0xea34b0); /* movaps xmm1, xmm0 */
/* ea34b3: shufps xmm0, xmm0, 0x78 */
  guest_unsupported(0xea34b3); /* shufps xmm0, xmm0, 0x78 */
/* ea34b7: shufps xmm1, xmm1, 0x63 */
  guest_unsupported(0xea34b7); /* shufps xmm1, xmm1, 0x63 */
/* ea34bb: movaps xmm4, xmm3 */
  guest_unsupported(0xea34bb); /* movaps xmm4, xmm3 */
/* ea34be: subps xmm3, xmm2 */
  guest_unsupported(0xea34be); /* subps xmm3, xmm2 */
/* ea34c1: movaps xmm2, xmmword ptr [0xebbac0] */
  guest_unsupported(0xea34c1); /* movaps xmm2, xmmword ptr [0xebbac0] */
/* ea34c8: movaps xmm5, xmm3 */
  guest_unsupported(0xea34c8); /* movaps xmm5, xmm3 */
/* ea34cb: shufps xmm3, xmm3, 0x63 */
  guest_unsupported(0xea34cb); /* shufps xmm3, xmm3, 0x63 */
/* ea34cf: shufps xmm5, xmm5, 0x78 */
  guest_unsupported(0xea34cf); /* shufps xmm5, xmm5, 0x78 */
/* ea34d3: mulps xmm0, xmm3 */
  guest_unsupported(0xea34d3); /* mulps xmm0, xmm3 */
/* ea34d6: mulps xmm5, xmm1 */
  guest_unsupported(0xea34d6); /* mulps xmm5, xmm1 */
/* ea34d9: movaps xmm1, xmmword ptr [0xebbad0] */
  guest_unsupported(0xea34d9); /* movaps xmm1, xmmword ptr [0xebbad0] */
/* ea34e0: subps xmm0, xmm5 */
  guest_unsupported(0xea34e0); /* subps xmm0, xmm5 */
/* ea34e3: shufps xmm4, xmm4, 0xe */
  guest_unsupported(0xea34e3); /* shufps xmm4, xmm4, 0xe */
/* ea34e7: movaps xmm3, xmm0 */
  guest_unsupported(0xea34e7); /* movaps xmm3, xmm0 */
/* ea34ea: mulps xmm0, xmm0 */
  guest_unsupported(0xea34ea); /* mulps xmm0, xmm0 */
/* ea34ed: movaps xmm5, xmm0 */
  guest_unsupported(0xea34ed); /* movaps xmm5, xmm0 */
/* ea34f0: movhlps xmm0, xmm0 */
  guest_unsupported(0xea34f0); /* movhlps xmm0, xmm0 */
/* ea34f3: addps xmm5, xmm0 */
  guest_unsupported(0xea34f3); /* addps xmm5, xmm0 */
/* ea34f6: movaps xmm0, xmm5 */
  guest_unsupported(0xea34f6); /* movaps xmm0, xmm5 */
/* ea34f9: shufps xmm5, xmm5, 1 */
  guest_unsupported(0xea34f9); /* shufps xmm5, xmm5, 1 */
/* ea34fd: addss xmm0, xmm5 */
  guest_unsupported(0xea34fd); /* addss xmm0, xmm5 */
/* ea3501: movaps xmm5, xmm0 */
  guest_unsupported(0xea3501); /* movaps xmm5, xmm0 */
/* ea3504: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea3504); /* rsqrtss xmm0, xmm0 */
/* ea3508: mulss xmm1, xmm0 */
  guest_unsupported(0xea3508); /* mulss xmm1, xmm0 */
/* ea350c: movaps xmm6, xmm5 */
  guest_unsupported(0xea350c); /* movaps xmm6, xmm5 */
/* ea350f: mulss xmm5, xmm0 */
  guest_unsupported(0xea350f); /* mulss xmm5, xmm0 */
/* ea3513: mulss xmm5, xmm0 */
  guest_unsupported(0xea3513); /* mulss xmm5, xmm0 */
/* ea3517: subss xmm2, xmm5 */
  guest_unsupported(0xea3517); /* subss xmm2, xmm5 */
/* ea351b: mulss xmm1, xmm2 */
  guest_unsupported(0xea351b); /* mulss xmm1, xmm2 */
/* ea351f: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea351f); /* shufps xmm1, xmm1, 0 */
/* ea3523: mulps xmm3, xmm1 */
  guest_unsupported(0xea3523); /* mulps xmm3, xmm1 */
/* ea3526: mulps xmm4, xmm3 */
  guest_unsupported(0xea3526); /* mulps xmm4, xmm3 */
/* ea3529: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea3529); /* movups xmmword ptr [eax], xmm3 */
/* ea352c: movhlps xmm6, xmm4 */
  guest_unsupported(0xea352c); /* movhlps xmm6, xmm4 */
/* ea352f: movaps xmm0, xmm4 */
  guest_unsupported(0xea352f); /* movaps xmm0, xmm4 */
/* ea3532: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea3532); /* shufps xmm4, xmm4, 0x55 */
/* ea3536: addss xmm6, xmm4 */
  guest_unsupported(0xea3536); /* addss xmm6, xmm4 */
/* ea353a: addss xmm0, xmm6 */
  guest_unsupported(0xea353a); /* addss xmm0, xmm6 */
/* ea353e: xorps xmm0, xmmword ptr [0xebbab0] */
  guest_unsupported(0xea353e); /* xorps xmm0, xmmword ptr [0xebbab0] */
/* ea3545: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea3545); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea354a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea354d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea354e: mov esp, ebx */
  esp = ebx;
/* ea3550: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3551: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea3554(void) {
  LOAD_REGS();
L_ea3554: /* ea3554: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea355a: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea3560(); return;
}

void f_ea3560(void) {
  LOAD_REGS();
L_ea3560: /* ea3560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3561: mov ebx, esp */
  ebx = esp;
/* ea3563: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3566: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3569: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea356c: jmp 0xea3571 */
  goto L_ea3571;
L_ea3571: /* ea3571: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea3574: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3577: movups xmm2, xmmword ptr [eax] */
  guest_unsupported(0xea3577); /* movups xmm2, xmmword ptr [eax] */
/* ea357a: movaps xmm3, xmmword ptr [0xebbb20] */
  guest_unsupported(0xea357a); /* movaps xmm3, xmmword ptr [0xebbb20] */
/* ea3581: xorps xmm0, xmm0 */
  guest_unsupported(0xea3581); /* xorps xmm0, xmm0 */
/* ea3584: andps xmm3, xmm2 */
  guest_unsupported(0xea3584); /* andps xmm3, xmm2 */
/* ea3587: xorps xmm1, xmm1 */
  guest_unsupported(0xea3587); /* xorps xmm1, xmm1 */
/* ea358a: mulps xmm3, xmm3 */
  guest_unsupported(0xea358a); /* mulps xmm3, xmm3 */
/* ea358d: mov edx, 1 */
  edx = 0x1u;
/* ea3592: xor ecx, ecx */
  ecx = 0;
  zf = 1;
/* ea3594: movhlps xmm0, xmm3 */
  guest_unsupported(0xea3594); /* movhlps xmm0, xmm3 */
/* ea3597: movaps xmm4, xmm1 */
  guest_unsupported(0xea3597); /* movaps xmm4, xmm1 */
/* ea359a: movaps xmm1, xmm3 */
  guest_unsupported(0xea359a); /* movaps xmm1, xmm3 */
/* ea359d: addps xmm1, xmm0 */
  guest_unsupported(0xea359d); /* addps xmm1, xmm0 */
/* ea35a0: movaps xmm0, xmm1 */
  guest_unsupported(0xea35a0); /* movaps xmm0, xmm1 */
/* ea35a3: shufps xmm0, xmm0, 1 */
  guest_unsupported(0xea35a3); /* shufps xmm0, xmm0, 1 */
/* ea35a7: addss xmm0, xmm1 */
  guest_unsupported(0xea35a7); /* addss xmm0, xmm1 */
/* ea35ab: comiss xmm0, xmm4 */
  guest_unsupported(0xea35ab); /* comiss xmm0, xmm4 */
/* ea35ae: cmove ecx, edx */
  if (zf) { ecx = edx; }
/* ea35b1: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea35b4: je 0xea3626 */
  if (zf) goto L_ea3626;
L_ea35b6: /* ea35b6: mov al, byte ptr [0xebef40] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xebef40u))) & 0xffu);
/* ea35bb: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea35bd: je 0xea35c8 */
  if (zf) goto L_ea35c8;
L_ea35bf: /* ea35bf: movaps xmm4, xmmword ptr [0xebef20] */
  guest_unsupported(0xea35bf); /* movaps xmm4, xmmword ptr [0xebef20] */
/* ea35c6: jmp 0xea35de */
  goto L_ea35de;
L_ea35c8: /* ea35c8: or al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea35ca: movss xmm4, dword ptr [0xebf0c0] */
  guest_unsupported(0xea35ca); /* movss xmm4, dword ptr [0xebf0c0] */
/* ea35d2: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea35d7: movaps xmmword ptr [0xebef20], xmm4 */
  guest_unsupported(0xea35d7); /* movaps xmmword ptr [0xebef20], xmm4 */
L_ea35de: /* ea35de: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea35e0: je 0xea35eb */
  if (zf) goto L_ea35eb;
L_ea35e2: /* ea35e2: movaps xmm3, xmmword ptr [0xebef30] */
  guest_unsupported(0xea35e2); /* movaps xmm3, xmmword ptr [0xebef30] */
/* ea35e9: jmp 0xea3601 */
  goto L_ea3601;
L_ea35eb: /* ea35eb: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea35ed: movss xmm3, dword ptr [0xebf0c4] */
  guest_unsupported(0xea35ed); /* movss xmm3, dword ptr [0xebf0c4] */
/* ea35f5: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea35fa: movaps xmmword ptr [0xebef30], xmm3 */
  guest_unsupported(0xea35fa); /* movaps xmmword ptr [0xebef30], xmm3 */
L_ea3601: /* ea3601: movaps xmm5, xmm0 */
  guest_unsupported(0xea3601); /* movaps xmm5, xmm0 */
/* ea3604: rsqrtss xmm5, xmm5 */
  guest_unsupported(0xea3604); /* rsqrtss xmm5, xmm5 */
/* ea3608: mulss xmm0, xmm5 */
  guest_unsupported(0xea3608); /* mulss xmm0, xmm5 */
/* ea360c: mulss xmm4, xmm5 */
  guest_unsupported(0xea360c); /* mulss xmm4, xmm5 */
/* ea3610: mulss xmm0, xmm5 */
  guest_unsupported(0xea3610); /* mulss xmm0, xmm5 */
/* ea3614: subss xmm3, xmm0 */
  guest_unsupported(0xea3614); /* subss xmm3, xmm0 */
/* ea3618: mulss xmm4, xmm3 */
  guest_unsupported(0xea3618); /* mulss xmm4, xmm3 */
/* ea361c: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea361c); /* shufps xmm4, xmm4, 0 */
/* ea3620: movaps xmm0, xmm2 */
  guest_unsupported(0xea3620); /* movaps xmm0, xmm2 */
/* ea3623: mulps xmm0, xmm4 */
  guest_unsupported(0xea3623); /* mulps xmm0, xmm4 */
L_ea3626: /* ea3626: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3629: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea362c: movups xmm2, xmmword ptr [edx] */
  guest_unsupported(0xea362c); /* movups xmm2, xmmword ptr [edx] */
/* ea362f: movaps xmm3, xmmword ptr [0xebbaf0] */
  guest_unsupported(0xea362f); /* movaps xmm3, xmmword ptr [0xebbaf0] */
/* ea3636: movaps xmm4, xmmword ptr [0xebbae0] */
  guest_unsupported(0xea3636); /* movaps xmm4, xmmword ptr [0xebbae0] */
/* ea363d: xorps xmm4, xmm0 */
  guest_unsupported(0xea363d); /* xorps xmm4, xmm0 */
/* ea3640: mulps xmm0, xmm2 */
  guest_unsupported(0xea3640); /* mulps xmm0, xmm2 */
/* ea3643: movaps xmm5, xmmword ptr [0xebbb00] */
  guest_unsupported(0xea3643); /* movaps xmm5, xmmword ptr [0xebbb00] */
/* ea364a: movhlps xmm1, xmm0 */
  guest_unsupported(0xea364a); /* movhlps xmm1, xmm0 */
/* ea364d: movaps xmm6, xmmword ptr [0xebbb10] */
  guest_unsupported(0xea364d); /* movaps xmm6, xmmword ptr [0xebbb10] */
/* ea3654: addps xmm0, xmm1 */
  guest_unsupported(0xea3654); /* addps xmm0, xmm1 */
/* ea3657: movaps xmm1, xmm0 */
  guest_unsupported(0xea3657); /* movaps xmm1, xmm0 */
/* ea365a: shufps xmm1, xmm1, 1 */
  guest_unsupported(0xea365a); /* shufps xmm1, xmm1, 1 */
/* ea365e: addss xmm0, xmm1 */
  guest_unsupported(0xea365e); /* addss xmm0, xmm1 */
/* ea3662: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea3662); /* shufps xmm0, xmm0, 0 */
/* ea3666: andps xmm3, xmm0 */
  guest_unsupported(0xea3666); /* andps xmm3, xmm0 */
/* ea3669: andps xmm5, xmm0 */
  guest_unsupported(0xea3669); /* andps xmm5, xmm0 */
/* ea366c: andps xmm6, xmm0 */
  guest_unsupported(0xea366c); /* andps xmm6, xmm0 */
/* ea366f: movaps xmm1, xmm4 */
  guest_unsupported(0xea366f); /* movaps xmm1, xmm4 */
/* ea3672: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea3672); /* shufps xmm4, xmm4, 0x55 */
/* ea3676: mulps xmm4, xmm2 */
  guest_unsupported(0xea3676); /* mulps xmm4, xmm2 */
/* ea3679: movaps xmm7, xmm0 */
  guest_unsupported(0xea3679); /* movaps xmm7, xmm0 */
/* ea367c: movaps xmm0, xmm4 */
  guest_unsupported(0xea367c); /* movaps xmm0, xmm4 */
/* ea367f: addps xmm0, xmm3 */
  guest_unsupported(0xea367f); /* addps xmm0, xmm3 */
/* ea3682: movaps xmm3, xmm1 */
  guest_unsupported(0xea3682); /* movaps xmm3, xmm1 */
/* ea3685: shufps xmm3, xmm3, 0xaa */
  guest_unsupported(0xea3685); /* shufps xmm3, xmm3, 0xaa */
/* ea3689: mulps xmm3, xmm2 */
  guest_unsupported(0xea3689); /* mulps xmm3, xmm2 */
/* ea368c: movaps xmm4, xmm1 */
  guest_unsupported(0xea368c); /* movaps xmm4, xmm1 */
/* ea368f: movaps xmm1, xmm3 */
  guest_unsupported(0xea368f); /* movaps xmm1, xmm3 */
/* ea3692: addps xmm1, xmm5 */
  guest_unsupported(0xea3692); /* addps xmm1, xmm5 */
/* ea3695: movaps xmm3, xmm4 */
  guest_unsupported(0xea3695); /* movaps xmm3, xmm4 */
/* ea3698: shufps xmm4, xmm4, 0xff */
  guest_unsupported(0xea3698); /* shufps xmm4, xmm4, 0xff */
/* ea369c: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea369c); /* shufps xmm3, xmm3, 0 */
/* ea36a0: mulps xmm4, xmm2 */
  guest_unsupported(0xea36a0); /* mulps xmm4, xmm2 */
/* ea36a3: mulps xmm3, xmm2 */
  guest_unsupported(0xea36a3); /* mulps xmm3, xmm2 */
/* ea36a6: movaps xmm2, xmm4 */
  guest_unsupported(0xea36a6); /* movaps xmm2, xmm4 */
/* ea36a9: addps xmm2, xmm6 */
  guest_unsupported(0xea36a9); /* addps xmm2, xmm6 */
/* ea36ac: addss xmm3, xmm7 */
  guest_unsupported(0xea36ac); /* addss xmm3, xmm7 */
/* ea36b0: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea36b2: jne 0xea36c5 */
  if (!zf) goto L_ea36c5;
L_ea36b4: /* ea36b4: movaps xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea36b4); /* movaps xmmword ptr [eax], xmm3 */
/* ea36b7: movaps xmmword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea36b7); /* movaps xmmword ptr [eax + 0x10], xmm0 */
/* ea36bb: movaps xmmword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea36bb); /* movaps xmmword ptr [eax + 0x20], xmm1 */
/* ea36bf: movaps xmmword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea36bf); /* movaps xmmword ptr [eax + 0x30], xmm2 */
/* ea36c3: jmp 0xea36e4 */
  goto L_ea36e4;
L_ea36c5: /* ea36c5: movlps qword ptr [eax], xmm3 */
  guest_unsupported(0xea36c5); /* movlps qword ptr [eax], xmm3 */
/* ea36c8: movhps qword ptr [eax + 8], xmm3 */
  guest_unsupported(0xea36c8); /* movhps qword ptr [eax + 8], xmm3 */
/* ea36cc: movlps qword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea36cc); /* movlps qword ptr [eax + 0x10], xmm0 */
/* ea36d0: movhps qword ptr [eax + 0x18], xmm0 */
  guest_unsupported(0xea36d0); /* movhps qword ptr [eax + 0x18], xmm0 */
/* ea36d4: movlps qword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea36d4); /* movlps qword ptr [eax + 0x20], xmm1 */
/* ea36d8: movhps qword ptr [eax + 0x28], xmm1 */
  guest_unsupported(0xea36d8); /* movhps qword ptr [eax + 0x28], xmm1 */
/* ea36dc: movlps qword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea36dc); /* movlps qword ptr [eax + 0x30], xmm2 */
/* ea36e0: movhps qword ptr [eax + 0x38], xmm2 */
  guest_unsupported(0xea36e0); /* movhps qword ptr [eax + 0x38], xmm2 */
L_ea36e4: /* ea36e4: mov esp, ebx */
  esp = ebx;
/* ea36e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea36e7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea356e(void) {
  LOAD_REGS();
L_ea356e: /* ea356e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea356f: mov ebx, esp */
  ebx = esp;
/* ea3571: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea3574: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3577: movups xmm2, xmmword ptr [eax] */
  guest_unsupported(0xea3577); /* movups xmm2, xmmword ptr [eax] */
/* ea357a: movaps xmm3, xmmword ptr [0xebbb20] */
  guest_unsupported(0xea357a); /* movaps xmm3, xmmword ptr [0xebbb20] */
/* ea3581: xorps xmm0, xmm0 */
  guest_unsupported(0xea3581); /* xorps xmm0, xmm0 */
/* ea3584: andps xmm3, xmm2 */
  guest_unsupported(0xea3584); /* andps xmm3, xmm2 */
/* ea3587: xorps xmm1, xmm1 */
  guest_unsupported(0xea3587); /* xorps xmm1, xmm1 */
/* ea358a: mulps xmm3, xmm3 */
  guest_unsupported(0xea358a); /* mulps xmm3, xmm3 */
/* ea358d: mov edx, 1 */
  edx = 0x1u;
/* ea3592: xor ecx, ecx */
  ecx = 0;
  zf = 1;
/* ea3594: movhlps xmm0, xmm3 */
  guest_unsupported(0xea3594); /* movhlps xmm0, xmm3 */
/* ea3597: movaps xmm4, xmm1 */
  guest_unsupported(0xea3597); /* movaps xmm4, xmm1 */
/* ea359a: movaps xmm1, xmm3 */
  guest_unsupported(0xea359a); /* movaps xmm1, xmm3 */
/* ea359d: addps xmm1, xmm0 */
  guest_unsupported(0xea359d); /* addps xmm1, xmm0 */
/* ea35a0: movaps xmm0, xmm1 */
  guest_unsupported(0xea35a0); /* movaps xmm0, xmm1 */
/* ea35a3: shufps xmm0, xmm0, 1 */
  guest_unsupported(0xea35a3); /* shufps xmm0, xmm0, 1 */
/* ea35a7: addss xmm0, xmm1 */
  guest_unsupported(0xea35a7); /* addss xmm0, xmm1 */
/* ea35ab: comiss xmm0, xmm4 */
  guest_unsupported(0xea35ab); /* comiss xmm0, xmm4 */
/* ea35ae: cmove ecx, edx */
  if (zf) { ecx = edx; }
/* ea35b1: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea35b4: je 0xea3626 */
  if (zf) goto L_ea3626;
L_ea35b6: /* ea35b6: mov al, byte ptr [0xebef40] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xebef40u))) & 0xffu);
/* ea35bb: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea35bd: je 0xea35c8 */
  if (zf) goto L_ea35c8;
L_ea35bf: /* ea35bf: movaps xmm4, xmmword ptr [0xebef20] */
  guest_unsupported(0xea35bf); /* movaps xmm4, xmmword ptr [0xebef20] */
/* ea35c6: jmp 0xea35de */
  goto L_ea35de;
L_ea35c8: /* ea35c8: or al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea35ca: movss xmm4, dword ptr [0xebf0c0] */
  guest_unsupported(0xea35ca); /* movss xmm4, dword ptr [0xebf0c0] */
/* ea35d2: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea35d7: movaps xmmword ptr [0xebef20], xmm4 */
  guest_unsupported(0xea35d7); /* movaps xmmword ptr [0xebef20], xmm4 */
L_ea35de: /* ea35de: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea35e0: je 0xea35eb */
  if (zf) goto L_ea35eb;
L_ea35e2: /* ea35e2: movaps xmm3, xmmword ptr [0xebef30] */
  guest_unsupported(0xea35e2); /* movaps xmm3, xmmword ptr [0xebef30] */
/* ea35e9: jmp 0xea3601 */
  goto L_ea3601;
L_ea35eb: /* ea35eb: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea35ed: movss xmm3, dword ptr [0xebf0c4] */
  guest_unsupported(0xea35ed); /* movss xmm3, dword ptr [0xebf0c4] */
/* ea35f5: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea35fa: movaps xmmword ptr [0xebef30], xmm3 */
  guest_unsupported(0xea35fa); /* movaps xmmword ptr [0xebef30], xmm3 */
L_ea3601: /* ea3601: movaps xmm5, xmm0 */
  guest_unsupported(0xea3601); /* movaps xmm5, xmm0 */
/* ea3604: rsqrtss xmm5, xmm5 */
  guest_unsupported(0xea3604); /* rsqrtss xmm5, xmm5 */
/* ea3608: mulss xmm0, xmm5 */
  guest_unsupported(0xea3608); /* mulss xmm0, xmm5 */
/* ea360c: mulss xmm4, xmm5 */
  guest_unsupported(0xea360c); /* mulss xmm4, xmm5 */
/* ea3610: mulss xmm0, xmm5 */
  guest_unsupported(0xea3610); /* mulss xmm0, xmm5 */
/* ea3614: subss xmm3, xmm0 */
  guest_unsupported(0xea3614); /* subss xmm3, xmm0 */
/* ea3618: mulss xmm4, xmm3 */
  guest_unsupported(0xea3618); /* mulss xmm4, xmm3 */
/* ea361c: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea361c); /* shufps xmm4, xmm4, 0 */
/* ea3620: movaps xmm0, xmm2 */
  guest_unsupported(0xea3620); /* movaps xmm0, xmm2 */
/* ea3623: mulps xmm0, xmm4 */
  guest_unsupported(0xea3623); /* mulps xmm0, xmm4 */
L_ea3626: /* ea3626: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3629: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea362c: movups xmm2, xmmword ptr [edx] */
  guest_unsupported(0xea362c); /* movups xmm2, xmmword ptr [edx] */
/* ea362f: movaps xmm3, xmmword ptr [0xebbaf0] */
  guest_unsupported(0xea362f); /* movaps xmm3, xmmword ptr [0xebbaf0] */
/* ea3636: movaps xmm4, xmmword ptr [0xebbae0] */
  guest_unsupported(0xea3636); /* movaps xmm4, xmmword ptr [0xebbae0] */
/* ea363d: xorps xmm4, xmm0 */
  guest_unsupported(0xea363d); /* xorps xmm4, xmm0 */
/* ea3640: mulps xmm0, xmm2 */
  guest_unsupported(0xea3640); /* mulps xmm0, xmm2 */
/* ea3643: movaps xmm5, xmmword ptr [0xebbb00] */
  guest_unsupported(0xea3643); /* movaps xmm5, xmmword ptr [0xebbb00] */
/* ea364a: movhlps xmm1, xmm0 */
  guest_unsupported(0xea364a); /* movhlps xmm1, xmm0 */
/* ea364d: movaps xmm6, xmmword ptr [0xebbb10] */
  guest_unsupported(0xea364d); /* movaps xmm6, xmmword ptr [0xebbb10] */
/* ea3654: addps xmm0, xmm1 */
  guest_unsupported(0xea3654); /* addps xmm0, xmm1 */
/* ea3657: movaps xmm1, xmm0 */
  guest_unsupported(0xea3657); /* movaps xmm1, xmm0 */
/* ea365a: shufps xmm1, xmm1, 1 */
  guest_unsupported(0xea365a); /* shufps xmm1, xmm1, 1 */
/* ea365e: addss xmm0, xmm1 */
  guest_unsupported(0xea365e); /* addss xmm0, xmm1 */
/* ea3662: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea3662); /* shufps xmm0, xmm0, 0 */
/* ea3666: andps xmm3, xmm0 */
  guest_unsupported(0xea3666); /* andps xmm3, xmm0 */
/* ea3669: andps xmm5, xmm0 */
  guest_unsupported(0xea3669); /* andps xmm5, xmm0 */
/* ea366c: andps xmm6, xmm0 */
  guest_unsupported(0xea366c); /* andps xmm6, xmm0 */
/* ea366f: movaps xmm1, xmm4 */
  guest_unsupported(0xea366f); /* movaps xmm1, xmm4 */
/* ea3672: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea3672); /* shufps xmm4, xmm4, 0x55 */
/* ea3676: mulps xmm4, xmm2 */
  guest_unsupported(0xea3676); /* mulps xmm4, xmm2 */
/* ea3679: movaps xmm7, xmm0 */
  guest_unsupported(0xea3679); /* movaps xmm7, xmm0 */
/* ea367c: movaps xmm0, xmm4 */
  guest_unsupported(0xea367c); /* movaps xmm0, xmm4 */
/* ea367f: addps xmm0, xmm3 */
  guest_unsupported(0xea367f); /* addps xmm0, xmm3 */
/* ea3682: movaps xmm3, xmm1 */
  guest_unsupported(0xea3682); /* movaps xmm3, xmm1 */
/* ea3685: shufps xmm3, xmm3, 0xaa */
  guest_unsupported(0xea3685); /* shufps xmm3, xmm3, 0xaa */
/* ea3689: mulps xmm3, xmm2 */
  guest_unsupported(0xea3689); /* mulps xmm3, xmm2 */
/* ea368c: movaps xmm4, xmm1 */
  guest_unsupported(0xea368c); /* movaps xmm4, xmm1 */
/* ea368f: movaps xmm1, xmm3 */
  guest_unsupported(0xea368f); /* movaps xmm1, xmm3 */
/* ea3692: addps xmm1, xmm5 */
  guest_unsupported(0xea3692); /* addps xmm1, xmm5 */
/* ea3695: movaps xmm3, xmm4 */
  guest_unsupported(0xea3695); /* movaps xmm3, xmm4 */
/* ea3698: shufps xmm4, xmm4, 0xff */
  guest_unsupported(0xea3698); /* shufps xmm4, xmm4, 0xff */
/* ea369c: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea369c); /* shufps xmm3, xmm3, 0 */
/* ea36a0: mulps xmm4, xmm2 */
  guest_unsupported(0xea36a0); /* mulps xmm4, xmm2 */
/* ea36a3: mulps xmm3, xmm2 */
  guest_unsupported(0xea36a3); /* mulps xmm3, xmm2 */
/* ea36a6: movaps xmm2, xmm4 */
  guest_unsupported(0xea36a6); /* movaps xmm2, xmm4 */
/* ea36a9: addps xmm2, xmm6 */
  guest_unsupported(0xea36a9); /* addps xmm2, xmm6 */
/* ea36ac: addss xmm3, xmm7 */
  guest_unsupported(0xea36ac); /* addss xmm3, xmm7 */
/* ea36b0: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea36b2: jne 0xea36c5 */
  if (!zf) goto L_ea36c5;
L_ea36b4: /* ea36b4: movaps xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea36b4); /* movaps xmmword ptr [eax], xmm3 */
/* ea36b7: movaps xmmword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea36b7); /* movaps xmmword ptr [eax + 0x10], xmm0 */
/* ea36bb: movaps xmmword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea36bb); /* movaps xmmword ptr [eax + 0x20], xmm1 */
/* ea36bf: movaps xmmword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea36bf); /* movaps xmmword ptr [eax + 0x30], xmm2 */
/* ea36c3: jmp 0xea36e4 */
  goto L_ea36e4;
L_ea36c5: /* ea36c5: movlps qword ptr [eax], xmm3 */
  guest_unsupported(0xea36c5); /* movlps qword ptr [eax], xmm3 */
/* ea36c8: movhps qword ptr [eax + 8], xmm3 */
  guest_unsupported(0xea36c8); /* movhps qword ptr [eax + 8], xmm3 */
/* ea36cc: movlps qword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea36cc); /* movlps qword ptr [eax + 0x10], xmm0 */
/* ea36d0: movhps qword ptr [eax + 0x18], xmm0 */
  guest_unsupported(0xea36d0); /* movhps qword ptr [eax + 0x18], xmm0 */
/* ea36d4: movlps qword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea36d4); /* movlps qword ptr [eax + 0x20], xmm1 */
/* ea36d8: movhps qword ptr [eax + 0x28], xmm1 */
  guest_unsupported(0xea36d8); /* movhps qword ptr [eax + 0x28], xmm1 */
/* ea36dc: movlps qword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea36dc); /* movlps qword ptr [eax + 0x30], xmm2 */
/* ea36e0: movhps qword ptr [eax + 0x38], xmm2 */
  guest_unsupported(0xea36e0); /* movhps qword ptr [eax + 0x38], xmm2 */
L_ea36e4: /* ea36e4: mov esp, ebx */
  esp = ebx;
/* ea36e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea36e7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea36ea(void) {
  LOAD_REGS();
L_ea36ea: /* ea36ea: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea36f0(); return;
}

void f_ea36f0(void) {
  LOAD_REGS();
L_ea36f0: /* ea36f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea36f1: mov ebx, esp */
  ebx = esp;
/* ea36f3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea36f6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea36f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea36fc: jmp 0xea3701 */
  goto L_ea3701;
L_ea3701: /* ea3701: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3704: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3707: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea370a: movhps xmm1, qword ptr [edx + 8] */
  guest_unsupported(0xea370a); /* movhps xmm1, qword ptr [edx + 8] */
/* ea370e: movlps xmm1, qword ptr [edx] */
  guest_unsupported(0xea370e); /* movlps xmm1, qword ptr [edx] */
/* ea3711: movaps xmm0, xmmword ptr [0xebbba0] */
  guest_unsupported(0xea3711); /* movaps xmm0, xmmword ptr [0xebbba0] */
/* ea3718: andps xmm0, xmm1 */
  guest_unsupported(0xea3718); /* andps xmm0, xmm1 */
/* ea371b: mulps xmm0, xmm0 */
  guest_unsupported(0xea371b); /* mulps xmm0, xmm0 */
/* ea371e: movss xmm2, dword ptr [0xebbb80] */
  guest_unsupported(0xea371e); /* movss xmm2, dword ptr [0xebbb80] */
/* ea3726: movss xmm3, dword ptr [0xebbb90] */
  guest_unsupported(0xea3726); /* movss xmm3, dword ptr [0xebbb90] */
/* ea372e: movaps xmm4, xmm0 */
  guest_unsupported(0xea372e); /* movaps xmm4, xmm0 */
/* ea3731: movhlps xmm0, xmm0 */
  guest_unsupported(0xea3731); /* movhlps xmm0, xmm0 */
/* ea3734: addps xmm4, xmm0 */
  guest_unsupported(0xea3734); /* addps xmm4, xmm0 */
/* ea3737: movaps xmm0, xmm4 */
  guest_unsupported(0xea3737); /* movaps xmm0, xmm4 */
/* ea373a: shufps xmm4, xmm4, 1 */
  guest_unsupported(0xea373a); /* shufps xmm4, xmm4, 1 */
/* ea373e: addss xmm0, xmm4 */
  guest_unsupported(0xea373e); /* addss xmm0, xmm4 */
/* ea3742: movaps xmm4, xmmword ptr [0xebbb70] */
  guest_unsupported(0xea3742); /* movaps xmm4, xmmword ptr [0xebbb70] */
/* ea3749: movaps xmm5, xmm0 */
  guest_unsupported(0xea3749); /* movaps xmm5, xmm0 */
/* ea374c: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea374c); /* rsqrtss xmm0, xmm0 */
/* ea3750: mulss xmm5, xmm0 */
  guest_unsupported(0xea3750); /* mulss xmm5, xmm0 */
/* ea3754: mulss xmm5, xmm0 */
  guest_unsupported(0xea3754); /* mulss xmm5, xmm0 */
/* ea3758: subss xmm2, xmm5 */
  guest_unsupported(0xea3758); /* subss xmm2, xmm5 */
/* ea375c: mulss xmm3, xmm0 */
  guest_unsupported(0xea375c); /* mulss xmm3, xmm0 */
/* ea3760: mulss xmm3, xmm2 */
  guest_unsupported(0xea3760); /* mulss xmm3, xmm2 */
/* ea3764: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea3764); /* shufps xmm3, xmm3, 0 */
/* ea3768: mulps xmm1, xmm3 */
  guest_unsupported(0xea3768); /* mulps xmm1, xmm3 */
/* ea376b: mulps xmm4, xmm1 */
  guest_unsupported(0xea376b); /* mulps xmm4, xmm1 */
/* ea376e: movaps xmm0, xmm1 */
  guest_unsupported(0xea376e); /* movaps xmm0, xmm1 */
/* ea3771: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3771); /* shufps xmm1, xmm1, 0 */
/* ea3775: mulps xmm1, xmm4 */
  guest_unsupported(0xea3775); /* mulps xmm1, xmm4 */
/* ea3778: addps xmm1, xmmword ptr [0xebbb60] */
  guest_unsupported(0xea3778); /* addps xmm1, xmmword ptr [0xebbb60] */
/* ea377f: movaps xmm2, xmm0 */
  guest_unsupported(0xea377f); /* movaps xmm2, xmm0 */
/* ea3782: shufps xmm0, xmm0, 0xff */
  guest_unsupported(0xea3782); /* shufps xmm0, xmm0, 0xff */
/* ea3786: mulps xmm0, xmm4 */
  guest_unsupported(0xea3786); /* mulps xmm0, xmm4 */
/* ea3789: addps xmm0, xmmword ptr [0xebbb30] */
  guest_unsupported(0xea3789); /* addps xmm0, xmmword ptr [0xebbb30] */
/* ea3790: movaps xmm3, xmm2 */
  guest_unsupported(0xea3790); /* movaps xmm3, xmm2 */
/* ea3793: shufps xmm2, xmm2, 0xaa */
  guest_unsupported(0xea3793); /* shufps xmm2, xmm2, 0xaa */
/* ea3797: mulps xmm2, xmm4 */
  guest_unsupported(0xea3797); /* mulps xmm2, xmm4 */
/* ea379a: addps xmm2, xmmword ptr [0xebbb40] */
  guest_unsupported(0xea379a); /* addps xmm2, xmmword ptr [0xebbb40] */
/* ea37a1: shufps xmm3, xmm3, 0x55 */
  guest_unsupported(0xea37a1); /* shufps xmm3, xmm3, 0x55 */
/* ea37a5: mulps xmm4, xmm3 */
  guest_unsupported(0xea37a5); /* mulps xmm4, xmm3 */
/* ea37a8: addps xmm4, xmmword ptr [0xebbb50] */
  guest_unsupported(0xea37a8); /* addps xmm4, xmmword ptr [0xebbb50] */
/* ea37af: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea37af); /* movups xmmword ptr [eax], xmm1 */
/* ea37b2: movups xmmword ptr [eax + 0x10], xmm4 */
  guest_unsupported(0xea37b2); /* movups xmmword ptr [eax + 0x10], xmm4 */
/* ea37b6: movups xmmword ptr [eax + 0x20], xmm2 */
  guest_unsupported(0xea37b6); /* movups xmmword ptr [eax + 0x20], xmm2 */
/* ea37ba: movups xmmword ptr [eax + 0x30], xmm0 */
  guest_unsupported(0xea37ba); /* movups xmmword ptr [eax + 0x30], xmm0 */
/* ea37be: mov esp, ebx */
  esp = ebx;
/* ea37c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea37c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea36fe(void) {
  LOAD_REGS();
L_ea36fe: /* ea36fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea36ff: mov ebx, esp */
  ebx = esp;
/* ea3701: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3704: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3707: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea370a: movhps xmm1, qword ptr [edx + 8] */
  guest_unsupported(0xea370a); /* movhps xmm1, qword ptr [edx + 8] */
/* ea370e: movlps xmm1, qword ptr [edx] */
  guest_unsupported(0xea370e); /* movlps xmm1, qword ptr [edx] */
/* ea3711: movaps xmm0, xmmword ptr [0xebbba0] */
  guest_unsupported(0xea3711); /* movaps xmm0, xmmword ptr [0xebbba0] */
/* ea3718: andps xmm0, xmm1 */
  guest_unsupported(0xea3718); /* andps xmm0, xmm1 */
/* ea371b: mulps xmm0, xmm0 */
  guest_unsupported(0xea371b); /* mulps xmm0, xmm0 */
/* ea371e: movss xmm2, dword ptr [0xebbb80] */
  guest_unsupported(0xea371e); /* movss xmm2, dword ptr [0xebbb80] */
/* ea3726: movss xmm3, dword ptr [0xebbb90] */
  guest_unsupported(0xea3726); /* movss xmm3, dword ptr [0xebbb90] */
/* ea372e: movaps xmm4, xmm0 */
  guest_unsupported(0xea372e); /* movaps xmm4, xmm0 */
/* ea3731: movhlps xmm0, xmm0 */
  guest_unsupported(0xea3731); /* movhlps xmm0, xmm0 */
/* ea3734: addps xmm4, xmm0 */
  guest_unsupported(0xea3734); /* addps xmm4, xmm0 */
/* ea3737: movaps xmm0, xmm4 */
  guest_unsupported(0xea3737); /* movaps xmm0, xmm4 */
/* ea373a: shufps xmm4, xmm4, 1 */
  guest_unsupported(0xea373a); /* shufps xmm4, xmm4, 1 */
/* ea373e: addss xmm0, xmm4 */
  guest_unsupported(0xea373e); /* addss xmm0, xmm4 */
/* ea3742: movaps xmm4, xmmword ptr [0xebbb70] */
  guest_unsupported(0xea3742); /* movaps xmm4, xmmword ptr [0xebbb70] */
/* ea3749: movaps xmm5, xmm0 */
  guest_unsupported(0xea3749); /* movaps xmm5, xmm0 */
/* ea374c: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea374c); /* rsqrtss xmm0, xmm0 */
/* ea3750: mulss xmm5, xmm0 */
  guest_unsupported(0xea3750); /* mulss xmm5, xmm0 */
/* ea3754: mulss xmm5, xmm0 */
  guest_unsupported(0xea3754); /* mulss xmm5, xmm0 */
/* ea3758: subss xmm2, xmm5 */
  guest_unsupported(0xea3758); /* subss xmm2, xmm5 */
/* ea375c: mulss xmm3, xmm0 */
  guest_unsupported(0xea375c); /* mulss xmm3, xmm0 */
/* ea3760: mulss xmm3, xmm2 */
  guest_unsupported(0xea3760); /* mulss xmm3, xmm2 */
/* ea3764: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea3764); /* shufps xmm3, xmm3, 0 */
/* ea3768: mulps xmm1, xmm3 */
  guest_unsupported(0xea3768); /* mulps xmm1, xmm3 */
/* ea376b: mulps xmm4, xmm1 */
  guest_unsupported(0xea376b); /* mulps xmm4, xmm1 */
/* ea376e: movaps xmm0, xmm1 */
  guest_unsupported(0xea376e); /* movaps xmm0, xmm1 */
/* ea3771: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3771); /* shufps xmm1, xmm1, 0 */
/* ea3775: mulps xmm1, xmm4 */
  guest_unsupported(0xea3775); /* mulps xmm1, xmm4 */
/* ea3778: addps xmm1, xmmword ptr [0xebbb60] */
  guest_unsupported(0xea3778); /* addps xmm1, xmmword ptr [0xebbb60] */
/* ea377f: movaps xmm2, xmm0 */
  guest_unsupported(0xea377f); /* movaps xmm2, xmm0 */
/* ea3782: shufps xmm0, xmm0, 0xff */
  guest_unsupported(0xea3782); /* shufps xmm0, xmm0, 0xff */
/* ea3786: mulps xmm0, xmm4 */
  guest_unsupported(0xea3786); /* mulps xmm0, xmm4 */
/* ea3789: addps xmm0, xmmword ptr [0xebbb30] */
  guest_unsupported(0xea3789); /* addps xmm0, xmmword ptr [0xebbb30] */
/* ea3790: movaps xmm3, xmm2 */
  guest_unsupported(0xea3790); /* movaps xmm3, xmm2 */
/* ea3793: shufps xmm2, xmm2, 0xaa */
  guest_unsupported(0xea3793); /* shufps xmm2, xmm2, 0xaa */
/* ea3797: mulps xmm2, xmm4 */
  guest_unsupported(0xea3797); /* mulps xmm2, xmm4 */
/* ea379a: addps xmm2, xmmword ptr [0xebbb40] */
  guest_unsupported(0xea379a); /* addps xmm2, xmmword ptr [0xebbb40] */
/* ea37a1: shufps xmm3, xmm3, 0x55 */
  guest_unsupported(0xea37a1); /* shufps xmm3, xmm3, 0x55 */
/* ea37a5: mulps xmm4, xmm3 */
  guest_unsupported(0xea37a5); /* mulps xmm4, xmm3 */
/* ea37a8: addps xmm4, xmmword ptr [0xebbb50] */
  guest_unsupported(0xea37a8); /* addps xmm4, xmmword ptr [0xebbb50] */
/* ea37af: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea37af); /* movups xmmword ptr [eax], xmm1 */
/* ea37b2: movups xmmword ptr [eax + 0x10], xmm4 */
  guest_unsupported(0xea37b2); /* movups xmmword ptr [eax + 0x10], xmm4 */
/* ea37b6: movups xmmword ptr [eax + 0x20], xmm2 */
  guest_unsupported(0xea37b6); /* movups xmmword ptr [eax + 0x20], xmm2 */
/* ea37ba: movups xmmword ptr [eax + 0x30], xmm0 */
  guest_unsupported(0xea37ba); /* movups xmmword ptr [eax + 0x30], xmm0 */
/* ea37be: mov esp, ebx */
  esp = ebx;
/* ea37c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea37c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea37c4(void) {
  LOAD_REGS();
L_ea37c4: /* ea37c4: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea37ca: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea37d0(); return;
}

void f_ea37d0(void) {
  LOAD_REGS();
L_ea37d0: /* ea37d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea37d1: mov ebp, esp */
  ebp = esp;
/* ea37d3: sub esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea37d6: mov dword ptr [esp], ebx */
  W32((uint32_t)(esp), ebx);
/* ea37d9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ea37dc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* ea37df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ea37e2: movlps xmm1, qword ptr [eax] */
  guest_unsupported(0xea37e2); /* movlps xmm1, qword ptr [eax] */
/* ea37e5: movhps xmm1, qword ptr [eax + 8] */
  guest_unsupported(0xea37e5); /* movhps xmm1, qword ptr [eax + 8] */
/* ea37e9: movlps xmm0, qword ptr [ebx] */
  guest_unsupported(0xea37e9); /* movlps xmm0, qword ptr [ebx] */
/* ea37ec: movhps xmm0, qword ptr [ebx + 8] */
  guest_unsupported(0xea37ec); /* movhps xmm0, qword ptr [ebx + 8] */
/* ea37f0: movaps xmm2, xmm1 */
  guest_unsupported(0xea37f0); /* movaps xmm2, xmm1 */
/* ea37f3: shufps xmm1, xmm1, 0xff */
  guest_unsupported(0xea37f3); /* shufps xmm1, xmm1, 0xff */
/* ea37f7: mulps xmm1, xmm0 */
  guest_unsupported(0xea37f7); /* mulps xmm1, xmm0 */
/* ea37fa: movaps xmm3, xmm2 */
  guest_unsupported(0xea37fa); /* movaps xmm3, xmm2 */
/* ea37fd: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea37fd); /* shufps xmm2, xmm2, 0 */
/* ea3801: shufps xmm0, xmm0, 0x1b */
  guest_unsupported(0xea3801); /* shufps xmm0, xmm0, 0x1b */
/* ea3805: xorps xmm2, xmmword ptr [0xebf100] */
  guest_unsupported(0xea3805); /* xorps xmm2, xmmword ptr [0xebf100] */
/* ea380c: mulps xmm2, xmm0 */
  guest_unsupported(0xea380c); /* mulps xmm2, xmm0 */
/* ea380f: addps xmm1, xmm2 */
  guest_unsupported(0xea380f); /* addps xmm1, xmm2 */
/* ea3812: movaps xmm2, xmm3 */
  guest_unsupported(0xea3812); /* movaps xmm2, xmm3 */
/* ea3815: shufps xmm3, xmm3, 0x55 */
  guest_unsupported(0xea3815); /* shufps xmm3, xmm3, 0x55 */
/* ea3819: shufps xmm0, xmm0, 0xb1 */
  guest_unsupported(0xea3819); /* shufps xmm0, xmm0, 0xb1 */
/* ea381d: xorps xmm3, xmmword ptr [0xebf0f0] */
  guest_unsupported(0xea381d); /* xorps xmm3, xmmword ptr [0xebf0f0] */
/* ea3824: mulps xmm3, xmm0 */
  guest_unsupported(0xea3824); /* mulps xmm3, xmm0 */
/* ea3827: addps xmm1, xmm3 */
  guest_unsupported(0xea3827); /* addps xmm1, xmm3 */
/* ea382a: shufps xmm2, xmm2, 0xaa */
  guest_unsupported(0xea382a); /* shufps xmm2, xmm2, 0xaa */
/* ea382e: shufps xmm0, xmm0, 0x1b */
  guest_unsupported(0xea382e); /* shufps xmm0, xmm0, 0x1b */
/* ea3832: xorps xmm2, xmmword ptr [0xebf0e0] */
  guest_unsupported(0xea3832); /* xorps xmm2, xmmword ptr [0xebf0e0] */
/* ea3839: mulps xmm2, xmm0 */
  guest_unsupported(0xea3839); /* mulps xmm2, xmm0 */
/* ea383c: addps xmm1, xmm2 */
  guest_unsupported(0xea383c); /* addps xmm1, xmm2 */
/* ea383f: movlps qword ptr [edx], xmm1 */
  guest_unsupported(0xea383f); /* movlps qword ptr [edx], xmm1 */
/* ea3842: movhps qword ptr [edx + 8], xmm1 */
  guest_unsupported(0xea3842); /* movhps qword ptr [edx + 8], xmm1 */
/* ea3846: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea3849: mov ebx, dword ptr [esp] */
  ebx = R32((uint32_t)(esp));
/* ea384c: mov esp, ebp */
  esp = ebp;
/* ea384e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea384f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea3852(void) {
  LOAD_REGS();
L_ea3852: /* ea3852: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea3859: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea3860(); return;
}

void f_ea3860(void) {
  LOAD_REGS();
L_ea3860: /* ea3860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3861: mov ebp, esp */
  ebp = esp;
/* ea3863: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea3866: movss xmm0, dword ptr [eax] */
  guest_unsupported(0xea3866); /* movss xmm0, dword ptr [eax] */
/* ea386a: movss xmm1, dword ptr [eax + 4] */
  guest_unsupported(0xea386a); /* movss xmm1, dword ptr [eax + 4] */
/* ea386f: movss xmm2, dword ptr [eax + 8] */
  guest_unsupported(0xea386f); /* movss xmm2, dword ptr [eax + 8] */
/* ea3874: movss xmm3, dword ptr [eax + 0xc] */
  guest_unsupported(0xea3874); /* movss xmm3, dword ptr [eax + 0xc] */
/* ea3879: movss xmm4, xmm0 */
  guest_unsupported(0xea3879); /* movss xmm4, xmm0 */
/* ea387d: movss xmm5, xmm1 */
  guest_unsupported(0xea387d); /* movss xmm5, xmm1 */
/* ea3881: movss xmm6, xmm2 */
  guest_unsupported(0xea3881); /* movss xmm6, xmm2 */
/* ea3885: movss xmm7, xmm3 */
  guest_unsupported(0xea3885); /* movss xmm7, xmm3 */
/* ea3889: mulss xmm4, xmm0 */
  guest_unsupported(0xea3889); /* mulss xmm4, xmm0 */
/* ea388d: mulss xmm5, xmm1 */
  guest_unsupported(0xea388d); /* mulss xmm5, xmm1 */
/* ea3891: mulss xmm6, xmm2 */
  guest_unsupported(0xea3891); /* mulss xmm6, xmm2 */
/* ea3895: addss xmm4, xmm5 */
  guest_unsupported(0xea3895); /* addss xmm4, xmm5 */
/* ea3899: mulss xmm7, xmm3 */
  guest_unsupported(0xea3899); /* mulss xmm7, xmm3 */
/* ea389d: addss xmm6, xmm7 */
  guest_unsupported(0xea389d); /* addss xmm6, xmm7 */
/* ea38a1: addss xmm4, xmm6 */
  guest_unsupported(0xea38a1); /* addss xmm4, xmm6 */
/* ea38a5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea38a8: rsqrtss xmm5, xmm4 */
  guest_unsupported(0xea38a8); /* rsqrtss xmm5, xmm4 */
/* ea38ac: movss xmm6, xmm5 */
  guest_unsupported(0xea38ac); /* movss xmm6, xmm5 */
/* ea38b0: mulss xmm5, xmm5 */
  guest_unsupported(0xea38b0); /* mulss xmm5, xmm5 */
/* ea38b4: mulss xmm4, xmm5 */
  guest_unsupported(0xea38b4); /* mulss xmm4, xmm5 */
/* ea38b8: movss xmm5, dword ptr [0xebbbd0] */
  guest_unsupported(0xea38b8); /* movss xmm5, dword ptr [0xebbbd0] */
/* ea38c0: subss xmm5, xmm4 */
  guest_unsupported(0xea38c0); /* subss xmm5, xmm4 */
/* ea38c4: mulss xmm5, dword ptr [0xebbbc0] */
  guest_unsupported(0xea38c4); /* mulss xmm5, dword ptr [0xebbbc0] */
/* ea38cc: mulss xmm5, xmm6 */
  guest_unsupported(0xea38cc); /* mulss xmm5, xmm6 */
/* ea38d0: mulss xmm0, xmm5 */
  guest_unsupported(0xea38d0); /* mulss xmm0, xmm5 */
/* ea38d4: mulss xmm1, xmm5 */
  guest_unsupported(0xea38d4); /* mulss xmm1, xmm5 */
/* ea38d8: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea38d8); /* movss dword ptr [eax], xmm0 */
/* ea38dc: mulss xmm2, xmm5 */
  guest_unsupported(0xea38dc); /* mulss xmm2, xmm5 */
/* ea38e0: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea38e0); /* movss dword ptr [eax + 4], xmm1 */
/* ea38e5: mulss xmm3, xmm5 */
  guest_unsupported(0xea38e5); /* mulss xmm3, xmm5 */
/* ea38e9: movss dword ptr [eax + 8], xmm2 */
  guest_unsupported(0xea38e9); /* movss dword ptr [eax + 8], xmm2 */
/* ea38ee: movss dword ptr [eax + 0xc], xmm3 */
  guest_unsupported(0xea38ee); /* movss dword ptr [eax + 0xc], xmm3 */
/* ea38f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea38f6: mov esp, ebp */
  esp = ebp;
/* ea38f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea38f9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea38fc(void) {
  LOAD_REGS();
L_ea38fc: /* ea38fc: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea3900(); return;
}

void f_ea3900(void) {
  LOAD_REGS();
L_ea3900: /* ea3900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3901: mov ebx, esp */
  ebx = esp;
/* ea3903: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3906: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3909: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea390c: jmp 0xea3911 */
  goto L_ea3911;
L_ea3911: /* ea3911: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3914: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3917: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea391a: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea391a); /* movlps xmm0, qword ptr [edx] */
/* ea391d: movhps xmm0, qword ptr [edx + 8] */
  guest_unsupported(0xea391d); /* movhps xmm0, qword ptr [edx + 8] */
/* ea3921: movaps xmm1, xmm0 */
  guest_unsupported(0xea3921); /* movaps xmm1, xmm0 */
/* ea3924: mulps xmm0, xmm0 */
  guest_unsupported(0xea3924); /* mulps xmm0, xmm0 */
/* ea3927: movaps xmm2, xmm0 */
  guest_unsupported(0xea3927); /* movaps xmm2, xmm0 */
/* ea392a: movhlps xmm0, xmm0 */
  guest_unsupported(0xea392a); /* movhlps xmm0, xmm0 */
/* ea392d: addps xmm2, xmm0 */
  guest_unsupported(0xea392d); /* addps xmm2, xmm0 */
/* ea3930: mulps xmm1, xmmword ptr [0xebbbe0] */
  guest_unsupported(0xea3930); /* mulps xmm1, xmmword ptr [0xebbbe0] */
/* ea3937: movaps xmm0, xmm2 */
  guest_unsupported(0xea3937); /* movaps xmm0, xmm2 */
/* ea393a: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea393a); /* shufps xmm2, xmm2, 0x55 */
/* ea393e: addss xmm0, xmm2 */
  guest_unsupported(0xea393e); /* addss xmm0, xmm2 */
/* ea3942: movaps xmm2, xmm0 */
  guest_unsupported(0xea3942); /* movaps xmm2, xmm0 */
/* ea3945: rcpss xmm0, xmm0 */
  guest_unsupported(0xea3945); /* rcpss xmm0, xmm0 */
/* ea3949: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea394c: movaps xmm3, xmm0 */
  guest_unsupported(0xea394c); /* movaps xmm3, xmm0 */
/* ea394f: mulss xmm0, xmm2 */
  guest_unsupported(0xea394f); /* mulss xmm0, xmm2 */
/* ea3953: mulss xmm0, xmm3 */
  guest_unsupported(0xea3953); /* mulss xmm0, xmm3 */
/* ea3957: addss xmm3, xmm3 */
  guest_unsupported(0xea3957); /* addss xmm3, xmm3 */
/* ea395b: subss xmm3, xmm0 */
  guest_unsupported(0xea395b); /* subss xmm3, xmm0 */
/* ea395f: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea395f); /* shufps xmm3, xmm3, 0 */
/* ea3963: mulps xmm1, xmm3 */
  guest_unsupported(0xea3963); /* mulps xmm1, xmm3 */
/* ea3966: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea3966); /* movups xmmword ptr [eax], xmm1 */
/* ea3969: mov esp, ebx */
  esp = ebx;
/* ea396b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea396c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea390e(void) {
  LOAD_REGS();
L_ea390e: /* ea390e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea390f: mov ebx, esp */
  ebx = esp;
/* ea3911: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3914: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3917: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea391a: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea391a); /* movlps xmm0, qword ptr [edx] */
/* ea391d: movhps xmm0, qword ptr [edx + 8] */
  guest_unsupported(0xea391d); /* movhps xmm0, qword ptr [edx + 8] */
/* ea3921: movaps xmm1, xmm0 */
  guest_unsupported(0xea3921); /* movaps xmm1, xmm0 */
/* ea3924: mulps xmm0, xmm0 */
  guest_unsupported(0xea3924); /* mulps xmm0, xmm0 */
/* ea3927: movaps xmm2, xmm0 */
  guest_unsupported(0xea3927); /* movaps xmm2, xmm0 */
/* ea392a: movhlps xmm0, xmm0 */
  guest_unsupported(0xea392a); /* movhlps xmm0, xmm0 */
/* ea392d: addps xmm2, xmm0 */
  guest_unsupported(0xea392d); /* addps xmm2, xmm0 */
/* ea3930: mulps xmm1, xmmword ptr [0xebbbe0] */
  guest_unsupported(0xea3930); /* mulps xmm1, xmmword ptr [0xebbbe0] */
/* ea3937: movaps xmm0, xmm2 */
  guest_unsupported(0xea3937); /* movaps xmm0, xmm2 */
/* ea393a: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea393a); /* shufps xmm2, xmm2, 0x55 */
/* ea393e: addss xmm0, xmm2 */
  guest_unsupported(0xea393e); /* addss xmm0, xmm2 */
/* ea3942: movaps xmm2, xmm0 */
  guest_unsupported(0xea3942); /* movaps xmm2, xmm0 */
/* ea3945: rcpss xmm0, xmm0 */
  guest_unsupported(0xea3945); /* rcpss xmm0, xmm0 */
/* ea3949: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea394c: movaps xmm3, xmm0 */
  guest_unsupported(0xea394c); /* movaps xmm3, xmm0 */
/* ea394f: mulss xmm0, xmm2 */
  guest_unsupported(0xea394f); /* mulss xmm0, xmm2 */
/* ea3953: mulss xmm0, xmm3 */
  guest_unsupported(0xea3953); /* mulss xmm0, xmm3 */
/* ea3957: addss xmm3, xmm3 */
  guest_unsupported(0xea3957); /* addss xmm3, xmm3 */
/* ea395b: subss xmm3, xmm0 */
  guest_unsupported(0xea395b); /* subss xmm3, xmm0 */
/* ea395f: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea395f); /* shufps xmm3, xmm3, 0 */
/* ea3963: mulps xmm1, xmm3 */
  guest_unsupported(0xea3963); /* mulps xmm1, xmm3 */
/* ea3966: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea3966); /* movups xmmword ptr [eax], xmm1 */
/* ea3969: mov esp, ebx */
  esp = ebx;
/* ea396b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea396c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea3970(void) {
  LOAD_REGS();
L_ea3970: /* ea3970: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea3971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea3972: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3974: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ea3978: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ea397c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  esp = r;
  }
/* ea397f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ea3981: fadd dword ptr [edx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x14u)));
/* ea3984: fadd dword ptr [edx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x28u)));
/* ea3987: fld dword ptr [0xebf11c] */
  { double v = F32((uint32_t)(0xebf11cu)); FPUSH(v); }
/* ea398d: fcompi st(1) */
  guest_unsupported(0xea398d); /* fcompi st(1) */
/* ea398f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* ea3991: mov esi, dword ptr [edx + 0x14] */
  esi = R32((uint32_t)(edx + 0x14u));
/* ea3994: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* ea3997: mov ebp, dword ptr [edx + 0x28] */
  ebp = R32((uint32_t)(edx + 0x28u));
/* ea399a: jb 0xea3a3d */
  if (cf) goto L_ea3a3d;
L_ea39a0: /* ea39a0: fstp st(1) */
  STI(1) = ST0; FPOP();
/* ea39a2: mov dword ptr [esp], edi */
  W32((uint32_t)(esp), edi);
/* ea39a5: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea39a9: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ea39ac: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ea39b0: mov ecx, 1 */
  ecx = 0x1u;
/* ea39b5: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  cf = 0;
/* ea39b7: fcompi st(1) */
  guest_unsupported(0xea39b7); /* fcompi st(1) */
/* ea39b9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ea39bb: cmova ebx, ecx */
  if ((!cf && !zf)) { ebx = ecx; }
/* ea39be: mov dword ptr [esp + 8], ebp */
  W32((uint32_t)(esp + 0x8u), ebp);
/* ea39c2: mov ecx, 2 */
  ecx = 0x2u;
/* ea39c7: fld dword ptr [esp + ebx*4] */
  { double v = F32((uint32_t)(esp + ebx*4)); FPUSH(v); }
/* ea39ca: fcompi st(1) */
  guest_unsupported(0xea39ca); /* fcompi st(1) */
/* ea39cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ea39ce: cmovae ecx, ebx */
  if (!cf) { ecx = ebx; }
/* ea39d1: fld dword ptr [0xebf130] */
  { double v = F32((uint32_t)(0xebf130u)); FPUSH(v); }
/* ea39d7: fadd dword ptr [esp + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esp + ecx*4)));
/* ea39da: mov ebx, dword ptr [ecx*4 + 0xebf110] */
  ebx = R32((uint32_t)(ecx*4 + 0xebf110u));
/* ea39e1: fsub dword ptr [esp + ebx*4] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebx*4)));
/* ea39e4: mov ebp, dword ptr [ebx*4 + 0xebf110] */
  ebp = R32((uint32_t)(ebx*4 + 0xebf110u));
/* ea39eb: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* ea39ee: fsub dword ptr [esp + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4)));
/* ea39f1: fsqrt  */
  ST0 = sqrt(ST0);
/* ea39f3: fld dword ptr [0xebf138] */
  { double v = F32((uint32_t)(0xebf138u)); FPUSH(v); }
/* ea39f9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* ea39fb: fmul dword ptr [0xebf134] */
  ST0 = ST0 * (F32((uint32_t)(0xebf134u)));
/* ea3a01: fdiv st(1), st(0) */
  STI(1) = STI(1) / ST0;
/* ea3a03: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* ea3a06: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ea3a09: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ea3a0b: fld dword ptr [ecx + ebx*4] */
  { double v = F32((uint32_t)(ecx + ebx*4)); FPUSH(v); }
/* ea3a0e: mov edi, ebx */
  edi = ebx;
/* ea3a10: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ea3a13: fadd dword ptr [esi + edi] */
  ST0 = ST0 + (F32((uint32_t)(esi + edi)));
/* ea3a16: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ea3a18: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* ea3a1b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea3a1d: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* ea3a20: mov ebx, ebp */
  ebx = ebp;
/* ea3a22: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* ea3a25: fld dword ptr [ebx + esi] */
  { double v = F32((uint32_t)(ebx + esi)); FPUSH(v); }
/* ea3a28: fadd dword ptr [ecx + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + ebp*4)));
/* ea3a2b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea3a2d: fstp dword ptr [eax + ebp*4] */
  WF32((uint32_t)(eax + ebp*4), ST0); FPOP();
/* ea3a30: fld dword ptr [edi + ebp*4] */
  { double v = F32((uint32_t)(edi + ebp*4)); FPUSH(v); }
/* ea3a33: fsub dword ptr [ebx + edx] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx)));
/* ea3a36: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ea3a38: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ea3a3b: jmp 0xea3a7a */
  goto L_ea3a7a;
L_ea3a3d: /* ea3a3d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ea3a3f: fadd dword ptr [0xebf120] */
  ST0 = ST0 + (F32((uint32_t)(0xebf120u)));
/* ea3a45: fsqrt  */
  ST0 = sqrt(ST0);
/* ea3a47: fld dword ptr [0xebf128] */
  { double v = F32((uint32_t)(0xebf128u)); FPUSH(v); }
/* ea3a4d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* ea3a4f: fmul dword ptr [0xebf124] */
  ST0 = ST0 * (F32((uint32_t)(0xebf124u)));
/* ea3a55: fdiv st(1), st(0) */
  STI(1) = STI(1) / ST0;
/* ea3a57: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ea3a5a: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* ea3a5d: fsub dword ptr [edx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x24u)));
/* ea3a60: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea3a62: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ea3a64: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* ea3a67: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* ea3a6a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea3a6c: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ea3a6f: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* ea3a72: fsub dword ptr [edx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x10u)));
/* ea3a75: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ea3a77: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_ea3a7a: /* ea3a7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3a7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3a7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea3a7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea3a80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea3a81: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea3a84(void) {
  LOAD_REGS();
L_ea3a84: /* ea3a84: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea3a8a: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea3a90(); return;
}

void f_ea3a90(void) {
  LOAD_REGS();
L_ea3a90: /* ea3a90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3a91: mov ebx, esp */
  ebx = esp;
/* ea3a93: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3a96: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3a99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3a9c: jmp 0xea3aa1 */
  goto L_ea3aa1;
L_ea3aa1: /* ea3aa1: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3aa4: movss xmm0, dword ptr [ebx + 0x10] */
  guest_unsupported(0xea3aa4); /* movss xmm0, dword ptr [ebx + 0x10] */
/* ea3aa9: movss xmm1, dword ptr [ebx + 0x14] */
  guest_unsupported(0xea3aa9); /* movss xmm1, dword ptr [ebx + 0x14] */
/* ea3aae: movss xmm2, dword ptr [0xebf160] */
  guest_unsupported(0xea3aae); /* movss xmm2, dword ptr [0xebf160] */
/* ea3ab6: unpcklps xmm0, xmm1 */
  guest_unsupported(0xea3ab6); /* unpcklps xmm0, xmm1 */
/* ea3ab9: movss xmm1, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea3ab9); /* movss xmm1, dword ptr [ebx + 0xc] */
/* ea3abe: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ea3ac2: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* ea3ac6: unpcklps xmm2, xmm1 */
  guest_unsupported(0xea3ac6); /* unpcklps xmm2, xmm1 */
/* ea3ac9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* ea3acd: shufps xmm0, xmm2, 0x11 */
  guest_unsupported(0xea3acd); /* shufps xmm0, xmm2, 0x11 */
/* ea3ad1: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea3ad1); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea3ad6: mulps xmm0, xmmword ptr [0xebf150] */
  guest_unsupported(0xea3ad6); /* mulps xmm0, xmmword ptr [0xebf150] */
/* ea3add: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* ea3ae0: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ea3ae4: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea3ae4); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea3ae9: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* ea3aed: call 0xeab160 */
  esp -= 4; W32(esp, 0xea3af2u); SPILL(); f_eab160(); if (g_unwind) return; RELOAD();
/* ea3af2: movaps xmm0, xmmword ptr [esp + 0x10] */
  guest_unsupported(0xea3af2); /* movaps xmm0, xmmword ptr [esp + 0x10] */
/* ea3af7: movaps xmm1, xmmword ptr [esp + 0x20] */
  guest_unsupported(0xea3af7); /* movaps xmm1, xmmword ptr [esp + 0x20] */
/* ea3afc: movaps xmm2, xmm0 */
  guest_unsupported(0xea3afc); /* movaps xmm2, xmm0 */
/* ea3aff: shufps xmm0, xmm1, 0 */
  guest_unsupported(0xea3aff); /* shufps xmm0, xmm1, 0 */
/* ea3b03: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea3b03); /* shufps xmm0, xmm0, 0x8a */
/* ea3b07: shufps xmm2, xmm1, 0x99 */
  guest_unsupported(0xea3b07); /* shufps xmm2, xmm1, 0x99 */
/* ea3b0b: movaps xmm1, xmm0 */
  guest_unsupported(0xea3b0b); /* movaps xmm1, xmm0 */
/* ea3b0e: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea3b0e); /* shufps xmm0, xmm0, 0x8a */
/* ea3b12: movaps xmm3, xmm2 */
  guest_unsupported(0xea3b12); /* movaps xmm3, xmm2 */
/* ea3b15: shufps xmm2, xmm2, 0xf7 */
  guest_unsupported(0xea3b15); /* shufps xmm2, xmm2, 0xf7 */
/* ea3b19: shufps xmm3, xmm3, 0xa8 */
  guest_unsupported(0xea3b19); /* shufps xmm3, xmm3, 0xa8 */
/* ea3b1d: mulps xmm1, xmm2 */
  guest_unsupported(0xea3b1d); /* mulps xmm1, xmm2 */
/* ea3b20: shufps xmm2, xmm2, 0x51 */
  guest_unsupported(0xea3b20); /* shufps xmm2, xmm2, 0x51 */
/* ea3b24: mulps xmm0, xmm2 */
  guest_unsupported(0xea3b24); /* mulps xmm0, xmm2 */
/* ea3b27: mulps xmm1, xmm3 */
  guest_unsupported(0xea3b27); /* mulps xmm1, xmm3 */
/* ea3b2a: shufps xmm3, xmm3, 1 */
  guest_unsupported(0xea3b2a); /* shufps xmm3, xmm3, 1 */
/* ea3b2e: mulps xmm0, xmm3 */
  guest_unsupported(0xea3b2e); /* mulps xmm0, xmm3 */
/* ea3b31: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea3b31); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea3b36: xorps xmm0, xmmword ptr [0xebf140] */
  guest_unsupported(0xea3b36); /* xorps xmm0, xmmword ptr [0xebf140] */
/* ea3b3d: addps xmm1, xmm0 */
  guest_unsupported(0xea3b3d); /* addps xmm1, xmm0 */
/* ea3b40: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea3b40); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea3b45: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3b48: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea3b48); /* movups xmmword ptr [eax], xmm1 */
/* ea3b4b: mov esp, ebx */
  esp = ebx;
/* ea3b4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3b4e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea3a9e(void) {
  LOAD_REGS();
L_ea3a9e: /* ea3a9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3a9f: mov ebx, esp */
  ebx = esp;
/* ea3aa1: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3aa4: movss xmm0, dword ptr [ebx + 0x10] */
  guest_unsupported(0xea3aa4); /* movss xmm0, dword ptr [ebx + 0x10] */
/* ea3aa9: movss xmm1, dword ptr [ebx + 0x14] */
  guest_unsupported(0xea3aa9); /* movss xmm1, dword ptr [ebx + 0x14] */
/* ea3aae: movss xmm2, dword ptr [0xebf160] */
  guest_unsupported(0xea3aae); /* movss xmm2, dword ptr [0xebf160] */
/* ea3ab6: unpcklps xmm0, xmm1 */
  guest_unsupported(0xea3ab6); /* unpcklps xmm0, xmm1 */
/* ea3ab9: movss xmm1, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea3ab9); /* movss xmm1, dword ptr [ebx + 0xc] */
/* ea3abe: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ea3ac2: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* ea3ac6: unpcklps xmm2, xmm1 */
  guest_unsupported(0xea3ac6); /* unpcklps xmm2, xmm1 */
/* ea3ac9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* ea3acd: shufps xmm0, xmm2, 0x11 */
  guest_unsupported(0xea3acd); /* shufps xmm0, xmm2, 0x11 */
/* ea3ad1: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea3ad1); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea3ad6: mulps xmm0, xmmword ptr [0xebf150] */
  guest_unsupported(0xea3ad6); /* mulps xmm0, xmmword ptr [0xebf150] */
/* ea3add: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* ea3ae0: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ea3ae4: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea3ae4); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea3ae9: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* ea3aed: call 0xeab160 */
  esp -= 4; W32(esp, 0xea3af2u); SPILL(); f_eab160(); if (g_unwind) return; RELOAD();
/* ea3af2: movaps xmm0, xmmword ptr [esp + 0x10] */
  guest_unsupported(0xea3af2); /* movaps xmm0, xmmword ptr [esp + 0x10] */
/* ea3af7: movaps xmm1, xmmword ptr [esp + 0x20] */
  guest_unsupported(0xea3af7); /* movaps xmm1, xmmword ptr [esp + 0x20] */
/* ea3afc: movaps xmm2, xmm0 */
  guest_unsupported(0xea3afc); /* movaps xmm2, xmm0 */
/* ea3aff: shufps xmm0, xmm1, 0 */
  guest_unsupported(0xea3aff); /* shufps xmm0, xmm1, 0 */
/* ea3b03: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea3b03); /* shufps xmm0, xmm0, 0x8a */
/* ea3b07: shufps xmm2, xmm1, 0x99 */
  guest_unsupported(0xea3b07); /* shufps xmm2, xmm1, 0x99 */
/* ea3b0b: movaps xmm1, xmm0 */
  guest_unsupported(0xea3b0b); /* movaps xmm1, xmm0 */
/* ea3b0e: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea3b0e); /* shufps xmm0, xmm0, 0x8a */
/* ea3b12: movaps xmm3, xmm2 */
  guest_unsupported(0xea3b12); /* movaps xmm3, xmm2 */
/* ea3b15: shufps xmm2, xmm2, 0xf7 */
  guest_unsupported(0xea3b15); /* shufps xmm2, xmm2, 0xf7 */
/* ea3b19: shufps xmm3, xmm3, 0xa8 */
  guest_unsupported(0xea3b19); /* shufps xmm3, xmm3, 0xa8 */
/* ea3b1d: mulps xmm1, xmm2 */
  guest_unsupported(0xea3b1d); /* mulps xmm1, xmm2 */
/* ea3b20: shufps xmm2, xmm2, 0x51 */
  guest_unsupported(0xea3b20); /* shufps xmm2, xmm2, 0x51 */
/* ea3b24: mulps xmm0, xmm2 */
  guest_unsupported(0xea3b24); /* mulps xmm0, xmm2 */
/* ea3b27: mulps xmm1, xmm3 */
  guest_unsupported(0xea3b27); /* mulps xmm1, xmm3 */
/* ea3b2a: shufps xmm3, xmm3, 1 */
  guest_unsupported(0xea3b2a); /* shufps xmm3, xmm3, 1 */
/* ea3b2e: mulps xmm0, xmm3 */
  guest_unsupported(0xea3b2e); /* mulps xmm0, xmm3 */
/* ea3b31: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea3b31); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea3b36: xorps xmm0, xmmword ptr [0xebf140] */
  guest_unsupported(0xea3b36); /* xorps xmm0, xmmword ptr [0xebf140] */
/* ea3b3d: addps xmm1, xmm0 */
  guest_unsupported(0xea3b3d); /* addps xmm1, xmm0 */
/* ea3b40: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea3b40); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea3b45: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3b48: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea3b48); /* movups xmmword ptr [eax], xmm1 */
/* ea3b4b: mov esp, ebx */
  esp = ebx;
/* ea3b4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3b4e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea3b52(void) {
  LOAD_REGS();
L_ea3b52: /* ea3b52: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea3b59: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea3b60(); return;
}

void f_ea3b60(void) {
  LOAD_REGS();
L_ea3b60: /* ea3b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3b61: mov ebx, esp */
  ebx = esp;
/* ea3b63: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3b66: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3b69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3b6c: jmp 0xea3b71 */
  goto L_ea3b71;
L_ea3b71: /* ea3b71: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea3b74: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3b77: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ea3b7a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ea3b7d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea3b7f: jne 0xea3bbf */
  if (!zf) goto L_ea3bbf;
L_ea3b81: /* ea3b81: movss xmm1, dword ptr [ecx + 8] */
  guest_unsupported(0xea3b81); /* movss xmm1, dword ptr [ecx + 8] */
/* ea3b86: xorps xmm0, xmm0 */
  guest_unsupported(0xea3b86); /* xorps xmm0, xmm0 */
/* ea3b89: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3b89); /* shufps xmm1, xmm1, 0 */
/* ea3b8d: movlps xmm0, qword ptr [ecx] */
  guest_unsupported(0xea3b8d); /* movlps xmm0, qword ptr [ecx] */
/* ea3b90: mulps xmm1, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea3b90); /* mulps xmm1, xmmword ptr [eax + 0x20] */
/* ea3b94: movaps xmm2, xmm0 */
  guest_unsupported(0xea3b94); /* movaps xmm2, xmm0 */
/* ea3b97: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea3b97); /* shufps xmm0, xmm0, 0 */
/* ea3b9b: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea3b9b); /* shufps xmm2, xmm2, 0x55 */
/* ea3b9f: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea3b9f); /* mulps xmm0, xmmword ptr [eax] */
/* ea3ba2: mulps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea3ba2); /* mulps xmm2, xmmword ptr [eax + 0x10] */
/* ea3ba6: addps xmm0, xmm2 */
  guest_unsupported(0xea3ba6); /* addps xmm0, xmm2 */
/* ea3ba9: addps xmm0, xmm1 */
  guest_unsupported(0xea3ba9); /* addps xmm0, xmm1 */
/* ea3bac: movlps qword ptr [edx], xmm0 */
  guest_unsupported(0xea3bac); /* movlps qword ptr [edx], xmm0 */
/* ea3baf: movhlps xmm0, xmm0 */
  guest_unsupported(0xea3baf); /* movhlps xmm0, xmm0 */
/* ea3bb2: movss dword ptr [edx + 8], xmm0 */
  guest_unsupported(0xea3bb2); /* movss dword ptr [edx + 8], xmm0 */
/* ea3bb7: mov eax, edx */
  eax = edx;
/* ea3bb9: mov esp, ebx */
  esp = ebx;
/* ea3bbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3bbc: ret 0xc */
  esp += 16; SPILL(); return;
L_ea3bbf: /* ea3bbf: xorps xmm1, xmm1 */
  guest_unsupported(0xea3bbf); /* xorps xmm1, xmm1 */
/* ea3bc2: movlps xmm3, qword ptr [eax] */
  guest_unsupported(0xea3bc2); /* movlps xmm3, qword ptr [eax] */
/* ea3bc5: movlps xmm1, qword ptr [ecx] */
  guest_unsupported(0xea3bc5); /* movlps xmm1, qword ptr [ecx] */
/* ea3bc8: movhps xmm3, qword ptr [eax + 8] */
  guest_unsupported(0xea3bc8); /* movhps xmm3, qword ptr [eax + 8] */
/* ea3bcc: movlps xmm2, qword ptr [eax + 0x10] */
  guest_unsupported(0xea3bcc); /* movlps xmm2, qword ptr [eax + 0x10] */
/* ea3bd0: movss xmm4, dword ptr [ecx + 8] */
  guest_unsupported(0xea3bd0); /* movss xmm4, dword ptr [ecx + 8] */
/* ea3bd5: movhps xmm2, qword ptr [eax + 0x18] */
  guest_unsupported(0xea3bd5); /* movhps xmm2, qword ptr [eax + 0x18] */
/* ea3bd9: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea3bd9); /* shufps xmm4, xmm4, 0 */
/* ea3bdd: movaps xmm5, xmm1 */
  guest_unsupported(0xea3bdd); /* movaps xmm5, xmm1 */
/* ea3be0: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3be0); /* shufps xmm1, xmm1, 0 */
/* ea3be4: shufps xmm5, xmm5, 0x55 */
  guest_unsupported(0xea3be4); /* shufps xmm5, xmm5, 0x55 */
/* ea3be8: mulps xmm3, xmm1 */
  guest_unsupported(0xea3be8); /* mulps xmm3, xmm1 */
/* ea3beb: mulps xmm2, xmm5 */
  guest_unsupported(0xea3beb); /* mulps xmm2, xmm5 */
/* ea3bee: movlps xmm0, qword ptr [eax + 0x20] */
  guest_unsupported(0xea3bee); /* movlps xmm0, qword ptr [eax + 0x20] */
/* ea3bf2: addps xmm3, xmm2 */
  guest_unsupported(0xea3bf2); /* addps xmm3, xmm2 */
/* ea3bf5: movhps xmm0, qword ptr [eax + 0x28] */
  guest_unsupported(0xea3bf5); /* movhps xmm0, qword ptr [eax + 0x28] */
/* ea3bf9: mulps xmm0, xmm4 */
  guest_unsupported(0xea3bf9); /* mulps xmm0, xmm4 */
/* ea3bfc: addps xmm3, xmm0 */
  guest_unsupported(0xea3bfc); /* addps xmm3, xmm0 */
/* ea3bff: movlps qword ptr [edx], xmm3 */
  guest_unsupported(0xea3bff); /* movlps qword ptr [edx], xmm3 */
/* ea3c02: movhlps xmm3, xmm3 */
  guest_unsupported(0xea3c02); /* movhlps xmm3, xmm3 */
/* ea3c05: movss dword ptr [edx + 8], xmm3 */
  guest_unsupported(0xea3c05); /* movss dword ptr [edx + 8], xmm3 */
/* ea3c0a: mov eax, edx */
  eax = edx;
/* ea3c0c: mov esp, ebx */
  esp = ebx;
/* ea3c0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3c0f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea3b6e(void) {
  LOAD_REGS();
L_ea3b6e: /* ea3b6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3b6f: mov ebx, esp */
  ebx = esp;
/* ea3b71: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea3b74: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3b77: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ea3b7a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ea3b7d: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea3b7f: jne 0xea3bbf */
  if (!zf) goto L_ea3bbf;
L_ea3b81: /* ea3b81: movss xmm1, dword ptr [ecx + 8] */
  guest_unsupported(0xea3b81); /* movss xmm1, dword ptr [ecx + 8] */
/* ea3b86: xorps xmm0, xmm0 */
  guest_unsupported(0xea3b86); /* xorps xmm0, xmm0 */
/* ea3b89: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3b89); /* shufps xmm1, xmm1, 0 */
/* ea3b8d: movlps xmm0, qword ptr [ecx] */
  guest_unsupported(0xea3b8d); /* movlps xmm0, qword ptr [ecx] */
/* ea3b90: mulps xmm1, xmmword ptr [eax + 0x20] */
  guest_unsupported(0xea3b90); /* mulps xmm1, xmmword ptr [eax + 0x20] */
/* ea3b94: movaps xmm2, xmm0 */
  guest_unsupported(0xea3b94); /* movaps xmm2, xmm0 */
/* ea3b97: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea3b97); /* shufps xmm0, xmm0, 0 */
/* ea3b9b: shufps xmm2, xmm2, 0x55 */
  guest_unsupported(0xea3b9b); /* shufps xmm2, xmm2, 0x55 */
/* ea3b9f: mulps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xea3b9f); /* mulps xmm0, xmmword ptr [eax] */
/* ea3ba2: mulps xmm2, xmmword ptr [eax + 0x10] */
  guest_unsupported(0xea3ba2); /* mulps xmm2, xmmword ptr [eax + 0x10] */
/* ea3ba6: addps xmm0, xmm2 */
  guest_unsupported(0xea3ba6); /* addps xmm0, xmm2 */
/* ea3ba9: addps xmm0, xmm1 */
  guest_unsupported(0xea3ba9); /* addps xmm0, xmm1 */
/* ea3bac: movlps qword ptr [edx], xmm0 */
  guest_unsupported(0xea3bac); /* movlps qword ptr [edx], xmm0 */
/* ea3baf: movhlps xmm0, xmm0 */
  guest_unsupported(0xea3baf); /* movhlps xmm0, xmm0 */
/* ea3bb2: movss dword ptr [edx + 8], xmm0 */
  guest_unsupported(0xea3bb2); /* movss dword ptr [edx + 8], xmm0 */
/* ea3bb7: mov eax, edx */
  eax = edx;
/* ea3bb9: mov esp, ebx */
  esp = ebx;
/* ea3bbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3bbc: ret 0xc */
  esp += 16; SPILL(); return;
L_ea3bbf: /* ea3bbf: xorps xmm1, xmm1 */
  guest_unsupported(0xea3bbf); /* xorps xmm1, xmm1 */
/* ea3bc2: movlps xmm3, qword ptr [eax] */
  guest_unsupported(0xea3bc2); /* movlps xmm3, qword ptr [eax] */
/* ea3bc5: movlps xmm1, qword ptr [ecx] */
  guest_unsupported(0xea3bc5); /* movlps xmm1, qword ptr [ecx] */
/* ea3bc8: movhps xmm3, qword ptr [eax + 8] */
  guest_unsupported(0xea3bc8); /* movhps xmm3, qword ptr [eax + 8] */
/* ea3bcc: movlps xmm2, qword ptr [eax + 0x10] */
  guest_unsupported(0xea3bcc); /* movlps xmm2, qword ptr [eax + 0x10] */
/* ea3bd0: movss xmm4, dword ptr [ecx + 8] */
  guest_unsupported(0xea3bd0); /* movss xmm4, dword ptr [ecx + 8] */
/* ea3bd5: movhps xmm2, qword ptr [eax + 0x18] */
  guest_unsupported(0xea3bd5); /* movhps xmm2, qword ptr [eax + 0x18] */
/* ea3bd9: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea3bd9); /* shufps xmm4, xmm4, 0 */
/* ea3bdd: movaps xmm5, xmm1 */
  guest_unsupported(0xea3bdd); /* movaps xmm5, xmm1 */
/* ea3be0: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3be0); /* shufps xmm1, xmm1, 0 */
/* ea3be4: shufps xmm5, xmm5, 0x55 */
  guest_unsupported(0xea3be4); /* shufps xmm5, xmm5, 0x55 */
/* ea3be8: mulps xmm3, xmm1 */
  guest_unsupported(0xea3be8); /* mulps xmm3, xmm1 */
/* ea3beb: mulps xmm2, xmm5 */
  guest_unsupported(0xea3beb); /* mulps xmm2, xmm5 */
/* ea3bee: movlps xmm0, qword ptr [eax + 0x20] */
  guest_unsupported(0xea3bee); /* movlps xmm0, qword ptr [eax + 0x20] */
/* ea3bf2: addps xmm3, xmm2 */
  guest_unsupported(0xea3bf2); /* addps xmm3, xmm2 */
/* ea3bf5: movhps xmm0, qword ptr [eax + 0x28] */
  guest_unsupported(0xea3bf5); /* movhps xmm0, qword ptr [eax + 0x28] */
/* ea3bf9: mulps xmm0, xmm4 */
  guest_unsupported(0xea3bf9); /* mulps xmm0, xmm4 */
/* ea3bfc: addps xmm3, xmm0 */
  guest_unsupported(0xea3bfc); /* addps xmm3, xmm0 */
/* ea3bff: movlps qword ptr [edx], xmm3 */
  guest_unsupported(0xea3bff); /* movlps qword ptr [edx], xmm3 */
/* ea3c02: movhlps xmm3, xmm3 */
  guest_unsupported(0xea3c02); /* movhlps xmm3, xmm3 */
/* ea3c05: movss dword ptr [edx + 8], xmm3 */
  guest_unsupported(0xea3c05); /* movss dword ptr [edx + 8], xmm3 */
/* ea3c0a: mov eax, edx */
  eax = edx;
/* ea3c0c: mov esp, ebx */
  esp = ebx;
/* ea3c0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3c0f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea3c12(void) {
  LOAD_REGS();
L_ea3c12: /* ea3c12: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea3c19: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea3c20(); return;
}

void f_ea3c20(void) {
  LOAD_REGS();
L_ea3c20: /* ea3c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3c21: mov ebx, esp */
  ebx = esp;
/* ea3c23: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3c26: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3c29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3c2c: jmp 0xea3c31 */
  goto L_ea3c31;
L_ea3c31: /* ea3c31: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3c34: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3c37: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea3c3a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea3c3a); /* movss xmm0, dword ptr [edx] */
/* ea3c3e: movss xmm6, dword ptr [edx + 4] */
  guest_unsupported(0xea3c3e); /* movss xmm6, dword ptr [edx + 4] */
/* ea3c43: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea3c43); /* movss xmm5, dword ptr [edx + 8] */
/* ea3c48: movss xmm1, dword ptr [0xebf180] */
  guest_unsupported(0xea3c48); /* movss xmm1, dword ptr [0xebf180] */
/* ea3c50: movaps xmm2, xmm0 */
  guest_unsupported(0xea3c50); /* movaps xmm2, xmm0 */
/* ea3c53: mulss xmm2, xmm2 */
  guest_unsupported(0xea3c53); /* mulss xmm2, xmm2 */
/* ea3c57: movaps xmm3, xmm6 */
  guest_unsupported(0xea3c57); /* movaps xmm3, xmm6 */
/* ea3c5a: mulss xmm3, xmm3 */
  guest_unsupported(0xea3c5a); /* mulss xmm3, xmm3 */
/* ea3c5e: addss xmm2, xmm3 */
  guest_unsupported(0xea3c5e); /* addss xmm2, xmm3 */
/* ea3c62: movaps xmm3, xmm5 */
  guest_unsupported(0xea3c62); /* movaps xmm3, xmm5 */
/* ea3c65: mulss xmm3, xmm3 */
  guest_unsupported(0xea3c65); /* mulss xmm3, xmm3 */
/* ea3c69: movaps xmm4, xmm3 */
  guest_unsupported(0xea3c69); /* movaps xmm4, xmm3 */
/* ea3c6c: movaps xmm3, xmm2 */
  guest_unsupported(0xea3c6c); /* movaps xmm3, xmm2 */
/* ea3c6f: addss xmm3, xmm4 */
  guest_unsupported(0xea3c6f); /* addss xmm3, xmm4 */
/* ea3c73: comiss xmm1, xmm3 */
  guest_unsupported(0xea3c73); /* comiss xmm1, xmm3 */
/* ea3c76: jbe 0xea3c8f */
  if ((cf | zf)) goto L_ea3c8f;
L_ea3c78: /* ea3c78: xorps xmm0, xmm0 */
  guest_unsupported(0xea3c78); /* xorps xmm0, xmm0 */
/* ea3c7b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea3c7b); /* movss dword ptr [eax], xmm0 */
/* ea3c7f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea3c7f); /* movss dword ptr [eax + 4], xmm0 */
/* ea3c84: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea3c84); /* movss dword ptr [eax + 8], xmm0 */
/* ea3c89: mov esp, ebx */
  esp = ebx;
/* ea3c8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3c8c: ret 8 */
  esp += 12; SPILL(); return;
L_ea3c8f: /* ea3c8f: movss xmm1, dword ptr [0xebf188] */
  guest_unsupported(0xea3c8f); /* movss xmm1, dword ptr [0xebf188] */
/* ea3c97: movss xmm2, dword ptr [0xebf184] */
  guest_unsupported(0xea3c97); /* movss xmm2, dword ptr [0xebf184] */
/* ea3c9f: movaps xmm4, xmm3 */
  guest_unsupported(0xea3c9f); /* movaps xmm4, xmm3 */
/* ea3ca2: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea3ca2); /* rsqrtss xmm3, xmm3 */
/* ea3ca6: mulss xmm4, xmm3 */
  guest_unsupported(0xea3ca6); /* mulss xmm4, xmm3 */
/* ea3caa: mulss xmm2, xmm3 */
  guest_unsupported(0xea3caa); /* mulss xmm2, xmm3 */
/* ea3cae: mulss xmm4, xmm3 */
  guest_unsupported(0xea3cae); /* mulss xmm4, xmm3 */
/* ea3cb2: subss xmm1, xmm4 */
  guest_unsupported(0xea3cb2); /* subss xmm1, xmm4 */
/* ea3cb6: movaps xmm3, xmm0 */
  guest_unsupported(0xea3cb6); /* movaps xmm3, xmm0 */
/* ea3cb9: movaps xmm0, xmm2 */
  guest_unsupported(0xea3cb9); /* movaps xmm0, xmm2 */
/* ea3cbc: mulss xmm0, xmm1 */
  guest_unsupported(0xea3cbc); /* mulss xmm0, xmm1 */
/* ea3cc0: movaps xmm1, xmm0 */
  guest_unsupported(0xea3cc0); /* movaps xmm1, xmm0 */
/* ea3cc3: mulss xmm1, xmm3 */
  guest_unsupported(0xea3cc3); /* mulss xmm1, xmm3 */
/* ea3cc7: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea3cc7); /* movss dword ptr [eax], xmm1 */
/* ea3ccb: movaps xmm1, xmm0 */
  guest_unsupported(0xea3ccb); /* movaps xmm1, xmm0 */
/* ea3cce: mulss xmm1, xmm6 */
  guest_unsupported(0xea3cce); /* mulss xmm1, xmm6 */
/* ea3cd2: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea3cd2); /* movss dword ptr [eax + 4], xmm1 */
/* ea3cd7: mulss xmm0, xmm5 */
  guest_unsupported(0xea3cd7); /* mulss xmm0, xmm5 */
/* ea3cdb: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea3cdb); /* movss dword ptr [eax + 8], xmm0 */
/* ea3ce0: mov esp, ebx */
  esp = ebx;
/* ea3ce2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3ce3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea3c2e(void) {
  LOAD_REGS();
L_ea3c2e: /* ea3c2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3c2f: mov ebx, esp */
  ebx = esp;
/* ea3c31: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3c34: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3c37: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea3c3a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea3c3a); /* movss xmm0, dword ptr [edx] */
/* ea3c3e: movss xmm6, dword ptr [edx + 4] */
  guest_unsupported(0xea3c3e); /* movss xmm6, dword ptr [edx + 4] */
/* ea3c43: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea3c43); /* movss xmm5, dword ptr [edx + 8] */
/* ea3c48: movss xmm1, dword ptr [0xebf180] */
  guest_unsupported(0xea3c48); /* movss xmm1, dword ptr [0xebf180] */
/* ea3c50: movaps xmm2, xmm0 */
  guest_unsupported(0xea3c50); /* movaps xmm2, xmm0 */
/* ea3c53: mulss xmm2, xmm2 */
  guest_unsupported(0xea3c53); /* mulss xmm2, xmm2 */
/* ea3c57: movaps xmm3, xmm6 */
  guest_unsupported(0xea3c57); /* movaps xmm3, xmm6 */
/* ea3c5a: mulss xmm3, xmm3 */
  guest_unsupported(0xea3c5a); /* mulss xmm3, xmm3 */
/* ea3c5e: addss xmm2, xmm3 */
  guest_unsupported(0xea3c5e); /* addss xmm2, xmm3 */
/* ea3c62: movaps xmm3, xmm5 */
  guest_unsupported(0xea3c62); /* movaps xmm3, xmm5 */
/* ea3c65: mulss xmm3, xmm3 */
  guest_unsupported(0xea3c65); /* mulss xmm3, xmm3 */
/* ea3c69: movaps xmm4, xmm3 */
  guest_unsupported(0xea3c69); /* movaps xmm4, xmm3 */
/* ea3c6c: movaps xmm3, xmm2 */
  guest_unsupported(0xea3c6c); /* movaps xmm3, xmm2 */
/* ea3c6f: addss xmm3, xmm4 */
  guest_unsupported(0xea3c6f); /* addss xmm3, xmm4 */
/* ea3c73: comiss xmm1, xmm3 */
  guest_unsupported(0xea3c73); /* comiss xmm1, xmm3 */
/* ea3c76: jbe 0xea3c8f */
  if ((cf | zf)) goto L_ea3c8f;
L_ea3c78: /* ea3c78: xorps xmm0, xmm0 */
  guest_unsupported(0xea3c78); /* xorps xmm0, xmm0 */
/* ea3c7b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea3c7b); /* movss dword ptr [eax], xmm0 */
/* ea3c7f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea3c7f); /* movss dword ptr [eax + 4], xmm0 */
/* ea3c84: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea3c84); /* movss dword ptr [eax + 8], xmm0 */
/* ea3c89: mov esp, ebx */
  esp = ebx;
/* ea3c8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3c8c: ret 8 */
  esp += 12; SPILL(); return;
L_ea3c8f: /* ea3c8f: movss xmm1, dword ptr [0xebf188] */
  guest_unsupported(0xea3c8f); /* movss xmm1, dword ptr [0xebf188] */
/* ea3c97: movss xmm2, dword ptr [0xebf184] */
  guest_unsupported(0xea3c97); /* movss xmm2, dword ptr [0xebf184] */
/* ea3c9f: movaps xmm4, xmm3 */
  guest_unsupported(0xea3c9f); /* movaps xmm4, xmm3 */
/* ea3ca2: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea3ca2); /* rsqrtss xmm3, xmm3 */
/* ea3ca6: mulss xmm4, xmm3 */
  guest_unsupported(0xea3ca6); /* mulss xmm4, xmm3 */
/* ea3caa: mulss xmm2, xmm3 */
  guest_unsupported(0xea3caa); /* mulss xmm2, xmm3 */
/* ea3cae: mulss xmm4, xmm3 */
  guest_unsupported(0xea3cae); /* mulss xmm4, xmm3 */
/* ea3cb2: subss xmm1, xmm4 */
  guest_unsupported(0xea3cb2); /* subss xmm1, xmm4 */
/* ea3cb6: movaps xmm3, xmm0 */
  guest_unsupported(0xea3cb6); /* movaps xmm3, xmm0 */
/* ea3cb9: movaps xmm0, xmm2 */
  guest_unsupported(0xea3cb9); /* movaps xmm0, xmm2 */
/* ea3cbc: mulss xmm0, xmm1 */
  guest_unsupported(0xea3cbc); /* mulss xmm0, xmm1 */
/* ea3cc0: movaps xmm1, xmm0 */
  guest_unsupported(0xea3cc0); /* movaps xmm1, xmm0 */
/* ea3cc3: mulss xmm1, xmm3 */
  guest_unsupported(0xea3cc3); /* mulss xmm1, xmm3 */
/* ea3cc7: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea3cc7); /* movss dword ptr [eax], xmm1 */
/* ea3ccb: movaps xmm1, xmm0 */
  guest_unsupported(0xea3ccb); /* movaps xmm1, xmm0 */
/* ea3cce: mulss xmm1, xmm6 */
  guest_unsupported(0xea3cce); /* mulss xmm1, xmm6 */
/* ea3cd2: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea3cd2); /* movss dword ptr [eax + 4], xmm1 */
/* ea3cd7: mulss xmm0, xmm5 */
  guest_unsupported(0xea3cd7); /* mulss xmm0, xmm5 */
/* ea3cdb: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea3cdb); /* movss dword ptr [eax + 8], xmm0 */
/* ea3ce0: mov esp, ebx */
  esp = ebx;
/* ea3ce2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3ce3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea3ce6(void) {
  LOAD_REGS();
L_ea3ce6: /* ea3ce6: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea3ce9: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea3cf0(); return;
}

void f_ea3cf0(void) {
  LOAD_REGS();
L_ea3cf0: /* ea3cf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3cf1: mov ebx, esp */
  ebx = esp;
/* ea3cf3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3cf6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3cf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3cfc: jmp 0xea3d01 */
  goto L_ea3d01;
L_ea3d01: /* ea3d01: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3d04: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3d07: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea3d0a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea3d0a); /* movss xmm0, dword ptr [edx] */
/* ea3d0e: movss xmm4, dword ptr [edx + 4] */
  guest_unsupported(0xea3d0e); /* movss xmm4, dword ptr [edx + 4] */
/* ea3d13: movss xmm6, dword ptr [edx + 8] */
  guest_unsupported(0xea3d13); /* movss xmm6, dword ptr [edx + 8] */
/* ea3d18: movss xmm1, dword ptr [0xebf18c] */
  guest_unsupported(0xea3d18); /* movss xmm1, dword ptr [0xebf18c] */
/* ea3d20: movaps xmm2, xmm0 */
  guest_unsupported(0xea3d20); /* movaps xmm2, xmm0 */
/* ea3d23: mulss xmm2, xmm2 */
  guest_unsupported(0xea3d23); /* mulss xmm2, xmm2 */
/* ea3d27: movaps xmm3, xmm4 */
  guest_unsupported(0xea3d27); /* movaps xmm3, xmm4 */
/* ea3d2a: mulss xmm3, xmm3 */
  guest_unsupported(0xea3d2a); /* mulss xmm3, xmm3 */
/* ea3d2e: addss xmm2, xmm3 */
  guest_unsupported(0xea3d2e); /* addss xmm2, xmm3 */
/* ea3d32: movaps xmm3, xmm6 */
  guest_unsupported(0xea3d32); /* movaps xmm3, xmm6 */
/* ea3d35: mulss xmm3, xmm3 */
  guest_unsupported(0xea3d35); /* mulss xmm3, xmm3 */
/* ea3d39: movaps xmm5, xmm3 */
  guest_unsupported(0xea3d39); /* movaps xmm5, xmm3 */
/* ea3d3c: movaps xmm3, xmm2 */
  guest_unsupported(0xea3d3c); /* movaps xmm3, xmm2 */
/* ea3d3f: addss xmm3, xmm5 */
  guest_unsupported(0xea3d3f); /* addss xmm3, xmm5 */
/* ea3d43: comiss xmm1, xmm3 */
  guest_unsupported(0xea3d43); /* comiss xmm1, xmm3 */
/* ea3d46: jbe 0xea3d64 */
  if ((cf | zf)) goto L_ea3d64;
L_ea3d48: /* ea3d48: xorps xmm0, xmm0 */
  guest_unsupported(0xea3d48); /* xorps xmm0, xmm0 */
/* ea3d4b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea3d4b); /* movss dword ptr [eax], xmm0 */
/* ea3d4f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea3d4f); /* movss dword ptr [eax + 4], xmm0 */
/* ea3d54: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea3d54); /* movss dword ptr [eax + 8], xmm0 */
/* ea3d59: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea3d59); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea3d5e: mov esp, ebx */
  esp = ebx;
/* ea3d60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3d61: ret 8 */
  esp += 12; SPILL(); return;
L_ea3d64: /* ea3d64: movss xmm1, dword ptr [0xebf194] */
  guest_unsupported(0xea3d64); /* movss xmm1, dword ptr [0xebf194] */
/* ea3d6c: movss xmm2, dword ptr [0xebf190] */
  guest_unsupported(0xea3d6c); /* movss xmm2, dword ptr [0xebf190] */
/* ea3d74: movaps xmm5, xmm3 */
  guest_unsupported(0xea3d74); /* movaps xmm5, xmm3 */
/* ea3d77: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea3d77); /* rsqrtss xmm3, xmm3 */
/* ea3d7b: mulss xmm5, xmm3 */
  guest_unsupported(0xea3d7b); /* mulss xmm5, xmm3 */
/* ea3d7f: mulss xmm2, xmm3 */
  guest_unsupported(0xea3d7f); /* mulss xmm2, xmm3 */
/* ea3d83: mulss xmm5, xmm3 */
  guest_unsupported(0xea3d83); /* mulss xmm5, xmm3 */
/* ea3d87: subss xmm1, xmm5 */
  guest_unsupported(0xea3d87); /* subss xmm1, xmm5 */
/* ea3d8b: movaps xmm3, xmm0 */
  guest_unsupported(0xea3d8b); /* movaps xmm3, xmm0 */
/* ea3d8e: movaps xmm0, xmm2 */
  guest_unsupported(0xea3d8e); /* movaps xmm0, xmm2 */
/* ea3d91: mulss xmm0, xmm1 */
  guest_unsupported(0xea3d91); /* mulss xmm0, xmm1 */
/* ea3d95: movaps xmm1, xmm0 */
  guest_unsupported(0xea3d95); /* movaps xmm1, xmm0 */
/* ea3d98: mulss xmm1, xmm3 */
  guest_unsupported(0xea3d98); /* mulss xmm1, xmm3 */
/* ea3d9c: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea3d9c); /* movss dword ptr [eax], xmm1 */
/* ea3da0: movaps xmm1, xmm0 */
  guest_unsupported(0xea3da0); /* movaps xmm1, xmm0 */
/* ea3da3: mulss xmm1, xmm4 */
  guest_unsupported(0xea3da3); /* mulss xmm1, xmm4 */
/* ea3da7: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea3da7); /* movss dword ptr [eax + 4], xmm1 */
/* ea3dac: movaps xmm1, xmm0 */
  guest_unsupported(0xea3dac); /* movaps xmm1, xmm0 */
/* ea3daf: mulss xmm1, xmm6 */
  guest_unsupported(0xea3daf); /* mulss xmm1, xmm6 */
/* ea3db3: movss dword ptr [eax + 8], xmm1 */
  guest_unsupported(0xea3db3); /* movss dword ptr [eax + 8], xmm1 */
/* ea3db8: mulss xmm0, dword ptr [edx + 0xc] */
  guest_unsupported(0xea3db8); /* mulss xmm0, dword ptr [edx + 0xc] */
/* ea3dbd: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea3dbd); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea3dc2: mov esp, ebx */
  esp = ebx;
/* ea3dc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3dc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea3cfe(void) {
  LOAD_REGS();
L_ea3cfe: /* ea3cfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3cff: mov ebx, esp */
  ebx = esp;
/* ea3d01: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3d04: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3d07: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  esp = r;
  }
/* ea3d0a: movss xmm0, dword ptr [edx] */
  guest_unsupported(0xea3d0a); /* movss xmm0, dword ptr [edx] */
/* ea3d0e: movss xmm4, dword ptr [edx + 4] */
  guest_unsupported(0xea3d0e); /* movss xmm4, dword ptr [edx + 4] */
/* ea3d13: movss xmm6, dword ptr [edx + 8] */
  guest_unsupported(0xea3d13); /* movss xmm6, dword ptr [edx + 8] */
/* ea3d18: movss xmm1, dword ptr [0xebf18c] */
  guest_unsupported(0xea3d18); /* movss xmm1, dword ptr [0xebf18c] */
/* ea3d20: movaps xmm2, xmm0 */
  guest_unsupported(0xea3d20); /* movaps xmm2, xmm0 */
/* ea3d23: mulss xmm2, xmm2 */
  guest_unsupported(0xea3d23); /* mulss xmm2, xmm2 */
/* ea3d27: movaps xmm3, xmm4 */
  guest_unsupported(0xea3d27); /* movaps xmm3, xmm4 */
/* ea3d2a: mulss xmm3, xmm3 */
  guest_unsupported(0xea3d2a); /* mulss xmm3, xmm3 */
/* ea3d2e: addss xmm2, xmm3 */
  guest_unsupported(0xea3d2e); /* addss xmm2, xmm3 */
/* ea3d32: movaps xmm3, xmm6 */
  guest_unsupported(0xea3d32); /* movaps xmm3, xmm6 */
/* ea3d35: mulss xmm3, xmm3 */
  guest_unsupported(0xea3d35); /* mulss xmm3, xmm3 */
/* ea3d39: movaps xmm5, xmm3 */
  guest_unsupported(0xea3d39); /* movaps xmm5, xmm3 */
/* ea3d3c: movaps xmm3, xmm2 */
  guest_unsupported(0xea3d3c); /* movaps xmm3, xmm2 */
/* ea3d3f: addss xmm3, xmm5 */
  guest_unsupported(0xea3d3f); /* addss xmm3, xmm5 */
/* ea3d43: comiss xmm1, xmm3 */
  guest_unsupported(0xea3d43); /* comiss xmm1, xmm3 */
/* ea3d46: jbe 0xea3d64 */
  if ((cf | zf)) goto L_ea3d64;
L_ea3d48: /* ea3d48: xorps xmm0, xmm0 */
  guest_unsupported(0xea3d48); /* xorps xmm0, xmm0 */
/* ea3d4b: movss dword ptr [eax], xmm0 */
  guest_unsupported(0xea3d4b); /* movss dword ptr [eax], xmm0 */
/* ea3d4f: movss dword ptr [eax + 4], xmm0 */
  guest_unsupported(0xea3d4f); /* movss dword ptr [eax + 4], xmm0 */
/* ea3d54: movss dword ptr [eax + 8], xmm0 */
  guest_unsupported(0xea3d54); /* movss dword ptr [eax + 8], xmm0 */
/* ea3d59: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea3d59); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea3d5e: mov esp, ebx */
  esp = ebx;
/* ea3d60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3d61: ret 8 */
  esp += 12; SPILL(); return;
L_ea3d64: /* ea3d64: movss xmm1, dword ptr [0xebf194] */
  guest_unsupported(0xea3d64); /* movss xmm1, dword ptr [0xebf194] */
/* ea3d6c: movss xmm2, dword ptr [0xebf190] */
  guest_unsupported(0xea3d6c); /* movss xmm2, dword ptr [0xebf190] */
/* ea3d74: movaps xmm5, xmm3 */
  guest_unsupported(0xea3d74); /* movaps xmm5, xmm3 */
/* ea3d77: rsqrtss xmm3, xmm3 */
  guest_unsupported(0xea3d77); /* rsqrtss xmm3, xmm3 */
/* ea3d7b: mulss xmm5, xmm3 */
  guest_unsupported(0xea3d7b); /* mulss xmm5, xmm3 */
/* ea3d7f: mulss xmm2, xmm3 */
  guest_unsupported(0xea3d7f); /* mulss xmm2, xmm3 */
/* ea3d83: mulss xmm5, xmm3 */
  guest_unsupported(0xea3d83); /* mulss xmm5, xmm3 */
/* ea3d87: subss xmm1, xmm5 */
  guest_unsupported(0xea3d87); /* subss xmm1, xmm5 */
/* ea3d8b: movaps xmm3, xmm0 */
  guest_unsupported(0xea3d8b); /* movaps xmm3, xmm0 */
/* ea3d8e: movaps xmm0, xmm2 */
  guest_unsupported(0xea3d8e); /* movaps xmm0, xmm2 */
/* ea3d91: mulss xmm0, xmm1 */
  guest_unsupported(0xea3d91); /* mulss xmm0, xmm1 */
/* ea3d95: movaps xmm1, xmm0 */
  guest_unsupported(0xea3d95); /* movaps xmm1, xmm0 */
/* ea3d98: mulss xmm1, xmm3 */
  guest_unsupported(0xea3d98); /* mulss xmm1, xmm3 */
/* ea3d9c: movss dword ptr [eax], xmm1 */
  guest_unsupported(0xea3d9c); /* movss dword ptr [eax], xmm1 */
/* ea3da0: movaps xmm1, xmm0 */
  guest_unsupported(0xea3da0); /* movaps xmm1, xmm0 */
/* ea3da3: mulss xmm1, xmm4 */
  guest_unsupported(0xea3da3); /* mulss xmm1, xmm4 */
/* ea3da7: movss dword ptr [eax + 4], xmm1 */
  guest_unsupported(0xea3da7); /* movss dword ptr [eax + 4], xmm1 */
/* ea3dac: movaps xmm1, xmm0 */
  guest_unsupported(0xea3dac); /* movaps xmm1, xmm0 */
/* ea3daf: mulss xmm1, xmm6 */
  guest_unsupported(0xea3daf); /* mulss xmm1, xmm6 */
/* ea3db3: movss dword ptr [eax + 8], xmm1 */
  guest_unsupported(0xea3db3); /* movss dword ptr [eax + 8], xmm1 */
/* ea3db8: mulss xmm0, dword ptr [edx + 0xc] */
  guest_unsupported(0xea3db8); /* mulss xmm0, dword ptr [edx + 0xc] */
/* ea3dbd: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea3dbd); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea3dc2: mov esp, ebx */
  esp = ebx;
/* ea3dc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3dc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea3dc9(void) {
  LOAD_REGS();
L_ea3dc9: /* ea3dc9: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea3dd0(); return;
}

void f_ea3dd0(void) {
  LOAD_REGS();
L_ea3dd0: /* ea3dd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3dd1: mov ebx, esp */
  ebx = esp;
/* ea3dd3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3dd6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3dd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3ddc: jmp 0xea3de1 */
  goto L_ea3de1;
L_ea3de1: /* ea3de1: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea3de4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3de7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3dea: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3ded: movss xmm4, dword ptr [edx] */
  guest_unsupported(0xea3ded); /* movss xmm4, dword ptr [edx] */
/* ea3df1: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea3df1); /* shufps xmm4, xmm4, 0 */
/* ea3df5: movlps xmm3, qword ptr [ecx] */
  guest_unsupported(0xea3df5); /* movlps xmm3, qword ptr [ecx] */
/* ea3df8: movhps xmm3, qword ptr [ecx + 8] */
  guest_unsupported(0xea3df8); /* movhps xmm3, qword ptr [ecx + 8] */
/* ea3dfc: mulps xmm4, xmm3 */
  guest_unsupported(0xea3dfc); /* mulps xmm4, xmm3 */
/* ea3dff: movss xmm5, dword ptr [edx + 4] */
  guest_unsupported(0xea3dff); /* movss xmm5, dword ptr [edx + 4] */
/* ea3e04: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e04); /* shufps xmm5, xmm5, 0 */
/* ea3e08: movlps xmm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea3e08); /* movlps xmm2, qword ptr [ecx + 0x10] */
/* ea3e0c: movhps xmm2, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea3e0c); /* movhps xmm2, qword ptr [ecx + 0x18] */
/* ea3e10: mulps xmm5, xmm2 */
  guest_unsupported(0xea3e10); /* mulps xmm5, xmm2 */
/* ea3e13: addps xmm4, xmm5 */
  guest_unsupported(0xea3e13); /* addps xmm4, xmm5 */
/* ea3e16: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea3e16); /* movss xmm5, dword ptr [edx + 8] */
/* ea3e1b: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e1b); /* shufps xmm5, xmm5, 0 */
/* ea3e1f: movlps xmm1, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea3e1f); /* movlps xmm1, qword ptr [ecx + 0x20] */
/* ea3e23: movhps xmm1, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea3e23); /* movhps xmm1, qword ptr [ecx + 0x28] */
/* ea3e27: mulps xmm5, xmm1 */
  guest_unsupported(0xea3e27); /* mulps xmm5, xmm1 */
/* ea3e2a: addps xmm4, xmm5 */
  guest_unsupported(0xea3e2a); /* addps xmm4, xmm5 */
/* ea3e2d: movss xmm5, dword ptr [edx + 0xc] */
  guest_unsupported(0xea3e2d); /* movss xmm5, dword ptr [edx + 0xc] */
/* ea3e32: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e32); /* shufps xmm5, xmm5, 0 */
/* ea3e36: movlps xmm0, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea3e36); /* movlps xmm0, qword ptr [ecx + 0x30] */
/* ea3e3a: movhps xmm0, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea3e3a); /* movhps xmm0, qword ptr [ecx + 0x38] */
/* ea3e3e: mulps xmm5, xmm0 */
  guest_unsupported(0xea3e3e); /* mulps xmm5, xmm0 */
/* ea3e41: addps xmm4, xmm5 */
  guest_unsupported(0xea3e41); /* addps xmm4, xmm5 */
/* ea3e44: movss xmm5, dword ptr [edx + 0x10] */
  guest_unsupported(0xea3e44); /* movss xmm5, dword ptr [edx + 0x10] */
/* ea3e49: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e49); /* shufps xmm5, xmm5, 0 */
/* ea3e4d: mulps xmm5, xmm3 */
  guest_unsupported(0xea3e4d); /* mulps xmm5, xmm3 */
/* ea3e50: movss xmm6, dword ptr [edx + 0x14] */
  guest_unsupported(0xea3e50); /* movss xmm6, dword ptr [edx + 0x14] */
/* ea3e55: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e55); /* shufps xmm6, xmm6, 0 */
/* ea3e59: mulps xmm6, xmm2 */
  guest_unsupported(0xea3e59); /* mulps xmm6, xmm2 */
/* ea3e5c: addps xmm5, xmm6 */
  guest_unsupported(0xea3e5c); /* addps xmm5, xmm6 */
/* ea3e5f: movss xmm6, dword ptr [edx + 0x18] */
  guest_unsupported(0xea3e5f); /* movss xmm6, dword ptr [edx + 0x18] */
/* ea3e64: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e64); /* shufps xmm6, xmm6, 0 */
/* ea3e68: mulps xmm6, xmm1 */
  guest_unsupported(0xea3e68); /* mulps xmm6, xmm1 */
/* ea3e6b: addps xmm5, xmm6 */
  guest_unsupported(0xea3e6b); /* addps xmm5, xmm6 */
/* ea3e6e: movss xmm6, dword ptr [edx + 0x1c] */
  guest_unsupported(0xea3e6e); /* movss xmm6, dword ptr [edx + 0x1c] */
/* ea3e73: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e73); /* shufps xmm6, xmm6, 0 */
/* ea3e77: mulps xmm6, xmm0 */
  guest_unsupported(0xea3e77); /* mulps xmm6, xmm0 */
/* ea3e7a: addps xmm5, xmm6 */
  guest_unsupported(0xea3e7a); /* addps xmm5, xmm6 */
/* ea3e7d: movss xmm6, dword ptr [edx + 0x20] */
  guest_unsupported(0xea3e7d); /* movss xmm6, dword ptr [edx + 0x20] */
/* ea3e82: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e82); /* shufps xmm6, xmm6, 0 */
/* ea3e86: movaps xmm7, xmm4 */
  guest_unsupported(0xea3e86); /* movaps xmm7, xmm4 */
/* ea3e89: unpcklps xmm4, xmm5 */
  guest_unsupported(0xea3e89); /* unpcklps xmm4, xmm5 */
/* ea3e8c: mulps xmm6, xmm3 */
  guest_unsupported(0xea3e8c); /* mulps xmm6, xmm3 */
/* ea3e8f: unpckhps xmm7, xmm5 */
  guest_unsupported(0xea3e8f); /* unpckhps xmm7, xmm5 */
/* ea3e92: mov ecx, eax */
  ecx = eax;
/* ea3e94: movss xmm5, dword ptr [edx + 0x24] */
  guest_unsupported(0xea3e94); /* movss xmm5, dword ptr [edx + 0x24] */
/* ea3e99: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e99); /* shufps xmm5, xmm5, 0 */
/* ea3e9d: mulps xmm5, xmm2 */
  guest_unsupported(0xea3e9d); /* mulps xmm5, xmm2 */
/* ea3ea0: addps xmm6, xmm5 */
  guest_unsupported(0xea3ea0); /* addps xmm6, xmm5 */
/* ea3ea3: movss xmm5, dword ptr [edx + 0x28] */
  guest_unsupported(0xea3ea3); /* movss xmm5, dword ptr [edx + 0x28] */
/* ea3ea8: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3ea8); /* shufps xmm5, xmm5, 0 */
/* ea3eac: mulps xmm5, xmm1 */
  guest_unsupported(0xea3eac); /* mulps xmm5, xmm1 */
/* ea3eaf: addps xmm6, xmm5 */
  guest_unsupported(0xea3eaf); /* addps xmm6, xmm5 */
/* ea3eb2: movss xmm5, dword ptr [edx + 0x2c] */
  guest_unsupported(0xea3eb2); /* movss xmm5, dword ptr [edx + 0x2c] */
/* ea3eb7: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3eb7); /* shufps xmm5, xmm5, 0 */
/* ea3ebb: mulps xmm5, xmm0 */
  guest_unsupported(0xea3ebb); /* mulps xmm5, xmm0 */
/* ea3ebe: addps xmm6, xmm5 */
  guest_unsupported(0xea3ebe); /* addps xmm6, xmm5 */
/* ea3ec1: movss xmm5, dword ptr [edx + 0x30] */
  guest_unsupported(0xea3ec1); /* movss xmm5, dword ptr [edx + 0x30] */
/* ea3ec6: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3ec6); /* shufps xmm5, xmm5, 0 */
/* ea3eca: mulps xmm5, xmm3 */
  guest_unsupported(0xea3eca); /* mulps xmm5, xmm3 */
/* ea3ecd: movss xmm3, dword ptr [edx + 0x34] */
  guest_unsupported(0xea3ecd); /* movss xmm3, dword ptr [edx + 0x34] */
/* ea3ed2: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea3ed2); /* shufps xmm3, xmm3, 0 */
/* ea3ed6: mulps xmm3, xmm2 */
  guest_unsupported(0xea3ed6); /* mulps xmm3, xmm2 */
/* ea3ed9: addps xmm5, xmm3 */
  guest_unsupported(0xea3ed9); /* addps xmm5, xmm3 */
/* ea3edc: movss xmm2, dword ptr [edx + 0x38] */
  guest_unsupported(0xea3edc); /* movss xmm2, dword ptr [edx + 0x38] */
/* ea3ee1: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea3ee1); /* shufps xmm2, xmm2, 0 */
/* ea3ee5: mulps xmm2, xmm1 */
  guest_unsupported(0xea3ee5); /* mulps xmm2, xmm1 */
/* ea3ee8: movss xmm1, dword ptr [edx + 0x3c] */
  guest_unsupported(0xea3ee8); /* movss xmm1, dword ptr [edx + 0x3c] */
/* ea3eed: movlps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea3eed); /* movlps qword ptr [ecx], xmm4 */
/* ea3ef0: addps xmm5, xmm2 */
  guest_unsupported(0xea3ef0); /* addps xmm5, xmm2 */
/* ea3ef3: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3ef3); /* shufps xmm1, xmm1, 0 */
/* ea3ef7: mulps xmm1, xmm0 */
  guest_unsupported(0xea3ef7); /* mulps xmm1, xmm0 */
/* ea3efa: addps xmm5, xmm1 */
  guest_unsupported(0xea3efa); /* addps xmm5, xmm1 */
/* ea3efd: movhps qword ptr [ecx + 0x10], xmm4 */
  guest_unsupported(0xea3efd); /* movhps qword ptr [ecx + 0x10], xmm4 */
/* ea3f01: movlps qword ptr [ecx + 0x20], xmm7 */
  guest_unsupported(0xea3f01); /* movlps qword ptr [ecx + 0x20], xmm7 */
/* ea3f05: movhps qword ptr [ecx + 0x30], xmm7 */
  guest_unsupported(0xea3f05); /* movhps qword ptr [ecx + 0x30], xmm7 */
/* ea3f09: movaps xmm0, xmm6 */
  guest_unsupported(0xea3f09); /* movaps xmm0, xmm6 */
/* ea3f0c: unpcklps xmm6, xmm5 */
  guest_unsupported(0xea3f0c); /* unpcklps xmm6, xmm5 */
/* ea3f0f: movlps qword ptr [ecx + 8], xmm6 */
  guest_unsupported(0xea3f0f); /* movlps qword ptr [ecx + 8], xmm6 */
/* ea3f13: movhps qword ptr [ecx + 0x18], xmm6 */
  guest_unsupported(0xea3f13); /* movhps qword ptr [ecx + 0x18], xmm6 */
/* ea3f17: unpckhps xmm0, xmm5 */
  guest_unsupported(0xea3f17); /* unpckhps xmm0, xmm5 */
/* ea3f1a: movlps qword ptr [ecx + 0x28], xmm0 */
  guest_unsupported(0xea3f1a); /* movlps qword ptr [ecx + 0x28], xmm0 */
/* ea3f1e: movhps qword ptr [ecx + 0x38], xmm0 */
  guest_unsupported(0xea3f1e); /* movhps qword ptr [ecx + 0x38], xmm0 */
/* ea3f22: mov esp, ebx */
  esp = ebx;
/* ea3f24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3f25: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea3dde(void) {
  LOAD_REGS();
L_ea3dde: /* ea3dde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3ddf: mov ebx, esp */
  ebx = esp;
/* ea3de1: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea3de4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea3de7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3dea: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3ded: movss xmm4, dword ptr [edx] */
  guest_unsupported(0xea3ded); /* movss xmm4, dword ptr [edx] */
/* ea3df1: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea3df1); /* shufps xmm4, xmm4, 0 */
/* ea3df5: movlps xmm3, qword ptr [ecx] */
  guest_unsupported(0xea3df5); /* movlps xmm3, qword ptr [ecx] */
/* ea3df8: movhps xmm3, qword ptr [ecx + 8] */
  guest_unsupported(0xea3df8); /* movhps xmm3, qword ptr [ecx + 8] */
/* ea3dfc: mulps xmm4, xmm3 */
  guest_unsupported(0xea3dfc); /* mulps xmm4, xmm3 */
/* ea3dff: movss xmm5, dword ptr [edx + 4] */
  guest_unsupported(0xea3dff); /* movss xmm5, dword ptr [edx + 4] */
/* ea3e04: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e04); /* shufps xmm5, xmm5, 0 */
/* ea3e08: movlps xmm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea3e08); /* movlps xmm2, qword ptr [ecx + 0x10] */
/* ea3e0c: movhps xmm2, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea3e0c); /* movhps xmm2, qword ptr [ecx + 0x18] */
/* ea3e10: mulps xmm5, xmm2 */
  guest_unsupported(0xea3e10); /* mulps xmm5, xmm2 */
/* ea3e13: addps xmm4, xmm5 */
  guest_unsupported(0xea3e13); /* addps xmm4, xmm5 */
/* ea3e16: movss xmm5, dword ptr [edx + 8] */
  guest_unsupported(0xea3e16); /* movss xmm5, dword ptr [edx + 8] */
/* ea3e1b: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e1b); /* shufps xmm5, xmm5, 0 */
/* ea3e1f: movlps xmm1, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea3e1f); /* movlps xmm1, qword ptr [ecx + 0x20] */
/* ea3e23: movhps xmm1, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea3e23); /* movhps xmm1, qword ptr [ecx + 0x28] */
/* ea3e27: mulps xmm5, xmm1 */
  guest_unsupported(0xea3e27); /* mulps xmm5, xmm1 */
/* ea3e2a: addps xmm4, xmm5 */
  guest_unsupported(0xea3e2a); /* addps xmm4, xmm5 */
/* ea3e2d: movss xmm5, dword ptr [edx + 0xc] */
  guest_unsupported(0xea3e2d); /* movss xmm5, dword ptr [edx + 0xc] */
/* ea3e32: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e32); /* shufps xmm5, xmm5, 0 */
/* ea3e36: movlps xmm0, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea3e36); /* movlps xmm0, qword ptr [ecx + 0x30] */
/* ea3e3a: movhps xmm0, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea3e3a); /* movhps xmm0, qword ptr [ecx + 0x38] */
/* ea3e3e: mulps xmm5, xmm0 */
  guest_unsupported(0xea3e3e); /* mulps xmm5, xmm0 */
/* ea3e41: addps xmm4, xmm5 */
  guest_unsupported(0xea3e41); /* addps xmm4, xmm5 */
/* ea3e44: movss xmm5, dword ptr [edx + 0x10] */
  guest_unsupported(0xea3e44); /* movss xmm5, dword ptr [edx + 0x10] */
/* ea3e49: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e49); /* shufps xmm5, xmm5, 0 */
/* ea3e4d: mulps xmm5, xmm3 */
  guest_unsupported(0xea3e4d); /* mulps xmm5, xmm3 */
/* ea3e50: movss xmm6, dword ptr [edx + 0x14] */
  guest_unsupported(0xea3e50); /* movss xmm6, dword ptr [edx + 0x14] */
/* ea3e55: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e55); /* shufps xmm6, xmm6, 0 */
/* ea3e59: mulps xmm6, xmm2 */
  guest_unsupported(0xea3e59); /* mulps xmm6, xmm2 */
/* ea3e5c: addps xmm5, xmm6 */
  guest_unsupported(0xea3e5c); /* addps xmm5, xmm6 */
/* ea3e5f: movss xmm6, dword ptr [edx + 0x18] */
  guest_unsupported(0xea3e5f); /* movss xmm6, dword ptr [edx + 0x18] */
/* ea3e64: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e64); /* shufps xmm6, xmm6, 0 */
/* ea3e68: mulps xmm6, xmm1 */
  guest_unsupported(0xea3e68); /* mulps xmm6, xmm1 */
/* ea3e6b: addps xmm5, xmm6 */
  guest_unsupported(0xea3e6b); /* addps xmm5, xmm6 */
/* ea3e6e: movss xmm6, dword ptr [edx + 0x1c] */
  guest_unsupported(0xea3e6e); /* movss xmm6, dword ptr [edx + 0x1c] */
/* ea3e73: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e73); /* shufps xmm6, xmm6, 0 */
/* ea3e77: mulps xmm6, xmm0 */
  guest_unsupported(0xea3e77); /* mulps xmm6, xmm0 */
/* ea3e7a: addps xmm5, xmm6 */
  guest_unsupported(0xea3e7a); /* addps xmm5, xmm6 */
/* ea3e7d: movss xmm6, dword ptr [edx + 0x20] */
  guest_unsupported(0xea3e7d); /* movss xmm6, dword ptr [edx + 0x20] */
/* ea3e82: shufps xmm6, xmm6, 0 */
  guest_unsupported(0xea3e82); /* shufps xmm6, xmm6, 0 */
/* ea3e86: movaps xmm7, xmm4 */
  guest_unsupported(0xea3e86); /* movaps xmm7, xmm4 */
/* ea3e89: unpcklps xmm4, xmm5 */
  guest_unsupported(0xea3e89); /* unpcklps xmm4, xmm5 */
/* ea3e8c: mulps xmm6, xmm3 */
  guest_unsupported(0xea3e8c); /* mulps xmm6, xmm3 */
/* ea3e8f: unpckhps xmm7, xmm5 */
  guest_unsupported(0xea3e8f); /* unpckhps xmm7, xmm5 */
/* ea3e92: mov ecx, eax */
  ecx = eax;
/* ea3e94: movss xmm5, dword ptr [edx + 0x24] */
  guest_unsupported(0xea3e94); /* movss xmm5, dword ptr [edx + 0x24] */
/* ea3e99: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3e99); /* shufps xmm5, xmm5, 0 */
/* ea3e9d: mulps xmm5, xmm2 */
  guest_unsupported(0xea3e9d); /* mulps xmm5, xmm2 */
/* ea3ea0: addps xmm6, xmm5 */
  guest_unsupported(0xea3ea0); /* addps xmm6, xmm5 */
/* ea3ea3: movss xmm5, dword ptr [edx + 0x28] */
  guest_unsupported(0xea3ea3); /* movss xmm5, dword ptr [edx + 0x28] */
/* ea3ea8: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3ea8); /* shufps xmm5, xmm5, 0 */
/* ea3eac: mulps xmm5, xmm1 */
  guest_unsupported(0xea3eac); /* mulps xmm5, xmm1 */
/* ea3eaf: addps xmm6, xmm5 */
  guest_unsupported(0xea3eaf); /* addps xmm6, xmm5 */
/* ea3eb2: movss xmm5, dword ptr [edx + 0x2c] */
  guest_unsupported(0xea3eb2); /* movss xmm5, dword ptr [edx + 0x2c] */
/* ea3eb7: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3eb7); /* shufps xmm5, xmm5, 0 */
/* ea3ebb: mulps xmm5, xmm0 */
  guest_unsupported(0xea3ebb); /* mulps xmm5, xmm0 */
/* ea3ebe: addps xmm6, xmm5 */
  guest_unsupported(0xea3ebe); /* addps xmm6, xmm5 */
/* ea3ec1: movss xmm5, dword ptr [edx + 0x30] */
  guest_unsupported(0xea3ec1); /* movss xmm5, dword ptr [edx + 0x30] */
/* ea3ec6: shufps xmm5, xmm5, 0 */
  guest_unsupported(0xea3ec6); /* shufps xmm5, xmm5, 0 */
/* ea3eca: mulps xmm5, xmm3 */
  guest_unsupported(0xea3eca); /* mulps xmm5, xmm3 */
/* ea3ecd: movss xmm3, dword ptr [edx + 0x34] */
  guest_unsupported(0xea3ecd); /* movss xmm3, dword ptr [edx + 0x34] */
/* ea3ed2: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea3ed2); /* shufps xmm3, xmm3, 0 */
/* ea3ed6: mulps xmm3, xmm2 */
  guest_unsupported(0xea3ed6); /* mulps xmm3, xmm2 */
/* ea3ed9: addps xmm5, xmm3 */
  guest_unsupported(0xea3ed9); /* addps xmm5, xmm3 */
/* ea3edc: movss xmm2, dword ptr [edx + 0x38] */
  guest_unsupported(0xea3edc); /* movss xmm2, dword ptr [edx + 0x38] */
/* ea3ee1: shufps xmm2, xmm2, 0 */
  guest_unsupported(0xea3ee1); /* shufps xmm2, xmm2, 0 */
/* ea3ee5: mulps xmm2, xmm1 */
  guest_unsupported(0xea3ee5); /* mulps xmm2, xmm1 */
/* ea3ee8: movss xmm1, dword ptr [edx + 0x3c] */
  guest_unsupported(0xea3ee8); /* movss xmm1, dword ptr [edx + 0x3c] */
/* ea3eed: movlps qword ptr [ecx], xmm4 */
  guest_unsupported(0xea3eed); /* movlps qword ptr [ecx], xmm4 */
/* ea3ef0: addps xmm5, xmm2 */
  guest_unsupported(0xea3ef0); /* addps xmm5, xmm2 */
/* ea3ef3: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea3ef3); /* shufps xmm1, xmm1, 0 */
/* ea3ef7: mulps xmm1, xmm0 */
  guest_unsupported(0xea3ef7); /* mulps xmm1, xmm0 */
/* ea3efa: addps xmm5, xmm1 */
  guest_unsupported(0xea3efa); /* addps xmm5, xmm1 */
/* ea3efd: movhps qword ptr [ecx + 0x10], xmm4 */
  guest_unsupported(0xea3efd); /* movhps qword ptr [ecx + 0x10], xmm4 */
/* ea3f01: movlps qword ptr [ecx + 0x20], xmm7 */
  guest_unsupported(0xea3f01); /* movlps qword ptr [ecx + 0x20], xmm7 */
/* ea3f05: movhps qword ptr [ecx + 0x30], xmm7 */
  guest_unsupported(0xea3f05); /* movhps qword ptr [ecx + 0x30], xmm7 */
/* ea3f09: movaps xmm0, xmm6 */
  guest_unsupported(0xea3f09); /* movaps xmm0, xmm6 */
/* ea3f0c: unpcklps xmm6, xmm5 */
  guest_unsupported(0xea3f0c); /* unpcklps xmm6, xmm5 */
/* ea3f0f: movlps qword ptr [ecx + 8], xmm6 */
  guest_unsupported(0xea3f0f); /* movlps qword ptr [ecx + 8], xmm6 */
/* ea3f13: movhps qword ptr [ecx + 0x18], xmm6 */
  guest_unsupported(0xea3f13); /* movhps qword ptr [ecx + 0x18], xmm6 */
/* ea3f17: unpckhps xmm0, xmm5 */
  guest_unsupported(0xea3f17); /* unpckhps xmm0, xmm5 */
/* ea3f1a: movlps qword ptr [ecx + 0x28], xmm0 */
  guest_unsupported(0xea3f1a); /* movlps qword ptr [ecx + 0x28], xmm0 */
/* ea3f1e: movhps qword ptr [ecx + 0x38], xmm0 */
  guest_unsupported(0xea3f1e); /* movhps qword ptr [ecx + 0x38], xmm0 */
/* ea3f22: mov esp, ebx */
  esp = ebx;
/* ea3f24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3f25: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea3f29(void) {
  LOAD_REGS();
L_ea3f29: /* ea3f29: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea3f30(); return;
}

void f_ea3f30(void) {
  LOAD_REGS();
L_ea3f30: /* ea3f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3f31: mov ebx, esp */
  ebx = esp;
/* ea3f33: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3f36: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3f39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3f3c: jmp 0xea3f41 */
  goto L_ea3f41;
L_ea3f41: /* ea3f41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3f42: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea3f45: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3f48: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea3f4b: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea3f4e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3f51: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea3f51); /* movlps xmm0, qword ptr [edx] */
/* ea3f54: movhps xmm0, qword ptr [edx + 8] */
  guest_unsupported(0xea3f54); /* movhps xmm0, qword ptr [edx + 8] */
/* ea3f58: movlps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea3f58); /* movlps xmm2, qword ptr [ecx] */
/* ea3f5b: movhps xmm2, qword ptr [ecx + 8] */
  guest_unsupported(0xea3f5b); /* movhps xmm2, qword ptr [ecx + 8] */
/* ea3f5f: shufps xmm2, xmm2, 0x39 */
  guest_unsupported(0xea3f5f); /* shufps xmm2, xmm2, 0x39 */
/* ea3f63: movlps xmm1, qword ptr [ebp] */
  guest_unsupported(0xea3f63); /* movlps xmm1, qword ptr [ebp] */
/* ea3f67: movhps xmm1, qword ptr [ebp + 8] */
  guest_unsupported(0xea3f67); /* movhps xmm1, qword ptr [ebp + 8] */
/* ea3f6b: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3f6b); /* shufps xmm1, xmm1, 0x39 */
/* ea3f6f: movaps xmm3, xmm0 */
  guest_unsupported(0xea3f6f); /* movaps xmm3, xmm0 */
/* ea3f72: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea3f72); /* shufps xmm0, xmm0, 0x4e */
/* ea3f76: movaps xmm4, xmm0 */
  guest_unsupported(0xea3f76); /* movaps xmm4, xmm0 */
/* ea3f79: shufps xmm0, xmm0, 0x39 */
  guest_unsupported(0xea3f79); /* shufps xmm0, xmm0, 0x39 */
/* ea3f7d: mulps xmm0, xmm2 */
  guest_unsupported(0xea3f7d); /* mulps xmm0, xmm2 */
/* ea3f80: mulps xmm4, xmm2 */
  guest_unsupported(0xea3f80); /* mulps xmm4, xmm2 */
/* ea3f83: mulps xmm2, xmm3 */
  guest_unsupported(0xea3f83); /* mulps xmm2, xmm3 */
/* ea3f86: movaps xmm3, xmm0 */
  guest_unsupported(0xea3f86); /* movaps xmm3, xmm0 */
/* ea3f89: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea3f89); /* shufps xmm0, xmm0, 0x4e */
/* ea3f8d: subps xmm0, xmm3 */
  guest_unsupported(0xea3f8d); /* subps xmm0, xmm3 */
/* ea3f90: movaps xmm3, xmm1 */
  guest_unsupported(0xea3f90); /* movaps xmm3, xmm1 */
/* ea3f93: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3f93); /* shufps xmm1, xmm1, 0x39 */
/* ea3f97: mulps xmm0, xmm1 */
  guest_unsupported(0xea3f97); /* mulps xmm0, xmm1 */
/* ea3f9a: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3f9a); /* shufps xmm1, xmm1, 0x39 */
/* ea3f9e: movaps xmm5, xmm4 */
  guest_unsupported(0xea3f9e); /* movaps xmm5, xmm4 */
/* ea3fa1: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xea3fa1); /* shufps xmm4, xmm4, 0x39 */
/* ea3fa5: movaps xmm6, xmm2 */
  guest_unsupported(0xea3fa5); /* movaps xmm6, xmm2 */
/* ea3fa8: shufps xmm2, xmm2, 0x4e */
  guest_unsupported(0xea3fa8); /* shufps xmm2, xmm2, 0x4e */
/* ea3fac: subps xmm4, xmm2 */
  guest_unsupported(0xea3fac); /* subps xmm4, xmm2 */
/* ea3faf: mulps xmm3, xmm4 */
  guest_unsupported(0xea3faf); /* mulps xmm3, xmm4 */
/* ea3fb2: addps xmm3, xmm0 */
  guest_unsupported(0xea3fb2); /* addps xmm3, xmm0 */
/* ea3fb5: shufps xmm6, xmm6, 0x39 */
  guest_unsupported(0xea3fb5); /* shufps xmm6, xmm6, 0x39 */
/* ea3fb9: subps xmm5, xmm6 */
  guest_unsupported(0xea3fb9); /* subps xmm5, xmm6 */
/* ea3fbc: mulps xmm1, xmm5 */
  guest_unsupported(0xea3fbc); /* mulps xmm1, xmm5 */
/* ea3fbf: addps xmm3, xmm1 */
  guest_unsupported(0xea3fbf); /* addps xmm3, xmm1 */
/* ea3fc2: xorps xmm3, xmmword ptr [0xebbc00] */
  guest_unsupported(0xea3fc2); /* xorps xmm3, xmmword ptr [0xebbc00] */
/* ea3fc9: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea3fc9); /* movups xmmword ptr [eax], xmm3 */
/* ea3fcc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3fcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea3fd0: mov esp, ebx */
  esp = ebx;
/* ea3fd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3fd3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea3f3e(void) {
  LOAD_REGS();
L_ea3f3e: /* ea3f3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3f3f: mov ebx, esp */
  ebx = esp;
/* ea3f41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3f42: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea3f45: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3f48: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea3f4b: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea3f4e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea3f51: movlps xmm0, qword ptr [edx] */
  guest_unsupported(0xea3f51); /* movlps xmm0, qword ptr [edx] */
/* ea3f54: movhps xmm0, qword ptr [edx + 8] */
  guest_unsupported(0xea3f54); /* movhps xmm0, qword ptr [edx + 8] */
/* ea3f58: movlps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea3f58); /* movlps xmm2, qword ptr [ecx] */
/* ea3f5b: movhps xmm2, qword ptr [ecx + 8] */
  guest_unsupported(0xea3f5b); /* movhps xmm2, qword ptr [ecx + 8] */
/* ea3f5f: shufps xmm2, xmm2, 0x39 */
  guest_unsupported(0xea3f5f); /* shufps xmm2, xmm2, 0x39 */
/* ea3f63: movlps xmm1, qword ptr [ebp] */
  guest_unsupported(0xea3f63); /* movlps xmm1, qword ptr [ebp] */
/* ea3f67: movhps xmm1, qword ptr [ebp + 8] */
  guest_unsupported(0xea3f67); /* movhps xmm1, qword ptr [ebp + 8] */
/* ea3f6b: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3f6b); /* shufps xmm1, xmm1, 0x39 */
/* ea3f6f: movaps xmm3, xmm0 */
  guest_unsupported(0xea3f6f); /* movaps xmm3, xmm0 */
/* ea3f72: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea3f72); /* shufps xmm0, xmm0, 0x4e */
/* ea3f76: movaps xmm4, xmm0 */
  guest_unsupported(0xea3f76); /* movaps xmm4, xmm0 */
/* ea3f79: shufps xmm0, xmm0, 0x39 */
  guest_unsupported(0xea3f79); /* shufps xmm0, xmm0, 0x39 */
/* ea3f7d: mulps xmm0, xmm2 */
  guest_unsupported(0xea3f7d); /* mulps xmm0, xmm2 */
/* ea3f80: mulps xmm4, xmm2 */
  guest_unsupported(0xea3f80); /* mulps xmm4, xmm2 */
/* ea3f83: mulps xmm2, xmm3 */
  guest_unsupported(0xea3f83); /* mulps xmm2, xmm3 */
/* ea3f86: movaps xmm3, xmm0 */
  guest_unsupported(0xea3f86); /* movaps xmm3, xmm0 */
/* ea3f89: shufps xmm0, xmm0, 0x4e */
  guest_unsupported(0xea3f89); /* shufps xmm0, xmm0, 0x4e */
/* ea3f8d: subps xmm0, xmm3 */
  guest_unsupported(0xea3f8d); /* subps xmm0, xmm3 */
/* ea3f90: movaps xmm3, xmm1 */
  guest_unsupported(0xea3f90); /* movaps xmm3, xmm1 */
/* ea3f93: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3f93); /* shufps xmm1, xmm1, 0x39 */
/* ea3f97: mulps xmm0, xmm1 */
  guest_unsupported(0xea3f97); /* mulps xmm0, xmm1 */
/* ea3f9a: shufps xmm1, xmm1, 0x39 */
  guest_unsupported(0xea3f9a); /* shufps xmm1, xmm1, 0x39 */
/* ea3f9e: movaps xmm5, xmm4 */
  guest_unsupported(0xea3f9e); /* movaps xmm5, xmm4 */
/* ea3fa1: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xea3fa1); /* shufps xmm4, xmm4, 0x39 */
/* ea3fa5: movaps xmm6, xmm2 */
  guest_unsupported(0xea3fa5); /* movaps xmm6, xmm2 */
/* ea3fa8: shufps xmm2, xmm2, 0x4e */
  guest_unsupported(0xea3fa8); /* shufps xmm2, xmm2, 0x4e */
/* ea3fac: subps xmm4, xmm2 */
  guest_unsupported(0xea3fac); /* subps xmm4, xmm2 */
/* ea3faf: mulps xmm3, xmm4 */
  guest_unsupported(0xea3faf); /* mulps xmm3, xmm4 */
/* ea3fb2: addps xmm3, xmm0 */
  guest_unsupported(0xea3fb2); /* addps xmm3, xmm0 */
/* ea3fb5: shufps xmm6, xmm6, 0x39 */
  guest_unsupported(0xea3fb5); /* shufps xmm6, xmm6, 0x39 */
/* ea3fb9: subps xmm5, xmm6 */
  guest_unsupported(0xea3fb9); /* subps xmm5, xmm6 */
/* ea3fbc: mulps xmm1, xmm5 */
  guest_unsupported(0xea3fbc); /* mulps xmm1, xmm5 */
/* ea3fbf: addps xmm3, xmm1 */
  guest_unsupported(0xea3fbf); /* addps xmm3, xmm1 */
/* ea3fc2: xorps xmm3, xmmword ptr [0xebbc00] */
  guest_unsupported(0xea3fc2); /* xorps xmm3, xmmword ptr [0xebbc00] */
/* ea3fc9: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea3fc9); /* movups xmmword ptr [eax], xmm3 */
/* ea3fcc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3fcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea3fd0: mov esp, ebx */
  esp = ebx;
/* ea3fd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea3fd3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea3fd6(void) {
  LOAD_REGS();
L_ea3fd6: /* ea3fd6: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea3fd9: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea3fe0(); return;
}

void f_ea3fe0(void) {
  LOAD_REGS();
L_ea3fe0: /* ea3fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3fe1: mov ebx, esp */
  ebx = esp;
/* ea3fe3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3fe6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea3fe9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea3fec: jmp 0xea3ff1 */
  goto L_ea3ff1;
L_ea3ff1: /* ea3ff1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3ff2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3ff3: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* ea3ff6: mov dword ptr [esp + 4], ebp */
  W32((uint32_t)(esp + 0x4u), ebp);
/* ea3ffa: mov ebp, esp */
  ebp = esp;
/* ea3ffc: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3fff: movss xmm0, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea3fff); /* movss xmm0, dword ptr [ebx + 0xc] */
/* ea4004: add esp, -0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea4007: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea4007); /* shufps xmm0, xmm0, 0 */
/* ea400b: call 0xeab350 */
  esp -= 4; W32(esp, 0xea4010u); SPILL(); f_eab350(); if (g_unwind) return; RELOAD();
/* ea4010: movaps xmm1, xmmword ptr [0xebf1d0] */
  guest_unsupported(0xea4010); /* movaps xmm1, xmmword ptr [0xebf1d0] */
/* ea4017: movaps xmm2, xmmword ptr [0xebf1b0] */
  guest_unsupported(0xea4017); /* movaps xmm2, xmmword ptr [0xebf1b0] */
/* ea401e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4021: movaps xmm3, xmm0 */
  guest_unsupported(0xea4021); /* movaps xmm3, xmm0 */
/* ea4024: movaps xmm0, xmmword ptr [0xebf1c0] */
  guest_unsupported(0xea4024); /* movaps xmm0, xmmword ptr [0xebf1c0] */
/* ea402b: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea402b); /* movups xmmword ptr [eax], xmm1 */
/* ea402e: movss dword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea402e); /* movss dword ptr [eax + 0x10], xmm0 */
/* ea4033: movaps xmm1, xmm3 */
  guest_unsupported(0xea4033); /* movaps xmm1, xmm3 */
/* ea4036: movlps qword ptr [eax + 0x14], xmm1 */
  guest_unsupported(0xea4036); /* movlps qword ptr [eax + 0x14], xmm1 */
/* ea403a: shufps xmm1, xmm1, 0x11 */
  guest_unsupported(0xea403a); /* shufps xmm1, xmm1, 0x11 */
/* ea403e: movlps qword ptr [eax + 0x1c], xmm0 */
  guest_unsupported(0xea403e); /* movlps qword ptr [eax + 0x1c], xmm0 */
/* ea4042: xorps xmm1, xmm2 */
  guest_unsupported(0xea4042); /* xorps xmm1, xmm2 */
/* ea4045: movss dword ptr [eax + 0x2c], xmm0 */
  guest_unsupported(0xea4045); /* movss dword ptr [eax + 0x2c], xmm0 */
/* ea404a: movlps qword ptr [eax + 0x24], xmm1 */
  guest_unsupported(0xea404a); /* movlps qword ptr [eax + 0x24], xmm1 */
/* ea404e: movups xmmword ptr [eax + 0x30], xmm0 */
  guest_unsupported(0xea404e); /* movups xmmword ptr [eax + 0x30], xmm0 */
/* ea4052: mov esp, ebp */
  esp = ebp;
/* ea4054: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea4055: mov esp, ebx */
  esp = ebx;
/* ea4057: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea4058: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea3fee(void) {
  LOAD_REGS();
L_ea3fee: /* ea3fee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea3fef: mov ebx, esp */
  ebx = esp;
/* ea3ff1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3ff2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea3ff3: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* ea3ff6: mov dword ptr [esp + 4], ebp */
  W32((uint32_t)(esp + 0x4u), ebp);
/* ea3ffa: mov ebp, esp */
  ebp = esp;
/* ea3ffc: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea3fff: movss xmm0, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea3fff); /* movss xmm0, dword ptr [ebx + 0xc] */
/* ea4004: add esp, -0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea4007: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea4007); /* shufps xmm0, xmm0, 0 */
/* ea400b: call 0xeab350 */
  esp -= 4; W32(esp, 0xea4010u); SPILL(); f_eab350(); if (g_unwind) return; RELOAD();
/* ea4010: movaps xmm1, xmmword ptr [0xebf1d0] */
  guest_unsupported(0xea4010); /* movaps xmm1, xmmword ptr [0xebf1d0] */
/* ea4017: movaps xmm2, xmmword ptr [0xebf1b0] */
  guest_unsupported(0xea4017); /* movaps xmm2, xmmword ptr [0xebf1b0] */
/* ea401e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4021: movaps xmm3, xmm0 */
  guest_unsupported(0xea4021); /* movaps xmm3, xmm0 */
/* ea4024: movaps xmm0, xmmword ptr [0xebf1c0] */
  guest_unsupported(0xea4024); /* movaps xmm0, xmmword ptr [0xebf1c0] */
/* ea402b: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea402b); /* movups xmmword ptr [eax], xmm1 */
/* ea402e: movss dword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea402e); /* movss dword ptr [eax + 0x10], xmm0 */
/* ea4033: movaps xmm1, xmm3 */
  guest_unsupported(0xea4033); /* movaps xmm1, xmm3 */
/* ea4036: movlps qword ptr [eax + 0x14], xmm1 */
  guest_unsupported(0xea4036); /* movlps qword ptr [eax + 0x14], xmm1 */
/* ea403a: shufps xmm1, xmm1, 0x11 */
  guest_unsupported(0xea403a); /* shufps xmm1, xmm1, 0x11 */
/* ea403e: movlps qword ptr [eax + 0x1c], xmm0 */
  guest_unsupported(0xea403e); /* movlps qword ptr [eax + 0x1c], xmm0 */
/* ea4042: xorps xmm1, xmm2 */
  guest_unsupported(0xea4042); /* xorps xmm1, xmm2 */
/* ea4045: movss dword ptr [eax + 0x2c], xmm0 */
  guest_unsupported(0xea4045); /* movss dword ptr [eax + 0x2c], xmm0 */
/* ea404a: movlps qword ptr [eax + 0x24], xmm1 */
  guest_unsupported(0xea404a); /* movlps qword ptr [eax + 0x24], xmm1 */
/* ea404e: movups xmmword ptr [eax + 0x30], xmm0 */
  guest_unsupported(0xea404e); /* movups xmmword ptr [eax + 0x30], xmm0 */
/* ea4052: mov esp, ebp */
  esp = ebp;
/* ea4054: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea4055: mov esp, ebx */
  esp = ebx;
/* ea4057: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea4058: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea405c(void) {
  LOAD_REGS();
L_ea405c: /* ea405c: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea4060(); return;
}

void f_ea4060(void) {
  LOAD_REGS();
L_ea4060: /* ea4060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea4061: mov ebx, esp */
  ebx = esp;
/* ea4063: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4066: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea4069: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea406c: jmp 0xea4071 */
  goto L_ea4071;
L_ea4071: /* ea4071: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea4072: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea4073: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* ea4076: mov dword ptr [esp + 4], ebp */
  W32((uint32_t)(esp + 0x4u), ebp);
/* ea407a: mov ebp, esp */
  ebp = esp;
/* ea407c: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea407f: movss xmm0, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea407f); /* movss xmm0, dword ptr [ebx + 0xc] */
/* ea4084: movaps xmm1, xmmword ptr [0xebf210] */
  guest_unsupported(0xea4084); /* movaps xmm1, xmmword ptr [0xebf210] */
/* ea408b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea408b); /* shufps xmm0, xmm0, 0 */
/* ea408f: movaps xmmword ptr [ebp - 0x20], xmm1 */
  guest_unsupported(0xea408f); /* movaps xmmword ptr [ebp - 0x20], xmm1 */
/* ea4093: movaps xmm1, xmmword ptr [0xebf200] */
  guest_unsupported(0xea4093); /* movaps xmm1, xmmword ptr [0xebf200] */
/* ea409a: add esp, -0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea409d: movaps xmmword ptr [ebp - 0x30], xmm1 */
  guest_unsupported(0xea409d); /* movaps xmmword ptr [ebp - 0x30], xmm1 */
/* ea40a1: call 0xeab350 */
  esp -= 4; W32(esp, 0xea40a6u); SPILL(); f_eab350(); if (g_unwind) return; RELOAD();
/* ea40a6: shufps xmm0, xmm0, 0x50 */
  guest_unsupported(0xea40a6); /* shufps xmm0, xmm0, 0x50 */
/* ea40aa: movaps xmm1, xmmword ptr [ebp - 0x30] */
  guest_unsupported(0xea40aa); /* movaps xmm1, xmmword ptr [ebp - 0x30] */
/* ea40ae: andps xmm0, xmmword ptr [ebp - 0x20] */
  guest_unsupported(0xea40ae); /* andps xmm0, xmmword ptr [ebp - 0x20] */
/* ea40b2: xorps xmm1, xmm0 */
  guest_unsupported(0xea40b2); /* xorps xmm1, xmm0 */
/* ea40b5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea40b8: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea40b8); /* movups xmmword ptr [eax], xmm1 */
/* ea40bb: movaps xmm1, xmmword ptr [0xebf1f0] */
  guest_unsupported(0xea40bb); /* movaps xmm1, xmmword ptr [0xebf1f0] */
/* ea40c2: movups xmmword ptr [eax + 0x10], xmm1 */
  guest_unsupported(0xea40c2); /* movups xmmword ptr [eax + 0x10], xmm1 */
/* ea40c6: movaps xmm1, xmmword ptr [0xebf1e0] */
  guest_unsupported(0xea40c6); /* movaps xmm1, xmmword ptr [0xebf1e0] */
/* ea40cd: shufps xmm0, xmm0, 0x46 */
  guest_unsupported(0xea40cd); /* shufps xmm0, xmm0, 0x46 */
/* ea40d1: movups xmmword ptr [eax + 0x20], xmm0 */
  guest_unsupported(0xea40d1); /* movups xmmword ptr [eax + 0x20], xmm0 */
/* ea40d5: movups xmmword ptr [eax + 0x30], xmm1 */
  guest_unsupported(0xea40d5); /* movups xmmword ptr [eax + 0x30], xmm1 */
/* ea40d9: mov esp, ebp */
  esp = ebp;
/* ea40db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea40dc: mov esp, ebx */
  esp = ebx;
/* ea40de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea40df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea406e(void) {
  LOAD_REGS();
L_ea406e: /* ea406e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea406f: mov ebx, esp */
  ebx = esp;
/* ea4071: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea4072: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea4073: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* ea4076: mov dword ptr [esp + 4], ebp */
  W32((uint32_t)(esp + 0x4u), ebp);
/* ea407a: mov ebp, esp */
  ebp = esp;
/* ea407c: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea407f: movss xmm0, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea407f); /* movss xmm0, dword ptr [ebx + 0xc] */
/* ea4084: movaps xmm1, xmmword ptr [0xebf210] */
  guest_unsupported(0xea4084); /* movaps xmm1, xmmword ptr [0xebf210] */
/* ea408b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea408b); /* shufps xmm0, xmm0, 0 */
/* ea408f: movaps xmmword ptr [ebp - 0x20], xmm1 */
  guest_unsupported(0xea408f); /* movaps xmmword ptr [ebp - 0x20], xmm1 */
/* ea4093: movaps xmm1, xmmword ptr [0xebf200] */
  guest_unsupported(0xea4093); /* movaps xmm1, xmmword ptr [0xebf200] */
/* ea409a: add esp, -0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea409d: movaps xmmword ptr [ebp - 0x30], xmm1 */
  guest_unsupported(0xea409d); /* movaps xmmword ptr [ebp - 0x30], xmm1 */
/* ea40a1: call 0xeab350 */
  esp -= 4; W32(esp, 0xea40a6u); SPILL(); f_eab350(); if (g_unwind) return; RELOAD();
/* ea40a6: shufps xmm0, xmm0, 0x50 */
  guest_unsupported(0xea40a6); /* shufps xmm0, xmm0, 0x50 */
/* ea40aa: movaps xmm1, xmmword ptr [ebp - 0x30] */
  guest_unsupported(0xea40aa); /* movaps xmm1, xmmword ptr [ebp - 0x30] */
/* ea40ae: andps xmm0, xmmword ptr [ebp - 0x20] */
  guest_unsupported(0xea40ae); /* andps xmm0, xmmword ptr [ebp - 0x20] */
/* ea40b2: xorps xmm1, xmm0 */
  guest_unsupported(0xea40b2); /* xorps xmm1, xmm0 */
/* ea40b5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea40b8: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea40b8); /* movups xmmword ptr [eax], xmm1 */
/* ea40bb: movaps xmm1, xmmword ptr [0xebf1f0] */
  guest_unsupported(0xea40bb); /* movaps xmm1, xmmword ptr [0xebf1f0] */
/* ea40c2: movups xmmword ptr [eax + 0x10], xmm1 */
  guest_unsupported(0xea40c2); /* movups xmmword ptr [eax + 0x10], xmm1 */
/* ea40c6: movaps xmm1, xmmword ptr [0xebf1e0] */
  guest_unsupported(0xea40c6); /* movaps xmm1, xmmword ptr [0xebf1e0] */
/* ea40cd: shufps xmm0, xmm0, 0x46 */
  guest_unsupported(0xea40cd); /* shufps xmm0, xmm0, 0x46 */
/* ea40d1: movups xmmword ptr [eax + 0x20], xmm0 */
  guest_unsupported(0xea40d1); /* movups xmmword ptr [eax + 0x20], xmm0 */
/* ea40d5: movups xmmword ptr [eax + 0x30], xmm1 */
  guest_unsupported(0xea40d5); /* movups xmmword ptr [eax + 0x30], xmm1 */
/* ea40d9: mov esp, ebp */
  esp = ebp;
/* ea40db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea40dc: mov esp, ebx */
  esp = ebx;
/* ea40de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea40df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea40e2(void) {
  LOAD_REGS();
L_ea40e2: /* ea40e2: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea40e9: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea40f0(); return;
}

void f_ea40f0(void) {
  LOAD_REGS();
L_ea40f0: /* ea40f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea40f1: mov ebx, esp */
  ebx = esp;
/* ea40f3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea40f6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea40f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea40fc: jmp 0xea4101 */
  goto L_ea4101;
L_ea4101: /* ea4101: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea4102: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea4105: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4108: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea410b: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea410e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4111: movss xmm0, dword ptr [ebp + 8] */
  guest_unsupported(0xea4111); /* movss xmm0, dword ptr [ebp + 8] */
/* ea4116: movss xmm1, dword ptr [edx + 8] */
  guest_unsupported(0xea4116); /* movss xmm1, dword ptr [edx + 8] */
/* ea411b: movhps xmm0, qword ptr [ebp] */
  guest_unsupported(0xea411b); /* movhps xmm0, qword ptr [ebp] */
/* ea411f: movhps xmm1, qword ptr [edx] */
  guest_unsupported(0xea411f); /* movhps xmm1, qword ptr [edx] */
/* ea4122: movss xmm2, dword ptr [ecx + 8] */
  guest_unsupported(0xea4122); /* movss xmm2, dword ptr [ecx + 8] */
/* ea4127: movhps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea4127); /* movhps xmm2, qword ptr [ecx] */
/* ea412a: movaps xmm3, xmm0 */
  guest_unsupported(0xea412a); /* movaps xmm3, xmm0 */
/* ea412d: subps xmm0, xmm1 */
  guest_unsupported(0xea412d); /* subps xmm0, xmm1 */
/* ea4130: movaps xmm1, xmm0 */
  guest_unsupported(0xea4130); /* movaps xmm1, xmm0 */
/* ea4133: shufps xmm0, xmm0, 0x78 */
  guest_unsupported(0xea4133); /* shufps xmm0, xmm0, 0x78 */
/* ea4137: shufps xmm1, xmm1, 0x63 */
  guest_unsupported(0xea4137); /* shufps xmm1, xmm1, 0x63 */
/* ea413b: movaps xmm4, xmm3 */
  guest_unsupported(0xea413b); /* movaps xmm4, xmm3 */
/* ea413e: subps xmm3, xmm2 */
  guest_unsupported(0xea413e); /* subps xmm3, xmm2 */
/* ea4141: movaps xmm2, xmmword ptr [0xebbc20] */
  guest_unsupported(0xea4141); /* movaps xmm2, xmmword ptr [0xebbc20] */
/* ea4148: movaps xmm5, xmm3 */
  guest_unsupported(0xea4148); /* movaps xmm5, xmm3 */
/* ea414b: shufps xmm3, xmm3, 0x63 */
  guest_unsupported(0xea414b); /* shufps xmm3, xmm3, 0x63 */
/* ea414f: shufps xmm5, xmm5, 0x78 */
  guest_unsupported(0xea414f); /* shufps xmm5, xmm5, 0x78 */
/* ea4153: mulps xmm0, xmm3 */
  guest_unsupported(0xea4153); /* mulps xmm0, xmm3 */
/* ea4156: mulps xmm5, xmm1 */
  guest_unsupported(0xea4156); /* mulps xmm5, xmm1 */
/* ea4159: movaps xmm1, xmmword ptr [0xebbc30] */
  guest_unsupported(0xea4159); /* movaps xmm1, xmmword ptr [0xebbc30] */
/* ea4160: subps xmm0, xmm5 */
  guest_unsupported(0xea4160); /* subps xmm0, xmm5 */
/* ea4163: shufps xmm4, xmm4, 0xe */
  guest_unsupported(0xea4163); /* shufps xmm4, xmm4, 0xe */
/* ea4167: movaps xmm3, xmm0 */
  guest_unsupported(0xea4167); /* movaps xmm3, xmm0 */
/* ea416a: mulps xmm0, xmm0 */
  guest_unsupported(0xea416a); /* mulps xmm0, xmm0 */
/* ea416d: movaps xmm5, xmm0 */
  guest_unsupported(0xea416d); /* movaps xmm5, xmm0 */
/* ea4170: movhlps xmm0, xmm0 */
  guest_unsupported(0xea4170); /* movhlps xmm0, xmm0 */
/* ea4173: addps xmm5, xmm0 */
  guest_unsupported(0xea4173); /* addps xmm5, xmm0 */
/* ea4176: movaps xmm0, xmm5 */
  guest_unsupported(0xea4176); /* movaps xmm0, xmm5 */
/* ea4179: shufps xmm5, xmm5, 1 */
  guest_unsupported(0xea4179); /* shufps xmm5, xmm5, 1 */
/* ea417d: addss xmm0, xmm5 */
  guest_unsupported(0xea417d); /* addss xmm0, xmm5 */
/* ea4181: movaps xmm5, xmm0 */
  guest_unsupported(0xea4181); /* movaps xmm5, xmm0 */
/* ea4184: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea4184); /* rsqrtss xmm0, xmm0 */
/* ea4188: mulss xmm1, xmm0 */
  guest_unsupported(0xea4188); /* mulss xmm1, xmm0 */
/* ea418c: movaps xmm6, xmm5 */
  guest_unsupported(0xea418c); /* movaps xmm6, xmm5 */
/* ea418f: mulss xmm5, xmm0 */
  guest_unsupported(0xea418f); /* mulss xmm5, xmm0 */
/* ea4193: mulss xmm5, xmm0 */
  guest_unsupported(0xea4193); /* mulss xmm5, xmm0 */
/* ea4197: subss xmm2, xmm5 */
  guest_unsupported(0xea4197); /* subss xmm2, xmm5 */
/* ea419b: mulss xmm1, xmm2 */
  guest_unsupported(0xea419b); /* mulss xmm1, xmm2 */
/* ea419f: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea419f); /* shufps xmm1, xmm1, 0 */
/* ea41a3: mulps xmm3, xmm1 */
  guest_unsupported(0xea41a3); /* mulps xmm3, xmm1 */
/* ea41a6: mulps xmm4, xmm3 */
  guest_unsupported(0xea41a6); /* mulps xmm4, xmm3 */
/* ea41a9: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea41a9); /* movups xmmword ptr [eax], xmm3 */
/* ea41ac: movhlps xmm6, xmm4 */
  guest_unsupported(0xea41ac); /* movhlps xmm6, xmm4 */
/* ea41af: movaps xmm0, xmm4 */
  guest_unsupported(0xea41af); /* movaps xmm0, xmm4 */
/* ea41b2: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea41b2); /* shufps xmm4, xmm4, 0x55 */
/* ea41b6: addss xmm6, xmm4 */
  guest_unsupported(0xea41b6); /* addss xmm6, xmm4 */
/* ea41ba: addss xmm0, xmm6 */
  guest_unsupported(0xea41ba); /* addss xmm0, xmm6 */
/* ea41be: xorps xmm0, xmmword ptr [0xebbc10] */
  guest_unsupported(0xea41be); /* xorps xmm0, xmmword ptr [0xebbc10] */
/* ea41c5: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea41c5); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea41ca: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea41cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea41ce: mov esp, ebx */
  esp = ebx;
/* ea41d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea41d1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea40fe(void) {
  LOAD_REGS();
L_ea40fe: /* ea40fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea40ff: mov ebx, esp */
  ebx = esp;
/* ea4101: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea4102: mov ebp, dword ptr [ebx + 0xc] */
  ebp = R32((uint32_t)(ebx + 0xcu));
/* ea4105: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4108: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ea410b: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ea410e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4111: movss xmm0, dword ptr [ebp + 8] */
  guest_unsupported(0xea4111); /* movss xmm0, dword ptr [ebp + 8] */
/* ea4116: movss xmm1, dword ptr [edx + 8] */
  guest_unsupported(0xea4116); /* movss xmm1, dword ptr [edx + 8] */
/* ea411b: movhps xmm0, qword ptr [ebp] */
  guest_unsupported(0xea411b); /* movhps xmm0, qword ptr [ebp] */
/* ea411f: movhps xmm1, qword ptr [edx] */
  guest_unsupported(0xea411f); /* movhps xmm1, qword ptr [edx] */
/* ea4122: movss xmm2, dword ptr [ecx + 8] */
  guest_unsupported(0xea4122); /* movss xmm2, dword ptr [ecx + 8] */
/* ea4127: movhps xmm2, qword ptr [ecx] */
  guest_unsupported(0xea4127); /* movhps xmm2, qword ptr [ecx] */
/* ea412a: movaps xmm3, xmm0 */
  guest_unsupported(0xea412a); /* movaps xmm3, xmm0 */
/* ea412d: subps xmm0, xmm1 */
  guest_unsupported(0xea412d); /* subps xmm0, xmm1 */
/* ea4130: movaps xmm1, xmm0 */
  guest_unsupported(0xea4130); /* movaps xmm1, xmm0 */
/* ea4133: shufps xmm0, xmm0, 0x78 */
  guest_unsupported(0xea4133); /* shufps xmm0, xmm0, 0x78 */
/* ea4137: shufps xmm1, xmm1, 0x63 */
  guest_unsupported(0xea4137); /* shufps xmm1, xmm1, 0x63 */
/* ea413b: movaps xmm4, xmm3 */
  guest_unsupported(0xea413b); /* movaps xmm4, xmm3 */
/* ea413e: subps xmm3, xmm2 */
  guest_unsupported(0xea413e); /* subps xmm3, xmm2 */
/* ea4141: movaps xmm2, xmmword ptr [0xebbc20] */
  guest_unsupported(0xea4141); /* movaps xmm2, xmmword ptr [0xebbc20] */
/* ea4148: movaps xmm5, xmm3 */
  guest_unsupported(0xea4148); /* movaps xmm5, xmm3 */
/* ea414b: shufps xmm3, xmm3, 0x63 */
  guest_unsupported(0xea414b); /* shufps xmm3, xmm3, 0x63 */
/* ea414f: shufps xmm5, xmm5, 0x78 */
  guest_unsupported(0xea414f); /* shufps xmm5, xmm5, 0x78 */
/* ea4153: mulps xmm0, xmm3 */
  guest_unsupported(0xea4153); /* mulps xmm0, xmm3 */
/* ea4156: mulps xmm5, xmm1 */
  guest_unsupported(0xea4156); /* mulps xmm5, xmm1 */
/* ea4159: movaps xmm1, xmmword ptr [0xebbc30] */
  guest_unsupported(0xea4159); /* movaps xmm1, xmmword ptr [0xebbc30] */
/* ea4160: subps xmm0, xmm5 */
  guest_unsupported(0xea4160); /* subps xmm0, xmm5 */
/* ea4163: shufps xmm4, xmm4, 0xe */
  guest_unsupported(0xea4163); /* shufps xmm4, xmm4, 0xe */
/* ea4167: movaps xmm3, xmm0 */
  guest_unsupported(0xea4167); /* movaps xmm3, xmm0 */
/* ea416a: mulps xmm0, xmm0 */
  guest_unsupported(0xea416a); /* mulps xmm0, xmm0 */
/* ea416d: movaps xmm5, xmm0 */
  guest_unsupported(0xea416d); /* movaps xmm5, xmm0 */
/* ea4170: movhlps xmm0, xmm0 */
  guest_unsupported(0xea4170); /* movhlps xmm0, xmm0 */
/* ea4173: addps xmm5, xmm0 */
  guest_unsupported(0xea4173); /* addps xmm5, xmm0 */
/* ea4176: movaps xmm0, xmm5 */
  guest_unsupported(0xea4176); /* movaps xmm0, xmm5 */
/* ea4179: shufps xmm5, xmm5, 1 */
  guest_unsupported(0xea4179); /* shufps xmm5, xmm5, 1 */
/* ea417d: addss xmm0, xmm5 */
  guest_unsupported(0xea417d); /* addss xmm0, xmm5 */
/* ea4181: movaps xmm5, xmm0 */
  guest_unsupported(0xea4181); /* movaps xmm5, xmm0 */
/* ea4184: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea4184); /* rsqrtss xmm0, xmm0 */
/* ea4188: mulss xmm1, xmm0 */
  guest_unsupported(0xea4188); /* mulss xmm1, xmm0 */
/* ea418c: movaps xmm6, xmm5 */
  guest_unsupported(0xea418c); /* movaps xmm6, xmm5 */
/* ea418f: mulss xmm5, xmm0 */
  guest_unsupported(0xea418f); /* mulss xmm5, xmm0 */
/* ea4193: mulss xmm5, xmm0 */
  guest_unsupported(0xea4193); /* mulss xmm5, xmm0 */
/* ea4197: subss xmm2, xmm5 */
  guest_unsupported(0xea4197); /* subss xmm2, xmm5 */
/* ea419b: mulss xmm1, xmm2 */
  guest_unsupported(0xea419b); /* mulss xmm1, xmm2 */
/* ea419f: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea419f); /* shufps xmm1, xmm1, 0 */
/* ea41a3: mulps xmm3, xmm1 */
  guest_unsupported(0xea41a3); /* mulps xmm3, xmm1 */
/* ea41a6: mulps xmm4, xmm3 */
  guest_unsupported(0xea41a6); /* mulps xmm4, xmm3 */
/* ea41a9: movups xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea41a9); /* movups xmmword ptr [eax], xmm3 */
/* ea41ac: movhlps xmm6, xmm4 */
  guest_unsupported(0xea41ac); /* movhlps xmm6, xmm4 */
/* ea41af: movaps xmm0, xmm4 */
  guest_unsupported(0xea41af); /* movaps xmm0, xmm4 */
/* ea41b2: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea41b2); /* shufps xmm4, xmm4, 0x55 */
/* ea41b6: addss xmm6, xmm4 */
  guest_unsupported(0xea41b6); /* addss xmm6, xmm4 */
/* ea41ba: addss xmm0, xmm6 */
  guest_unsupported(0xea41ba); /* addss xmm0, xmm6 */
/* ea41be: xorps xmm0, xmmword ptr [0xebbc10] */
  guest_unsupported(0xea41be); /* xorps xmm0, xmmword ptr [0xebbc10] */
/* ea41c5: movss dword ptr [eax + 0xc], xmm0 */
  guest_unsupported(0xea41c5); /* movss dword ptr [eax + 0xc], xmm0 */
/* ea41ca: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea41cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea41ce: mov esp, ebx */
  esp = ebx;
/* ea41d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea41d1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea41d4(void) {
  LOAD_REGS();
L_ea41d4: /* ea41d4: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea41da: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea41e0(); return;
}

void f_ea41e0(void) {
  LOAD_REGS();
L_ea41e0: /* ea41e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea41e1: mov ebx, esp */
  ebx = esp;
/* ea41e3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea41e6: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea41e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea41ec: jmp 0xea41f1 */
  goto L_ea41f1;
L_ea41f1: /* ea41f1: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea41f4: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea41f7: movups xmm2, xmmword ptr [eax] */
  guest_unsupported(0xea41f7); /* movups xmm2, xmmword ptr [eax] */
/* ea41fa: movaps xmm3, xmmword ptr [0xebbc80] */
  guest_unsupported(0xea41fa); /* movaps xmm3, xmmword ptr [0xebbc80] */
/* ea4201: xorps xmm0, xmm0 */
  guest_unsupported(0xea4201); /* xorps xmm0, xmm0 */
/* ea4204: andps xmm3, xmm2 */
  guest_unsupported(0xea4204); /* andps xmm3, xmm2 */
/* ea4207: xorps xmm1, xmm1 */
  guest_unsupported(0xea4207); /* xorps xmm1, xmm1 */
/* ea420a: mulps xmm3, xmm3 */
  guest_unsupported(0xea420a); /* mulps xmm3, xmm3 */
/* ea420d: mov edx, 1 */
  edx = 0x1u;
/* ea4212: xor ecx, ecx */
  ecx = 0;
  zf = 1;
/* ea4214: movhlps xmm0, xmm3 */
  guest_unsupported(0xea4214); /* movhlps xmm0, xmm3 */
/* ea4217: movaps xmm4, xmm1 */
  guest_unsupported(0xea4217); /* movaps xmm4, xmm1 */
/* ea421a: movaps xmm1, xmm3 */
  guest_unsupported(0xea421a); /* movaps xmm1, xmm3 */
/* ea421d: addps xmm1, xmm0 */
  guest_unsupported(0xea421d); /* addps xmm1, xmm0 */
/* ea4220: movaps xmm0, xmm1 */
  guest_unsupported(0xea4220); /* movaps xmm0, xmm1 */
/* ea4223: shufps xmm0, xmm0, 1 */
  guest_unsupported(0xea4223); /* shufps xmm0, xmm0, 1 */
/* ea4227: addss xmm0, xmm1 */
  guest_unsupported(0xea4227); /* addss xmm0, xmm1 */
/* ea422b: comiss xmm0, xmm4 */
  guest_unsupported(0xea422b); /* comiss xmm0, xmm4 */
/* ea422e: cmove ecx, edx */
  if (zf) { ecx = edx; }
/* ea4231: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea4234: je 0xea42a6 */
  if (zf) goto L_ea42a6;
L_ea4236: /* ea4236: mov al, byte ptr [0xebef40] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xebef40u))) & 0xffu);
/* ea423b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea423d: je 0xea4248 */
  if (zf) goto L_ea4248;
L_ea423f: /* ea423f: movaps xmm4, xmmword ptr [0xebef20] */
  guest_unsupported(0xea423f); /* movaps xmm4, xmmword ptr [0xebef20] */
/* ea4246: jmp 0xea425e */
  goto L_ea425e;
L_ea4248: /* ea4248: or al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea424a: movss xmm4, dword ptr [0xebf220] */
  guest_unsupported(0xea424a); /* movss xmm4, dword ptr [0xebf220] */
/* ea4252: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea4257: movaps xmmword ptr [0xebef20], xmm4 */
  guest_unsupported(0xea4257); /* movaps xmmword ptr [0xebef20], xmm4 */
L_ea425e: /* ea425e: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea4260: je 0xea426b */
  if (zf) goto L_ea426b;
L_ea4262: /* ea4262: movaps xmm3, xmmword ptr [0xebef30] */
  guest_unsupported(0xea4262); /* movaps xmm3, xmmword ptr [0xebef30] */
/* ea4269: jmp 0xea4281 */
  goto L_ea4281;
L_ea426b: /* ea426b: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea426d: movss xmm3, dword ptr [0xebf224] */
  guest_unsupported(0xea426d); /* movss xmm3, dword ptr [0xebf224] */
/* ea4275: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea427a: movaps xmmword ptr [0xebef30], xmm3 */
  guest_unsupported(0xea427a); /* movaps xmmword ptr [0xebef30], xmm3 */
L_ea4281: /* ea4281: movaps xmm5, xmm0 */
  guest_unsupported(0xea4281); /* movaps xmm5, xmm0 */
/* ea4284: rsqrtss xmm5, xmm5 */
  guest_unsupported(0xea4284); /* rsqrtss xmm5, xmm5 */
/* ea4288: mulss xmm0, xmm5 */
  guest_unsupported(0xea4288); /* mulss xmm0, xmm5 */
/* ea428c: mulss xmm4, xmm5 */
  guest_unsupported(0xea428c); /* mulss xmm4, xmm5 */
/* ea4290: mulss xmm0, xmm5 */
  guest_unsupported(0xea4290); /* mulss xmm0, xmm5 */
/* ea4294: subss xmm3, xmm0 */
  guest_unsupported(0xea4294); /* subss xmm3, xmm0 */
/* ea4298: mulss xmm4, xmm3 */
  guest_unsupported(0xea4298); /* mulss xmm4, xmm3 */
/* ea429c: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea429c); /* shufps xmm4, xmm4, 0 */
/* ea42a0: movaps xmm0, xmm2 */
  guest_unsupported(0xea42a0); /* movaps xmm0, xmm2 */
/* ea42a3: mulps xmm0, xmm4 */
  guest_unsupported(0xea42a3); /* mulps xmm0, xmm4 */
L_ea42a6: /* ea42a6: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea42a9: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea42ac: movups xmm2, xmmword ptr [edx] */
  guest_unsupported(0xea42ac); /* movups xmm2, xmmword ptr [edx] */
/* ea42af: movaps xmm3, xmmword ptr [0xebbc50] */
  guest_unsupported(0xea42af); /* movaps xmm3, xmmword ptr [0xebbc50] */
/* ea42b6: movaps xmm4, xmmword ptr [0xebbc40] */
  guest_unsupported(0xea42b6); /* movaps xmm4, xmmword ptr [0xebbc40] */
/* ea42bd: xorps xmm4, xmm0 */
  guest_unsupported(0xea42bd); /* xorps xmm4, xmm0 */
/* ea42c0: mulps xmm0, xmm2 */
  guest_unsupported(0xea42c0); /* mulps xmm0, xmm2 */
/* ea42c3: movaps xmm5, xmmword ptr [0xebbc60] */
  guest_unsupported(0xea42c3); /* movaps xmm5, xmmword ptr [0xebbc60] */
/* ea42ca: movhlps xmm1, xmm0 */
  guest_unsupported(0xea42ca); /* movhlps xmm1, xmm0 */
/* ea42cd: movaps xmm6, xmmword ptr [0xebbc70] */
  guest_unsupported(0xea42cd); /* movaps xmm6, xmmword ptr [0xebbc70] */
/* ea42d4: addps xmm0, xmm1 */
  guest_unsupported(0xea42d4); /* addps xmm0, xmm1 */
/* ea42d7: movaps xmm1, xmm0 */
  guest_unsupported(0xea42d7); /* movaps xmm1, xmm0 */
/* ea42da: shufps xmm1, xmm1, 1 */
  guest_unsupported(0xea42da); /* shufps xmm1, xmm1, 1 */
/* ea42de: addss xmm0, xmm1 */
  guest_unsupported(0xea42de); /* addss xmm0, xmm1 */
/* ea42e2: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea42e2); /* shufps xmm0, xmm0, 0 */
/* ea42e6: andps xmm3, xmm0 */
  guest_unsupported(0xea42e6); /* andps xmm3, xmm0 */
/* ea42e9: andps xmm5, xmm0 */
  guest_unsupported(0xea42e9); /* andps xmm5, xmm0 */
/* ea42ec: andps xmm6, xmm0 */
  guest_unsupported(0xea42ec); /* andps xmm6, xmm0 */
/* ea42ef: movaps xmm1, xmm4 */
  guest_unsupported(0xea42ef); /* movaps xmm1, xmm4 */
/* ea42f2: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea42f2); /* shufps xmm4, xmm4, 0x55 */
/* ea42f6: mulps xmm4, xmm2 */
  guest_unsupported(0xea42f6); /* mulps xmm4, xmm2 */
/* ea42f9: movaps xmm7, xmm0 */
  guest_unsupported(0xea42f9); /* movaps xmm7, xmm0 */
/* ea42fc: movaps xmm0, xmm4 */
  guest_unsupported(0xea42fc); /* movaps xmm0, xmm4 */
/* ea42ff: addps xmm0, xmm3 */
  guest_unsupported(0xea42ff); /* addps xmm0, xmm3 */
/* ea4302: movaps xmm3, xmm1 */
  guest_unsupported(0xea4302); /* movaps xmm3, xmm1 */
/* ea4305: shufps xmm3, xmm3, 0xaa */
  guest_unsupported(0xea4305); /* shufps xmm3, xmm3, 0xaa */
/* ea4309: mulps xmm3, xmm2 */
  guest_unsupported(0xea4309); /* mulps xmm3, xmm2 */
/* ea430c: movaps xmm4, xmm1 */
  guest_unsupported(0xea430c); /* movaps xmm4, xmm1 */
/* ea430f: movaps xmm1, xmm3 */
  guest_unsupported(0xea430f); /* movaps xmm1, xmm3 */
/* ea4312: addps xmm1, xmm5 */
  guest_unsupported(0xea4312); /* addps xmm1, xmm5 */
/* ea4315: movaps xmm3, xmm4 */
  guest_unsupported(0xea4315); /* movaps xmm3, xmm4 */
/* ea4318: shufps xmm4, xmm4, 0xff */
  guest_unsupported(0xea4318); /* shufps xmm4, xmm4, 0xff */
/* ea431c: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea431c); /* shufps xmm3, xmm3, 0 */
/* ea4320: mulps xmm4, xmm2 */
  guest_unsupported(0xea4320); /* mulps xmm4, xmm2 */
/* ea4323: mulps xmm3, xmm2 */
  guest_unsupported(0xea4323); /* mulps xmm3, xmm2 */
/* ea4326: movaps xmm2, xmm4 */
  guest_unsupported(0xea4326); /* movaps xmm2, xmm4 */
/* ea4329: addps xmm2, xmm6 */
  guest_unsupported(0xea4329); /* addps xmm2, xmm6 */
/* ea432c: addss xmm3, xmm7 */
  guest_unsupported(0xea432c); /* addss xmm3, xmm7 */
/* ea4330: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea4332: jne 0xea4345 */
  if (!zf) goto L_ea4345;
L_ea4334: /* ea4334: movaps xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea4334); /* movaps xmmword ptr [eax], xmm3 */
/* ea4337: movaps xmmword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea4337); /* movaps xmmword ptr [eax + 0x10], xmm0 */
/* ea433b: movaps xmmword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea433b); /* movaps xmmword ptr [eax + 0x20], xmm1 */
/* ea433f: movaps xmmword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea433f); /* movaps xmmword ptr [eax + 0x30], xmm2 */
/* ea4343: jmp 0xea4364 */
  goto L_ea4364;
L_ea4345: /* ea4345: movlps qword ptr [eax], xmm3 */
  guest_unsupported(0xea4345); /* movlps qword ptr [eax], xmm3 */
/* ea4348: movhps qword ptr [eax + 8], xmm3 */
  guest_unsupported(0xea4348); /* movhps qword ptr [eax + 8], xmm3 */
/* ea434c: movlps qword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea434c); /* movlps qword ptr [eax + 0x10], xmm0 */
/* ea4350: movhps qword ptr [eax + 0x18], xmm0 */
  guest_unsupported(0xea4350); /* movhps qword ptr [eax + 0x18], xmm0 */
/* ea4354: movlps qword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea4354); /* movlps qword ptr [eax + 0x20], xmm1 */
/* ea4358: movhps qword ptr [eax + 0x28], xmm1 */
  guest_unsupported(0xea4358); /* movhps qword ptr [eax + 0x28], xmm1 */
/* ea435c: movlps qword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea435c); /* movlps qword ptr [eax + 0x30], xmm2 */
/* ea4360: movhps qword ptr [eax + 0x38], xmm2 */
  guest_unsupported(0xea4360); /* movhps qword ptr [eax + 0x38], xmm2 */
L_ea4364: /* ea4364: mov esp, ebx */
  esp = ebx;
/* ea4366: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea4367: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea41ee(void) {
  LOAD_REGS();
L_ea41ee: /* ea41ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea41ef: mov ebx, esp */
  ebx = esp;
/* ea41f1: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ea41f4: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea41f7: movups xmm2, xmmword ptr [eax] */
  guest_unsupported(0xea41f7); /* movups xmm2, xmmword ptr [eax] */
/* ea41fa: movaps xmm3, xmmword ptr [0xebbc80] */
  guest_unsupported(0xea41fa); /* movaps xmm3, xmmword ptr [0xebbc80] */
/* ea4201: xorps xmm0, xmm0 */
  guest_unsupported(0xea4201); /* xorps xmm0, xmm0 */
/* ea4204: andps xmm3, xmm2 */
  guest_unsupported(0xea4204); /* andps xmm3, xmm2 */
/* ea4207: xorps xmm1, xmm1 */
  guest_unsupported(0xea4207); /* xorps xmm1, xmm1 */
/* ea420a: mulps xmm3, xmm3 */
  guest_unsupported(0xea420a); /* mulps xmm3, xmm3 */
/* ea420d: mov edx, 1 */
  edx = 0x1u;
/* ea4212: xor ecx, ecx */
  ecx = 0;
  zf = 1;
/* ea4214: movhlps xmm0, xmm3 */
  guest_unsupported(0xea4214); /* movhlps xmm0, xmm3 */
/* ea4217: movaps xmm4, xmm1 */
  guest_unsupported(0xea4217); /* movaps xmm4, xmm1 */
/* ea421a: movaps xmm1, xmm3 */
  guest_unsupported(0xea421a); /* movaps xmm1, xmm3 */
/* ea421d: addps xmm1, xmm0 */
  guest_unsupported(0xea421d); /* addps xmm1, xmm0 */
/* ea4220: movaps xmm0, xmm1 */
  guest_unsupported(0xea4220); /* movaps xmm0, xmm1 */
/* ea4223: shufps xmm0, xmm0, 1 */
  guest_unsupported(0xea4223); /* shufps xmm0, xmm0, 1 */
/* ea4227: addss xmm0, xmm1 */
  guest_unsupported(0xea4227); /* addss xmm0, xmm1 */
/* ea422b: comiss xmm0, xmm4 */
  guest_unsupported(0xea422b); /* comiss xmm0, xmm4 */
/* ea422e: cmove ecx, edx */
  if (zf) { ecx = edx; }
/* ea4231: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea4234: je 0xea42a6 */
  if (zf) goto L_ea42a6;
L_ea4236: /* ea4236: mov al, byte ptr [0xebef40] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xebef40u))) & 0xffu);
/* ea423b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea423d: je 0xea4248 */
  if (zf) goto L_ea4248;
L_ea423f: /* ea423f: movaps xmm4, xmmword ptr [0xebef20] */
  guest_unsupported(0xea423f); /* movaps xmm4, xmmword ptr [0xebef20] */
/* ea4246: jmp 0xea425e */
  goto L_ea425e;
L_ea4248: /* ea4248: or al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea424a: movss xmm4, dword ptr [0xebf220] */
  guest_unsupported(0xea424a); /* movss xmm4, dword ptr [0xebf220] */
/* ea4252: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea4257: movaps xmmword ptr [0xebef20], xmm4 */
  guest_unsupported(0xea4257); /* movaps xmmword ptr [0xebef20], xmm4 */
L_ea425e: /* ea425e: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea4260: je 0xea426b */
  if (zf) goto L_ea426b;
L_ea4262: /* ea4262: movaps xmm3, xmmword ptr [0xebef30] */
  guest_unsupported(0xea4262); /* movaps xmm3, xmmword ptr [0xebef30] */
/* ea4269: jmp 0xea4281 */
  goto L_ea4281;
L_ea426b: /* ea426b: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* ea426d: movss xmm3, dword ptr [0xebf224] */
  guest_unsupported(0xea426d); /* movss xmm3, dword ptr [0xebf224] */
/* ea4275: mov byte ptr [0xebef40], al */
  W8((uint32_t)(0xebef40u), (eax & 0xffu));
/* ea427a: movaps xmmword ptr [0xebef30], xmm3 */
  guest_unsupported(0xea427a); /* movaps xmmword ptr [0xebef30], xmm3 */
L_ea4281: /* ea4281: movaps xmm5, xmm0 */
  guest_unsupported(0xea4281); /* movaps xmm5, xmm0 */
/* ea4284: rsqrtss xmm5, xmm5 */
  guest_unsupported(0xea4284); /* rsqrtss xmm5, xmm5 */
/* ea4288: mulss xmm0, xmm5 */
  guest_unsupported(0xea4288); /* mulss xmm0, xmm5 */
/* ea428c: mulss xmm4, xmm5 */
  guest_unsupported(0xea428c); /* mulss xmm4, xmm5 */
/* ea4290: mulss xmm0, xmm5 */
  guest_unsupported(0xea4290); /* mulss xmm0, xmm5 */
/* ea4294: subss xmm3, xmm0 */
  guest_unsupported(0xea4294); /* subss xmm3, xmm0 */
/* ea4298: mulss xmm4, xmm3 */
  guest_unsupported(0xea4298); /* mulss xmm4, xmm3 */
/* ea429c: shufps xmm4, xmm4, 0 */
  guest_unsupported(0xea429c); /* shufps xmm4, xmm4, 0 */
/* ea42a0: movaps xmm0, xmm2 */
  guest_unsupported(0xea42a0); /* movaps xmm0, xmm2 */
/* ea42a3: mulps xmm0, xmm4 */
  guest_unsupported(0xea42a3); /* mulps xmm0, xmm4 */
L_ea42a6: /* ea42a6: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea42a9: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea42ac: movups xmm2, xmmword ptr [edx] */
  guest_unsupported(0xea42ac); /* movups xmm2, xmmword ptr [edx] */
/* ea42af: movaps xmm3, xmmword ptr [0xebbc50] */
  guest_unsupported(0xea42af); /* movaps xmm3, xmmword ptr [0xebbc50] */
/* ea42b6: movaps xmm4, xmmword ptr [0xebbc40] */
  guest_unsupported(0xea42b6); /* movaps xmm4, xmmword ptr [0xebbc40] */
/* ea42bd: xorps xmm4, xmm0 */
  guest_unsupported(0xea42bd); /* xorps xmm4, xmm0 */
/* ea42c0: mulps xmm0, xmm2 */
  guest_unsupported(0xea42c0); /* mulps xmm0, xmm2 */
/* ea42c3: movaps xmm5, xmmword ptr [0xebbc60] */
  guest_unsupported(0xea42c3); /* movaps xmm5, xmmword ptr [0xebbc60] */
/* ea42ca: movhlps xmm1, xmm0 */
  guest_unsupported(0xea42ca); /* movhlps xmm1, xmm0 */
/* ea42cd: movaps xmm6, xmmword ptr [0xebbc70] */
  guest_unsupported(0xea42cd); /* movaps xmm6, xmmword ptr [0xebbc70] */
/* ea42d4: addps xmm0, xmm1 */
  guest_unsupported(0xea42d4); /* addps xmm0, xmm1 */
/* ea42d7: movaps xmm1, xmm0 */
  guest_unsupported(0xea42d7); /* movaps xmm1, xmm0 */
/* ea42da: shufps xmm1, xmm1, 1 */
  guest_unsupported(0xea42da); /* shufps xmm1, xmm1, 1 */
/* ea42de: addss xmm0, xmm1 */
  guest_unsupported(0xea42de); /* addss xmm0, xmm1 */
/* ea42e2: shufps xmm0, xmm0, 0 */
  guest_unsupported(0xea42e2); /* shufps xmm0, xmm0, 0 */
/* ea42e6: andps xmm3, xmm0 */
  guest_unsupported(0xea42e6); /* andps xmm3, xmm0 */
/* ea42e9: andps xmm5, xmm0 */
  guest_unsupported(0xea42e9); /* andps xmm5, xmm0 */
/* ea42ec: andps xmm6, xmm0 */
  guest_unsupported(0xea42ec); /* andps xmm6, xmm0 */
/* ea42ef: movaps xmm1, xmm4 */
  guest_unsupported(0xea42ef); /* movaps xmm1, xmm4 */
/* ea42f2: shufps xmm4, xmm4, 0x55 */
  guest_unsupported(0xea42f2); /* shufps xmm4, xmm4, 0x55 */
/* ea42f6: mulps xmm4, xmm2 */
  guest_unsupported(0xea42f6); /* mulps xmm4, xmm2 */
/* ea42f9: movaps xmm7, xmm0 */
  guest_unsupported(0xea42f9); /* movaps xmm7, xmm0 */
/* ea42fc: movaps xmm0, xmm4 */
  guest_unsupported(0xea42fc); /* movaps xmm0, xmm4 */
/* ea42ff: addps xmm0, xmm3 */
  guest_unsupported(0xea42ff); /* addps xmm0, xmm3 */
/* ea4302: movaps xmm3, xmm1 */
  guest_unsupported(0xea4302); /* movaps xmm3, xmm1 */
/* ea4305: shufps xmm3, xmm3, 0xaa */
  guest_unsupported(0xea4305); /* shufps xmm3, xmm3, 0xaa */
/* ea4309: mulps xmm3, xmm2 */
  guest_unsupported(0xea4309); /* mulps xmm3, xmm2 */
/* ea430c: movaps xmm4, xmm1 */
  guest_unsupported(0xea430c); /* movaps xmm4, xmm1 */
/* ea430f: movaps xmm1, xmm3 */
  guest_unsupported(0xea430f); /* movaps xmm1, xmm3 */
/* ea4312: addps xmm1, xmm5 */
  guest_unsupported(0xea4312); /* addps xmm1, xmm5 */
/* ea4315: movaps xmm3, xmm4 */
  guest_unsupported(0xea4315); /* movaps xmm3, xmm4 */
/* ea4318: shufps xmm4, xmm4, 0xff */
  guest_unsupported(0xea4318); /* shufps xmm4, xmm4, 0xff */
/* ea431c: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea431c); /* shufps xmm3, xmm3, 0 */
/* ea4320: mulps xmm4, xmm2 */
  guest_unsupported(0xea4320); /* mulps xmm4, xmm2 */
/* ea4323: mulps xmm3, xmm2 */
  guest_unsupported(0xea4323); /* mulps xmm3, xmm2 */
/* ea4326: movaps xmm2, xmm4 */
  guest_unsupported(0xea4326); /* movaps xmm2, xmm4 */
/* ea4329: addps xmm2, xmm6 */
  guest_unsupported(0xea4329); /* addps xmm2, xmm6 */
/* ea432c: addss xmm3, xmm7 */
  guest_unsupported(0xea432c); /* addss xmm3, xmm7 */
/* ea4330: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea4332: jne 0xea4345 */
  if (!zf) goto L_ea4345;
L_ea4334: /* ea4334: movaps xmmword ptr [eax], xmm3 */
  guest_unsupported(0xea4334); /* movaps xmmword ptr [eax], xmm3 */
/* ea4337: movaps xmmword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea4337); /* movaps xmmword ptr [eax + 0x10], xmm0 */
/* ea433b: movaps xmmword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea433b); /* movaps xmmword ptr [eax + 0x20], xmm1 */
/* ea433f: movaps xmmword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea433f); /* movaps xmmword ptr [eax + 0x30], xmm2 */
/* ea4343: jmp 0xea4364 */
  goto L_ea4364;
L_ea4345: /* ea4345: movlps qword ptr [eax], xmm3 */
  guest_unsupported(0xea4345); /* movlps qword ptr [eax], xmm3 */
/* ea4348: movhps qword ptr [eax + 8], xmm3 */
  guest_unsupported(0xea4348); /* movhps qword ptr [eax + 8], xmm3 */
/* ea434c: movlps qword ptr [eax + 0x10], xmm0 */
  guest_unsupported(0xea434c); /* movlps qword ptr [eax + 0x10], xmm0 */
/* ea4350: movhps qword ptr [eax + 0x18], xmm0 */
  guest_unsupported(0xea4350); /* movhps qword ptr [eax + 0x18], xmm0 */
/* ea4354: movlps qword ptr [eax + 0x20], xmm1 */
  guest_unsupported(0xea4354); /* movlps qword ptr [eax + 0x20], xmm1 */
/* ea4358: movhps qword ptr [eax + 0x28], xmm1 */
  guest_unsupported(0xea4358); /* movhps qword ptr [eax + 0x28], xmm1 */
/* ea435c: movlps qword ptr [eax + 0x30], xmm2 */
  guest_unsupported(0xea435c); /* movlps qword ptr [eax + 0x30], xmm2 */
/* ea4360: movhps qword ptr [eax + 0x38], xmm2 */
  guest_unsupported(0xea4360); /* movhps qword ptr [eax + 0x38], xmm2 */
L_ea4364: /* ea4364: mov esp, ebx */
  esp = ebx;
/* ea4366: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea4367: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea436a(void) {
  LOAD_REGS();
L_ea436a: /* ea436a: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_ea4370(); return;
}

void f_ea4370(void) {
  LOAD_REGS();
L_ea4370: /* ea4370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea4371: mov ebx, esp */
  ebx = esp;
/* ea4373: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4376: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea4379: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea437c: jmp 0xea4381 */
  goto L_ea4381;
L_ea4381: /* ea4381: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea4384: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4387: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea438a: movhps xmm1, qword ptr [edx + 8] */
  guest_unsupported(0xea438a); /* movhps xmm1, qword ptr [edx + 8] */
/* ea438e: movlps xmm1, qword ptr [edx] */
  guest_unsupported(0xea438e); /* movlps xmm1, qword ptr [edx] */
/* ea4391: movaps xmm0, xmmword ptr [0xebbd00] */
  guest_unsupported(0xea4391); /* movaps xmm0, xmmword ptr [0xebbd00] */
/* ea4398: andps xmm0, xmm1 */
  guest_unsupported(0xea4398); /* andps xmm0, xmm1 */
/* ea439b: mulps xmm0, xmm0 */
  guest_unsupported(0xea439b); /* mulps xmm0, xmm0 */
/* ea439e: movss xmm2, dword ptr [0xebbce0] */
  guest_unsupported(0xea439e); /* movss xmm2, dword ptr [0xebbce0] */
/* ea43a6: movss xmm3, dword ptr [0xebbcf0] */
  guest_unsupported(0xea43a6); /* movss xmm3, dword ptr [0xebbcf0] */
/* ea43ae: movaps xmm4, xmm0 */
  guest_unsupported(0xea43ae); /* movaps xmm4, xmm0 */
/* ea43b1: movhlps xmm0, xmm0 */
  guest_unsupported(0xea43b1); /* movhlps xmm0, xmm0 */
/* ea43b4: addps xmm4, xmm0 */
  guest_unsupported(0xea43b4); /* addps xmm4, xmm0 */
/* ea43b7: movaps xmm0, xmm4 */
  guest_unsupported(0xea43b7); /* movaps xmm0, xmm4 */
/* ea43ba: shufps xmm4, xmm4, 1 */
  guest_unsupported(0xea43ba); /* shufps xmm4, xmm4, 1 */
/* ea43be: addss xmm0, xmm4 */
  guest_unsupported(0xea43be); /* addss xmm0, xmm4 */
/* ea43c2: movaps xmm4, xmmword ptr [0xebbcd0] */
  guest_unsupported(0xea43c2); /* movaps xmm4, xmmword ptr [0xebbcd0] */
/* ea43c9: movaps xmm5, xmm0 */
  guest_unsupported(0xea43c9); /* movaps xmm5, xmm0 */
/* ea43cc: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea43cc); /* rsqrtss xmm0, xmm0 */
/* ea43d0: mulss xmm5, xmm0 */
  guest_unsupported(0xea43d0); /* mulss xmm5, xmm0 */
/* ea43d4: mulss xmm5, xmm0 */
  guest_unsupported(0xea43d4); /* mulss xmm5, xmm0 */
/* ea43d8: subss xmm2, xmm5 */
  guest_unsupported(0xea43d8); /* subss xmm2, xmm5 */
/* ea43dc: mulss xmm3, xmm0 */
  guest_unsupported(0xea43dc); /* mulss xmm3, xmm0 */
/* ea43e0: mulss xmm3, xmm2 */
  guest_unsupported(0xea43e0); /* mulss xmm3, xmm2 */
/* ea43e4: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea43e4); /* shufps xmm3, xmm3, 0 */
/* ea43e8: mulps xmm1, xmm3 */
  guest_unsupported(0xea43e8); /* mulps xmm1, xmm3 */
/* ea43eb: mulps xmm4, xmm1 */
  guest_unsupported(0xea43eb); /* mulps xmm4, xmm1 */
/* ea43ee: movaps xmm0, xmm1 */
  guest_unsupported(0xea43ee); /* movaps xmm0, xmm1 */
/* ea43f1: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea43f1); /* shufps xmm1, xmm1, 0 */
/* ea43f5: mulps xmm1, xmm4 */
  guest_unsupported(0xea43f5); /* mulps xmm1, xmm4 */
/* ea43f8: addps xmm1, xmmword ptr [0xebbcc0] */
  guest_unsupported(0xea43f8); /* addps xmm1, xmmword ptr [0xebbcc0] */
/* ea43ff: movaps xmm2, xmm0 */
  guest_unsupported(0xea43ff); /* movaps xmm2, xmm0 */
/* ea4402: shufps xmm0, xmm0, 0xff */
  guest_unsupported(0xea4402); /* shufps xmm0, xmm0, 0xff */
/* ea4406: mulps xmm0, xmm4 */
  guest_unsupported(0xea4406); /* mulps xmm0, xmm4 */
/* ea4409: addps xmm0, xmmword ptr [0xebbc90] */
  guest_unsupported(0xea4409); /* addps xmm0, xmmword ptr [0xebbc90] */
/* ea4410: movaps xmm3, xmm2 */
  guest_unsupported(0xea4410); /* movaps xmm3, xmm2 */
/* ea4413: shufps xmm2, xmm2, 0xaa */
  guest_unsupported(0xea4413); /* shufps xmm2, xmm2, 0xaa */
/* ea4417: mulps xmm2, xmm4 */
  guest_unsupported(0xea4417); /* mulps xmm2, xmm4 */
/* ea441a: addps xmm2, xmmword ptr [0xebbca0] */
  guest_unsupported(0xea441a); /* addps xmm2, xmmword ptr [0xebbca0] */
/* ea4421: shufps xmm3, xmm3, 0x55 */
  guest_unsupported(0xea4421); /* shufps xmm3, xmm3, 0x55 */
/* ea4425: mulps xmm4, xmm3 */
  guest_unsupported(0xea4425); /* mulps xmm4, xmm3 */
/* ea4428: addps xmm4, xmmword ptr [0xebbcb0] */
  guest_unsupported(0xea4428); /* addps xmm4, xmmword ptr [0xebbcb0] */
/* ea442f: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea442f); /* movups xmmword ptr [eax], xmm1 */
/* ea4432: movups xmmword ptr [eax + 0x10], xmm4 */
  guest_unsupported(0xea4432); /* movups xmmword ptr [eax + 0x10], xmm4 */
/* ea4436: movups xmmword ptr [eax + 0x20], xmm2 */
  guest_unsupported(0xea4436); /* movups xmmword ptr [eax + 0x20], xmm2 */
/* ea443a: movups xmmword ptr [eax + 0x30], xmm0 */
  guest_unsupported(0xea443a); /* movups xmmword ptr [eax + 0x30], xmm0 */
/* ea443e: mov esp, ebx */
  esp = ebx;
/* ea4440: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea4441: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea437e(void) {
  LOAD_REGS();
L_ea437e: /* ea437e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea437f: mov ebx, esp */
  ebx = esp;
/* ea4381: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ea4384: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4387: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea438a: movhps xmm1, qword ptr [edx + 8] */
  guest_unsupported(0xea438a); /* movhps xmm1, qword ptr [edx + 8] */
/* ea438e: movlps xmm1, qword ptr [edx] */
  guest_unsupported(0xea438e); /* movlps xmm1, qword ptr [edx] */
/* ea4391: movaps xmm0, xmmword ptr [0xebbd00] */
  guest_unsupported(0xea4391); /* movaps xmm0, xmmword ptr [0xebbd00] */
/* ea4398: andps xmm0, xmm1 */
  guest_unsupported(0xea4398); /* andps xmm0, xmm1 */
/* ea439b: mulps xmm0, xmm0 */
  guest_unsupported(0xea439b); /* mulps xmm0, xmm0 */
/* ea439e: movss xmm2, dword ptr [0xebbce0] */
  guest_unsupported(0xea439e); /* movss xmm2, dword ptr [0xebbce0] */
/* ea43a6: movss xmm3, dword ptr [0xebbcf0] */
  guest_unsupported(0xea43a6); /* movss xmm3, dword ptr [0xebbcf0] */
/* ea43ae: movaps xmm4, xmm0 */
  guest_unsupported(0xea43ae); /* movaps xmm4, xmm0 */
/* ea43b1: movhlps xmm0, xmm0 */
  guest_unsupported(0xea43b1); /* movhlps xmm0, xmm0 */
/* ea43b4: addps xmm4, xmm0 */
  guest_unsupported(0xea43b4); /* addps xmm4, xmm0 */
/* ea43b7: movaps xmm0, xmm4 */
  guest_unsupported(0xea43b7); /* movaps xmm0, xmm4 */
/* ea43ba: shufps xmm4, xmm4, 1 */
  guest_unsupported(0xea43ba); /* shufps xmm4, xmm4, 1 */
/* ea43be: addss xmm0, xmm4 */
  guest_unsupported(0xea43be); /* addss xmm0, xmm4 */
/* ea43c2: movaps xmm4, xmmword ptr [0xebbcd0] */
  guest_unsupported(0xea43c2); /* movaps xmm4, xmmword ptr [0xebbcd0] */
/* ea43c9: movaps xmm5, xmm0 */
  guest_unsupported(0xea43c9); /* movaps xmm5, xmm0 */
/* ea43cc: rsqrtss xmm0, xmm0 */
  guest_unsupported(0xea43cc); /* rsqrtss xmm0, xmm0 */
/* ea43d0: mulss xmm5, xmm0 */
  guest_unsupported(0xea43d0); /* mulss xmm5, xmm0 */
/* ea43d4: mulss xmm5, xmm0 */
  guest_unsupported(0xea43d4); /* mulss xmm5, xmm0 */
/* ea43d8: subss xmm2, xmm5 */
  guest_unsupported(0xea43d8); /* subss xmm2, xmm5 */
/* ea43dc: mulss xmm3, xmm0 */
  guest_unsupported(0xea43dc); /* mulss xmm3, xmm0 */
/* ea43e0: mulss xmm3, xmm2 */
  guest_unsupported(0xea43e0); /* mulss xmm3, xmm2 */
/* ea43e4: shufps xmm3, xmm3, 0 */
  guest_unsupported(0xea43e4); /* shufps xmm3, xmm3, 0 */
/* ea43e8: mulps xmm1, xmm3 */
  guest_unsupported(0xea43e8); /* mulps xmm1, xmm3 */
/* ea43eb: mulps xmm4, xmm1 */
  guest_unsupported(0xea43eb); /* mulps xmm4, xmm1 */
/* ea43ee: movaps xmm0, xmm1 */
  guest_unsupported(0xea43ee); /* movaps xmm0, xmm1 */
/* ea43f1: shufps xmm1, xmm1, 0 */
  guest_unsupported(0xea43f1); /* shufps xmm1, xmm1, 0 */
/* ea43f5: mulps xmm1, xmm4 */
  guest_unsupported(0xea43f5); /* mulps xmm1, xmm4 */
/* ea43f8: addps xmm1, xmmword ptr [0xebbcc0] */
  guest_unsupported(0xea43f8); /* addps xmm1, xmmword ptr [0xebbcc0] */
/* ea43ff: movaps xmm2, xmm0 */
  guest_unsupported(0xea43ff); /* movaps xmm2, xmm0 */
/* ea4402: shufps xmm0, xmm0, 0xff */
  guest_unsupported(0xea4402); /* shufps xmm0, xmm0, 0xff */
/* ea4406: mulps xmm0, xmm4 */
  guest_unsupported(0xea4406); /* mulps xmm0, xmm4 */
/* ea4409: addps xmm0, xmmword ptr [0xebbc90] */
  guest_unsupported(0xea4409); /* addps xmm0, xmmword ptr [0xebbc90] */
/* ea4410: movaps xmm3, xmm2 */
  guest_unsupported(0xea4410); /* movaps xmm3, xmm2 */
/* ea4413: shufps xmm2, xmm2, 0xaa */
  guest_unsupported(0xea4413); /* shufps xmm2, xmm2, 0xaa */
/* ea4417: mulps xmm2, xmm4 */
  guest_unsupported(0xea4417); /* mulps xmm2, xmm4 */
/* ea441a: addps xmm2, xmmword ptr [0xebbca0] */
  guest_unsupported(0xea441a); /* addps xmm2, xmmword ptr [0xebbca0] */
/* ea4421: shufps xmm3, xmm3, 0x55 */
  guest_unsupported(0xea4421); /* shufps xmm3, xmm3, 0x55 */
/* ea4425: mulps xmm4, xmm3 */
  guest_unsupported(0xea4425); /* mulps xmm4, xmm3 */
/* ea4428: addps xmm4, xmmword ptr [0xebbcb0] */
  guest_unsupported(0xea4428); /* addps xmm4, xmmword ptr [0xebbcb0] */
/* ea442f: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea442f); /* movups xmmword ptr [eax], xmm1 */
/* ea4432: movups xmmword ptr [eax + 0x10], xmm4 */
  guest_unsupported(0xea4432); /* movups xmmword ptr [eax + 0x10], xmm4 */
/* ea4436: movups xmmword ptr [eax + 0x20], xmm2 */
  guest_unsupported(0xea4436); /* movups xmmword ptr [eax + 0x20], xmm2 */
/* ea443a: movups xmmword ptr [eax + 0x30], xmm0 */
  guest_unsupported(0xea443a); /* movups xmmword ptr [eax + 0x30], xmm0 */
/* ea443e: mov esp, ebx */
  esp = ebx;
/* ea4440: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea4441: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea4444(void) {
  LOAD_REGS();
L_ea4444: /* ea4444: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea444a: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea4450(); return;
}

void f_ea4450(void) {
  LOAD_REGS();
L_ea4450: /* ea4450: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea4451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea4452: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea4453: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea4454: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ea4458: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ea445c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  esp = r;
  }
/* ea445f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ea4461: fadd dword ptr [edx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x14u)));
/* ea4464: fadd dword ptr [edx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x28u)));
/* ea4467: fld dword ptr [0xebf27c] */
  { double v = F32((uint32_t)(0xebf27cu)); FPUSH(v); }
/* ea446d: fcompi st(1) */
  guest_unsupported(0xea446d); /* fcompi st(1) */
/* ea446f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* ea4471: mov esi, dword ptr [edx + 0x14] */
  esi = R32((uint32_t)(edx + 0x14u));
/* ea4474: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* ea4477: mov ebp, dword ptr [edx + 0x28] */
  ebp = R32((uint32_t)(edx + 0x28u));
/* ea447a: jb 0xea451d */
  if (cf) goto L_ea451d;
L_ea4480: /* ea4480: fstp st(1) */
  STI(1) = ST0; FPOP();
/* ea4482: mov dword ptr [esp], edi */
  W32((uint32_t)(esp), edi);
/* ea4485: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea4489: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ea448c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ea4490: mov ecx, 1 */
  ecx = 0x1u;
/* ea4495: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  cf = 0;
/* ea4497: fcompi st(1) */
  guest_unsupported(0xea4497); /* fcompi st(1) */
/* ea4499: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ea449b: cmova ebx, ecx */
  if ((!cf && !zf)) { ebx = ecx; }
/* ea449e: mov dword ptr [esp + 8], ebp */
  W32((uint32_t)(esp + 0x8u), ebp);
/* ea44a2: mov ecx, 2 */
  ecx = 0x2u;
/* ea44a7: fld dword ptr [esp + ebx*4] */
  { double v = F32((uint32_t)(esp + ebx*4)); FPUSH(v); }
/* ea44aa: fcompi st(1) */
  guest_unsupported(0xea44aa); /* fcompi st(1) */
/* ea44ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ea44ae: cmovae ecx, ebx */
  if (!cf) { ecx = ebx; }
/* ea44b1: fld dword ptr [0xebf290] */
  { double v = F32((uint32_t)(0xebf290u)); FPUSH(v); }
/* ea44b7: fadd dword ptr [esp + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esp + ecx*4)));
/* ea44ba: mov ebx, dword ptr [ecx*4 + 0xebf270] */
  ebx = R32((uint32_t)(ecx*4 + 0xebf270u));
/* ea44c1: fsub dword ptr [esp + ebx*4] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebx*4)));
/* ea44c4: mov ebp, dword ptr [ebx*4 + 0xebf270] */
  ebp = R32((uint32_t)(ebx*4 + 0xebf270u));
/* ea44cb: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* ea44ce: fsub dword ptr [esp + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(esp + ebp*4)));
/* ea44d1: fsqrt  */
  ST0 = sqrt(ST0);
/* ea44d3: fld dword ptr [0xebf298] */
  { double v = F32((uint32_t)(0xebf298u)); FPUSH(v); }
/* ea44d9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* ea44db: fmul dword ptr [0xebf294] */
  ST0 = ST0 * (F32((uint32_t)(0xebf294u)));
/* ea44e1: fdiv st(1), st(0) */
  STI(1) = STI(1) / ST0;
/* ea44e3: fstp dword ptr [eax + ecx*4] */
  WF32((uint32_t)(eax + ecx*4), ST0); FPOP();
/* ea44e6: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ea44e9: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ea44eb: fld dword ptr [ecx + ebx*4] */
  { double v = F32((uint32_t)(ecx + ebx*4)); FPUSH(v); }
/* ea44ee: mov edi, ebx */
  edi = ebx;
/* ea44f0: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ea44f3: fadd dword ptr [esi + edi] */
  ST0 = ST0 + (F32((uint32_t)(esi + edi)));
/* ea44f6: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ea44f8: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* ea44fb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea44fd: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* ea4500: mov ebx, ebp */
  ebx = ebp;
/* ea4502: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* ea4505: fld dword ptr [ebx + esi] */
  { double v = F32((uint32_t)(ebx + esi)); FPUSH(v); }
/* ea4508: fadd dword ptr [ecx + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + ebp*4)));
/* ea450b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea450d: fstp dword ptr [eax + ebp*4] */
  WF32((uint32_t)(eax + ebp*4), ST0); FPOP();
/* ea4510: fld dword ptr [edi + ebp*4] */
  { double v = F32((uint32_t)(edi + ebp*4)); FPUSH(v); }
/* ea4513: fsub dword ptr [ebx + edx] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx)));
/* ea4516: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ea4518: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ea451b: jmp 0xea455a */
  goto L_ea455a;
L_ea451d: /* ea451d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ea451f: fadd dword ptr [0xebf280] */
  ST0 = ST0 + (F32((uint32_t)(0xebf280u)));
/* ea4525: fsqrt  */
  ST0 = sqrt(ST0);
/* ea4527: fld dword ptr [0xebf288] */
  { double v = F32((uint32_t)(0xebf288u)); FPUSH(v); }
/* ea452d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* ea452f: fmul dword ptr [0xebf284] */
  ST0 = ST0 * (F32((uint32_t)(0xebf284u)));
/* ea4535: fdiv st(1), st(0) */
  STI(1) = STI(1) / ST0;
/* ea4537: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ea453a: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* ea453d: fsub dword ptr [edx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x24u)));
/* ea4540: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea4542: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ea4544: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* ea4547: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* ea454a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ea454c: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ea454f: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* ea4552: fsub dword ptr [edx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x10u)));
/* ea4555: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ea4557: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_ea455a: /* ea455a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea455d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea455e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea455f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea4560: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea4561: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea4564(void) {
  LOAD_REGS();
L_ea4564: /* ea4564: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea456a: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea4570(); return;
}

void f_ea4570(void) {
  LOAD_REGS();
L_ea4570: /* ea4570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea4571: mov ebx, esp */
  ebx = esp;
/* ea4573: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4576: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea4579: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea457c: jmp 0xea4581 */
  goto L_ea4581;
L_ea4581: /* ea4581: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4584: movss xmm0, dword ptr [ebx + 0x10] */
  guest_unsupported(0xea4584); /* movss xmm0, dword ptr [ebx + 0x10] */
/* ea4589: movss xmm1, dword ptr [ebx + 0x14] */
  guest_unsupported(0xea4589); /* movss xmm1, dword ptr [ebx + 0x14] */
/* ea458e: movss xmm2, dword ptr [0xebf2c0] */
  guest_unsupported(0xea458e); /* movss xmm2, dword ptr [0xebf2c0] */
/* ea4596: unpcklps xmm0, xmm1 */
  guest_unsupported(0xea4596); /* unpcklps xmm0, xmm1 */
/* ea4599: movss xmm1, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea4599); /* movss xmm1, dword ptr [ebx + 0xc] */
/* ea459e: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ea45a2: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* ea45a6: unpcklps xmm2, xmm1 */
  guest_unsupported(0xea45a6); /* unpcklps xmm2, xmm1 */
/* ea45a9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* ea45ad: shufps xmm0, xmm2, 0x11 */
  guest_unsupported(0xea45ad); /* shufps xmm0, xmm2, 0x11 */
/* ea45b1: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea45b1); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea45b6: mulps xmm0, xmmword ptr [0xebf2b0] */
  guest_unsupported(0xea45b6); /* mulps xmm0, xmmword ptr [0xebf2b0] */
/* ea45bd: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* ea45c0: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ea45c4: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea45c4); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea45c9: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* ea45cd: call 0xeab440 */
  esp -= 4; W32(esp, 0xea45d2u); SPILL(); f_eab440(); if (g_unwind) return; RELOAD();
/* ea45d2: movaps xmm0, xmmword ptr [esp + 0x10] */
  guest_unsupported(0xea45d2); /* movaps xmm0, xmmword ptr [esp + 0x10] */
/* ea45d7: movaps xmm1, xmmword ptr [esp + 0x20] */
  guest_unsupported(0xea45d7); /* movaps xmm1, xmmword ptr [esp + 0x20] */
/* ea45dc: movaps xmm2, xmm0 */
  guest_unsupported(0xea45dc); /* movaps xmm2, xmm0 */
/* ea45df: shufps xmm0, xmm1, 0 */
  guest_unsupported(0xea45df); /* shufps xmm0, xmm1, 0 */
/* ea45e3: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea45e3); /* shufps xmm0, xmm0, 0x8a */
/* ea45e7: shufps xmm2, xmm1, 0x99 */
  guest_unsupported(0xea45e7); /* shufps xmm2, xmm1, 0x99 */
/* ea45eb: movaps xmm1, xmm0 */
  guest_unsupported(0xea45eb); /* movaps xmm1, xmm0 */
/* ea45ee: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea45ee); /* shufps xmm0, xmm0, 0x8a */
/* ea45f2: movaps xmm3, xmm2 */
  guest_unsupported(0xea45f2); /* movaps xmm3, xmm2 */
/* ea45f5: shufps xmm2, xmm2, 0xf7 */
  guest_unsupported(0xea45f5); /* shufps xmm2, xmm2, 0xf7 */
/* ea45f9: shufps xmm3, xmm3, 0xa8 */
  guest_unsupported(0xea45f9); /* shufps xmm3, xmm3, 0xa8 */
/* ea45fd: mulps xmm1, xmm2 */
  guest_unsupported(0xea45fd); /* mulps xmm1, xmm2 */
/* ea4600: shufps xmm2, xmm2, 0x51 */
  guest_unsupported(0xea4600); /* shufps xmm2, xmm2, 0x51 */
/* ea4604: mulps xmm0, xmm2 */
  guest_unsupported(0xea4604); /* mulps xmm0, xmm2 */
/* ea4607: mulps xmm1, xmm3 */
  guest_unsupported(0xea4607); /* mulps xmm1, xmm3 */
/* ea460a: shufps xmm3, xmm3, 1 */
  guest_unsupported(0xea460a); /* shufps xmm3, xmm3, 1 */
/* ea460e: mulps xmm0, xmm3 */
  guest_unsupported(0xea460e); /* mulps xmm0, xmm3 */
/* ea4611: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea4611); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea4616: xorps xmm0, xmmword ptr [0xebf2a0] */
  guest_unsupported(0xea4616); /* xorps xmm0, xmmword ptr [0xebf2a0] */
/* ea461d: addps xmm1, xmm0 */
  guest_unsupported(0xea461d); /* addps xmm1, xmm0 */
/* ea4620: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea4620); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea4625: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4628: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea4628); /* movups xmmword ptr [eax], xmm1 */
/* ea462b: mov esp, ebx */
  esp = ebx;
/* ea462d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea462e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea457e(void) {
  LOAD_REGS();
L_ea457e: /* ea457e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea457f: mov ebx, esp */
  ebx = esp;
/* ea4581: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4584: movss xmm0, dword ptr [ebx + 0x10] */
  guest_unsupported(0xea4584); /* movss xmm0, dword ptr [ebx + 0x10] */
/* ea4589: movss xmm1, dword ptr [ebx + 0x14] */
  guest_unsupported(0xea4589); /* movss xmm1, dword ptr [ebx + 0x14] */
/* ea458e: movss xmm2, dword ptr [0xebf2c0] */
  guest_unsupported(0xea458e); /* movss xmm2, dword ptr [0xebf2c0] */
/* ea4596: unpcklps xmm0, xmm1 */
  guest_unsupported(0xea4596); /* unpcklps xmm0, xmm1 */
/* ea4599: movss xmm1, dword ptr [ebx + 0xc] */
  guest_unsupported(0xea4599); /* movss xmm1, dword ptr [ebx + 0xc] */
/* ea459e: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ea45a2: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* ea45a6: unpcklps xmm2, xmm1 */
  guest_unsupported(0xea45a6); /* unpcklps xmm2, xmm1 */
/* ea45a9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* ea45ad: shufps xmm0, xmm2, 0x11 */
  guest_unsupported(0xea45ad); /* shufps xmm0, xmm2, 0x11 */
/* ea45b1: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea45b1); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea45b6: mulps xmm0, xmmword ptr [0xebf2b0] */
  guest_unsupported(0xea45b6); /* mulps xmm0, xmmword ptr [0xebf2b0] */
/* ea45bd: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* ea45c0: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ea45c4: movaps xmmword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0xea45c4); /* movaps xmmword ptr [esp + 0x10], xmm0 */
/* ea45c9: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* ea45cd: call 0xeab440 */
  esp -= 4; W32(esp, 0xea45d2u); SPILL(); f_eab440(); if (g_unwind) return; RELOAD();
/* ea45d2: movaps xmm0, xmmword ptr [esp + 0x10] */
  guest_unsupported(0xea45d2); /* movaps xmm0, xmmword ptr [esp + 0x10] */
/* ea45d7: movaps xmm1, xmmword ptr [esp + 0x20] */
  guest_unsupported(0xea45d7); /* movaps xmm1, xmmword ptr [esp + 0x20] */
/* ea45dc: movaps xmm2, xmm0 */
  guest_unsupported(0xea45dc); /* movaps xmm2, xmm0 */
/* ea45df: shufps xmm0, xmm1, 0 */
  guest_unsupported(0xea45df); /* shufps xmm0, xmm1, 0 */
/* ea45e3: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea45e3); /* shufps xmm0, xmm0, 0x8a */
/* ea45e7: shufps xmm2, xmm1, 0x99 */
  guest_unsupported(0xea45e7); /* shufps xmm2, xmm1, 0x99 */
/* ea45eb: movaps xmm1, xmm0 */
  guest_unsupported(0xea45eb); /* movaps xmm1, xmm0 */
/* ea45ee: shufps xmm0, xmm0, 0x8a */
  guest_unsupported(0xea45ee); /* shufps xmm0, xmm0, 0x8a */
/* ea45f2: movaps xmm3, xmm2 */
  guest_unsupported(0xea45f2); /* movaps xmm3, xmm2 */
/* ea45f5: shufps xmm2, xmm2, 0xf7 */
  guest_unsupported(0xea45f5); /* shufps xmm2, xmm2, 0xf7 */
/* ea45f9: shufps xmm3, xmm3, 0xa8 */
  guest_unsupported(0xea45f9); /* shufps xmm3, xmm3, 0xa8 */
/* ea45fd: mulps xmm1, xmm2 */
  guest_unsupported(0xea45fd); /* mulps xmm1, xmm2 */
/* ea4600: shufps xmm2, xmm2, 0x51 */
  guest_unsupported(0xea4600); /* shufps xmm2, xmm2, 0x51 */
/* ea4604: mulps xmm0, xmm2 */
  guest_unsupported(0xea4604); /* mulps xmm0, xmm2 */
/* ea4607: mulps xmm1, xmm3 */
  guest_unsupported(0xea4607); /* mulps xmm1, xmm3 */
/* ea460a: shufps xmm3, xmm3, 1 */
  guest_unsupported(0xea460a); /* shufps xmm3, xmm3, 1 */
/* ea460e: mulps xmm0, xmm3 */
  guest_unsupported(0xea460e); /* mulps xmm0, xmm3 */
/* ea4611: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea4611); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea4616: xorps xmm0, xmmword ptr [0xebf2a0] */
  guest_unsupported(0xea4616); /* xorps xmm0, xmmword ptr [0xebf2a0] */
/* ea461d: addps xmm1, xmm0 */
  guest_unsupported(0xea461d); /* addps xmm1, xmm0 */
/* ea4620: movaps xmmword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0xea4620); /* movaps xmmword ptr [esp + 0x10], xmm1 */
/* ea4625: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ea4628: movups xmmword ptr [eax], xmm1 */
  guest_unsupported(0xea4628); /* movups xmmword ptr [eax], xmm1 */
/* ea462b: mov esp, ebx */
  esp = ebx;
/* ea462d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea462e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea4632(void) {
  LOAD_REGS();
L_ea4632: /* ea4632: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* ea4639: lea edi, [edi] */
  edi = (uint32_t)(edi);
  SPILL(); f_ea4640(); return;
}

void f_ea4640(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4640: /* ea4640: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea4644: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea4648: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea464b: movq mm3, qword ptr [edx + 8] */
  MMX[3] = R64((uint32_t)(edx + 0x8u));
/* ea464f: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea4652: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea4655: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea4658: punpckhdq mm4, mm2 */
  guest_unsupported(0xea4658); /* punpckhdq mm4, mm2 */
/* ea465b: punpckhdq mm5, mm3 */
  guest_unsupported(0xea465b); /* punpckhdq mm5, mm3 */
/* ea465e: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea4662: punpckldq mm4, mm2 */
  guest_unsupported(0xea4662); /* punpckldq mm4, mm2 */
/* ea4665: punpckldq mm5, mm3 */
  guest_unsupported(0xea4665); /* punpckldq mm5, mm3 */
/* ea4668: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea466c: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea466f: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea4672: pfmul mm2, mm1 */
  guest_unsupported(0xea4672); /* pfmul mm2, mm1 */
/* ea4676: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea4676); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea467d: pfmul mm3, mm0 */
  guest_unsupported(0xea467d); /* pfmul mm3, mm0 */
/* ea4681: pxor mm2, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea4681); /* pxor mm2, qword ptr [0xeb3bb8] */
/* ea4688: pfmul mm5, mm0 */
  guest_unsupported(0xea4688); /* pfmul mm5, mm0 */
/* ea468c: pfmul mm4, mm1 */
  guest_unsupported(0xea468c); /* pfmul mm4, mm1 */
/* ea4690: pfadd mm2, mm3 */
  guest_unsupported(0xea4690); /* pfadd mm2, mm3 */
/* ea4694: movq mm3, qword ptr [edx] */
  MMX[3] = R64((uint32_t)(edx));
/* ea4697: pfsub mm4, mm5 */
  guest_unsupported(0xea4697); /* pfsub mm4, mm5 */
/* ea469b: movq mm5, qword ptr [edx + 8] */
  MMX[5] = R64((uint32_t)(edx + 0x8u));
/* ea469f: pfmul mm7, mm1 */
  guest_unsupported(0xea469f); /* pfmul mm7, mm1 */
/* ea46a3: pxor mm6, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea46a3); /* pxor mm6, qword ptr [0xeb3bb8] */
/* ea46aa: pfacc mm4, mm2 */
  guest_unsupported(0xea46aa); /* pfacc mm4, mm2 */
/* ea46ae: pfmul mm6, mm0 */
  guest_unsupported(0xea46ae); /* pfmul mm6, mm0 */
/* ea46b2: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea46b2); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea46b9: pfmul mm3, mm0 */
  guest_unsupported(0xea46b9); /* pfmul mm3, mm0 */
/* ea46bd: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* ea46c0: pfmul mm5, mm1 */
  guest_unsupported(0xea46c0); /* pfmul mm5, mm1 */
/* ea46c4: pfadd mm6, mm7 */
  guest_unsupported(0xea46c4); /* pfadd mm6, mm7 */
/* ea46c8: pfsub mm5, mm3 */
  guest_unsupported(0xea46c8); /* pfsub mm5, mm3 */
/* ea46cc: pfacc mm6, mm5 */
  guest_unsupported(0xea46cc); /* pfacc mm6, mm5 */
/* ea46d0: movq qword ptr [eax + 8], mm6 */
  W64((uint32_t)(eax + 0x8u), MMX[6]);
/* ea46d4: femms  */
  guest_unsupported(0xea46d4); /* femms  */
/* ea46d6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea46d9(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea46d9: /* ea46d9: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ea46dd: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea46e0: movq mm2, qword ptr [edx + 8] */
  MMX[2] = R64((uint32_t)(edx + 0x8u));
/* ea46e4: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea46e7: pfmul mm0, mm0 */
  guest_unsupported(0xea46e7); /* pfmul mm0, mm0 */
/* ea46eb: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea46ee: pfmul mm2, mm2 */
  guest_unsupported(0xea46ee); /* pfmul mm2, mm2 */
/* ea46f2: pfadd mm0, mm2 */
  guest_unsupported(0xea46f2); /* pfadd mm0, mm2 */
/* ea46f6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea46fa: pfacc mm0, mm0 */
  guest_unsupported(0xea46fa); /* pfacc mm0, mm0 */
/* ea46fe: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea4701: pfrsqrt mm4, mm0 */
  guest_unsupported(0xea4701); /* pfrsqrt mm4, mm0 */
/* ea4705: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xea4705); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* ea470d: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* ea4710: pfmul mm2, mm4 */
  guest_unsupported(0xea4710); /* pfmul mm2, mm4 */
/* ea4714: pfrsqit1 mm0, mm2 */
  guest_unsupported(0xea4714); /* pfrsqit1 mm0, mm2 */
/* ea4718: pand mm1, mm5 */
  guest_unsupported(0xea4718); /* pand mm1, mm5 */
/* ea471b: pand mm3, mm5 */
  guest_unsupported(0xea471b); /* pand mm3, mm5 */
/* ea471e: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea471e); /* pfrcpit2 mm0, mm4 */
/* ea4722: pfmul mm1, mm0 */
  guest_unsupported(0xea4722); /* pfmul mm1, mm0 */
/* ea4726: pfmul mm3, mm0 */
  guest_unsupported(0xea4726); /* pfmul mm3, mm0 */
/* ea472a: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea472d: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea4731: femms  */
  guest_unsupported(0xea4731); /* femms  */
/* ea4733: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea4736(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4736: /* ea4736: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4739: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ea473d: movq mm7, qword ptr [0xeb3c10] */
  MMX[7] = R64((uint32_t)(0xeb3c10u));
/* ea4744: movq mm5, qword ptr [ecx] */
  MMX[5] = R64((uint32_t)(ecx));
/* ea4747: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea474b: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea474e: pfmul mm5, mm5 */
  guest_unsupported(0xea474e); /* pfmul mm5, mm5 */
/* ea4752: movq mm0, mm1 */
  MMX[0] = MMX[1];
/* ea4755: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ea4759: pfmul mm1, mm1 */
  guest_unsupported(0xea4759); /* pfmul mm1, mm1 */
/* ea475d: pfadd mm5, mm1 */
  guest_unsupported(0xea475d); /* pfadd mm5, mm1 */
/* ea4761: mov dword ptr [esp], ebx */
  W32((uint32_t)(esp), ebx);
/* ea4764: pfacc mm5, mm5 */
  guest_unsupported(0xea4764); /* pfacc mm5, mm5 */
/* ea4768: pfcmpge mm7, mm5 */
  guest_unsupported(0xea4768); /* pfcmpge mm7, mm5 */
/* ea476c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea4770: pfrsqrt mm1, mm5 */
  guest_unsupported(0xea4770); /* pfrsqrt mm1, mm5 */
/* ea4774: movd eax, mm7 */
  guest_unsupported(0xea4774); /* movd eax, mm7 */
/* ea4777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea4779: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea477c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ea4780: jne 0xea47be */
  if (!zf) goto L_ea47be;
L_ea4782: /* ea4782: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea4784: pfmul mm1, mm1 */
  guest_unsupported(0xea4784); /* pfmul mm1, mm1 */
/* ea4788: je 0xea47a1 */
  if (zf) goto L_ea47a1;
L_ea478a: /* ea478a: pfrsqit1 mm1, mm5 */
  guest_unsupported(0xea478a); /* pfrsqit1 mm1, mm5 */
/* ea478e: pfrcpit2 mm1, mm4 */
  guest_unsupported(0xea478e); /* pfrcpit2 mm1, mm4 */
/* ea4792: pfmul mm2, mm1 */
  guest_unsupported(0xea4792); /* pfmul mm2, mm1 */
/* ea4796: pfmul mm1, mm0 */
  guest_unsupported(0xea4796); /* pfmul mm1, mm0 */
/* ea479a: movq qword ptr [edx], mm2 */
  W64((uint32_t)(edx), MMX[2]);
/* ea479d: movd dword ptr [edx + 8], mm1 */
  guest_unsupported(0xea479d); /* movd dword ptr [edx + 8], mm1 */
L_ea47a1: /* ea47a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea47a3: je 0xea47da */
  if (zf) goto L_ea47da;
L_ea47a5: /* ea47a5: punpckhdq mm0, mm0 */
  guest_unsupported(0xea47a5); /* punpckhdq mm0, mm0 */
/* ea47a8: call 0xeab780 */
  esp -= 4; W32(esp, 0xea47adu); SPILL(); f_eab780(); if (g_unwind) return; RELOAD();
/* ea47ad: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ea47b1: pfmul mm0, qword ptr [0xeb3ba8] */
  guest_unsupported(0xea47b1); /* pfmul mm0, qword ptr [0xeb3ba8] */
/* ea47b9: movd dword ptr [ecx], mm0 */
  guest_unsupported(0xea47b9); /* movd dword ptr [ecx], mm0 */
/* ea47bc: jmp 0xea47da */
  goto L_ea47da;
L_ea47be: /* ea47be: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea47c0: pxor mm1, mm1 */
  guest_unsupported(0xea47c0); /* pxor mm1, mm1 */
/* ea47c3: je 0xea47d3 */
  if (zf) goto L_ea47d3;
L_ea47c5: /* ea47c5: movq mm0, qword ptr [0xeb3b90] */
  MMX[0] = R64((uint32_t)(0xeb3b90u));
/* ea47cc: movq qword ptr [edx + 4], mm1 */
  W64((uint32_t)(edx + 0x4u), MMX[1]);
/* ea47d0: movd dword ptr [edx], mm0 */
  guest_unsupported(0xea47d0); /* movd dword ptr [edx], mm0 */
L_ea47d3: /* ea47d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea47d5: je 0xea47da */
  if (zf) goto L_ea47da;
L_ea47d7: /* ea47d7: movd dword ptr [ecx], mm1 */
  guest_unsupported(0xea47d7); /* movd dword ptr [ecx], mm1 */
L_ea47da: /* ea47da: mov ebx, dword ptr [esp] */
  ebx = R32((uint32_t)(esp));
/* ea47dd: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea47e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea47e4: femms  */
  guest_unsupported(0xea47e4); /* femms  */
/* ea47e6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea47e9(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea47e9: /* ea47e9: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ea47ed: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea47f0: pxor mm6, mm6 */
  guest_unsupported(0xea47f0); /* pxor mm6, mm6 */
/* ea47f3: movd mm4, dword ptr [edx + 0x14] */
  guest_unsupported(0xea47f3); /* movd mm4, dword ptr [edx + 0x14] */
/* ea47f7: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea47fa: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea47fd: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea4800: pfadd mm0, mm4 */
  guest_unsupported(0xea4800); /* pfadd mm0, mm4 */
/* ea4804: movd mm5, dword ptr [edx + 0x28] */
  guest_unsupported(0xea4804); /* movd mm5, dword ptr [edx + 0x28] */
/* ea4808: pfsub mm1, mm4 */
  guest_unsupported(0xea4808); /* pfsub mm1, mm4 */
/* ea480c: pfsubr mm2, mm4 */
  guest_unsupported(0xea480c); /* pfsubr mm2, mm4 */
/* ea4810: pfsubr mm3, mm5 */
  guest_unsupported(0xea4810); /* pfsubr mm3, mm5 */
/* ea4814: pfadd mm0, mm5 */
  guest_unsupported(0xea4814); /* pfadd mm0, mm5 */
/* ea4818: pfsub mm1, mm5 */
  guest_unsupported(0xea4818); /* pfsub mm1, mm5 */
/* ea481c: pfsub mm2, mm5 */
  guest_unsupported(0xea481c); /* pfsub mm2, mm5 */
/* ea4820: movq mm5, qword ptr [edx + 0x20] */
  MMX[5] = R64((uint32_t)(edx + 0x20u));
/* ea4824: pfsub mm3, mm4 */
  guest_unsupported(0xea4824); /* pfsub mm3, mm4 */
/* ea4828: punpckldq mm0, mm2 */
  guest_unsupported(0xea4828); /* punpckldq mm0, mm2 */
/* ea482b: movq mm7, mm2 */
  MMX[7] = MMX[2];
/* ea482e: punpckldq mm6, mm1 */
  guest_unsupported(0xea482e); /* punpckldq mm6, mm1 */
/* ea4831: punpckldq mm7, mm1 */
  guest_unsupported(0xea4831); /* punpckldq mm7, mm1 */
/* ea4834: punpckldq mm3, mm3 */
  guest_unsupported(0xea4834); /* punpckldq mm3, mm3 */
/* ea4837: pfcmpge mm6, mm0 */
  guest_unsupported(0xea4837); /* pfcmpge mm6, mm0 */
/* ea483b: pfcmpge mm7, mm3 */
  guest_unsupported(0xea483b); /* pfcmpge mm7, mm3 */
/* ea483f: packssdw mm6, mm7 */
  guest_unsupported(0xea483f); /* packssdw mm6, mm7 */
/* ea4842: packsswb mm6, mm6 */
  guest_unsupported(0xea4842); /* packsswb mm6, mm6 */
/* ea4845: movd ecx, mm6 */
  guest_unsupported(0xea4845); /* movd ecx, mm6 */
/* ea4848: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea484e: movq mm6, mm5 */
  MMX[6] = MMX[5];
/* ea4851: mov eax, ecx */
  eax = ecx;
/* ea4853: jne 0xea48ba */
  if (!zf) goto L_ea48ba;
L_ea4855: /* ea4855: pfadd mm0, qword ptr [0xeb3b90] */
  guest_unsupported(0xea4855); /* pfadd mm0, qword ptr [0xeb3b90] */
/* ea485d: movd mm3, dword ptr [edx + 0x18] */
  guest_unsupported(0xea485d); /* movd mm3, dword ptr [edx + 0x18] */
/* ea4861: movd mm7, dword ptr [edx + 8] */
  guest_unsupported(0xea4861); /* movd mm7, dword ptr [edx + 8] */
/* ea4865: pfrsqrt mm4, mm0 */
  guest_unsupported(0xea4865); /* pfrsqrt mm4, mm0 */
/* ea4869: punpckldq mm3, mm5 */
  guest_unsupported(0xea4869); /* punpckldq mm3, mm5 */
/* ea486c: punpckldq mm7, mm7 */
  guest_unsupported(0xea486c); /* punpckldq mm7, mm7 */
/* ea486f: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* ea4872: punpckldq mm0, mm0 */
  guest_unsupported(0xea4872); /* punpckldq mm0, mm0 */
/* ea4875: pfmul mm4, mm4 */
  guest_unsupported(0xea4875); /* pfmul mm4, mm4 */
/* ea4879: punpckhdq mm5, mm7 */
  guest_unsupported(0xea4879); /* punpckhdq mm5, mm7 */
/* ea487c: movd mm6, dword ptr [edx + 0x10] */
  guest_unsupported(0xea487c); /* movd mm6, dword ptr [edx + 0x10] */
/* ea4880: pfrsqit1 mm4, mm0 */
  guest_unsupported(0xea4880); /* pfrsqit1 mm4, mm0 */
/* ea4884: punpckhdq mm1, mm1 */
  guest_unsupported(0xea4884); /* punpckhdq mm1, mm1 */
/* ea4887: pfsub mm3, mm5 */
  guest_unsupported(0xea4887); /* pfsub mm3, mm5 */
/* ea488b: pfrcpit2 mm4, mm2 */
  guest_unsupported(0xea488b); /* pfrcpit2 mm4, mm2 */
/* ea488f: pfsub mm1, mm6 */
  guest_unsupported(0xea488f); /* pfsub mm1, mm6 */
/* ea4893: pfmul mm4, qword ptr [0xeb3c08] */
  guest_unsupported(0xea4893); /* pfmul mm4, qword ptr [0xeb3c08] */
/* ea489b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea489f: pfmul mm0, mm4 */
  guest_unsupported(0xea489f); /* pfmul mm0, mm4 */
/* ea48a3: pfmul mm1, mm4 */
  guest_unsupported(0xea48a3); /* pfmul mm1, mm4 */
/* ea48a7: pfmul mm3, mm4 */
  guest_unsupported(0xea48a7); /* pfmul mm3, mm4 */
/* ea48ab: punpckldq mm1, mm0 */
  guest_unsupported(0xea48ab); /* punpckldq mm1, mm0 */
/* ea48ae: movq qword ptr [eax], mm3 */
  W64((uint32_t)(eax), MMX[3]);
/* ea48b1: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* ea48b5: femms  */
  guest_unsupported(0xea48b5); /* femms  */
/* ea48b7: ret 8 */
  esp += 12; SPILL(); return;
L_ea48ba: /* ea48ba: and eax, 0xff00ff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea48bf: cmp eax, 0xff00ff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ff00u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea48c4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea48c8: jne 0xea4933 */
  if (!zf) goto L_ea4933;
L_ea48ca: /* ea48ca: pfadd mm1, qword ptr [0xeb3b90] */
  guest_unsupported(0xea48ca); /* pfadd mm1, qword ptr [0xeb3b90] */
/* ea48d2: punpckhdq mm2, mm2 */
  guest_unsupported(0xea48d2); /* punpckhdq mm2, mm2 */
/* ea48d5: pfrsqrt mm4, mm1 */
  guest_unsupported(0xea48d5); /* pfrsqrt mm4, mm1 */
/* ea48d9: movd mm3, dword ptr [edx + 0x10] */
  guest_unsupported(0xea48d9); /* movd mm3, dword ptr [edx + 0x10] */
/* ea48dd: movq mm0, mm4 */
  MMX[0] = MMX[4];
/* ea48e0: pfmul mm4, mm4 */
  guest_unsupported(0xea48e0); /* pfmul mm4, mm4 */
/* ea48e4: punpckldq mm1, mm1 */
  guest_unsupported(0xea48e4); /* punpckldq mm1, mm1 */
/* ea48e7: punpckldq mm5, dword ptr [edx + 0x18] */
  guest_unsupported(0xea48e7); /* punpckldq mm5, dword ptr [edx + 0x18] */
/* ea48eb: pfsub mm3, mm2 */
  guest_unsupported(0xea48eb); /* pfsub mm3, mm2 */
/* ea48ef: pfrsqit1 mm4, mm1 */
  guest_unsupported(0xea48ef); /* pfrsqit1 mm4, mm1 */
/* ea48f3: movd mm7, dword ptr [edx + 8] */
  guest_unsupported(0xea48f3); /* movd mm7, dword ptr [edx + 8] */
/* ea48f7: punpckhdq mm6, mm6 */
  guest_unsupported(0xea48f7); /* punpckhdq mm6, mm6 */
/* ea48fa: pfrcpit2 mm4, mm0 */
  guest_unsupported(0xea48fa); /* pfrcpit2 mm4, mm0 */
/* ea48fe: punpckldq mm7, mm6 */
  guest_unsupported(0xea48fe); /* punpckldq mm7, mm6 */
/* ea4901: pfmul mm4, qword ptr [0xeb3c08] */
  guest_unsupported(0xea4901); /* pfmul mm4, qword ptr [0xeb3c08] */
/* ea4909: pxor mm7, qword ptr [0xeb3bc0] */
  guest_unsupported(0xea4909); /* pxor mm7, qword ptr [0xeb3bc0] */
/* ea4910: pfmul mm1, mm4 */
  guest_unsupported(0xea4910); /* pfmul mm1, mm4 */
/* ea4914: pfadd mm5, mm7 */
  guest_unsupported(0xea4914); /* pfadd mm5, mm7 */
/* ea4918: pfmul mm3, mm4 */
  guest_unsupported(0xea4918); /* pfmul mm3, mm4 */
/* ea491c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea4920: pfmul mm5, mm4 */
  guest_unsupported(0xea4920); /* pfmul mm5, mm4 */
/* ea4924: punpckldq mm1, mm3 */
  guest_unsupported(0xea4924); /* punpckldq mm1, mm3 */
/* ea4927: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea492b: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea492e: femms  */
  guest_unsupported(0xea492e); /* femms  */
/* ea4930: ret 8 */
  esp += 12; SPILL(); return;
L_ea4933: /* ea4933: test ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea4939: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea493d: je 0xea49a7 */
  if (zf) goto L_ea49a7;
L_ea493f: /* ea493f: pfadd mm2, qword ptr [0xeb3b90] */
  guest_unsupported(0xea493f); /* pfadd mm2, qword ptr [0xeb3b90] */
/* ea4947: punpckhdq mm1, mm1 */
  guest_unsupported(0xea4947); /* punpckhdq mm1, mm1 */
/* ea494a: movq mm6, mm5 */
  MMX[6] = MMX[5];
/* ea494d: pfrsqrt mm4, mm2 */
  guest_unsupported(0xea494d); /* pfrsqrt mm4, mm2 */
/* ea4951: movd mm3, dword ptr [edx + 0x18] */
  guest_unsupported(0xea4951); /* movd mm3, dword ptr [edx + 0x18] */
/* ea4955: punpckhdq mm6, mm6 */
  guest_unsupported(0xea4955); /* punpckhdq mm6, mm6 */
/* ea4958: movq mm0, mm4 */
  MMX[0] = MMX[4];
/* ea495b: pfmul mm4, mm4 */
  guest_unsupported(0xea495b); /* pfmul mm4, mm4 */
/* ea495f: punpckldq mm2, mm2 */
  guest_unsupported(0xea495f); /* punpckldq mm2, mm2 */
/* ea4962: punpckldq mm6, dword ptr [edx + 8] */
  guest_unsupported(0xea4962); /* punpckldq mm6, dword ptr [edx + 8] */
/* ea4966: punpckldq mm3, mm5 */
  guest_unsupported(0xea4966); /* punpckldq mm3, mm5 */
/* ea4969: pfrsqit1 mm4, mm2 */
  guest_unsupported(0xea4969); /* pfrsqit1 mm4, mm2 */
/* ea496d: movd mm7, dword ptr [edx + 0x10] */
  guest_unsupported(0xea496d); /* movd mm7, dword ptr [edx + 0x10] */
/* ea4971: pfrcpit2 mm4, mm0 */
  guest_unsupported(0xea4971); /* pfrcpit2 mm4, mm0 */
/* ea4975: pxor mm6, qword ptr [0xeb3bc0] */
  guest_unsupported(0xea4975); /* pxor mm6, qword ptr [0xeb3bc0] */
/* ea497c: pfadd mm1, mm7 */
  guest_unsupported(0xea497c); /* pfadd mm1, mm7 */
/* ea4980: pfmul mm4, qword ptr [0xeb3c08] */
  guest_unsupported(0xea4980); /* pfmul mm4, qword ptr [0xeb3c08] */
/* ea4988: pfadd mm3, mm6 */
  guest_unsupported(0xea4988); /* pfadd mm3, mm6 */
/* ea498c: pfmul mm1, mm4 */
  guest_unsupported(0xea498c); /* pfmul mm1, mm4 */
/* ea4990: pfmul mm2, mm4 */
  guest_unsupported(0xea4990); /* pfmul mm2, mm4 */
/* ea4994: pfmul mm3, mm4 */
  guest_unsupported(0xea4994); /* pfmul mm3, mm4 */
/* ea4998: punpckldq mm1, mm2 */
  guest_unsupported(0xea4998); /* punpckldq mm1, mm2 */
/* ea499b: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea499f: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea49a2: femms  */
  guest_unsupported(0xea49a2); /* femms  */
/* ea49a4: ret 8 */
  esp += 12; SPILL(); return;
L_ea49a7: /* ea49a7: pfadd mm3, qword ptr [0xeb3b90] */
  guest_unsupported(0xea49a7); /* pfadd mm3, qword ptr [0xeb3b90] */
/* ea49af: punpckhdq mm1, mm1 */
  guest_unsupported(0xea49af); /* punpckhdq mm1, mm1 */
/* ea49b2: pfrsqrt mm2, mm3 */
  guest_unsupported(0xea49b2); /* pfrsqrt mm2, mm3 */
/* ea49b6: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea49b6); /* movd mm4, dword ptr [edx + 8] */
/* ea49ba: punpckhdq mm6, mm6 */
  guest_unsupported(0xea49ba); /* punpckhdq mm6, mm6 */
/* ea49bd: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* ea49c0: pfmul mm2, mm2 */
  guest_unsupported(0xea49c0); /* pfmul mm2, mm2 */
/* ea49c4: punpckldq mm3, mm3 */
  guest_unsupported(0xea49c4); /* punpckldq mm3, mm3 */
/* ea49c7: punpckldq mm5, dword ptr [edx + 0x18] */
  guest_unsupported(0xea49c7); /* punpckldq mm5, dword ptr [edx + 0x18] */
/* ea49cb: punpckldq mm4, mm6 */
  guest_unsupported(0xea49cb); /* punpckldq mm4, mm6 */
/* ea49ce: pfrsqit1 mm2, mm3 */
  guest_unsupported(0xea49ce); /* pfrsqit1 mm2, mm3 */
/* ea49d2: movd mm7, dword ptr [edx + 0x10] */
  guest_unsupported(0xea49d2); /* movd mm7, dword ptr [edx + 0x10] */
/* ea49d6: pfrcpit2 mm2, mm0 */
  guest_unsupported(0xea49d6); /* pfrcpit2 mm2, mm0 */
/* ea49da: pfsub mm1, mm7 */
  guest_unsupported(0xea49da); /* pfsub mm1, mm7 */
/* ea49de: pfadd mm5, mm4 */
  guest_unsupported(0xea49de); /* pfadd mm5, mm4 */
/* ea49e2: pfmul mm2, qword ptr [0xeb3c08] */
  guest_unsupported(0xea49e2); /* pfmul mm2, qword ptr [0xeb3c08] */
/* ea49ea: pfmul mm3, mm2 */
  guest_unsupported(0xea49ea); /* pfmul mm3, mm2 */
/* ea49ee: pfmul mm1, mm2 */
  guest_unsupported(0xea49ee); /* pfmul mm1, mm2 */
/* ea49f2: pfmul mm5, mm2 */
  guest_unsupported(0xea49f2); /* pfmul mm5, mm2 */
/* ea49f6: punpckldq mm3, mm1 */
  guest_unsupported(0xea49f6); /* punpckldq mm3, mm1 */
/* ea49f9: movq qword ptr [eax], mm5 */
  W64((uint32_t)(eax), MMX[5]);
/* ea49fc: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea4a00: femms  */
  guest_unsupported(0xea4a00); /* femms  */
/* ea4a02: ret 8 */
  esp += 12; SPILL(); return;
}
