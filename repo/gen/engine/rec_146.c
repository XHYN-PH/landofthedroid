#include "recomp.h"
#include "rec_mod.h"

void f_989e4d(void) {
  LOAD_REGS();
  goto L_989e4d;
L_989b20: /* 989b20: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 989b27: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 989b2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b2c: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 989b30: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 989b34: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989b39u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989b39: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 989b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b40: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x989b45u); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 989b45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 989b48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989b4b: cmp word ptr [ebx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989b53: mov edi, eax */
  edi = eax;
/* 989b55: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 989b59: jne 0x989b72 */
  if (!zf) goto L_989b72;
L_989b5b: /* 989b5b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 989b5e: movsx eax, word ptr [ecx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x34u)));
/* 989b62: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b67: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b6a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989b6c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 989b70: jmp 0x989b85 */
  goto L_989b85;
L_989b72: /* 989b72: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 989b75: movsx eax, word ptr [edx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x34u)));
/* 989b79: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b7e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b81: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_989b85: /* 989b85: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 989b89: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 989b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989b8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b8f: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 989b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b97: call 0x98f100 */
  esp -= 4; W32(esp, 0x989b9cu); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989b9c: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 989ba3: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 989ba7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989baa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989bad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989bae: mov byte ptr [0xcf2fec], 1 */
  W8((uint32_t)(0xcf2fecu), 0x1u);
/* 989bb5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 989bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989bba: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 989bc1: call 0x98eed0 */
  esp -= 4; W32(esp, 0x989bc6u); SPILL(); f_98eed0(); if (g_unwind) return; RELOAD();
/* 989bc6: movsx eax, word ptr [ebx + 0x2382] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebx + 0x2382u)));
/* 989bcd: add eax, 0xffffff7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989bd2: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989bd5: mov byte ptr [esp + 0x934], 2 */
  W8((uint32_t)(esp + 0x934u), 0x2u);
/* 989bdd: ja 0x989c3e */
  if ((!cf && !zf)) goto L_989c3e;
L_989bdf: /* 989bdf: jmp dword ptr [eax*4 + 0x98aae4] */
  switch (R32((uint32_t)(eax*4 + 0x98aae4u))) {
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989bdf, R32((uint32_t)(eax*4 + 0x98aae4u))); return;
  }
L_989be6: /* 989be6: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989bed: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989bf4: call 0x98e5d0 */
  esp -= 4; W32(esp, 0x989bf9u); SPILL(); f_98e5d0(); if (g_unwind) return; RELOAD();
/* 989bf9: jmp 0x989c51 */
  goto L_989c51;
L_989bfb: /* 989bfb: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c02: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c09: call 0x98e240 */
  esp -= 4; W32(esp, 0x989c0eu); SPILL(); f_98e240(); if (g_unwind) return; RELOAD();
/* 989c0e: jmp 0x989c51 */
  goto L_989c51;
L_989c10: /* 989c10: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c19: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c20: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c25u); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c25: jmp 0x989c51 */
  goto L_989c51;
L_989c27: /* 989c27: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 989c2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c30: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c37: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c3cu); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c3c: jmp 0x989c51 */
  goto L_989c51;
L_989c3e: /* 989c3e: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c45: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c4c: call 0x98e120 */
  esp -= 4; W32(esp, 0x989c51u); SPILL(); f_98e120(); if (g_unwind) return; RELOAD();
L_989c51: /* 989c51: mov byte ptr [0xcf2fec], 0 */
  W8((uint32_t)(0xcf2fecu), 0x0u);
/* 989c58: fild dword ptr [ebx + 0x23a0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x23a0u)); FPUSH(v); }
/* 989c5e: mov byte ptr [esp + 0x37], 0 */
  W8((uint32_t)(esp + 0x37u), 0x0u);
/* 989c63: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 989c6b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 989c71: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 989c77: fst dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0);
/* 989c7e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_989c82: /* 989c82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989c85: mov al, byte ptr [ecx + 0x23a5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a5u))) & 0xffu);
/* 989c8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989c8d: je 0x989ce3 */
  if (zf) goto L_989ce3;
L_989c8f: /* 989c8f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989c92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989c94: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989c97: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989c9f: jle 0x989ce3 */
  if ((zf || sf != of)) goto L_989ce3;
L_989ca1: /* 989ca1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989ca3: xor ebx, ebx */
  ebx = 0;
/* 989ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ca7: jle 0x989cd3 */
  if ((zf || sf != of)) goto L_989cd3;
L_989ca9: /* 989ca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989cb0: /* 989cb0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 989cb4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 989cb7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989cba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989cbf: call 0x987a90 */
  esp -= 4; W32(esp, 0x989cc4u); SPILL(); f_987a90(); if (g_unwind) return; RELOAD();
/* 989cc4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 989cc6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989cc8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ccb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989cce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 989ccf: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cd1: jl 0x989cb0 */
  if ((sf != of)) goto L_989cb0;
L_989cd3: /* 989cd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989cd7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989cda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989cdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cdd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ce1: jl 0x989ca1 */
  if ((sf != of)) goto L_989ca1;
L_989ce3: /* 989ce3: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 989ce7: xor ebx, ebx */
  ebx = 0;
/* 989ce9: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989cec: ja 0x989d11 */
  if ((!cf && !zf)) goto L_989d11;
L_989cee: /* 989cee: jmp dword ptr [eax*4 + 0x98aaf4] */
  switch (R32((uint32_t)(eax*4 + 0x98aaf4u))) {
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989cee, R32((uint32_t)(eax*4 + 0x98aaf4u))); return;
  }
L_989cf5: /* 989cf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989cf8: xor eax, eax */
  eax = 0;
/* 989cfa: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 989d00: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d04: mov edx, edi */
  edx = edi;
/* 989d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d07: call 0x9875e0 */
  esp -= 4; W32(esp, 0x989d0cu); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
L_989d0c: /* 989d0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989d0f: /* 989d0f: mov ebx, eax */
  ebx = eax;
L_989d11: /* 989d11: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989d14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989d16: je 0x98a163 */
  if (zf) goto L_98a163;
L_989d1c: /* 989d1c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989d20: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 989d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989d27: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989d29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989d29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 989d2c: jmp 0x98a189 */
  goto L_98a189;
L_989d31: /* 989d31: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989d34: xor edx, edx */
  edx = 0;
/* 989d36: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 989d3c: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d41: mov edx, edi */
  edx = edi;
