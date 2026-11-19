#include "recomp.h"
#include "rec_mod.h"

void f_975a00(void) {
  LOAD_REGS();
L_975a00: /* 975a00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 975a04: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 975a08: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 975a0a: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 975a0c: ret  */
  esp += 4; SPILL(); return;
}

void f_975a10(void) {
  LOAD_REGS();
L_975a10: /* 975a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975a11: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 975a15: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 975a18: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975a1b: jl 0x975a21 */
  if ((sf != of)) goto L_975a21;
L_975a1d: /* 975a1d: xor eax, eax */
  eax = 0;
/* 975a1f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975a20: ret  */
  esp += 4; SPILL(); return;
L_975a21: /* 975a21: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 975a25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975a26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975a27: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 975a2a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 975a2c: mov esi, edi */
  esi = edi;
/* 975a2e: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 975a30: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975a32: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 975a35: mov dword ptr [eax + edi*4], ecx */
  W32((uint32_t)(eax + edi*4), ecx);
/* 975a38: je 0x975a6c */
  if (zf) goto L_975a6c;
L_975a3a: /* 975a3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_975a40: /* 975a40: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 975a42: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 975a45: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 975a48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975a49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975a4a: call dword ptr [ebx + 0xc] */
  { uint32_t t = R32((uint32_t)(ebx + 0xcu)); esp -= 4; W32(esp, 0x975a4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975a4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975a50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975a52: je 0x975a6c */
  if (zf) goto L_975a6c;
L_975a54: /* 975a54: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 975a56: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 975a59: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 975a5c: mov dword ptr [eax + edi*4], edx */
  W32((uint32_t)(eax + edi*4), edx);
/* 975a5f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 975a61: mov dword ptr [eax + esi*4], ecx */
  W32((uint32_t)(eax + esi*4), ecx);
/* 975a64: mov edi, esi */
  edi = esi;
/* 975a66: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 975a68: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975a6a: jne 0x975a40 */
  if (!zf) goto L_975a40;
L_975a6c: /* 975a6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975a6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975a6e: mov eax, 1 */
  eax = 0x1u;
/* 975a73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975a74: ret  */
  esp += 4; SPILL(); return;
}

void f_975a80(void) {
  LOAD_REGS();
L_975a80: /* 975a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975a81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 975a85: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 975a88: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975a8b: jge 0x975a91 */
  if ((sf == of)) goto L_975a91;
L_975a8d: /* 975a8d: xor eax, eax */
  eax = 0;
/* 975a8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975a90: ret  */
  esp += 4; SPILL(); return;
L_975a91: /* 975a91: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 975a93: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 975a96: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 975a99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975a9a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 975a9d: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 975aa1: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 975aa4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 975aa5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975aa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975aa7: mov eax, edx */
  eax = edx;
/* 975aa9: mov edi, 2 */
  edi = 0x2u;
/* 975aae: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975ab0: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 975ab3: mov ebx, 1 */
  ebx = 0x1u;
/* 975ab8: jl 0x975b2a */
  if ((sf != of)) goto L_975b2a;
L_975aba: /* 975aba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_975ac0: /* 975ac0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 975ac2: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 975ac5: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 975ac8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975ac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975aca: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0x975acdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975acd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975ad0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975ad2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 975ad5: je 0x975af2 */
  if (zf) goto L_975af2;
L_975ad7: /* 975ad7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 975ad8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975ada: jg 0x975b2a */
  if ((!zf && sf == of)) goto L_975b2a;
L_975adc: /* 975adc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 975ade: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 975ae1: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 975ae4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975ae5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975ae6: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0x975ae9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975ae9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975aec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975aee: jne 0x975b2a */
  if (!zf) goto L_975b2a;
L_975af0: /* 975af0: jmp 0x975b0f */
  goto L_975b0f;
L_975af2: /* 975af2: lea ebp, [edi + 1] */
  ebp = (uint32_t)(edi + 0x1u);
/* 975af5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975af7: jg 0x975b0f */
  if ((!zf && sf == of)) goto L_975b0f;
L_975af9: /* 975af9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 975afb: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 975afe: mov edx, dword ptr [eax + ebp*4] */
  edx = R32((uint32_t)(eax + ebp*4));
/* 975b01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975b02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975b03: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0x975b06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975b06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975b09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975b0b: je 0x975b0f */
  if (zf) goto L_975b0f;
L_975b0d: /* 975b0d: mov edi, ebp */
  edi = ebp;
L_975b0f: /* 975b0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 975b11: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 975b14: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 975b17: mov dword ptr [eax + edi*4], edx */
  W32((uint32_t)(eax + edi*4), edx);
/* 975b1a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 975b1c: mov dword ptr [eax + ebx*4], ecx */
  W32((uint32_t)(eax + ebx*4), ecx);
/* 975b1f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 975b22: mov ebx, edi */
  ebx = edi;
/* 975b24: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 975b26: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975b28: jle 0x975ac0 */
  if ((zf || sf != of)) goto L_975ac0;
L_975b2a: /* 975b2a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 975b2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975b2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 975b30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975b31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975b32: ret  */
  esp += 4; SPILL(); return;
}

void f_975b40(void) {
  LOAD_REGS();
L_975b40: /* 975b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975b41: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 975b43: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x975b49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975b49: mov esi, eax */
  esi = eax;
/* 975b4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 975b4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975b50: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 975b54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975b55: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 975b5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975b5d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x975b63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975b63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975b64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975b65: call 0x9759d0 */
  esp -= 4; W32(esp, 0x975b6au); SPILL(); f_9759d0(); if (g_unwind) return; RELOAD();
/* 975b6a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975b6d: mov eax, esi */
  eax = esi;
/* 975b6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975b70: ret  */
  esp += 4; SPILL(); return;
}

void f_975b80(void) {
  LOAD_REGS();
L_975b80: /* 975b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975b81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 975b85: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 975b87: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 975b8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975b8b: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975b91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975b91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975b92: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975b98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975b98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975b99: ret  */
  esp += 4; SPILL(); return;
}

void f_975ba0(void) {
  LOAD_REGS();
L_975ba0: /* 975ba0: mov eax, 0xb022b4 */
  eax = 0xb022b4u;
/* 975ba5: ret  */
  esp += 4; SPILL(); return;
}

void f_975bb0(void) {
  LOAD_REGS();
L_975bb0: /* 975bb0: mov eax, dword ptr [0xcf2f90] */
  eax = R32((uint32_t)(0xcf2f90u));
/* 975bb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975bb7: jne 0x975bc8 */
  if (!zf) goto L_975bc8;
L_975bb9: /* 975bb9: push 0xb022cc */
  { uint32_t v = 0xb022ccu; esp -= 4; W32(esp, v); }
/* 975bbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 975bc0: call 0x971de0 */
  esp -= 4; W32(esp, 0x975bc5u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 975bc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_975bc8: /* 975bc8: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_975bd0(void) {
  LOAD_REGS();
L_975bd0: /* 975bd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 975bd4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 975bd7: ja 0x975c01 */
  if ((!cf && !zf)) goto L_975c01;
L_975bd9: /* 975bd9: jmp dword ptr [eax*4 + 0x975c2c] */
  switch (R32((uint32_t)(eax*4 + 0x975c2cu))) {
    case 0x975be0u: goto L_975be0;
    case 0x975be4u: goto L_975be4;
    case 0x975bf3u: goto L_975bf3;
    case 0x975bfau: goto L_975bfa;
    default: guest_badjump(0x975bd9, R32((uint32_t)(eax*4 + 0x975c2cu))); return;
  }
L_975be0: /* 975be0: xor eax, eax */
  eax = 0;
/* 975be2: jmp 0x975c15 */
  goto L_975c15;
L_975be4: /* 975be4: mov eax, 0x301 */
  eax = 0x301u;
/* 975be9: mov dword ptr [esp + 8], 0x180 */
  W32((uint32_t)(esp + 0x8u), 0x180u);
/* 975bf1: jmp 0x975c15 */
  goto L_975c15;
L_975bf3: /* 975bf3: mov eax, 0x10a */
  eax = 0x10au;
/* 975bf8: jmp 0x975c15 */
  goto L_975c15;
L_975bfa: /* 975bfa: mov eax, 0x8000 */
  eax = 0x8000u;
/* 975bff: jmp 0x975c15 */
  goto L_975c15;
L_975c01: /* 975c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975c02: push 0xb02308 */
  { uint32_t v = 0xb02308u; esp -= 4; W32(esp, v); }
/* 975c07: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 975c09: call 0x971e40 */
  esp -= 4; W32(esp, 0x975c0eu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 975c0e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 975c12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_975c15: /* 975c15: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 975c19: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 975c1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975c1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975c1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975c20: call dword ptr [0xcfb10c] */
  esp -= 4; W32(esp, 0x975c26u); SPILL(); f_424d0a(); if (g_unwind) return; /* MSVCR70!_open */ RELOAD();
/* 975c26: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975c29: ret 8 */
  esp += 12; SPILL(); return;
}

void f_975c40(void) {
  LOAD_REGS();
L_975c40: /* 975c40: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 975c44: mov eax, ecx */
  eax = ecx;
/* 975c46: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 975c49: je 0x975c75 */
  if (zf) goto L_975c75;
L_975c4b: /* 975c4b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 975c4c: je 0x975c6e */
  if (zf) goto L_975c6e;
L_975c4e: /* 975c4e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 975c4f: je 0x975c67 */
  if (zf) goto L_975c67;
L_975c51: /* 975c51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975c52: push 0xb02338 */
  { uint32_t v = 0xb02338u; esp -= 4; W32(esp, v); }
/* 975c57: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 975c59: call 0x971e40 */
  esp -= 4; W32(esp, 0x975c5eu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 975c5e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 975c62: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975c65: jmp 0x975c77 */
  goto L_975c77;
L_975c67: /* 975c67: mov eax, 2 */
  eax = 0x2u;
/* 975c6c: jmp 0x975c77 */
  goto L_975c77;
L_975c6e: /* 975c6e: mov eax, 1 */
  eax = 0x1u;
/* 975c73: jmp 0x975c77 */
  goto L_975c77;
L_975c75: /* 975c75: xor eax, eax */
  eax = 0;
L_975c77: /* 975c77: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975c7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975c7c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 975c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975c82: call dword ptr [0xcfb110] */
  esp -= 4; W32(esp, 0x975c88u); SPILL(); f_415ca2(); if (g_unwind) return; /* MSVCR70!_lseek */ RELOAD();
/* 975c88: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975c8b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_975c90(void) {
  LOAD_REGS();
L_975c90: /* 975c90: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 975c94: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 975c98: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 975c9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975c9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975c9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975c9f: call dword ptr [0xcfb114] */
  esp -= 4; W32(esp, 0x975ca5u); SPILL(); f_4251e0(); if (g_unwind) return; /* MSVCR70!_read */ RELOAD();
/* 975ca5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975ca8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_975cb0(void) {
  LOAD_REGS();
L_975cb0: /* 975cb0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 975cb4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 975cb8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 975cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975cbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975cbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975cbf: call dword ptr [0xcfb118] */
  esp -= 4; W32(esp, 0x975cc5u); SPILL(); f_41597f(); if (g_unwind) return; /* MSVCR70!_write */ RELOAD();
/* 975cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975cc8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_975cd0(void) {
  LOAD_REGS();
L_975cd0: /* 975cd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 975cd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975cd5: call dword ptr [0xcfb11c] */
  esp -= 4; W32(esp, 0x975cdbu); SPILL(); f_415b93(); if (g_unwind) return; /* MSVCR70!_close */ RELOAD();
/* 975cdb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975cde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975cf0(void) {
  LOAD_REGS();
L_975cf0: /* 975cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 975cf4: mov eax, dword ptr [eax*4 + 0xa21770] */
  eax = R32((uint32_t)(eax*4 + 0xa21770u));
/* 975cfb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975d00(void) {
  LOAD_REGS();
L_975d00: /* 975d00: mov eax, dword ptr [0xa21768] */
  eax = R32((uint32_t)(0xa21768u));
/* 975d05: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 975d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975d0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975d0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975d10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975d11: je 0x975d44 */
  if (zf) goto L_975d44;
L_975d13: /* 975d13: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 975d16: je 0x975d44 */
  if (zf) goto L_975d44;
L_975d18: /* 975d18: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 975d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975d1e: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 975d22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975d23: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x975d29u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 975d29: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 975d2c: xor eax, eax */
  eax = 0;
/* 975d2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 975d31: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* 975d35: mov byte ptr [esp + 0x11b], 0 */
  W8((uint32_t)(esp + 0x11bu), 0x0u);
/* 975d3d: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 975d3f: not ecx */
  ecx = ~ecx;
/* 975d41: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 975d42: jmp 0x975d4b */
  goto L_975d4b;
L_975d44: /* 975d44: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* 975d49: xor ecx, ecx */
  ecx = 0;
L_975d4b: /* 975d4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 975d4d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 975d55: call 0x975cf0 */
  esp -= 4; W32(esp, 0x975d5au); SPILL(); f_975cf0(); if (g_unwind) return; RELOAD();
/* 975d5a: mov esi, eax */
  esi = eax;
/* 975d5c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975d5e: je 0x975e38 */
  if (zf) goto L_975e38;
L_975d64: /* 975d64: mov ebp, dword ptr [esp + 0x120] */
  ebp = R32((uint32_t)(esp + 0x120u));
/* 975d6b: mov ebx, dword ptr [0xcfb0b4] */
  ebx = R32((uint32_t)(0xcfb0b4u));
/* 975d71: lea ecx, [esp + ecx + 0x18] */
  ecx = (uint32_t)(esp + ecx + 0x18u);
/* 975d75: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 975d79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_975d80: /* 975d80: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 975d84: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 975d87: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 975d89: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 975d8c: mov edi, esi */
  edi = esi;
/* 975d8e: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 975d90: not ecx */
  ecx = ~ecx;
/* 975d92: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 975d93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975d94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975d95: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975d96: call dword ptr [0xcfb080] */
  esp -= 4; W32(esp, 0x975d9cu); SPILL(); f_401a52(); if (g_unwind) return; /* MSVCR70!strncmp */ RELOAD();
/* 975d9c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975d9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975da1: je 0x975dc4 */
  if (zf) goto L_975dc4;
L_975da3: /* 975da3: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 975da6: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 975da8: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* 975dac: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 975dae: not ecx */
  ecx = ~ecx;
/* 975db0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 975db1: mov eax, 0x104 */
  eax = 0x104u;
/* 975db6: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 975db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975db9: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 975dbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975dbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975dbf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x975dc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975dc1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_975dc4: /* 975dc4: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 975dc7: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 975dc9: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* 975dcd: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 975dcf: not ecx */
  ecx = ~ecx;
/* 975dd1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 975dd2: mov edx, 0x104 */
  edx = 0x104u;
/* 975dd7: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 975dd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975dda: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 975dde: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975ddf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975de0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x975de2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975de2: mov ecx, dword ptr [esp + 0x130] */
  ecx = R32((uint32_t)(esp + 0x130u));
/* 975de9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975dec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975ded: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 975df1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975df2: mov byte ptr [esp + 0x123], 0 */
  W8((uint32_t)(esp + 0x123u), 0x0u);
/* 975dfa: call 0x975bd0 */
  esp -= 4; W32(esp, 0x975dffu); SPILL(); f_975bd0(); if (g_unwind) return; RELOAD();
/* 975dff: mov ecx, eax */
  ecx = eax;
/* 975e01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 975e03: jge 0x975e29 */
  if ((sf == of)) goto L_975e29;
L_975e05: /* 975e05: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 975e0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975e0e: je 0x975e29 */
  if (zf) goto L_975e29;
L_975e10: /* 975e10: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 975e14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 975e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975e16: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 975e1a: call 0x975cf0 */
  esp -= 4; W32(esp, 0x975e1fu); SPILL(); f_975cf0(); if (g_unwind) return; RELOAD();
/* 975e1f: mov esi, eax */
  esi = eax;
/* 975e21: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975e23: jne 0x975d80 */
  if (!zf) goto L_975d80;
L_975e29: /* 975e29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975e2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975e2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 975e2c: mov eax, ecx */
  eax = ecx;
/* 975e2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975e2f: add esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975e35: ret 0xc */
  esp += 16; SPILL(); return;
L_975e38: /* 975e38: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 975e3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975e3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975e3e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 975e3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975e40: add esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975e46: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_975e50(void) {
  LOAD_REGS();
L_975e50: /* 975e50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 975e54: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975e58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 975e5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975e5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975e5c: call 0x975d00 */
  esp -= 4; W32(esp, 0x975e61u); SPILL(); f_975d00(); if (g_unwind) return; RELOAD();
/* 975e61: ret 8 */
  esp += 12; SPILL(); return;
}

void f_975e70(void) {
  LOAD_REGS();
L_975e70: /* 975e70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 975e74: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975e78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 975e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975e7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975e7c: call 0x975d00 */
  esp -= 4; W32(esp, 0x975e81u); SPILL(); f_975d00(); if (g_unwind) return; RELOAD();
/* 975e81: ret 8 */
  esp += 12; SPILL(); return;
}

void f_975e90(void) {
  LOAD_REGS();
L_975e90: /* 975e90: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 975e94: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 975e96: mov dword ptr [0xcf2f98], eax */
  W32((uint32_t)(0xcf2f98u), eax);
/* 975e9b: mov dword ptr [0xcf2fb4], 0 */
  W32((uint32_t)(0xcf2fb4u), 0x0u);
/* 975ea5: mov dword ptr [0xcf2fb0], 0 */
  W32((uint32_t)(0xcf2fb0u), 0x0u);
/* 975eaf: mov dword ptr [0xcf2fa0], 0x3e4ccccd */
  W32((uint32_t)(0xcf2fa0u), 0x3e4ccccdu);
/* 975eb9: mov dword ptr [0xcf2fa4], 0xa */
  W32((uint32_t)(0xcf2fa4u), 0xau);
/* 975ec3: mov dword ptr [0xcf2f9c], 1 */
  W32((uint32_t)(0xcf2f9cu), 0x1u);
/* 975ecd: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x975ed3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975ed3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975ed7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 975edb: mov dword ptr [0xcf2fb8], eax */
  W32((uint32_t)(0xcf2fb8u), eax);
/* 975ee0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 975ee2: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 975ee6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975ee8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 975eeb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 975eef: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 975ef2: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 975ef5: jne 0x975f03 */
  if (!zf) goto L_975f03;
L_975ef7: /* 975ef7: mov eax, dword ptr [0xcf2fb8] */
  eax = R32((uint32_t)(0xcf2fb8u));
/* 975efc: mov dword ptr [eax + 8], 0xcf2fac */
  W32((uint32_t)(eax + 0x8u), 0xcf2facu);
L_975f03: /* 975f03: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975f05: jne 0x975f14 */
  if (!zf) goto L_975f14;
L_975f07: /* 975f07: mov ecx, dword ptr [0xcf2fb8] */
  ecx = R32((uint32_t)(0xcf2fb8u));
/* 975f0d: mov dword ptr [ecx + 0xc], 0xcf2fa8 */
  W32((uint32_t)(ecx + 0xcu), 0xcf2fa8u);
L_975f14: /* 975f14: mov edx, dword ptr [0xcf2fb8] */
  edx = R32((uint32_t)(0xcf2fb8u));
/* 975f1a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 975f1c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 975f1f: mov eax, esp */
  eax = esp;
/* 975f21: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 975f23: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 975f26: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 975f29: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 975f2c: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 975f2f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 975f32: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 975f35: call 0x977f50 */
  esp -= 4; W32(esp, 0x975f3au); SPILL(); f_977f50(); if (g_unwind) return; RELOAD();
/* 975f3a: call 0x977f00 */
  esp -= 4; W32(esp, 0x975f3fu); SPILL(); f_977f00(); if (g_unwind) return; RELOAD();
/* 975f3f: mov byte ptr [0xcf2fbc], 1 */
  W8((uint32_t)(0xcf2fbcu), 0x1u);
/* 975f46: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_975f50(void) {
  LOAD_REGS();
L_975f50: /* 975f50: mov eax, dword ptr [0xcf2fb8] */
  eax = R32((uint32_t)(0xcf2fb8u));
/* 975f55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975f56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975f57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975f58: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975f5e: mov eax, dword ptr [0xcf2fb4] */
  eax = R32((uint32_t)(0xcf2fb4u));
/* 975f63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975f65: je 0x975f76 */
  if (zf) goto L_975f76;
L_975f67: /* 975f67: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 975f69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975f6a: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975f70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975f70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975f72: mov eax, esi */
  eax = esi;
/* 975f74: jne 0x975f67 */
  if (!zf) goto L_975f67;
L_975f76: /* 975f76: mov edi, dword ptr [0xcf2fb0] */
  edi = R32((uint32_t)(0xcf2fb0u));
/* 975f7c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975f7e: je 0x975fad */
  if (zf) goto L_975fad;
L_975f80: /* 975f80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_975f81: /* 975f81: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 975f84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975f86: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 975f88: je 0x975f9f */
  if (zf) goto L_975f9f;
L_975f8a: /* 975f8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_975f90: /* 975f90: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 975f92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975f93: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975f99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975f99: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975f9b: mov eax, esi */
  eax = esi;
/* 975f9d: jne 0x975f90 */
  if (!zf) goto L_975f90;
L_975f9f: /* 975f9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975fa0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975fa6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975fa6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975fa8: mov edi, ebx */
  edi = ebx;
/* 975faa: jne 0x975f81 */
  if (!zf) goto L_975f81;
L_975fac: /* 975fac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_975fad: /* 975fad: call 0x977f70 */
  esp -= 4; W32(esp, 0x975fb2u); SPILL(); f_977f70(); if (g_unwind) return; RELOAD();
/* 975fb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975fb3: mov byte ptr [0xcf2fbc], 0 */
  W8((uint32_t)(0xcf2fbcu), 0x0u);
/* 975fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975fbb: ret  */
  esp += 4; SPILL(); return;
}

void f_975fc0(void) {
  LOAD_REGS();
L_975fc0: /* 975fc0: mov eax, dword ptr [0xcf2fb0] */
  eax = R32((uint32_t)(0xcf2fb0u));
/* 975fc5: xor ecx, ecx */
  ecx = 0;
/* 975fc7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 975fc9: je 0x975fef */
  if (zf) goto L_975fef;
L_975fcb: /* 975fcb: mov eax, dword ptr [0xcf2fb4] */
  eax = R32((uint32_t)(0xcf2fb4u));
/* 975fd0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 975fd2: je 0x975fef */
  if (zf) goto L_975fef;
L_975fd4: /* 975fd4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 975fd7: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 975fda: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 975fdd: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 975fe0: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 975fe3: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 975fe6: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 975fe9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 975feb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 975fed: jne 0x975fd4 */
  if (!zf) goto L_975fd4;
L_975fef: /* 975fef: cmp byte ptr [0xcf2fbd], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcf2fbdu))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 975ff5: je 0x97600b */
  if (zf) goto L_97600b;
L_975ff7: /* 975ff7: push 0xb02578 */
  { uint32_t v = 0xb02578u; esp -= 4; W32(esp, v); }
/* 975ffc: push 0xafd340 */
  { uint32_t v = 0xafd340u; esp -= 4; W32(esp, v); }
/* 976001: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 976003: call 0x971e20 */
  esp -= 4; W32(esp, 0x976008u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 976008: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97600b: /* 97600b: mov byte ptr [0xcf2fbd], 1 */
  W8((uint32_t)(0xcf2fbdu), 0x1u);
/* 976012: jmp 0x977ee0 */
  goto L_977ee0;
L_977ee0: /* 977ee0: push 0xcf8e20 */
  { uint32_t v = 0xcf8e20u; esp -= 4; W32(esp, v); }
/* 977ee5: call 0x977ec0 */
  esp -= 4; W32(esp, 0x977eeau); SPILL(); f_977ec0(); if (g_unwind) return; RELOAD();
/* 977eea: xor eax, eax */
  eax = 0;
/* 977eec: ret  */
  esp += 4; SPILL(); return;
}

void f_976020(void) {
  LOAD_REGS();
L_976020: /* 976020: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 976023: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976024: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976025: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976027: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 97602b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97602c: call 0x977ec0 */
  esp -= 4; W32(esp, 0x976031u); SPILL(); f_977ec0(); if (g_unwind) return; RELOAD();
/* 976031: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 976037: xor edi, edi */
  edi = 0;
/* 976039: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97603b: je 0x97606e */
  if (zf) goto L_97606e;
L_97603d: /* 97603d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_976040: /* 976040: mov al, byte ptr [esi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x29u))) & 0xffu);
/* 976043: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 976045: je 0x976068 */
  if (zf) goto L_976068;
L_976047: /* 976047: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 97604a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97604b: call 0x9765b0 */
  esp -= 4; W32(esp, 0x976050u); SPILL(); f_9765b0(); if (g_unwind) return; RELOAD();
/* 976050: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 976053: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976054: push 0xb02600 */
  { uint32_t v = 0xb02600u; esp -= 4; W32(esp, v); }
/* 976059: push 0xafd340 */
  { uint32_t v = 0xafd340u; esp -= 4; W32(esp, v); }
/* 97605e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 976060: call 0x971e20 */
  esp -= 4; W32(esp, 0x976065u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 976065: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_976068: /* 976068: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 97606a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97606c: jne 0x976040 */
  if (!zf) goto L_976040;
L_97606e: /* 97606e: mov eax, dword ptr [0xcf2f98] */
  eax = R32((uint32_t)(0xcf2f98u));
/* 976073: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 976075: je 0x97616b */
  if (zf) goto L_97616b;
L_97607b: /* 97607b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97607c: je 0x97613e */
  if (zf) goto L_97613e;
L_976082: /* 976082: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 976083: jne 0x9761e6 */
  if (!zf) goto L_9761e6;
L_976089: /* 976089: mov ebp, dword ptr [0xcf2fb0] */
  ebp = R32((uint32_t)(0xcf2fb0u));
/* 97608f: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976091: je 0x976111 */
  if (zf) goto L_976111;
L_976093: /* 976093: mov ebx, dword ptr [0xcf8e20] */
  ebx = R32((uint32_t)(0xcf8e20u));
/* 976099: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 97609d: mov esi, dword ptr [0xcf8e24] */
  esi = R32((uint32_t)(0xcf8e24u));
/* 9760a3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9760a7: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 9760a9: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 9760ac: sbb edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 9760ae: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 9760b1: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 9760b3: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 9760b5: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 9760b8: mov dword ptr [ebp + 0x14], esi */
  W32((uint32_t)(ebp + 0x14u), esi);
/* 9760bb: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 9760be: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 9760c1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 9760c3: mov ecx, dword ptr [0xcf8e28] */
  ecx = R32((uint32_t)(0xcf8e28u));
/* 9760c9: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9760cd: mov ebx, dword ptr [0xcf8e2c] */
  ebx = R32((uint32_t)(0xcf8e2cu));
/* 9760d3: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 9760d5: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9760d9: sbb ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 9760db: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 9760dd: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 9760df: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 9760e2: mov dword ptr [ebp + 0x18], esi */
  W32((uint32_t)(ebp + 0x18u), esi);
/* 9760e5: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 9760e8: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 9760eb: mov eax, dword ptr [0xcf8e30] */
  eax = R32((uint32_t)(0xcf8e30u));
/* 9760f0: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9760f4: mov ebx, dword ptr [0xcf8e34] */
  ebx = R32((uint32_t)(0xcf8e34u));
/* 9760fa: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 9760fc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 976100: sbb eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 976102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 976104: adc ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976106: mov dword ptr [ebp + 0x20], esi */
  W32((uint32_t)(ebp + 0x20u), esi);
/* 976109: mov dword ptr [ebp + 0x24], ecx */
  W32((uint32_t)(ebp + 0x24u), ecx);
/* 97610c: jmp 0x9761ea */
  goto L_9761ea;
L_976111: /* 976111: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 976113: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x976119u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976119: mov ebp, eax */
  ebp = eax;
/* 97611b: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 97611e: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 976121: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 976124: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* 976127: mov dword ptr [ebp + 0x18], edi */
  W32((uint32_t)(ebp + 0x18u), edi);
/* 97612a: mov dword ptr [ebp + 0x1c], edi */
  W32((uint32_t)(ebp + 0x1cu), edi);
/* 97612d: mov dword ptr [ebp + 0x20], edi */
  W32((uint32_t)(ebp + 0x20u), edi);
/* 976130: mov dword ptr [ebp + 0x24], edi */
  W32((uint32_t)(ebp + 0x24u), edi);
/* 976133: mov dword ptr [0xcf2fb0], ebp */
  W32((uint32_t)(0xcf2fb0u), ebp);
/* 976139: jmp 0x9761ea */
  goto L_9761ea;
L_97613e: /* 97613e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 976140: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x976146u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976146: mov ebp, eax */
  ebp = eax;
/* 976148: cmp dword ptr [0xcf2fb0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2fb0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97614e: jne 0x976161 */
  if (!zf) goto L_976161;
L_976150: /* 976150: mov dword ptr [0xcf2fb0], ebp */
  W32((uint32_t)(0xcf2fb0u), ebp);
/* 976156: mov dword ptr [0xcf2fc8], edi */
  W32((uint32_t)(0xcf2fc8u), edi);
/* 97615c: jmp 0x9761ea */
  goto L_9761ea;
L_976161: /* 976161: mov ecx, dword ptr [0xcf2fcc] */
  ecx = R32((uint32_t)(0xcf2fccu));
/* 976167: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 976169: jmp 0x9761ea */
  goto L_9761ea;
L_97616b: /* 97616b: mov ebp, dword ptr [0xcf2fb0] */
  ebp = R32((uint32_t)(0xcf2fb0u));
/* 976171: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976173: jne 0x97618b */
  if (!zf) goto L_97618b;
L_976175: /* 976175: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 976177: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97617du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97617d: mov ebp, eax */
  ebp = eax;
/* 97617f: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 976182: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 976185: mov dword ptr [0xcf2fb0], ebp */
  W32((uint32_t)(0xcf2fb0u), ebp);
L_97618b: /* 97618b: mov esi, dword ptr [0xcf8e20] */
  esi = R32((uint32_t)(0xcf8e20u));
/* 976191: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 976195: mov ecx, dword ptr [0xcf8e24] */
  ecx = R32((uint32_t)(0xcf8e24u));
/* 97619b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 97619f: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 9761a1: sbb eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 9761a3: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 9761a6: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 9761a9: mov eax, dword ptr [0xcf8e28] */
  eax = R32((uint32_t)(0xcf8e28u));
/* 9761ae: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9761b2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9761b6: mov ebx, dword ptr [0xcf8e2c] */
  ebx = R32((uint32_t)(0xcf8e2cu));
/* 9761bc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 9761be: sbb edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 9761c0: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 9761c3: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 9761c6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9761ca: mov esi, dword ptr [0xcf8e30] */
  esi = R32((uint32_t)(0xcf8e30u));
/* 9761d0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9761d4: mov edx, dword ptr [0xcf8e34] */
  edx = R32((uint32_t)(0xcf8e34u));
/* 9761da: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 9761dc: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 9761de: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 9761e1: mov dword ptr [ebp + 0x24], ecx */
  W32((uint32_t)(ebp + 0x24u), ecx);
/* 9761e4: jmp 0x9761ea */
  goto L_9761ea;
L_9761e6: /* 9761e6: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_9761ea: /* 9761ea: mov edx, dword ptr [0xcf2fc8] */
  edx = R32((uint32_t)(0xcf2fc8u));
/* 9761f0: mov dword ptr [ebp + 4], edx */
  W32((uint32_t)(ebp + 0x4u), edx);
/* 9761f3: mov edx, dword ptr [0xcf2fc8] */
  edx = R32((uint32_t)(0xcf2fc8u));
/* 9761f9: mov eax, dword ptr [0xcf2f98] */
  eax = R32((uint32_t)(0xcf2f98u));
/* 9761fe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9761ff: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 976201: mov dword ptr [0xcf2fc8], edx */
  W32((uint32_t)(0xcf2fc8u), edx);
/* 976207: je 0x9763c4 */
  if (zf) goto L_9763c4;
L_97620d: /* 97620d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97620e: je 0x97635a */
  if (zf) goto L_97635a;
L_976214: /* 976214: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 976215: jne 0x976447 */
  if (!zf) goto L_976447;
L_97621b: /* 97621b: mov ebx, dword ptr [0xcf2fb4] */
  ebx = R32((uint32_t)(0xcf2fb4u));
/* 976221: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976223: je 0x976447 */
  if (zf) goto L_976447;
L_976229: /* 976229: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97622d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_976230: /* 976230: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 976233: xor ecx, ecx */
  ecx = 0;
/* 976235: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976237: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 97623b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 97623f: je 0x9762f1 */
  if (zf) goto L_9762f1;
L_976245: /* 976245: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976247: jne 0x9762a2 */
  if (!zf) goto L_9762a2;
L_976249: /* 976249: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 97624c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 97624f: nop  */
L_976250: /* 976250: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 976252: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 976254: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 976256: jne 0x976274 */
  if (!zf) goto L_976274;
L_976258: /* 976258: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97625a: je 0x976270 */
  if (zf) goto L_976270;
L_97625c: /* 97625c: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 97625f: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 976261: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 976264: jne 0x976274 */
  if (!zf) goto L_976274;
L_976266: /* 976266: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 976269: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97626c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97626e: jne 0x976250 */
  if (!zf) goto L_976250;
L_976270: /* 976270: xor eax, eax */
  eax = 0;
/* 976272: jmp 0x976279 */
  goto L_976279;
L_976274: /* 976274: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 976276: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_976279: /* 976279: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97627b: jne 0x97628c */
  if (!zf) goto L_97628c;
L_97627d: /* 97627d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 976281: mov ecx, 1 */
  ecx = 0x1u;
/* 976286: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 97628a: jmp 0x976290 */
  goto L_976290;
L_97628c: /* 97628c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_976290: /* 976290: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 976294: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 976296: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976298: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 97629c: jne 0x976245 */
  if (!zf) goto L_976245;
L_97629e: /* 97629e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9762a0: je 0x9762f1 */
  if (zf) goto L_9762f1;
L_9762a2: /* 9762a2: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9762a5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 9762a8: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 9762ab: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9762ad: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 9762b0: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 9762b3: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 9762b6: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 9762b8: mov dword ptr [edi + 0x10], esi */
  W32((uint32_t)(edi + 0x10u), esi);
/* 9762bb: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 9762be: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* 9762c1: adc ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 9762c3: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 9762c6: mov dword ptr [edi + 0x14], ecx */
  W32((uint32_t)(edi + 0x14u), ecx);
/* 9762c9: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 9762cc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 9762ce: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 9762d1: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 9762d4: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 9762d7: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 9762d9: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 9762dc: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 9762df: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 9762e1: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 9762e4: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* 9762e7: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 9762ea: adc eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 9762ec: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 9762ef: jmp 0x97634b */
  goto L_97634b;
L_9762f1: /* 9762f1: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 9762f3: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9762f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9762f9: mov edi, eax */
  edi = eax;
/* 9762fb: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 976301: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 976304: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 976307: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 97630a: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 97630d: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 976310: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 976313: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 976316: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 976319: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 97631c: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 97631f: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 976322: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 976325: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 976328: mov dword ptr [edi + 0x20], edx */
  W32((uint32_t)(edi + 0x20u), edx);
/* 97632b: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 97632e: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 976331: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 976334: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976336: jne 0x97633d */
  if (!zf) goto L_97633d;
L_976338: /* 976338: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 97633b: jmp 0x976345 */
  goto L_976345;
L_97633d: /* 97633d: mov ecx, dword ptr [0xcf2fd0] */
  ecx = R32((uint32_t)(0xcf2fd0u));
/* 976343: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_976345: /* 976345: mov dword ptr [0xcf2fd0], edi */
  W32((uint32_t)(0xcf2fd0u), edi);
L_97634b: /* 97634b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 97634d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97634f: jne 0x976230 */
  if (!zf) goto L_976230;
L_976355: /* 976355: jmp 0x976447 */
  goto L_976447;
L_97635a: /* 97635a: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 976360: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976362: je 0x976447 */
  if (zf) goto L_976447;
L_976368: /* 976368: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 97636a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x976370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976370: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 976372: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 976375: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 976378: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97637b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97637e: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 976381: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 976384: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 976387: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 97638a: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 97638d: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 976390: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 976393: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 976396: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 976399: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 97639c: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 97639f: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 9763a2: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9763a5: jne 0x9763ac */
  if (!zf) goto L_9763ac;
L_9763a7: /* 9763a7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 9763aa: jmp 0x9763b4 */
  goto L_9763b4;
L_9763ac: /* 9763ac: mov edx, dword ptr [0xcf2fd0] */
  edx = R32((uint32_t)(0xcf2fd0u));
/* 9763b2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
L_9763b4: /* 9763b4: mov dword ptr [0xcf2fd0], eax */
  W32((uint32_t)(0xcf2fd0u), eax);
/* 9763b9: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9763bb: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9763bd: jne 0x976368 */
  if (!zf) goto L_976368;
L_9763bf: /* 9763bf: jmp 0x976447 */
  goto L_976447;
L_9763c4: /* 9763c4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9763c7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9763c9: je 0x9763df */
  if (zf) goto L_9763df;
L_9763cb: /* 9763cb: nop  */
/* 9763cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9763d0: /* 9763d0: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 9763d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9763d3: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9763d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9763d9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9763db: mov eax, esi */
  eax = esi;
/* 9763dd: jne 0x9763d0 */
  if (!zf) goto L_9763d0;
L_9763df: /* 9763df: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 9763e2: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 9763e8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9763ea: je 0x976447 */
  if (zf) goto L_976447;
L_9763ec: /* 9763ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9763f0: /* 9763f0: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 9763f2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9763f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9763f8: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 9763fa: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9763fd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 976400: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 976403: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 976406: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 976409: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 97640c: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 97640f: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 976412: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 976415: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 976418: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 97641b: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 97641e: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 976421: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 976424: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 976427: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 97642a: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97642d: jne 0x976434 */
  if (!zf) goto L_976434;
L_97642f: /* 97642f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 976432: jmp 0x97643c */
  goto L_97643c;
L_976434: /* 976434: mov ecx, dword ptr [0xcf2fd0] */
  ecx = R32((uint32_t)(0xcf2fd0u));
/* 97643a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_97643c: /* 97643c: mov dword ptr [0xcf2fd0], eax */
  W32((uint32_t)(0xcf2fd0u), eax);
/* 976441: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976443: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976445: jne 0x9763f0 */
  if (!zf) goto L_9763f0;
L_976447: /* 976447: mov dword ptr [0xcf2fcc], ebp */
  W32((uint32_t)(0xcf2fccu), ebp);
/* 97644d: call 0x977ef0 */
  esp -= 4; W32(esp, 0x976452u); SPILL(); f_977ef0(); if (g_unwind) return; RELOAD();
/* 976452: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 976453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976454: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976455: mov byte ptr [0xcf2fbd], 0 */
  W8((uint32_t)(0xcf2fbdu), 0x0u);
/* 97645c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97645d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976460: ret  */
  esp += 4; SPILL(); return;
}

void f_976470(void) {
  LOAD_REGS();
L_976470: /* 976470: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 976473: mov al, byte ptr [0xcf2fbc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf2fbcu))) & 0xffu);
/* 976478: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976479: xor ebx, ebx */
  ebx = 0;
/* 97647b: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 97647d: mov dword ptr [esp + 4], ebx */
  W32((uint32_t)(esp + 0x4u), ebx);
/* 976481: je 0x97659c */
  if (zf) goto L_97659c;
L_976487: /* 976487: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976488: mov ebp, dword ptr [0xcf2fb4] */
  ebp = R32((uint32_t)(0xcf2fb4u));
/* 97648e: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976491: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976492: je 0x9764fa */
  if (zf) goto L_9764fa;
L_976494: /* 976494: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
L_976498: /* 976498: cmp byte ptr [ebp + 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x28u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 97649b: je 0x9764ab */
  if (zf) goto L_9764ab;
L_97649d: /* 97649d: cmp byte ptr [ebp + 0x29], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x29u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9764a0: je 0x9764ab */
  if (zf) goto L_9764ab;
L_9764a2: /* 9764a2: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9764a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9764a6: call 0x9765b0 */
  esp -= 4; W32(esp, 0x9764abu); SPILL(); f_9765b0(); if (g_unwind) return; RELOAD();
L_9764ab: /* 9764ab: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9764af: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
L_9764b2: /* 9764b2: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9764b4: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 9764b6: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9764b8: jne 0x9764d6 */
  if (!zf) goto L_9764d6;
L_9764ba: /* 9764ba: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9764bc: je 0x9764d2 */
  if (zf) goto L_9764d2;
L_9764be: /* 9764be: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 9764c1: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 9764c3: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9764c6: jne 0x9764d6 */
  if (!zf) goto L_9764d6;
L_9764c8: /* 9764c8: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9764cb: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9764ce: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9764d0: jne 0x9764b2 */
  if (!zf) goto L_9764b2;
L_9764d2: /* 9764d2: xor eax, eax */
  eax = 0;
/* 9764d4: jmp 0x9764db */
  goto L_9764db;
L_9764d6: /* 9764d6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 9764d8: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_9764db: /* 9764db: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9764dd: jne 0x9764e9 */
  if (!zf) goto L_9764e9;
L_9764df: /* 9764df: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 9764e7: mov edi, ebp */
  edi = ebp;
L_9764e9: /* 9764e9: mov esi, ebp */
  esi = ebp;
/* 9764eb: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 9764ee: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9764f0: jne 0x976498 */
  if (!zf) goto L_976498;
L_9764f2: /* 9764f2: cmp dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9764f6: jne 0x976553 */
  if (!zf) goto L_976553;
L_9764f8: /* 9764f8: jmp 0x9764fe */
  goto L_9764fe;
L_9764fa: /* 9764fa: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
L_9764fe: /* 9764fe: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 976500: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x976506u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976506: mov edi, eax */
  edi = eax;
/* 976508: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 97650a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 97650d: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 976510: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 976513: mov dword ptr [edi + 0x14], ebx */
  W32((uint32_t)(edi + 0x14u), ebx);
/* 976516: mov dword ptr [edi + 0x18], ebx */
  W32((uint32_t)(edi + 0x18u), ebx);
/* 976519: mov dword ptr [edi + 0x1c], ebx */
  W32((uint32_t)(edi + 0x1cu), ebx);
/* 97651c: mov dword ptr [edi + 0x20], ebx */
  W32((uint32_t)(edi + 0x20u), ebx);
/* 97651f: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 976522: mov byte ptr [edi + 0x28], bl */
  W8((uint32_t)(edi + 0x28u), (ebx & 0xffu));
/* 976525: mov byte ptr [edi + 0x29], bl */
  W8((uint32_t)(edi + 0x29u), (ebx & 0xffu));
/* 976528: mov dword ptr [edi + 0x30], ebx */
  W32((uint32_t)(edi + 0x30u), ebx);
/* 97652b: mov dword ptr [edi + 0x34], ebx */
  W32((uint32_t)(edi + 0x34u), ebx);
/* 97652e: mov dword ptr [edi + 0x38], ebx */
  W32((uint32_t)(edi + 0x38u), ebx);
/* 976531: mov dword ptr [edi + 0x3c], ebx */
  W32((uint32_t)(edi + 0x3cu), ebx);
/* 976534: mov dword ptr [edi + 0x40], ebx */
  W32((uint32_t)(edi + 0x40u), ebx);
/* 976537: mov dword ptr [edi + 0x44], ebx */
  W32((uint32_t)(edi + 0x44u), ebx);
/* 97653a: cmp dword ptr [0xcf2fb4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2fb4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976540: jne 0x97654a */
  if (!zf) goto L_97654a;
L_976542: /* 976542: mov dword ptr [0xcf2fb4], edi */
  W32((uint32_t)(0xcf2fb4u), edi);
/* 976548: jmp 0x97654c */
  goto L_97654c;
L_97654a: /* 97654a: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
L_97654c: /* 97654c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 976550: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_976553: /* 976553: mov cl, byte ptr [esp + 0x34] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x34u))) & 0xffu);
/* 976557: mov byte ptr [edi + 0x28], cl */
  W8((uint32_t)(edi + 0x28u), (ecx & 0xffu));
/* 97655a: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 97655d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 976561: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 976562: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976563: mov byte ptr [edi + 0x29], 1 */
  W8((uint32_t)(edi + 0x29u), 0x1u);
/* 976567: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 97656a: call 0x977ec0 */
  esp -= 4; W32(esp, 0x97656fu); SPILL(); f_977ec0(); if (g_unwind) return; RELOAD();
/* 97656f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 976573: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 976577: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 97657b: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
/* 97657e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 976582: mov dword ptr [edi + 0x34], ecx */
  W32((uint32_t)(edi + 0x34u), ecx);
/* 976585: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 976589: mov dword ptr [edi + 0x38], edx */
  W32((uint32_t)(edi + 0x38u), edx);
/* 97658c: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 976590: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 976593: mov dword ptr [edi + 0x40], ecx */
  W32((uint32_t)(edi + 0x40u), ecx);
/* 976596: mov dword ptr [edi + 0x44], edx */
  W32((uint32_t)(edi + 0x44u), edx);
/* 976599: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97659a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97659b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_97659c: /* 97659c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97659d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9765a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9765b0(void) {
  LOAD_REGS();
L_9765b0: /* 9765b0: mov al, byte ptr [0xcf2fbc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf2fbcu))) & 0xffu);
/* 9765b5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9765b8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9765ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9765bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9765bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9765bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9765be: je 0x9766ab */
  if (zf) goto L_9766ab;
L_9765c4: /* 9765c4: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9765c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9765c9: call 0x977ec0 */
  esp -= 4; W32(esp, 0x9765ceu); SPILL(); f_977ec0(); if (g_unwind) return; RELOAD();
/* 9765ce: mov edi, dword ptr [0xcf2fb4] */
  edi = R32((uint32_t)(0xcf2fb4u));
/* 9765d4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9765d6: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 9765da: je 0x976627 */
  if (zf) goto L_976627;
L_9765dc: /* 9765dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9765e0: /* 9765e0: mov al, byte ptr [edi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x29u))) & 0xffu);
/* 9765e3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9765e5: je 0x976621 */
  if (zf) goto L_976621;
L_9765e7: /* 9765e7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9765ea: mov esi, ebp */
  esi = ebp;
/* 9765ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9765f0: /* 9765f0: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9765f2: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 9765f4: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 9765f6: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9765f8: jne 0x976618 */
  if (!zf) goto L_976618;
L_9765fa: /* 9765fa: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9765fc: je 0x976614 */
  if (zf) goto L_976614;
L_9765fe: /* 9765fe: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 976601: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 976604: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 976606: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 976608: jne 0x976618 */
  if (!zf) goto L_976618;
L_97660a: /* 97660a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97660d: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 976610: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 976612: jne 0x9765f0 */
  if (!zf) goto L_9765f0;
L_976614: /* 976614: xor eax, eax */
  eax = 0;
/* 976616: jmp 0x97661d */
  goto L_97661d;
L_976618: /* 976618: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97661a: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97661d: /* 97661d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97661f: je 0x976641 */
  if (zf) goto L_976641;
L_976621: /* 976621: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 976623: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976625: jne 0x9765e0 */
  if (!zf) goto L_9765e0;
L_976627: /* 976627: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976628: push 0xb02668 */
  { uint32_t v = 0xb02668u; esp -= 4; W32(esp, v); }
/* 97662d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97662f: call 0x971e20 */
  esp -= 4; W32(esp, 0x976634u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 976634: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976637: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 976638: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976639: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97663a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97663b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97663e: ret 4 */
  esp += 8; SPILL(); return;
L_976641: /* 976641: mov ebx, dword ptr [edi + 0x30] */
  ebx = R32((uint32_t)(edi + 0x30u));
/* 976644: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 976647: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 97664a: mov ebp, dword ptr [edi + 0x38] */
  ebp = R32((uint32_t)(edi + 0x38u));
/* 97664d: mov byte ptr [edi + 0x29], 0 */
  W8((uint32_t)(edi + 0x29u), 0x0u);
/* 976651: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 976655: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 976659: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 97665b: mov ebx, dword ptr [edi + 0x3c] */
  ebx = R32((uint32_t)(edi + 0x3cu));
/* 97665e: sbb ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 976660: mov esi, dword ptr [edi + 0x18] */
  esi = R32((uint32_t)(edi + 0x18u));
/* 976663: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 976665: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 976668: adc eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 97666a: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 97666d: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 976670: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 976673: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 976677: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 97667b: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 97667d: mov ebp, dword ptr [edi + 0x40] */
  ebp = R32((uint32_t)(edi + 0x40u));
/* 976680: sbb eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 976682: mov ebx, dword ptr [edi + 0x44] */
  ebx = R32((uint32_t)(edi + 0x44u));
/* 976685: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 976687: adc ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976689: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 97668c: mov dword ptr [edi + 0x18], esi */
  W32((uint32_t)(edi + 0x18u), esi);
/* 97668f: mov esi, dword ptr [edi + 0x20] */
  esi = R32((uint32_t)(edi + 0x20u));
/* 976692: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 976695: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 976699: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 97669d: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 97669f: sbb edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 9766a1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 9766a3: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 9766a5: mov dword ptr [edi + 0x20], esi */
  W32((uint32_t)(edi + 0x20u), esi);
/* 9766a8: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
L_9766ab: /* 9766ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9766ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9766ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9766ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9766af: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9766b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9766c0(void) {
  LOAD_REGS();
L_9766c0: /* 9766c0: mov eax, dword ptr [0xcf2fb0] */
  eax = R32((uint32_t)(0xcf2fb0u));
/* 9766c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9766c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9766c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9766c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9766ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9766cb: jne 0x9766da */
  if (!zf) goto L_9766da;
L_9766cd: /* 9766cd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9766d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9766d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9766d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9766d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9766d7: ret 4 */
  esp += 8; SPILL(); return;
L_9766da: /* 9766da: mov cl, byte ptr [0xcf2fbd] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf2fbdu))) & 0xffu);
/* 9766e0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9766e2: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9766e6: je 0x9766fd */
  if (zf) goto L_9766fd;
L_9766e8: /* 9766e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9766e9: push 0xb026c8 */
  { uint32_t v = 0xb026c8u; esp -= 4; W32(esp, v); }
/* 9766ee: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9766f0: call 0x971e20 */
  esp -= 4; W32(esp, 0x9766f5u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9766f5: mov eax, dword ptr [0xcf2fb0] */
  eax = R32((uint32_t)(0xcf2fb0u));
/* 9766fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9766fd: /* 9766fd: mov ecx, dword ptr [0xcf2f98] */
  ecx = R32((uint32_t)(0xcf2f98u));
/* 976703: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 976706: je 0x976712 */
  if (zf) goto L_976712;
L_976708: /* 976708: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 976709: je 0x97674d */
  if (zf) goto L_97674d;
L_97670b: /* 97670b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 97670c: je 0x976712 */
  if (zf) goto L_976712;
L_97670e: /* 97670e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_976712: /* 976712: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 976715: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976717: je 0x97676c */
  if (zf) goto L_97676c;
L_976719: /* 976719: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_976720: /* 976720: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 976723: mov esi, ebp */
  esi = ebp;
L_976725: /* 976725: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 976727: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 976729: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97672b: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97672d: jne 0x97675d */
  if (!zf) goto L_97675d;
L_97672f: /* 97672f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 976731: je 0x976749 */
  if (zf) goto L_976749;
L_976733: /* 976733: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 976736: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 976739: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97673b: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97673d: jne 0x97675d */
  if (!zf) goto L_97675d;
L_97673f: /* 97673f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 976742: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 976745: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 976747: jne 0x976725 */
  if (!zf) goto L_976725;
L_976749: /* 976749: xor eax, eax */
  eax = 0;
/* 97674b: jmp 0x976762 */
  goto L_976762;
L_97674d: /* 97674d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97674f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976751: je 0x976712 */
  if (zf) goto L_976712;
L_976753: /* 976753: mov eax, ecx */
  eax = ecx;
/* 976755: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 976757: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976759: jne 0x976753 */
  if (!zf) goto L_976753;
L_97675b: /* 97675b: jmp 0x976712 */
  goto L_976712;
L_97675d: /* 97675d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97675f: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_976762: /* 976762: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976764: je 0x976779 */
  if (zf) goto L_976779;
L_976766: /* 976766: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 976768: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97676a: jne 0x976720 */
  if (!zf) goto L_976720;
L_97676c: /* 97676c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 976772: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 976773: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976774: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976775: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 976776: ret 4 */
  esp += 8; SPILL(); return;
L_976779: /* 976779: fild qword ptr [edi + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 97677c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97677d: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976783: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976784: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976785: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 976786: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 976788: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 97678e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9767a0(void) {
  LOAD_REGS();
L_9767a0: /* 9767a0: mov eax, dword ptr [0xcf2fc0] */
  eax = R32((uint32_t)(0xcf2fc0u));
/* 9767a5: mov edx, dword ptr [0xcf2fc4] */
  edx = R32((uint32_t)(0xcf2fc4u));
/* 9767ab: ret  */
  esp += 4; SPILL(); return;
}

void f_9767b0(void) {
  LOAD_REGS();
L_9767b0: /* 9767b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9767b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9767b4: mov esi, dword ptr [0xcf2fb0] */
  esi = R32((uint32_t)(0xcf2fb0u));
/* 9767ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9767bb: xor edi, edi */
  edi = 0;
/* 9767bd: xor ecx, ecx */
  ecx = 0;
/* 9767bf: xor edx, edx */
  edx = 0;
/* 9767c1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9767c3: jne 0x9767d1 */
  if (!zf) goto L_9767d1;
L_9767c5: /* 9767c5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9767cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9767cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9767cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9767d0: ret  */
  esp += 4; SPILL(); return;
L_9767d1: /* 9767d1: mov eax, esi */
  eax = esi;
L_9767d3: /* 9767d3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9767d5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9767d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9767d8: jne 0x9767d3 */
  if (!zf) goto L_9767d3;
L_9767da: /* 9767da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9767db: nop  */
/* 9767dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9767e0: /* 9767e0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9767e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9767e5: je 0x9767f7 */
  if (zf) goto L_9767f7;
L_9767e7: /* 9767e7: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 9767ea: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 9767ec: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 9767ef: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9767f1: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 9767f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9767f5: jne 0x9767e7 */
  if (!zf) goto L_9767e7;
L_9767f7: /* 9767f7: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9767f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9767fb: jne 0x9767e0 */
  if (!zf) goto L_9767e0;
L_9767fd: /* 9767fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9767fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9767ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976801: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x976806u); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 976806: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 97680a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 97680e: fild qword ptr [esp + 0xc] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 976812: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 976813: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976819: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97681a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97681b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 97681d: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976823: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976826: ret  */
  esp += 4; SPILL(); return;
}

void f_976830(void) {
  LOAD_REGS();
L_976830: /* 976830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976831: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 976837: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976839: je 0x97685d */
  if (zf) goto L_97685d;
L_97683b: /* 97683b: nop  */
/* 97683c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_976840: /* 976840: mov al, byte ptr [esi + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x28u))) & 0xffu);
/* 976843: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 976845: je 0x976857 */
  if (zf) goto L_976857;
L_976847: /* 976847: mov al, byte ptr [esi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x29u))) & 0xffu);
/* 97684a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97684c: je 0x976857 */
  if (zf) goto L_976857;
L_97684e: /* 97684e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 976851: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976852: call 0x9765b0 */
  esp -= 4; W32(esp, 0x976857u); SPILL(); f_9765b0(); if (g_unwind) return; RELOAD();
L_976857: /* 976857: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976859: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97685b: jne 0x976840 */
  if (!zf) goto L_976840;
L_97685d: /* 97685d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97685e: ret  */
  esp += 4; SPILL(); return;
}

void f_976860(void) {
  LOAD_REGS();
L_976860: /* 976860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976861: mov ebp, esp */
  ebp = esp;
/* 976863: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 976866: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 976869: mov eax, dword ptr [0xcf2f98] */
  eax = R32((uint32_t)(0xcf2f98u));
/* 97686e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97686f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976872: xor esi, esi */
  esi = 0;
/* 976874: xor edi, edi */
  edi = 0;
/* 976876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976878: jne 0x97688e */
  if (!zf) goto L_97688e;
L_97687a: /* 97687a: push 0xb02b38 */
  { uint32_t v = 0xb02b38u; esp -= 4; W32(esp, v); }
/* 97687f: push 0xafd340 */
  { uint32_t v = 0xafd340u; esp -= 4; W32(esp, v); }
/* 976884: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 976886: call 0x971e20 */
  esp -= 4; W32(esp, 0x97688bu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 97688b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97688e: /* 97688e: call 0x977f00 */
  esp -= 4; W32(esp, 0x976893u); SPILL(); f_977f00(); if (g_unwind) return; RELOAD();
/* 976893: mov edx, dword ptr [0xcf2fb0] */
  edx = R32((uint32_t)(0xcf2fb0u));
/* 976899: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97689b: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 97689f: mov eax, edx */
  eax = edx;
/* 9768a1: je 0x9768b7 */
  if (zf) goto L_9768b7;
L_9768a3: /* 9768a3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9768a5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9768a7: jne 0x9768ad */
  if (!zf) goto L_9768ad;
L_9768a9: /* 9768a9: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 9768ac: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_9768ad: /* 9768ad: mov eax, ecx */
  eax = ecx;
/* 9768af: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9768b1: jne 0x9768a3 */
  if (!zf) goto L_9768a3;
L_9768b3: /* 9768b3: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
L_9768b7: /* 9768b7: cmp dword ptr [0xcf2f98], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f98u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9768bd: jne 0x9768c8 */
  if (!zf) goto L_9768c8;
L_9768bf: /* 9768bf: mov ebx, 1 */
  ebx = 0x1u;
/* 9768c4: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
L_9768c8: /* 9768c8: mov eax, dword ptr [0xcf2fb4] */
  eax = R32((uint32_t)(0xcf2fb4u));
/* 9768cd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9768cf: je 0x9768d8 */
  if (zf) goto L_9768d8;
L_9768d1: /* 9768d1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9768d3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9768d4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9768d6: jne 0x9768d1 */
  if (!zf) goto L_9768d1;
L_9768d8: /* 9768d8: mov eax, dword ptr [0xcf2f9c] */
  eax = R32((uint32_t)(0xcf2f9cu));
/* 9768dd: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9768e0: ja 0x9770b6 */
  if ((!cf && !zf)) goto L_9770b6;
L_9768e6: /* 9768e6: jmp dword ptr [eax*4 + 0x9770d0] */
  switch (R32((uint32_t)(eax*4 + 0x9770d0u))) {
    case 0x9768edu: SPILL(); f_9768ed(); return;
    case 0x976967u: SPILL(); f_976967(); return;
    case 0x976bc7u: SPILL(); f_976bc7(); return;
    case 0x9770a9u: SPILL(); f_9770a9(); return;
    default: guest_badjump(0x9768e6, R32((uint32_t)(eax*4 + 0x9770d0u))); return;
  }
/* 9768ed: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9768ef: mov edi, edx */
  edi = edx;
/* 9768f1: je 0x9770c5 */
  if (zf) goto L_9770c5;
L_9768f7: /* 9768f7: jmp 0x976900 */
  goto L_976900;
L_9768f9: /* 9768f9: xor esi, esi */
  esi = 0;
/* 9768fb: nop  */
/* 9768fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_976900: /* 976900: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 976903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976904: push 0xb02b2c */
  { uint32_t v = 0xb02b2cu; esp -= 4; W32(esp, v); }
/* 976909: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97690a: call 0x971de0 */
  esp -= 4; W32(esp, 0x97690fu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 97690f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 976912: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976915: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976917: je 0x976959 */
  if (zf) goto L_976959;
L_976919: /* 976919: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_976920: /* 976920: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 976923: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 976926: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 976929: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97692a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97692b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97692c: push 0xb02b18 */
  { uint32_t v = 0xb02b18u; esp -= 4; W32(esp, v); }
/* 976931: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976933: call 0x971de0 */
  esp -= 4; W32(esp, 0x976938u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976938: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97693b: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 97693e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 976941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976942: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976944: push 0xb02b18 */
  { uint32_t v = 0xb02b18u; esp -= 4; W32(esp, v); }
/* 976949: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97694b: call 0x971de0 */
  esp -= 4; W32(esp, 0x976950u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976950: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976952: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976955: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976957: jne 0x976920 */
  if (!zf) goto L_976920;
L_976959: /* 976959: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 97695b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97695d: jne 0x9768f9 */
  if (!zf) goto L_9768f9;
L_97695f: /* 97695f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 976960: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976961: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976962: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 976963: mov esp, ebp */
  esp = ebp;
/* 976965: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976966: ret  */
  esp += 4; SPILL(); return;
/* 976967: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976969: lea ecx, [edi*8] */
  ecx = (uint32_t)(edi*8);
/* 976970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976971: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976977u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976977: xor ebp, ebp */
  ebp = 0;
/* 976979: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97697b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 97697f: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 976983: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 976987: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 97698b: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 97698f: jbe 0x9769b0 */
  if ((cf | zf)) goto L_9769b0;
L_976991: /* 976991: lea ecx, [edi*8 - 5] */
  ecx = (uint32_t)(edi*8 + 0xfffffffbu);
/* 976998: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 97699a: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 97699d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9769a0: mov esi, eax */
  esi = eax;
/* 9769a2: lea edi, [eax + 8] */
  edi = (uint32_t)(eax + 0x8u);
/* 9769a5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9769a7: xor esi, esi */
  esi = 0;
/* 9769a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9769b0: /* 9769b0: mov edx, dword ptr [0xcf2fb0] */
  edx = R32((uint32_t)(0xcf2fb0u));
/* 9769b6: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9769b8: je 0x976a17 */
  if (zf) goto L_976a17;
L_9769ba: /* 9769ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9769c0: /* 9769c0: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 9769c3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9769c7: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 9769cb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 9769cd: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 9769d0: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 9769d4: mov ecx, dword ptr [edx + 0x14] */
  ecx = R32((uint32_t)(edx + 0x14u));
/* 9769d7: adc edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 9769d9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9769db: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 9769df: je 0x976a0d */
  if (zf) goto L_976a0d;
L_9769e1: /* 9769e1: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
L_9769e5: /* 9769e5: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 9769e8: add dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ecx), r);
  }
/* 9769ea: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 9769ed: adc dword ptr [ecx + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 9769f0: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 9769f3: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 9769f7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9769fa: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebp = r;
  }
/* 9769fc: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 9769ff: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 976a01: adc edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 976a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976a05: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 976a09: jne 0x9769e5 */
  if (!zf) goto L_9769e5;
L_976a0b: /* 976a0b: xor esi, esi */
  esi = 0;
L_976a0d: /* 976a0d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 976a0f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976a11: jne 0x9769c0 */
  if (!zf) goto L_9769c0;
L_976a13: /* 976a13: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
L_976a17: /* 976a17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976a18: push 0xb02adc */
  { uint32_t v = 0xb02adcu; esp -= 4; W32(esp, v); }
/* 976a1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976a1e: call 0x971de0 */
  esp -= 4; W32(esp, 0x976a23u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976a23: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976a28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976a29: call 0x971de0 */
  esp -= 4; W32(esp, 0x976a2eu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976a2e: push 0xb02aa0 */
  { uint32_t v = 0xb02aa0u; esp -= 4; W32(esp, v); }
/* 976a33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976a34: call 0x971de0 */
  esp -= 4; W32(esp, 0x976a39u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976a39: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 976a3f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976a42: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976a44: je 0x976abe */
  if (zf) goto L_976abe;
L_976a46: /* 976a46: fild qword ptr [esp + 0x40] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 976a4a: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 976a4e: xor ebp, ebp */
  ebp = 0;
/* 976a50: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_976a54: /* 976a54: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 976a57: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 976a59: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976a5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976a5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976a5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976a5d: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 976a61: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 976a65: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x976a6au); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 976a6a: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 976a6e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 976a72: fild qword ptr [esp + 0x38] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 976a76: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 976a79: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976a7f: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 976a81: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976a87: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976a8b: fild qword ptr [esp + 0x40] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 976a8f: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 976a95: fdiv dword ptr [esp + 0x34] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x34u)));
/* 976a99: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976a9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976a9d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 976aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976aa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976aa2: push 0xb02a84 */
  { uint32_t v = 0xb02a84u; esp -= 4; W32(esp, v); }
/* 976aa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976aa9: call 0x971de0 */
  esp -= 4; W32(esp, 0x976aaeu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976aae: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976ab0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976ab3: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 976ab6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976ab8: jne 0x976a54 */
  if (!zf) goto L_976a54;
L_976aba: /* 976aba: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
L_976abe: /* 976abe: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 976ac2: xor esi, esi */
  esi = 0;
/* 976ac4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ac5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976ac6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ac7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976ac8: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x976acdu); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 976acd: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 976ad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ad2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976ad3: mov ebp, edx */
  ebp = edx;
/* 976ad5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 976ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976ada: mov edi, eax */
  edi = eax;
/* 976adc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976add: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 976ae1: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 976ae5: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x976aeau); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 976aea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976aeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976aec: mov esi, eax */
  esi = eax;
/* 976aee: mov ebx, edx */
  ebx = edx;
/* 976af0: push 0xb02a5c */
  { uint32_t v = 0xb02a5cu; esp -= 4; W32(esp, v); }
/* 976af5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976af7: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 976afb: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 976aff: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b04u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976b05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976b06: push 0xb02a34 */
  { uint32_t v = 0xb02a34u; esp -= 4; W32(esp, v); }
/* 976b0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b0d: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b12u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b12: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976b18: fild qword ptr [esp + 0x68] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 976b1c: mov eax, dword ptr [0xcf2fc0] */
  eax = R32((uint32_t)(0xcf2fc0u));
/* 976b21: mov ecx, dword ptr [0xcf2fc4] */
  ecx = R32((uint32_t)(0xcf2fc4u));
/* 976b27: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976b2a: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 976b2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b2e: add eax, 0x186a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 976b33: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 976b38: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976b3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976b3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976b3d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 976b41: fild qword ptr [esp + 0x50] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 976b45: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 976b47: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 976b4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 976b4d: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976b52u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976b52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976b53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976b54: push 0xb02a14 */
  { uint32_t v = 0xb02a14u; esp -= 4; W32(esp, v); }
/* 976b59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b5b: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b60u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b60: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976b64: fmul dword ptr [0xa217cc] */
  ST0 = ST0 * (F32((uint32_t)(0xa217ccu)));
/* 976b6a: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976b6e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976b72: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976b78: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976b7b: push 0xb029d0 */
  { uint32_t v = 0xb029d0u; esp -= 4; W32(esp, v); }
/* 976b80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b82: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b87u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b87: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 976b8b: fmul dword ptr [0xa217cc] */
  ST0 = ST0 * (F32((uint32_t)(0xa217ccu)));
/* 976b91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976b94: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976b98: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 976b9c: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976ba2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976ba5: push 0xb02988 */
  { uint32_t v = 0xb02988u; esp -= 4; W32(esp, v); }
/* 976baa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976bac: call 0x971de0 */
  esp -= 4; W32(esp, 0x976bb1u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976bb1: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 976bb5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976bb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976bb9: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x976bbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976bbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 976bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976bc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976bc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 976bc3: mov esp, ebp */
  esp = ebp;
/* 976bc5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976bc6: ret  */
  esp += 4; SPILL(); return;
/* 976bc7: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 976bcb: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 976bcf: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 976bd3: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 976bd7: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 976bdb: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 976bdf: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 976be3: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 976be7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976be9: lea esi, [edi*8] */
  esi = (uint32_t)(edi*8);
/* 976bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976bf1: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976bf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976bf7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976bf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976bfa: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 976bfe: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976c04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976c04: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976c06: mov ebp, eax */
  ebp = eax;
/* 976c08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976c09: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 976c0d: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976c13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976c13: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976c15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976c16: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 976c1a: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976c20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976c20: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 976c22: mov esi, eax */
  esi = eax;
/* 976c24: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 976c28: jbe 0x976c80 */
  if ((cf | zf)) goto L_976c80;
L_976c2a: /* 976c2a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 976c2e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 976c32: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976c34: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 976c36: mov eax, ebp */
  eax = ebp;
/* 976c38: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 976c3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_976c40: /* 976c40: mov dword ptr [ecx + eax], 0 */
  W32((uint32_t)(ecx + eax), 0x0u);
/* 976c47: mov dword ptr [ecx + eax + 4], 0 */
  W32((uint32_t)(ecx + eax + 0x4u), 0x0u);
/* 976c4f: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 976c55: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 976c5c: mov dword ptr [edx + eax], 0 */
  W32((uint32_t)(edx + eax), 0x0u);
/* 976c63: mov dword ptr [edx + eax + 4], 0 */
  W32((uint32_t)(edx + eax + 0x4u), 0x0u);
/* 976c6b: mov dword ptr [esi + eax], 0 */
  W32((uint32_t)(esi + eax), 0x0u);
/* 976c72: mov dword ptr [esi + eax + 4], 0 */
  W32((uint32_t)(esi + eax + 0x4u), 0x0u);
/* 976c7a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 976c7d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 976c7e: jne 0x976c40 */
  if (!zf) goto L_976c40;
L_976c80: /* 976c80: mov eax, dword ptr [0xcf2fb0] */
  eax = R32((uint32_t)(0xcf2fb0u));
/* 976c85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976c87: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 976c8b: je 0x976d68 */
  if (zf) goto L_976d68;
L_976c91: /* 976c91: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 976c94: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 976c98: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 976c9b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 976c9f: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 976ca1: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 976ca4: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 976ca6: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 976caa: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 976cac: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 976cb0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 976cb4: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 976cb7: adc ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976cb9: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 976cbc: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 976cc0: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 976cc4: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 976cc8: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 976ccb: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 976ccd: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 976cd0: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 976cd4: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 976cd8: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 976cda: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976cdc: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 976ce0: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 976ce4: je 0x976d5a */
  if (zf) goto L_976d5a;
L_976ce6: /* 976ce6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 976cea: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 976cee: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 976cf2: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 976cf4: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 976cf6: mov eax, ebp */
  eax = ebp;
/* 976cf8: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 976cfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_976d00: /* 976d00: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 976d03: add dword ptr [esp + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 976d07: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 976d0b: mov ebx, 0 */
  ebx = 0x0u;
/* 976d10: adc ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 976d12: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* 976d16: mov ebp, dword ptr [ecx + 8] */
  ebp = R32((uint32_t)(ecx + 0x8u));
/* 976d19: add dword ptr [eax + edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax + edx), r);
  }
/* 976d1c: adc dword ptr [eax + edx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + edx + 0x4u), r);
  }
/* 976d20: mov ebx, dword ptr [ecx + 0x10] */
  ebx = R32((uint32_t)(ecx + 0x10u));
/* 976d23: add dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax), r);
  }
/* 976d25: mov ebx, dword ptr [ecx + 0x14] */
  ebx = R32((uint32_t)(ecx + 0x14u));
/* 976d28: adc dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 976d2b: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* 976d2e: add dword ptr [eax + esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax + esi), r);
  }
/* 976d31: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* 976d34: adc dword ptr [eax + esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + esi + 0x4u), r);
  }
/* 976d38: mov ebx, dword ptr [ecx + 0x20] */
  ebx = R32((uint32_t)(ecx + 0x20u));
/* 976d3b: add dword ptr [eax + edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax + edi), r);
  }
/* 976d3e: mov ebx, dword ptr [ecx + 0x24] */
  ebx = R32((uint32_t)(ecx + 0x24u));
/* 976d41: adc dword ptr [eax + edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + edi + 0x4u), r);
  }
/* 976d45: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 976d47: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 976d4a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976d4c: jne 0x976d00 */
  if (!zf) goto L_976d00;
L_976d4e: /* 976d4e: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 976d52: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 976d56: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_976d5a: /* 976d5a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 976d5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976d5e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 976d62: jne 0x976c91 */
  if (!zf) goto L_976c91;
L_976d68: /* 976d68: fild qword ptr [esp + 0x30] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 976d6c: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 976d70: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976d76: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 976d7e: mov eax, dword ptr [0xcf2fc0] */
  eax = R32((uint32_t)(0xcf2fc0u));
/* 976d83: mov ecx, dword ptr [0xcf2fc4] */
  ecx = R32((uint32_t)(0xcf2fc4u));
/* 976d89: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 976d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976d8d: add eax, 0x186a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 976d92: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 976d97: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976d9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976d9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976d9c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 976da0: fild qword ptr [esp + 0x38] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 976da4: fdivr dword ptr [esp + 0x34] */
  ST0 = (F32((uint32_t)(esp + 0x34u))) / ST0;
/* 976da8: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 976dac: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976db1u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976db1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976db2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976db3: push 0xb02964 */
  { uint32_t v = 0xb02964u; esp -= 4; W32(esp, v); }
/* 976db8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976dba: call 0x971de0 */
  esp -= 4; W32(esp, 0x976dbfu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976dbf: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976dc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976dc6: call 0x971de0 */
  esp -= 4; W32(esp, 0x976dcbu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976dcb: push 0xb02954 */
  { uint32_t v = 0xb02954u; esp -= 4; W32(esp, v); }
/* 976dd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976dd2: call 0x971de0 */
  esp -= 4; W32(esp, 0x976dd7u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976dd7: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 976ddb: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976de1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976de4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976de5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 976de8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976deb: push 0xb02934 */
  { uint32_t v = 0xb02934u; esp -= 4; W32(esp, v); }
/* 976df0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976df2: call 0x971de0 */
  esp -= 4; W32(esp, 0x976df7u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976df7: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 976dfb: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 976dff: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 976e03: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 976e07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976e0b: push 0xb02910 */
  { uint32_t v = 0xb02910u; esp -= 4; W32(esp, v); }
/* 976e10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e12: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e17u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e17: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 976e1b: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 976e1f: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 976e23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e24: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 976e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e2b: push 0xb028ec */
  { uint32_t v = 0xb028ecu; esp -= 4; W32(esp, v); }
/* 976e30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e32: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e37u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e37: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976e3a: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976e3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e41: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e46u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e46: push 0xb028d0 */
  { uint32_t v = 0xb028d0u; esp -= 4; W32(esp, v); }
/* 976e4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e4d: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e52u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e52: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976e56: fmul dword ptr [0xa217cc] */
  ST0 = ST0 * (F32((uint32_t)(0xa217ccu)));
/* 976e5c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976e60: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976e64: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976e6a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976e6d: push 0xb028a8 */
  { uint32_t v = 0xb028a8u; esp -= 4; W32(esp, v); }
/* 976e72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e74: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e79u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e79: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 976e7d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976e80: xor esi, esi */
  esi = 0;
/* 976e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976e83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976e84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976e86: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976e8bu); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976e8b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 976e8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e90: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 976e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976e96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976e98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e99: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976e9eu); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976e9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ea0: push 0xb02910 */
  { uint32_t v = 0xb02910u; esp -= 4; W32(esp, v); }
/* 976ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ea6: call 0x971de0 */
  esp -= 4; W32(esp, 0x976eabu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976eab: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 976eaf: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 976eb3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976eb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976eb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976eb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976eba: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976ebfu); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976ebf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976ec0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 976ec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ec5: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 976ec9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976eca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976ecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976ecc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ecd: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976ed2u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976ed2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976ed3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ed4: push 0xb028ec */
  { uint32_t v = 0xb028ecu; esp -= 4; W32(esp, v); }
/* 976ed9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976eda: call 0x971de0 */
  esp -= 4; W32(esp, 0x976edfu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976edf: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976ee4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ee5: call 0x971de0 */
  esp -= 4; W32(esp, 0x976eeau); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976eea: push 0xb02870 */
  { uint32_t v = 0xb02870u; esp -= 4; W32(esp, v); }
/* 976eef: push 0xb02868 */
  { uint32_t v = 0xb02868u; esp -= 4; W32(esp, v); }
/* 976ef4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ef5: call 0x971de0 */
  esp -= 4; W32(esp, 0x976efau); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976efa: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976eff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976f00: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f05u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f05: mov eax, dword ptr [0xcf2fb8] */
  eax = R32((uint32_t)(0xcf2fb8u));
/* 976f0a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 976f0d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 976f0f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 976f12: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 976f14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976f16: push 0xb02828 */
  { uint32_t v = 0xb02828u; esp -= 4; W32(esp, v); }
/* 976f1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976f1c: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f21u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f21: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 976f27: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976f2a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976f2c: je 0x976f92 */
  if (zf) goto L_976f92;
L_976f2e: /* 976f2e: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 976f32: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 976f36: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 976f3a: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 976f3c: mov ecx, ebp */
  ecx = ebp;
/* 976f3e: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 976f40: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976f42: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 976f46: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 976f4a: jmp 0x976f54 */
  goto L_976f54;
L_976f4c: /* 976f4c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 976f50: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_976f54: /* 976f54: mov edx, dword ptr [edi + ebx + 4] */
  edx = R32((uint32_t)(edi + ebx + 0x4u));
/* 976f58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f59: mov edx, dword ptr [edi + ebx] */
  edx = R32((uint32_t)(edi + ebx));
/* 976f5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f5d: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 976f60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f61: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 976f63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f64: mov edx, dword ptr [eax + ebx + 4] */
  edx = R32((uint32_t)(eax + ebx + 0x4u));
/* 976f68: mov eax, dword ptr [eax + ebx] */
  eax = R32((uint32_t)(eax + ebx));
/* 976f6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f6c: mov edx, dword ptr [ecx + ebx + 4] */
  edx = R32((uint32_t)(ecx + ebx + 0x4u));
/* 976f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976f71: mov eax, dword ptr [ecx + ebx] */
  eax = R32((uint32_t)(ecx + ebx));
/* 976f74: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 976f77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976f79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976f7a: push 0xb02800 */
  { uint32_t v = 0xb02800u; esp -= 4; W32(esp, v); }
/* 976f7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976f81: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f86u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f86: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976f88: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976f8b: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 976f8e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976f90: jne 0x976f4c */
  if (!zf) goto L_976f4c;
L_976f92: /* 976f92: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976f97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976f99: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f9eu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f9e: mov eax, dword ptr [0xcf2fb8] */
  eax = R32((uint32_t)(0xcf2fb8u));
/* 976fa3: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 976fa6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 976fa8: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 976fab: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 976fad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976faf: push 0xb027c0 */
  { uint32_t v = 0xb027c0u; esp -= 4; W32(esp, v); }
/* 976fb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976fb6: call 0x971de0 */
  esp -= 4; W32(esp, 0x976fbbu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976fbb: mov ebx, dword ptr [0xcf2fb4] */
  ebx = R32((uint32_t)(0xcf2fb4u));
/* 976fc1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976fc4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976fc6: je 0x977079 */
  if (zf) goto L_977079;
L_976fcc: /* 976fcc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 976fd0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 976fd4: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976fd6: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 976fda: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 976fde: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 976fe0: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976fe2: mov esi, ebp */
  esi = ebp;
/* 976fe4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 976fe8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 976fec: jmp 0x976ff2 */
  goto L_976ff2;
L_976fee: /* 976fee: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_976ff2: /* 976ff2: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* 976ff5: xor eax, eax */
  eax = 0;
/* 976ff7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976ff9: jne 0x977007 */
  if (!zf) goto L_977007;
L_976ffb: /* 976ffb: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 976fff: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 977003: xor ecx, ecx */
  ecx = 0;
/* 977005: jmp 0x977035 */
  goto L_977035;
L_977007: /* 977007: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 97700a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 97700c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97700d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97700e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97700f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977010: call 0x99cca0 */
  esp -= 4; W32(esp, 0x977015u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 977015: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 977019: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 97701d: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 977020: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 977024: xor edx, edx */
  edx = 0;
/* 977026: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x977026);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 977028: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 97702c: mov ecx, eax */
  ecx = eax;
/* 97702e: mov eax, dword ptr [esi + edx] */
  eax = R32((uint32_t)(esi + edx));
/* 977031: xor edx, edx */
  edx = 0;
/* 977033: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x977033);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_977035: /* 977035: fild qword ptr [esp + 0x48] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 977039: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 97703c: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 977042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977043: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 977047: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977048: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 97704a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 97704e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 977051: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 977057: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97705a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97705b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97705c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97705d: push 0xb0279c */
  { uint32_t v = 0xb0279cu; esp -= 4; W32(esp, v); }
/* 977062: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 977064: call 0x971de0 */
  esp -= 4; W32(esp, 0x977069u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 977069: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 97706b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97706e: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 977071: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977073: jne 0x976fee */
  if (!zf) goto L_976fee;
L_977079: /* 977079: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97707d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97707e: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x977084u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977084: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 977085: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x97708bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97708b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 97708f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977090: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x977096u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977096: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 97709a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97709b: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x9770a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9770a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9770a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9770a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9770a5: mov esp, ebp */
  esp = ebp;
/* 9770a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770a8: ret  */
  esp += 4; SPILL(); return;
/* 9770a9: call 0x977100 */
  esp -= 4; W32(esp, 0x9770aeu); SPILL(); f_977100(); if (g_unwind) return; RELOAD();
/* 9770ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9770af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9770b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9770b2: mov esp, ebp */
  esp = ebp;
/* 9770b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770b5: ret  */
  esp += 4; SPILL(); return;
L_9770b6: /* 9770b6: push 0xb0275c */
  { uint32_t v = 0xb0275cu; esp -= 4; W32(esp, v); }
/* 9770bb: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9770bd: call 0x971e20 */
  esp -= 4; W32(esp, 0x9770c2u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9770c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9770c5: /* 9770c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9770c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9770c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9770c9: mov esp, ebp */
  esp = ebp;
/* 9770cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770cc: ret  */
  esp += 4; SPILL(); return;
}

void f_9768ed(void) {
  LOAD_REGS();
L_9768ed: /* 9768ed: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9768ef: mov edi, edx */
  edi = edx;
/* 9768f1: je 0x9770c5 */
  if (zf) goto L_9770c5;
L_9768f7: /* 9768f7: jmp 0x976900 */
  goto L_976900;
L_9768f9: /* 9768f9: xor esi, esi */
  esi = 0;
/* 9768fb: nop  */
/* 9768fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_976900: /* 976900: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 976903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976904: push 0xb02b2c */
  { uint32_t v = 0xb02b2cu; esp -= 4; W32(esp, v); }
/* 976909: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97690a: call 0x971de0 */
  esp -= 4; W32(esp, 0x97690fu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 97690f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 976912: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976915: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976917: je 0x976959 */
  if (zf) goto L_976959;
L_976919: /* 976919: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_976920: /* 976920: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 976923: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 976926: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 976929: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97692a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97692b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97692c: push 0xb02b18 */
  { uint32_t v = 0xb02b18u; esp -= 4; W32(esp, v); }
/* 976931: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976933: call 0x971de0 */
  esp -= 4; W32(esp, 0x976938u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976938: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97693b: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 97693e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 976941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976942: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976944: push 0xb02b18 */
  { uint32_t v = 0xb02b18u; esp -= 4; W32(esp, v); }
/* 976949: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97694b: call 0x971de0 */
  esp -= 4; W32(esp, 0x976950u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976950: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976952: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976955: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976957: jne 0x976920 */
  if (!zf) goto L_976920;
L_976959: /* 976959: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 97695b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97695d: jne 0x9768f9 */
  if (!zf) goto L_9768f9;
L_97695f: /* 97695f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 976960: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976961: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976962: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 976963: mov esp, ebp */
  esp = ebp;
/* 976965: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976966: ret  */
  esp += 4; SPILL(); return;
L_9770c5: /* 9770c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9770c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9770c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9770c9: mov esp, ebp */
  esp = ebp;
/* 9770cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770cc: ret  */
  esp += 4; SPILL(); return;
}

void f_976967(void) {
  LOAD_REGS();
L_976967: /* 976967: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976969: lea ecx, [edi*8] */
  ecx = (uint32_t)(edi*8);
/* 976970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976971: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976977u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976977: xor ebp, ebp */
  ebp = 0;
/* 976979: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97697b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 97697f: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 976983: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 976987: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 97698b: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 97698f: jbe 0x9769b0 */
  if ((cf | zf)) goto L_9769b0;
L_976991: /* 976991: lea ecx, [edi*8 - 5] */
  ecx = (uint32_t)(edi*8 + 0xfffffffbu);
/* 976998: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 97699a: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 97699d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9769a0: mov esi, eax */
  esi = eax;
/* 9769a2: lea edi, [eax + 8] */
  edi = (uint32_t)(eax + 0x8u);
/* 9769a5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9769a7: xor esi, esi */
  esi = 0;
/* 9769a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9769b0: /* 9769b0: mov edx, dword ptr [0xcf2fb0] */
  edx = R32((uint32_t)(0xcf2fb0u));
/* 9769b6: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9769b8: je 0x976a17 */
  if (zf) goto L_976a17;
L_9769ba: /* 9769ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9769c0: /* 9769c0: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 9769c3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9769c7: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 9769cb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 9769cd: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 9769d0: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 9769d4: mov ecx, dword ptr [edx + 0x14] */
  ecx = R32((uint32_t)(edx + 0x14u));
/* 9769d7: adc edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 9769d9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9769db: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 9769df: je 0x976a0d */
  if (zf) goto L_976a0d;
L_9769e1: /* 9769e1: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
L_9769e5: /* 9769e5: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 9769e8: add dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ecx), r);
  }
/* 9769ea: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 9769ed: adc dword ptr [ecx + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 9769f0: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 9769f3: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 9769f7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9769fa: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebp = r;
  }
/* 9769fc: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 9769ff: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 976a01: adc edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 976a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976a05: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 976a09: jne 0x9769e5 */
  if (!zf) goto L_9769e5;
L_976a0b: /* 976a0b: xor esi, esi */
  esi = 0;
L_976a0d: /* 976a0d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 976a0f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976a11: jne 0x9769c0 */
  if (!zf) goto L_9769c0;
L_976a13: /* 976a13: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
L_976a17: /* 976a17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976a18: push 0xb02adc */
  { uint32_t v = 0xb02adcu; esp -= 4; W32(esp, v); }
/* 976a1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976a1e: call 0x971de0 */
  esp -= 4; W32(esp, 0x976a23u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976a23: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976a28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976a29: call 0x971de0 */
  esp -= 4; W32(esp, 0x976a2eu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976a2e: push 0xb02aa0 */
  { uint32_t v = 0xb02aa0u; esp -= 4; W32(esp, v); }
/* 976a33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976a34: call 0x971de0 */
  esp -= 4; W32(esp, 0x976a39u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976a39: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 976a3f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976a42: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976a44: je 0x976abe */
  if (zf) goto L_976abe;
L_976a46: /* 976a46: fild qword ptr [esp + 0x40] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 976a4a: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 976a4e: xor ebp, ebp */
  ebp = 0;
/* 976a50: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_976a54: /* 976a54: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 976a57: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 976a59: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976a5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976a5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976a5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976a5d: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 976a61: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 976a65: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x976a6au); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 976a6a: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 976a6e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 976a72: fild qword ptr [esp + 0x38] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 976a76: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 976a79: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976a7f: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 976a81: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976a87: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976a8b: fild qword ptr [esp + 0x40] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 976a8f: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 976a95: fdiv dword ptr [esp + 0x34] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x34u)));
/* 976a99: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976a9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976a9d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 976aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976aa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976aa2: push 0xb02a84 */
  { uint32_t v = 0xb02a84u; esp -= 4; W32(esp, v); }
/* 976aa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976aa9: call 0x971de0 */
  esp -= 4; W32(esp, 0x976aaeu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976aae: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976ab0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976ab3: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 976ab6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976ab8: jne 0x976a54 */
  if (!zf) goto L_976a54;
L_976aba: /* 976aba: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
L_976abe: /* 976abe: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 976ac2: xor esi, esi */
  esi = 0;
/* 976ac4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ac5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976ac6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ac7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976ac8: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x976acdu); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 976acd: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 976ad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ad2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976ad3: mov ebp, edx */
  ebp = edx;
/* 976ad5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 976ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976ada: mov edi, eax */
  edi = eax;
/* 976adc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976add: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 976ae1: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 976ae5: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x976aeau); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 976aea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 976aeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976aec: mov esi, eax */
  esi = eax;
/* 976aee: mov ebx, edx */
  ebx = edx;
/* 976af0: push 0xb02a5c */
  { uint32_t v = 0xb02a5cu; esp -= 4; W32(esp, v); }
/* 976af5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976af7: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 976afb: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 976aff: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b04u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976b05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976b06: push 0xb02a34 */
  { uint32_t v = 0xb02a34u; esp -= 4; W32(esp, v); }
/* 976b0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b0d: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b12u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b12: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976b18: fild qword ptr [esp + 0x68] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 976b1c: mov eax, dword ptr [0xcf2fc0] */
  eax = R32((uint32_t)(0xcf2fc0u));
/* 976b21: mov ecx, dword ptr [0xcf2fc4] */
  ecx = R32((uint32_t)(0xcf2fc4u));
/* 976b27: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976b2a: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 976b2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b2e: add eax, 0x186a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 976b33: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 976b38: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976b3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976b3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976b3d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 976b41: fild qword ptr [esp + 0x50] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 976b45: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 976b47: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 976b4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 976b4d: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976b52u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976b52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976b53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976b54: push 0xb02a14 */
  { uint32_t v = 0xb02a14u; esp -= 4; W32(esp, v); }
/* 976b59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b5b: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b60u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b60: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976b64: fmul dword ptr [0xa217cc] */
  ST0 = ST0 * (F32((uint32_t)(0xa217ccu)));
/* 976b6a: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976b6e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976b72: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976b78: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976b7b: push 0xb029d0 */
  { uint32_t v = 0xb029d0u; esp -= 4; W32(esp, v); }
/* 976b80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976b82: call 0x971de0 */
  esp -= 4; W32(esp, 0x976b87u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976b87: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 976b8b: fmul dword ptr [0xa217cc] */
  ST0 = ST0 * (F32((uint32_t)(0xa217ccu)));
/* 976b91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976b94: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976b98: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 976b9c: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976ba2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976ba5: push 0xb02988 */
  { uint32_t v = 0xb02988u; esp -= 4; W32(esp, v); }
/* 976baa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976bac: call 0x971de0 */
  esp -= 4; W32(esp, 0x976bb1u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976bb1: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 976bb5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976bb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976bb9: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x976bbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976bbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 976bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 976bc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976bc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 976bc3: mov esp, ebp */
  esp = ebp;
/* 976bc5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 976bc6: ret  */
  esp += 4; SPILL(); return;
}

void f_976bc7(void) {
  LOAD_REGS();
L_976bc7: /* 976bc7: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 976bcb: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 976bcf: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 976bd3: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 976bd7: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 976bdb: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 976bdf: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 976be3: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 976be7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976be9: lea esi, [edi*8] */
  esi = (uint32_t)(edi*8);
/* 976bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976bf1: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976bf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976bf7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976bf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976bfa: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 976bfe: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976c04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976c04: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976c06: mov ebp, eax */
  ebp = eax;
/* 976c08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976c09: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 976c0d: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976c13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976c13: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 976c15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976c16: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 976c1a: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x976c20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 976c20: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 976c22: mov esi, eax */
  esi = eax;
/* 976c24: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 976c28: jbe 0x976c80 */
  if ((cf | zf)) goto L_976c80;
L_976c2a: /* 976c2a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 976c2e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 976c32: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976c34: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 976c36: mov eax, ebp */
  eax = ebp;
/* 976c38: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 976c3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_976c40: /* 976c40: mov dword ptr [ecx + eax], 0 */
  W32((uint32_t)(ecx + eax), 0x0u);
/* 976c47: mov dword ptr [ecx + eax + 4], 0 */
  W32((uint32_t)(ecx + eax + 0x4u), 0x0u);
/* 976c4f: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 976c55: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 976c5c: mov dword ptr [edx + eax], 0 */
  W32((uint32_t)(edx + eax), 0x0u);
/* 976c63: mov dword ptr [edx + eax + 4], 0 */
  W32((uint32_t)(edx + eax + 0x4u), 0x0u);
/* 976c6b: mov dword ptr [esi + eax], 0 */
  W32((uint32_t)(esi + eax), 0x0u);
/* 976c72: mov dword ptr [esi + eax + 4], 0 */
  W32((uint32_t)(esi + eax + 0x4u), 0x0u);
/* 976c7a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 976c7d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 976c7e: jne 0x976c40 */
  if (!zf) goto L_976c40;
L_976c80: /* 976c80: mov eax, dword ptr [0xcf2fb0] */
  eax = R32((uint32_t)(0xcf2fb0u));
/* 976c85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976c87: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 976c8b: je 0x976d68 */
  if (zf) goto L_976d68;
L_976c91: /* 976c91: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 976c94: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 976c98: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 976c9b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 976c9f: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 976ca1: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 976ca4: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 976ca6: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 976caa: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 976cac: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 976cb0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 976cb4: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 976cb7: adc ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976cb9: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 976cbc: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 976cc0: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 976cc4: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 976cc8: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 976ccb: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 976ccd: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 976cd0: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 976cd4: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 976cd8: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 976cda: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976cdc: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 976ce0: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 976ce4: je 0x976d5a */
  if (zf) goto L_976d5a;
L_976ce6: /* 976ce6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 976cea: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 976cee: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 976cf2: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 976cf4: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 976cf6: mov eax, ebp */
  eax = ebp;
/* 976cf8: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 976cfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_976d00: /* 976d00: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 976d03: add dword ptr [esp + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 976d07: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 976d0b: mov ebx, 0 */
  ebx = 0x0u;
/* 976d10: adc ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 976d12: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* 976d16: mov ebp, dword ptr [ecx + 8] */
  ebp = R32((uint32_t)(ecx + 0x8u));
/* 976d19: add dword ptr [eax + edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax + edx), r);
  }
/* 976d1c: adc dword ptr [eax + edx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + edx + 0x4u), r);
  }
/* 976d20: mov ebx, dword ptr [ecx + 0x10] */
  ebx = R32((uint32_t)(ecx + 0x10u));
/* 976d23: add dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax), r);
  }
/* 976d25: mov ebx, dword ptr [ecx + 0x14] */
  ebx = R32((uint32_t)(ecx + 0x14u));
/* 976d28: adc dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 976d2b: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* 976d2e: add dword ptr [eax + esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax + esi), r);
  }
/* 976d31: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* 976d34: adc dword ptr [eax + esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + esi + 0x4u), r);
  }
/* 976d38: mov ebx, dword ptr [ecx + 0x20] */
  ebx = R32((uint32_t)(ecx + 0x20u));
/* 976d3b: add dword ptr [eax + edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax + edi), r);
  }
/* 976d3e: mov ebx, dword ptr [ecx + 0x24] */
  ebx = R32((uint32_t)(ecx + 0x24u));
/* 976d41: adc dword ptr [eax + edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(eax + edi + 0x4u), r);
  }
/* 976d45: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 976d47: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 976d4a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976d4c: jne 0x976d00 */
  if (!zf) goto L_976d00;
L_976d4e: /* 976d4e: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 976d52: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 976d56: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_976d5a: /* 976d5a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 976d5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976d5e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 976d62: jne 0x976c91 */
  if (!zf) goto L_976c91;
L_976d68: /* 976d68: fild qword ptr [esp + 0x30] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 976d6c: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 976d70: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 976d76: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 976d7e: mov eax, dword ptr [0xcf2fc0] */
  eax = R32((uint32_t)(0xcf2fc0u));
/* 976d83: mov ecx, dword ptr [0xcf2fc4] */
  ecx = R32((uint32_t)(0xcf2fc4u));
/* 976d89: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 976d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976d8d: add eax, 0x186a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 976d92: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 976d97: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 976d9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976d9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976d9c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 976da0: fild qword ptr [esp + 0x38] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 976da4: fdivr dword ptr [esp + 0x34] */
  ST0 = (F32((uint32_t)(esp + 0x34u))) / ST0;
/* 976da8: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 976dac: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976db1u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976db1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976db2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976db3: push 0xb02964 */
  { uint32_t v = 0xb02964u; esp -= 4; W32(esp, v); }
/* 976db8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976dba: call 0x971de0 */
  esp -= 4; W32(esp, 0x976dbfu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976dbf: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976dc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976dc6: call 0x971de0 */
  esp -= 4; W32(esp, 0x976dcbu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976dcb: push 0xb02954 */
  { uint32_t v = 0xb02954u; esp -= 4; W32(esp, v); }
/* 976dd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976dd2: call 0x971de0 */
  esp -= 4; W32(esp, 0x976dd7u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976dd7: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 976ddb: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976de1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976de4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976de5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 976de8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976deb: push 0xb02934 */
  { uint32_t v = 0xb02934u; esp -= 4; W32(esp, v); }
/* 976df0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976df2: call 0x971de0 */
  esp -= 4; W32(esp, 0x976df7u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976df7: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 976dfb: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 976dff: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 976e03: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 976e07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976e0b: push 0xb02910 */
  { uint32_t v = 0xb02910u; esp -= 4; W32(esp, v); }
/* 976e10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e12: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e17u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e17: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 976e1b: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 976e1f: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 976e23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e24: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 976e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e2b: push 0xb028ec */
  { uint32_t v = 0xb028ecu; esp -= 4; W32(esp, v); }
/* 976e30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e32: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e37u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e37: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976e3a: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976e3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e41: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e46u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e46: push 0xb028d0 */
  { uint32_t v = 0xb028d0u; esp -= 4; W32(esp, v); }
/* 976e4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e4d: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e52u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e52: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976e56: fmul dword ptr [0xa217cc] */
  ST0 = ST0 * (F32((uint32_t)(0xa217ccu)));
/* 976e5c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 976e60: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 976e64: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 976e6a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 976e6d: push 0xb028a8 */
  { uint32_t v = 0xb028a8u; esp -= 4; W32(esp, v); }
/* 976e72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976e74: call 0x971de0 */
  esp -= 4; W32(esp, 0x976e79u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976e79: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 976e7d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976e80: xor esi, esi */
  esi = 0;
/* 976e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976e83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976e84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 976e86: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976e8bu); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976e8b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 976e8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e90: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 976e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976e96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976e98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e99: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976e9eu); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976e9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ea0: push 0xb02910 */
  { uint32_t v = 0xb02910u; esp -= 4; W32(esp, v); }
/* 976ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ea6: call 0x971de0 */
  esp -= 4; W32(esp, 0x976eabu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976eab: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 976eaf: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 976eb3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976eb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976eb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976eb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976eba: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976ebfu); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976ebf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976ec0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 976ec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ec5: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 976ec9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976eca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 976ecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976ecc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ecd: call 0x99cca0 */
  esp -= 4; W32(esp, 0x976ed2u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 976ed2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976ed3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976ed4: push 0xb028ec */
  { uint32_t v = 0xb028ecu; esp -= 4; W32(esp, v); }
/* 976ed9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976eda: call 0x971de0 */
  esp -= 4; W32(esp, 0x976edfu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976edf: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976ee4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ee5: call 0x971de0 */
  esp -= 4; W32(esp, 0x976eeau); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976eea: push 0xb02870 */
  { uint32_t v = 0xb02870u; esp -= 4; W32(esp, v); }
/* 976eef: push 0xb02868 */
  { uint32_t v = 0xb02868u; esp -= 4; W32(esp, v); }
/* 976ef4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976ef5: call 0x971de0 */
  esp -= 4; W32(esp, 0x976efau); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976efa: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976eff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976f00: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f05u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f05: mov eax, dword ptr [0xcf2fb8] */
  eax = R32((uint32_t)(0xcf2fb8u));
/* 976f0a: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 976f0d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 976f0f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 976f12: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 976f14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976f16: push 0xb02828 */
  { uint32_t v = 0xb02828u; esp -= 4; W32(esp, v); }
/* 976f1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 976f1c: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f21u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f21: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 976f27: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976f2a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976f2c: je 0x976f92 */
  if (zf) goto L_976f92;
L_976f2e: /* 976f2e: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 976f32: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 976f36: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 976f3a: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 976f3c: mov ecx, ebp */
  ecx = ebp;
/* 976f3e: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 976f40: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976f42: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 976f46: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 976f4a: jmp 0x976f54 */
  goto L_976f54;
L_976f4c: /* 976f4c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 976f50: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_976f54: /* 976f54: mov edx, dword ptr [edi + ebx + 4] */
  edx = R32((uint32_t)(edi + ebx + 0x4u));
/* 976f58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f59: mov edx, dword ptr [edi + ebx] */
  edx = R32((uint32_t)(edi + ebx));
/* 976f5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f5d: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 976f60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f61: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 976f63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f64: mov edx, dword ptr [eax + ebx + 4] */
  edx = R32((uint32_t)(eax + ebx + 0x4u));
/* 976f68: mov eax, dword ptr [eax + ebx] */
  eax = R32((uint32_t)(eax + ebx));
/* 976f6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f6c: mov edx, dword ptr [ecx + ebx + 4] */
  edx = R32((uint32_t)(ecx + ebx + 0x4u));
/* 976f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976f71: mov eax, dword ptr [ecx + ebx] */
  eax = R32((uint32_t)(ecx + ebx));
/* 976f74: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 976f77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 976f78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976f79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976f7a: push 0xb02800 */
  { uint32_t v = 0xb02800u; esp -= 4; W32(esp, v); }
/* 976f7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976f81: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f86u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f86: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 976f88: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976f8b: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 976f8e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976f90: jne 0x976f4c */
  if (!zf) goto L_976f4c;
L_976f92: /* 976f92: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 976f97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976f99: call 0x971de0 */
  esp -= 4; W32(esp, 0x976f9eu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976f9e: mov eax, dword ptr [0xcf2fb8] */
  eax = R32((uint32_t)(0xcf2fb8u));
/* 976fa3: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 976fa6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 976fa8: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 976fab: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 976fad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 976fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 976faf: push 0xb027c0 */
  { uint32_t v = 0xb027c0u; esp -= 4; W32(esp, v); }
/* 976fb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 976fb6: call 0x971de0 */
  esp -= 4; W32(esp, 0x976fbbu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 976fbb: mov ebx, dword ptr [0xcf2fb4] */
  ebx = R32((uint32_t)(0xcf2fb4u));
/* 976fc1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 976fc4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 976fc6: je 0x977079 */
  if (zf) goto L_977079;
L_976fcc: /* 976fcc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 976fd0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 976fd4: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976fd6: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 976fda: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 976fde: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 976fe0: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 976fe2: mov esi, ebp */
  esi = ebp;
/* 976fe4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 976fe8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 976fec: jmp 0x976ff2 */
  goto L_976ff2;
L_976fee: /* 976fee: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_976ff2: /* 976ff2: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* 976ff5: xor eax, eax */
  eax = 0;
/* 976ff7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 976ff9: jne 0x977007 */
  if (!zf) goto L_977007;
L_976ffb: /* 976ffb: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 976fff: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 977003: xor ecx, ecx */
  ecx = 0;
/* 977005: jmp 0x977035 */
  goto L_977035;
L_977007: /* 977007: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 97700a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 97700c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97700d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97700e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97700f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977010: call 0x99cca0 */
  esp -= 4; W32(esp, 0x977015u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 977015: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 977019: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 97701d: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 977020: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 977024: xor edx, edx */
  edx = 0;
/* 977026: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x977026);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 977028: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 97702c: mov ecx, eax */
  ecx = eax;
/* 97702e: mov eax, dword ptr [esi + edx] */
  eax = R32((uint32_t)(esi + edx));
/* 977031: xor edx, edx */
  edx = 0;
/* 977033: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x977033);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
L_977035: /* 977035: fild qword ptr [esp + 0x48] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 977039: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 97703c: fild qword ptr [0xcf2fc0] */
  { double v = (double)(int64_t)R64((uint32_t)(0xcf2fc0u)); FPUSH(v); }
/* 977042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977043: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 977047: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977048: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 97704a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 97704e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 977051: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 977057: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97705a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97705b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97705c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97705d: push 0xb0279c */
  { uint32_t v = 0xb0279cu; esp -= 4; W32(esp, v); }
/* 977062: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 977064: call 0x971de0 */
  esp -= 4; W32(esp, 0x977069u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 977069: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 97706b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97706e: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 977071: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977073: jne 0x976fee */
  if (!zf) goto L_976fee;
L_977079: /* 977079: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97707d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97707e: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x977084u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977084: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 977085: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x97708bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97708b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 97708f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977090: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x977096u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977096: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 97709a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97709b: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x9770a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9770a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9770a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9770a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9770a5: mov esp, ebp */
  esp = ebp;
/* 9770a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770a8: ret  */
  esp += 4; SPILL(); return;
}

void f_9770a9(void) {
  LOAD_REGS();
L_9770a9: /* 9770a9: call 0x977100 */
  esp -= 4; W32(esp, 0x9770aeu); SPILL(); f_977100(); if (g_unwind) return; RELOAD();
/* 9770ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9770af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9770b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9770b2: mov esp, ebp */
  esp = ebp;
/* 9770b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9770b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9770e0(void) {
  LOAD_REGS();
L_9770e0: /* 9770e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9770e4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9770e8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9770ec: mov dword ptr [0xcf2fa0], eax */
  W32((uint32_t)(0xcf2fa0u), eax);
/* 9770f1: mov dword ptr [0xcf2fa4], ecx */
  W32((uint32_t)(0xcf2fa4u), ecx);
/* 9770f7: mov dword ptr [0xcf2f9c], edx */
  W32((uint32_t)(0xcf2f9cu), edx);
/* 9770fd: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_977100(void) {
  LOAD_REGS();
L_977100: /* 977100: sub esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 977106: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 977107: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 977108: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 97710c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97710d: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 977113: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977114: xor edi, edi */
  edi = 0;
/* 977116: xor ebx, ebx */
  ebx = 0;
/* 977118: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97711a: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 97711e: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 977122: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 977126: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 97712a: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 97712e: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 977132: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 977136: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 97713a: je 0x977179 */
  if (zf) goto L_977179;
L_97713c: /* 97713c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_977140: /* 977140: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 977142: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x977148u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977148: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97714a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 97714c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 97714f: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 977152: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 977155: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* 977158: mov dword ptr [eax + 0x18], edi */
  W32((uint32_t)(eax + 0x18u), edi);
/* 97715b: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 97715e: mov dword ptr [eax + 0x20], edi */
  W32((uint32_t)(eax + 0x20u), edi);
/* 977161: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 977164: jne 0x97716e */
  if (!zf) goto L_97716e;
L_977166: /* 977166: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 97716a: mov ebx, eax */
  ebx = eax;
/* 97716c: jmp 0x977171 */
  goto L_977171;
L_97716e: /* 97716e: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
L_977171: /* 977171: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 977173: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 977175: mov ebp, eax */
  ebp = eax;
/* 977177: jne 0x977140 */
  if (!zf) goto L_977140;
L_977179: /* 977179: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 97717b: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x977181u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977181: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 977184: mov esi, dword ptr [0xcf2fb0] */
  esi = R32((uint32_t)(0xcf2fb0u));
/* 97718a: mov ebp, eax */
  ebp = eax;
/* 97718c: mov eax, dword ptr [0xcf2fa4] */
  eax = R32((uint32_t)(0xcf2fa4u));
/* 977191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977193: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977194: push 0xb02e68 */
  { uint32_t v = 0xb02e68u; esp -= 4; W32(esp, v); }
/* 977199: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97719a: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 97719e: call 0x971de0 */
  esp -= 4; W32(esp, 0x9771a3u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 9771a3: mov eax, dword ptr [0xcf2fa4] */
  eax = R32((uint32_t)(0xcf2fa4u));
/* 9771a8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9771ab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9771ad: je 0x9771c3 */
  if (zf) goto L_9771c3;
L_9771af: /* 9771af: nop  */
L_9771b0: /* 9771b0: mov cl, byte ptr [esp + 0x17] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 9771b4: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9771b6: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9771b8: mov byte ptr [esp + 0x17], cl */
  W8((uint32_t)(esp + 0x17u), (ecx & 0xffu));
/* 9771bc: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 9771bf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9771c1: jne 0x9771b0 */
  if (!zf) goto L_9771b0;
L_9771c3: /* 9771c3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9771c6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9771c8: mov ecx, ebx */
  ecx = ebx;
/* 9771ca: je 0x977205 */
  if (zf) goto L_977205;
L_9771cc: /* 9771cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9771d0: /* 9771d0: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 9771d3: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 9771d6: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 9771d9: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 9771dc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9771df: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9771e2: mov dword ptr [ecx + 0xc], edi */
  W32((uint32_t)(ecx + 0xcu), edi);
/* 9771e5: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 9771e8: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 9771eb: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 9771ee: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 9771f1: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 9771f4: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 9771f7: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 9771fa: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 9771fd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9771ff: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 977201: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 977203: jne 0x9771d0 */
  if (!zf) goto L_9771d0;
L_977205: /* 977205: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 977208: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 97720b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97720e: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 977211: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 977214: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 977217: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 97721a: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 97721d: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 977220: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* 977223: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 977226: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 977229: cmp dword ptr [0xcf2f9c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f9cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 977230: je 0x97724c */
  if (zf) goto L_97724c;
L_977232: /* 977232: push 0xb02e48 */
  { uint32_t v = 0xb02e48u; esp -= 4; W32(esp, v); }
/* 977237: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 977239: call 0x971e20 */
  esp -= 4; W32(esp, 0x97723eu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 97723e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977241: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977242: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977243: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 977244: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 977245: add esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97724b: ret  */
  esp += 4; SPILL(); return;
L_97724c: /* 97724c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97724e: push 0xb02e38 */
  { uint32_t v = 0xb02e38u; esp -= 4; W32(esp, v); }
/* 977253: call 0x975e70 */
  esp -= 4; W32(esp, 0x977258u); SPILL(); f_975e70(); if (g_unwind) return; RELOAD();
/* 977258: mov ebx, dword ptr [0xcfb078] */
  ebx = R32((uint32_t)(0xcfb078u));
/* 97725e: mov esi, eax */
  esi = eax;
/* 977260: push 0xb02e30 */
  { uint32_t v = 0xb02e30u; esp -= 4; W32(esp, v); }
/* 977265: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 977269: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97726a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97726b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97726du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97726d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977270: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977273: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977275: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977279: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97727b: not ecx */
  ecx = ~ecx;
/* 97727d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97727e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97727f: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 977283: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977285: call 0x975cb0 */
  esp -= 4; W32(esp, 0x97728au); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 97728a: mov ebp, dword ptr [0xcf2fb4] */
  ebp = R32((uint32_t)(0xcf2fb4u));
/* 977290: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977292: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 97729a: je 0x9772fe */
  if (zf) goto L_9772fe;
L_97729c: /* 97729c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9772a0: /* 9772a0: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 9772a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9772a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9772a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9772a9: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9772ad: push 0xb02df4 */
  { uint32_t v = 0xb02df4u; esp -= 4; W32(esp, v); }
/* 9772b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9772b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9772b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9772b5: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9772b8: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9772ba: lea edi, [esp + 0x4c] */
  edi = (uint32_t)(esp + 0x4cu);
/* 9772be: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9772c0: not ecx */
  ecx = ~ecx;
/* 9772c2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9772c3: lea edx, [esp + ecx + 0x4c] */
  edx = (uint32_t)(esp + ecx + 0x4cu);
/* 9772c7: push 0xb02df0 */
  { uint32_t v = 0xb02df0u; esp -= 4; W32(esp, v); }
/* 9772cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9772cd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9772cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9772cf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9772d2: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9772d5: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9772d7: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 9772db: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9772dd: not ecx */
  ecx = ~ecx;
/* 9772df: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9772e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9772e1: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 9772e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9772e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9772e7: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9772ecu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9772ec: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9772f0: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 9772f3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9772f6: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9772f8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9772fc: jne 0x9772a0 */
  if (!zf) goto L_9772a0;
L_9772fe: /* 9772fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 977302: push 0xb02de4 */
  { uint32_t v = 0xb02de4u; esp -= 4; W32(esp, v); }
/* 977307: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977308: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 97730c: push 0xb02db0 */
  { uint32_t v = 0xb02db0u; esp -= 4; W32(esp, v); }
/* 977311: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977312: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977314u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977314: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977317: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977319: lea edi, [esp + 0x4c] */
  edi = (uint32_t)(esp + 0x4cu);
/* 97731d: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97731f: not ecx */
  ecx = ~ecx;
/* 977321: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977322: lea eax, [esp + ecx + 0x4c] */
  eax = (uint32_t)(esp + ecx + 0x4cu);
/* 977326: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 97732b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97732c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97732eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97732e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977331: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977334: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977336: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 97733a: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97733c: not ecx */
  ecx = ~ecx;
/* 97733e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97733f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977340: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 977344: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977345: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977346: call 0x975cb0 */
  esp -= 4; W32(esp, 0x97734bu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 97734b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97734c: call 0x975cd0 */
  esp -= 4; W32(esp, 0x977351u); SPILL(); f_975cd0(); if (g_unwind) return; RELOAD();
/* 977351: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 977353: push 0xb02d9c */
  { uint32_t v = 0xb02d9cu; esp -= 4; W32(esp, v); }
/* 977358: call 0x975e70 */
  esp -= 4; W32(esp, 0x97735du); SPILL(); f_975e70(); if (g_unwind) return; RELOAD();
/* 97735d: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 977361: push 0xb02e30 */
  { uint32_t v = 0xb02e30u; esp -= 4; W32(esp, v); }
/* 977366: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977367: mov esi, eax */
  esi = eax;
/* 977369: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97736bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97736b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97736e: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977371: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977373: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977377: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977379: not ecx */
  ecx = ~ecx;
/* 97737b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97737c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97737d: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 977381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977382: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977383: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977388u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977388: mov ebp, dword ptr [0xcf2fb4] */
  ebp = R32((uint32_t)(0xcf2fb4u));
/* 97738e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977390: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 977398: je 0x9773f5 */
  if (zf) goto L_9773f5;
L_97739a: /* 97739a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9773a0: /* 9773a0: cmp dword ptr [ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9773a4: mov eax, 0xb02df0 */
  eax = 0xb02df0u;
/* 9773a9: jne 0x9773b0 */
  if (!zf) goto L_9773b0;
L_9773ab: /* 9773ab: mov eax, 0xcf2eb4 */
  eax = 0xcf2eb4u;
L_9773b0: /* 9773b0: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 9773b3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9773b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9773b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9773b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9773ba: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 9773be: push 0xb02d58 */
  { uint32_t v = 0xb02d58u; esp -= 4; W32(esp, v); }
/* 9773c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9773c4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9773c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9773c6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9773c9: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9773cc: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9773ce: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 9773d2: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9773d4: not ecx */
  ecx = ~ecx;
/* 9773d6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9773d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9773d8: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 9773dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9773dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9773de: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9773e3u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9773e3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9773e7: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 9773ea: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9773ed: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9773ef: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9773f3: jne 0x9773a0 */
  if (!zf) goto L_9773a0;
L_9773f5: /* 9773f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9773f6: call 0x975cd0 */
  esp -= 4; W32(esp, 0x9773fbu); SPILL(); f_975cd0(); if (g_unwind) return; RELOAD();
/* 9773fb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9773fd: push 0xb02d44 */
  { uint32_t v = 0xb02d44u; esp -= 4; W32(esp, v); }
/* 977402: call 0x975e70 */
  esp -= 4; W32(esp, 0x977407u); SPILL(); f_975e70(); if (g_unwind) return; RELOAD();
/* 977407: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 97740b: mov esi, eax */
  esi = eax;
/* 97740d: push 0xb02e30 */
  { uint32_t v = 0xb02e30u; esp -= 4; W32(esp, v); }
/* 977412: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977413: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 977417: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977419u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977419: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97741c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97741f: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977421: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977425: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977427: not ecx */
  ecx = ~ecx;
/* 977429: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97742a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97742b: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 97742f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977431: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977436u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977436: mov esi, dword ptr [0xcf2fb4] */
  esi = R32((uint32_t)(0xcf2fb4u));
/* 97743c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97743e: mov ebp, 4 */
  ebp = 0x4u;
/* 977443: je 0x9774a2 */
  if (zf) goto L_9774a2;
L_977445: /* 977445: mov ecx, dword ptr [0xcf2fb8] */
  ecx = R32((uint32_t)(0xcf2fb8u));
/* 97744b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97744e: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 977451: je 0x977467 */
  if (zf) goto L_977467;
L_977453: /* 977453: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 977454: jne 0x97747b */
  if (!zf) goto L_97747b;
L_977456: /* 977456: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 977459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97745a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97745b: push 0xb02d00 */
  { uint32_t v = 0xb02d00u; esp -= 4; W32(esp, v); }
/* 977460: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 977464: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977465: jmp 0x977476 */
  goto L_977476;
L_977467: /* 977467: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 97746a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97746b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97746c: push 0xb02cc4 */
  { uint32_t v = 0xb02cc4u; esp -= 4; W32(esp, v); }
/* 977471: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 977475: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_977476: /* 977476: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977478u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977478: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97747b: /* 97747b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97747e: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977480: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977484: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977486: not ecx */
  ecx = ~ecx;
/* 977488: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97748a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 97748e: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 977492: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977493: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977494: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977499u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977499: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 97749b: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 97749e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9774a0: jne 0x977445 */
  if (!zf) goto L_977445;
L_9774a2: /* 9774a2: push 0xb02de4 */
  { uint32_t v = 0xb02de4u; esp -= 4; W32(esp, v); }
/* 9774a7: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 9774a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9774a9: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 9774ad: push 0xb02db0 */
  { uint32_t v = 0xb02db0u; esp -= 4; W32(esp, v); }
/* 9774b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9774b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9774b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9774b5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 9774b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9774bc: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9774bf: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9774c1: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 9774c5: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9774c7: not ecx */
  ecx = ~ecx;
/* 9774c9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9774ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9774cb: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 9774cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9774d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9774d1: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9774d6u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9774d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9774d7: call 0x975cd0 */
  esp -= 4; W32(esp, 0x9774dcu); SPILL(); f_975cd0(); if (g_unwind) return; RELOAD();
/* 9774dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9774de: push 0xb02cb4 */
  { uint32_t v = 0xb02cb4u; esp -= 4; W32(esp, v); }
/* 9774e3: call 0x975e70 */
  esp -= 4; W32(esp, 0x9774e8u); SPILL(); f_975e70(); if (g_unwind) return; RELOAD();
/* 9774e8: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 9774ec: push 0xb02e30 */
  { uint32_t v = 0xb02e30u; esp -= 4; W32(esp, v); }
/* 9774f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9774f2: mov esi, eax */
  esi = eax;
/* 9774f4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9774f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9774f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9774f9: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9774fc: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9774fe: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977502: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977504: not ecx */
  ecx = ~ecx;
/* 977506: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977507: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977508: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 97750c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97750d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97750e: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977513u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977513: mov ebp, dword ptr [0xcf2fb4] */
  ebp = R32((uint32_t)(0xcf2fb4u));
/* 977519: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97751b: mov eax, 5 */
  eax = 0x5u;
/* 977520: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 977524: je 0x9775b5 */
  if (zf) goto L_9775b5;
L_97752a: /* 97752a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_977530: /* 977530: mov ecx, dword ptr [0xcf2fb8] */
  ecx = R32((uint32_t)(0xcf2fb8u));
/* 977536: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 977539: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 97753c: je 0x977552 */
  if (zf) goto L_977552;
L_97753e: /* 97753e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 97753f: jne 0x977566 */
  if (!zf) goto L_977566;
L_977541: /* 977541: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 977544: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977545: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977546: push 0xb02c70 */
  { uint32_t v = 0xb02c70u; esp -= 4; W32(esp, v); }
/* 97754b: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 97754f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977550: jmp 0x977561 */
  goto L_977561;
L_977552: /* 977552: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 977555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977557: push 0xb02c34 */
  { uint32_t v = 0xb02c34u; esp -= 4; W32(esp, v); }
/* 97755c: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 977560: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_977561: /* 977561: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977563u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977563: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_977566: /* 977566: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977569: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97756b: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 97756f: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977571: not ecx */
  ecx = ~ecx;
/* 977573: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977574: lea eax, [esp + ecx + 0x3c] */
  eax = (uint32_t)(esp + ecx + 0x3cu);
/* 977578: push 0xb02df0 */
  { uint32_t v = 0xb02df0u; esp -= 4; W32(esp, v); }
/* 97757d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97757e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977580u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977580: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977583: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977586: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977588: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 97758c: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97758e: not ecx */
  ecx = ~ecx;
/* 977590: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977591: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977592: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 977596: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977597: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977598: call 0x975cb0 */
  esp -= 4; W32(esp, 0x97759du); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 97759d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9775a1: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 9775a4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9775a7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9775a9: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9775ad: mov eax, ecx */
  eax = ecx;
/* 9775af: jne 0x977530 */
  if (!zf) goto L_977530;
L_9775b5: /* 9775b5: push 0xb02de4 */
  { uint32_t v = 0xb02de4u; esp -= 4; W32(esp, v); }
/* 9775ba: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9775bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9775bc: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 9775c0: push 0xb02db0 */
  { uint32_t v = 0xb02db0u; esp -= 4; W32(esp, v); }
/* 9775c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9775c6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9775c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9775c8: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9775cb: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9775cd: lea edi, [esp + 0x4c] */
  edi = (uint32_t)(esp + 0x4cu);
/* 9775d1: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9775d3: not ecx */
  ecx = ~ecx;
/* 9775d5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9775d6: lea eax, [esp + ecx + 0x4c] */
  eax = (uint32_t)(esp + ecx + 0x4cu);
/* 9775da: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 9775df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9775e0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9775e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9775e2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9775e5: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9775e8: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9775ea: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 9775ee: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9775f0: not ecx */
  ecx = ~ecx;
/* 9775f2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9775f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9775f4: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 9775f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9775f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9775fa: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9775ffu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9775ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977600: call 0x975cd0 */
  esp -= 4; W32(esp, 0x977605u); SPILL(); f_975cd0(); if (g_unwind) return; RELOAD();
/* 977605: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 977607: push 0xb02c24 */
  { uint32_t v = 0xb02c24u; esp -= 4; W32(esp, v); }
/* 97760c: call 0x975e70 */
  esp -= 4; W32(esp, 0x977611u); SPILL(); f_975e70(); if (g_unwind) return; RELOAD();
/* 977611: mov ebp, dword ptr [0xcf2fb0] */
  ebp = R32((uint32_t)(0xcf2fb0u));
/* 977617: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977619: mov esi, eax */
  esi = eax;
/* 97761b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 97761f: je 0x977acd */
  if (zf) goto L_977acd;
L_977625: /* 977625: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 977628: cmp edx, dword ptr [0xcf2fa4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2fa4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97762e: ja 0x977659 */
  if ((!cf && !zf)) goto L_977659;
L_977630: /* 977630: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 977634: push 0xb02c20 */
  { uint32_t v = 0xb02c20u; esp -= 4; W32(esp, v); }
/* 977639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97763a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97763cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97763c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97763f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977642: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977644: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977648: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97764a: not ecx */
  ecx = ~ecx;
/* 97764c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97764d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97764e: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 977652: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977654: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977659u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
L_977659: /* 977659: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 97765c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97765d: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 977661: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 977666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977667: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977669u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977669: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97766c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97766f: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977671: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977675: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977677: not ecx */
  ecx = ~ecx;
/* 977679: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97767a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97767b: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 97767f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977681: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977686u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977686: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 977689: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97768b: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 97768f: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 977693: je 0x9778ba */
  if (zf) goto L_9778ba;
L_977699: /* 977699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9776a0: /* 9776a0: fld dword ptr [0xcf2fa0] */
  { double v = F32((uint32_t)(0xcf2fa0u)); FPUSH(v); }
/* 9776a6: call 0x99ceac */
  esp -= 4; W32(esp, 0x9776abu); SPILL(); hle_ftol(); RELOAD();
/* 9776ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9776ac: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 9776af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9776b0: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 9776b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9776b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9776b5: call 0x99c910 */
  esp -= 4; W32(esp, 0x9776bau); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 9776ba: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9776c0: fsub dword ptr [0xcf2fa0] */
  ST0 = ST0 - (F32((uint32_t)(0xcf2fa0u)));
/* 9776c6: mov edi, eax */
  edi = eax;
/* 9776c8: mov ebx, edx */
  ebx = edx;
/* 9776ca: call 0x99ceac */
  esp -= 4; W32(esp, 0x9776cfu); SPILL(); hle_ftol(); RELOAD();
/* 9776cf: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9776d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9776d3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9776d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9776d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9776d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9776d9: call 0x99c910 */
  esp -= 4; W32(esp, 0x9776deu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 9776de: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 9776e0: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 9776e2: mov edx, ebx */
  edx = ebx;
/* 9776e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9776e5: mov eax, edi */
  eax = edi;
/* 9776e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9776e8: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9776ec: push 0xb02c18 */
  { uint32_t v = 0xb02c18u; esp -= 4; W32(esp, v); }
/* 9776f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9776f2: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 9776f5: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 9776f8: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9776feu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9776fe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977701: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977704: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977706: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 97770a: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97770c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 977710: not ecx */
  ecx = ~ecx;
/* 977712: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977714: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 977718: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97771a: call 0x975cb0 */
  esp -= 4; W32(esp, 0x97771fu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 97771f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 977723: fld dword ptr [0xcf2fa0] */
  { double v = F32((uint32_t)(0xcf2fa0u)); FPUSH(v); }
/* 977729: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 97772c: call 0x99ceac */
  esp -= 4; W32(esp, 0x977731u); SPILL(); hle_ftol(); RELOAD();
/* 977731: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977733: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 977735: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977736: call 0x99c910 */
  esp -= 4; W32(esp, 0x97773bu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 97773b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 977741: fsub dword ptr [0xcf2fa0] */
  ST0 = ST0 - (F32((uint32_t)(0xcf2fa0u)));
/* 977747: mov edi, eax */
  edi = eax;
/* 977749: mov ebx, edx */
  ebx = edx;
/* 97774b: call 0x99ceac */
  esp -= 4; W32(esp, 0x977750u); SPILL(); hle_ftol(); RELOAD();
/* 977750: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 977753: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977754: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 977757: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977758: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97775a: call 0x99c910 */
  esp -= 4; W32(esp, 0x97775fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 97775f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 977761: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 977763: mov edx, ebx */
  edx = ebx;
/* 977765: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977766: mov eax, edi */
  eax = edi;
/* 977768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977769: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 97776d: push 0xb02c18 */
  { uint32_t v = 0xb02c18u; esp -= 4; W32(esp, v); }
/* 977772: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977773: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 977776: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 977779: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97777fu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97777f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977782: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977786: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977789: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97778b: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97778d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 977791: not ecx */
  ecx = ~ecx;
/* 977793: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977794: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977795: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 977799: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97779a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97779b: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9777a0u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9777a0: fld dword ptr [0xcf2fa0] */
  { double v = F32((uint32_t)(0xcf2fa0u)); FPUSH(v); }
/* 9777a6: call 0x99ceac */
  esp -= 4; W32(esp, 0x9777abu); SPILL(); hle_ftol(); RELOAD();
/* 9777ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9777ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9777ad: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9777b1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 9777b4: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 9777b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9777b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9777b9: call 0x99c910 */
  esp -= 4; W32(esp, 0x9777beu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 9777be: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9777c4: fsub dword ptr [0xcf2fa0] */
  ST0 = ST0 - (F32((uint32_t)(0xcf2fa0u)));
/* 9777ca: mov edi, eax */
  edi = eax;
/* 9777cc: mov ebx, edx */
  ebx = edx;
/* 9777ce: call 0x99ceac */
  esp -= 4; W32(esp, 0x9777d3u); SPILL(); hle_ftol(); RELOAD();
/* 9777d3: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9777d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9777d7: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 9777da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9777db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9777dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9777dd: call 0x99c910 */
  esp -= 4; W32(esp, 0x9777e2u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 9777e2: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 9777e4: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 9777e6: mov edx, ebx */
  edx = ebx;
/* 9777e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9777e9: mov eax, edi */
  eax = edi;
/* 9777eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9777ec: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9777f0: push 0xb02c18 */
  { uint32_t v = 0xb02c18u; esp -= 4; W32(esp, v); }
/* 9777f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9777f6: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 9777f9: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 9777fc: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x977802u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 977802: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977805: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977808: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97780a: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 97780e: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977810: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 977814: not ecx */
  ecx = ~ecx;
/* 977816: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977817: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977818: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 97781c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97781d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97781e: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977823u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977823: fld dword ptr [0xcf2fa0] */
  { double v = F32((uint32_t)(0xcf2fa0u)); FPUSH(v); }
/* 977829: call 0x99ceac */
  esp -= 4; W32(esp, 0x97782eu); SPILL(); hle_ftol(); RELOAD();
/* 97782e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97782f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977830: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 977834: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 977837: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 97783a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97783b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97783c: call 0x99c910 */
  esp -= 4; W32(esp, 0x977841u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 977841: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 977847: fsub dword ptr [0xcf2fa0] */
  ST0 = ST0 - (F32((uint32_t)(0xcf2fa0u)));
/* 97784d: mov edi, eax */
  edi = eax;
/* 97784f: mov ebx, edx */
  ebx = edx;
/* 977851: call 0x99ceac */
  esp -= 4; W32(esp, 0x977856u); SPILL(); hle_ftol(); RELOAD();
/* 977856: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 977859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97785a: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 97785d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97785e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97785f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977860: call 0x99c910 */
  esp -= 4; W32(esp, 0x977865u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 977865: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 977867: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 977869: mov edx, ebx */
  edx = ebx;
/* 97786b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97786c: mov eax, edi */
  eax = edi;
/* 97786e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97786f: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 977873: push 0xb02c18 */
  { uint32_t v = 0xb02c18u; esp -= 4; W32(esp, v); }
/* 977878: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977879: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 97787c: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 97787f: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x977885u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 977885: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977888: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97788b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97788d: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977891: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977893: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 977897: not ecx */
  ecx = ~ecx;
/* 977899: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97789a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97789b: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 97789f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9778a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9778a1: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9778a6u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9778a6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9778aa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 9778ac: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9778ae: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9778b0: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 9778b4: jne 0x9776a0 */
  if (!zf) goto L_9776a0;
L_9778ba: /* 9778ba: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9778c0: fsub dword ptr [0xcf2fa0] */
  ST0 = ST0 - (F32((uint32_t)(0xcf2fa0u)));
/* 9778c6: call 0x99ceac */
  esp -= 4; W32(esp, 0x9778cbu); SPILL(); hle_ftol(); RELOAD();
/* 9778cb: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9778ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9778cf: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9778d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9778d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9778d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9778d5: call 0x99c910 */
  esp -= 4; W32(esp, 0x9778dau); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 9778da: fld dword ptr [0xcf2fa0] */
  { double v = F32((uint32_t)(0xcf2fa0u)); FPUSH(v); }
/* 9778e0: mov edi, eax */
  edi = eax;
/* 9778e2: mov ebx, edx */
  ebx = edx;
/* 9778e4: call 0x99ceac */
  esp -= 4; W32(esp, 0x9778e9u); SPILL(); hle_ftol(); RELOAD();
/* 9778e9: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9778ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9778ed: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9778f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9778f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9778f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9778f3: call 0x99c910 */
  esp -= 4; W32(esp, 0x9778f8u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 9778f8: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 9778fa: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9778fe: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 977900: mov edx, ebx */
  edx = ebx;
/* 977902: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977903: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 977906: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 977909: mov eax, edi */
  eax = edi;
/* 97790b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97790c: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 977910: push 0xb02c18 */
  { uint32_t v = 0xb02c18u; esp -= 4; W32(esp, v); }
/* 977915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977916: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97791cu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97791c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97791f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977922: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977924: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977928: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97792a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 97792e: not ecx */
  ecx = ~ecx;
/* 977930: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977931: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977932: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 977936: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977938: call 0x975cb0 */
  esp -= 4; W32(esp, 0x97793du); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 97793d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 977943: fsub dword ptr [0xcf2fa0] */
  ST0 = ST0 - (F32((uint32_t)(0xcf2fa0u)));
/* 977949: call 0x99ceac */
  esp -= 4; W32(esp, 0x97794eu); SPILL(); hle_ftol(); RELOAD();
/* 97794e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 977951: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977952: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 977955: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977956: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977958: call 0x99c910 */
  esp -= 4; W32(esp, 0x97795du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 97795d: fld dword ptr [0xcf2fa0] */
  { double v = F32((uint32_t)(0xcf2fa0u)); FPUSH(v); }
/* 977963: mov edi, eax */
  edi = eax;
/* 977965: mov ebx, edx */
  ebx = edx;
/* 977967: call 0x99ceac */
  esp -= 4; W32(esp, 0x97796cu); SPILL(); hle_ftol(); RELOAD();
/* 97796c: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 97796f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977970: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 977973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977975: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977976: call 0x99c910 */
  esp -= 4; W32(esp, 0x97797bu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 97797b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 97797d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 977981: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 977983: mov edx, ebx */
  edx = ebx;
/* 977985: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 977988: mov ebx, dword ptr [0xcfb078] */
  ebx = R32((uint32_t)(0xcfb078u));
/* 97798e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97798f: mov dword ptr [eax + 0x18], edi */
  W32((uint32_t)(eax + 0x18u), edi);
/* 977992: mov eax, edi */
  eax = edi;
/* 977994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977995: push 0xb02c18 */
  { uint32_t v = 0xb02c18u; esp -= 4; W32(esp, v); }
/* 97799a: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 97799e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97799f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9779a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9779a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9779a4: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9779a7: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9779a9: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 9779ad: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9779af: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9779b3: not ecx */
  ecx = ~ecx;
/* 9779b5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9779b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9779b7: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 9779bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9779bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9779bd: call 0x975cb0 */
  esp -= 4; W32(esp, 0x9779c2u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 9779c2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9779c8: fsub dword ptr [0xcf2fa0] */
  ST0 = ST0 - (F32((uint32_t)(0xcf2fa0u)));
/* 9779ce: call 0x99ceac */
  esp -= 4; W32(esp, 0x9779d3u); SPILL(); hle_ftol(); RELOAD();
/* 9779d3: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 9779d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9779d7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 9779da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9779db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9779dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9779dd: call 0x99c910 */
  esp -= 4; W32(esp, 0x9779e2u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 9779e2: fld dword ptr [0xcf2fa0] */
  { double v = F32((uint32_t)(0xcf2fa0u)); FPUSH(v); }
/* 9779e8: mov esi, eax */
  esi = eax;
/* 9779ea: mov edi, edx */
  edi = edx;
/* 9779ec: call 0x99ceac */
  esp -= 4; W32(esp, 0x9779f1u); SPILL(); hle_ftol(); RELOAD();
/* 9779f1: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 9779f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9779f5: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 9779f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9779f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9779fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9779fb: call 0x99c910 */
  esp -= 4; W32(esp, 0x977a00u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 977a00: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 977a02: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 977a06: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 977a08: mov edx, edi */
  edx = edi;
/* 977a0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977a0b: mov dword ptr [eax + 0x20], esi */
  W32((uint32_t)(eax + 0x20u), esi);
/* 977a0e: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* 977a11: mov eax, esi */
  eax = esi;
/* 977a13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977a14: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 977a18: push 0xb02c18 */
  { uint32_t v = 0xb02c18u; esp -= 4; W32(esp, v); }
/* 977a1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977a1e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977a20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977a20: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 977a24: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977a27: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977a2a: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977a2c: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977a30: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977a32: not ecx */
  ecx = ~ecx;
/* 977a34: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977a35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977a36: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 977a3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977a3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977a3c: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977a41u); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977a41: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 977a45: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 977a4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977a4b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977a4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977a4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977a50: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977a53: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977a55: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977a59: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977a5b: not ecx */
  ecx = ~ecx;
/* 977a5d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977a5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977a5f: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 977a63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977a64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977a65: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977a6au); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977a6a: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 977a6e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 977a71: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 977a73: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 977a77: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 977a7a: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 977a7e: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 977a81: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 977a85: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 977a89: adc ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 977a8b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 977a8f: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 977a93: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 977a96: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 977a98: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 977a9b: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 977a9d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 977aa1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 977aa5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 977aa8: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 977aaa: mov ax, word ptr [ebp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x4u))) & 0xffffu);
/* 977aae: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 977ab1: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 977ab3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977ab5: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 977ab9: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 977abd: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 977ac1: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 977ac5: jne 0x977625 */
  if (!zf) goto L_977625;
L_977acb: /* 977acb: jmp 0x977ad1 */
  goto L_977ad1;
L_977acd: /* 977acd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
L_977ad1: /* 977ad1: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 977ad4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 977ad5: mov ebp, edx */
  ebp = edx;
/* 977ad7: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 977adb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 977adc: mov edi, eax */
  edi = eax;
/* 977ade: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 977ae2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977ae3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977ae4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977ae5: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x977aeau); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 977aea: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 977aee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977aef: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 977af3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977af4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 977af5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977af6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977af7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977af8: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x977afdu); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 977afd: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 977b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977b02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977b03: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 977b07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 977b08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977b0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977b0b: call 0x99cfa0 */
  esp -= 4; W32(esp, 0x977b10u); SPILL(); f_99cfa0(); if (g_unwind) return; RELOAD();
/* 977b10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977b11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977b12: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 977b16: push 0xb02bdc */
  { uint32_t v = 0xb02bdcu; esp -= 4; W32(esp, v); }
/* 977b1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977b1c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x977b1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977b1e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977b21: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 977b24: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 977b26: lea edi, [esp + 0x3c] */
  edi = (uint32_t)(esp + 0x3cu);
/* 977b2a: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 977b2c: not ecx */
  ecx = ~ecx;
/* 977b2e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 977b2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977b30: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 977b34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977b35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977b36: call 0x975cb0 */
  esp -= 4; W32(esp, 0x977b3bu); SPILL(); f_975cb0(); if (g_unwind) return; RELOAD();
/* 977b3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977b3c: call 0x975cd0 */
  esp -= 4; W32(esp, 0x977b41u); SPILL(); f_975cd0(); if (g_unwind) return; RELOAD();
/* 977b41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977b42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977b43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 977b44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 977b45: add esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977b4b: ret  */
  esp += 4; SPILL(); return;
}

void f_977b50(void) {
  LOAD_REGS();
L_977b50: /* 977b50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 977b54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 977b55: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 977b59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977b5a: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 977b5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977b5f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 977b60: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 977b62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977b63: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* 977b66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977b67: call 0x977d70 */
  esp -= 4; W32(esp, 0x977b6cu); SPILL(); f_977d70(); if (g_unwind) return; RELOAD();
/* 977b6c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 977b70: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977b73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977b75: jne 0x977b7c */
  if (!zf) goto L_977b7c;
L_977b77: /* 977b77: mov eax, 0x977ba0 */
  eax = 0x977ba0u;
L_977b7c: /* 977b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977b7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 977b7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977b7f: call 0x971fe0 */
  esp -= 4; W32(esp, 0x977b84u); SPILL(); f_971fe0(); if (g_unwind) return; RELOAD();
/* 977b84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977b85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977b86: call 0x977e40 */
  esp -= 4; W32(esp, 0x977b8bu); SPILL(); f_977e40(); if (g_unwind) return; RELOAD();
/* 977b8b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977b8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977b8f: mov dword ptr [esi + 0x4c], 0 */
  W32((uint32_t)(esi + 0x4cu), 0x0u);
/* 977b96: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
/* 977b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977b9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 977b9f: ret  */
  esp += 4; SPILL(); return;
}

void f_977ba0(void) {
  LOAD_REGS();
L_977ba0: /* 977ba0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 977ba4: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 977ba8: ret  */
  esp += 4; SPILL(); return;
}

void f_977bb0(void) {
  LOAD_REGS();
L_977bb0: /* 977bb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 977bb4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 977bb7: ret  */
  esp += 4; SPILL(); return;
}

void f_977bc0(void) {
  LOAD_REGS();
L_977bc0: /* 977bc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 977bc4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 977bc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977bc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977bca: call 0x972280 */
  esp -= 4; W32(esp, 0x977bcfu); SPILL(); f_972280(); if (g_unwind) return; RELOAD();
/* 977bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977bd2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 977bd4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 977bd6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 977bd8: ret  */
  esp += 4; SPILL(); return;
}

void f_977be0(void) {
  LOAD_REGS();
L_977be0: /* 977be0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 977be1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 977be5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977be6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 977bea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977beb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 977bec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977bed: call 0x977bc0 */
  esp -= 4; W32(esp, 0x977bf2u); SPILL(); f_977bc0(); if (g_unwind) return; RELOAD();
/* 977bf2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977bf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977bf7: je 0x977bff */
  if (zf) goto L_977bff;
L_977bf9: /* 977bf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977bfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977bfb: xor eax, eax */
  eax = 0;
/* 977bfd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 977bfe: ret  */
  esp += 4; SPILL(); return;
L_977bff: /* 977bff: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 977c02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977c03: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x977c06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977c06: mov edi, eax */
  edi = eax;
/* 977c08: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977c0b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977c0d: jne 0x977c13 */
  if (!zf) goto L_977c13;
L_977c0f: /* 977c0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977c10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977c11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 977c12: ret  */
  esp += 4; SPILL(); return;
L_977c13: /* 977c13: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 977c16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977c18: jne 0x977c1d */
  if (!zf) goto L_977c1d;
L_977c1a: /* 977c1a: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
L_977c1d: /* 977c1d: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 977c20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977c22: je 0x977c27 */
  if (zf) goto L_977c27;
L_977c24: /* 977c24: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_977c27: /* 977c27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 977c29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977c2a: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 977c2d: call 0x9728e0 */
  esp -= 4; W32(esp, 0x977c32u); SPILL(); f_9728e0(); if (g_unwind) return; RELOAD();
/* 977c32: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 977c33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977c34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977c35: call 0x9723a0 */
  esp -= 4; W32(esp, 0x977c3au); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 977c3a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977c3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977c3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977c3f: mov eax, 1 */
  eax = 0x1u;
/* 977c44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 977c45: ret  */
  esp += 4; SPILL(); return;
}

void f_977c50(void) {
  LOAD_REGS();
L_977c50: /* 977c50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 977c54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977c55: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 977c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977c5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977c5b: call 0x972280 */
  esp -= 4; W32(esp, 0x977c60u); SPILL(); f_972280(); if (g_unwind) return; RELOAD();
/* 977c60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977c63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977c65: jne 0x977c69 */
  if (!zf) goto L_977c69;
L_977c67: /* 977c67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977c68: ret  */
  esp += 4; SPILL(); return;
L_977c69: /* 977c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977c6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977c6b: call 0x9726f0 */
  esp -= 4; W32(esp, 0x977c70u); SPILL(); f_9726f0(); if (g_unwind) return; RELOAD();
/* 977c70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977c73: mov eax, 1 */
  eax = 0x1u;
/* 977c78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977c79: ret  */
  esp += 4; SPILL(); return;
}

void f_977c80(void) {
  LOAD_REGS();
L_977c80: /* 977c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977c81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 977c85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977c86: call 0x972710 */
  esp -= 4; W32(esp, 0x977c8bu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 977c8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977c8d: call 0x977ca0 */
  esp -= 4; W32(esp, 0x977c92u); SPILL(); f_977ca0(); if (g_unwind) return; RELOAD();
/* 977c92: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977c95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977c96: ret  */
  esp += 4; SPILL(); return;
}

void f_977ca0(void) {
  LOAD_REGS();
L_977ca0: /* 977ca0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 977ca4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977ca6: jne 0x977ca9 */
  if (!zf) goto L_977ca9;
L_977ca8: /* 977ca8: ret  */
  esp += 4; SPILL(); return;
L_977ca9: /* 977ca9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977caa: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 977cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977cae: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 977cb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977cb3: call 0x9726f0 */
  esp -= 4; W32(esp, 0x977cb8u); SPILL(); f_9726f0(); if (g_unwind) return; RELOAD();
/* 977cb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977cbb: mov eax, esi */
  eax = esi;
/* 977cbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977cbe: ret  */
  esp += 4; SPILL(); return;
}

void f_977cc0(void) {
  LOAD_REGS();
L_977cc0: /* 977cc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 977cc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 977cc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977cc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977cc8: call 0x977ca0 */
  esp -= 4; W32(esp, 0x977ccdu); SPILL(); f_977ca0(); if (g_unwind) return; RELOAD();
/* 977ccd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977cd0: ret  */
  esp += 4; SPILL(); return;
}

void f_977ce0(void) {
  LOAD_REGS();
L_977ce0: /* 977ce0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 977ce4: mov ecx, dword ptr [edx + 0x48] */
  ecx = R32((uint32_t)(edx + 0x48u));
/* 977ce7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977ce9: jne 0x977cee */
  if (!zf) goto L_977cee;
L_977ceb: /* 977ceb: xor eax, eax */
  eax = 0;
/* 977ced: ret  */
  esp += 4; SPILL(); return;
L_977cee: /* 977cee: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 977cf1: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 977cf4: mov dword ptr [edx + 0x48], ecx */
  W32((uint32_t)(edx + 0x48u), ecx);
/* 977cf7: ret  */
  esp += 4; SPILL(); return;
}

void f_977d00(void) {
  LOAD_REGS();
L_977d00: /* 977d00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 977d04: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 977d07: sub eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 977d0a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 977d0c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 977d0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 977d0f: ret  */
  esp += 4; SPILL(); return;
}

void f_977d10(void) {
  LOAD_REGS();
L_977d10: /* 977d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977d11: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 977d13: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x977d19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977d19: mov esi, eax */
  esi = eax;
/* 977d1b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 977d1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977d21: jne 0x977d28 */
  if (!zf) goto L_977d28;
L_977d23: /* 977d23: mov eax, 0x977ba0 */
  eax = 0x977ba0u;
L_977d28: /* 977d28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977d29: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 977d2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977d2f: call 0x971fe0 */
  esp -= 4; W32(esp, 0x977d34u); SPILL(); f_971fe0(); if (g_unwind) return; RELOAD();
/* 977d34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977d37: mov dword ptr [esi + 0x3c], 0xfffffc19 */
  W32((uint32_t)(esi + 0x3cu), 0xfffffc19u);
/* 977d3e: mov eax, esi */
  eax = esi;
/* 977d40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977d41: ret  */
  esp += 4; SPILL(); return;
}

void f_977d50(void) {
  LOAD_REGS();
L_977d50: /* 977d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977d51: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 977d55: cmp dword ptr [esi + 0x3c], 0xfffffc19 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xfffffc19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 977d5c: jne 0x977d6e */
  if (!zf) goto L_977d6e;
L_977d5e: /* 977d5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977d5f: call 0x971f70 */
  esp -= 4; W32(esp, 0x977d64u); SPILL(); f_971f70(); if (g_unwind) return; RELOAD();
/* 977d64: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977d67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977d68: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x977d6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_977d6e: /* 977d6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977d6f: ret  */
  esp += 4; SPILL(); return;
}

void f_977d70(void) {
  LOAD_REGS();
L_977d70: /* 977d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 977d74: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 977d78: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 977d7c: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 977d7f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 977d82: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 977d86: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 977d88: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 977d8b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 977d8e: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* 977d95: mov dword ptr [ecx], 0xffffffff */
  W32((uint32_t)(ecx), 0xffffffffu);
/* 977d9b: ret  */
  esp += 4; SPILL(); return;
}

void f_977da0(void) {
  LOAD_REGS();
L_977da0: /* 977da0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 977da4: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 977da7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977da9: jne 0x977dae */
  if (!zf) goto L_977dae;
L_977dab: /* 977dab: xor eax, eax */
  eax = 0;
/* 977dad: ret  */
  esp += 4; SPILL(); return;
L_977dae: /* 977dae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977daf: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 977db2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 977db3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977db5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977db6: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 977db8: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* 977dbb: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 977dbe: je 0x977ddc */
  if (zf) goto L_977ddc;
L_977dc0: /* 977dc0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 977dc2: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 977dc5: jne 0x977dd9 */
  if (!zf) goto L_977dd9;
L_977dc7: /* 977dc7: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 977dca: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 977dcc: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 977dcf: mov dword ptr [edi + edx*4], 0xffffffff */
  W32((uint32_t)(edi + edx*4), 0xffffffffu);
/* 977dd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977dd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977dd8: ret  */
  esp += 4; SPILL(); return;
L_977dd9: /* 977dd9: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
L_977ddc: /* 977ddc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977ddd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977dde: ret  */
  esp += 4; SPILL(); return;
}

void f_977de0(void) {
  LOAD_REGS();
L_977de0: /* 977de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977de1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 977de5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977de6: call 0x977da0 */
  esp -= 4; W32(esp, 0x977debu); SPILL(); f_977da0(); if (g_unwind) return; RELOAD();
/* 977deb: mov edx, eax */
  edx = eax;
/* 977ded: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977df0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 977df2: je 0x977e0e */
  if (zf) goto L_977e0e;
L_977df4: /* 977df4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 977df7: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 977dfa: mov esi, ecx */
  esi = ecx;
/* 977dfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977dfd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 977e00: xor eax, eax */
  eax = 0;
/* 977e02: mov edi, edx */
  edi = edx;
/* 977e04: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 977e06: mov ecx, esi */
  ecx = esi;
/* 977e08: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 977e0b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 977e0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_977e0e: /* 977e0e: mov eax, edx */
  eax = edx;
/* 977e10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977e11: ret  */
  esp += 4; SPILL(); return;
}

void f_977e20(void) {
  LOAD_REGS();
L_977e20: /* 977e20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 977e24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 977e26: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 977e2a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 977e2c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 977e2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977e30: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 977e33: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 977e36: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 977e39: inc dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 977e3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977e3d: ret  */
  esp += 4; SPILL(); return;
}

void f_977e40(void) {
  LOAD_REGS();
L_977e40: /* 977e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 977e44: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 977e48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977e49: push 0x977e70 */
  { uint32_t v = 0x977e70u; esp -= 4; W32(esp, v); }
/* 977e4e: push 0x977e60 */
  { uint32_t v = 0x977e60u; esp -= 4; W32(esp, v); }
/* 977e53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977e54: call 0x971f20 */
  esp -= 4; W32(esp, 0x977e59u); SPILL(); f_971f20(); if (g_unwind) return; RELOAD();
/* 977e59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977e5c: ret  */
  esp += 4; SPILL(); return;
}

void f_977e60(void) {
  LOAD_REGS();
L_977e60: /* 977e60: jmp 0x977da0 */
  SPILL(); f_977da0(); return;
}

void f_977e70(void) {
  LOAD_REGS();
L_977e70: /* 977e70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 977e74: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 977e78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977e79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977e7a: call 0x977e20 */
  esp -= 4; W32(esp, 0x977e7fu); SPILL(); f_977e20(); if (g_unwind) return; RELOAD();
/* 977e7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977e82: ret  */
  esp += 4; SPILL(); return;
}

void f_977e90(void) {
  LOAD_REGS();
L_977e90: /* 977e90: pushal  */
  { uint32_t s = esp; esp -= 32; W32(esp + 28, eax); W32(esp + 24, ecx); W32(esp + 20, edx); W32(esp + 16, ebx);
    W32(esp + 12, s); W32(esp + 8, ebp); W32(esp + 4, esi); W32(esp, edi); }
/* 977e91: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* 977e93: popal  */
  edi = R32(esp); esi = R32(esp + 4); ebp = R32(esp + 8); ebx = R32(esp + 16); edx = R32(esp + 20);
  ecx = R32(esp + 24); eax = R32(esp + 28); esp += 32;
/* 977e94: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 977e96: ret  */
  esp += 4; SPILL(); return;
}

void f_977ea0(void) {
  LOAD_REGS();
L_977ea0: /* 977ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977ea1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977ea2: mov edi, dword ptr [0xcfb120] */
  edi = R32((uint32_t)(0xcfb120u));
/* 977ea8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x977eaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977eaa: mov esi, eax */
  esi = eax;
/* 977eac: add esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_977eb0: /* 977eb0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x977eb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977eb2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 977eb4: jg 0x977eb0 */
  if ((!zf && sf == of)) goto L_977eb0;
L_977eb6: /* 977eb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977eb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977eb8: ret  */
  esp += 4; SPILL(); return;
}

void f_977ec0(void) {
  LOAD_REGS();
L_977ec0: /* 977ec0: call 0x977e90 */
  esp -= 4; W32(esp, 0x977ec5u); SPILL(); f_977e90(); if (g_unwind) return; RELOAD();
/* 977ec5: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 977ec9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 977ecb: xor eax, eax */
  eax = 0;
/* 977ecd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 977ed0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 977ed3: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 977ed6: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 977ed9: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 977edc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_977ef0(void) {
  LOAD_REGS();
L_977ef0: /* 977ef0: xor eax, eax */
  eax = 0;
/* 977ef2: ret  */
  esp += 4; SPILL(); return;
}

void f_977f00(void) {
  LOAD_REGS();
L_977f00: /* 977f00: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 977f03: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 977f07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977f08: call 0x977ec0 */
  esp -= 4; W32(esp, 0x977f0du); SPILL(); f_977ec0(); if (g_unwind) return; RELOAD();
/* 977f0d: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 977f12: call 0x977ea0 */
  esp -= 4; W32(esp, 0x977f17u); SPILL(); f_977ea0(); if (g_unwind) return; RELOAD();
/* 977f17: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977f1a: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 977f1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977f1f: call 0x977ec0 */
  esp -= 4; W32(esp, 0x977f24u); SPILL(); f_977ec0(); if (g_unwind) return; RELOAD();
/* 977f24: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 977f28: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 977f2c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 977f30: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  edx = r;
  }
/* 977f32: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 977f36: sbb eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 977f38: shrd edx, eax, 1 */
  { uint32_t a = edx, b = eax, c = (0x1u) & 31;
  if (c) {
  uint32_t r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edx = r;
  } }
/* 977f3c: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 977f3e: mov dword ptr [0xcf2fc0], edx */
  W32((uint32_t)(0xcf2fc0u), edx);
/* 977f44: mov dword ptr [0xcf2fc4], eax */
  W32((uint32_t)(0xcf2fc4u), eax);
/* 977f49: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 977f4c: ret  */
  esp += 4; SPILL(); return;
}

void f_977f50(void) {
  LOAD_REGS();
L_977f50: /* 977f50: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 977f54: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 977f58: mov dword ptr [eax], 0xb02e98 */
  W32((uint32_t)(eax), 0xb02e98u);
/* 977f5e: mov dword ptr [ecx], 0xb02e98 */
  W32((uint32_t)(ecx), 0xb02e98u);
/* 977f64: xor eax, eax */
  eax = 0;
/* 977f66: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_977f70(void) {
  LOAD_REGS();
L_977f70: /* 977f70: xor eax, eax */
  eax = 0;
/* 977f72: ret  */
  esp += 4; SPILL(); return;
}

void f_977f80(void) {
  LOAD_REGS();
L_977f80: /* 977f80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977f81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977f82: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 977f84: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x977f8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977f8a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 977f8e: mov esi, eax */
  esi = eax;
/* 977f90: push 0x61 */
  { uint32_t v = 0x61u; esp -= 4; W32(esp, v); }
/* 977f92: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 977f94: call 0x974dc0 */
  esp -= 4; W32(esp, 0x977f99u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 977f99: push 0x61 */
  { uint32_t v = 0x61u; esp -= 4; W32(esp, v); }
/* 977f9b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 977f9e: call 0x974dc0 */
  esp -= 4; W32(esp, 0x977fa3u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 977fa3: push 0x974da0 */
  { uint32_t v = 0x974da0u; esp -= 4; W32(esp, v); }
/* 977fa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977fa9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 977fac: call 0x974ed0 */
  esp -= 4; W32(esp, 0x977fb1u); SPILL(); f_974ed0(); if (g_unwind) return; RELOAD();
/* 977fb1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 977fb4: push 0x974d40 */
  { uint32_t v = 0x974d40u; esp -= 4; W32(esp, v); }
/* 977fb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977fba: call 0x974ec0 */
  esp -= 4; W32(esp, 0x977fbfu); SPILL(); f_974ec0(); if (g_unwind) return; RELOAD();
/* 977fbf: mov ecx, dword ptr [0xb021a4] */
  ecx = R32((uint32_t)(0xb021a4u));
/* 977fc5: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 977fc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977fc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 977fca: call 0x974ee0 */
  esp -= 4; W32(esp, 0x977fcfu); SPILL(); f_974ee0(); if (g_unwind) return; RELOAD();
/* 977fcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 977fd0: call 0x92a9c0 */
  esp -= 4; W32(esp, 0x977fd5u); SPILL(); f_92a9c0(); if (g_unwind) return; RELOAD();
/* 977fd5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 977fd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 977fd9: mov eax, esi */
  eax = esi;
/* 977fdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977fdc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_977fe0(void) {
  LOAD_REGS();
L_977fe0: /* 977fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977fe1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 977fe5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 977fe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 977fe9: call 0x974e30 */
  esp -= 4; W32(esp, 0x977feeu); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 977fee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 977ff1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 977ff2: call 0x974e30 */
  esp -= 4; W32(esp, 0x977ff7u); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 977ff7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 977ff8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x977ffeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 977ffe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 977fff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_978010(void) {
  LOAD_REGS();
  goto L_978010;
L_9750b0: /* 9750b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9750b4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 9750b7: ret 4 */
  esp += 8; SPILL(); return;
L_978010: /* 978010: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978014: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 978017: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97801b: jmp 0x9750b0 */
  goto L_9750b0;
}

void f_978020(void) {
  LOAD_REGS();
L_978020: /* 978020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978024: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 978026: ret 4 */
  esp += 8; SPILL(); return;
}

void f_978030(void) {
  LOAD_REGS();
L_978030: /* 978030: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 978033: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978034: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978035: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978036: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 97803a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97803b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97803c: call 0x97d400 */
  esp -= 4; W32(esp, 0x978041u); SPILL(); f_97d400(); if (g_unwind) return; RELOAD();
/* 978041: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978042: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 978046: call 0x97d2f0 */
  esp -= 4; W32(esp, 0x97804bu); SPILL(); f_97d2f0(); if (g_unwind) return; RELOAD();
/* 97804b: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 97804f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 978052: mov ebp, eax */
  ebp = eax;
/* 978054: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 978056: mov edi, ebp */
  edi = ebp;
/* 978058: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97805a: not ecx */
  ecx = ~ecx;
/* 97805c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97805d: mov edx, ecx */
  edx = ecx;
/* 97805f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 978062: mov edi, esi */
  edi = esi;
/* 978064: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 978066: not ecx */
  ecx = ~ecx;
/* 978068: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 978069: lea eax, [edx + ecx + 3] */
  eax = (uint32_t)(edx + ecx + 0x3u);
/* 97806d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97806e: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 978072: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x978078u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 978078: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97807b: mov ebx, eax */
  ebx = eax;
/* 97807d: mov byte ptr [ebx], 0 */
  W8((uint32_t)(ebx), 0x0u);
/* 978080: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 978082: mov edi, esi */
  edi = esi;
/* 978084: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 978086: not ecx */
  ecx = ~ecx;
/* 978088: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 97808a: mov edx, ecx */
  edx = ecx;
/* 97808c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 97808f: mov esi, edi */
  esi = edi;
/* 978091: mov edi, ebx */
  edi = ebx;
/* 978093: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 978095: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 978096: mov ecx, edx */
  ecx = edx;
/* 978098: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97809b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 97809d: mov ecx, edx */
  ecx = edx;
/* 97809f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9780a2: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9780a4: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 9780a7: mov edi, ebx */
  edi = ebx;
/* 9780a9: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9780ab: mov ax, word ptr [0xb02f34] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb02f34u))) & 0xffffu);
/* 9780b1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9780b2: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 9780b5: mov cl, byte ptr [0xb02f36] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb02f36u))) & 0xffu);
/* 9780bb: mov byte ptr [edi + 2], cl */
  W8((uint32_t)(edi + 0x2u), (ecx & 0xffu));
/* 9780be: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9780c0: mov edi, ebp */
  edi = ebp;
/* 9780c2: mov ecx, 0xffffffff */
  ecx = 0xffffffffu;
/* 9780c7: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9780c9: not ecx */
  ecx = ~ecx;
/* 9780cb: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9780cd: mov edx, ecx */
  edx = ecx;
/* 9780cf: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 9780d2: mov esi, edi */
  esi = edi;
/* 9780d4: mov edi, ebx */
  edi = ebx;
/* 9780d6: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9780d8: mov ecx, edx */
  ecx = edx;
/* 9780da: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9780dd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9780de: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9780e0: mov ecx, edx */
  ecx = edx;
/* 9780e2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9780e5: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9780e7: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9780eb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9780ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9780ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9780f0: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 9780f4: call 0x974fe0 */
  esp -= 4; W32(esp, 0x9780f9u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 9780f9: mov edi, eax */
  edi = eax;
/* 9780fb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9780fd: jne 0x9783f1 */
  if (!zf) goto L_9783f1;
L_978103: /* 978103: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 978107: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 978109: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97810a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97810b: call 0x926d30 */
  esp -= 4; W32(esp, 0x978110u); SPILL(); f_926d30(); if (g_unwind) return; RELOAD();
/* 978110: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 978114: mov edi, eax */
  edi = eax;
/* 978116: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 97811a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97811b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97811c: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 978120: call 0x97d340 */
  esp -= 4; W32(esp, 0x978125u); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 978125: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 978129: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97812a: call 0x97d360 */
  esp -= 4; W32(esp, 0x97812fu); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97812f: mov ebp, eax */
  ebp = eax;
/* 978131: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978133: je 0x978376 */
  if (zf) goto L_978376;
L_978139: /* 978139: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_978140: /* 978140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978141: call 0x97dc10 */
  esp -= 4; W32(esp, 0x978146u); SPILL(); f_97dc10(); if (g_unwind) return; RELOAD();
/* 978146: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 978149: mov edi, eax */
  edi = eax;
/* 97814b: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 97814f: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 978151: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 978153: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 978157: not ecx */
  ecx = ~ecx;
/* 978159: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97815a: mov edx, ecx */
  edx = ecx;
/* 97815c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 97815f: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 978161: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 978165: not ecx */
  ecx = ~ecx;
/* 978167: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 978168: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97816a: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 97816d: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97816f: not ecx */
  ecx = ~ecx;
/* 978171: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 978172: lea eax, [edx + ecx + 5] */
  eax = (uint32_t)(edx + ecx + 0x5u);
/* 978176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978177: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97817du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97817d: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 978180: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 978184: mov ebx, eax */
  ebx = eax;
/* 978186: mov byte ptr [ebx], 0 */
  W8((uint32_t)(ebx), 0x0u);
/* 978189: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97818b: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97818d: not ecx */
  ecx = ~ecx;
/* 97818f: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 978191: mov edx, ecx */
  edx = ecx;
/* 978193: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 978196: mov esi, edi */
  esi = edi;
/* 978198: mov edi, ebx */
  edi = ebx;
/* 97819a: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97819c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 97819d: mov ecx, edx */
  ecx = edx;
/* 97819f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9781a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9781a4: mov ecx, edx */
  ecx = edx;
/* 9781a6: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9781a9: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9781ab: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 9781ae: mov edi, ebx */
  edi = ebx;
/* 9781b0: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9781b2: mov ax, word ptr [0xb02f34] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb02f34u))) & 0xffffu);
/* 9781b8: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9781b9: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 9781bc: mov cl, byte ptr [0xb02f36] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb02f36u))) & 0xffu);
/* 9781c2: mov byte ptr [edi + 2], cl */
  W8((uint32_t)(edi + 0x2u), (ecx & 0xffu));
/* 9781c5: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 9781c9: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9781cb: mov ecx, 0xffffffff */
  ecx = 0xffffffffu;
/* 9781d0: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9781d2: not ecx */
  ecx = ~ecx;
/* 9781d4: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9781d6: mov edx, ecx */
  edx = ecx;
/* 9781d8: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 9781db: mov esi, edi */
  esi = edi;
/* 9781dd: mov edi, ebx */
  edi = ebx;
/* 9781df: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9781e1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9781e2: mov ecx, edx */
  ecx = edx;
/* 9781e4: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9781e7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9781e9: mov ecx, edx */
  ecx = edx;
/* 9781eb: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9781ee: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9781f0: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 9781f3: mov edi, ebx */
  edi = ebx;
/* 9781f5: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9781f7: mov ax, word ptr [0xb02f34] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb02f34u))) & 0xffffu);
/* 9781fd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9781fe: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 978201: mov cl, byte ptr [0xb02f36] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb02f36u))) & 0xffu);
/* 978207: mov byte ptr [edi + 2], cl */
  W8((uint32_t)(edi + 0x2u), (ecx & 0xffu));
/* 97820a: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 97820e: mov ecx, 0xffffffff */
  ecx = 0xffffffffu;
/* 978213: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 978215: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 978217: not ecx */
  ecx = ~ecx;
/* 978219: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 97821b: mov edx, ecx */
  edx = ecx;
/* 97821d: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 978220: mov esi, edi */
  esi = edi;
/* 978222: mov edi, ebx */
  edi = ebx;
/* 978224: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 978226: mov ecx, edx */
  ecx = edx;
/* 978228: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97822b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 97822c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 97822e: mov ecx, edx */
  ecx = edx;
/* 978230: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 978233: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 978235: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 978239: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97823c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97823d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97823e: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978243u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978243: mov esi, eax */
  esi = eax;
/* 978245: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978247: jne 0x97833d */
  if (!zf) goto L_97833d;
L_97824d: /* 97824d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97824e: call 0x97dc00 */
  esp -= 4; W32(esp, 0x978253u); SPILL(); f_97dc00(); if (g_unwind) return; RELOAD();
/* 978253: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978256: jne 0x97827f */
  if (!zf) goto L_97827f;
L_978258: /* 978258: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 97825c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97825d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97825e: call 0x97dc30 */
  esp -= 4; W32(esp, 0x978263u); SPILL(); f_97dc30(); if (g_unwind) return; RELOAD();
/* 978263: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 978267: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 97826b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 97826f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978270: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 978272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978273: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978275: call 0x92dda0 */
  esp -= 4; W32(esp, 0x97827au); SPILL(); f_92dda0(); if (g_unwind) return; RELOAD();
/* 97827a: jmp 0x97831f */
  goto L_97831f;
L_97827f: /* 97827f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978282: jne 0x97829b */
  if (!zf) goto L_97829b;
L_978284: /* 978284: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978285: call 0x97dc20 */
  esp -= 4; W32(esp, 0x97828au); SPILL(); f_97dc20(); if (g_unwind) return; RELOAD();
/* 97828a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97828c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97828d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 978290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978291: call 0x92d530 */
  esp -= 4; W32(esp, 0x978296u); SPILL(); f_92d530(); if (g_unwind) return; RELOAD();
/* 978296: jmp 0x97831f */
  goto L_97831f;
L_97829b: /* 97829b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97829e: jne 0x9782be */
  if (!zf) goto L_9782be;
L_9782a0: /* 9782a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9782a1: call 0x97dc50 */
  esp -= 4; W32(esp, 0x9782a6u); SPILL(); f_97dc50(); if (g_unwind) return; RELOAD();
/* 9782a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9782a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9782aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9782ab: call 0x97dc20 */
  esp -= 4; W32(esp, 0x9782b0u); SPILL(); f_97dc20(); if (g_unwind) return; RELOAD();
/* 9782b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9782b1: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9782b3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9782b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9782b7: call 0x92e5c0 */
  esp -= 4; W32(esp, 0x9782bcu); SPILL(); f_92e5c0(); if (g_unwind) return; RELOAD();
/* 9782bc: jmp 0x97831f */
  goto L_97831f;
L_9782be: /* 9782be: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9782c1: jne 0x9782e1 */
  if (!zf) goto L_9782e1;
L_9782c3: /* 9782c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9782c4: call 0x97dc50 */
  esp -= 4; W32(esp, 0x9782c9u); SPILL(); f_97dc50(); if (g_unwind) return; RELOAD();
/* 9782c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9782ca: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9782cd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9782ce: call 0x97dc20 */
  esp -= 4; W32(esp, 0x9782d3u); SPILL(); f_97dc20(); if (g_unwind) return; RELOAD();
/* 9782d3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9782d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9782d6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9782d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9782da: call 0x92d960 */
  esp -= 4; W32(esp, 0x9782dfu); SPILL(); f_92d960(); if (g_unwind) return; RELOAD();
/* 9782df: jmp 0x97831f */
  goto L_97831f;
L_9782e1: /* 9782e1: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9782e4: jne 0x9782f0 */
  if (!zf) goto L_9782f0;
L_9782e6: /* 9782e6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9782e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9782e9: call 0x944de0 */
  esp -= 4; W32(esp, 0x9782eeu); SPILL(); f_944de0(); if (g_unwind) return; RELOAD();
/* 9782ee: jmp 0x97831f */
  goto L_97831f;
L_9782f0: /* 9782f0: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9782f3: jne 0x9783bb */
  if (!zf) goto L_9783bb;
L_9782f9: /* 9782f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9782fa: call 0x97dcb0 */
  esp -= 4; W32(esp, 0x9782ffu); SPILL(); f_97dcb0(); if (g_unwind) return; RELOAD();
/* 9782ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 978301: jle 0x9783a0 */
  if ((zf || sf != of)) goto L_9783a0;
L_978307: /* 978307: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 978309: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97830a: call 0x97dcb0 */
  esp -= 4; W32(esp, 0x97830fu); SPILL(); f_97dcb0(); if (g_unwind) return; RELOAD();
/* 97830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978311: call 0x97dcc0 */
  esp -= 4; W32(esp, 0x978316u); SPILL(); f_97dcc0(); if (g_unwind) return; RELOAD();
/* 978316: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 978318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978319: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97831a: call 0x9454e0 */
  esp -= 4; W32(esp, 0x97831fu); SPILL(); f_9454e0(); if (g_unwind) return; RELOAD();
L_97831f: /* 97831f: mov esi, eax */
  esi = eax;
/* 978321: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978323: je 0x9783a0 */
  if (zf) goto L_9783a0;
L_978325: /* 978325: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 978328: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978329: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97832a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97832b: call 0x974f00 */
  esp -= 4; W32(esp, 0x978330u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 978330: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 978333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978334: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978335: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978336: call 0x974f00 */
  esp -= 4; W32(esp, 0x97833bu); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 97833b: jmp 0x978344 */
  goto L_978344;
L_97833d: /* 97833d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97833e: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x978344u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_978344: /* 978344: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978345: call 0x97dcd0 */
  esp -= 4; W32(esp, 0x97834au); SPILL(); f_97dcd0(); if (g_unwind) return; RELOAD();
/* 97834a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97834e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97834f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978351: call 0x926d90 */
  esp -= 4; W32(esp, 0x978356u); SPILL(); f_926d90(); if (g_unwind) return; RELOAD();
/* 978356: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 97835a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97835b: call 0x97d360 */
  esp -= 4; W32(esp, 0x978360u); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 978360: mov ebp, eax */
  ebp = eax;
/* 978362: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978364: jne 0x978140 */
  if (!zf) goto L_978140;
L_97836a: /* 97836a: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 97836e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 978372: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_978376: /* 978376: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978378: je 0x9783d6 */
  if (zf) goto L_9783d6;
L_97837a: /* 97837a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97837d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97837f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978380: call 0x974f00 */
  esp -= 4; W32(esp, 0x978385u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 978385: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 978388: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978389: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97838a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97838b: call 0x974f00 */
  esp -= 4; W32(esp, 0x978390u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 978390: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 978394: mov eax, edi */
  eax = edi;
/* 978396: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 978397: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 978398: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 978399: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97839a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97839d: ret 0xc */
  esp += 16; SPILL(); return;
L_9783a0: /* 9783a0: push 0xb02f00 */
  { uint32_t v = 0xb02f00u; esp -= 4; W32(esp, v); }
/* 9783a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9783a7: call 0x971e20 */
  esp -= 4; W32(esp, 0x9783acu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9783ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9783af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9783b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9783b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9783b2: xor eax, eax */
  eax = 0;
/* 9783b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9783b5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9783b8: ret 0xc */
  esp += 16; SPILL(); return;
L_9783bb: /* 9783bb: push 0xb02ed4 */
  { uint32_t v = 0xb02ed4u; esp -= 4; W32(esp, v); }
/* 9783c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9783c2: call 0x971e20 */
  esp -= 4; W32(esp, 0x9783c7u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9783c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9783ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9783cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9783cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9783cd: xor eax, eax */
  eax = 0;
/* 9783cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9783d0: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9783d3: ret 0xc */
  esp += 16; SPILL(); return;
L_9783d6: /* 9783d6: push 0xb02ea0 */
  { uint32_t v = 0xb02ea0u; esp -= 4; W32(esp, v); }
/* 9783db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9783dd: call 0x971e20 */
  esp -= 4; W32(esp, 0x9783e2u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9783e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9783e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9783e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9783e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9783e8: xor eax, eax */
  eax = 0;
/* 9783ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9783eb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9783ee: ret 0xc */
  esp += 16; SPILL(); return;
L_9783f1: /* 9783f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9783f2: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9783f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9783f8: mov eax, edi */
  eax = edi;
/* 9783fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9783fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9783fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9783fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9783fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 978401: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_978410(void) {
  LOAD_REGS();
L_978410: /* 978410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978411: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978412: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 978416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978417: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x97841cu); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 97841c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97841e: jg 0x978493 */
  if ((!zf && sf == of)) goto L_978493;
L_978420: /* 978420: cmp byte ptr [esi], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 978423: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 978427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978428: jne 0x978465 */
  if (!zf) goto L_978465;
L_97842a: /* 97842a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97842b: call 0x926e80 */
  esp -= 4; W32(esp, 0x978430u); SPILL(); f_926e80(); if (g_unwind) return; RELOAD();
/* 978430: xor edi, edi */
  edi = 0;
/* 978432: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 978434: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 978438: jle 0x978465 */
  if ((zf || sf != of)) goto L_978465;
L_97843a: /* 97843a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97843b: nop  */
/* 97843c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_978440: /* 978440: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978442: call 0x926ea0 */
  esp -= 4; W32(esp, 0x978447u); SPILL(); f_926ea0(); if (g_unwind) return; RELOAD();
/* 978447: mov ebx, eax */
  ebx = eax;
/* 978449: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97844b: je 0x97845b */
  if (zf) goto L_97845b;
L_97844d: /* 97844d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97844e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97844f: call 0x926e50 */
  esp -= 4; W32(esp, 0x978454u); SPILL(); f_926e50(); if (g_unwind) return; RELOAD();
/* 978454: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978455: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978456: call 0x978410 */
  esp -= 4; W32(esp, 0x97845bu); SPILL(); f_978410(); if (g_unwind) return; RELOAD();
L_97845b: /* 97845b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 97845f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 978460: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 978462: jl 0x978440 */
  if ((sf != of)) goto L_978440;
L_978464: /* 978464: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_978465: /* 978465: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 978468: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 978469: je 0x978493 */
  if (zf) goto L_978493;
L_97846b: /* 97846b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 97846e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97846f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978470: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978475u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978475: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978477: je 0x978493 */
  if (zf) goto L_978493;
L_978479: /* 978479: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 97847c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97847d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97847e: call 0x975020 */
  esp -= 4; W32(esp, 0x978483u); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 978483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 978486: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978487: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978488: call 0x975020 */
  esp -= 4; W32(esp, 0x97848du); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 97848d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97848e: call 0x92a810 */
  esp -= 4; W32(esp, 0x978493u); SPILL(); f_92a810(); if (g_unwind) return; RELOAD();
L_978493: /* 978493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 978494: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 978495: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9784a0(void) {
  LOAD_REGS();
L_9784a0: /* 9784a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9784a4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9784a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9784b0(void) {
  LOAD_REGS();
L_9784b0: /* 9784b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9784b1: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 9784b3: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9784b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9784b9: mov esi, eax */
  esi = eax;
/* 9784bb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9784bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9784c0: call 0x977f80 */
  esp -= 4; W32(esp, 0x9784c5u); SPILL(); f_977f80(); if (g_unwind) return; RELOAD();
/* 9784c5: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9784c7: xor eax, eax */
  eax = 0;
/* 9784c9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9784cc: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9784cf: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 9784d2: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 9784d5: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 9784d8: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 9784db: mov dword ptr [esi + 0xc], 0x978c00 */
  W32((uint32_t)(esi + 0xcu), 0x978c00u);
/* 9784e2: mov dword ptr [esi + 0x18], 0x978f20 */
  W32((uint32_t)(esi + 0x18u), 0x978f20u);
/* 9784e9: mov eax, esi */
  eax = esi;
/* 9784eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9784ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9784f0(void) {
  LOAD_REGS();
L_9784f0: /* 9784f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9784f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9784f5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9784f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9784f8: call 0x977fe0 */
  esp -= 4; W32(esp, 0x9784fdu); SPILL(); f_977fe0(); if (g_unwind) return; RELOAD();
/* 9784fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9784fe: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x978504u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 978504: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 978505: ret 4 */
  esp += 8; SPILL(); return;
}

void f_978510(void) {
  LOAD_REGS();
L_978510: /* 978510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978511: mov ebp, esp */
  ebp = esp;
/* 978513: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 978516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978517: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978518: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978519: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 97851b: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x978521u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 978521: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 978524: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978525: mov esi, eax */
  esi = eax;
/* 978527: call 0x97c1e0 */
  esp -= 4; W32(esp, 0x97852cu); SPILL(); f_97c1e0(); if (g_unwind) return; RELOAD();
/* 97852c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 97852f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 978532: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 978535: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 978538: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 97853a: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 97853d: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97853f: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 978542: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 978545: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 978548: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 97854b: call 0x974dc0 */
  esp -= 4; W32(esp, 0x978550u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 978550: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 978552: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 978555: call 0x974dc0 */
  esp -= 4; W32(esp, 0x97855au); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 97855a: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97855c: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 97855f: call 0x974dc0 */
  esp -= 4; W32(esp, 0x978564u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 978564: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 978567: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 97856a: mov ecx, dword ptr [0xb021a4] */
  ecx = R32((uint32_t)(0xb021a4u));
/* 978570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978571: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978572: call 0x974ee0 */
  esp -= 4; W32(esp, 0x978577u); SPILL(); f_974ee0(); if (g_unwind) return; RELOAD();
/* 978577: mov eax, dword ptr [0xb021a4] */
  eax = R32((uint32_t)(0xb021a4u));
/* 97857c: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 97857f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978581: call 0x974ee0 */
  esp -= 4; W32(esp, 0x978586u); SPILL(); f_974ee0(); if (g_unwind) return; RELOAD();
/* 978586: mov edx, dword ptr [0xb021a4] */
  edx = R32((uint32_t)(0xb021a4u));
/* 97858c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 97858f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978591: call 0x974ee0 */
  esp -= 4; W32(esp, 0x978596u); SPILL(); f_974ee0(); if (g_unwind) return; RELOAD();
/* 978596: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 978599: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97859a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97859b: call 0x97c270 */
  esp -= 4; W32(esp, 0x9785a0u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 9785a0: lea edx, [ebp + 0x14] */
  edx = (uint32_t)(ebp + 0x14u);
/* 9785a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9785a4: call 0x97c290 */
  esp -= 4; W32(esp, 0x9785a9u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 9785a9: mov edi, eax */
  edi = eax;
/* 9785ab: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9785ad: je 0x978602 */
  if (zf) goto L_978602;
L_9785af: /* 9785af: nop  */
L_9785b0: /* 9785b0: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9785b3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9785b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9785b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9785b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9785b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9785ba: call 0x978030 */
  esp -= 4; W32(esp, 0x9785bfu); SPILL(); f_978030(); if (g_unwind) return; RELOAD();
/* 9785bf: mov ebx, eax */
  ebx = eax;
/* 9785c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9785c2: call 0x92a7e0 */
  esp -= 4; W32(esp, 0x9785c7u); SPILL(); f_92a7e0(); if (g_unwind) return; RELOAD();
/* 9785c7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9785ca: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 9785cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9785cf: je 0x9785d9 */
  if (zf) goto L_9785d9;
L_9785d1: /* 9785d1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 9785d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9785d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9785d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9785d7: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9785d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9785d9: /* 9785d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9785da: call 0x97d2f0 */
  esp -= 4; W32(esp, 0x9785dfu); SPILL(); f_97d2f0(); if (g_unwind) return; RELOAD();
/* 9785df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9785e0: call 0x9788c0 */
  esp -= 4; W32(esp, 0x9785e5u); SPILL(); f_9788c0(); if (g_unwind) return; RELOAD();
/* 9785e5: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 9785e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9785e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9785ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9785eb: call 0x974f00 */
  esp -= 4; W32(esp, 0x9785f0u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 9785f0: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 9785f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9785f4: call 0x97c290 */
  esp -= 4; W32(esp, 0x9785f9u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 9785f9: mov edi, eax */
  edi = eax;
/* 9785fb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9785fd: jne 0x9785b0 */
  if (!zf) goto L_9785b0;
L_9785ff: /* 9785ff: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_978602: /* 978602: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978603: call 0x97c260 */
  esp -= 4; W32(esp, 0x978608u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 978608: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 97860b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 97860e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 978611: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 978614: call 0x99cc00 */
  esp -= 4; W32(esp, 0x978619u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 978619: mov edi, esp */
  edi = esp;
/* 97861b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97861c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97861d: call 0x97c510 */
  esp -= 4; W32(esp, 0x978622u); SPILL(); f_97c510(); if (g_unwind) return; RELOAD();
/* 978622: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 978625: xor ebx, ebx */
  ebx = 0;
/* 978627: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 978629: jle 0x9787a6 */
  if ((zf || sf != of)) goto L_9787a6;
L_97862f: /* 97862f: nop  */
L_978630: /* 978630: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* 978633: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978634: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 97863b: call 0x97a4e0 */
  esp -= 4; W32(esp, 0x978640u); SPILL(); f_97a4e0(); if (g_unwind) return; RELOAD();
/* 978640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978641: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 978644: call 0x979f10 */
  esp -= 4; W32(esp, 0x978649u); SPILL(); f_979f10(); if (g_unwind) return; RELOAD();
/* 978649: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 97864c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97864d: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 978650: call 0x979ef0 */
  esp -= 4; W32(esp, 0x978655u); SPILL(); f_979ef0(); if (g_unwind) return; RELOAD();
/* 978655: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978658: je 0x978673 */
  if (zf) goto L_978673;
L_97865a: /* 97865a: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 97865d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97865f: je 0x978673 */
  if (zf) goto L_978673;
L_978661: /* 978661: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 978664: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978665: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978666: call 0x97d2f0 */
  esp -= 4; W32(esp, 0x97866bu); SPILL(); f_97d2f0(); if (g_unwind) return; RELOAD();
/* 97866b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97866c: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978671u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978671: jmp 0x97867e */
  goto L_97867e;
L_978673: /* 978673: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 978676: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 978678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978679: call 0x9784a0 */
  esp -= 4; W32(esp, 0x97867eu); SPILL(); f_9784a0(); if (g_unwind) return; RELOAD();
L_97867e: /* 97867e: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* 978681: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978682: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 978685: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x97868au); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 97868a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97868b: call 0x9788c0 */
  esp -= 4; W32(esp, 0x978690u); SPILL(); f_9788c0(); if (g_unwind) return; RELOAD();
/* 978690: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 978693: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 978696: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 978699: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97869b: je 0x9786b2 */
  if (zf) goto L_9786b2;
L_97869d: /* 97869d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9786a0: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 9786a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9786a4: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9786a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9786a8: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 9786ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9786ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9786ad: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9786afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9786af: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_9786b2: /* 9786b2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9786b5: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 9786b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9786b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9786ba: call 0x92b020 */
  esp -= 4; W32(esp, 0x9786bfu); SPILL(); f_92b020(); if (g_unwind) return; RELOAD();
/* 9786bf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9786c2: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 9786c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9786c7: je 0x9786d7 */
  if (zf) goto L_9786d7;
L_9786c9: /* 9786c9: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 9786cc: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* 9786cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9786d0: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9786d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9786d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9786d5: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9786d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9786d7: /* 9786d7: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9786da: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9786dd: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9786e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9786e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9786e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9786e3: call 0x974f00 */
  esp -= 4; W32(esp, 0x9786e8u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 9786e8: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9786eb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9786ec: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9786ee: jl 0x978630 */
  if ((sf != of)) goto L_978630;
L_9786f4: /* 9786f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9786f6: jle 0x9787a6 */
  if ((zf || sf != of)) goto L_9787a6;
L_9786fc: /* 9786fc: mov ecx, 1 */
  ecx = 0x1u;
/* 978701: mov ebx, edi */
  ebx = edi;
/* 978703: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 978706: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 978709: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_978710: /* 978710: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 978712: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 978715: jge 0x978791 */
  if ((sf == of)) goto L_978791;
L_978717: /* 978717: mov eax, dword ptr [edi + ecx*4] */
  eax = R32((uint32_t)(edi + ecx*4));
/* 97871a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 97871c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97871d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97871e: call 0x97a5f0 */
  esp -= 4; W32(esp, 0x978723u); SPILL(); f_97a5f0(); if (g_unwind) return; RELOAD();
/* 978723: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978725: jne 0x97877d */
  if (!zf) goto L_97877d;
L_978727: /* 978727: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 97872a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 97872c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97872d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97872e: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x978733u); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 978733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978734: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978739u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978739: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 97873c: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 97873f: mov ebx, eax */
  ebx = eax;
/* 978741: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* 978744: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978745: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978746: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x97874bu); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 97874b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97874c: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978751u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978751: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978753: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 978756: je 0x97877d */
  if (zf) goto L_97877d;
L_978758: /* 978758: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97875a: je 0x97877d */
  if (zf) goto L_97877d;
L_97875c: /* 97875c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97875d: call 0x9285f0 */
  esp -= 4; W32(esp, 0x978762u); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 978762: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978764: je 0x97877d */
  if (zf) goto L_97877d;
L_978766: /* 978766: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 978769: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97876a: call 0x9285f0 */
  esp -= 4; W32(esp, 0x97876fu); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 97876f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978771: je 0x97877d */
  if (zf) goto L_97877d;
L_978773: /* 978773: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 978776: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978777: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978778: call 0x92b650 */
  esp -= 4; W32(esp, 0x97877du); SPILL(); f_92b650(); if (g_unwind) return; RELOAD();
L_97877d: /* 97877d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 978780: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 978783: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 978786: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 978787: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 978789: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 97878c: jl 0x978717 */
  if ((sf != of)) goto L_978717;
L_97878e: /* 97878e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
L_978791: /* 978791: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 978792: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 978795: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 978798: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97879a: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 97879d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 9787a0: jl 0x978710 */
  if ((sf != of)) goto L_978710;
L_9787a6: /* 9787a6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9787a9: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 9787ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9787ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9787ae: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x9787b3u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 9787b3: lea edx, [ebp + 0x1c] */
  edx = (uint32_t)(ebp + 0x1cu);
/* 9787b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9787b7: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x9787bcu); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 9787bc: mov edi, eax */
  edi = eax;
/* 9787be: xor eax, eax */
  eax = 0;
/* 9787c0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9787c2: je 0x9788a6 */
  if (zf) goto L_9788a6;
L_9787c8: /* 9787c8: jmp 0x9787d0 */
  goto L_9787d0;
L_9787ca: /* 9787ca: xor eax, eax */
  eax = 0;
/* 9787cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9787d0: /* 9787d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9787d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9787d2: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 9787d5: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 9787d8: call 0x97ad60 */
  esp -= 4; W32(esp, 0x9787ddu); SPILL(); f_97ad60(); if (g_unwind) return; RELOAD();
/* 9787dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9787df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9787e0: mov ebx, eax */
  ebx = eax;
/* 9787e2: call 0x97ad60 */
  esp -= 4; W32(esp, 0x9787e7u); SPILL(); f_97ad60(); if (g_unwind) return; RELOAD();
/* 9787e7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9787e9: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 9787ec: je 0x978804 */
  if (zf) goto L_978804;
L_9787ee: /* 9787ee: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9787f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9787f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9787f3: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x9787f8u); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 9787f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9787f9: call 0x974fe0 */
  esp -= 4; W32(esp, 0x9787feu); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 9787fe: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 978801: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
L_978804: /* 978804: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978806: je 0x97881c */
  if (zf) goto L_97881c;
L_978808: /* 978808: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 97880b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97880d: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x978812u); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 978812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978813: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978818u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978818: mov ebx, eax */
  ebx = eax;
/* 97881a: jmp 0x97881f */
  goto L_97881f;
L_97881c: /* 97881c: mov ebx, dword ptr [ebp - 0xc] */
  ebx = R32((uint32_t)(ebp + 0xfffffff4u));
L_97881f: /* 97881f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 978822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978824: je 0x978830 */
  if (zf) goto L_978830;
L_978826: /* 978826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978827: call 0x925ce0 */
  esp -= 4; W32(esp, 0x97882cu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 97882c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97882e: jne 0x97883e */
  if (!zf) goto L_97883e;
L_978830: /* 978830: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978832: je 0x978893 */
  if (zf) goto L_978893;
L_978834: /* 978834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978835: call 0x925ce0 */
  esp -= 4; W32(esp, 0x97883au); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 97883a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97883c: je 0x978893 */
  if (zf) goto L_978893;
L_97883e: /* 97883e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 978841: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 978844: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978846: je 0x97885f */
  if (zf) goto L_97885f;
L_978848: /* 978848: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97884b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 97884e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97884f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 978852: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978853: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978854: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978856: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x978858u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 978858: mov ebx, eax */
  ebx = eax;
/* 97885a: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 97885d: jmp 0x978862 */
  goto L_978862;
L_97885f: /* 97885f: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
L_978862: /* 978862: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978864: je 0x97886c */
  if (zf) goto L_97886c;
L_978866: /* 978866: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978867: call 0x90bc20 */
  esp -= 4; W32(esp, 0x97886cu); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_97886c: /* 97886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 97886f: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 978872: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978874: je 0x97887c */
  if (zf) goto L_97887c;
L_978876: /* 978876: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978877: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978879: call dword ptr [ecx + 0x1c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x1cu)); esp -= 4; W32(esp, 0x97887cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97887c: /* 97887c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97887d: call 0x97ad30 */
  esp -= 4; W32(esp, 0x978882u); SPILL(); f_97ad30(); if (g_unwind) return; RELOAD();
/* 978882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978883: call 0x9788c0 */
  esp -= 4; W32(esp, 0x978888u); SPILL(); f_9788c0(); if (g_unwind) return; RELOAD();
/* 978888: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 97888b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97888c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97888d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97888e: call 0x974f00 */
  esp -= 4; W32(esp, 0x978893u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
L_978893: /* 978893: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 978896: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978897: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97889cu); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97889c: mov edi, eax */
  edi = eax;
/* 97889e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9788a0: jne 0x9787ca */
  if (!zf) goto L_9787ca;
L_9788a6: /* 9788a6: mov eax, esi */
  eax = esi;
/* 9788a8: lea esp, [ebp - 0x18] */
  esp = (uint32_t)(ebp + 0xffffffe8u);
/* 9788ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9788ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9788ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9788ae: mov esp, ebp */
  esp = ebp;
/* 9788b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9788b1: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_9788c0(void) {
  LOAD_REGS();
L_9788c0: /* 9788c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9788c1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 9788c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9788c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9788c7: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9788ca: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9788cc: mov edi, ebx */
  edi = ebx;
/* 9788ce: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9788d0: not ecx */
  ecx = ~ecx;
/* 9788d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9788d3: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9788d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9788d9: mov esi, eax */
  esi = eax;
/* 9788db: mov ecx, ebx */
  ecx = ebx;
/* 9788dd: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9788df: nop  */
L_9788e0: /* 9788e0: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9788e2: mov byte ptr [esi + ecx], dl */
  W8((uint32_t)(esi + ecx), (edx & 0xffu));
/* 9788e5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9788e6: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9788e8: jne 0x9788e0 */
  if (!zf) goto L_9788e0;
L_9788ea: /* 9788ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9788eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9788ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9788ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9788f0(void) {
  LOAD_REGS();
L_9788f0: /* 9788f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9788f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9788f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9788f5: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9788f9: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 9788fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9788fe: je 0x978a21 */
  if (zf) goto L_978a21;
L_978904: /* 978904: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 978907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978908: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97890c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97890d: call 0x9750c0 */
  esp -= 4; W32(esp, 0x978912u); SPILL(); f_9750c0(); if (g_unwind) return; RELOAD();
/* 978912: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 978916: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978917: call 0x9750e0 */
  esp -= 4; W32(esp, 0x97891cu); SPILL(); f_9750e0(); if (g_unwind) return; RELOAD();
/* 97891c: mov esi, eax */
  esi = eax;
/* 97891e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978920: je 0x97893e */
  if (zf) goto L_97893e;
L_978922: /* 978922: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978923: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x978928u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 978928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978929: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x97892eu); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 97892e: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 978932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978933: call 0x9750e0 */
  esp -= 4; W32(esp, 0x978938u); SPILL(); f_9750e0(); if (g_unwind) return; RELOAD();
/* 978938: mov esi, eax */
  esi = eax;
/* 97893a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97893c: jne 0x978922 */
  if (!zf) goto L_978922;
L_97893e: /* 97893e: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 978941: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978943: je 0x978a21 */
  if (zf) goto L_978a21;
L_978949: /* 978949: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 97894c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97894d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 978951: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978952: call 0x9750c0 */
  esp -= 4; W32(esp, 0x978957u); SPILL(); f_9750c0(); if (g_unwind) return; RELOAD();
/* 978957: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97895b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97895c: call 0x9750e0 */
  esp -= 4; W32(esp, 0x978961u); SPILL(); f_9750e0(); if (g_unwind) return; RELOAD();
/* 978961: mov esi, eax */
  esi = eax;
/* 978963: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978965: je 0x9789d8 */
  if (zf) goto L_9789d8;
L_978967: /* 978967: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978968: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978969: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_978970: /* 978970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978971: xor ebp, ebp */
  ebp = 0;
/* 978973: call 0x9285f0 */
  esp -= 4; W32(esp, 0x978978u); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 978978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97897a: je 0x978993 */
  if (zf) goto L_978993;
L_97897c: /* 97897c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97897d: call 0x92b5f0 */
  esp -= 4; W32(esp, 0x978982u); SPILL(); f_92b5f0(); if (g_unwind) return; RELOAD();
/* 978982: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 978985: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 978988: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 97898b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97898c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97898d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97898e: call 0x925dd0 */
  esp -= 4; W32(esp, 0x978993u); SPILL(); f_925dd0(); if (g_unwind) return; RELOAD();
L_978993: /* 978993: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978994: call 0x925ce0 */
  esp -= 4; W32(esp, 0x978999u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 978999: mov ebx, eax */
  ebx = eax;
/* 97899b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97899d: je 0x9789ad */
  if (zf) goto L_9789ad;
L_97899f: /* 97899f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9789a0: call 0x90f080 */
  esp -= 4; W32(esp, 0x9789a5u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 9789a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9789a6: call 0x90ddf0 */
  esp -= 4; W32(esp, 0x9789abu); SPILL(); f_90ddf0(); if (g_unwind) return; RELOAD();
/* 9789ab: jmp 0x9789b5 */
  goto L_9789b5;
L_9789ad: /* 9789ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9789ae: call 0x928730 */
  esp -= 4; W32(esp, 0x9789b3u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9789b3: mov ebp, eax */
  ebp = eax;
L_9789b5: /* 9789b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9789b6: call 0x928510 */
  esp -= 4; W32(esp, 0x9789bbu); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 9789bb: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9789bd: je 0x9789c6 */
  if (zf) goto L_9789c6;
L_9789bf: /* 9789bf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9789c0: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x9789c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9789c6: /* 9789c6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9789ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9789cb: call 0x9750e0 */
  esp -= 4; W32(esp, 0x9789d0u); SPILL(); f_9750e0(); if (g_unwind) return; RELOAD();
/* 9789d0: mov esi, eax */
  esi = eax;
/* 9789d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9789d4: jne 0x978970 */
  if (!zf) goto L_978970;
L_9789d6: /* 9789d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9789d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_9789d8: /* 9789d8: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 9789db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9789dd: je 0x978a21 */
  if (zf) goto L_978a21;
L_9789df: /* 9789df: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 9789e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9789e3: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 9789e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9789e8: call 0x9750c0 */
  esp -= 4; W32(esp, 0x9789edu); SPILL(); f_9750c0(); if (g_unwind) return; RELOAD();
/* 9789ed: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 9789f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9789f2: call 0x9750e0 */
  esp -= 4; W32(esp, 0x9789f7u); SPILL(); f_9750e0(); if (g_unwind) return; RELOAD();
/* 9789f7: mov esi, eax */
  esi = eax;
/* 9789f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9789fb: je 0x978a21 */
  if (zf) goto L_978a21;
L_9789fd: /* 9789fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_978a00: /* 978a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978a01: call 0x92a7f0 */
  esp -= 4; W32(esp, 0x978a06u); SPILL(); f_92a7f0(); if (g_unwind) return; RELOAD();
/* 978a06: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 978a08: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 978a0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978a0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978a0c: call 0x978410 */
  esp -= 4; W32(esp, 0x978a11u); SPILL(); f_978410(); if (g_unwind) return; RELOAD();
/* 978a11: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 978a15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978a16: call 0x9750e0 */
  esp -= 4; W32(esp, 0x978a1bu); SPILL(); f_9750e0(); if (g_unwind) return; RELOAD();
/* 978a1b: mov esi, eax */
  esi = eax;
/* 978a1d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978a1f: jne 0x978a00 */
  if (!zf) goto L_978a00;
L_978a21: /* 978a21: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 978a24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978a25: call 0x974e30 */
  esp -= 4; W32(esp, 0x978a2au); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 978a2a: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 978a2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978a2e: call 0x974e30 */
  esp -= 4; W32(esp, 0x978a33u); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 978a33: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 978a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978a37: call 0x974e30 */
  esp -= 4; W32(esp, 0x978a3cu); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 978a3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978a3d: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x978a43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 978a43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 978a44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 978a45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 978a48: ret 4 */
  esp += 8; SPILL(); return;
}

void f_978a50(void) {
  LOAD_REGS();
L_978a50: /* 978a50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978a54: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 978a58: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 978a5c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 978a5f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 978a62: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_978a70(void) {
  LOAD_REGS();
L_978a70: /* 978a70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 978a74: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 978a78: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 978a7b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978a80(void) {
  LOAD_REGS();
L_978a80: /* 978a80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978a84: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 978a88: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 978a8c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 978a8f: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 978a92: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_978aa0(void) {
  LOAD_REGS();
L_978aa0: /* 978aa0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 978aa4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 978aa8: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 978aab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978ab0(void) {
  LOAD_REGS();
L_978ab0: /* 978ab0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978ab4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 978ab8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 978abc: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 978abf: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 978ac2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_978ad0(void) {
  LOAD_REGS();
L_978ad0: /* 978ad0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978ad4: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 978ad7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 978adb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978adc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978add: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978ae2u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978ae2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978af0(void) {
  LOAD_REGS();
L_978af0: /* 978af0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978af4: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 978af7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 978afb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978afc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978afd: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978b02u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978b02: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978b10(void) {
  LOAD_REGS();
L_978b10: /* 978b10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978b14: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 978b17: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 978b1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978b1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978b1d: call 0x974fe0 */
  esp -= 4; W32(esp, 0x978b22u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 978b22: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978b30(void) {
  LOAD_REGS();
L_978b30: /* 978b30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978b34: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 978b37: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 978b3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978b3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978b3d: call 0x9750c0 */
  esp -= 4; W32(esp, 0x978b42u); SPILL(); f_9750c0(); if (g_unwind) return; RELOAD();
/* 978b42: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978b50(void) {
  LOAD_REGS();
L_978b50: /* 978b50: jmp 0x9750e0 */
  SPILL(); f_9750e0(); return;
}

void f_978b60(void) {
  LOAD_REGS();
L_978b60: /* 978b60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978b64: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 978b67: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 978b6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978b6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978b6d: call 0x9750c0 */
  esp -= 4; W32(esp, 0x978b72u); SPILL(); f_9750c0(); if (g_unwind) return; RELOAD();
/* 978b72: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978b80(void) {
  LOAD_REGS();
L_978b80: /* 978b80: jmp 0x9750e0 */
  SPILL(); f_9750e0(); return;
}

void f_978b90(void) {
  LOAD_REGS();
L_978b90: /* 978b90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978b94: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 978b97: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 978b9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978b9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978b9d: call 0x9750c0 */
  esp -= 4; W32(esp, 0x978ba2u); SPILL(); f_9750c0(); if (g_unwind) return; RELOAD();
/* 978ba2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978bb0(void) {
  LOAD_REGS();
L_978bb0: /* 978bb0: jmp 0x9750e0 */
  SPILL(); f_9750e0(); return;
}

void f_978bc0(void) {
  LOAD_REGS();
L_978bc0: /* 978bc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_978bd0(void) {
  LOAD_REGS();
L_978bd0: /* 978bd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_978be0(void) {
  LOAD_REGS();
L_978be0: /* 978be0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 978be4: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 978be7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_978bf0(void) {
  LOAD_REGS();
L_978bf0: /* 978bf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 978bf4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 978bf8: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 978bfb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_978c00(void) {
  LOAD_REGS();
L_978c00: /* 978c00: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 978c03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978c04: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978c05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978c06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978c07: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 978c0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978c0c: call 0x97a4e0 */
  esp -= 4; W32(esp, 0x978c11u); SPILL(); f_97a4e0(); if (g_unwind) return; RELOAD();
/* 978c11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978c12: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 978c16: call 0x979ef0 */
  esp -= 4; W32(esp, 0x978c1bu); SPILL(); f_979ef0(); if (g_unwind) return; RELOAD();
/* 978c1b: mov esi, eax */
  esi = eax;
/* 978c1d: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 978c21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978c22: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 978c26: call 0x928490 */
  esp -= 4; W32(esp, 0x978c2bu); SPILL(); f_928490(); if (g_unwind) return; RELOAD();
/* 978c2b: mov ebp, eax */
  ebp = eax;
/* 978c2d: xor ebx, ebx */
  ebx = 0;
/* 978c2f: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978c32: mov dword ptr [esp + 0x74], ebp */
  W32((uint32_t)(esp + 0x74u), ebp);
/* 978c36: jne 0x978c4d */
  if (!zf) goto L_978c4d;
L_978c38: /* 978c38: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 978c3a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 978c3c: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x978c42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 978c42: mov esi, eax */
  esi = eax;
/* 978c44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978c45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978c46: call 0x928740 */
  esp -= 4; W32(esp, 0x978c4bu); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 978c4b: jmp 0x978c61 */
  goto L_978c61;
L_978c4d: /* 978c4d: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 978c51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978c52: call 0x90dd30 */
  esp -= 4; W32(esp, 0x978c57u); SPILL(); f_90dd30(); if (g_unwind) return; RELOAD();
/* 978c57: mov ebx, eax */
  ebx = eax;
/* 978c59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978c5a: call 0x90e0e0 */
  esp -= 4; W32(esp, 0x978c5fu); SPILL(); f_90e0e0(); if (g_unwind) return; RELOAD();
/* 978c5f: mov esi, eax */
  esi = eax;
L_978c61: /* 978c61: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 978c65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978c66: call 0x97a540 */
  esp -= 4; W32(esp, 0x978c6bu); SPILL(); f_97a540(); if (g_unwind) return; RELOAD();
/* 978c6b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978c6d: je 0x978cc0 */
  if (zf) goto L_978cc0;
L_978c6f: /* 978c6f: mov edx, esi */
  edx = esi;
/* 978c71: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 978c74: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 978c77: mov dword ptr [esp + 0x70], 4 */
  W32((uint32_t)(esp + 0x70u), 0x4u);
/* 978c7f: nop  */
L_978c80: /* 978c80: mov eax, ebp */
  eax = ebp;
/* 978c82: mov edi, 4 */
  edi = 0x4u;
L_978c87: /* 978c87: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 978c8a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 978c8d: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 978c90: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 978c93: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 978c94: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 978c97: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 978c9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 978c9c: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 978c9f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 978ca2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 978ca4: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 978ca7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 978ca9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 978cab: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 978cae: jne 0x978c87 */
  if (!zf) goto L_978c87;
L_978cb0: /* 978cb0: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 978cb4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 978cb7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 978cb8: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 978cbc: jne 0x978c80 */
  if (!zf) goto L_978c80;
L_978cbe: /* 978cbe: jmp 0x978d1e */
  goto L_978d1e;
L_978cc0: /* 978cc0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 978cc2: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 978cc4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 978cc7: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 978cca: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 978ccd: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 978cd0: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 978cd3: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 978cd6: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 978cd9: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 978cdc: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 978cdf: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 978ce2: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 978ce5: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 978ce8: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 978ceb: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 978cee: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 978cf1: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 978cf4: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 978cf7: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 978cfa: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 978cfd: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 978d00: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 978d03: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 978d06: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 978d09: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 978d0c: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 978d0f: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 978d12: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 978d15: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 978d18: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 978d1b: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
L_978d1e: /* 978d1e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 978d22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978d24: je 0x978d2f */
  if (zf) goto L_978d2f;
L_978d26: /* 978d26: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978d29: jne 0x978f12 */
  if (!zf) goto L_978f12;
L_978d2f: /* 978d2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978d30: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x978d35u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 978d35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978d36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978d37: call 0x90e790 */
  esp -= 4; W32(esp, 0x978d3cu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 978d3c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 978d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978d41: call 0x979f60 */
  esp -= 4; W32(esp, 0x978d46u); SPILL(); f_979f60(); if (g_unwind) return; RELOAD();
/* 978d46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978d47: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 978d4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978d4b: call 0x90eb70 */
  esp -= 4; W32(esp, 0x978d50u); SPILL(); f_90eb70(); if (g_unwind) return; RELOAD();
/* 978d50: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 978d54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978d55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978d56: call 0x979f40 */
  esp -= 4; W32(esp, 0x978d5bu); SPILL(); f_979f40(); if (g_unwind) return; RELOAD();
/* 978d5b: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 978d5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978d60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978d61: call 0x90eea0 */
  esp -= 4; W32(esp, 0x978d66u); SPILL(); f_90eea0(); if (g_unwind) return; RELOAD();
/* 978d66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978d67: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x978d6cu); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 978d6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978d6d: call 0x90f6d0 */
  esp -= 4; W32(esp, 0x978d72u); SPILL(); f_90f6d0(); if (g_unwind) return; RELOAD();
/* 978d72: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 978d76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978d77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978d78: call 0x979f80 */
  esp -= 4; W32(esp, 0x978d7du); SPILL(); f_979f80(); if (g_unwind) return; RELOAD();
/* 978d7d: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 978d81: fld dword ptr [eax + 0x180] */
  { double v = F32((uint32_t)(eax + 0x180u)); FPUSH(v); }
/* 978d87: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 978d8b: fmul dword ptr [eax + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x17cu)));
/* 978d91: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 978d95: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 978d99: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 978d9d: fmul dword ptr [eax + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x17cu)));
/* 978da3: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 978da7: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 978dab: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 978daf: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 978db5: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 978db9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 978dbd: fcomp dword ptr [esp + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x78u)));
  FPOP();
/* 978dc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978dc3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978dc6: jp 0x978dce */
  if (pf) goto L_978dce;
L_978dc8: /* 978dc8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 978dcc: jmp 0x978dd2 */
  goto L_978dd2;
L_978dce: /* 978dce: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
L_978dd2: /* 978dd2: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 978dd6: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 978ddc: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 978de0: fcomp dword ptr [esp + 0x70] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x70u)));
  FPOP();
/* 978de4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978de6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978de9: jp 0x978df5 */
  if (pf) goto L_978df5;
L_978deb: /* 978deb: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 978def: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 978df3: jmp 0x978e0c */
  goto L_978e0c;
L_978df5: /* 978df5: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 978df9: fcomp dword ptr [esp + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x78u)));
  FPOP();
/* 978dfd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978dff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978e02: jnp 0x978e0c */
  if (!pf) goto L_978e0c;
L_978e04: /* 978e04: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 978e08: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
L_978e0c: /* 978e0c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 978e10: fcomp dword ptr [esp + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x78u)));
  FPOP();
/* 978e14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978e16: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978e19: jp 0x978e21 */
  if (pf) goto L_978e21;
L_978e1b: /* 978e1b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 978e1f: jmp 0x978e25 */
  goto L_978e25;
L_978e21: /* 978e21: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
L_978e25: /* 978e25: fcomp dword ptr [esp + 0x70] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x70u)));
  FPOP();
/* 978e29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978e2b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978e2e: jp 0x978e3a */
  if (pf) goto L_978e3a;
L_978e30: /* 978e30: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 978e34: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 978e38: jmp 0x978e51 */
  goto L_978e51;
L_978e3a: /* 978e3a: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 978e3e: fcomp dword ptr [esp + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x78u)));
  FPOP();
/* 978e42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978e44: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978e47: jnp 0x978e51 */
  if (!pf) goto L_978e51;
L_978e49: /* 978e49: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 978e4d: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
L_978e51: /* 978e51: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 978e55: fcomp dword ptr [esp + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x78u)));
  FPOP();
/* 978e59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978e5b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978e5e: jp 0x978e66 */
  if (pf) goto L_978e66;
L_978e60: /* 978e60: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 978e64: jmp 0x978e6a */
  goto L_978e6a;
L_978e66: /* 978e66: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
L_978e6a: /* 978e6a: fcomp dword ptr [esp + 0x70] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x70u)));
  FPOP();
/* 978e6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978e70: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978e73: jp 0x978e7d */
  if (pf) goto L_978e7d;
L_978e75: /* 978e75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 978e77: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 978e7b: jmp 0x978e92 */
  goto L_978e92;
L_978e7d: /* 978e7d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 978e81: fcomp dword ptr [esp + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x78u)));
  FPOP();
/* 978e85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 978e87: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 978e8a: jnp 0x978e92 */
  if (!pf) goto L_978e92;
L_978e8c: /* 978e8c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 978e8e: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
L_978e92: /* 978e92: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 978e96: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 978e9a: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 978e9e: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 978ea2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978ea3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978ea4: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 978ea8: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 978eac: call 0x90eb90 */
  esp -= 4; W32(esp, 0x978eb1u); SPILL(); f_90eb90(); if (g_unwind) return; RELOAD();
/* 978eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978eb2: call 0x979fe0 */
  esp -= 4; W32(esp, 0x978eb7u); SPILL(); f_979fe0(); if (g_unwind) return; RELOAD();
/* 978eb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978eb8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 978ebb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978ebc: call 0x90ea70 */
  esp -= 4; W32(esp, 0x978ec1u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 978ec1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978ec2: call 0x979ff0 */
  esp -= 4; W32(esp, 0x978ec7u); SPILL(); f_979ff0(); if (g_unwind) return; RELOAD();
/* 978ec7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978ec8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 978ecb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978ecc: call 0x90ea90 */
  esp -= 4; W32(esp, 0x978ed1u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 978ed1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978ed2: call 0x97a020 */
  esp -= 4; W32(esp, 0x978ed7u); SPILL(); f_97a020(); if (g_unwind) return; RELOAD();
/* 978ed7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978ed9: je 0x978efb */
  if (zf) goto L_978efb;
L_978edb: /* 978edb: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 978edf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978ee1: call 0x97a000 */
  esp -= 4; W32(esp, 0x978ee6u); SPILL(); f_97a000(); if (g_unwind) return; RELOAD();
/* 978ee6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 978eea: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 978eee: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 978ef2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978ef3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978ef4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978ef5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978ef6: call 0x90eab0 */
  esp -= 4; W32(esp, 0x978efbu); SPILL(); f_90eab0(); if (g_unwind) return; RELOAD();
L_978efb: /* 978efb: mov esi, dword ptr [esp + 0x74] */
  esi = R32((uint32_t)(esp + 0x74u));
/* 978eff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978f01: call 0x925a30 */
  esp -= 4; W32(esp, 0x978f06u); SPILL(); f_925a30(); if (g_unwind) return; RELOAD();
/* 978f06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 978f07: mov eax, esi */
  eax = esi;
/* 978f09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 978f0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 978f0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 978f0c: add esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 978f0f: ret 0x10 */
  esp += 20; SPILL(); return;
L_978f12: /* 978f12: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 978f16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 978f17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 978f18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 978f19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 978f1a: add esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 978f1d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_978f20(void) {
  LOAD_REGS();
L_978f20: /* 978f20: sub esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 978f26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 978f27: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 978f28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978f29: mov esi, dword ptr [esp + 0xcc] */
  esi = R32((uint32_t)(esp + 0xccu));
/* 978f30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 978f31: xor ebx, ebx */
  ebx = 0;
/* 978f33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 978f34: xor edi, edi */
  edi = 0;
/* 978f36: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 978f3a: xor ebp, ebp */
  ebp = 0;
/* 978f3c: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 978f44: call 0x97ad40 */
  esp -= 4; W32(esp, 0x978f49u); SPILL(); f_97ad40(); if (g_unwind) return; RELOAD();
/* 978f49: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 978f50: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978f52: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 978f56: je 0x978f64 */
  if (zf) goto L_978f64;
L_978f58: /* 978f58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978f59: call 0x925ce0 */
  esp -= 4; W32(esp, 0x978f5eu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 978f5e: mov edi, eax */
  edi = eax;
/* 978f60: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_978f64: /* 978f64: mov ecx, dword ptr [esp + 0xdc] */
  ecx = R32((uint32_t)(esp + 0xdcu));
/* 978f6b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 978f6d: je 0x978f7f */
  if (zf) goto L_978f7f;
L_978f6f: /* 978f6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978f70: call 0x925ce0 */
  esp -= 4; W32(esp, 0x978f75u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 978f75: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 978f79: mov ebx, eax */
  ebx = eax;
/* 978f7b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_978f7f: /* 978f7f: xor ecx, ecx */
  ecx = 0;
/* 978f81: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978f83: jne 0x978f93 */
  if (!zf) goto L_978f93;
L_978f85: /* 978f85: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978f87: jne 0x978fa1 */
  if (!zf) goto L_978fa1;
L_978f89: /* 978f89: push 0xb02fd4 */
  { uint32_t v = 0xb02fd4u; esp -= 4; W32(esp, v); }
/* 978f8e: jmp 0x979cbc */
  goto L_979cbc;
L_978f93: /* 978f93: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978f95: jne 0x978fb0 */
  if (!zf) goto L_978fb0;
L_978f97: /* 978f97: push 0xb02f9c */
  { uint32_t v = 0xb02f9cu; esp -= 4; W32(esp, v); }
/* 978f9c: jmp 0x979cbc */
  goto L_979cbc;
L_978fa1: /* 978fa1: mov edi, ebx */
  edi = ebx;
/* 978fa3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 978fa7: mov ebp, 1 */
  ebp = 0x1u;
/* 978fac: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_978fb0: /* 978fb0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978fb3: jne 0x978fcd */
  if (!zf) goto L_978fcd;
L_978fb5: /* 978fb5: mov eax, dword ptr [esp + 0xd4] */
  eax = R32((uint32_t)(esp + 0xd4u));
/* 978fbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978fbd: call 0x90f700 */
  esp -= 4; W32(esp, 0x978fc2u); SPILL(); f_90f700(); if (g_unwind) return; RELOAD();
/* 978fc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978fc3: call 0x90f790 */
  esp -= 4; W32(esp, 0x978fc8u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 978fc8: jmp 0x9790f3 */
  goto L_9790f3;
L_978fcd: /* 978fcd: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978fd0: jne 0x978fea */
  if (!zf) goto L_978fea;
L_978fd2: /* 978fd2: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 978fd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 978fda: call 0x99aa80 */
  esp -= 4; W32(esp, 0x978fdfu); SPILL(); f_99aa80(); if (g_unwind) return; RELOAD();
/* 978fdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978fe0: call 0x99ab10 */
  esp -= 4; W32(esp, 0x978fe5u); SPILL(); f_99ab10(); if (g_unwind) return; RELOAD();
/* 978fe5: jmp 0x9790f3 */
  goto L_9790f3;
L_978fea: /* 978fea: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 978fed: jne 0x979007 */
  if (!zf) goto L_979007;
L_978fef: /* 978fef: mov edx, dword ptr [esp + 0xd4] */
  edx = R32((uint32_t)(esp + 0xd4u));
/* 978ff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 978ff7: call 0x99a600 */
  esp -= 4; W32(esp, 0x978ffcu); SPILL(); f_99a600(); if (g_unwind) return; RELOAD();
/* 978ffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 978ffd: call 0x99a700 */
  esp -= 4; W32(esp, 0x979002u); SPILL(); f_99a700(); if (g_unwind) return; RELOAD();
/* 979002: jmp 0x9790f3 */
  goto L_9790f3;
L_979007: /* 979007: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97900a: jne 0x979024 */
  if (!zf) goto L_979024;
L_97900c: /* 97900c: mov eax, dword ptr [esp + 0xd4] */
  eax = R32((uint32_t)(esp + 0xd4u));
/* 979013: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979014: call 0x90d440 */
  esp -= 4; W32(esp, 0x979019u); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 979019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97901a: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x97901fu); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 97901f: jmp 0x9790f3 */
  goto L_9790f3;
L_979024: /* 979024: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 979027: jne 0x97906f */
  if (!zf) goto L_97906f;
L_979029: /* 979029: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 979030: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979031: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x979036u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 979036: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979037: call 0x90d810 */
  esp -= 4; W32(esp, 0x97903cu); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 97903c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 979040: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 979042: mov ebx, eax */
  ebx = eax;
/* 979044: je 0x9790f5 */
  if (zf) goto L_9790f5;
L_97904a: /* 97904a: xor edx, edx */
  edx = 0;
/* 97904c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97904e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 979051: xor eax, eax */
  eax = 0;
/* 979053: mov ebp, edx */
  ebp = edx;
/* 979055: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 979059: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97905b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 97905e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 979062: mov eax, edi */
  eax = edi;
/* 979064: mov edi, ecx */
  edi = ecx;
/* 979066: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 97906a: jmp 0x9790f5 */
  goto L_9790f5;
L_97906f: /* 97906f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 979072: jne 0x979089 */
  if (!zf) goto L_979089;
L_979074: /* 979074: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 97907b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97907c: call 0x90d580 */
  esp -= 4; W32(esp, 0x979081u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 979081: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979082: call 0x90d630 */
  esp -= 4; W32(esp, 0x979087u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 979087: jmp 0x9790f3 */
  goto L_9790f3;
L_979089: /* 979089: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97908c: jne 0x9790a3 */
  if (!zf) goto L_9790a3;
L_97908e: /* 97908e: mov edx, dword ptr [esp + 0xd4] */
  edx = R32((uint32_t)(esp + 0xd4u));
/* 979095: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979096: call 0x99a210 */
  esp -= 4; W32(esp, 0x97909bu); SPILL(); f_99a210(); if (g_unwind) return; RELOAD();
/* 97909b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97909c: call 0x99a2a0 */
  esp -= 4; W32(esp, 0x9790a1u); SPILL(); f_99a2a0(); if (g_unwind) return; RELOAD();
/* 9790a1: jmp 0x9790f3 */
  goto L_9790f3;
L_9790a3: /* 9790a3: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9790a6: jne 0x9790bd */
  if (!zf) goto L_9790bd;
L_9790a8: /* 9790a8: mov eax, dword ptr [esp + 0xd4] */
  eax = R32((uint32_t)(esp + 0xd4u));
/* 9790af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9790b0: call 0x912350 */
  esp -= 4; W32(esp, 0x9790b5u); SPILL(); f_912350(); if (g_unwind) return; RELOAD();
/* 9790b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9790b6: call 0x912430 */
  esp -= 4; W32(esp, 0x9790bbu); SPILL(); f_912430(); if (g_unwind) return; RELOAD();
/* 9790bb: jmp 0x9790f3 */
  goto L_9790f3;
L_9790bd: /* 9790bd: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9790c0: jne 0x9790d7 */
  if (!zf) goto L_9790d7;
L_9790c2: /* 9790c2: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 9790c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9790ca: call 0x911c00 */
  esp -= 4; W32(esp, 0x9790cfu); SPILL(); f_911c00(); if (g_unwind) return; RELOAD();
/* 9790cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9790d0: call 0x911cb0 */
  esp -= 4; W32(esp, 0x9790d5u); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 9790d5: jmp 0x9790f3 */
  goto L_9790f3;
L_9790d7: /* 9790d7: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9790da: jne 0x979cb7 */
  if (!zf) goto L_979cb7;
L_9790e0: /* 9790e0: mov edx, dword ptr [esp + 0xd4] */
  edx = R32((uint32_t)(esp + 0xd4u));
/* 9790e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9790e8: call 0x999ed0 */
  esp -= 4; W32(esp, 0x9790edu); SPILL(); f_999ed0(); if (g_unwind) return; RELOAD();
/* 9790ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9790ee: call 0x999f90 */
  esp -= 4; W32(esp, 0x9790f3u); SPILL(); f_999f90(); if (g_unwind) return; RELOAD();
L_9790f3: /* 9790f3: mov ebx, eax */
  ebx = eax;
L_9790f5: /* 9790f5: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9790f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9790fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9790fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9790fc: call 0x90c130 */
  esp -= 4; W32(esp, 0x979101u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 979101: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 979108: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979109: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97910a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97910b: call 0x97ad90 */
  esp -= 4; W32(esp, 0x979110u); SPILL(); f_97ad90(); if (g_unwind) return; RELOAD();
/* 979110: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 979114: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979115: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979117: call 0x97adc0 */
  esp -= 4; W32(esp, 0x97911cu); SPILL(); f_97adc0(); if (g_unwind) return; RELOAD();
/* 97911c: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 979120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979121: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979122: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979123: call 0x97adf0 */
  esp -= 4; W32(esp, 0x979128u); SPILL(); f_97adf0(); if (g_unwind) return; RELOAD();
/* 979128: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 97912c: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97912f: jne 0x979195 */
  if (!zf) goto L_979195;
L_979131: /* 979131: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 979135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979136: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979137: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979138: call 0x97adc0 */
  esp -= 4; W32(esp, 0x97913du); SPILL(); f_97adc0(); if (g_unwind) return; RELOAD();
/* 97913d: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 979141: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979142: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979143: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979144: call 0x97adf0 */
  esp -= 4; W32(esp, 0x979149u); SPILL(); f_97adf0(); if (g_unwind) return; RELOAD();
/* 979149: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97914d: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 979151: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 979155: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 979159: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97915b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97915f: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 979163: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 979167: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 97916b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97916d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 979171: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 979175: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 979179: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 97917d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97917f: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 979183: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 979187: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 979189: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 97918d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 979191: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_979195: /* 979195: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 97919c: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 9791a3: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 9791aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9791ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9791ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9791ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9791af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9791b0: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x9791b5u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 9791b5: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9791b9: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9791bd: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9791c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9791c2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9791c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9791c7: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9791cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9791cc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9791d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9791d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9791d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9791d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9791d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9791d6: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x9791dbu); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 9791db: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9791df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9791e1: jne 0x9793ff */
  if (!zf) goto L_9793ff;
L_9791e7: /* 9791e7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9791eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9791ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9791ed: call 0x97ad60 */
  esp -= 4; W32(esp, 0x9791f2u); SPILL(); f_97ad60(); if (g_unwind) return; RELOAD();
/* 9791f2: mov edi, eax */
  edi = eax;
/* 9791f4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9791f6: je 0x979214 */
  if (zf) goto L_979214;
L_9791f8: /* 9791f8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9791fc: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 979200: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979202: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979203: call 0x97ad90 */
  esp -= 4; W32(esp, 0x979208u); SPILL(); f_97ad90(); if (g_unwind) return; RELOAD();
/* 979208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979209: call 0x97a540 */
  esp -= 4; W32(esp, 0x97920eu); SPILL(); f_97a540(); if (g_unwind) return; RELOAD();
/* 97920e: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 979212: jmp 0x97922d */
  goto L_97922d;
L_979214: /* 979214: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 979218: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979219: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97921a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97921b: call 0x97ad90 */
  esp -= 4; W32(esp, 0x979220u); SPILL(); f_97ad90(); if (g_unwind) return; RELOAD();
/* 979220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979222: call 0x97ad60 */
  esp -= 4; W32(esp, 0x979227u); SPILL(); f_97ad60(); if (g_unwind) return; RELOAD();
/* 979227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979228: call 0x97a540 */
  esp -= 4; W32(esp, 0x97922du); SPILL(); f_97a540(); if (g_unwind) return; RELOAD();
L_97922d: /* 97922d: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 979231: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979232: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979234: mov edi, eax */
  edi = eax;
/* 979236: call 0x97adc0 */
  esp -= 4; W32(esp, 0x97923bu); SPILL(); f_97adc0(); if (g_unwind) return; RELOAD();
/* 97923b: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 97923f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979242: call 0x97adf0 */
  esp -= 4; W32(esp, 0x979247u); SPILL(); f_97adf0(); if (g_unwind) return; RELOAD();
/* 979247: mov eax, dword ptr [esp + 0xe0] */
  eax = R32((uint32_t)(esp + 0xe0u));
/* 97924e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 979250: je 0x9792ae */
  if (zf) goto L_9792ae;
L_979252: /* 979252: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 979259: lea ebp, [eax + 0x20] */
  ebp = (uint32_t)(eax + 0x20u);
/* 97925c: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 97925f: mov dword ptr [esp + 0x14], 4 */
  W32((uint32_t)(esp + 0x14u), 0x4u);
L_979267: /* 979267: mov eax, ebp */
  eax = ebp;
/* 979269: mov edi, 4 */
  edi = 0x4u;
/* 97926e: mov edi, edi */
  edi = edi;
L_979270: /* 979270: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 979273: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 979276: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 979279: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97927c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 97927d: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 979280: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 979283: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979285: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 979288: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 97928b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97928d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 979290: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 979292: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979294: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 979297: jne 0x979270 */
  if (!zf) goto L_979270;
L_979299: /* 979299: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97929d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9792a0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9792a1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9792a5: jne 0x979267 */
  if (!zf) goto L_979267;
L_9792a7: /* 9792a7: lea edi, [esp + 0x8c] */
  edi = (uint32_t)(esp + 0x8cu);
L_9792ae: /* 9792ae: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9792b2: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9792b4: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9792b8: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 9792bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9792bd: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9792c1: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 9792c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9792c6: fadd dword ptr [edi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x30u)));
/* 9792c9: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9792cd: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 9792d1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9792d5: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 9792d8: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9792dc: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 9792df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9792e1: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9792e5: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9792e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9792ea: fadd dword ptr [edi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x34u)));
/* 9792ed: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 9792f1: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 9792f5: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9792f9: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 9792fc: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 979300: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 979303: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979305: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 979309: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 97930c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97930e: fadd dword ptr [edi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x38u)));
/* 979311: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 979315: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 979319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97931a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97931b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97931c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97931e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97931f: call 0x90c150 */
  esp -= 4; W32(esp, 0x979324u); SPILL(); f_90c150(); if (g_unwind) return; RELOAD();
/* 979324: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 979328: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 97932a: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 97932e: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 979331: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979333: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 979337: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 97933a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97933c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 979340: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 979344: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 979347: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 97934b: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 97934e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979350: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 979354: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 979357: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979359: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 97935d: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 979361: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 979364: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 979368: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 97936b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97936d: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 979371: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 979374: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979376: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 97937a: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 97937e: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 979381: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 979385: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 979388: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97938a: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 97938e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 979390: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 979392: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 979396: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 97939a: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 97939d: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 9793a1: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 9793a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9793a6: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9793aa: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9793ad: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9793b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9793b3: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9793b7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9793bb: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 9793bf: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 9793c2: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 9793c6: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 9793c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9793cb: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9793cf: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9793d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9793d4: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9793d8: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9793dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9793dd: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9793e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9793e2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9793e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9793e7: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9793eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9793ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9793ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9793ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9793f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9793f1: call 0x90c2a0 */
  esp -= 4; W32(esp, 0x9793f6u); SPILL(); f_90c2a0(); if (g_unwind) return; RELOAD();
/* 9793f6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9793fa: jmp 0x9794d9 */
  goto L_9794d9;
L_9793ff: /* 9793ff: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 979403: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 97940a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97940b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97940c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97940d: call 0x97ad90 */
  esp -= 4; W32(esp, 0x979412u); SPILL(); f_97ad90(); if (g_unwind) return; RELOAD();
/* 979412: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 979416: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979417: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979418: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979419: call 0x97adc0 */
  esp -= 4; W32(esp, 0x97941eu); SPILL(); f_97adc0(); if (g_unwind) return; RELOAD();
/* 97941e: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 979422: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979423: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979424: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979425: call 0x97adf0 */
  esp -= 4; W32(esp, 0x97942au); SPILL(); f_97adf0(); if (g_unwind) return; RELOAD();
/* 97942a: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97942d: jne 0x979493 */
  if (!zf) goto L_979493;
L_97942f: /* 97942f: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 979433: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979434: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979436: call 0x97adc0 */
  esp -= 4; W32(esp, 0x97943bu); SPILL(); f_97adc0(); if (g_unwind) return; RELOAD();
/* 97943b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 97943f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979442: call 0x97adf0 */
  esp -= 4; W32(esp, 0x979447u); SPILL(); f_97adf0(); if (g_unwind) return; RELOAD();
/* 979447: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97944b: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 97944f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 979453: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 979457: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 979459: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97945d: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 979461: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 979465: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 979469: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97946b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 97946f: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 979473: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 979477: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 97947b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97947d: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 979481: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 979485: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 979487: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 97948b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 97948f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_979493: /* 979493: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 97949a: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 9794a1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 9794a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9794a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9794aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9794ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9794ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9794ae: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x9794b3u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 9794b3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9794b7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9794bb: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9794bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9794c0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9794c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9794c5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9794c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9794ca: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9794ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9794cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9794d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9794d1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9794d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9794d4: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x9794d9u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
L_9794d9: /* 9794d9: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9794dc: jne 0x9794f3 */
  if (!zf) goto L_9794f3;
L_9794de: /* 9794de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9794df: call 0x90f7a0 */
  esp -= 4; W32(esp, 0x9794e4u); SPILL(); f_90f7a0(); if (g_unwind) return; RELOAD();
/* 9794e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9794e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9794e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9794e7: mov eax, ebx */
  eax = ebx;
/* 9794e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9794ea: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9794f0: ret 0x14 */
  esp += 24; SPILL(); return;
L_9794f3: /* 9794f3: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9794f6: jne 0x97950d */
  if (!zf) goto L_97950d;
L_9794f8: /* 9794f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9794f9: call 0x99ab20 */
  esp -= 4; W32(esp, 0x9794feu); SPILL(); f_99ab20(); if (g_unwind) return; RELOAD();
/* 9794fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9794ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979500: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 979501: mov eax, ebx */
  eax = ebx;
/* 979503: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 979504: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97950a: ret 0x14 */
  esp += 24; SPILL(); return;
L_97950d: /* 97950d: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 979510: jne 0x9795b7 */
  if (!zf) goto L_9795b7;
L_979516: /* 979516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 979517: call 0x99a710 */
  esp -= 4; W32(esp, 0x97951cu); SPILL(); f_99a710(); if (g_unwind) return; RELOAD();
/* 97951c: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 979520: mov edi, eax */
  edi = eax;
/* 979522: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979523: xor eax, eax */
  eax = 0;
/* 979525: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 979527: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 97952b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97952c: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 979534: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 979538: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97953du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97953d: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 979541: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979542: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 979544: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979545: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97954au); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97954a: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 97954e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97954f: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 979551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979552: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979557u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979557: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 97955b: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 97955f: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 979563: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979564: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979567: call 0x99aa50 */
  esp -= 4; W32(esp, 0x97956cu); SPILL(); f_99aa50(); if (g_unwind) return; RELOAD();
/* 97956c: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 979570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979571: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 979573: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979574: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979579u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979579: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 97957d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97957e: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 979580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979581: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979586u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979586: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 97958a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97958b: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 97958d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97958e: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979593u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979593: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 979597: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 97959b: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 97959f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9795a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9795a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9795a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9795a3: call 0x99aa20 */
  esp -= 4; W32(esp, 0x9795a8u); SPILL(); f_99aa20(); if (g_unwind) return; RELOAD();
/* 9795a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9795a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9795aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9795ab: mov eax, ebx */
  eax = ebx;
/* 9795ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9795ae: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9795b4: ret 0x14 */
  esp += 24; SPILL(); return;
L_9795b7: /* 9795b7: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9795ba: jne 0x9796c9 */
  if (!zf) goto L_9796c9;
L_9795c0: /* 9795c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9795c1: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x9795c6u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 9795c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9795c7: call 0x90d500 */
  esp -= 4; W32(esp, 0x9795ccu); SPILL(); f_90d500(); if (g_unwind) return; RELOAD();
/* 9795cc: mov edi, eax */
  edi = eax;
/* 9795ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9795cf: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x9795d4u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 9795d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9795d5: mov ebp, eax */
  ebp = eax;
/* 9795d7: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x9795dcu); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 9795dc: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9795e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9795e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9795e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9795e4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9795e8: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 9795f0: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 9795f8: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 979600: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979605u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979605: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 979609: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97960a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97960b: call 0x90c890 */
  esp -= 4; W32(esp, 0x979610u); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 979610: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 979614: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979615: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 979617: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979618: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97961du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97961d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 979621: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 979625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979626: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979627: call 0x90c890 */
  esp -= 4; W32(esp, 0x97962cu); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 97962c: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 979630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979631: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 979633: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979634: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979639u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979639: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97963d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97963e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97963f: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x979644u); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 979644: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 979648: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979649: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97964b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97964c: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979651u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979651: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 979655: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 979659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97965a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97965b: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x979660u); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 979660: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 979664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979665: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 979667: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979668: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97966du); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97966d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 979671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979672: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979673: call 0x90cb80 */
  esp -= 4; W32(esp, 0x979678u); SPILL(); f_90cb80(); if (g_unwind) return; RELOAD();
/* 979678: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97967c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97967d: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 97967f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979680: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979685u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979685: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 979689: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97968a: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97968c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97968d: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979692u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979692: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 979696: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97969a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97969b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97969c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97969d: call 0x90cc60 */
  esp -= 4; W32(esp, 0x9796a2u); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 9796a2: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9796a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9796a7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9796a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9796aa: call 0x97ae80 */
  esp -= 4; W32(esp, 0x9796afu); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 9796af: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9796b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9796b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9796b5: call 0x90cc20 */
  esp -= 4; W32(esp, 0x9796bau); SPILL(); f_90cc20(); if (g_unwind) return; RELOAD();
/* 9796ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9796bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9796bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9796bd: mov eax, ebx */
  eax = ebx;
/* 9796bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9796c0: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9796c6: ret 0x14 */
  esp += 24; SPILL(); return;
L_9796c9: /* 9796c9: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9796cc: jne 0x979798 */
  if (!zf) goto L_979798;
L_9796d2: /* 9796d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9796d3: call 0x90d820 */
  esp -= 4; W32(esp, 0x9796d8u); SPILL(); f_90d820(); if (g_unwind) return; RELOAD();
/* 9796d8: xor ecx, ecx */
  ecx = 0;
/* 9796da: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 9796de: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 9796e2: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9796e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9796e7: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 9796eb: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 9796ed: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 9796f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9796f2: mov ebp, eax */
  ebp = eax;
/* 9796f4: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 9796fc: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 979704: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 979708: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97970du); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97970d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 979711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979712: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979713: call 0x90dca0 */
  esp -= 4; W32(esp, 0x979718u); SPILL(); f_90dca0(); if (g_unwind) return; RELOAD();
/* 979718: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 97971c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97971d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97971f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979720: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979725u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979725: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 979729: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97972a: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97972c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97972d: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979732u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979732: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 979736: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979737: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 979739: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97973a: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97973fu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97973f: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 979743: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979744: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979745: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979746: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97974bu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97974b: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 97974f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979750: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979752: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979753: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979758u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979758: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 97975c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97975d: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* 97975f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979760: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979765u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979765: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 979769: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 97976d: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 979771: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979772: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 979776: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979777: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 97977b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97977c: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 979780: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979782: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979783: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979784: call 0x90dce0 */
  esp -= 4; W32(esp, 0x979789u); SPILL(); f_90dce0(); if (g_unwind) return; RELOAD();
/* 979789: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97978a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97978b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97978c: mov eax, ebx */
  eax = ebx;
/* 97978e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97978f: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 979795: ret 0x14 */
  esp += 24; SPILL(); return;
L_979798: /* 979798: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97979b: jne 0x9797ec */
  if (!zf) goto L_9797ec;
L_97979d: /* 97979d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97979e: call 0x90d640 */
  esp -= 4; W32(esp, 0x9797a3u); SPILL(); f_90d640(); if (g_unwind) return; RELOAD();
/* 9797a3: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9797a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9797a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9797aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9797ab: mov ebp, eax */
  ebp = eax;
/* 9797ad: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 9797b5: call 0x97aee0 */
  esp -= 4; W32(esp, 0x9797bau); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 9797ba: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9797be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9797bf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9797c0: call 0x90d660 */
  esp -= 4; W32(esp, 0x9797c5u); SPILL(); f_90d660(); if (g_unwind) return; RELOAD();
/* 9797c5: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 9797c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9797ca: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9797cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9797cd: call 0x97aee0 */
  esp -= 4; W32(esp, 0x9797d2u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 9797d2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9797d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9797d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9797d8: call 0x90d690 */
  esp -= 4; W32(esp, 0x9797ddu); SPILL(); f_90d690(); if (g_unwind) return; RELOAD();
/* 9797dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9797de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9797df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9797e0: mov eax, ebx */
  eax = ebx;
/* 9797e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9797e3: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9797e9: ret 0x14 */
  esp += 24; SPILL(); return;
L_9797ec: /* 9797ec: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9797ef: jne 0x9798fe */
  if (!zf) goto L_9798fe;
L_9797f5: /* 9797f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9797f6: call 0x99a2b0 */
  esp -= 4; W32(esp, 0x9797fbu); SPILL(); f_99a2b0(); if (g_unwind) return; RELOAD();
/* 9797fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9797fc: call 0x99a2d0 */
  esp -= 4; W32(esp, 0x979801u); SPILL(); f_99a2d0(); if (g_unwind) return; RELOAD();
/* 979801: mov edi, eax */
  edi = eax;
/* 979803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979804: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x979809u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 979809: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97980a: mov ebp, eax */
  ebp = eax;
/* 97980c: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x979811u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 979811: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 979815: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979816: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979819: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 97981d: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 979825: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 97982d: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 979835: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97983au); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97983a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 97983e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97983f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979840: call 0x90c890 */
  esp -= 4; W32(esp, 0x979845u); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 979845: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 979849: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97984a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97984c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97984d: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979852u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979852: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 979856: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 97985a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97985b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97985c: call 0x90c890 */
  esp -= 4; W32(esp, 0x979861u); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 979861: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 979865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979866: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 979868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979869: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97986eu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97986e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 979872: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979873: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979874: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x979879u); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 979879: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97987d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97987e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 979880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979881: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979886u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979886: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97988a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 97988e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97988f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979890: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x979895u); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 979895: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 979899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97989a: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 97989c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97989d: call 0x97ae80 */
  esp -= 4; W32(esp, 0x9798a2u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 9798a2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9798a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9798a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9798a8: call 0x90cb80 */
  esp -= 4; W32(esp, 0x9798adu); SPILL(); f_90cb80(); if (g_unwind) return; RELOAD();
/* 9798ad: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9798b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9798b2: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 9798b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9798b5: call 0x97aee0 */
  esp -= 4; W32(esp, 0x9798bau); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 9798ba: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 9798be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9798bf: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 9798c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9798c2: call 0x97aee0 */
  esp -= 4; W32(esp, 0x9798c7u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 9798c7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9798cb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9798cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9798d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9798d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9798d2: call 0x90cc60 */
  esp -= 4; W32(esp, 0x9798d7u); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 9798d7: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 9798db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9798dc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9798de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9798df: call 0x97ae80 */
  esp -= 4; W32(esp, 0x9798e4u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 9798e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9798e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9798e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9798ea: call 0x90cc20 */
  esp -= 4; W32(esp, 0x9798efu); SPILL(); f_90cc20(); if (g_unwind) return; RELOAD();
/* 9798ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9798f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9798f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9798f2: mov eax, ebx */
  eax = ebx;
/* 9798f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9798f5: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9798fb: ret 0x14 */
  esp += 24; SPILL(); return;
L_9798fe: /* 9798fe: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 979901: jne 0x979ad4 */
  if (!zf) goto L_979ad4;
L_979907: /* 979907: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 979908: call 0x912440 */
  esp -= 4; W32(esp, 0x97990du); SPILL(); f_912440(); if (g_unwind) return; RELOAD();
/* 97990d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 979911: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979912: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 979914: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979915: mov edi, eax */
  edi = eax;
/* 979917: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 97991f: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 979927: call 0x97ae20 */
  esp -= 4; W32(esp, 0x97992cu); SPILL(); f_97ae20(); if (g_unwind) return; RELOAD();
/* 97992c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 979930: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 979933: ja 0x979955 */
  if ((!cf && !zf)) goto L_979955;
L_979935: /* 979935: jmp dword ptr [eax*4 + 0x979cd4] */
  switch (R32((uint32_t)(eax*4 + 0x979cd4u))) {
    case 0x97993cu: goto L_97993c;
    case 0x979940u: goto L_979940;
    case 0x979947u: goto L_979947;
    case 0x97994eu: goto L_97994e;
    default: guest_badjump(0x979935, R32((uint32_t)(eax*4 + 0x979cd4u))); return;
  }
L_97993c: /* 97993c: xor eax, eax */
  eax = 0;
/* 97993e: jmp 0x979959 */
  goto L_979959;
L_979940: /* 979940: mov eax, 1 */
  eax = 0x1u;
/* 979945: jmp 0x979959 */
  goto L_979959;
L_979947: /* 979947: mov eax, 2 */
  eax = 0x2u;
/* 97994c: jmp 0x979959 */
  goto L_979959;
L_97994e: /* 97994e: mov eax, 3 */
  eax = 0x3u;
/* 979953: jmp 0x979959 */
  goto L_979959;
L_979955: /* 979955: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_979959: /* 979959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97995a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97995b: call 0x912930 */
  esp -= 4; W32(esp, 0x979960u); SPILL(); f_912930(); if (g_unwind) return; RELOAD();
/* 979960: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 979964: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979968: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97996du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97996d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 979971: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979972: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979973: call 0x912950 */
  esp -= 4; W32(esp, 0x979978u); SPILL(); f_912950(); if (g_unwind) return; RELOAD();
/* 979978: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97997c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97997d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97997f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979980: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979985u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979985: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 979989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97998a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97998b: call 0x912970 */
  esp -= 4; W32(esp, 0x979990u); SPILL(); f_912970(); if (g_unwind) return; RELOAD();
/* 979990: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 979994: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979995: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 979997: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979998: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97999du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97999d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9799a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9799a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9799a3: call 0x912990 */
  esp -= 4; W32(esp, 0x9799a8u); SPILL(); f_912990(); if (g_unwind) return; RELOAD();
/* 9799a8: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9799ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9799ad: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 9799af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9799b0: call 0x97aee0 */
  esp -= 4; W32(esp, 0x9799b5u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 9799b5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9799b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9799ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9799bb: call 0x9129b0 */
  esp -= 4; W32(esp, 0x9799c0u); SPILL(); f_9129b0(); if (g_unwind) return; RELOAD();
/* 9799c0: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9799c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9799c5: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* 9799c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9799c8: call 0x97ae20 */
  esp -= 4; W32(esp, 0x9799cdu); SPILL(); f_97ae20(); if (g_unwind) return; RELOAD();
/* 9799cd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9799d1: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 9799d4: je 0x9799ea */
  if (zf) goto L_9799ea;
L_9799d6: /* 9799d6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9799d7: je 0x9799e3 */
  if (zf) goto L_9799e3;
L_9799d9: /* 9799d9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9799da: jne 0x9799ee */
  if (!zf) goto L_9799ee;
L_9799dc: /* 9799dc: mov eax, 2 */
  eax = 0x2u;
/* 9799e1: jmp 0x9799f2 */
  goto L_9799f2;
L_9799e3: /* 9799e3: mov eax, 1 */
  eax = 0x1u;
/* 9799e8: jmp 0x9799f2 */
  goto L_9799f2;
L_9799ea: /* 9799ea: xor eax, eax */
  eax = 0;
/* 9799ec: jmp 0x9799f2 */
  goto L_9799f2;
L_9799ee: /* 9799ee: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_9799f2: /* 9799f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9799f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9799f4: call 0x9129d0 */
  esp -= 4; W32(esp, 0x9799f9u); SPILL(); f_9129d0(); if (g_unwind) return; RELOAD();
/* 9799f9: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9799fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9799fe: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 979a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979a01: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979a06u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979a06: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 979a0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979a0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979a0c: call 0x9129f0 */
  esp -= 4; W32(esp, 0x979a11u); SPILL(); f_9129f0(); if (g_unwind) return; RELOAD();
/* 979a11: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 979a15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979a16: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 979a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979a19: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979a1eu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979a1e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 979a22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979a23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979a24: call 0x912a10 */
  esp -= 4; W32(esp, 0x979a29u); SPILL(); f_912a10(); if (g_unwind) return; RELOAD();
/* 979a29: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 979a2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979a2e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 979a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979a31: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979a36u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979a36: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 979a3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979a3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979a3c: call 0x912a30 */
  esp -= 4; W32(esp, 0x979a41u); SPILL(); f_912a30(); if (g_unwind) return; RELOAD();
/* 979a41: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 979a45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 979a47: jne 0x979ca8 */
  if (!zf) goto L_979ca8;
L_979a4d: /* 979a4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979a4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 979a50: call 0x90bda0 */
  esp -= 4; W32(esp, 0x979a55u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 979a55: mov esi, eax */
  esi = eax;
/* 979a57: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 979a5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979a5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979a5d: call 0x90e1b0 */
  esp -= 4; W32(esp, 0x979a62u); SPILL(); f_90e1b0(); if (g_unwind) return; RELOAD();
/* 979a62: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 979a66: fcomp dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
  FPOP();
/* 979a6a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 979a6c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 979a6f: jp 0x979ca8 */
  if (pf) goto L_979ca8;
L_979a75: /* 979a75: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 979a79: fcomp dword ptr [esp + 0x64] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x64u)));
  FPOP();
/* 979a7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 979a7f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 979a82: jp 0x979ca8 */
  if (pf) goto L_979ca8;
L_979a88: /* 979a88: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 979a8c: fcomp dword ptr [esp + 0x64] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x64u)));
  FPOP();
/* 979a90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 979a92: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 979a95: jp 0x979a9d */
  if (pf) goto L_979a9d;
L_979a97: /* 979a97: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 979a9b: jmp 0x979aa1 */
  goto L_979aa1;
L_979a9d: /* 979a9d: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
L_979aa1: /* 979aa1: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 979aa7: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 979aab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979aac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979aad: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 979ab1: call 0x90eb90 */
  esp -= 4; W32(esp, 0x979ab6u); SPILL(); f_90eb90(); if (g_unwind) return; RELOAD();
/* 979ab6: push 0xb02f70 */
  { uint32_t v = 0xb02f70u; esp -= 4; W32(esp, v); }
/* 979abb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979abd: call 0x971e20 */
  esp -= 4; W32(esp, 0x979ac2u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 979ac2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 979ac5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 979ac6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979ac7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 979ac8: mov eax, ebx */
  eax = ebx;
/* 979aca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 979acb: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 979ad1: ret 0x14 */
  esp += 24; SPILL(); return;
L_979ad4: /* 979ad4: cmp edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 979ad7: jne 0x979b47 */
  if (!zf) goto L_979b47;
L_979ad9: /* 979ad9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 979ada: call 0x911cc0 */
  esp -= 4; W32(esp, 0x979adfu); SPILL(); f_911cc0(); if (g_unwind) return; RELOAD();
/* 979adf: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 979ae3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979ae4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 979ae6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979ae7: mov ebp, eax */
  ebp = eax;
/* 979ae9: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 979af1: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 979af9: call 0x97ae80 */
  esp -= 4; W32(esp, 0x979afeu); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 979afe: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 979b02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979b03: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979b04: call 0x911d70 */
  esp -= 4; W32(esp, 0x979b09u); SPILL(); f_911d70(); if (g_unwind) return; RELOAD();
/* 979b09: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 979b0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979b0e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 979b10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979b11: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979b16u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979b16: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 979b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979b1b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979b1c: call 0x911d90 */
  esp -= 4; W32(esp, 0x979b21u); SPILL(); f_911d90(); if (g_unwind) return; RELOAD();
/* 979b21: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 979b25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979b26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979b27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979b28: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979b2du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979b2d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 979b31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979b32: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 979b33: call 0x911db0 */
  esp -= 4; W32(esp, 0x979b38u); SPILL(); f_911db0(); if (g_unwind) return; RELOAD();
/* 979b38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 979b39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979b3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 979b3b: mov eax, ebx */
  eax = ebx;
/* 979b3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 979b3e: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 979b44: ret 0x14 */
  esp += 24; SPILL(); return;
L_979b47: /* 979b47: cmp edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 979b4a: jne 0x979ca8 */
  if (!zf) goto L_979ca8;
L_979b50: /* 979b50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 979b51: call 0x999fa0 */
  esp -= 4; W32(esp, 0x979b56u); SPILL(); f_999fa0(); if (g_unwind) return; RELOAD();
/* 979b56: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 979b5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979b5b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 979b5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979b5e: mov edi, eax */
  edi = eax;
/* 979b60: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 979b68: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 979b70: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 979b78: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979b7du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979b7d: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 979b81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979b82: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 979b84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979b85: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979b8au); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979b8a: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 979b8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979b8f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 979b91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979b92: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979b97u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979b97: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 979b9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979b9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979b9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979b9f: call 0x99a0e0 */
  esp -= 4; W32(esp, 0x979ba4u); SPILL(); f_99a0e0(); if (g_unwind) return; RELOAD();
/* 979ba4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 979ba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979ba9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 979bab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979bac: call 0x99a0e0 */
  esp -= 4; W32(esp, 0x979bb1u); SPILL(); f_99a0e0(); if (g_unwind) return; RELOAD();
/* 979bb1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 979bb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979bb6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 979bb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979bb9: call 0x99a0e0 */
  esp -= 4; W32(esp, 0x979bbeu); SPILL(); f_99a0e0(); if (g_unwind) return; RELOAD();
/* 979bbe: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 979bc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979bc3: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 979bc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979bc6: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979bcbu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979bcb: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 979bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979bd0: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 979bd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979bd3: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979bd8u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979bd8: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 979bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979bdd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 979bdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979be0: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979be5u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979be5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 979be9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979bea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979bec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979bed: call 0x99a120 */
  esp -= 4; W32(esp, 0x979bf2u); SPILL(); f_99a120(); if (g_unwind) return; RELOAD();
/* 979bf2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 979bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979bf7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 979bf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979bfa: call 0x99a120 */
  esp -= 4; W32(esp, 0x979bffu); SPILL(); f_99a120(); if (g_unwind) return; RELOAD();
/* 979bff: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 979c03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979c04: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 979c06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979c07: call 0x99a120 */
  esp -= 4; W32(esp, 0x979c0cu); SPILL(); f_99a120(); if (g_unwind) return; RELOAD();
/* 979c0c: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 979c10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979c11: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 979c13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979c14: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979c19u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979c19: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 979c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979c1e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 979c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979c21: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979c26u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979c26: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 979c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979c2b: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 979c2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979c2e: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979c33u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979c33: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 979c37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979c38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979c3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979c3b: call 0x99a100 */
  esp -= 4; W32(esp, 0x979c40u); SPILL(); f_99a100(); if (g_unwind) return; RELOAD();
/* 979c40: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 979c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979c45: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 979c47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979c48: call 0x99a100 */
  esp -= 4; W32(esp, 0x979c4du); SPILL(); f_99a100(); if (g_unwind) return; RELOAD();
/* 979c4d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 979c51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979c52: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 979c54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979c55: call 0x99a100 */
  esp -= 4; W32(esp, 0x979c5au); SPILL(); f_99a100(); if (g_unwind) return; RELOAD();
/* 979c5a: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 979c5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979c5f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 979c61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979c62: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979c67u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979c67: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 979c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979c6c: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 979c6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979c6f: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979c74u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979c74: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 979c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979c79: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 979c7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979c7c: call 0x97aee0 */
  esp -= 4; W32(esp, 0x979c81u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 979c81: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 979c85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979c86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 979c88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979c89: call 0x99a140 */
  esp -= 4; W32(esp, 0x979c8eu); SPILL(); f_99a140(); if (g_unwind) return; RELOAD();
/* 979c8e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 979c92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979c93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 979c95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979c96: call 0x99a140 */
  esp -= 4; W32(esp, 0x979c9bu); SPILL(); f_99a140(); if (g_unwind) return; RELOAD();
/* 979c9b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 979c9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979ca0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 979ca2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979ca3: call 0x99a140 */
  esp -= 4; W32(esp, 0x979ca8u); SPILL(); f_99a140(); if (g_unwind) return; RELOAD();
L_979ca8: /* 979ca8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 979ca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979caa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 979cab: mov eax, ebx */
  eax = ebx;
/* 979cad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 979cae: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 979cb4: ret 0x14 */
  esp += 24; SPILL(); return;
L_979cb7: /* 979cb7: push 0xb02f38 */
  { uint32_t v = 0xb02f38u; esp -= 4; W32(esp, v); }
L_979cbc: /* 979cbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979cbd: call 0x971e20 */
  esp -= 4; W32(esp, 0x979cc2u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 979cc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 979cc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 979cc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979cc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 979cc8: xor eax, eax */
  eax = 0;
/* 979cca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 979ccb: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 979cd1: ret 0x14 */
  esp += 24; SPILL(); return;
}