/* 989d43: call 0x987710 */
  esp -= 4; W32(esp, 0x989d48u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 989d48: jmp 0x989d0c */
  goto L_989d0c;
L_989d4a: /* 989d4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d4d: xor ecx, ecx */
  ecx = 0;
/* 989d4f: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 989d55: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d59: mov edx, edi */
  edx = edi;
/* 989d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d5c: call 0x9877f0 */
  esp -= 4; W32(esp, 0x989d61u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 989d61: jmp 0x989d0c */
  goto L_989d0c;
L_989d63: /* 989d63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d66: xor edx, edx */
  edx = 0;
/* 989d68: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989d6e: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 989d75: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d7b: mov edx, edi */
  edx = edi;
/* 989d7d: call 0x987510 */
  esp -= 4; W32(esp, 0x989d82u); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 989d82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989d85: jmp 0x989d0f */
  goto L_989d0f;
L_989d87: /* 989d87: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989d8a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989d8d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d90: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989d94: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989d99u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989d99: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989d9c: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989d9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989da2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989da5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989da7: mov ebx, eax */
  ebx = eax;
/* 989da9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989dad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989db5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989dbb: /* 989dbb: jmp 0x989dc0 */
  goto L_989dc0;
L_989dc0: /* 989dc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989dc2: mov edx, eax */
  edx = eax;
/* 989dc4: mov esi, eax */
  esi = eax;
/* 989dc6: shr edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989dc9: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989dcc: and edx, 0xf00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989dd2: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dd8: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dda: mov esi, eax */
  esi = eax;
/* 989ddc: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ddf: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989de2: and eax, 0xf000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989de7: and esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dea: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dec: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989df2: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989df5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989df8: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989dfb: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989dfe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e02: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e06: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e0a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e0c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989e10: jl 0x989dc0 */
  if ((sf != of)) goto L_989dc0;
L_989e12: /* 989e12: jmp 0x989d11 */
  goto L_989d11;
L_989e17: /* 989e17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e1a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e1d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989e20: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989e24: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989e29u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989e29: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989e2c: mov ebx, eax */
  ebx = eax;
/* 989e2e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e31: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e34: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989e39: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989e3d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989e45: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989e4b: /* 989e4b: jmp 0x989e50 */
  goto L_989e50;
L_989e4d: /* 989e4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_989e50: /* 989e50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989e52: mov edx, eax */
  edx = eax;
/* 989e54: mov esi, eax */
  esi = eax;
/* 989e56: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989e59: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e5c: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989e62: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e65: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e67: mov esi, eax */
  esi = eax;
/* 989e69: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989e6c: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e6f: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989e74: and esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e7a: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7c: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989e82: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989e85: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989e88: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989e8b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989e8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e92: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e96: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e9a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e9c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ea0: jl 0x989e50 */
  if ((sf != of)) goto L_989e50;
L_989ea2: /* 989ea2: jmp 0x989d11 */
  goto L_989d11;
L_989ea7: /* 989ea7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989eaa: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ead: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989eb0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989eb4: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989eb9u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989eb9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989ebc: mov ebx, eax */
  ebx = eax;
/* 989ebe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989ec1: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ec4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ec9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989ecd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989ed5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989edb: /* 989edb: jmp 0x989ee0 */
  goto L_989ee0;
L_989ee0: /* 989ee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989ee2: mov edx, eax */
  edx = eax;
/* 989ee4: mov esi, eax */
  esi = eax;
/* 989ee6: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989ee9: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989eef: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ef2: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989ef5: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989efa: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989efd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989eff: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f05: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f08: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f0b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f0e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f11: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f19: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f1d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f1f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989f23: jl 0x989ee0 */
  if ((sf != of)) goto L_989ee0;
L_989f25: /* 989f25: jmp 0x989d11 */
  goto L_989d11;
L_989f2a: /* 989f2a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f2d: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f30: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989f33: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989f37: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989f3cu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989f3c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989f3f: mov ebx, eax */
  ebx = eax;
/* 989f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f44: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989f4c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989f50: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989f58: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989f5e: /* 989f5e: mov edi, edi */
  edi = edi;
L_989f60: /* 989f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989f62: mov edx, eax */
  edx = eax;
/* 989f64: mov esi, eax */
  esi = eax;
/* 989f66: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989f69: and edx, 0x7e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989f6f: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989f72: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989f75: and eax, 0xf800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989f7a: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989f7d: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f7f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f81: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f85: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f88: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f8b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f8e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f91: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f95: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f99: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f9d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f9f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989fa3: jl 0x989f60 */
  if ((sf != of)) goto L_989f60;
L_989fa5: /* 989fa5: jmp 0x989d11 */
  goto L_989d11;
L_989faa: /* 989faa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fad: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fb0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989fb8: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989fbdu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989fbd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989fc0: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989fc3: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989fc6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989fc9: mov ebx, eax */
  ebx = eax;
/* 989fcb: mov eax, ecx */
  eax = ecx;
/* 989fcd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989fd0: mov edi, ebx */
  edi = ebx;
/* 989fd2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 989fd4: mov ecx, eax */
  ecx = eax;
/* 989fd6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989fd9: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989fdc: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989fde: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989fe2: jmp 0x989d11 */
  goto L_989d11;
L_989fe7: /* 989fe7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fea: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989ff1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989ff5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989ffau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989ffa: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989ffd: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a000: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a003: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a006: xor ecx, ecx */
  ecx = 0;
/* 98a008: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a00a: mov ebx, eax */
  ebx = eax;
/* 98a00c: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_98a012: /* 98a012: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a014: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a016: mov dl, byte ptr [esi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 98a019: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a01a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a01c: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 98a01f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a020: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a022: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a025: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a029: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a02c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a02d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a02f: jl 0x98a012 */
  if ((sf != of)) goto L_98a012;
L_98a031: /* 98a031: jmp 0x989d11 */
  goto L_989d11;
L_98a036: /* 98a036: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a03c: mov esi, 3 */
  esi = 0x3u;
/* 98a041: cmp word ptr [ecx + 0x34], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x34u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a045: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98a048: mov byte ptr [esp + 0xa4], dl */
  W8((uint32_t)(esp + 0xa4u), (edx & 0xffu));
/* 98a04f: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 98a056: xor edx, edx */
  edx = 0;
/* 98a058: mov dl, byte ptr [eax + 0x23a4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a4u))) & 0xffu);
/* 98a05e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a05f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a062: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98a069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a06a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a06c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a06e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98a070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a071: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98a074: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a077: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a079: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x98a07eu); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 98a07e: mov ebx, eax */
  ebx = eax;
/* 98a080: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a083: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98a086: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98a08a: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 98a08e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a093: jne 0x989d11 */
  if (!zf) goto L_989d11;
L_98a099: /* 98a099: cmp dword ptr [esp + 0xb8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xb8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a0a0: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 98a0a7: jne 0x98a0ef */
  if (!zf) goto L_98a0ef;
L_98a0a9: /* 98a0a9: xor eax, eax */
  eax = 0;
/* 98a0ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0ad: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0b3: /* 98a0b3: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0ba: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a0c0: /* 98a0c0: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a0c3: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a0ca: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a0cc: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a0d3: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a0d6: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a0dd: mov byte ptr [esp + eax*4 + 0x52b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x52bu), 0xffu);
/* 98a0e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a0e6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0e9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a0eb: jl 0x98a0c0 */
  if ((sf != of)) goto L_98a0c0;
L_98a0ed: /* 98a0ed: jmp 0x98a12f */
  goto L_98a12f;
L_98a0ef: /* 98a0ef: xor eax, eax */
  eax = 0;
/* 98a0f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0f3: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0f5: /* 98a0f5: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0fc: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0ff: nop  */
L_98a100: /* 98a100: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 98a103: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a10a: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a10d: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a114: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a116: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a11d: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a120: mov byte ptr [esp + eax*4 + 0x52b], dl */
  W8((uint32_t)(esp + eax*4 + 0x52bu), (edx & 0xffu));
/* 98a127: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a128: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a12b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a12d: jl 0x98a100 */
  if ((sf != of)) goto L_98a100;
L_98a12f: /* 98a12f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98a132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a134: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 98a139: je 0x98a14f */
  if (zf) goto L_98a14f;
L_98a13b: /* 98a13b: lea ecx, [esp + 0x52c] */
  ecx = (uint32_t)(esp + 0x52cu);
/* 98a142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98a144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a145: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98a147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98a147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a14a: jmp 0x989d11 */
  goto L_989d11;
L_98a14f: /* 98a14f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a152: lea edx, [esp + 0x52c] */
  edx = (uint32_t)(esp + 0x52cu);
/* 98a159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a15b: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a160u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 98a160: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a163: /* 98a163: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 98a167: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a169: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a16c: je 0x98a17d */
  if (zf) goto L_98a17d;
L_98a16e: /* 98a16e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98a172: mov eax, ebx */
  eax = ebx;
/* 98a174: mov edx, esi */
  edx = esi;
/* 98a176: call 0x9878d0 */
  esp -= 4; W32(esp, 0x98a17bu); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 98a17b: jmp 0x98a18c */
  goto L_98a18c;
L_98a17d: /* 98a17d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98a181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a184: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a189u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_98a189: /* 98a189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a18c: /* 98a18c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a18d: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98a192u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98a192: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98a196: mov al, byte ptr [esi + 0x232d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x232du))) & 0xffu);
/* 98a19c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a19f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a1a0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1a2: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 98a1a6: jne 0x98a1b3 */
  if (!zf) goto L_98a1b3;
L_98a1a8: /* 98a1a8: fld dword ptr [esi + ecx*4 + 0x2330] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x2330u)); FPUSH(v); }
/* 98a1af: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a1b3: /* 98a1b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98a1b9: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98a1bd: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1c0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 98a1c4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98a1c8: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1ca: /* 98a1ca: cmp dword ptr [esp + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1cf: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1d1: /* 98a1d1: mov byte ptr [esp + 0x37], 1 */
  W8((uint32_t)(esp + 0x37u), 0x1u);
/* 98a1d6: jmp 0x98a9ef */
  goto L_98a9ef;
L_98a1db: /* 98a1db: cmp word ptr [esi + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1e3: jne 0x98a252 */
  if (!zf) goto L_98a252;
L_98a1e5: /* 98a1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a1e6: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98a1ebu); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98a1eb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a1ee: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98a1f1: movsx ecx, word ptr [eax + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98a1f5: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 98a1f9: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 98a1fc: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 98a1ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a200: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a202: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a204: mov edi, eax */
  edi = eax;
/* 98a206: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 98a20a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a20c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a20d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a20e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a210: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98a214: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a216: mov ebx, eax */
  ebx = eax;
/* 98a218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a219: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a21a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a21b: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 98a21f: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 98a223: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98a227: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x98a22cu); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 98a22c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98a230: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98a233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a234: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a237: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a239: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a23a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a23b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a23d: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 98a241: call 0x98f100 */
  esp -= 4; W32(esp, 0x98a246u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 98a246: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 98a24a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a24d: jmp 0x98a365 */
  goto L_98a365;
L_98a252: /* 98a252: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a255: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a258: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25a: /* 98a25a: cmp dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a25d: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25f: /* 98a25f: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 98a266: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98a26a: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 98a26d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a270: imul ecx, dword ptr [eax] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax)));
  ecx = (uint32_t)r;
  }
/* 98a273: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 98a276: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98a279: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98a27c: mov edx, ecx */
  edx = ecx;
/* 98a27e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98a281: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98a283: mov ecx, edx */
  ecx = edx;
/* 98a285: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98a288: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 98a28a: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98a28e: jmp 0x98a333 */
  goto L_98a333;
L_98a293: /* 98a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a295: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a298: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a29c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a2a4: jle 0x98a333 */
  if ((zf || sf != of)) goto L_98a333;
L_98a2aa: /* 98a2aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98a2b0: /* 98a2b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2b2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a2b5: mov edx, eax */
  edx = eax;
/* 98a2b7: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 98a2bc: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a2bf: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2c3: mov esi, ebx */
  esi = ebx;
/* 98a2c5: je 0x98a2ca */
  if (zf) goto L_98a2ca;
L_98a2c7: /* 98a2c7: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
L_98a2ca: /* 98a2ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a2cc: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a2d4: jle 0x98a31d */
  if ((zf || sf != of)) goto L_98a31d;
L_98a2d6: /* 98a2d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2d8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2db: mov ecx, esi */
  ecx = esi;
/* 98a2dd: je 0x98a622 */
  if (zf) goto L_98a622;
L_98a2e3: /* 98a2e3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 98a2e6: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_98a2e9: /* 98a2e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a2ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a2ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a2ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a2ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a2f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a2f1: call 0x987d90 */
  esp -= 4; W32(esp, 0x98a2f6u); SPILL(); f_987d90(); if (g_unwind) return; RELOAD();
/* 98a2f6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98a2fa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98a2fc: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a300: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a303: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 98a307: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a309: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a30c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a30f: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a312: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a315: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a317: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a31b: jl 0x98a2d6 */
  if ((sf != of)) goto L_98a2d6;
L_98a31d: /* 98a31d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98a321: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a324: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a329: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a32d: jl 0x98a2b0 */
  if ((sf != of)) goto L_98a2b0;
L_98a333: /* 98a333: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a335: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a336: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a337: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a339: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a33b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 98a33d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a342: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a344: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a346: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 98a349: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98a34d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a34e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a34f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a351: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a353: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98a357: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a35b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a35c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a35d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a35f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a361: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_98a365: /* 98a365: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a368: mov al, byte ptr [esi + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2387u))) & 0xffu);
/* 98a36e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a370: je 0x98a3d4 */
  if (zf) goto L_98a3d4;
L_98a372: /* 98a372: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a375: xor eax, eax */
  eax = 0;
/* 98a377: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a379: jle 0x98a3a8 */
  if ((zf || sf != of)) goto L_98a3a8;
L_98a37b: /* 98a37b: mov ecx, 4 */
  ecx = 0x4u;
L_98a380: /* 98a380: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a382: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a385: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a388: mov byte ptr [ebx + edx*4 + 3], 0 */
  W8((uint32_t)(ebx + edx*4 + 0x3u), 0x0u);
/* 98a38d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a38f: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a392: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a395: lea edx, [edx + ebx - 4] */
  edx = (uint32_t)(edx + ebx + 0xfffffffcu);
/* 98a399: mov byte ptr [edx + 3], 0 */
  W8((uint32_t)(edx + 0x3u), 0x0u);
/* 98a39d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a3a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3a1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3a6: jl 0x98a380 */
  if ((sf != of)) goto L_98a380;
L_98a3a8: /* 98a3a8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3aa: xor eax, eax */
  eax = 0;
/* 98a3ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3ae: jle 0x98a3d4 */
  if ((zf || sf != of)) goto L_98a3d4;
L_98a3b0: /* 98a3b0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3b3: mov byte ptr [ecx + eax*4 + 3], 0 */
  W8((uint32_t)(ecx + eax*4 + 0x3u), 0x0u);
/* 98a3b8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a3bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a3bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 98a3be: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a3c1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98a3c6: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 98a3c9: mov byte ptr [ecx + 3], 0 */
  W8((uint32_t)(ecx + 0x3u), 0x0u);
/* 98a3cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3d2: jl 0x98a3b0 */
  if ((sf != of)) goto L_98a3b0;
L_98a3d4: /* 98a3d4: mov al, byte ptr [esi + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2388u))) & 0xffu);
/* 98a3da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a3dc: je 0x98a48b */
  if (zf) goto L_98a48b;
L_98a3e2: /* 98a3e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a3e5: xor eax, eax */
  eax = 0;
/* 98a3e7: add ecx, 0x238c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x238cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a3f0: /* 98a3f0: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a3f3: xor edx, edx */
  edx = 0;
/* 98a3f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3f7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a3fb: jle 0x98a441 */
  if ((zf || sf != of)) goto L_98a441;
L_98a3fd: /* 98a3fd: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
L_98a405: /* 98a405: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 98a407: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a409: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 98a40c: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a40f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a412: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a415: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 98a419: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a41b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a41e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 98a421: lea esi, [edx + esi - 4] */
  esi = (uint32_t)(edx + esi + 0xfffffffcu);
/* 98a425: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a427: mov byte ptr [esi + eax], dl */
  W8((uint32_t)(esi + eax), (edx & 0xffu));
/* 98a42a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98a42e: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a431: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98a432: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a435: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a437: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a43b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98a43f: jl 0x98a405 */
  if ((sf != of)) goto L_98a405;
L_98a441: /* 98a441: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a443: xor esi, esi */
  esi = 0;
/* 98a445: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a447: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a44b: jle 0x98a480 */
  if ((zf || sf != of)) goto L_98a480;
L_98a44d: /* 98a44d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a450: /* 98a450: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a452: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a455: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a458: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a45b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a45e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 98a460: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98a464: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 98a465: imul ebx, edx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edx);
  ebx = (uint32_t)r;
  }
/* 98a468: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a46b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a46d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98a470: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a472: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* 98a475: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a477: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a478: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a47a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a47e: jl 0x98a450 */
  if ((sf != of)) goto L_98a450;
L_98a480: /* 98a480: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a481: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a482: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a485: jle 0x98a3f0 */
  if ((zf || sf != of)) goto L_98a3f0;
L_98a48b: /* 98a48b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a48e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98a492: cmp ecx, dword ptr [eax + 0x239c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x239cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a498: jl 0x98a89a */
  if ((sf != of)) goto L_98a89a;
L_98a49e: /* 98a49e: mov cl, byte ptr [eax + 0x2390] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2390u))) & 0xffu);
/* 98a4a4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4a6: je 0x98a812 */
  if (zf) goto L_98a812;
L_98a4ac: /* 98a4ac: mov cl, byte ptr [eax + 0x2385] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2385u))) & 0xffu);
/* 98a4b2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4b4: je 0x98a670 */
  if (zf) goto L_98a670;
L_98a4ba: /* 98a4ba: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a4bd: xor ecx, ecx */
  ecx = 0;
/* 98a4bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a4c5: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a4cb: /* 98a4cb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a4cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a4d0: /* 98a4d0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a4d3: mov edx, ecx */
  edx = ecx;
/* 98a4d5: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a4d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4da: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a4dd: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a4e5: jle 0x98a65b */
  if ((zf || sf != of)) goto L_98a65b;
L_98a4eb: /* 98a4eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a4ef: fstp qword ptr [esp + 0xd0] */
  WF64((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 98a4f6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98a4fa: fstp qword ptr [esp + 0xd8] */
  WF64((uint32_t)(esp + 0xd8u), ST0); FPOP();
L_98a501: /* 98a501: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a505: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a507: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a50b: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a50f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a514: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a516: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98a51a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a51e: jge 0x98a526 */
  if ((sf == of)) goto L_98a526;
L_98a520: /* 98a520: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a526: /* 98a526: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a528: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a52e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98a532: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a538: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a53c: jge 0x98a544 */
  if ((sf == of)) goto L_98a544;
L_98a53e: /* 98a53e: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a544: /* 98a544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a546: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a54c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a550: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a556: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a55a: jge 0x98a562 */
  if ((sf == of)) goto L_98a562;
L_98a55c: /* 98a55c: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a562: /* 98a562: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a568: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a56c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a572: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a579: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a580: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 98a582: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a589: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a592: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a599: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59d: fld qword ptr [esp + 0xd8] */
  { double v = F64((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 98a5a4: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5ab: fst qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0);
/* 98a5b2: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5b9: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a5c0: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* 98a5c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5c9: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5d0: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 98a5d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a5db: fabs  */
  ST0 = fabs(ST0);
/* 98a5dd: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a5e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a5e5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a5e8: jne 0x98a629 */
  if (!zf) goto L_98a629;
L_98a5ea: /* 98a5ea: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a5ec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a5f2: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a5fb: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a602: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a609: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a60b: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a612: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a619: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a620: jmp 0x98a62b */
  goto L_98a62b;
L_98a622: /* 98a622: mov eax, ebx */
  eax = ebx;
/* 98a624: jmp 0x98a2e9 */
  goto L_98a2e9;
L_98a629: /* 98a629: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a62b: /* 98a62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a62c: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 98a633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a634: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98a638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a639: call 0x987960 */
  esp -= 4; W32(esp, 0x98a63eu); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a63e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a642: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a644: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a647: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a648: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a64b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a64d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a651: jl 0x98a501 */
  if ((sf != of)) goto L_98a501;
L_98a657: /* 98a657: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98a65b: /* 98a65b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a65e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a65f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a661: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a665: jl 0x98a4d0 */
  if ((sf != of)) goto L_98a4d0;
L_98a66b: /* 98a66b: jmp 0x98a812 */
  goto L_98a812;
L_98a670: /* 98a670: mov cl, byte ptr [eax + 0x2386] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2386u))) & 0xffu);
/* 98a676: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a678: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a67b: je 0x98a720 */
  if (zf) goto L_98a720;
L_98a681: /* 98a681: xor ecx, ecx */
  ecx = 0;
/* 98a683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a685: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a689: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a68f: /* 98a68f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a691: /* 98a691: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a694: mov edx, ecx */
  edx = ecx;
/* 98a696: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a699: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a69c: xor esi, esi */
  esi = 0;
/* 98a69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a6a0: jle 0x98a70b */
  if ((zf || sf != of)) goto L_98a70b;
L_98a6a2: /* 98a6a2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_98a6a3: /* 98a6a3: movzx eax, byte ptr [ebx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a6a7: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a6aa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a6ae: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6b2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a6b6: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6bc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6c0: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6c4: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6ca: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6ce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 98a6d2: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6d8: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6de: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6e3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6e3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6e7: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6ed: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a6f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6fb: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a6fd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a6ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a700: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a703: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a705: jl 0x98a6a3 */
  if ((sf != of)) goto L_98a6a3;
L_98a707: /* 98a707: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_98a70b: /* 98a70b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a70e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a70f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a711: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a715: jl 0x98a691 */
  if ((sf != of)) goto L_98a691;
L_98a71b: /* 98a71b: jmp 0x98a812 */
  goto L_98a812;
L_98a720: /* 98a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a722: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a72a: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a730: /* 98a730: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a732: /* 98a732: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98a736: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a739: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a73c: xor esi, esi */
  esi = 0;
/* 98a73e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a740: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a743: jle 0x98a7fe */
  if ((zf || sf != of)) goto L_98a7fe;
L_98a749: /* 98a749: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98a750: /* 98a750: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a753: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a756: movzx ecx, byte ptr [eax + 0x2394] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2394u)));
/* 98a75d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a761: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a765: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a769: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a76d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a771: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a777: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a77d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a782: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a785: movzx ecx, byte ptr [ebx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a789: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a78b: movzx eax, byte ptr [edx + 0x2395] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2395u)));
/* 98a792: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a796: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a79a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a79e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7a2: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7a6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7ac: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7b2: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7b7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a7ba: movzx ecx, byte ptr [ebx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a7be: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a7c1: movzx eax, byte ptr [edx + 0x2396] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2396u)));
/* 98a7c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a7cc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7d0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a7d4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7d8: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7dc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7e2: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7e8: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7edu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7ed: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* 98a7f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a7f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a7f3: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a7f6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a7f8: jl 0x98a750 */
  if ((sf != of)) goto L_98a750;
L_98a7fe: /* 98a7fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a802: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a805: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a806: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a808: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a80c: jl 0x98a732 */
  if ((sf != of)) goto L_98a732;
L_98a812: /* 98a812: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a815: mov al, byte ptr [edx + 0x2391] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2391u))) & 0xffu);
/* 98a81b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a81d: je 0x98a88b */
  if (zf) goto L_98a88b;
L_98a81f: /* 98a81f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a824: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a82c: jle 0x98a88b */
  if ((zf || sf != of)) goto L_98a88b;
L_98a82e: /* 98a82e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a830: /* 98a830: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a834: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a837: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a83a: xor esi, esi */
  esi = 0;
/* 98a83c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a83e: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a841: jle 0x98a87b */
  if ((zf || sf != of)) goto L_98a87b;
L_98a843: /* 98a843: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_98a846: /* 98a846: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a849: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a84c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a850: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a854: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a858: fild dword ptr [ecx + 0x2398] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x2398u)); FPUSH(v); }
/* 98a85e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a862: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a864: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a86a: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a86fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a86f: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a871: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a874: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a877: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a879: jl 0x98a846 */
  if ((sf != of)) goto L_98a846;
L_98a87b: /* 98a87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a87f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a882: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a883: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a885: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a889: jl 0x98a830 */
  if ((sf != of)) goto L_98a830;
L_98a88b: /* 98a88b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a88f: fmul dword ptr [esp + 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x9cu)));
/* 98a896: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a89a: /* 98a89a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a89d: mov al, byte ptr [edx + 0x2385] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2385u))) & 0xffu);
/* 98a8a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a8a5: je 0x98a9ef */
  if (zf) goto L_98a9ef;
L_98a8ab: /* 98a8ab: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a8ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8b0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a8b8: jle 0x98a9ef */
  if ((zf || sf != of)) goto L_98a9ef;
L_98a8be: /* 98a8be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a8c0: /* 98a8c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a8c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a8c7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a8ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8cc: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a8cf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a8d7: jle 0x98a9db */
  if ((zf || sf != of)) goto L_98a9db;
L_98a8dd: /* 98a8dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a8e0: /* 98a8e0: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a8e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a8e6: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a8ea: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a8ee: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a8f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8f5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98a8f9: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a8fd: jge 0x98a905 */
  if ((sf == of)) goto L_98a905;
L_98a8ff: /* 98a8ff: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a905: /* 98a905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a907: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a90d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98a911: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a917: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a91b: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a91f: jge 0x98a927 */
  if ((sf == of)) goto L_98a927;
L_98a921: /* 98a921: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a927: /* 98a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a929: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a92f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a933: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a939: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a93d: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a941: jge 0x98a949 */
  if ((sf == of)) goto L_98a949;
L_98a943: /* 98a943: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a949: /* 98a949: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a94f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a953: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a959: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a95d: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a961: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 98a965: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 98a969: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a96d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a96f: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a973: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 98a977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a97b: fabs  */
  ST0 = fabs(ST0);
/* 98a97d: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a985: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a988: jne 0x98a9b0 */
  if (!zf) goto L_98a9b0;
L_98a98a: /* 98a98a: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a98c: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a992: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a996: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a998: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a99c: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a9a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a9a2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a9a6: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a9aa: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a9ae: jmp 0x98a9b2 */
  goto L_98a9b2;
L_98a9b0: /* 98a9b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a9b2: /* 98a9b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a9b3: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 98a9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a9b8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 98a9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a9bd: call 0x987960 */
  esp -= 4; W32(esp, 0x98a9c2u); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a9c2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a9c6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a9c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a9cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9cc: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a9cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a9d5: jl 0x98a8e0 */
  if ((sf != of)) goto L_98a8e0;
L_98a9db: /* 98a9db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a9df: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a9e9: jl 0x98a8c0 */
  if ((sf != of)) goto L_98a8c0;
L_98a9ef: /* 98a9ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a9f2: cmp word ptr [eax + 0x237e], 0x1f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x237eu))); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a9fa: jne 0x98aa09 */
  if (!zf) goto L_98aa09;
L_98a9fc: /* 98a9fc: movsx edx, word ptr [eax + 0x2380] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2380u)));
/* 98aa03: cmp dword ptr [esp + 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa07: jge 0x98aa15 */
  if ((sf == of)) goto L_98aa15;
L_98aa09: /* 98aa09: mov al, byte ptr [esp + 0x37] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x37u))) & 0xffu);
/* 98aa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa0f: je 0x989c82 */
  if (zf) goto L_989c82;
L_98aa15: /* 98aa15: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 98aa1c: mov byte ptr [esp + 0x934], 1 */
  W8((uint32_t)(esp + 0x934u), 0x1u);
/* 98aa24: call 0x98e840 */
  esp -= 4; W32(esp, 0x98aa29u); SPILL(); f_98e840(); if (g_unwind) return; RELOAD();
/* 98aa29: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 98aa2d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98aa31: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98aa35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aa36: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa38: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98aa3c: jl 0x989b20 */
  if ((sf != of)) goto L_989b20;
L_98aa42: /* 98aa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98aa43: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98aa48u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98aa48: mov eax, dword ptr [esp + 0xc8] */
  eax = R32((uint32_t)(esp + 0xc8u));
/* 98aa4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98aa52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa54: je 0x98aa5f */
  if (zf) goto L_98aa5f;
L_98aa56: /* 98aa56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98aa57: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98aa5cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98aa5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98aa5f: /* 98aa5f: mov ecx, dword ptr [esp + 0x92c] */
  ecx = R32((uint32_t)(esp + 0x92cu));
/* 98aa66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98aa68: mov eax, 1 */
  eax = 0x1u;
/* 98aa6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98aa74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98aa75: mov esp, ebp */
  esp = ebp;
/* 98aa77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98aa78: ret  */
  esp += 4; SPILL(); return;
}

void f_989edd(void) {
  LOAD_REGS();
  goto L_989edd;
L_989b20: /* 989b20: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 989b27: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 989b2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b2c: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 989b30: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 989b34: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x989b39u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 989b39: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 989b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b40: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x989b45u); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 989b45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 989b48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989b4b: cmp word ptr [ebx + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 989b53: mov edi, eax */
  edi = eax;
/* 989b55: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 989b59: jne 0x989b72 */
  if (!zf) goto L_989b72;
L_989b5b: /* 989b5b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 989b5e: movsx eax, word ptr [ecx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x34u)));
/* 989b62: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b67: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b6a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989b6c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 989b70: jmp 0x989b85 */
  goto L_989b85;
L_989b72: /* 989b72: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 989b75: movsx eax, word ptr [edx + 0x34] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(edx + 0x34u)));
/* 989b79: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* 989b7e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 989b81: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_989b85: /* 989b85: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 989b89: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 989b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989b8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b8f: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 989b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989b95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 989b97: call 0x98f100 */
  esp -= 4; W32(esp, 0x989b9cu); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 989b9c: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 989ba3: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 989ba7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989baa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 989bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989bad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989bae: mov byte ptr [0xcf2fec], 1 */
  W8((uint32_t)(0xcf2fecu), 0x1u);
/* 989bb5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 989bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989bb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989bba: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 989bc1: call 0x98eed0 */
  esp -= 4; W32(esp, 0x989bc6u); SPILL(); f_98eed0(); if (g_unwind) return; RELOAD();
/* 989bc6: movsx eax, word ptr [ebx + 0x2382] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebx + 0x2382u)));
/* 989bcd: add eax, 0xffffff7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989bd2: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989bd5: mov byte ptr [esp + 0x934], 2 */
  W8((uint32_t)(esp + 0x934u), 0x2u);
/* 989bdd: ja 0x989c3e */
  if ((!cf && !zf)) goto L_989c3e;
L_989bdf: /* 989bdf: jmp dword ptr [eax*4 + 0x98aae4] */
  switch (R32((uint32_t)(eax*4 + 0x98aae4u))) {
    case 0x989be6u: goto L_989be6;
    case 0x989bfbu: goto L_989bfb;
    case 0x989c10u: goto L_989c10;
    case 0x989c27u: goto L_989c27;
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989bdf, R32((uint32_t)(eax*4 + 0x98aae4u))); return;
  }
L_989be6: /* 989be6: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989bed: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989bf4: call 0x98e5d0 */
  esp -= 4; W32(esp, 0x989bf9u); SPILL(); f_98e5d0(); if (g_unwind) return; RELOAD();
/* 989bf9: jmp 0x989c51 */
  goto L_989c51;
L_989bfb: /* 989bfb: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c02: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c09: call 0x98e240 */
  esp -= 4; W32(esp, 0x989c0eu); SPILL(); f_98e240(); if (g_unwind) return; RELOAD();
/* 989c0e: jmp 0x989c51 */
  goto L_989c51;
L_989c10: /* 989c10: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c19: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c20: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c25u); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c25: jmp 0x989c51 */
  goto L_989c51;
L_989c27: /* 989c27: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 989c2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c30: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 989c37: call 0x98e360 */
  esp -= 4; W32(esp, 0x989c3cu); SPILL(); f_98e360(); if (g_unwind) return; RELOAD();
/* 989c3c: jmp 0x989c51 */
  goto L_989c51;
L_989c3e: /* 989c3e: push 0x98eff0 */
  { uint32_t v = 0x98eff0u; esp -= 4; W32(esp, v); }
/* 989c43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 989c45: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 989c4c: call 0x98e120 */
  esp -= 4; W32(esp, 0x989c51u); SPILL(); f_98e120(); if (g_unwind) return; RELOAD();
L_989c51: /* 989c51: mov byte ptr [0xcf2fec], 0 */
  W8((uint32_t)(0xcf2fecu), 0x0u);
/* 989c58: fild dword ptr [ebx + 0x23a0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x23a0u)); FPUSH(v); }
/* 989c5e: mov byte ptr [esp + 0x37], 0 */
  W8((uint32_t)(esp + 0x37u), 0x0u);
/* 989c63: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 989c6b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 989c71: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 989c77: fst dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0);
/* 989c7e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_989c82: /* 989c82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989c85: mov al, byte ptr [ecx + 0x23a5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a5u))) & 0xffu);
/* 989c8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 989c8d: je 0x989ce3 */
  if (zf) goto L_989ce3;
L_989c8f: /* 989c8f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989c92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989c94: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989c97: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989c9f: jle 0x989ce3 */
  if ((zf || sf != of)) goto L_989ce3;
L_989ca1: /* 989ca1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989ca3: xor ebx, ebx */
  ebx = 0;
/* 989ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ca7: jle 0x989cd3 */
  if ((zf || sf != of)) goto L_989cd3;
L_989ca9: /* 989ca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_989cb0: /* 989cb0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 989cb4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 989cb7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989cba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 989cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989cbf: call 0x987a90 */
  esp -= 4; W32(esp, 0x989cc4u); SPILL(); f_987a90(); if (g_unwind) return; RELOAD();
/* 989cc4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 989cc6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 989cc8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ccb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 989cce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 989ccf: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cd1: jl 0x989cb0 */
  if ((sf != of)) goto L_989cb0;
L_989cd3: /* 989cd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989cd7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989cda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989cdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989cdd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ce1: jl 0x989ca1 */
  if ((sf != of)) goto L_989ca1;
L_989ce3: /* 989ce3: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 989ce7: xor ebx, ebx */
  ebx = 0;
/* 989ce9: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 989cec: ja 0x989d11 */
  if ((!cf && !zf)) goto L_989d11;
L_989cee: /* 989cee: jmp dword ptr [eax*4 + 0x98aaf4] */
  switch (R32((uint32_t)(eax*4 + 0x98aaf4u))) {
    case 0x989cf5u: goto L_989cf5;
    case 0x989d31u: goto L_989d31;
    case 0x989d4au: goto L_989d4a;
    case 0x989d63u: goto L_989d63;
    case 0x989d87u: goto L_989d87;
    case 0x989e17u: goto L_989e17;
    case 0x989ea7u: goto L_989ea7;
    case 0x989f2au: goto L_989f2a;
    case 0x989faau: goto L_989faa;
    case 0x989fe7u: goto L_989fe7;
    case 0x98a036u: goto L_98a036;
    default: guest_badjump(0x989cee, R32((uint32_t)(eax*4 + 0x98aaf4u))); return;
  }
L_989cf5: /* 989cf5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 989cf8: xor eax, eax */
  eax = 0;
/* 989cfa: mov al, byte ptr [edx + 0x23a6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a6u))) & 0xffu);
/* 989d00: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d04: mov edx, edi */
  edx = edi;
/* 989d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d07: call 0x9875e0 */
  esp -= 4; W32(esp, 0x989d0cu); SPILL(); f_9875e0(); if (g_unwind) return; RELOAD();
L_989d0c: /* 989d0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_989d0f: /* 989d0f: mov ebx, eax */
  ebx = eax;
L_989d11: /* 989d11: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 989d14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 989d16: je 0x98a163 */
  if (zf) goto L_98a163;
L_989d1c: /* 989d1c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 989d20: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 989d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 989d27: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x989d29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 989d29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 989d2c: jmp 0x98a189 */
  goto L_98a189;
L_989d31: /* 989d31: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 989d34: xor edx, edx */
  edx = 0;
/* 989d36: mov dl, byte ptr [ecx + 0x23a6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x23a6u))) & 0xffu);
/* 989d3c: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d41: mov edx, edi */
  edx = edi;
/* 989d43: call 0x987710 */
  esp -= 4; W32(esp, 0x989d48u); SPILL(); f_987710(); if (g_unwind) return; RELOAD();
/* 989d48: jmp 0x989d0c */
  goto L_989d0c;
L_989d4a: /* 989d4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d4d: xor ecx, ecx */
  ecx = 0;
/* 989d4f: mov cl, byte ptr [eax + 0x23a6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a6u))) & 0xffu);
/* 989d55: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d59: mov edx, edi */
  edx = edi;
/* 989d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 989d5c: call 0x9877f0 */
  esp -= 4; W32(esp, 0x989d61u); SPILL(); f_9877f0(); if (g_unwind) return; RELOAD();
/* 989d61: jmp 0x989d0c */
  goto L_989d0c;
L_989d63: /* 989d63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 989d66: xor edx, edx */
  edx = 0;
/* 989d68: mov dl, byte ptr [eax + 0x23a7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a7u))) & 0xffu);
/* 989d6e: movzx eax, byte ptr [eax + 0x23a6] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x23a6u)));
/* 989d75: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 989d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 989d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d7b: mov edx, edi */
  edx = edi;
/* 989d7d: call 0x987510 */
  esp -= 4; W32(esp, 0x989d82u); SPILL(); f_987510(); if (g_unwind) return; RELOAD();
/* 989d82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989d85: jmp 0x989d0f */
  goto L_989d0f;
L_989d87: /* 989d87: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989d8a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989d8d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989d90: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989d94: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989d99u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989d99: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989d9c: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989d9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989da2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989da5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989da7: mov ebx, eax */
  ebx = eax;
/* 989da9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989dad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989db5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989dbb: /* 989dbb: jmp 0x989dc0 */
  goto L_989dc0;
L_989dc0: /* 989dc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989dc2: mov edx, eax */
  edx = eax;
/* 989dc4: mov esi, eax */
  esi = eax;
/* 989dc6: shr edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989dc9: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989dcc: and edx, 0xf00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989dd2: and esi, 0xf0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dd8: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dda: mov esi, eax */
  esi = eax;
/* 989ddc: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ddf: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989de2: and eax, 0xf000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989de7: and esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989dea: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dec: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989dee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989df2: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989df5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989df8: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989dfb: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989dfe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e02: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e06: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e0a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e0c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989e10: jl 0x989dc0 */
  if ((sf != of)) goto L_989dc0;
L_989e12: /* 989e12: jmp 0x989d11 */
  goto L_989d11;
L_989e17: /* 989e17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e1a: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e1d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989e20: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989e24: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989e29u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989e29: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989e2c: mov ebx, eax */
  ebx = eax;
/* 989e2e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989e31: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989e34: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989e39: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989e3d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989e45: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989e4b: /* 989e4b: jmp 0x989e50 */
  goto L_989e50;
L_989e50: /* 989e50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989e52: mov edx, eax */
  edx = eax;
/* 989e54: mov esi, eax */
  esi = eax;
/* 989e56: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989e59: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e5c: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989e62: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e65: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e67: mov esi, eax */
  esi = eax;
/* 989e69: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989e6c: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989e6f: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989e74: and esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989e7a: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7c: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989e7e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989e82: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989e85: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989e88: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989e8b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989e8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989e92: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989e96: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989e99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989e9a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989e9c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989ea0: jl 0x989e50 */
  if ((sf != of)) goto L_989e50;
L_989ea2: /* 989ea2: jmp 0x989d11 */
  goto L_989d11;
L_989ea7: /* 989ea7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989eaa: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ead: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989eb0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989eb4: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989eb9u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989eb9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989ebc: mov ebx, eax */
  ebx = eax;
/* 989ebe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989ec1: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989ec4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989ec9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989ecd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989ed5: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989edb: /* 989edb: jmp 0x989ee0 */
  goto L_989ee0;
L_989edd: /* 989edd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_989ee0: /* 989ee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989ee2: mov edx, eax */
  edx = eax;
/* 989ee4: mov esi, eax */
  esi = eax;
/* 989ee6: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989ee9: and edx, 0x3e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989eef: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989ef2: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989ef5: and eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989efa: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989efd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989eff: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f05: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f08: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f0b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f0e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f11: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f19: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f1d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f1f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989f23: jl 0x989ee0 */
  if ((sf != of)) goto L_989ee0;
L_989f25: /* 989f25: jmp 0x989d11 */
  goto L_989d11;
L_989f2a: /* 989f2a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f2d: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f30: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989f33: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989f37: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989f3cu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989f3c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 989f3f: mov ebx, eax */
  ebx = eax;
/* 989f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989f44: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989f47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 989f4c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 989f50: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 989f58: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_989f5e: /* 989f5e: mov edi, edi */
  edi = edi;
L_989f60: /* 989f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 989f62: mov edx, eax */
  edx = eax;
/* 989f64: mov esi, eax */
  esi = eax;
/* 989f66: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 989f69: and edx, 0x7e0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 989f6f: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 989f72: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 989f75: and eax, 0xf800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 989f7a: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 989f7d: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f7f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 989f81: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 989f85: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 989f88: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989f8b: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 989f8e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 989f91: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 989f95: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 989f99: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 989f9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 989f9d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 989f9f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 989fa3: jl 0x989f60 */
  if ((sf != of)) goto L_989f60;
L_989fa5: /* 989fa5: jmp 0x989d11 */
  goto L_989d11;
L_989faa: /* 989faa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fad: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fb0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 989fb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989fb8: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989fbdu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989fbd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 989fc0: imul ecx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  ecx = (uint32_t)r;
  }
/* 989fc3: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 989fc6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 989fc9: mov ebx, eax */
  ebx = eax;
/* 989fcb: mov eax, ecx */
  eax = ecx;
/* 989fcd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 989fd0: mov edi, ebx */
  edi = ebx;
/* 989fd2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 989fd4: mov ecx, eax */
  ecx = eax;
/* 989fd6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 989fd9: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 989fdc: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 989fde: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 989fe2: jmp 0x989d11 */
  goto L_989d11;
L_989fe7: /* 989fe7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 989fea: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 989fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 989ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 989ff1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 989ff5: call 0x99cf4e */
  esp -= 4; W32(esp, 0x989ffau); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 989ffa: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 989ffd: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a000: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a003: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a006: xor ecx, ecx */
  ecx = 0;
/* 98a008: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a00a: mov ebx, eax */
  ebx = eax;
/* 98a00c: jle 0x989d11 */
  if ((zf || sf != of)) goto L_989d11;
L_98a012: /* 98a012: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a014: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a016: mov dl, byte ptr [esi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 98a019: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a01a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a01c: mov dl, byte ptr [esi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 98a01f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a020: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98a022: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a025: imul edx, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  edx = (uint32_t)r;
  }
/* 98a028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a029: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a02c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a02d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a02f: jl 0x98a012 */
  if ((sf != of)) goto L_98a012;
L_98a031: /* 98a031: jmp 0x989d11 */
  goto L_989d11;
L_98a036: /* 98a036: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a03c: mov esi, 3 */
  esi = 0x3u;
/* 98a041: cmp word ptr [ecx + 0x34], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x34u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a045: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98a048: mov byte ptr [esp + 0xa4], dl */
  W8((uint32_t)(esp + 0xa4u), (edx & 0xffu));
/* 98a04f: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 98a056: xor edx, edx */
  edx = 0;
/* 98a058: mov dl, byte ptr [eax + 0x23a4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x23a4u))) & 0xffu);
/* 98a05e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a05f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a062: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98a069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a06a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a06c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a06e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98a070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a071: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98a074: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98a076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a077: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a079: call 0x98f5b0 */
  esp -= 4; W32(esp, 0x98a07eu); SPILL(); f_98f5b0(); if (g_unwind) return; RELOAD();
/* 98a07e: mov ebx, eax */
  ebx = eax;
/* 98a080: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a083: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 98a086: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 98a08a: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 98a08e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a093: jne 0x989d11 */
  if (!zf) goto L_989d11;
L_98a099: /* 98a099: cmp dword ptr [esp + 0xb8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xb8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a0a0: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 98a0a7: jne 0x98a0ef */
  if (!zf) goto L_98a0ef;
L_98a0a9: /* 98a0a9: xor eax, eax */
  eax = 0;
/* 98a0ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0ad: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0b3: /* 98a0b3: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0ba: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a0c0: /* 98a0c0: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a0c3: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a0ca: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a0cc: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a0d3: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a0d6: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a0dd: mov byte ptr [esp + eax*4 + 0x52b], 0xff */
  W8((uint32_t)(esp + eax*4 + 0x52bu), 0xffu);
/* 98a0e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a0e6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0e9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a0eb: jl 0x98a0c0 */
  if ((sf != of)) goto L_98a0c0;
L_98a0ed: /* 98a0ed: jmp 0x98a12f */
  goto L_98a12f;
L_98a0ef: /* 98a0ef: xor eax, eax */
  eax = 0;
/* 98a0f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a0f3: jle 0x98a12f */
  if ((zf || sf != of)) goto L_98a12f;
L_98a0f5: /* 98a0f5: mov esi, dword ptr [esp + 0xc4] */
  esi = R32((uint32_t)(esp + 0xc4u));
/* 98a0fc: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a0ff: nop  */
L_98a100: /* 98a100: mov dl, byte ptr [esi - 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffff8u))) & 0xffu);
/* 98a103: mov byte ptr [esp + eax*4 + 0x52a], dl */
  W8((uint32_t)(esp + eax*4 + 0x52au), (edx & 0xffu));
/* 98a10a: mov dl, byte ptr [esi - 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfffffffcu))) & 0xffu);
/* 98a10d: mov byte ptr [esp + eax*4 + 0x529], dl */
  W8((uint32_t)(esp + eax*4 + 0x529u), (edx & 0xffu));
/* 98a114: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 98a116: mov byte ptr [esp + eax*4 + 0x528], dl */
  W8((uint32_t)(esp + eax*4 + 0x528u), (edx & 0xffu));
/* 98a11d: mov dl, byte ptr [esi + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 98a120: mov byte ptr [esp + eax*4 + 0x52b], dl */
  W8((uint32_t)(esp + eax*4 + 0x52bu), (edx & 0xffu));
/* 98a127: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a128: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a12b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a12d: jl 0x98a100 */
  if ((sf != of)) goto L_98a100;
L_98a12f: /* 98a12f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98a132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98a134: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 98a139: je 0x98a14f */
  if (zf) goto L_98a14f;
L_98a13b: /* 98a13b: lea ecx, [esp + 0x52c] */
  ecx = (uint32_t)(esp + 0x52cu);
/* 98a142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98a144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a145: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98a147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98a147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a14a: jmp 0x989d11 */
  goto L_989d11;
L_98a14f: /* 98a14f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a152: lea edx, [esp + 0x52c] */
  edx = (uint32_t)(esp + 0x52cu);
/* 98a159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a15b: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a160u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
/* 98a160: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a163: /* 98a163: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 98a167: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a169: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a16c: je 0x98a17d */
  if (zf) goto L_98a17d;
L_98a16e: /* 98a16e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98a172: mov eax, ebx */
  eax = ebx;
/* 98a174: mov edx, esi */
  edx = esi;
/* 98a176: call 0x9878d0 */
  esp -= 4; W32(esp, 0x98a17bu); SPILL(); f_9878d0(); if (g_unwind) return; RELOAD();
/* 98a17b: jmp 0x98a18c */
  goto L_98a18c;
L_98a17d: /* 98a17d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98a181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a184: call 0x987a70 */
  esp -= 4; W32(esp, 0x98a189u); SPILL(); f_987a70(); if (g_unwind) return; RELOAD();
L_98a189: /* 98a189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98a18c: /* 98a18c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a18d: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98a192u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98a192: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98a196: mov al, byte ptr [esi + 0x232d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x232du))) & 0xffu);
/* 98a19c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a19f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a1a0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1a2: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 98a1a6: jne 0x98a1b3 */
  if (!zf) goto L_98a1b3;
L_98a1a8: /* 98a1a8: fld dword ptr [esi + ecx*4 + 0x2330] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x2330u)); FPUSH(v); }
/* 98a1af: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a1b3: /* 98a1b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98a1b9: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98a1bd: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1c0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 98a1c4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98a1c8: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1ca: /* 98a1ca: cmp dword ptr [esp + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a1cf: jg 0x98a1db */
  if ((!zf && sf == of)) goto L_98a1db;
L_98a1d1: /* 98a1d1: mov byte ptr [esp + 0x37], 1 */
  W8((uint32_t)(esp + 0x37u), 0x1u);
/* 98a1d6: jmp 0x98a9ef */
  goto L_98a9ef;
L_98a1db: /* 98a1db: cmp word ptr [esi + 0x237e], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x237eu))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a1e3: jne 0x98a252 */
  if (!zf) goto L_98a252;
L_98a1e5: /* 98a1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a1e6: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98a1ebu); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98a1eb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a1ee: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98a1f1: movsx ecx, word ptr [eax + 0x34] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
/* 98a1f5: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 98a1f9: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 98a1fc: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 98a1ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a200: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a202: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a204: mov edi, eax */
  edi = eax;
/* 98a206: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 98a20a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a20c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a20d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a20e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a210: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98a214: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a216: mov ebx, eax */
  ebx = eax;
/* 98a218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a219: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a21a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a21b: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 98a21f: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 98a223: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98a227: call 0x98f0a0 */
  esp -= 4; W32(esp, 0x98a22cu); SPILL(); f_98f0a0(); if (g_unwind) return; RELOAD();
/* 98a22c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98a230: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98a233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a234: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a237: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a239: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a23a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98a23b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a23c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a23d: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 98a241: call 0x98f100 */
  esp -= 4; W32(esp, 0x98a246u); SPILL(); f_98f100(); if (g_unwind) return; RELOAD();
/* 98a246: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 98a24a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a24d: jmp 0x98a365 */
  goto L_98a365;
L_98a252: /* 98a252: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a255: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a258: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25a: /* 98a25a: cmp dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a25d: jle 0x98a293 */
  if ((zf || sf != of)) goto L_98a293;
L_98a25f: /* 98a25f: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 98a266: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98a26a: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 98a26d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98a270: imul ecx, dword ptr [eax] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax)));
  ecx = (uint32_t)r;
  }
/* 98a273: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 98a276: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98a279: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98a27c: mov edx, ecx */
  edx = ecx;
/* 98a27e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98a281: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 98a283: mov ecx, edx */
  ecx = edx;
/* 98a285: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98a288: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 98a28a: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98a28e: jmp 0x98a333 */
  goto L_98a333;
L_98a293: /* 98a293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a295: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a298: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a29c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a2a4: jle 0x98a333 */
  if ((zf || sf != of)) goto L_98a333;
L_98a2aa: /* 98a2aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98a2b0: /* 98a2b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2b2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a2b5: mov edx, eax */
  edx = eax;
/* 98a2b7: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* 98a2bc: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a2bf: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2c3: mov esi, ebx */
  esi = ebx;
/* 98a2c5: je 0x98a2ca */
  if (zf) goto L_98a2ca;
L_98a2c7: /* 98a2c7: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
L_98a2ca: /* 98a2ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a2cc: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a2d4: jle 0x98a31d */
  if ((zf || sf != of)) goto L_98a31d;
L_98a2d6: /* 98a2d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a2d8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98a2db: mov ecx, esi */
  ecx = esi;
/* 98a2dd: je 0x98a622 */
  if (zf) goto L_98a622;
L_98a2e3: /* 98a2e3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 98a2e6: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_98a2e9: /* 98a2e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a2ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a2ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98a2ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a2ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a2f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98a2f1: call 0x987d90 */
  esp -= 4; W32(esp, 0x98a2f6u); SPILL(); f_987d90(); if (g_unwind) return; RELOAD();
/* 98a2f6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98a2fa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98a2fc: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a300: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a303: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 98a307: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a309: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a30c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a30f: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a312: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98a315: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a317: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a31b: jl 0x98a2d6 */
  if ((sf != of)) goto L_98a2d6;
L_98a31d: /* 98a31d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98a321: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a324: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98a327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a329: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a32d: jl 0x98a2b0 */
  if ((sf != of)) goto L_98a2b0;
L_98a333: /* 98a333: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a335: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a336: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a337: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a339: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a33b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 98a33d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a342: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a344: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a346: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 98a349: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98a34d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a34e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a34f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a351: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a353: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98a357: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98a35b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a35c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98a35d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98a35f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98a361: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_98a365: /* 98a365: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 98a368: mov al, byte ptr [esi + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2387u))) & 0xffu);
/* 98a36e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a370: je 0x98a3d4 */
  if (zf) goto L_98a3d4;
L_98a372: /* 98a372: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a375: xor eax, eax */
  eax = 0;
/* 98a377: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a379: jle 0x98a3a8 */
  if ((zf || sf != of)) goto L_98a3a8;
L_98a37b: /* 98a37b: mov ecx, 4 */
  ecx = 0x4u;
L_98a380: /* 98a380: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a382: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a385: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a388: mov byte ptr [ebx + edx*4 + 3], 0 */
  W8((uint32_t)(ebx + edx*4 + 0x3u), 0x0u);
/* 98a38d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a38f: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98a392: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a395: lea edx, [edx + ebx - 4] */
  edx = (uint32_t)(edx + ebx + 0xfffffffcu);
/* 98a399: mov byte ptr [edx + 3], 0 */
  W8((uint32_t)(edx + 0x3u), 0x0u);
/* 98a39d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a3a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3a1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3a4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3a6: jl 0x98a380 */
  if ((sf != of)) goto L_98a380;
L_98a3a8: /* 98a3a8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3aa: xor eax, eax */
  eax = 0;
/* 98a3ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3ae: jle 0x98a3d4 */
  if ((zf || sf != of)) goto L_98a3d4;
L_98a3b0: /* 98a3b0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3b3: mov byte ptr [ecx + eax*4 + 3], 0 */
  W8((uint32_t)(ecx + eax*4 + 0x3u), 0x0u);
/* 98a3b8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 98a3bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a3bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 98a3be: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 98a3c1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a3c4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98a3c6: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 98a3c9: mov byte ptr [ecx + 3], 0 */
  W8((uint32_t)(ecx + 0x3u), 0x0u);
/* 98a3cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98a3cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a3d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a3d2: jl 0x98a3b0 */
  if ((sf != of)) goto L_98a3b0;
L_98a3d4: /* 98a3d4: mov al, byte ptr [esi + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2388u))) & 0xffu);
/* 98a3da: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a3dc: je 0x98a48b */
  if (zf) goto L_98a48b;
L_98a3e2: /* 98a3e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a3e5: xor eax, eax */
  eax = 0;
/* 98a3e7: add ecx, 0x238c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x238cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98a3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a3f0: /* 98a3f0: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a3f3: xor edx, edx */
  edx = 0;
/* 98a3f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a3f7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a3fb: jle 0x98a441 */
  if ((zf || sf != of)) goto L_98a441;
L_98a3fd: /* 98a3fd: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
L_98a405: /* 98a405: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 98a407: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a409: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 98a40c: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a40f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a412: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a415: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 98a419: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a41b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a41e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 98a421: lea esi, [edx + esi - 4] */
  esi = (uint32_t)(edx + esi + 0xfffffffcu);
/* 98a425: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a427: mov byte ptr [esi + eax], dl */
  W8((uint32_t)(esi + eax), (edx & 0xffu));
/* 98a42a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98a42e: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98a431: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98a432: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a435: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a437: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a43b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98a43f: jl 0x98a405 */
  if ((sf != of)) goto L_98a405;
L_98a441: /* 98a441: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a443: xor esi, esi */
  esi = 0;
/* 98a445: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a447: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a44b: jle 0x98a480 */
  if ((zf || sf != of)) goto L_98a480;
L_98a44d: /* 98a44d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a450: /* 98a450: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a452: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* 98a455: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a458: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 98a45b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a45e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 98a460: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98a464: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 98a465: imul ebx, edx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edx);
  ebx = (uint32_t)r;
  }
/* 98a468: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a46b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a46d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98a470: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98a472: mov byte ptr [edx + eax], bl */
  W8((uint32_t)(edx + eax), (ebx & 0xffu));
/* 98a475: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 98a477: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a478: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a47a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98a47e: jl 0x98a450 */
  if ((sf != of)) goto L_98a450;
L_98a480: /* 98a480: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98a481: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a482: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a485: jle 0x98a3f0 */
  if ((zf || sf != of)) goto L_98a3f0;
L_98a48b: /* 98a48b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a48e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98a492: cmp ecx, dword ptr [eax + 0x239c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x239cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a498: jl 0x98a89a */
  if ((sf != of)) goto L_98a89a;
L_98a49e: /* 98a49e: mov cl, byte ptr [eax + 0x2390] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2390u))) & 0xffu);
/* 98a4a4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4a6: je 0x98a812 */
  if (zf) goto L_98a812;
L_98a4ac: /* 98a4ac: mov cl, byte ptr [eax + 0x2385] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2385u))) & 0xffu);
/* 98a4b2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a4b4: je 0x98a670 */
  if (zf) goto L_98a670;
L_98a4ba: /* 98a4ba: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a4bd: xor ecx, ecx */
  ecx = 0;
/* 98a4bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4c1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a4c5: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a4cb: /* 98a4cb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a4cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a4d0: /* 98a4d0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a4d3: mov edx, ecx */
  edx = ecx;
/* 98a4d5: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a4d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a4da: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a4dd: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a4e5: jle 0x98a65b */
  if ((zf || sf != of)) goto L_98a65b;
L_98a4eb: /* 98a4eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a4ef: fstp qword ptr [esp + 0xd0] */
  WF64((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 98a4f6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98a4fa: fstp qword ptr [esp + 0xd8] */
  WF64((uint32_t)(esp + 0xd8u), ST0); FPOP();
L_98a501: /* 98a501: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a505: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a507: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a50b: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a50f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a514: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a516: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98a51a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a51e: jge 0x98a526 */
  if ((sf == of)) goto L_98a526;
L_98a520: /* 98a520: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a526: /* 98a526: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a528: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a52e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98a532: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a538: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a53c: jge 0x98a544 */
  if ((sf == of)) goto L_98a544;
L_98a53e: /* 98a53e: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a544: /* 98a544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a546: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a54c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98a550: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a556: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98a55a: jge 0x98a562 */
  if ((sf == of)) goto L_98a562;
L_98a55c: /* 98a55c: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a562: /* 98a562: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a568: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a56c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a572: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a579: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a580: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 98a582: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a589: fld qword ptr [esp + 0xd0] */
  { double v = F64((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 98a590: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a592: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a599: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98a59d: fld qword ptr [esp + 0xd8] */
  { double v = F64((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 98a5a4: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5ab: fst qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0);
/* 98a5b2: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a5b9: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a5c0: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* 98a5c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5c9: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5d0: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 98a5d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a5d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a5db: fabs  */
  ST0 = fabs(ST0);
/* 98a5dd: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a5e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a5e5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a5e8: jne 0x98a629 */
  if (!zf) goto L_98a629;
L_98a5ea: /* 98a5ea: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a5ec: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a5f2: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 98a5f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a5fb: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 98a602: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 98a609: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a60b: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 98a612: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* 98a619: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 98a620: jmp 0x98a62b */
  goto L_98a62b;
L_98a622: /* 98a622: mov eax, ebx */
  eax = ebx;
/* 98a624: jmp 0x98a2e9 */
  goto L_98a2e9;
L_98a629: /* 98a629: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a62b: /* 98a62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a62c: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 98a633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a634: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98a638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a639: call 0x987960 */
  esp -= 4; W32(esp, 0x98a63eu); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a63e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a642: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a644: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a647: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a648: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a64b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a64d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a651: jl 0x98a501 */
  if ((sf != of)) goto L_98a501;
L_98a657: /* 98a657: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98a65b: /* 98a65b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a65e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a65f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a661: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a665: jl 0x98a4d0 */
  if ((sf != of)) goto L_98a4d0;
L_98a66b: /* 98a66b: jmp 0x98a812 */
  goto L_98a812;
L_98a670: /* 98a670: mov cl, byte ptr [eax + 0x2386] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x2386u))) & 0xffu);
/* 98a676: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a678: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a67b: je 0x98a720 */
  if (zf) goto L_98a720;
L_98a681: /* 98a681: xor ecx, ecx */
  ecx = 0;
/* 98a683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a685: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a689: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a68f: /* 98a68f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a691: /* 98a691: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98a694: mov edx, ecx */
  edx = ecx;
/* 98a696: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a699: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 98a69c: xor esi, esi */
  esi = 0;
/* 98a69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a6a0: jle 0x98a70b */
  if ((zf || sf != of)) goto L_98a70b;
L_98a6a2: /* 98a6a2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_98a6a3: /* 98a6a3: movzx eax, byte ptr [ebx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a6a7: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a6aa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a6ae: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6b2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a6b6: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6bc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6c0: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6c4: fmul dword ptr [0xa21a68] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a68u)));
/* 98a6ca: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a6ce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 98a6d2: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6d8: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6de: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6e3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6e3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a6e7: fmul dword ptr [0xa21a64] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a64u)));
/* 98a6ed: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a6f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a6f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a6fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a6fb: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a6fd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a6ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a700: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a703: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a705: jl 0x98a6a3 */
  if ((sf != of)) goto L_98a6a3;
L_98a707: /* 98a707: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_98a70b: /* 98a70b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a70e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a70f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a711: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a715: jl 0x98a691 */
  if ((sf != of)) goto L_98a691;
L_98a71b: /* 98a71b: jmp 0x98a812 */
  goto L_98a812;
L_98a720: /* 98a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a722: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a72a: jle 0x98a812 */
  if ((zf || sf != of)) goto L_98a812;
L_98a730: /* 98a730: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a732: /* 98a732: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98a736: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98a739: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 98a73c: xor esi, esi */
  esi = 0;
/* 98a73e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a740: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 98a743: jle 0x98a7fe */
  if ((zf || sf != of)) goto L_98a7fe;
L_98a749: /* 98a749: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98a750: /* 98a750: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a753: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a756: movzx ecx, byte ptr [eax + 0x2394] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2394u)));
/* 98a75d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98a761: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a765: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a769: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a76d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a771: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a777: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a77d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a782: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a785: movzx ecx, byte ptr [ebx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a789: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a78b: movzx eax, byte ptr [edx + 0x2395] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2395u)));
/* 98a792: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a796: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a79a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a79e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7a2: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7a6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7ac: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7b2: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7b7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a7ba: movzx ecx, byte ptr [ebx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a7be: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 98a7c1: movzx eax, byte ptr [edx + 0x2396] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2396u)));
/* 98a7c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a7cc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7d0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a7d4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a7d8: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a7dc: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a7e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a7e2: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a7e8: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a7edu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a7ed: mov byte ptr [ebx + 2], al */
  W8((uint32_t)(ebx + 0x2u), (eax & 0xffu));
/* 98a7f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a7f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a7f3: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a7f6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a7f8: jl 0x98a750 */
  if ((sf != of)) goto L_98a750;
L_98a7fe: /* 98a7fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a802: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a805: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a806: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a808: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a80c: jl 0x98a732 */
  if ((sf != of)) goto L_98a732;
L_98a812: /* 98a812: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a815: mov al, byte ptr [edx + 0x2391] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2391u))) & 0xffu);
/* 98a81b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a81d: je 0x98a88b */
  if (zf) goto L_98a88b;
L_98a81f: /* 98a81f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a824: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a82c: jle 0x98a88b */
  if ((zf || sf != of)) goto L_98a88b;
L_98a82e: /* 98a82e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a830: /* 98a830: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a834: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a837: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a83a: xor esi, esi */
  esi = 0;
/* 98a83c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a83e: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a841: jle 0x98a87b */
  if ((zf || sf != of)) goto L_98a87b;
L_98a843: /* 98a843: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_98a846: /* 98a846: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* 98a849: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98a84c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98a850: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98a854: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 98a858: fild dword ptr [ecx + 0x2398] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x2398u)); FPUSH(v); }
/* 98a85e: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98a862: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a864: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98a86a: call 0x99c958 */
  esp -= 4; W32(esp, 0x98a86fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98a86f: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 98a871: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98a874: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a877: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a879: jl 0x98a846 */
  if ((sf != of)) goto L_98a846;
L_98a87b: /* 98a87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a87f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a882: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a883: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a885: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a889: jl 0x98a830 */
  if ((sf != of)) goto L_98a830;
L_98a88b: /* 98a88b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 98a88f: fmul dword ptr [esp + 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x9cu)));
/* 98a896: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
L_98a89a: /* 98a89a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98a89d: mov al, byte ptr [edx + 0x2385] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2385u))) & 0xffu);
/* 98a8a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a8a5: je 0x98a9ef */
  if (zf) goto L_98a9ef;
L_98a8ab: /* 98a8ab: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98a8ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8b0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98a8b8: jle 0x98a9ef */
  if ((zf || sf != of)) goto L_98a9ef;
L_98a8be: /* 98a8be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_98a8c0: /* 98a8c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a8c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 98a8c7: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 98a8ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8cc: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 98a8cf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 98a8d7: jle 0x98a9db */
  if ((zf || sf != of)) goto L_98a9db;
L_98a8dd: /* 98a8dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98a8e0: /* 98a8e0: movzx edx, byte ptr [ebx + 2] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x2u)));
/* 98a8e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98a8e6: movzx ecx, byte ptr [ebx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x3u)));
/* 98a8ea: movzx esi, byte ptr [ebx + 1] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 98a8ee: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98a8f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a8f5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98a8f9: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a8fd: jge 0x98a905 */
  if ((sf == of)) goto L_98a905;
L_98a8ff: /* 98a8ff: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a905: /* 98a905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a907: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a90d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98a911: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a917: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a91b: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a91f: jge 0x98a927 */
  if ((sf == of)) goto L_98a927;
L_98a921: /* 98a921: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a927: /* 98a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98a929: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a92f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98a933: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a939: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a93d: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 98a941: jge 0x98a949 */
  if ((sf == of)) goto L_98a949;
L_98a943: /* 98a943: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98a949: /* 98a949: fmul qword ptr [0xa219b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa219b8u)));
/* 98a94f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98a953: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 98a959: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a95d: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a961: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 98a965: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 98a969: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a96d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a96f: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a973: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 98a977: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98a979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98a97b: fabs  */
  ST0 = fabs(ST0);
/* 98a97d: fcomp qword ptr [0xa219a8] */
  fpu_com(ST0, F64((uint32_t)(0xa219a8u)));
  FPOP();
/* 98a983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98a985: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98a988: jne 0x98a9b0 */
  if (!zf) goto L_98a9b0;
L_98a98a: /* 98a98a: fsqrt  */
  ST0 = sqrt(ST0);
/* 98a98c: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98a992: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 98a996: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a998: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 98a99c: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 98a9a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98a9a2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 98a9a6: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 98a9aa: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 98a9ae: jmp 0x98a9b2 */
  goto L_98a9b2;
L_98a9b0: /* 98a9b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_98a9b2: /* 98a9b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98a9b3: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 98a9b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98a9b8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 98a9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98a9bd: call 0x987960 */
  esp -= 4; W32(esp, 0x98a9c2u); SPILL(); f_987960(); if (g_unwind) return; RELOAD();
/* 98a9c2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98a9c6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98a9c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98a9cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9cc: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98a9cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98a9d5: jl 0x98a8e0 */
  if ((sf != of)) goto L_98a8e0;
L_98a9db: /* 98a9db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98a9df: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98a9e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98a9e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98a9e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98a9e9: jl 0x98a8c0 */
  if ((sf != of)) goto L_98a8c0;
L_98a9ef: /* 98a9ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98a9f2: cmp word ptr [eax + 0x237e], 0x1f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x237eu))); uint16_t b = (uint16_t)(0x1fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98a9fa: jne 0x98aa09 */
  if (!zf) goto L_98aa09;
L_98a9fc: /* 98a9fc: movsx edx, word ptr [eax + 0x2380] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0x2380u)));
/* 98aa03: cmp dword ptr [esp + 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa07: jge 0x98aa15 */
  if ((sf == of)) goto L_98aa15;
L_98aa09: /* 98aa09: mov al, byte ptr [esp + 0x37] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x37u))) & 0xffu);
/* 98aa0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa0f: je 0x989c82 */
  if (zf) goto L_989c82;
L_98aa15: /* 98aa15: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 98aa1c: mov byte ptr [esp + 0x934], 1 */
  W8((uint32_t)(esp + 0x934u), 0x1u);
/* 98aa24: call 0x98e840 */
  esp -= 4; W32(esp, 0x98aa29u); SPILL(); f_98e840(); if (g_unwind) return; RELOAD();
/* 98aa29: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 98aa2d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98aa31: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 98aa35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aa36: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aa38: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98aa3c: jl 0x989b20 */
  if ((sf != of)) goto L_989b20;
L_98aa42: /* 98aa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98aa43: call 0x98f0d0 */
  esp -= 4; W32(esp, 0x98aa48u); SPILL(); f_98f0d0(); if (g_unwind) return; RELOAD();
/* 98aa48: mov eax, dword ptr [esp + 0xc8] */
  eax = R32((uint32_t)(esp + 0xc8u));
/* 98aa4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98aa52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98aa54: je 0x98aa5f */
  if (zf) goto L_98aa5f;
L_98aa56: /* 98aa56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98aa57: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98aa5cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98aa5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98aa5f: /* 98aa5f: mov ecx, dword ptr [esp + 0x92c] */
  ecx = R32((uint32_t)(esp + 0x92cu));
/* 98aa66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98aa68: mov eax, 1 */
  eax = 0x1u;
/* 98aa6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98aa74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98aa75: mov esp, ebp */
  esp = ebp;
/* 98aa77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98aa78: ret  */
  esp += 4; SPILL(); return;
}

void f_98ab20(void) {
  LOAD_REGS();
L_98ab20: /* 98ab20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98ab24: mov dword ptr [0xb03f80], eax */
  W32((uint32_t)(0xb03f80u), eax);
/* 98ab29: ret  */
  esp += 4; SPILL(); return;
}

void f_98ab30(void) {
  LOAD_REGS();
L_98ab30: /* 98ab30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98ab34: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98ab38: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 98ab3b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 98ab3e: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ab43: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 98ab45: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 98ab47: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ab4a: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ab4d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ab50: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98ab53: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 98ab56: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ab59: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98ab5c: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98ab5f: ret  */
  esp += 4; SPILL(); return;
}

void f_98ab60(void) {
  LOAD_REGS();
L_98ab60: /* 98ab60: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98ab64: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98ab68: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98ab6c: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ab71: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 98ab73: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 98ab75: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ab78: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ab7b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ab7e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98ab81: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98ab84: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ab87: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98ab8a: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 98ab8d: ret  */
  esp += 4; SPILL(); return;
}

void f_98ab90(void) {
  LOAD_REGS();
L_98ab90: /* 98ab90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98ab94: xor eax, eax */
  eax = 0;
/* 98ab96: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98ab99: jne 0x98aba8 */
  if (!zf) goto L_98aba8;
L_98ab9b: /* 98ab9b: jmp 0x98aba0 */
  goto L_98aba0;
L_98aba0: /* 98aba0: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98aba2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aba3: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aba6: je 0x98aba0 */
  if (zf) goto L_98aba0;
L_98aba8: /* 98aba8: ret  */
  esp += 4; SPILL(); return;
}

void f_98ab9d(void) {
  LOAD_REGS();
L_98ab9d: /* 98ab9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98aba0: /* 98aba0: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98aba2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98aba3: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98aba6: je 0x98aba0 */
  if (zf) goto L_98aba0;
L_98aba8: /* 98aba8: ret  */
  esp += 4; SPILL(); return;
}

void f_98abb0(void) {
  LOAD_REGS();
L_98abb0: /* 98abb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98abb1: mov ebp, esp */
  ebp = esp;
/* 98abb3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 98abb6: sub esp, 0x344 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98abbc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98abbd: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98abc0: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98abc3: mov ecx, 4 */
  ecx = 0x4u;
/* 98abc8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98abca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98abcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98abcc: jae 0x98abd1 */
  if (!cf) goto L_98abd1;
L_98abce: /* 98abce: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
L_98abd1: /* 98abd1: cmp dword ptr [ebx + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98abd4: jae 0x98abd9 */
  if (!cf) goto L_98abd9;
L_98abd6: /* 98abd6: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
L_98abd9: /* 98abd9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98abdc: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 98abdf: mov dword ptr [eax + 4], 0x81806 */
  W32((uint32_t)(eax + 0x4u), 0x81806u);
/* 98abe6: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 98abe9: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 98abec: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 98abef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 98abf2: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 98abf5: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 98abf8: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 98abfb: mov dword ptr [eax + 0x48], 0x20 */
  W32((uint32_t)(eax + 0x48u), 0x20u);
/* 98ac02: mov edx, dword ptr [ebx + 0x4c] */
  edx = R32((uint32_t)(ebx + 0x4cu));
/* 98ac05: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98ac08: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98ac0a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98ac0d: mov dword ptr [eax + 0x4c], edx */
  W32((uint32_t)(eax + 0x4cu), edx);
/* 98ac10: mov dword ptr [eax + 0x54], ecx */
  W32((uint32_t)(eax + 0x54u), ecx);
/* 98ac13: mov dword ptr [eax + 0x50], 0x12345678 */
  W32((uint32_t)(eax + 0x50u), 0x12345678u);
/* 98ac1a: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 98ac1d: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ac20: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98ac23: lea esi, [ebx + 0x58] */
  esi = (uint32_t)(ebx + 0x58u);
/* 98ac26: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 98ac2a: xor ecx, ecx */
  ecx = 0;
/* 98ac2c: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 98ac30: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_98ac32: /* 98ac32: lea eax, [esi + ecx*4] */
  eax = (uint32_t)(esi + ecx*4);
/* 98ac35: mov eax, dword ptr [esp + eax + 0x40] */
  eax = R32((uint32_t)(esp + eax + 0x40u));
/* 98ac39: xor edx, edx */
  edx = 0;
/* 98ac3b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98ac3d: jne 0x98ac47 */
  if (!zf) goto L_98ac47;
L_98ac3f: /* 98ac3f: nop  */
L_98ac40: /* 98ac40: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98ac42: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98ac43: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98ac45: je 0x98ac40 */
  if (zf) goto L_98ac40;
L_98ac47: /* 98ac47: mov dword ptr [esp + ecx*4 + 0x40], edx */
  W32((uint32_t)(esp + ecx*4 + 0x40u), edx);
/* 98ac4b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ac4c: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ac4f: jl 0x98ac32 */
  if ((sf != of)) goto L_98ac32;
L_98ac51: /* 98ac51: mov edx, dword ptr [ebx + 0x64] */
  edx = R32((uint32_t)(ebx + 0x64u));
/* 98ac54: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ac56: je 0x98ac88 */
  if (zf) goto L_98ac88;
L_98ac58: /* 98ac58: mov eax, edx */
  eax = edx;
/* 98ac5a: xor esi, esi */
  esi = 0;
/* 98ac5c: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98ac5e: jne 0x98ac67 */
  if (!zf) goto L_98ac67;
L_98ac60: /* 98ac60: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98ac62: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ac63: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98ac65: je 0x98ac60 */
  if (zf) goto L_98ac60;
L_98ac67: /* 98ac67: mov ecx, esi */
  ecx = esi;
/* 98ac69: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98ac6b: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 98ac70: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 98ac74: imul edx, dword ptr [0xb03f80] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(0xb03f80u)));
  edx = (uint32_t)r;
  }
/* 98ac7b: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 98ac7d: shr edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
/* 98ac80: mov eax, edx */
  eax = edx;
/* 98ac82: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 98ac84: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
L_98ac88: /* 98ac88: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98ac8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98ac8d: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 98ac90: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 98ac94: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98ac98: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 98aca0: jle 0x98ba60 */
  if ((zf || sf != of)) goto L_98ba60;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}

void f_98ad73(void) {
  LOAD_REGS();
  goto L_98ad73;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad73: /* 98ad73: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 98ad7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}

void f_98ad8a(void) {
  LOAD_REGS();
  goto L_98ad8a;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad8a: /* 98ad8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}

void f_98ae6d(void) {
  LOAD_REGS();
  goto L_98ae6d;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae6d: /* 98ae6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}
