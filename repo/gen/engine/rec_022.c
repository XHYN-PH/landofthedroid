#include "recomp.h"
#include "rec_mod.h"

void f_765940(void) {
  LOAD_REGS();
L_765940: /* 765940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 765941: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 765945: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 765947: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 765948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765949: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 76594f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765950: mov ebp, ecx */
  ebp = ecx;
/* 765952: jge 0x765968 */
  if ((sf == of)) goto L_765968;
L_765954: /* 765954: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 765959: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76595e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 765963: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x765965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 765965: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765968: /* 765968: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76596b: jle 0x765981 */
  if ((zf || sf != of)) goto L_765981;
L_76596d: /* 76596d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 765972: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 765977: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76597c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76597eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76597e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765981: /* 765981: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 765985: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 765988: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76598b: jle 0x7659a1 */
  if ((zf || sf != of)) goto L_7659a1;
L_76598d: /* 76598d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 765992: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 765997: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76599c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76599eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76599e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7659a1: /* 7659a1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7659a3: jge 0x7659c0 */
  if ((sf == of)) goto L_7659c0;
L_7659a5: /* 7659a5: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7659a8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7659ab: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7659ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7659b0: /* 7659b0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7659b3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7659b5: call 0x6c2c89 */
  esp -= 4; W32(esp, 0x7659bau); SPILL(); f_6c2c89(); if (g_unwind) return; RELOAD();
/* 7659ba: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7659bd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7659be: jne 0x7659b0 */
  if (!zf) goto L_7659b0;
L_7659c0: /* 7659c0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7659c4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7659c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7659c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7659c8: mov ecx, ebp */
  ecx = ebp;
/* 7659ca: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7659d0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7659d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7659d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7659d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7659d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7659d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_765a10(void) {
  LOAD_REGS();
L_765a10: /* 765a10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765a11: mov esi, ecx */
  esi = ecx;
/* 765a13: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 765a16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765a17: xor edi, edi */
  edi = 0;
/* 765a19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 765a1b: jle 0x765a35 */
  if ((zf || sf != of)) goto L_765a35;
L_765a1d: /* 765a1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 765a1e: xor ebx, ebx */
  ebx = 0;
L_765a20: /* 765a20: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 765a22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 765a24: call 0x6c2c89 */
  esp -= 4; W32(esp, 0x765a29u); SPILL(); f_6c2c89(); if (g_unwind) return; RELOAD();
/* 765a29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 765a2c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 765a2d: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 765a30: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 765a32: jl 0x765a20 */
  if ((sf != of)) goto L_765a20;
L_765a34: /* 765a34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_765a35: /* 765a35: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 765a39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765a3a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 765a3c: mov ecx, esi */
  ecx = esi;
/* 765a3e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x765a44u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 765a44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 765a45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765a46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765a60(void) {
  LOAD_REGS();
L_765a60: /* 765a60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 765a64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 765a66: je 0x765a6d */
  if (zf) goto L_765a6d;
L_765a68: /* 765a68: jmp 0x6c58f8 */
  SPILL(); f_6c58f8(); return;
L_765a6d: /* 765a6d: ret  */
  esp += 4; SPILL(); return;
}

void f_765a80(void) {
  LOAD_REGS();
L_765a80: /* 765a80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765a82: push 0x9cad8b */
  { uint32_t v = 0x9cad8bu; esp -= 4; W32(esp, v); }
/* 765a87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 765a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765a8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765a97: mov esi, ecx */
  esi = ecx;
/* 765a99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 765a9d: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 765aa0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 765aa8: call 0x6ccb8f */
  esp -= 4; W32(esp, 0x765aadu); SPILL(); f_6ccb8f(); if (g_unwind) return; RELOAD();
/* 765aad: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 765ab0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 765ab8: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x765abeu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 765abe: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 765ac2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765ac3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 765aca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 765acd: ret  */
  esp += 4; SPILL(); return;
}

void f_765af0(void) {
  LOAD_REGS();
L_765af0: /* 765af0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765af2: push 0x9cadab */
  { uint32_t v = 0x9cadabu; esp -= 4; W32(esp, v); }
/* 765af7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 765afd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765afe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765b06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765b07: mov esi, ecx */
  esi = ecx;
/* 765b09: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 765b0c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 765b10: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x765b15u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 765b15: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 765b18: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 765b20: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x765b26u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 765b26: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 765b2a: mov eax, esi */
  eax = esi;
/* 765b2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765b2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 765b34: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 765b37: ret  */
  esp += 4; SPILL(); return;
}

void f_765b60(void) {
  LOAD_REGS();
L_765b60: /* 765b60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765b62: push 0x9cadcb */
  { uint32_t v = 0x9cadcbu; esp -= 4; W32(esp, v); }
/* 765b67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 765b6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765b6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765b75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765b76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765b77: mov esi, ecx */
  esi = ecx;
/* 765b79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765b7a: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 765b7e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 765b80: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 765b83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765b84: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 765b86: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 765b89: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 765b8d: mov dword ptr [esi + 4], 0x9f7c44 */
  W32((uint32_t)(esi + 0x4u), 0x9f7c44u);
/* 765b94: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x765b9au); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 765b9a: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 765b9d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 765ba0: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 765ba3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 765ba6: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 765ba9: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 765bac: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 765baf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765bb0: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 765bb3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 765bbb: call 0x6cb721 */
  esp -= 4; W32(esp, 0x765bc0u); SPILL(); f_6cb721(); if (g_unwind) return; RELOAD();
/* 765bc0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 765bc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 765bc5: mov eax, esi */
  eax = esi;
/* 765bc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765bc8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 765bcf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 765bd2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765c00(void) {
  LOAD_REGS();
L_765c00: /* 765c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765c01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765c02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 765c06: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 765c08: mov esi, ecx */
  esi = ecx;
/* 765c0a: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 765c0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765c0e: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 765c11: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 765c13: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x765c19u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 765c19: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 765c1c: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 765c1f: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 765c22: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 765c25: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 765c28: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 765c2b: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 765c2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765c2f: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 765c32: call 0x6c296e */
  esp -= 4; W32(esp, 0x765c37u); SPILL(); f_6c296e(); if (g_unwind) return; RELOAD();
/* 765c37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 765c38: mov eax, esi */
  eax = esi;
/* 765c3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765c3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765c50(void) {
  LOAD_REGS();
L_765c50: /* 765c50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765c52: push 0x9cae62 */
  { uint32_t v = 0x9cae62u; esp -= 4; W32(esp, v); }
/* 765c57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 765c5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765c5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765c66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765c67: mov esi, ecx */
  esi = ecx;
/* 765c69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 765c6d: mov dword ptr [esi], 0xa06400 */
  W32((uint32_t)(esi), 0xa06400u);
/* 765c73: mov dword ptr [esp + 0x10], 8 */
  W32((uint32_t)(esp + 0x10u), 0x8u);
/* 765c7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x765c81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 765c81: push 0x6c880a */
  { uint32_t v = 0x6c880au; esp -= 4; W32(esp, v); }
/* 765c86: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 765c88: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 765c8a: lea eax, [esi + 0x1b0] */
  eax = (uint32_t)(esi + 0x1b0u);
/* 765c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765c91: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 765c96: call 0x99ca3d */
  esp -= 4; W32(esp, 0x765c9bu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 765c9b: lea ecx, [esi + 0x18c] */
  ecx = (uint32_t)(esi + 0x18cu);
/* 765ca1: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 765ca6: call 0x6ccbee */
  esp -= 4; W32(esp, 0x765cabu); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
/* 765cab: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 765cb1: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 765cb6: call 0x6c398b */
  esp -= 4; W32(esp, 0x765cbbu); SPILL(); f_6c398b(); if (g_unwind) return; RELOAD();
/* 765cbb: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 765cc1: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 765cc6: call 0x6c4e4e */
  esp -= 4; W32(esp, 0x765ccbu); SPILL(); f_6c4e4e(); if (g_unwind) return; RELOAD();
/* 765ccb: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 765cd1: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 765cd6: call 0x6c83ff */
  esp -= 4; W32(esp, 0x765cdbu); SPILL(); f_6c83ff(); if (g_unwind) return; RELOAD();
/* 765cdb: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 765ce1: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 765ce6: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x765cebu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 765ceb: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 765cf1: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 765cf6: call 0x6c279d */
  esp -= 4; W32(esp, 0x765cfbu); SPILL(); f_6c279d(); if (g_unwind) return; RELOAD();
/* 765cfb: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 765d01: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 765d06: call 0x6c5a29 */
  esp -= 4; W32(esp, 0x765d0bu); SPILL(); f_6c5a29(); if (g_unwind) return; RELOAD();
/* 765d0b: mov ecx, esi */
  ecx = esi;
/* 765d0d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 765d15: call 0x6ccd47 */
  esp -= 4; W32(esp, 0x765d1au); SPILL(); f_6ccd47(); if (g_unwind) return; RELOAD();
/* 765d1a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 765d1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765d1f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 765d26: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 765d29: ret  */
  esp += 4; SPILL(); return;
}

void f_765d70(void) {
  LOAD_REGS();
L_765d70: /* 765d70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765d72: push 0x9caefa */
  { uint32_t v = 0x9caefau; esp -= 4; W32(esp, v); }
/* 765d77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 765d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765d7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765d85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765d86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765d87: mov esi, ecx */
  esi = ecx;
/* 765d89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 765d8d: call 0x6c292d */
  esp -= 4; W32(esp, 0x765d92u); SPILL(); f_6c292d(); if (g_unwind) return; RELOAD();
/* 765d92: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 765d98: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 765da0: mov dword ptr [esi], 0xa06400 */
  W32((uint32_t)(esi), 0xa06400u);
/* 765da6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x765dacu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 765dac: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 765db2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 765db7: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x765dbdu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 765dbd: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 765dc3: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 765dc8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x765dceu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 765dce: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 765dd4: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 765dd9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x765ddfu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 765ddf: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 765de5: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 765dea: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x765df0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 765df0: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 765df6: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 765dfb: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x765e01u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 765e01: lea ecx, [esi + 0x184] */
  ecx = (uint32_t)(esi + 0x184u);
/* 765e07: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 765e0c: call 0x6c3873 */
  esp -= 4; W32(esp, 0x765e11u); SPILL(); f_6c3873(); if (g_unwind) return; RELOAD();
/* 765e11: push 0x6c880a */
  { uint32_t v = 0x6c880au; esp -= 4; W32(esp, v); }
/* 765e16: push 0x6cadb2 */
  { uint32_t v = 0x6cadb2u; esp -= 4; W32(esp, v); }
/* 765e1b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 765e1d: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 765e1f: lea eax, [esi + 0x1b0] */
  eax = (uint32_t)(esi + 0x1b0u);
/* 765e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765e26: mov byte ptr [esp + 0x24], 7 */
  W8((uint32_t)(esp + 0x24u), 0x7u);
/* 765e2b: call 0x99cafe */
  esp -= 4; W32(esp, 0x765e30u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 765e30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 765e34: mov eax, esi */
  eax = esi;
/* 765e36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765e37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 765e3e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 765e41: ret  */
  esp += 4; SPILL(); return;
}

void f_765e90(void) {
  LOAD_REGS();
L_765e90: /* 765e90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765e92: push 0x9caf9a */
  { uint32_t v = 0x9caf9au; esp -= 4; W32(esp, v); }
/* 765e97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 765e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765e9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765ea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765ea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765ea7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765ea8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 765eac: mov esi, ecx */
  esi = ecx;
/* 765eae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765eaf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 765eb3: call 0x6c6e24 */
  esp -= 4; W32(esp, 0x765eb8u); SPILL(); f_6c6e24(); if (g_unwind) return; RELOAD();
/* 765eb8: lea eax, [edi + 0x134] */
  eax = (uint32_t)(edi + 0x134u);
/* 765ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765ebf: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 765ec5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 765ecd: mov dword ptr [esi], 0xa06400 */
  W32((uint32_t)(esi), 0xa06400u);
/* 765ed3: call 0x6c6555 */
  esp -= 4; W32(esp, 0x765ed8u); SPILL(); f_6c6555(); if (g_unwind) return; RELOAD();
/* 765ed8: lea ecx, [edi + 0x140] */
  ecx = (uint32_t)(edi + 0x140u);
/* 765ede: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765edf: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 765ee5: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 765eea: call 0x6c7716 */
  esp -= 4; W32(esp, 0x765eefu); SPILL(); f_6c7716(); if (g_unwind) return; RELOAD();
/* 765eef: lea edx, [edi + 0x14c] */
  edx = (uint32_t)(edi + 0x14cu);
/* 765ef5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 765ef6: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 765efc: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 765f01: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x765f06u); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 765f06: lea eax, [edi + 0x158] */
  eax = (uint32_t)(edi + 0x158u);
/* 765f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765f0d: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 765f13: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 765f18: call 0x6c3b89 */
  esp -= 4; W32(esp, 0x765f1du); SPILL(); f_6c3b89(); if (g_unwind) return; RELOAD();
/* 765f1d: lea ecx, [edi + 0x164] */
  ecx = (uint32_t)(edi + 0x164u);
/* 765f23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765f24: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 765f2a: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 765f2f: call 0x6c25ea */
  esp -= 4; W32(esp, 0x765f34u); SPILL(); f_6c25ea(); if (g_unwind) return; RELOAD();
/* 765f34: lea edx, [edi + 0x170] */
  edx = (uint32_t)(edi + 0x170u);
/* 765f3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 765f3b: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 765f41: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 765f46: call 0x6c2761 */
  esp -= 4; W32(esp, 0x765f4bu); SPILL(); f_6c2761(); if (g_unwind) return; RELOAD();
/* 765f4b: mov eax, dword ptr [edi + 0x17c] */
  eax = R32((uint32_t)(edi + 0x17cu));
/* 765f51: mov dword ptr [esi + 0x17c], eax */
  W32((uint32_t)(esi + 0x17cu), eax);
/* 765f57: mov ecx, dword ptr [edi + 0x180] */
  ecx = R32((uint32_t)(edi + 0x180u));
/* 765f5d: mov dword ptr [esi + 0x180], ecx */
  W32((uint32_t)(esi + 0x180u), ecx);
/* 765f63: mov dword ptr [esi + 0x184], 0x9f90e4 */
  W32((uint32_t)(esi + 0x184u), 0x9f90e4u);
/* 765f6d: mov edx, dword ptr [edi + 0x188] */
  edx = R32((uint32_t)(edi + 0x188u));
/* 765f73: lea eax, [edi + 0x18c] */
  eax = (uint32_t)(edi + 0x18cu);
/* 765f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765f7a: lea ecx, [esi + 0x18c] */
  ecx = (uint32_t)(esi + 0x18cu);
/* 765f80: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 765f85: mov dword ptr [esi + 0x188], edx */
  W32((uint32_t)(esi + 0x188u), edx);
/* 765f8b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x765f90u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 765f90: mov ecx, dword ptr [edi + 0x198] */
  ecx = R32((uint32_t)(edi + 0x198u));
/* 765f96: mov dword ptr [esi + 0x198], ecx */
  W32((uint32_t)(esi + 0x198u), ecx);
/* 765f9c: mov edx, dword ptr [edi + 0x19c] */
  edx = R32((uint32_t)(edi + 0x19cu));
/* 765fa2: mov dword ptr [esi + 0x19c], edx */
  W32((uint32_t)(esi + 0x19cu), edx);
/* 765fa8: mov eax, dword ptr [edi + 0x1a0] */
  eax = R32((uint32_t)(edi + 0x1a0u));
/* 765fae: mov dword ptr [esi + 0x1a0], eax */
  W32((uint32_t)(esi + 0x1a0u), eax);
/* 765fb4: mov ecx, dword ptr [edi + 0x1a4] */
  ecx = R32((uint32_t)(edi + 0x1a4u));
/* 765fba: mov dword ptr [esi + 0x1a4], ecx */
  W32((uint32_t)(esi + 0x1a4u), ecx);
/* 765fc0: mov edx, dword ptr [edi + 0x1a8] */
  edx = R32((uint32_t)(edi + 0x1a8u));
/* 765fc6: mov dword ptr [esi + 0x1a8], edx */
  W32((uint32_t)(esi + 0x1a8u), edx);
/* 765fcc: mov eax, dword ptr [edi + 0x1ac] */
  eax = R32((uint32_t)(edi + 0x1acu));
/* 765fd2: mov dword ptr [esi + 0x1ac], eax */
  W32((uint32_t)(esi + 0x1acu), eax);
/* 765fd8: push 0x6c880a */
  { uint32_t v = 0x6c880au; esp -= 4; W32(esp, v); }
/* 765fdd: push 0x6c37ba */
  { uint32_t v = 0x6c37bau; esp -= 4; W32(esp, v); }
/* 765fe2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 765fe4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 765fe6: add edi, 0x1b0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1b0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 765fec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765fed: lea ecx, [esi + 0x1b0] */
  ecx = (uint32_t)(esi + 0x1b0u);
/* 765ff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765ff4: mov byte ptr [esp + 0x2c], 7 */
  W8((uint32_t)(esp + 0x2cu), 0x7u);
/* 765ff9: call 0x99cb60 */
  esp -= 4; W32(esp, 0x765ffeu); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 765ffe: mov eax, esi */
  eax = esi;
/* 766000: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 766004: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766005: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766006: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76600d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 766010: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766090(void) {
  LOAD_REGS();
L_766090: /* 766090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766091: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 766092: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766093: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766094: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 766098: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766099: mov esi, ecx */
  esi = ecx;
/* 76609b: call 0x6c3e1d */
  esp -= 4; W32(esp, 0x7660a0u); SPILL(); f_6c3e1d(); if (g_unwind) return; RELOAD();
/* 7660a0: lea eax, [edi + 0x134] */
  eax = (uint32_t)(edi + 0x134u);
/* 7660a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7660a7: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 7660ad: call 0x6c3116 */
  esp -= 4; W32(esp, 0x7660b2u); SPILL(); f_6c3116(); if (g_unwind) return; RELOAD();
/* 7660b2: lea ecx, [edi + 0x140] */
  ecx = (uint32_t)(edi + 0x140u);
/* 7660b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7660b9: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 7660bf: call 0x6c4197 */
  esp -= 4; W32(esp, 0x7660c4u); SPILL(); f_6c4197(); if (g_unwind) return; RELOAD();
/* 7660c4: lea edx, [edi + 0x14c] */
  edx = (uint32_t)(edi + 0x14cu);
/* 7660ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7660cb: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 7660d1: call 0x6c4246 */
  esp -= 4; W32(esp, 0x7660d6u); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 7660d6: lea eax, [edi + 0x158] */
  eax = (uint32_t)(edi + 0x158u);
/* 7660dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7660dd: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 7660e3: call 0x6ccd92 */
  esp -= 4; W32(esp, 0x7660e8u); SPILL(); f_6ccd92(); if (g_unwind) return; RELOAD();
/* 7660e8: lea ecx, [edi + 0x164] */
  ecx = (uint32_t)(edi + 0x164u);
/* 7660ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7660ef: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 7660f5: call 0x6c4241 */
  esp -= 4; W32(esp, 0x7660fau); SPILL(); f_6c4241(); if (g_unwind) return; RELOAD();
/* 7660fa: lea edx, [edi + 0x170] */
  edx = (uint32_t)(edi + 0x170u);
/* 766100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766101: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 766107: call 0x6c8cf6 */
  esp -= 4; W32(esp, 0x76610cu); SPILL(); f_6c8cf6(); if (g_unwind) return; RELOAD();
/* 76610c: mov eax, dword ptr [edi + 0x17c] */
  eax = R32((uint32_t)(edi + 0x17cu));
/* 766112: mov dword ptr [esi + 0x17c], eax */
  W32((uint32_t)(esi + 0x17cu), eax);
/* 766118: mov ecx, dword ptr [edi + 0x180] */
  ecx = R32((uint32_t)(edi + 0x180u));
/* 76611e: mov dword ptr [esi + 0x180], ecx */
  W32((uint32_t)(esi + 0x180u), ecx);
/* 766124: mov edx, dword ptr [edi + 0x188] */
  edx = R32((uint32_t)(edi + 0x188u));
/* 76612a: lea eax, [edi + 0x18c] */
  eax = (uint32_t)(edi + 0x18cu);
/* 766130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766131: lea ecx, [esi + 0x18c] */
  ecx = (uint32_t)(esi + 0x18cu);
/* 766137: mov dword ptr [esi + 0x188], edx */
  W32((uint32_t)(esi + 0x188u), edx);
/* 76613d: call 0x6c7d65 */
  esp -= 4; W32(esp, 0x766142u); SPILL(); f_6c7d65(); if (g_unwind) return; RELOAD();
/* 766142: mov ecx, dword ptr [edi + 0x198] */
  ecx = R32((uint32_t)(edi + 0x198u));
/* 766148: mov dword ptr [esi + 0x198], ecx */
  W32((uint32_t)(esi + 0x198u), ecx);
/* 76614e: mov edx, dword ptr [edi + 0x19c] */
  edx = R32((uint32_t)(edi + 0x19cu));
/* 766154: mov dword ptr [esi + 0x19c], edx */
  W32((uint32_t)(esi + 0x19cu), edx);
/* 76615a: mov eax, dword ptr [edi + 0x1a0] */
  eax = R32((uint32_t)(edi + 0x1a0u));
/* 766160: mov dword ptr [esi + 0x1a0], eax */
  W32((uint32_t)(esi + 0x1a0u), eax);
/* 766166: mov ecx, dword ptr [edi + 0x1a4] */
  ecx = R32((uint32_t)(edi + 0x1a4u));
/* 76616c: mov dword ptr [esi + 0x1a4], ecx */
  W32((uint32_t)(esi + 0x1a4u), ecx);
/* 766172: mov edx, dword ptr [edi + 0x1a8] */
  edx = R32((uint32_t)(edi + 0x1a8u));
/* 766178: mov dword ptr [esi + 0x1a8], edx */
  W32((uint32_t)(esi + 0x1a8u), edx);
/* 76617e: mov eax, dword ptr [edi + 0x1ac] */
  eax = R32((uint32_t)(edi + 0x1acu));
/* 766184: lea ebp, [edi + 0x1cc] */
  ebp = (uint32_t)(edi + 0x1ccu);
/* 76618a: mov dword ptr [esi + 0x1ac], eax */
  W32((uint32_t)(esi + 0x1acu), eax);
/* 766190: lea ebx, [esi + 0x1b8] */
  ebx = (uint32_t)(esi + 0x1b8u);
/* 766196: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 766198: mov dword ptr [esp + 0x14], 4 */
  W32((uint32_t)(esp + 0x14u), 0x4u);
L_7661a0: /* 7661a0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7661a3: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 7661a6: mov dword ptr [ebx - 8], ecx */
  W32((uint32_t)(ebx + 0xfffffff8u), ecx);
/* 7661a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7661aa: mov ecx, ebx */
  ecx = ebx;
/* 7661ac: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x7661b2u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7661b2: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 7661b5: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 7661b8: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 7661bb: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 7661be: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 7661c1: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* 7661c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7661c5: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 7661c8: mov dword ptr [ebx + 0x14], edx */
  W32((uint32_t)(ebx + 0x14u), edx);
/* 7661cb: call 0x6c296e */
  esp -= 4; W32(esp, 0x7661d0u); SPILL(); f_6c296e(); if (g_unwind) return; RELOAD();
/* 7661d0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7661d4: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7661d7: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7661da: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7661db: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7661df: jne 0x7661a0 */
  if (!zf) goto L_7661a0;
L_7661e1: /* 7661e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7661e2: mov eax, esi */
  eax = esi;
/* 7661e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7661e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7661e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7661e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766250(void) {
  LOAD_REGS();
L_766250: /* 766250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766251: mov esi, ecx */
  esi = ecx;
/* 766253: call 0x6c82ec */
  esp -= 4; W32(esp, 0x766258u); SPILL(); f_6c82ec(); if (g_unwind) return; RELOAD();
/* 766258: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76625d: je 0x76626e */
  if (zf) goto L_76626e;
L_76625f: /* 76625f: push 0x260 */
  { uint32_t v = 0x260u; esp -= 4; W32(esp, v); }
/* 766264: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766265: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76626bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76626b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76626e: /* 76626e: mov eax, esi */
  eax = esi;
/* 766270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766271: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766290(void) {
  LOAD_REGS();
L_766290: /* 766290: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766291: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 766295: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 766298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766299: mov esi, ecx */
  esi = ecx;
/* 76629b: je 0x7662d0 */
  if (zf) goto L_7662d0;
L_76629d: /* 76629d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7662a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7662a1: push 0x6c82ec */
  { uint32_t v = 0x6c82ecu; esp -= 4; W32(esp, v); }
/* 7662a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7662a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7662aa: push 0x260 */
  { uint32_t v = 0x260u; esp -= 4; W32(esp, v); }
/* 7662af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7662b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7662b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7662b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7662b8: je 0x7662c8 */
  if (zf) goto L_7662c8;
L_7662ba: /* 7662ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7662c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7662c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7662c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7662c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7662c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7662c8: /* 7662c8: mov eax, edi */
  eax = edi;
/* 7662ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7662cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7662cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7662cd: ret 4 */
  esp += 8; SPILL(); return;
L_7662d0: /* 7662d0: mov ecx, esi */
  ecx = esi;
/* 7662d2: call 0x6c82ec */
  esp -= 4; W32(esp, 0x7662d7u); SPILL(); f_6c82ec(); if (g_unwind) return; RELOAD();
/* 7662d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7662da: je 0x7662eb */
  if (zf) goto L_7662eb;
L_7662dc: /* 7662dc: push 0x260 */
  { uint32_t v = 0x260u; esp -= 4; W32(esp, v); }
/* 7662e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7662e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7662e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7662e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7662eb: /* 7662eb: mov eax, esi */
  eax = esi;
/* 7662ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7662ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7662ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766320(void) {
  LOAD_REGS();
L_766320: /* 766320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766321: mov esi, ecx */
  esi = ecx;
/* 766323: mov dword ptr [esi], 0xa064b8 */
  W32((uint32_t)(esi), 0xa064b8u);
/* 766329: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76632a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76632e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766331: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 766334: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 766337: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 76633a: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 76633d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 766340: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 766343: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 766346: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 766349: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 76634c: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 76634f: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 766352: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 766355: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 766358: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 76635b: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 76635e: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 766361: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 766364: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 766367: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 76636a: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 76636d: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 766370: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 766373: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 766376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766377: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 76637a: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 76637d: call 0x6c9890 */
  esp -= 4; W32(esp, 0x766382u); SPILL(); f_6c9890(); if (g_unwind) return; RELOAD();
/* 766382: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 766385: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 766388: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 76638b: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 76638e: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 766391: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 766394: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 766397: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 76639a: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 76639d: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 7663a0: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 7663a3: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 7663a6: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 7663a9: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 7663ac: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 7663af: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 7663b2: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 7663b5: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 7663b8: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 7663bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7663bc: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 7663bf: mov eax, esi */
  eax = esi;
/* 7663c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7663c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766400(void) {
  LOAD_REGS();
L_766400: /* 766400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766401: mov esi, ecx */
  esi = ecx;
/* 766403: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766404: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 766408: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76640b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 76640e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 766411: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 766414: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 766417: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 76641a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 76641d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 766420: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 766423: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 766426: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 766429: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 76642c: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 76642f: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 766432: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 766435: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 766438: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 76643b: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 76643e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 766441: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 766444: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 766447: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 76644a: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 76644d: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 766450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766451: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 766454: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 766457: call 0x6c5e2f */
  esp -= 4; W32(esp, 0x76645cu); SPILL(); f_6c5e2f(); if (g_unwind) return; RELOAD();
/* 76645c: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 76645f: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 766462: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 766465: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 766468: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 76646b: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 76646e: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 766471: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 766474: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 766477: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 76647a: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 76647d: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 766480: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 766483: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 766486: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 766489: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 76648c: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 76648f: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 766492: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 766495: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766496: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 766499: mov eax, esi */
  eax = esi;
/* 76649b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76649c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7664d0(void) {
  LOAD_REGS();
L_7664d0: /* 7664d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7664d2: push 0x9cafd9 */
  { uint32_t v = 0x9cafd9u; esp -= 4; W32(esp, v); }
/* 7664d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7664dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7664de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7664e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7664e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7664e7: mov esi, ecx */
  esi = ecx;
/* 7664e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7664ed: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7664f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7664f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7664f3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7664fb: call 0x6c1c8f */
  esp -= 4; W32(esp, 0x766500u); SPILL(); f_6c1c8f(); if (g_unwind) return; RELOAD();
/* 766500: mov ecx, esi */
  ecx = esi;
/* 766502: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76650a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x766510u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 766510: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 766514: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766515: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76651c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76651f: ret  */
  esp += 4; SPILL(); return;
}

void f_766540(void) {
  LOAD_REGS();
L_766540: /* 766540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766543: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 766547: mov esi, ecx */
  esi = ecx;
/* 766549: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76654b: je 0x766596 */
  if (zf) goto L_766596;
L_76654d: /* 76654d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766551: call 0x6ca77c */
  esp -= 4; W32(esp, 0x766556u); SPILL(); f_6ca77c(); if (g_unwind) return; RELOAD();
/* 766556: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766559: xor ebx, ebx */
  ebx = 0;
/* 76655b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76655d: jle 0x766596 */
  if ((zf || sf != of)) goto L_766596;
L_76655f: /* 76655f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 766560: xor ebp, ebp */
  ebp = 0;
L_766562: /* 766562: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 766567: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 766569: mov ecx, esi */
  ecx = esi;
/* 76656b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x766571u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 766571: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 766577: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 766579: je 0x766587 */
  if (zf) goto L_766587;
L_76657b: /* 76657b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 76657d: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76657f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766580: mov ecx, eax */
  ecx = eax;
/* 766582: call 0x6cc6da */
  esp -= 4; W32(esp, 0x766587u); SPILL(); f_6cc6da(); if (g_unwind) return; RELOAD();
L_766587: /* 766587: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76658a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76658b: add ebp, 0xa4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 766591: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 766593: jl 0x766562 */
  if ((sf != of)) goto L_766562;
L_766595: /* 766595: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_766596: /* 766596: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766597: mov eax, esi */
  eax = esi;
/* 766599: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76659a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76659b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7665c0(void) {
  LOAD_REGS();
L_7665c0: /* 7665c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7665c2: push 0x9caff9 */
  { uint32_t v = 0x9caff9u; esp -= 4; W32(esp, v); }
/* 7665c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7665cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7665ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7665d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7665d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7665d7: mov esi, ecx */
  esi = ecx;
/* 7665d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7665dd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7665e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7665e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7665e3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7665eb: call 0x6c9eee */
  esp -= 4; W32(esp, 0x7665f0u); SPILL(); f_6c9eee(); if (g_unwind) return; RELOAD();
/* 7665f0: mov ecx, esi */
  ecx = esi;
/* 7665f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7665fa: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x766600u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 766600: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 766604: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766605: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76660c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76660f: ret  */
  esp += 4; SPILL(); return;
}

void f_766630(void) {
  LOAD_REGS();
L_766630: /* 766630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766631: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766632: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766633: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 766637: mov esi, ecx */
  esi = ecx;
/* 766639: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76663b: je 0x76667d */
  if (zf) goto L_76667d;
L_76663d: /* 76663d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766641: call 0x6c2d79 */
  esp -= 4; W32(esp, 0x766646u); SPILL(); f_6c2d79(); if (g_unwind) return; RELOAD();
/* 766646: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766649: xor ebx, ebx */
  ebx = 0;
/* 76664b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76664d: jle 0x76667d */
  if ((zf || sf != of)) goto L_76667d;
L_76664f: /* 76664f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 766650: xor ebp, ebp */
  ebp = 0;
L_766652: /* 766652: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 766654: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 766656: mov ecx, esi */
  ecx = esi;
/* 766658: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76665eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76665e: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 766661: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 766663: je 0x766671 */
  if (zf) goto L_766671;
L_766665: /* 766665: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 766667: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 766669: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76666a: mov ecx, eax */
  ecx = eax;
/* 76666c: call 0x6c3bca */
  esp -= 4; W32(esp, 0x766671u); SPILL(); f_6c3bca(); if (g_unwind) return; RELOAD();
L_766671: /* 766671: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766674: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 766675: add ebp, 0x64 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 766678: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76667a: jl 0x766652 */
  if ((sf != of)) goto L_766652;
L_76667c: /* 76667c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76667d: /* 76667d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76667e: mov eax, esi */
  eax = esi;
/* 766680: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766681: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 766682: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7666b0(void) {
  LOAD_REGS();
L_7666b0: /* 7666b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7666b2: push 0x9cb019 */
  { uint32_t v = 0x9cb019u; esp -= 4; W32(esp, v); }
/* 7666b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7666bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7666be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7666c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7666c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7666c7: mov esi, ecx */
  esi = ecx;
/* 7666c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7666cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7666d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7666d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7666d3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7666db: call 0x6cc405 */
  esp -= 4; W32(esp, 0x7666e0u); SPILL(); f_6cc405(); if (g_unwind) return; RELOAD();
/* 7666e0: mov ecx, esi */
  ecx = esi;
/* 7666e2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7666ea: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7666f0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7666f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7666f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7666f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7666fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7666ff: ret  */
  esp += 4; SPILL(); return;
}

void f_766720(void) {
  LOAD_REGS();
L_766720: /* 766720: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766722: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766723: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 766727: mov esi, ecx */
  esi = ecx;
/* 766729: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76672b: je 0x766770 */
  if (zf) goto L_766770;
L_76672d: /* 76672d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766731: call 0x6cbc8a */
  esp -= 4; W32(esp, 0x766736u); SPILL(); f_6cbc8a(); if (g_unwind) return; RELOAD();
/* 766736: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766739: xor ebx, ebx */
  ebx = 0;
/* 76673b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76673d: jle 0x766770 */
  if ((zf || sf != of)) goto L_766770;
L_76673f: /* 76673f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 766740: xor ebp, ebp */
  ebp = 0;
L_766742: /* 766742: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 766744: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 766746: mov ecx, esi */
  ecx = esi;
/* 766748: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76674eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76674e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 766750: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 766753: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 766756: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 766758: je 0x766764 */
  if (zf) goto L_766764;
L_76675a: /* 76675a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76675c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76675e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76675f: call 0x6c439a */
  esp -= 4; W32(esp, 0x766764u); SPILL(); f_6c439a(); if (g_unwind) return; RELOAD();
L_766764: /* 766764: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 766767: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 766768: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76676b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76676d: jl 0x766742 */
  if ((sf != of)) goto L_766742;
L_76676f: /* 76676f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_766770: /* 766770: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766771: mov eax, esi */
  eax = esi;
/* 766773: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766774: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 766775: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7667a0(void) {
  LOAD_REGS();
L_7667a0: /* 7667a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7667a2: push 0x9cb0e5 */
  { uint32_t v = 0x9cb0e5u; esp -= 4; W32(esp, v); }
/* 7667a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7667ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7667ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7667b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7667b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7667b7: mov esi, ecx */
  esi = ecx;
/* 7667b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7667bd: mov dword ptr [esi], 0xa064c0 */
  W32((uint32_t)(esi), 0xa064c0u);
/* 7667c3: mov dword ptr [esp + 0x10], 0xd */
  W32((uint32_t)(esp + 0x10u), 0xdu);
/* 7667cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7667d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7667d1: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 7667d7: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 7667dc: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x7667e1u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 7667e1: lea ecx, [esi + 0xf0] */
  ecx = (uint32_t)(esi + 0xf0u);
/* 7667e7: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 7667ec: call 0x6c9250 */
  esp -= 4; W32(esp, 0x7667f1u); SPILL(); f_6c9250(); if (g_unwind) return; RELOAD();
/* 7667f1: lea ecx, [esi + 0xe4] */
  ecx = (uint32_t)(esi + 0xe4u);
/* 7667f7: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 7667fc: call 0x6c15e1 */
  esp -= 4; W32(esp, 0x766801u); SPILL(); f_6c15e1(); if (g_unwind) return; RELOAD();
/* 766801: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* 766807: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 76680c: call 0x6c2946 */
  esp -= 4; W32(esp, 0x766811u); SPILL(); f_6c2946(); if (g_unwind) return; RELOAD();
/* 766811: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 766817: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 76681c: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x766821u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 766821: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 766827: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 76682c: call 0x6c931d */
  esp -= 4; W32(esp, 0x766831u); SPILL(); f_6c931d(); if (g_unwind) return; RELOAD();
/* 766831: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 766837: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 76683c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x766841u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 766841: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 766847: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 76684c: call 0x6c4e4e */
  esp -= 4; W32(esp, 0x766851u); SPILL(); f_6c4e4e(); if (g_unwind) return; RELOAD();
/* 766851: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 766857: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 76685c: call 0x6c91d8 */
  esp -= 4; W32(esp, 0x766861u); SPILL(); f_6c91d8(); if (g_unwind) return; RELOAD();
/* 766861: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 766867: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 76686c: call 0x6c9543 */
  esp -= 4; W32(esp, 0x766871u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 766871: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 766874: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 766879: call 0x6c9543 */
  esp -= 4; W32(esp, 0x76687eu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 76687e: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 766881: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 766886: call 0x6cb839 */
  esp -= 4; W32(esp, 0x76688bu); SPILL(); f_6cb839(); if (g_unwind) return; RELOAD();
/* 76688b: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 76688e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 766893: call 0x6c326f */
  esp -= 4; W32(esp, 0x766898u); SPILL(); f_6c326f(); if (g_unwind) return; RELOAD();
/* 766898: mov ecx, esi */
  ecx = esi;
/* 76689a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7668a2: call 0x6c41ec */
  esp -= 4; W32(esp, 0x7668a7u); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 7668a7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7668ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7668ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7668b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7668b6: ret  */
  esp += 4; SPILL(); return;
}

void f_766910(void) {
  LOAD_REGS();
L_766910: /* 766910: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 766912: push 0x9cb1d5 */
  { uint32_t v = 0x9cb1d5u; esp -= 4; W32(esp, v); }
/* 766917: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76691d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76691e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 766925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766927: mov esi, ecx */
  esi = ecx;
/* 766929: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76692a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 76692e: call 0x6cc93c */
  esp -= 4; W32(esp, 0x766933u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 766933: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 766935: lea edi, [esi + 0x58] */
  edi = (uint32_t)(esi + 0x58u);
/* 766938: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76693a: mov ecx, edi */
  ecx = edi;
/* 76693c: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 766944: mov dword ptr [esi], 0xa064c0 */
  W32((uint32_t)(esi), 0xa064c0u);
/* 76694a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x766950u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 766950: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 766953: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 766955: lea edi, [esi + 0x68] */
  edi = (uint32_t)(esi + 0x68u);
/* 766958: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76695a: mov ecx, edi */
  ecx = edi;
/* 76695c: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 766961: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x766967u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 766967: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 76696a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76696c: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 76696f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 766971: mov ecx, edi */
  ecx = edi;
/* 766973: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 766978: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76697eu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76697e: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 766981: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 766983: lea edi, [esi + 0x88] */
  edi = (uint32_t)(esi + 0x88u);
/* 766989: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76698b: mov ecx, edi */
  ecx = edi;
/* 76698d: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 766992: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x766998u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 766998: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 76699b: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 76699d: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 7669a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7669a5: mov ecx, edi */
  ecx = edi;
/* 7669a7: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 7669ac: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7669b2u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7669b2: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 7669b5: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 7669bb: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 7669c0: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7669c6u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7669c6: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 7669cc: mov byte ptr [esp + 0x14], 6 */
  W8((uint32_t)(esp + 0x14u), 0x6u);
/* 7669d1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7669d7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7669d7: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 7669dd: mov byte ptr [esp + 0x14], 7 */
  W8((uint32_t)(esp + 0x14u), 0x7u);
/* 7669e2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7669e8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7669e8: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 7669ee: mov byte ptr [esp + 0x14], 8 */
  W8((uint32_t)(esp + 0x14u), 0x8u);
/* 7669f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7669f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7669f9: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* 7669ff: mov byte ptr [esp + 0x14], 9 */
  W8((uint32_t)(esp + 0x14u), 0x9u);
/* 766a04: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x766a0au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 766a0a: lea ecx, [esi + 0xe4] */
  ecx = (uint32_t)(esi + 0xe4u);
/* 766a10: mov byte ptr [esp + 0x14], 0xa */
  W8((uint32_t)(esp + 0x14u), 0xau);
/* 766a15: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x766a1bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 766a1b: lea ecx, [esi + 0xf0] */
  ecx = (uint32_t)(esi + 0xf0u);
/* 766a21: mov byte ptr [esp + 0x14], 0xb */
  W8((uint32_t)(esp + 0x14u), 0xbu);
/* 766a26: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x766a2cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 766a2c: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 766a32: mov byte ptr [esp + 0x14], 0xc */
  W8((uint32_t)(esp + 0x14u), 0xcu);
/* 766a37: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x766a3du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 766a3d: mov byte ptr [esp + 0x14], 0xd */
  W8((uint32_t)(esp + 0x14u), 0xdu);
/* 766a42: mov dword ptr [esi + 0x108], 1 */
  W32((uint32_t)(esi + 0x108u), 0x1u);
/* 766a4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 766a4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 766a50: mov ecx, esi */
  ecx = esi;
/* 766a52: call 0x6c380f */
  esp -= 4; W32(esp, 0x766a57u); SPILL(); f_6c380f(); if (g_unwind) return; RELOAD();
/* 766a57: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 766a5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766a5c: mov eax, esi */
  eax = esi;
/* 766a5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766a5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 766a66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 766a69: ret  */
  esp += 4; SPILL(); return;
}

void f_766ad0(void) {
  LOAD_REGS();
L_766ad0: /* 766ad0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 766ad2: push 0x9cb2b7 */
  { uint32_t v = 0x9cb2b7u; esp -= 4; W32(esp, v); }
/* 766ad7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 766add: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766ade: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 766ae5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766ae6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766ae7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 766ae8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766ae9: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 766aed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766aee: mov ebx, ecx */
  ebx = ecx;
/* 766af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766af1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 766af5: call 0x6c67fd */
  esp -= 4; W32(esp, 0x766afau); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 766afa: mov dword ptr [ebx], 0xa064c0 */
  W32((uint32_t)(ebx), 0xa064c0u);
/* 766b00: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 766b03: lea edi, [esi + 0x58] */
  edi = (uint32_t)(esi + 0x58u);
/* 766b06: lea ebp, [ebx + 0x58] */
  ebp = (uint32_t)(ebx + 0x58u);
/* 766b09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766b0a: mov ecx, ebp */
  ecx = ebp;
/* 766b0c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 766b14: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 766b17: call 0x6c2bda */
  esp -= 4; W32(esp, 0x766b1cu); SPILL(); f_6c2bda(); if (g_unwind) return; RELOAD();
/* 766b1c: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 766b1f: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 766b22: lea edi, [esi + 0x68] */
  edi = (uint32_t)(esi + 0x68u);
/* 766b25: lea ebp, [ebx + 0x68] */
  ebp = (uint32_t)(ebx + 0x68u);
/* 766b28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766b29: mov ecx, ebp */
  ecx = ebp;
/* 766b2b: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 766b30: call 0x6cc1ad */
  esp -= 4; W32(esp, 0x766b35u); SPILL(); f_6cc1ad(); if (g_unwind) return; RELOAD();
/* 766b35: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 766b38: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 766b3b: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 766b3e: lea ebp, [ebx + 0x78] */
  ebp = (uint32_t)(ebx + 0x78u);
/* 766b41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766b42: mov ecx, ebp */
  ecx = ebp;
/* 766b44: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 766b49: call 0x6cbbae */
  esp -= 4; W32(esp, 0x766b4eu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 766b4e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 766b51: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 766b54: lea edi, [esi + 0x88] */
  edi = (uint32_t)(esi + 0x88u);
/* 766b5a: lea ebp, [ebx + 0x88] */
  ebp = (uint32_t)(ebx + 0x88u);
/* 766b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766b61: mov ecx, ebp */
  ecx = ebp;
/* 766b63: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 766b68: call 0x6cbbae */
  esp -= 4; W32(esp, 0x766b6du); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 766b6d: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 766b70: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 766b73: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 766b79: lea ebp, [ebx + 0x98] */
  ebp = (uint32_t)(ebx + 0x98u);
/* 766b7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766b80: mov ecx, ebp */
  ecx = ebp;
/* 766b82: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 766b87: call 0x6c4d90 */
  esp -= 4; W32(esp, 0x766b8cu); SPILL(); f_6c4d90(); if (g_unwind) return; RELOAD();
/* 766b8c: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 766b8f: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 766b92: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* 766b98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766b99: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 766b9f: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 766ba4: call 0x6c25ea */
  esp -= 4; W32(esp, 0x766ba9u); SPILL(); f_6c25ea(); if (g_unwind) return; RELOAD();
/* 766ba9: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 766baf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766bb0: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 766bb6: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* 766bbb: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x766bc0u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 766bc0: lea edx, [esi + 0xc0] */
  edx = (uint32_t)(esi + 0xc0u);
/* 766bc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766bc7: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 766bcd: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 766bd2: call 0x6cb80c */
  esp -= 4; W32(esp, 0x766bd7u); SPILL(); f_6cb80c(); if (g_unwind) return; RELOAD();
/* 766bd7: lea eax, [esi + 0xcc] */
  eax = (uint32_t)(esi + 0xccu);
/* 766bdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766bde: lea ecx, [ebx + 0xcc] */
  ecx = (uint32_t)(ebx + 0xccu);
/* 766be4: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 766be9: call 0x6cab5f */
  esp -= 4; W32(esp, 0x766beeu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 766bee: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* 766bf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766bf5: lea ecx, [ebx + 0xd8] */
  ecx = (uint32_t)(ebx + 0xd8u);
/* 766bfb: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 766c00: call 0x6cb2f8 */
  esp -= 4; W32(esp, 0x766c05u); SPILL(); f_6cb2f8(); if (g_unwind) return; RELOAD();
/* 766c05: lea edx, [esi + 0xe4] */
  edx = (uint32_t)(esi + 0xe4u);
/* 766c0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766c0c: lea ecx, [ebx + 0xe4] */
  ecx = (uint32_t)(ebx + 0xe4u);
/* 766c12: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 766c17: call 0x6c8dff */
  esp -= 4; W32(esp, 0x766c1cu); SPILL(); f_6c8dff(); if (g_unwind) return; RELOAD();
/* 766c1c: lea eax, [esi + 0xf0] */
  eax = (uint32_t)(esi + 0xf0u);
/* 766c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766c23: lea ecx, [ebx + 0xf0] */
  ecx = (uint32_t)(ebx + 0xf0u);
/* 766c29: mov byte ptr [esp + 0x20], 0xb */
  W8((uint32_t)(esp + 0x20u), 0xbu);
/* 766c2e: call 0x6c7748 */
  esp -= 4; W32(esp, 0x766c33u); SPILL(); f_6c7748(); if (g_unwind) return; RELOAD();
/* 766c33: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 766c39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766c3a: lea ecx, [ebx + 0xfc] */
  ecx = (uint32_t)(ebx + 0xfcu);
/* 766c40: mov byte ptr [esp + 0x20], 0xc */
  W8((uint32_t)(esp + 0x20u), 0xcu);
/* 766c45: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x766c4au); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 766c4a: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 766c50: mov dword ptr [ebx + 0x108], edx */
  W32((uint32_t)(ebx + 0x108u), edx);
/* 766c56: mov eax, dword ptr [esi + 0x10c] */
  eax = R32((uint32_t)(esi + 0x10cu));
/* 766c5c: mov dword ptr [ebx + 0x10c], eax */
  W32((uint32_t)(ebx + 0x10cu), eax);
/* 766c62: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* 766c68: mov dword ptr [ebx + 0x110], ecx */
  W32((uint32_t)(ebx + 0x110u), ecx);
/* 766c6e: mov edx, dword ptr [esi + 0x114] */
  edx = R32((uint32_t)(esi + 0x114u));
/* 766c74: mov dword ptr [ebx + 0x114], edx */
  W32((uint32_t)(ebx + 0x114u), edx);
/* 766c7a: mov eax, dword ptr [esi + 0x118] */
  eax = R32((uint32_t)(esi + 0x118u));
/* 766c80: mov dword ptr [ebx + 0x118], eax */
  W32((uint32_t)(ebx + 0x118u), eax);
/* 766c86: add esi, 0x11c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 766c8c: lea edi, [ebx + 0x11c] */
  edi = (uint32_t)(ebx + 0x11cu);
/* 766c92: mov ecx, 0x180 */
  ecx = 0x180u;
/* 766c97: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 766c99: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 766c9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766c9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766c9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 766ca0: mov eax, ebx */
  eax = ebx;
/* 766ca2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 766ca3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 766caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 766cad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766d30(void) {
  LOAD_REGS();
L_766d30: /* 766d30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766d31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 766d32: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 766d36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766d37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766d38: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 766d39: mov ebx, ecx */
  ebx = ecx;
/* 766d3b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x766d41u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 766d41: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 766d44: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 766d47: mov ecx, 7 */
  ecx = 0x7u;
/* 766d4c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 766d4e: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 766d51: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 766d53: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 766d56: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 766d58: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 766d5b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 766d5e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 766d61: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 766d64: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 766d67: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 766d6a: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 766d6d: lea edx, [ebp + 0x58] */
  edx = (uint32_t)(ebp + 0x58u);
/* 766d70: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 766d73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766d74: lea ecx, [ebx + 0x58] */
  ecx = (uint32_t)(ebx + 0x58u);
/* 766d77: call 0x6c3a49 */
  esp -= 4; W32(esp, 0x766d7cu); SPILL(); f_6c3a49(); if (g_unwind) return; RELOAD();
/* 766d7c: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 766d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766d80: lea ecx, [ebx + 0x68] */
  ecx = (uint32_t)(ebx + 0x68u);
/* 766d83: call 0x6c78f1 */
  esp -= 4; W32(esp, 0x766d88u); SPILL(); f_6c78f1(); if (g_unwind) return; RELOAD();
/* 766d88: lea ecx, [ebp + 0x78] */
  ecx = (uint32_t)(ebp + 0x78u);
/* 766d8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766d8c: lea ecx, [ebx + 0x78] */
  ecx = (uint32_t)(ebx + 0x78u);
/* 766d8f: call 0x6c8346 */
  esp -= 4; W32(esp, 0x766d94u); SPILL(); f_6c8346(); if (g_unwind) return; RELOAD();
/* 766d94: lea edx, [ebp + 0x88] */
  edx = (uint32_t)(ebp + 0x88u);
/* 766d9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766d9b: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 766da1: call 0x6c8346 */
  esp -= 4; W32(esp, 0x766da6u); SPILL(); f_6c8346(); if (g_unwind) return; RELOAD();
/* 766da6: lea eax, [ebp + 0x98] */
  eax = (uint32_t)(ebp + 0x98u);
/* 766dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766dad: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 766db3: call 0x6c2121 */
  esp -= 4; W32(esp, 0x766db8u); SPILL(); f_6c2121(); if (g_unwind) return; RELOAD();
/* 766db8: lea ecx, [ebp + 0xa8] */
  ecx = (uint32_t)(ebp + 0xa8u);
/* 766dbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766dbf: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 766dc5: call 0x6c4241 */
  esp -= 4; W32(esp, 0x766dcau); SPILL(); f_6c4241(); if (g_unwind) return; RELOAD();
/* 766dca: lea edx, [ebp + 0xb4] */
  edx = (uint32_t)(ebp + 0xb4u);
/* 766dd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766dd1: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 766dd7: call 0x6c5eac */
  esp -= 4; W32(esp, 0x766ddcu); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 766ddc: lea eax, [ebp + 0xc0] */
  eax = (uint32_t)(ebp + 0xc0u);
/* 766de2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766de3: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 766de9: call 0x6c9c05 */
  esp -= 4; W32(esp, 0x766deeu); SPILL(); f_6c9c05(); if (g_unwind) return; RELOAD();
/* 766dee: lea ecx, [ebp + 0xcc] */
  ecx = (uint32_t)(ebp + 0xccu);
/* 766df4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766df5: lea ecx, [ebx + 0xcc] */
  ecx = (uint32_t)(ebx + 0xccu);
/* 766dfb: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x766e00u); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 766e00: lea edx, [ebp + 0xd8] */
  edx = (uint32_t)(ebp + 0xd8u);
/* 766e06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766e07: lea ecx, [ebx + 0xd8] */
  ecx = (uint32_t)(ebx + 0xd8u);
/* 766e0d: call 0x6c3459 */
  esp -= 4; W32(esp, 0x766e12u); SPILL(); f_6c3459(); if (g_unwind) return; RELOAD();
/* 766e12: lea eax, [ebp + 0xe4] */
  eax = (uint32_t)(ebp + 0xe4u);
/* 766e18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766e19: lea ecx, [ebx + 0xe4] */
  ecx = (uint32_t)(ebx + 0xe4u);
/* 766e1f: call 0x6c950c */
  esp -= 4; W32(esp, 0x766e24u); SPILL(); f_6c950c(); if (g_unwind) return; RELOAD();
/* 766e24: lea ecx, [ebp + 0xf0] */
  ecx = (uint32_t)(ebp + 0xf0u);
/* 766e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766e2b: lea ecx, [ebx + 0xf0] */
  ecx = (uint32_t)(ebx + 0xf0u);
/* 766e31: call 0x6c3e31 */
  esp -= 4; W32(esp, 0x766e36u); SPILL(); f_6c3e31(); if (g_unwind) return; RELOAD();
/* 766e36: lea edx, [ebp + 0xfc] */
  edx = (uint32_t)(ebp + 0xfcu);
/* 766e3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 766e3d: lea ecx, [ebx + 0xfc] */
  ecx = (uint32_t)(ebx + 0xfcu);
/* 766e43: call 0x6c5eac */
  esp -= 4; W32(esp, 0x766e48u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 766e48: mov eax, dword ptr [ebp + 0x108] */
  eax = R32((uint32_t)(ebp + 0x108u));
/* 766e4e: mov dword ptr [ebx + 0x108], eax */
  W32((uint32_t)(ebx + 0x108u), eax);
/* 766e54: mov ecx, dword ptr [ebp + 0x10c] */
  ecx = R32((uint32_t)(ebp + 0x10cu));
/* 766e5a: mov dword ptr [ebx + 0x10c], ecx */
  W32((uint32_t)(ebx + 0x10cu), ecx);
/* 766e60: mov edx, dword ptr [ebp + 0x110] */
  edx = R32((uint32_t)(ebp + 0x110u));
/* 766e66: mov dword ptr [ebx + 0x110], edx */
  W32((uint32_t)(ebx + 0x110u), edx);
/* 766e6c: mov eax, dword ptr [ebp + 0x114] */
  eax = R32((uint32_t)(ebp + 0x114u));
/* 766e72: mov dword ptr [ebx + 0x114], eax */
  W32((uint32_t)(ebx + 0x114u), eax);
/* 766e78: mov ecx, dword ptr [ebp + 0x118] */
  ecx = R32((uint32_t)(ebp + 0x118u));
/* 766e7e: mov dword ptr [ebx + 0x118], ecx */
  W32((uint32_t)(ebx + 0x118u), ecx);
/* 766e84: lea eax, [ebx + 0x11c] */
  eax = (uint32_t)(ebx + 0x11cu);
/* 766e8a: sub ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 766e8c: mov edx, 0x40 */
  edx = 0x40u;
L_766e91: /* 766e91: lea esi, [eax + ebp] */
  esi = (uint32_t)(eax + ebp);
/* 766e94: mov edi, eax */
  edi = eax;
/* 766e96: mov ecx, 6 */
  ecx = 0x6u;
/* 766e9b: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 766e9e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 766e9f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 766ea1: jne 0x766e91 */
  if (!zf) goto L_766e91;
L_766ea3: /* 766ea3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766ea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766ea5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 766ea6: mov eax, ebx */
  eax = ebx;
/* 766ea8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 766ea9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766f10(void) {
  LOAD_REGS();
L_766f10: /* 766f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766f11: mov esi, ecx */
  esi = ecx;
/* 766f13: call 0x6cb85c */
  esp -= 4; W32(esp, 0x766f18u); SPILL(); f_6cb85c(); if (g_unwind) return; RELOAD();
/* 766f18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 766f1d: je 0x766f2e */
  if (zf) goto L_766f2e;
L_766f1f: /* 766f1f: push 0x71c */
  { uint32_t v = 0x71cu; esp -= 4; W32(esp, v); }
/* 766f24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766f25: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x766f2bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 766f2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_766f2e: /* 766f2e: mov eax, esi */
  eax = esi;
/* 766f30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766f31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766f50(void) {
  LOAD_REGS();
L_766f50: /* 766f50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 766f51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 766f55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 766f58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766f59: mov esi, ecx */
  esi = ecx;
/* 766f5b: je 0x766f90 */
  if (zf) goto L_766f90;
L_766f5d: /* 766f5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 766f60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766f61: push 0x6cb85c */
  { uint32_t v = 0x6cb85cu; esp -= 4; W32(esp, v); }
/* 766f66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 766f69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766f6a: push 0x71c */
  { uint32_t v = 0x71cu; esp -= 4; W32(esp, v); }
/* 766f6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766f70: call 0x99ca3d */
  esp -= 4; W32(esp, 0x766f75u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 766f75: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 766f78: je 0x766f88 */
  if (zf) goto L_766f88;
L_766f7a: /* 766f7a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 766f80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 766f82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 766f84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 766f85: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x766f88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_766f88: /* 766f88: mov eax, edi */
  eax = edi;
/* 766f8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 766f8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766f8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 766f8d: ret 4 */
  esp += 8; SPILL(); return;
L_766f90: /* 766f90: mov ecx, esi */
  ecx = esi;
/* 766f92: call 0x6cb85c */
  esp -= 4; W32(esp, 0x766f97u); SPILL(); f_6cb85c(); if (g_unwind) return; RELOAD();
/* 766f97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 766f9a: je 0x766fab */
  if (zf) goto L_766fab;
L_766f9c: /* 766f9c: push 0x71c */
  { uint32_t v = 0x71cu; esp -= 4; W32(esp, v); }
/* 766fa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766fa2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x766fa8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 766fa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_766fab: /* 766fab: mov eax, esi */
  eax = esi;
/* 766fad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 766fae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 766faf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_766fe0(void) {
  LOAD_REGS();
L_766fe0: /* 766fe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 766fe2: push 0x9cb428 */
  { uint32_t v = 0x9cb428u; esp -= 4; W32(esp, v); }
/* 766fe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 766fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 766fee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 766ff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 766ff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 766ff7: mov esi, ecx */
  esi = ecx;
/* 766ff9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 766ffd: mov dword ptr [esi], 0xa06568 */
  W32((uint32_t)(esi), 0xa06568u);
/* 767003: mov dword ptr [esp + 0x10], 0x15 */
  W32((uint32_t)(esp + 0x10u), 0x15u);
/* 76700b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x767011u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 767011: lea ecx, [esi + 0x328] */
  ecx = (uint32_t)(esi + 0x328u);
/* 767017: mov byte ptr [esp + 0x10], 0x14 */
  W8((uint32_t)(esp + 0x10u), 0x14u);
/* 76701c: call 0x6c7374 */
  esp -= 4; W32(esp, 0x767021u); SPILL(); f_6c7374(); if (g_unwind) return; RELOAD();
/* 767021: lea ecx, [esi + 0x31c] */
  ecx = (uint32_t)(esi + 0x31cu);
/* 767027: mov byte ptr [esp + 0x10], 0x13 */
  W8((uint32_t)(esp + 0x10u), 0x13u);
/* 76702c: call 0x6c34a4 */
  esp -= 4; W32(esp, 0x767031u); SPILL(); f_6c34a4(); if (g_unwind) return; RELOAD();
/* 767031: lea ecx, [esi + 0x310] */
  ecx = (uint32_t)(esi + 0x310u);
/* 767037: mov byte ptr [esp + 0x10], 0x12 */
  W8((uint32_t)(esp + 0x10u), 0x12u);
/* 76703c: call 0x6c4a43 */
  esp -= 4; W32(esp, 0x767041u); SPILL(); f_6c4a43(); if (g_unwind) return; RELOAD();
/* 767041: lea ecx, [esi + 0x304] */
  ecx = (uint32_t)(esi + 0x304u);
/* 767047: mov byte ptr [esp + 0x10], 0x11 */
  W8((uint32_t)(esp + 0x10u), 0x11u);
/* 76704c: call 0x6c31ac */
  esp -= 4; W32(esp, 0x767051u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 767051: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 767057: mov byte ptr [esp + 0x10], 0x10 */
  W8((uint32_t)(esp + 0x10u), 0x10u);
/* 76705c: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x767061u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 767061: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* 767067: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 76706c: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x767071u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 767071: lea ecx, [esi + 0x2e0] */
  ecx = (uint32_t)(esi + 0x2e0u);
/* 767077: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 76707c: call 0x6cc0f4 */
  esp -= 4; W32(esp, 0x767081u); SPILL(); f_6cc0f4(); if (g_unwind) return; RELOAD();
/* 767081: lea ecx, [esi + 0x2d4] */
  ecx = (uint32_t)(esi + 0x2d4u);
/* 767087: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 76708c: call 0x6c31ac */
  esp -= 4; W32(esp, 0x767091u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 767091: push 0x6c880a */
  { uint32_t v = 0x6c880au; esp -= 4; W32(esp, v); }
/* 767096: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 767098: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 76709a: lea eax, [esi + 0x224] */
  eax = (uint32_t)(esi + 0x224u);
/* 7670a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7670a1: mov byte ptr [esp + 0x20], 0xc */
  W8((uint32_t)(esp + 0x20u), 0xcu);
/* 7670a6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7670abu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7670ab: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 7670b1: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 7670b6: call 0x6c2dbf */
  esp -= 4; W32(esp, 0x7670bbu); SPILL(); f_6c2dbf(); if (g_unwind) return; RELOAD();
/* 7670bb: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* 7670c1: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 7670c6: call 0x6c5439 */
  esp -= 4; W32(esp, 0x7670cbu); SPILL(); f_6c5439(); if (g_unwind) return; RELOAD();
/* 7670cb: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 7670d1: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 7670d6: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7670dbu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7670db: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* 7670e1: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 7670e6: call 0x6c340e */
  esp -= 4; W32(esp, 0x7670ebu); SPILL(); f_6c340e(); if (g_unwind) return; RELOAD();
/* 7670eb: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 7670f1: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 7670f6: call 0x6c4926 */
  esp -= 4; W32(esp, 0x7670fbu); SPILL(); f_6c4926(); if (g_unwind) return; RELOAD();
/* 7670fb: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 767101: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 767106: call 0x6c9205 */
  esp -= 4; W32(esp, 0x76710bu); SPILL(); f_6c9205(); if (g_unwind) return; RELOAD();
/* 76710b: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 767111: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 767116: call 0x6c9205 */
  esp -= 4; W32(esp, 0x76711bu); SPILL(); f_6c9205(); if (g_unwind) return; RELOAD();
/* 76711b: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 767120: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 767126: call 0x6c26e9 */
  esp -= 4; W32(esp, 0x76712bu); SPILL(); f_6c26e9(); if (g_unwind) return; RELOAD();
/* 76712b: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 767131: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 767136: call 0x6cc2d4 */
  esp -= 4; W32(esp, 0x76713bu); SPILL(); f_6cc2d4(); if (g_unwind) return; RELOAD();
/* 76713b: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 767141: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 767146: call 0x6c2dd8 */
  esp -= 4; W32(esp, 0x76714bu); SPILL(); f_6c2dd8(); if (g_unwind) return; RELOAD();
/* 76714b: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 767151: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 767156: call 0x6c4660 */
  esp -= 4; W32(esp, 0x76715bu); SPILL(); f_6c4660(); if (g_unwind) return; RELOAD();
/* 76715b: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 767161: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 767166: call 0x6c89c7 */
  esp -= 4; W32(esp, 0x76716bu); SPILL(); f_6c89c7(); if (g_unwind) return; RELOAD();
/* 76716b: mov ecx, esi */
  ecx = esi;
/* 76716d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 767175: call 0x6ccd47 */
  esp -= 4; W32(esp, 0x76717au); SPILL(); f_6ccd47(); if (g_unwind) return; RELOAD();
/* 76717a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76717e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76717f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 767186: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 767189: ret  */
  esp += 4; SPILL(); return;
}

void f_767200(void) {
  LOAD_REGS();
L_767200: /* 767200: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 767202: push 0x9cb5ba */
  { uint32_t v = 0x9cb5bau; esp -= 4; W32(esp, v); }
/* 767207: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76720d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76720e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 767215: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767216: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767217: mov esi, ecx */
  esi = ecx;
/* 767219: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76721a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 76721e: call 0x6c292d */
  esp -= 4; W32(esp, 0x767223u); SPILL(); f_6c292d(); if (g_unwind) return; RELOAD();
/* 767223: xor edi, edi */
  edi = 0;
/* 767225: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 767227: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 76722d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76722e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 767232: mov dword ptr [esi], 0xa06568 */
  W32((uint32_t)(esi), 0xa06568u);
/* 767238: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76723eu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76723e: mov dword ptr [esi + 0x138], edi */
  W32((uint32_t)(esi + 0x138u), edi);
/* 767244: mov dword ptr [esi + 0x13c], edi */
  W32((uint32_t)(esi + 0x13cu), edi);
/* 76724a: mov dword ptr [esi + 0x134], 0x9f83e0 */
  W32((uint32_t)(esi + 0x134u), 0x9f83e0u);
/* 767254: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 767256: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 76725c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76725d: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 767262: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x767268u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 767268: mov dword ptr [esi + 0x150], edi */
  W32((uint32_t)(esi + 0x150u), edi);
/* 76726e: mov dword ptr [esi + 0x154], edi */
  W32((uint32_t)(esi + 0x154u), edi);
/* 767274: mov dword ptr [esi + 0x14c], 0x9f9268 */
  W32((uint32_t)(esi + 0x14cu), 0x9f9268u);
/* 76727e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 767280: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 767286: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767287: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 76728c: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x767292u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 767292: mov dword ptr [esi + 0x168], edi */
  W32((uint32_t)(esi + 0x168u), edi);
/* 767298: mov dword ptr [esi + 0x16c], edi */
  W32((uint32_t)(esi + 0x16cu), edi);
/* 76729e: mov dword ptr [esi + 0x164], 0x9f8368 */
  W32((uint32_t)(esi + 0x164u), 0x9f8368u);
/* 7672a8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7672aa: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 7672b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7672b1: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 7672b6: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7672bcu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7672bc: mov dword ptr [esi + 0x180], edi */
  W32((uint32_t)(esi + 0x180u), edi);
/* 7672c2: mov dword ptr [esi + 0x184], edi */
  W32((uint32_t)(esi + 0x184u), edi);
/* 7672c8: mov dword ptr [esi + 0x17c], 0x9f8480 */
  W32((uint32_t)(esi + 0x17cu), 0x9f8480u);
/* 7672d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7672d4: lea ecx, [esi + 0x1a0] */
  ecx = (uint32_t)(esi + 0x1a0u);
/* 7672da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7672db: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 7672e0: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7672e6u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7672e6: mov dword ptr [esi + 0x198], edi */
  W32((uint32_t)(esi + 0x198u), edi);
/* 7672ec: mov dword ptr [esi + 0x19c], edi */
  W32((uint32_t)(esi + 0x19cu), edi);
/* 7672f2: mov dword ptr [esi + 0x194], 0x9f92a4 */
  W32((uint32_t)(esi + 0x194u), 0x9f92a4u);
/* 7672fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7672fd: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 767303: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 767308: call dword ptr [0xcfa39c] */
  esp -= 4; W32(esp, 0x76730eu); SPILL(); f_4e1082(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@H@Z */ RELOAD();
/* 76730e: mov dword ptr [esi + 0x1b0], edi */
  W32((uint32_t)(esi + 0x1b0u), edi);
/* 767314: mov dword ptr [esi + 0x1b4], edi */
  W32((uint32_t)(esi + 0x1b4u), edi);
/* 76731a: mov dword ptr [esi + 0x1ac], 0x9f76ac */
  W32((uint32_t)(esi + 0x1acu), 0x9f76acu);
/* 767324: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767325: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 76732b: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 767330: call dword ptr [0xcfa39c] */
  esp -= 4; W32(esp, 0x767336u); SPILL(); f_4e1082(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@H@Z */ RELOAD();
/* 767336: mov dword ptr [esi + 0x1c8], edi */
  W32((uint32_t)(esi + 0x1c8u), edi);
/* 76733c: mov dword ptr [esi + 0x1cc], edi */
  W32((uint32_t)(esi + 0x1ccu), edi);
/* 767342: mov dword ptr [esi + 0x1c4], 0x9f76ac */
  W32((uint32_t)(esi + 0x1c4u), 0x9f76acu);
/* 76734c: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 767352: mov byte ptr [esp + 0x14], 7 */
  W8((uint32_t)(esp + 0x14u), 0x7u);
/* 767357: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76735du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76735d: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* 767363: mov byte ptr [esp + 0x14], 8 */
  W8((uint32_t)(esp + 0x14u), 0x8u);
/* 767368: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76736eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76736e: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 767374: mov byte ptr [esp + 0x14], 9 */
  W8((uint32_t)(esp + 0x14u), 0x9u);
/* 767379: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76737fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76737f: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* 767385: mov byte ptr [esp + 0x14], 0xa */
  W8((uint32_t)(esp + 0x14u), 0xau);
/* 76738a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x767390u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 767390: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 767396: mov byte ptr [esp + 0x14], 0xb */
  W8((uint32_t)(esp + 0x14u), 0xbu);
/* 76739b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7673a1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7673a1: push 0x6c880a */
  { uint32_t v = 0x6c880au; esp -= 4; W32(esp, v); }
/* 7673a6: push 0x6cadb2 */
  { uint32_t v = 0x6cadb2u; esp -= 4; W32(esp, v); }
/* 7673ab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7673ad: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7673af: lea eax, [esi + 0x224] */
  eax = (uint32_t)(esi + 0x224u);
/* 7673b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7673b6: mov byte ptr [esp + 0x28], 0xc */
  W8((uint32_t)(esp + 0x28u), 0xcu);
/* 7673bb: call 0x99cafe */
  esp -= 4; W32(esp, 0x7673c0u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 7673c0: lea ecx, [esi + 0x2d4] */
  ecx = (uint32_t)(esi + 0x2d4u);
/* 7673c6: mov byte ptr [esp + 0x14], 0xd */
  W8((uint32_t)(esp + 0x14u), 0xdu);
/* 7673cb: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7673d1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7673d1: lea ecx, [esi + 0x2e0] */
  ecx = (uint32_t)(esi + 0x2e0u);
/* 7673d7: mov byte ptr [esp + 0x14], 0xe */
  W8((uint32_t)(esp + 0x14u), 0xeu);
/* 7673dc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7673e2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7673e2: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* 7673e8: mov byte ptr [esp + 0x14], 0xf */
  W8((uint32_t)(esp + 0x14u), 0xfu);
/* 7673ed: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7673f3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7673f3: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 7673f9: mov byte ptr [esp + 0x14], 0x10 */
  W8((uint32_t)(esp + 0x14u), 0x10u);
/* 7673fe: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x767404u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 767404: lea ecx, [esi + 0x304] */
  ecx = (uint32_t)(esi + 0x304u);
/* 76740a: mov byte ptr [esp + 0x14], 0x11 */
  W8((uint32_t)(esp + 0x14u), 0x11u);
/* 76740f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x767415u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 767415: lea ecx, [esi + 0x310] */
  ecx = (uint32_t)(esi + 0x310u);
/* 76741b: mov byte ptr [esp + 0x14], 0x12 */
  W8((uint32_t)(esp + 0x14u), 0x12u);
/* 767420: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x767426u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 767426: lea ecx, [esi + 0x31c] */
  ecx = (uint32_t)(esi + 0x31cu);
/* 76742c: mov byte ptr [esp + 0x14], 0x13 */
  W8((uint32_t)(esp + 0x14u), 0x13u);
/* 767431: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x767437u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 767437: lea ecx, [esi + 0x328] */
  ecx = (uint32_t)(esi + 0x328u);
/* 76743d: mov byte ptr [esp + 0x14], 0x14 */
  W8((uint32_t)(esp + 0x14u), 0x14u);
/* 767442: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x767448u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 767448: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 76744c: mov dword ptr [esi + 0x21c], edi */
  W32((uint32_t)(esi + 0x21cu), edi);
/* 767452: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 767453: mov eax, esi */
  eax = esi;
/* 767455: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767456: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76745d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 767460: ret  */
  esp += 4; SPILL(); return;
}

void f_767510(void) {
  LOAD_REGS();
L_767510: /* 767510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 767512: push 0x9cb732 */
  { uint32_t v = 0x9cb732u; esp -= 4; W32(esp, v); }
/* 767517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76751d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76751e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 767525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767526: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 767527: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 767528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767529: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76752a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 76752e: mov esi, ecx */
  esi = ecx;
/* 767530: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767531: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 767535: call 0x6c6e24 */
  esp -= 4; W32(esp, 0x76753au); SPILL(); f_6c6e24(); if (g_unwind) return; RELOAD();
/* 76753a: xor eax, eax */
  eax = 0;
/* 76753c: lea ebx, [edi + 0x134] */
  ebx = (uint32_t)(edi + 0x134u);
/* 767542: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 767544: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 767548: mov dword ptr [esi], 0xa06568 */
  W32((uint32_t)(esi), 0xa06568u);
/* 76754e: je 0x767553 */
  if (zf) goto L_767553;
L_767550: /* 767550: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
L_767553: /* 767553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767554: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 76755a: call 0x6cbbae */
  esp -= 4; W32(esp, 0x76755fu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 76755f: mov ebp, 0x9f401c */
  ebp = 0x9f401cu;
/* 767564: mov dword ptr [esi + 0x134], ebp */
  W32((uint32_t)(esi + 0x134u), ebp);
/* 76756a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 76756d: mov dword ptr [esi + 0x138], eax */
  W32((uint32_t)(esi + 0x138u), eax);
/* 767573: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 767576: mov dword ptr [esi + 0x13c], ecx */
  W32((uint32_t)(esi + 0x13cu), ecx);
/* 76757c: mov dword ptr [esi + 0x134], 0x9f83e0 */
  W32((uint32_t)(esi + 0x134u), 0x9f83e0u);
/* 767586: lea ebx, [edi + 0x14c] */
  ebx = (uint32_t)(edi + 0x14cu);
/* 76758c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76758e: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 767593: je 0x76759a */
  if (zf) goto L_76759a;
L_767595: /* 767595: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767598: jmp 0x76759c */
  goto L_76759c;
L_76759a: /* 76759a: xor eax, eax */
  eax = 0;
L_76759c: /* 76759c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76759d: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 7675a3: call 0x6c7716 */
  esp -= 4; W32(esp, 0x7675a8u); SPILL(); f_6c7716(); if (g_unwind) return; RELOAD();
/* 7675a8: mov dword ptr [esi + 0x14c], ebp */
  W32((uint32_t)(esi + 0x14cu), ebp);
/* 7675ae: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 7675b1: mov dword ptr [esi + 0x150], edx */
  W32((uint32_t)(esi + 0x150u), edx);
/* 7675b7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 7675ba: mov dword ptr [esi + 0x154], eax */
  W32((uint32_t)(esi + 0x154u), eax);
/* 7675c0: mov dword ptr [esi + 0x14c], 0x9f9268 */
  W32((uint32_t)(esi + 0x14cu), 0x9f9268u);
/* 7675ca: lea ebx, [edi + 0x164] */
  ebx = (uint32_t)(edi + 0x164u);
/* 7675d0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7675d2: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 7675d7: je 0x7675de */
  if (zf) goto L_7675de;
L_7675d9: /* 7675d9: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 7675dc: jmp 0x7675e0 */
  goto L_7675e0;
L_7675de: /* 7675de: xor eax, eax */
  eax = 0;
L_7675e0: /* 7675e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7675e1: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7675e7: call 0x6c2a81 */
  esp -= 4; W32(esp, 0x7675ecu); SPILL(); f_6c2a81(); if (g_unwind) return; RELOAD();
/* 7675ec: mov dword ptr [esi + 0x164], ebp */
  W32((uint32_t)(esi + 0x164u), ebp);
/* 7675f2: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7675f5: mov dword ptr [esi + 0x168], ecx */
  W32((uint32_t)(esi + 0x168u), ecx);
/* 7675fb: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 7675fe: mov dword ptr [esi + 0x16c], edx */
  W32((uint32_t)(esi + 0x16cu), edx);
/* 767604: mov dword ptr [esi + 0x164], 0x9f8368 */
  W32((uint32_t)(esi + 0x164u), 0x9f8368u);
/* 76760e: lea ebx, [edi + 0x17c] */
  ebx = (uint32_t)(edi + 0x17cu);
/* 767614: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 767616: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 76761b: je 0x767622 */
  if (zf) goto L_767622;
L_76761d: /* 76761d: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767620: jmp 0x767624 */
  goto L_767624;
L_767622: /* 767622: xor eax, eax */
  eax = 0;
L_767624: /* 767624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767625: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 76762b: call 0x6c7838 */
  esp -= 4; W32(esp, 0x767630u); SPILL(); f_6c7838(); if (g_unwind) return; RELOAD();
/* 767630: mov dword ptr [esi + 0x17c], ebp */
  W32((uint32_t)(esi + 0x17cu), ebp);
/* 767636: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 767639: mov dword ptr [esi + 0x180], eax */
  W32((uint32_t)(esi + 0x180u), eax);
/* 76763f: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 767642: mov dword ptr [esi + 0x184], ecx */
  W32((uint32_t)(esi + 0x184u), ecx);
/* 767648: mov dword ptr [esi + 0x17c], 0x9f8480 */
  W32((uint32_t)(esi + 0x17cu), 0x9f8480u);
/* 767652: lea ebx, [edi + 0x194] */
  ebx = (uint32_t)(edi + 0x194u);
/* 767658: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76765a: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 76765f: je 0x767666 */
  if (zf) goto L_767666;
L_767661: /* 767661: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767664: jmp 0x767668 */
  goto L_767668;
L_767666: /* 767666: xor eax, eax */
  eax = 0;
L_767668: /* 767668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767669: lea ecx, [esi + 0x1a0] */
  ecx = (uint32_t)(esi + 0x1a0u);
/* 76766f: call 0x6c1b59 */
  esp -= 4; W32(esp, 0x767674u); SPILL(); f_6c1b59(); if (g_unwind) return; RELOAD();
/* 767674: mov dword ptr [esi + 0x194], ebp */
  W32((uint32_t)(esi + 0x194u), ebp);
/* 76767a: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 76767d: mov dword ptr [esi + 0x198], edx */
  W32((uint32_t)(esi + 0x198u), edx);
/* 767683: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 767686: mov dword ptr [esi + 0x19c], eax */
  W32((uint32_t)(esi + 0x19cu), eax);
/* 76768c: mov dword ptr [esi + 0x194], 0x9f92a4 */
  W32((uint32_t)(esi + 0x194u), 0x9f92a4u);
/* 767696: lea ebx, [edi + 0x1ac] */
  ebx = (uint32_t)(edi + 0x1acu);
/* 76769c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76769e: mov byte ptr [esp + 0x1c], 5 */
  W8((uint32_t)(esp + 0x1cu), 0x5u);
/* 7676a3: je 0x7676aa */
  if (zf) goto L_7676aa;
L_7676a5: /* 7676a5: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 7676a8: jmp 0x7676ac */
  goto L_7676ac;
L_7676aa: /* 7676aa: xor eax, eax */
  eax = 0;
L_7676ac: /* 7676ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7676ad: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 7676b3: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x7676b9u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 7676b9: mov dword ptr [esi + 0x1ac], ebp */
  W32((uint32_t)(esi + 0x1acu), ebp);
/* 7676bf: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 7676c2: mov dword ptr [esi + 0x1b0], ecx */
  W32((uint32_t)(esi + 0x1b0u), ecx);
/* 7676c8: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 7676cb: mov dword ptr [esi + 0x1b4], edx */
  W32((uint32_t)(esi + 0x1b4u), edx);
/* 7676d1: mov dword ptr [esi + 0x1ac], 0x9f76ac */
  W32((uint32_t)(esi + 0x1acu), 0x9f76acu);
/* 7676db: lea ebx, [edi + 0x1c4] */
  ebx = (uint32_t)(edi + 0x1c4u);
/* 7676e1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7676e3: mov byte ptr [esp + 0x1c], 6 */
  W8((uint32_t)(esp + 0x1cu), 0x6u);
/* 7676e8: je 0x7676ef */
  if (zf) goto L_7676ef;
L_7676ea: /* 7676ea: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 7676ed: jmp 0x7676f1 */
  goto L_7676f1;
L_7676ef: /* 7676ef: xor eax, eax */
  eax = 0;
L_7676f1: /* 7676f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7676f2: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 7676f8: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x7676feu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 7676fe: mov dword ptr [esi + 0x1c4], ebp */
  W32((uint32_t)(esi + 0x1c4u), ebp);
/* 767704: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 767707: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 76770d: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 767710: mov dword ptr [esi + 0x1cc], ecx */
  W32((uint32_t)(esi + 0x1ccu), ecx);
/* 767716: mov dword ptr [esi + 0x1c4], 0x9f76ac */
  W32((uint32_t)(esi + 0x1c4u), 0x9f76acu);
/* 767720: lea edx, [edi + 0x1dc] */
  edx = (uint32_t)(edi + 0x1dcu);
/* 767726: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767727: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 76772d: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 767732: call 0x6c3724 */
  esp -= 4; W32(esp, 0x767737u); SPILL(); f_6c3724(); if (g_unwind) return; RELOAD();
/* 767737: mov eax, dword ptr [edi + 0x1e8] */
  eax = R32((uint32_t)(edi + 0x1e8u));
/* 76773d: lea ecx, [edi + 0x1ec] */
  ecx = (uint32_t)(edi + 0x1ecu);
/* 767743: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767744: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* 76774a: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 76774f: mov dword ptr [esi + 0x1e8], eax */
  W32((uint32_t)(esi + 0x1e8u), eax);
/* 767755: call 0x6ca830 */
  esp -= 4; W32(esp, 0x76775au); SPILL(); f_6ca830(); if (g_unwind) return; RELOAD();
/* 76775a: lea edx, [edi + 0x1f8] */
  edx = (uint32_t)(edi + 0x1f8u);
/* 767760: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767761: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 767767: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 76776c: call 0x6cbbae */
  esp -= 4; W32(esp, 0x767771u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 767771: lea eax, [edi + 0x204] */
  eax = (uint32_t)(edi + 0x204u);
/* 767777: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767778: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* 76777e: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 767783: call 0x6cbf73 */
  esp -= 4; W32(esp, 0x767788u); SPILL(); f_6cbf73(); if (g_unwind) return; RELOAD();
/* 767788: lea ecx, [edi + 0x210] */
  ecx = (uint32_t)(edi + 0x210u);
/* 76778e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76778f: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 767795: mov byte ptr [esp + 0x20], 0xb */
  W8((uint32_t)(esp + 0x20u), 0xbu);
/* 76779a: call 0x6c529f */
  esp -= 4; W32(esp, 0x76779fu); SPILL(); f_6c529f(); if (g_unwind) return; RELOAD();
/* 76779f: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* 7677a5: push 0x6c880a */
  { uint32_t v = 0x6c880au; esp -= 4; W32(esp, v); }
/* 7677aa: push 0x6c37ba */
  { uint32_t v = 0x6c37bau; esp -= 4; W32(esp, v); }
/* 7677af: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7677b1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7677b3: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* 7677b9: mov eax, dword ptr [edi + 0x220] */
  eax = R32((uint32_t)(edi + 0x220u));
/* 7677bf: lea ecx, [edi + 0x224] */
  ecx = (uint32_t)(edi + 0x224u);
/* 7677c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7677c6: lea edx, [esi + 0x224] */
  edx = (uint32_t)(esi + 0x224u);
/* 7677cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7677cd: mov byte ptr [esp + 0x34], 0xc */
  W8((uint32_t)(esp + 0x34u), 0xcu);
/* 7677d2: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* 7677d8: call 0x99cb60 */
  esp -= 4; W32(esp, 0x7677ddu); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 7677dd: lea eax, [edi + 0x2d4] */
  eax = (uint32_t)(edi + 0x2d4u);
/* 7677e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7677e4: lea ecx, [esi + 0x2d4] */
  ecx = (uint32_t)(esi + 0x2d4u);
/* 7677ea: call 0x6c3689 */
  esp -= 4; W32(esp, 0x7677efu); SPILL(); f_6c3689(); if (g_unwind) return; RELOAD();
/* 7677ef: lea ecx, [edi + 0x2e0] */
  ecx = (uint32_t)(edi + 0x2e0u);
/* 7677f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7677f6: lea ecx, [esi + 0x2e0] */
  ecx = (uint32_t)(esi + 0x2e0u);
/* 7677fc: mov byte ptr [esp + 0x20], 0xd */
  W8((uint32_t)(esp + 0x20u), 0xdu);
/* 767801: call 0x6c306c */
  esp -= 4; W32(esp, 0x767806u); SPILL(); f_6c306c(); if (g_unwind) return; RELOAD();
/* 767806: lea edx, [edi + 0x2ec] */
  edx = (uint32_t)(edi + 0x2ecu);
/* 76780c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76780d: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* 767813: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 767818: call 0x6c463d */
  esp -= 4; W32(esp, 0x76781du); SPILL(); f_6c463d(); if (g_unwind) return; RELOAD();
/* 76781d: lea eax, [edi + 0x2f8] */
  eax = (uint32_t)(edi + 0x2f8u);
/* 767823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767824: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 76782a: mov byte ptr [esp + 0x20], 0xf */
  W8((uint32_t)(esp + 0x20u), 0xfu);
/* 76782f: call 0x6c463d */
  esp -= 4; W32(esp, 0x767834u); SPILL(); f_6c463d(); if (g_unwind) return; RELOAD();
/* 767834: mov byte ptr [esp + 0x1c], 0x10 */
  W8((uint32_t)(esp + 0x1cu), 0x10u);
/* 767839: lea ecx, [edi + 0x304] */
  ecx = (uint32_t)(edi + 0x304u);
/* 76783f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767840: lea ecx, [esi + 0x304] */
  ecx = (uint32_t)(esi + 0x304u);
/* 767846: call 0x6c3689 */
  esp -= 4; W32(esp, 0x76784bu); SPILL(); f_6c3689(); if (g_unwind) return; RELOAD();
/* 76784b: lea edx, [edi + 0x310] */
  edx = (uint32_t)(edi + 0x310u);
/* 767851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767852: lea ecx, [esi + 0x310] */
  ecx = (uint32_t)(esi + 0x310u);
/* 767858: mov byte ptr [esp + 0x20], 0x11 */
  W8((uint32_t)(esp + 0x20u), 0x11u);
/* 76785d: call 0x6c21b2 */
  esp -= 4; W32(esp, 0x767862u); SPILL(); f_6c21b2(); if (g_unwind) return; RELOAD();
/* 767862: lea eax, [edi + 0x31c] */
  eax = (uint32_t)(edi + 0x31cu);
/* 767868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767869: lea ecx, [esi + 0x31c] */
  ecx = (uint32_t)(esi + 0x31cu);
/* 76786f: mov byte ptr [esp + 0x20], 0x12 */
  W8((uint32_t)(esp + 0x20u), 0x12u);
/* 767874: call 0x6caf2e */
  esp -= 4; W32(esp, 0x767879u); SPILL(); f_6caf2e(); if (g_unwind) return; RELOAD();
/* 767879: lea ecx, [edi + 0x328] */
  ecx = (uint32_t)(edi + 0x328u);
/* 76787f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767880: lea ecx, [esi + 0x328] */
  ecx = (uint32_t)(esi + 0x328u);
/* 767886: mov byte ptr [esp + 0x20], 0x13 */
  W8((uint32_t)(esp + 0x20u), 0x13u);
/* 76788b: call 0x6c1163 */
  esp -= 4; W32(esp, 0x767890u); SPILL(); f_6c1163(); if (g_unwind) return; RELOAD();
/* 767890: mov edx, dword ptr [edi + 0x334] */
  edx = R32((uint32_t)(edi + 0x334u));
/* 767896: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 76789a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76789b: mov dword ptr [esi + 0x334], edx */
  W32((uint32_t)(esi + 0x334u), edx);
/* 7678a1: mov eax, esi */
  eax = esi;
/* 7678a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7678a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7678a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7678a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7678ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7678b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7679b0(void) {
  LOAD_REGS();
L_7679b0: /* 7679b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7679b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7679b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7679b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7679b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7679b5: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 7679b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7679ba: mov esi, ecx */
  esi = ecx;
/* 7679bc: call 0x6c3e1d */
  esp -= 4; W32(esp, 0x7679c1u); SPILL(); f_6c3e1d(); if (g_unwind) return; RELOAD();
/* 7679c1: lea ebx, [edi + 0x134] */
  ebx = (uint32_t)(edi + 0x134u);
/* 7679c7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7679c9: je 0x7679d0 */
  if (zf) goto L_7679d0;
L_7679cb: /* 7679cb: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 7679ce: jmp 0x7679d2 */
  goto L_7679d2;
L_7679d0: /* 7679d0: xor eax, eax */
  eax = 0;
L_7679d2: /* 7679d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7679d3: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 7679d9: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x7679deu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 7679de: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7679e1: mov dword ptr [esi + 0x138], eax */
  W32((uint32_t)(esi + 0x138u), eax);
/* 7679e7: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7679ea: lea ebx, [edi + 0x14c] */
  ebx = (uint32_t)(edi + 0x14cu);
/* 7679f0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7679f2: mov dword ptr [esi + 0x13c], ecx */
  W32((uint32_t)(esi + 0x13cu), ecx);
/* 7679f8: je 0x7679ff */
  if (zf) goto L_7679ff;
L_7679fa: /* 7679fa: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 7679fd: jmp 0x767a01 */
  goto L_767a01;
L_7679ff: /* 7679ff: xor eax, eax */
  eax = 0;
L_767a01: /* 767a01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767a02: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 767a08: call 0x6c4197 */
  esp -= 4; W32(esp, 0x767a0du); SPILL(); f_6c4197(); if (g_unwind) return; RELOAD();
/* 767a0d: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 767a10: mov dword ptr [esi + 0x150], edx */
  W32((uint32_t)(esi + 0x150u), edx);
/* 767a16: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 767a19: lea ebx, [edi + 0x164] */
  ebx = (uint32_t)(edi + 0x164u);
/* 767a1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 767a21: mov dword ptr [esi + 0x154], eax */
  W32((uint32_t)(esi + 0x154u), eax);
/* 767a27: je 0x767a2e */
  if (zf) goto L_767a2e;
L_767a29: /* 767a29: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767a2c: jmp 0x767a30 */
  goto L_767a30;
L_767a2e: /* 767a2e: xor eax, eax */
  eax = 0;
L_767a30: /* 767a30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767a31: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 767a37: call 0x6c9606 */
  esp -= 4; W32(esp, 0x767a3cu); SPILL(); f_6c9606(); if (g_unwind) return; RELOAD();
/* 767a3c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 767a3f: mov dword ptr [esi + 0x168], ecx */
  W32((uint32_t)(esi + 0x168u), ecx);
/* 767a45: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 767a48: lea ebx, [edi + 0x17c] */
  ebx = (uint32_t)(edi + 0x17cu);
/* 767a4e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 767a50: mov dword ptr [esi + 0x16c], edx */
  W32((uint32_t)(esi + 0x16cu), edx);
/* 767a56: je 0x767a5d */
  if (zf) goto L_767a5d;
L_767a58: /* 767a58: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767a5b: jmp 0x767a5f */
  goto L_767a5f;
L_767a5d: /* 767a5d: xor eax, eax */
  eax = 0;
L_767a5f: /* 767a5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767a60: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 767a66: call 0x6c7009 */
  esp -= 4; W32(esp, 0x767a6bu); SPILL(); f_6c7009(); if (g_unwind) return; RELOAD();
/* 767a6b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 767a6e: mov dword ptr [esi + 0x180], eax */
  W32((uint32_t)(esi + 0x180u), eax);
/* 767a74: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 767a77: lea ebx, [edi + 0x194] */
  ebx = (uint32_t)(edi + 0x194u);
/* 767a7d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 767a7f: mov dword ptr [esi + 0x184], ecx */
  W32((uint32_t)(esi + 0x184u), ecx);
/* 767a85: je 0x767a8c */
  if (zf) goto L_767a8c;
L_767a87: /* 767a87: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767a8a: jmp 0x767a8e */
  goto L_767a8e;
L_767a8c: /* 767a8c: xor eax, eax */
  eax = 0;
L_767a8e: /* 767a8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767a8f: lea ecx, [esi + 0x1a0] */
  ecx = (uint32_t)(esi + 0x1a0u);
/* 767a95: call 0x6c1fff */
  esp -= 4; W32(esp, 0x767a9au); SPILL(); f_6c1fff(); if (g_unwind) return; RELOAD();
/* 767a9a: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 767a9d: mov dword ptr [esi + 0x198], edx */
  W32((uint32_t)(esi + 0x198u), edx);
/* 767aa3: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 767aa6: lea ebx, [edi + 0x1ac] */
  ebx = (uint32_t)(edi + 0x1acu);
/* 767aac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 767aae: mov dword ptr [esi + 0x19c], eax */
  W32((uint32_t)(esi + 0x19cu), eax);
/* 767ab4: je 0x767abb */
  if (zf) goto L_767abb;
L_767ab6: /* 767ab6: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767ab9: jmp 0x767abd */
  goto L_767abd;
L_767abb: /* 767abb: xor eax, eax */
  eax = 0;
L_767abd: /* 767abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767abe: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 767ac4: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x767acau); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 767aca: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 767acd: mov dword ptr [esi + 0x1b0], ecx */
  W32((uint32_t)(esi + 0x1b0u), ecx);
/* 767ad3: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 767ad6: lea ebx, [edi + 0x1c4] */
  ebx = (uint32_t)(edi + 0x1c4u);
/* 767adc: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 767ade: mov dword ptr [esi + 0x1b4], edx */
  W32((uint32_t)(esi + 0x1b4u), edx);
/* 767ae4: je 0x767aeb */
  if (zf) goto L_767aeb;
L_767ae6: /* 767ae6: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 767ae9: jmp 0x767aed */
  goto L_767aed;
L_767aeb: /* 767aeb: xor eax, eax */
  eax = 0;
L_767aed: /* 767aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767aee: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 767af4: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x767afau); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 767afa: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 767afd: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 767b03: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 767b06: lea edx, [edi + 0x1dc] */
  edx = (uint32_t)(edi + 0x1dcu);
/* 767b0c: mov dword ptr [esi + 0x1cc], ecx */
  W32((uint32_t)(esi + 0x1ccu), ecx);
/* 767b12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767b13: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 767b19: call 0x6c6d66 */
  esp -= 4; W32(esp, 0x767b1eu); SPILL(); f_6c6d66(); if (g_unwind) return; RELOAD();
/* 767b1e: mov eax, dword ptr [edi + 0x1e8] */
  eax = R32((uint32_t)(edi + 0x1e8u));
/* 767b24: lea ecx, [edi + 0x1ec] */
  ecx = (uint32_t)(edi + 0x1ecu);
/* 767b2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767b2b: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* 767b31: mov dword ptr [esi + 0x1e8], eax */
  W32((uint32_t)(esi + 0x1e8u), eax);
/* 767b37: call 0x6cbf5a */
  esp -= 4; W32(esp, 0x767b3cu); SPILL(); f_6cbf5a(); if (g_unwind) return; RELOAD();
/* 767b3c: lea edx, [edi + 0x1f8] */
  edx = (uint32_t)(edi + 0x1f8u);
/* 767b42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767b43: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 767b49: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x767b4eu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 767b4e: lea eax, [edi + 0x204] */
  eax = (uint32_t)(edi + 0x204u);
/* 767b54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767b55: lea ecx, [esi + 0x204] */
  ecx = (uint32_t)(esi + 0x204u);
/* 767b5b: call 0x6cb451 */
  esp -= 4; W32(esp, 0x767b60u); SPILL(); f_6cb451(); if (g_unwind) return; RELOAD();
/* 767b60: lea ecx, [edi + 0x210] */
  ecx = (uint32_t)(edi + 0x210u);
/* 767b66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767b67: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 767b6d: call 0x6c70f9 */
  esp -= 4; W32(esp, 0x767b72u); SPILL(); f_6c70f9(); if (g_unwind) return; RELOAD();
/* 767b72: mov edx, dword ptr [edi + 0x21c] */
  edx = R32((uint32_t)(edi + 0x21cu));
/* 767b78: mov dword ptr [esi + 0x21c], edx */
  W32((uint32_t)(esi + 0x21cu), edx);
/* 767b7e: mov eax, dword ptr [edi + 0x220] */
  eax = R32((uint32_t)(edi + 0x220u));
/* 767b84: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* 767b8a: mov eax, edi */
  eax = edi;
/* 767b8c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 767b8e: lea ebp, [edi + 0x240] */
  ebp = (uint32_t)(edi + 0x240u);
/* 767b94: lea ebx, [esi + 0x22c] */
  ebx = (uint32_t)(esi + 0x22cu);
/* 767b9a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 767b9e: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
/* 767ba6: jmp 0x767bb0 */
  goto L_767bb0;
L_767ba8: /* 767ba8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 767bac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_767bb0: /* 767bb0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 767bb3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 767bb5: mov dword ptr [ebx - 8], ecx */
  W32((uint32_t)(ebx + 0xfffffff8u), ecx);
/* 767bb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767bb9: mov ecx, ebx */
  ecx = ebx;
/* 767bbb: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x767bc1u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 767bc1: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 767bc4: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 767bc7: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 767bca: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 767bcd: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 767bd0: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* 767bd3: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 767bd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767bd7: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 767bda: call 0x6c296e */
  esp -= 4; W32(esp, 0x767bdfu); SPILL(); f_6c296e(); if (g_unwind) return; RELOAD();
/* 767bdf: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 767be3: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 767be6: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 767be9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 767bea: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 767bee: jne 0x767ba8 */
  if (!zf) goto L_767ba8;
L_767bf0: /* 767bf0: lea eax, [edi + 0x2d4] */
  eax = (uint32_t)(edi + 0x2d4u);
/* 767bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767bf7: lea ecx, [esi + 0x2d4] */
  ecx = (uint32_t)(esi + 0x2d4u);
/* 767bfd: call 0x6c8d91 */
  esp -= 4; W32(esp, 0x767c02u); SPILL(); f_6c8d91(); if (g_unwind) return; RELOAD();
/* 767c02: lea ecx, [edi + 0x2e0] */
  ecx = (uint32_t)(edi + 0x2e0u);
/* 767c08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767c09: lea ecx, [esi + 0x2e0] */
  ecx = (uint32_t)(esi + 0x2e0u);
/* 767c0f: call 0x6ca6c8 */
  esp -= 4; W32(esp, 0x767c14u); SPILL(); f_6ca6c8(); if (g_unwind) return; RELOAD();
/* 767c14: lea edx, [edi + 0x2ec] */
  edx = (uint32_t)(edi + 0x2ecu);
/* 767c1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767c1b: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* 767c21: call 0x6cbb6d */
  esp -= 4; W32(esp, 0x767c26u); SPILL(); f_6cbb6d(); if (g_unwind) return; RELOAD();
/* 767c26: lea eax, [edi + 0x2f8] */
  eax = (uint32_t)(edi + 0x2f8u);
/* 767c2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767c2d: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 767c33: call 0x6cbb6d */
  esp -= 4; W32(esp, 0x767c38u); SPILL(); f_6cbb6d(); if (g_unwind) return; RELOAD();
/* 767c38: lea ecx, [edi + 0x304] */
  ecx = (uint32_t)(edi + 0x304u);
/* 767c3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767c3f: lea ecx, [esi + 0x304] */
  ecx = (uint32_t)(esi + 0x304u);
/* 767c45: call 0x6c8d91 */
  esp -= 4; W32(esp, 0x767c4au); SPILL(); f_6c8d91(); if (g_unwind) return; RELOAD();
/* 767c4a: lea edx, [edi + 0x310] */
  edx = (uint32_t)(edi + 0x310u);
/* 767c50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767c51: lea ecx, [esi + 0x310] */
  ecx = (uint32_t)(esi + 0x310u);
/* 767c57: call 0x6ca5e7 */
  esp -= 4; W32(esp, 0x767c5cu); SPILL(); f_6ca5e7(); if (g_unwind) return; RELOAD();
/* 767c5c: lea eax, [edi + 0x31c] */
  eax = (uint32_t)(edi + 0x31cu);
/* 767c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767c63: lea ecx, [esi + 0x31c] */
  ecx = (uint32_t)(esi + 0x31cu);
/* 767c69: call 0x6c2fdb */
  esp -= 4; W32(esp, 0x767c6eu); SPILL(); f_6c2fdb(); if (g_unwind) return; RELOAD();
/* 767c6e: lea ecx, [edi + 0x328] */
  ecx = (uint32_t)(edi + 0x328u);
/* 767c74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767c75: lea ecx, [esi + 0x328] */
  ecx = (uint32_t)(esi + 0x328u);
/* 767c7b: call 0x6c19ce */
  esp -= 4; W32(esp, 0x767c80u); SPILL(); f_6c19ce(); if (g_unwind) return; RELOAD();
/* 767c80: mov edx, dword ptr [edi + 0x334] */
  edx = R32((uint32_t)(edi + 0x334u));
/* 767c86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 767c87: mov dword ptr [esi + 0x334], edx */
  W32((uint32_t)(esi + 0x334u), edx);
/* 767c8d: mov eax, esi */
  eax = esi;
/* 767c8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767c90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 767c91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 767c92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 767c93: ret 4 */
  esp += 8; SPILL(); return;
}

void f_767d60(void) {
  LOAD_REGS();
L_767d60: /* 767d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767d61: mov esi, ecx */
  esi = ecx;
/* 767d63: call 0x6ca9bb */
  esp -= 4; W32(esp, 0x767d68u); SPILL(); f_6ca9bb(); if (g_unwind) return; RELOAD();
/* 767d68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 767d6d: je 0x767d7e */
  if (zf) goto L_767d7e;
L_767d6f: /* 767d6f: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 767d74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767d75: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x767d7bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 767d7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_767d7e: /* 767d7e: mov eax, esi */
  eax = esi;
/* 767d80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767d81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_767da0(void) {
  LOAD_REGS();
L_767da0: /* 767da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 767da1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 767da5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 767da8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767da9: mov esi, ecx */
  esi = ecx;
/* 767dab: je 0x767de0 */
  if (zf) goto L_767de0;
L_767dad: /* 767dad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 767db0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767db1: push 0x6ca9bb */
  { uint32_t v = 0x6ca9bbu; esp -= 4; W32(esp, v); }
/* 767db6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 767db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767dba: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 767dbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767dc0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x767dc5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 767dc5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 767dc8: je 0x767dd8 */
  if (zf) goto L_767dd8;
L_767dca: /* 767dca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 767dd0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 767dd2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 767dd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767dd5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x767dd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_767dd8: /* 767dd8: mov eax, edi */
  eax = edi;
/* 767dda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 767ddb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767ddc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 767ddd: ret 4 */
  esp += 8; SPILL(); return;
L_767de0: /* 767de0: mov ecx, esi */
  ecx = esi;
/* 767de2: call 0x6ca9bb */
  esp -= 4; W32(esp, 0x767de7u); SPILL(); f_6ca9bb(); if (g_unwind) return; RELOAD();
/* 767de7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 767dea: je 0x767dfb */
  if (zf) goto L_767dfb;
L_767dec: /* 767dec: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 767df1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767df2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x767df8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 767df8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_767dfb: /* 767dfb: mov eax, esi */
  eax = esi;
/* 767dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767dfe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 767dff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_767e30(void) {
  LOAD_REGS();
L_767e30: /* 767e30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 767e32: push 0x9cb7ba */
  { uint32_t v = 0x9cb7bau; esp -= 4; W32(esp, v); }
/* 767e37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 767e3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767e3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 767e45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767e47: mov esi, ecx */
  esi = ecx;
/* 767e49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 767e4d: mov dword ptr [esi], 0xa06620 */
  W32((uint32_t)(esi), 0xa06620u);
/* 767e53: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 767e5b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x767e61u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 767e61: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 767e64: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 767e69: call 0x6c83ff */
  esp -= 4; W32(esp, 0x767e6eu); SPILL(); f_6c83ff(); if (g_unwind) return; RELOAD();
/* 767e6e: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 767e71: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 767e76: call 0x6cb2d5 */
  esp -= 4; W32(esp, 0x767e7bu); SPILL(); f_6cb2d5(); if (g_unwind) return; RELOAD();
/* 767e7b: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 767e7e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 767e83: call 0x6c764e */
  esp -= 4; W32(esp, 0x767e88u); SPILL(); f_6c764e(); if (g_unwind) return; RELOAD();
/* 767e88: mov ecx, esi */
  ecx = esi;
/* 767e8a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 767e92: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x767e98u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 767e98: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 767e9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767e9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 767ea4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 767ea7: ret  */
  esp += 4; SPILL(); return;
}

void f_767ed0(void) {
  LOAD_REGS();
L_767ed0: /* 767ed0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 767ed2: push 0x9cb7ff */
  { uint32_t v = 0x9cb7ffu; esp -= 4; W32(esp, v); }
/* 767ed7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 767edd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767ede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 767ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767ee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767ee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767ee8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 767eec: mov esi, ecx */
  esi = ecx;
/* 767eee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767eef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 767ef3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x767ef9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 767ef9: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 767efc: mov dword ptr [esi], 0xa06620 */
  W32((uint32_t)(esi), 0xa06620u);
/* 767f02: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 767f05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767f06: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 767f09: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 767f11: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 767f14: call 0x6c612c */
  esp -= 4; W32(esp, 0x767f19u); SPILL(); f_6c612c(); if (g_unwind) return; RELOAD();
/* 767f19: lea edx, [edi + 0x38] */
  edx = (uint32_t)(edi + 0x38u);
/* 767f1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767f1d: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 767f20: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 767f25: call 0x6c2fb8 */
  esp -= 4; W32(esp, 0x767f2au); SPILL(); f_6c2fb8(); if (g_unwind) return; RELOAD();
/* 767f2a: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* 767f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767f2e: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 767f31: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 767f36: call 0x6c3b89 */
  esp -= 4; W32(esp, 0x767f3bu); SPILL(); f_6c3b89(); if (g_unwind) return; RELOAD();
/* 767f3b: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 767f3e: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 767f41: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 767f45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 767f46: mov eax, esi */
  eax = esi;
/* 767f48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767f49: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 767f50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 767f53: ret 4 */
  esp += 8; SPILL(); return;
}

void f_767f90(void) {
  LOAD_REGS();
L_767f90: /* 767f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 767f91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767f92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 767f96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 767f97: mov esi, ecx */
  esi = ecx;
/* 767f99: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x767f9fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 767f9f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 767fa2: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 767fa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 767fa6: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 767fa9: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 767fac: call 0x6cca36 */
  esp -= 4; W32(esp, 0x767fb1u); SPILL(); f_6cca36(); if (g_unwind) return; RELOAD();
/* 767fb1: lea edx, [edi + 0x38] */
  edx = (uint32_t)(edi + 0x38u);
/* 767fb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 767fb5: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 767fb8: call 0x6c7df6 */
  esp -= 4; W32(esp, 0x767fbdu); SPILL(); f_6c7df6(); if (g_unwind) return; RELOAD();
/* 767fbd: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* 767fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 767fc1: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 767fc4: call 0x6ccd92 */
  esp -= 4; W32(esp, 0x767fc9u); SPILL(); f_6ccd92(); if (g_unwind) return; RELOAD();
/* 767fc9: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 767fcc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 767fcd: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 767fd0: mov eax, esi */
  eax = esi;
/* 767fd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 767fd3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768000(void) {
  LOAD_REGS();
L_768000: /* 768000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768001: mov esi, ecx */
  esi = ecx;
/* 768003: call 0x6cb5c3 */
  esp -= 4; W32(esp, 0x768008u); SPILL(); f_6cb5c3(); if (g_unwind) return; RELOAD();
/* 768008: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76800d: je 0x76801b */
  if (zf) goto L_76801b;
L_76800f: /* 76800f: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 768011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768012: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x768018u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 768018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76801b: /* 76801b: mov eax, esi */
  eax = esi;
/* 76801d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76801e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768040(void) {
  LOAD_REGS();
L_768040: /* 768040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 768041: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 768045: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768049: mov esi, ecx */
  esi = ecx;
/* 76804b: je 0x76807d */
  if (zf) goto L_76807d;
L_76804d: /* 76804d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 768050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768051: push 0x6cb5c3 */
  { uint32_t v = 0x6cb5c3u; esp -= 4; W32(esp, v); }
/* 768056: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 768059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76805a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 76805c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76805d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x768062u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 768062: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768065: je 0x768075 */
  if (zf) goto L_768075;
L_768067: /* 768067: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76806d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76806f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 768071: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768072: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x768075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_768075: /* 768075: mov eax, edi */
  eax = edi;
/* 768077: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768078: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768079: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76807a: ret 4 */
  esp += 8; SPILL(); return;
L_76807d: /* 76807d: mov ecx, esi */
  ecx = esi;
/* 76807f: call 0x6cb5c3 */
  esp -= 4; W32(esp, 0x768084u); SPILL(); f_6cb5c3(); if (g_unwind) return; RELOAD();
/* 768084: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768087: je 0x768095 */
  if (zf) goto L_768095;
L_768089: /* 768089: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 76808b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76808c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x768092u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 768092: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_768095: /* 768095: mov eax, esi */
  eax = esi;
/* 768097: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768098: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 768099: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7680c0(void) {
  LOAD_REGS();
L_7680c0: /* 7680c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7680c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7680c6: je 0x7680cd */
  if (zf) goto L_7680cd;
L_7680c8: /* 7680c8: jmp 0x6cc5ea */
  SPILL(); f_6cc5ea(); return;
L_7680cd: /* 7680cd: ret  */
  esp += 4; SPILL(); return;
}

void f_7680e0(void) {
  LOAD_REGS();
L_7680e0: /* 7680e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7680e2: push 0x9cb905 */
  { uint32_t v = 0x9cb905u; esp -= 4; W32(esp, v); }
/* 7680e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7680ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7680ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7680f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7680f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7680f7: mov esi, ecx */
  esi = ecx;
/* 7680f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7680fd: mov dword ptr [esi], 0xa066c8 */
  W32((uint32_t)(esi), 0xa066c8u);
/* 768103: mov dword ptr [esp + 0x10], 0xf */
  W32((uint32_t)(esp + 0x10u), 0xfu);
/* 76810b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x768111u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 768111: lea ecx, [esi + 0x1378] */
  ecx = (uint32_t)(esi + 0x1378u);
/* 768117: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 76811c: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x768122u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 768122: lea ecx, [esi + 0x1364] */
  ecx = (uint32_t)(esi + 0x1364u);
/* 768128: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 76812d: call 0x6c678f */
  esp -= 4; W32(esp, 0x768132u); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 768132: lea ecx, [esi + 0x1358] */
  ecx = (uint32_t)(esi + 0x1358u);
/* 768138: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 76813d: call 0x6c678f */
  esp -= 4; W32(esp, 0x768142u); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 768142: lea ecx, [esi + 0x134c] */
  ecx = (uint32_t)(esi + 0x134cu);
/* 768148: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 76814d: call 0x6c58b2 */
  esp -= 4; W32(esp, 0x768152u); SPILL(); f_6c58b2(); if (g_unwind) return; RELOAD();
/* 768152: lea ecx, [esi + 0x1340] */
  ecx = (uint32_t)(esi + 0x1340u);
/* 768158: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 76815d: call 0x6c6edd */
  esp -= 4; W32(esp, 0x768162u); SPILL(); f_6c6edd(); if (g_unwind) return; RELOAD();
/* 768162: lea ecx, [esi + 0x1334] */
  ecx = (uint32_t)(esi + 0x1334u);
/* 768168: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 76816d: call 0x6c1b7c */
  esp -= 4; W32(esp, 0x768172u); SPILL(); f_6c1b7c(); if (g_unwind) return; RELOAD();
/* 768172: lea ecx, [esi + 0x1328] */
  ecx = (uint32_t)(esi + 0x1328u);
/* 768178: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 76817d: call 0x6cbadc */
  esp -= 4; W32(esp, 0x768182u); SPILL(); f_6cbadc(); if (g_unwind) return; RELOAD();
/* 768182: lea ecx, [esi + 0x131c] */
  ecx = (uint32_t)(esi + 0x131cu);
/* 768188: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 76818d: call 0x6cbadc */
  esp -= 4; W32(esp, 0x768192u); SPILL(); f_6cbadc(); if (g_unwind) return; RELOAD();
/* 768192: lea ecx, [esi + 0x130c] */
  ecx = (uint32_t)(esi + 0x130cu);
/* 768198: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 76819d: call 0x6cbd57 */
  esp -= 4; W32(esp, 0x7681a2u); SPILL(); f_6cbd57(); if (g_unwind) return; RELOAD();
/* 7681a2: lea ecx, [esi + 0x12a0] */
  ecx = (uint32_t)(esi + 0x12a0u);
/* 7681a8: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7681ad: call 0x6c791e */
  esp -= 4; W32(esp, 0x7681b2u); SPILL(); f_6c791e(); if (g_unwind) return; RELOAD();
/* 7681b2: lea ecx, [esi + 0x1280] */
  ecx = (uint32_t)(esi + 0x1280u);
/* 7681b8: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7681bd: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7681c2u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7681c2: lea ecx, [esi + 0x1274] */
  ecx = (uint32_t)(esi + 0x1274u);
/* 7681c8: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 7681cd: call 0x6c1073 */
  esp -= 4; W32(esp, 0x7681d2u); SPILL(); f_6c1073(); if (g_unwind) return; RELOAD();
/* 7681d2: lea ecx, [esi + 0x1268] */
  ecx = (uint32_t)(esi + 0x1268u);
/* 7681d8: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 7681dd: call 0x6cb57d */
  esp -= 4; W32(esp, 0x7681e2u); SPILL(); f_6cb57d(); if (g_unwind) return; RELOAD();
/* 7681e2: lea ecx, [esi + 0x1250] */
  ecx = (uint32_t)(esi + 0x1250u);
/* 7681e8: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7681ed: call 0x6cad08 */
  esp -= 4; W32(esp, 0x7681f2u); SPILL(); f_6cad08(); if (g_unwind) return; RELOAD();
/* 7681f2: push 0x6cb2d0 */
  { uint32_t v = 0x6cb2d0u; esp -= 4; W32(esp, v); }
/* 7681f7: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7681f9: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 7681fb: lea eax, [esi + 0x350] */
  eax = (uint32_t)(esi + 0x350u);
/* 768201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768202: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 768207: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76820cu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76820c: mov ecx, esi */
  ecx = esi;
/* 76820e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 768216: call 0x6c688e */
  esp -= 4; W32(esp, 0x76821bu); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 76821b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76821f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768220: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 768227: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76822a: ret  */
  esp += 4; SPILL(); return;
}

void f_768290(void) {
  LOAD_REGS();
L_768290: /* 768290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 768292: push 0x9cba0e */
  { uint32_t v = 0x9cba0eu; esp -= 4; W32(esp, v); }
/* 768297: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76829d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76829e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7682a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7682a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7682a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7682a8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 7682ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7682ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7682ae: mov ebx, ecx */
  ebx = ecx;
/* 7682b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7682b1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7682b5: call 0x6c1456 */
  esp -= 4; W32(esp, 0x7682bau); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 7682ba: mov dword ptr [ebx], 0xa066c8 */
  W32((uint32_t)(ebx), 0xa066c8u);
/* 7682c0: mov eax, dword ptr [ebp + 0x33c] */
  eax = R32((uint32_t)(ebp + 0x33cu));
/* 7682c6: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 7682cc: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 7682d2: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 7682d8: lea edx, [ebp + 0x344] */
  edx = (uint32_t)(ebp + 0x344u);
/* 7682de: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7682e0: lea eax, [ebx + 0x344] */
  eax = (uint32_t)(ebx + 0x344u);
/* 7682e6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7682e8: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7682eb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7682ee: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7682f1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7682f4: lea esi, [ebp + 0x350] */
  esi = (uint32_t)(ebp + 0x350u);
/* 7682fa: lea edi, [ebx + 0x350] */
  edi = (uint32_t)(ebx + 0x350u);
/* 768300: mov ecx, 0x3c0 */
  ecx = 0x3c0u;
/* 768305: lea eax, [ebp + 0x1250] */
  eax = (uint32_t)(ebp + 0x1250u);
/* 76830b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76830d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76830e: lea ecx, [ebx + 0x1250] */
  ecx = (uint32_t)(ebx + 0x1250u);
/* 768314: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 76831c: call 0x6c6bbd */
  esp -= 4; W32(esp, 0x768321u); SPILL(); f_6c6bbd(); if (g_unwind) return; RELOAD();
/* 768321: mov ecx, dword ptr [ebp + 0x125c] */
  ecx = R32((uint32_t)(ebp + 0x125cu));
/* 768327: mov edx, dword ptr [ebx + 0x1260] */
  edx = R32((uint32_t)(ebx + 0x1260u));
/* 76832d: mov edi, dword ptr [ebx + 0x1260] */
  edi = R32((uint32_t)(ebx + 0x1260u));
/* 768333: mov dword ptr [ebx + 0x125c], ecx */
  W32((uint32_t)(ebx + 0x125cu), ecx);
/* 768339: xor edx, dword ptr [ebp + 0x1260] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1260u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 76833f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 768342: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 768344: mov dword ptr [ebx + 0x1260], edi */
  W32((uint32_t)(ebx + 0x1260u), edi);
/* 76834a: mov ecx, dword ptr [ebp + 0x1260] */
  ecx = R32((uint32_t)(ebp + 0x1260u));
/* 768350: mov eax, edi */
  eax = edi;
/* 768352: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 768354: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 768357: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 768359: mov dword ptr [ebx + 0x1260], ecx */
  W32((uint32_t)(ebx + 0x1260u), ecx);
/* 76835f: mov edx, dword ptr [ebp + 0x1264] */
  edx = R32((uint32_t)(ebp + 0x1264u));
/* 768365: lea eax, [ebp + 0x1268] */
  eax = (uint32_t)(ebp + 0x1268u);
/* 76836b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76836c: lea ecx, [ebx + 0x1268] */
  ecx = (uint32_t)(ebx + 0x1268u);
/* 768372: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 768377: mov dword ptr [ebx + 0x1264], edx */
  W32((uint32_t)(ebx + 0x1264u), edx);
/* 76837d: call 0x6c71d5 */
  esp -= 4; W32(esp, 0x768382u); SPILL(); f_6c71d5(); if (g_unwind) return; RELOAD();
/* 768382: lea ecx, [ebp + 0x1274] */
  ecx = (uint32_t)(ebp + 0x1274u);
/* 768388: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768389: lea ecx, [ebx + 0x1274] */
  ecx = (uint32_t)(ebx + 0x1274u);
/* 76838f: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 768394: call 0x6c5c18 */
  esp -= 4; W32(esp, 0x768399u); SPILL(); f_6c5c18(); if (g_unwind) return; RELOAD();
/* 768399: lea edx, [ebp + 0x1280] */
  edx = (uint32_t)(ebp + 0x1280u);
/* 76839f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7683a0: lea ecx, [ebx + 0x1280] */
  ecx = (uint32_t)(ebx + 0x1280u);
/* 7683a6: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 7683ab: call 0x6cbbae */
  esp -= 4; W32(esp, 0x7683b0u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 7683b0: mov eax, dword ptr [ebp + 0x128c] */
  eax = R32((uint32_t)(ebp + 0x128cu));
/* 7683b6: mov dword ptr [ebx + 0x128c], eax */
  W32((uint32_t)(ebx + 0x128cu), eax);
/* 7683bc: mov ecx, dword ptr [ebp + 0x1290] */
  ecx = R32((uint32_t)(ebp + 0x1290u));
/* 7683c2: mov dword ptr [ebx + 0x1290], ecx */
  W32((uint32_t)(ebx + 0x1290u), ecx);
/* 7683c8: mov edx, dword ptr [ebp + 0x1294] */
  edx = R32((uint32_t)(ebp + 0x1294u));
/* 7683ce: mov dword ptr [ebx + 0x1294], edx */
  W32((uint32_t)(ebx + 0x1294u), edx);
/* 7683d4: mov eax, dword ptr [ebp + 0x1298] */
  eax = R32((uint32_t)(ebp + 0x1298u));
/* 7683da: mov dword ptr [ebx + 0x1298], eax */
  W32((uint32_t)(ebx + 0x1298u), eax);
/* 7683e0: mov ecx, dword ptr [ebp + 0x129c] */
  ecx = R32((uint32_t)(ebp + 0x129cu));
/* 7683e6: lea edx, [ebp + 0x12a0] */
  edx = (uint32_t)(ebp + 0x12a0u);
/* 7683ec: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 7683f1: mov dword ptr [ebx + 0x129c], ecx */
  W32((uint32_t)(ebx + 0x129cu), ecx);
/* 7683f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7683f8: lea ecx, [ebx + 0x12a0] */
  ecx = (uint32_t)(ebx + 0x12a0u);
/* 7683fe: call 0x6c6915 */
  esp -= 4; W32(esp, 0x768403u); SPILL(); f_6c6915(); if (g_unwind) return; RELOAD();
/* 768403: lea esi, [ebp + 0x12ac] */
  esi = (uint32_t)(ebp + 0x12acu);
/* 768409: lea edi, [ebx + 0x12ac] */
  edi = (uint32_t)(ebx + 0x12acu);
/* 76840f: mov ecx, 0xc */
  ecx = 0xcu;
/* 768414: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 768416: lea esi, [ebp + 0x12dc] */
  esi = (uint32_t)(ebp + 0x12dcu);
/* 76841c: lea edi, [ebx + 0x12dc] */
  edi = (uint32_t)(ebx + 0x12dcu);
/* 768422: mov ecx, 0xc */
  ecx = 0xcu;
/* 768427: lea eax, [ebp + 0x130c] */
  eax = (uint32_t)(ebp + 0x130cu);
/* 76842d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76842f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768430: lea ecx, [ebx + 0x130c] */
  ecx = (uint32_t)(ebx + 0x130cu);
/* 768436: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 76843b: call 0x6c49e4 */
  esp -= 4; W32(esp, 0x768440u); SPILL(); f_6c49e4(); if (g_unwind) return; RELOAD();
/* 768440: mov ecx, dword ptr [ebp + 0x1318] */
  ecx = R32((uint32_t)(ebp + 0x1318u));
/* 768446: lea edx, [ebp + 0x131c] */
  edx = (uint32_t)(ebp + 0x131cu);
/* 76844c: mov dword ptr [ebx + 0x1318], ecx */
  W32((uint32_t)(ebx + 0x1318u), ecx);
/* 768452: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 768453: lea ecx, [ebx + 0x131c] */
  ecx = (uint32_t)(ebx + 0x131cu);
/* 768459: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* 76845e: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x768463u); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 768463: lea eax, [ebp + 0x1328] */
  eax = (uint32_t)(ebp + 0x1328u);
/* 768469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76846a: lea ecx, [ebx + 0x1328] */
  ecx = (uint32_t)(ebx + 0x1328u);
/* 768470: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 768475: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x76847au); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 76847a: lea ecx, [ebp + 0x1334] */
  ecx = (uint32_t)(ebp + 0x1334u);
/* 768480: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768481: lea ecx, [ebx + 0x1334] */
  ecx = (uint32_t)(ebx + 0x1334u);
/* 768487: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 76848c: call 0x6c925f */
  esp -= 4; W32(esp, 0x768491u); SPILL(); f_6c925f(); if (g_unwind) return; RELOAD();
/* 768491: lea edx, [ebp + 0x1340] */
  edx = (uint32_t)(ebp + 0x1340u);
/* 768497: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 768498: lea ecx, [ebx + 0x1340] */
  ecx = (uint32_t)(ebx + 0x1340u);
/* 76849e: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 7684a3: call 0x6cb492 */
  esp -= 4; W32(esp, 0x7684a8u); SPILL(); f_6cb492(); if (g_unwind) return; RELOAD();
/* 7684a8: lea eax, [ebp + 0x134c] */
  eax = (uint32_t)(ebp + 0x134cu);
/* 7684ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7684af: lea ecx, [ebx + 0x134c] */
  ecx = (uint32_t)(ebx + 0x134cu);
/* 7684b5: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 7684ba: call 0x6c7ae5 */
  esp -= 4; W32(esp, 0x7684bfu); SPILL(); f_6c7ae5(); if (g_unwind) return; RELOAD();
/* 7684bf: lea ecx, [ebp + 0x1358] */
  ecx = (uint32_t)(ebp + 0x1358u);
/* 7684c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7684c6: lea ecx, [ebx + 0x1358] */
  ecx = (uint32_t)(ebx + 0x1358u);
/* 7684cc: mov byte ptr [esp + 0x20], 0xb */
  W8((uint32_t)(esp + 0x20u), 0xbu);
/* 7684d1: call 0x6c520e */
  esp -= 4; W32(esp, 0x7684d6u); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 7684d6: lea edx, [ebp + 0x1364] */
  edx = (uint32_t)(ebp + 0x1364u);
/* 7684dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7684dd: lea ecx, [ebx + 0x1364] */
  ecx = (uint32_t)(ebx + 0x1364u);
/* 7684e3: mov byte ptr [esp + 0x20], 0xc */
  W8((uint32_t)(esp + 0x20u), 0xcu);
/* 7684e8: call 0x6c520e */
  esp -= 4; W32(esp, 0x7684edu); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 7684ed: mov eax, dword ptr [ebp + 0x1370] */
  eax = R32((uint32_t)(ebp + 0x1370u));
/* 7684f3: mov dword ptr [ebx + 0x1370], eax */
  W32((uint32_t)(ebx + 0x1370u), eax);
/* 7684f9: mov ecx, dword ptr [ebp + 0x1374] */
  ecx = R32((uint32_t)(ebp + 0x1374u));
/* 7684ff: add ebp, 0x1378 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1378u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 768505: mov dword ptr [ebx + 0x1374], ecx */
  W32((uint32_t)(ebx + 0x1374u), ecx);
/* 76850b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76850c: lea ecx, [ebx + 0x1378] */
  ecx = (uint32_t)(ebx + 0x1378u);
/* 768512: mov byte ptr [esp + 0x20], 0xd */
  W8((uint32_t)(esp + 0x20u), 0xdu);
/* 768517: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x76851du); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 76851d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 768521: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768522: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768523: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 768524: mov eax, ebx */
  eax = ebx;
/* 768526: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 768527: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76852e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 768531: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7685f0(void) {
  LOAD_REGS();
L_7685f0: /* 7685f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7685f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7685f2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7685f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7685f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7685f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7685f9: mov ebx, ecx */
  ebx = ecx;
/* 7685fb: call 0x6c5cef */
  esp -= 4; W32(esp, 0x768600u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 768600: mov eax, dword ptr [ebp + 0x33c] */
  eax = R32((uint32_t)(ebp + 0x33cu));
/* 768606: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 76860c: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 768612: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 768618: lea edx, [ebp + 0x344] */
  edx = (uint32_t)(ebp + 0x344u);
/* 76861e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 768620: lea eax, [ebx + 0x344] */
  eax = (uint32_t)(ebx + 0x344u);
/* 768626: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 768628: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 76862b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76862e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 768631: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 768634: mov edx, ebp */
  edx = ebp;
/* 768636: lea eax, [ebx + 0x350] */
  eax = (uint32_t)(ebx + 0x350u);
/* 76863c: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 76863e: mov dword ptr [esp + 0x14], 0x20 */
  W32((uint32_t)(esp + 0x14u), 0x20u);
L_768646: /* 768646: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 768649: mov edi, eax */
  edi = eax;
/* 76864b: mov ecx, 0x1e */
  ecx = 0x1eu;
/* 768650: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 768652: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 768656: add eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 768659: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 76865a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 76865e: jne 0x768646 */
  if (!zf) goto L_768646;
L_768660: /* 768660: lea eax, [ebp + 0x1250] */
  eax = (uint32_t)(ebp + 0x1250u);
/* 768666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768667: lea ecx, [ebx + 0x1250] */
  ecx = (uint32_t)(ebx + 0x1250u);
/* 76866d: call 0x6c954d */
  esp -= 4; W32(esp, 0x768672u); SPILL(); f_6c954d(); if (g_unwind) return; RELOAD();
/* 768672: mov ecx, dword ptr [ebp + 0x125c] */
  ecx = R32((uint32_t)(ebp + 0x125cu));
/* 768678: mov edx, dword ptr [ebx + 0x1260] */
  edx = R32((uint32_t)(ebx + 0x1260u));
/* 76867e: mov edi, dword ptr [ebx + 0x1260] */
  edi = R32((uint32_t)(ebx + 0x1260u));
/* 768684: mov dword ptr [ebx + 0x125c], ecx */
  W32((uint32_t)(ebx + 0x125cu), ecx);
/* 76868a: xor edx, dword ptr [ebp + 0x1260] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1260u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 768690: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 768693: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 768695: mov dword ptr [ebx + 0x1260], edi */
  W32((uint32_t)(ebx + 0x1260u), edi);
/* 76869b: mov ecx, dword ptr [ebp + 0x1260] */
  ecx = R32((uint32_t)(ebp + 0x1260u));
/* 7686a1: mov eax, edi */
  eax = edi;
/* 7686a3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7686a5: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7686a8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7686aa: mov dword ptr [ebx + 0x1260], ecx */
  W32((uint32_t)(ebx + 0x1260u), ecx);
/* 7686b0: mov edx, dword ptr [ebp + 0x1264] */
  edx = R32((uint32_t)(ebp + 0x1264u));
/* 7686b6: lea eax, [ebp + 0x1268] */
  eax = (uint32_t)(ebp + 0x1268u);
/* 7686bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7686bd: lea ecx, [ebx + 0x1268] */
  ecx = (uint32_t)(ebx + 0x1268u);
/* 7686c3: mov dword ptr [ebx + 0x1264], edx */
  W32((uint32_t)(ebx + 0x1264u), edx);
/* 7686c9: call 0x6c49c6 */
  esp -= 4; W32(esp, 0x7686ceu); SPILL(); f_6c49c6(); if (g_unwind) return; RELOAD();
/* 7686ce: lea ecx, [ebp + 0x1274] */
  ecx = (uint32_t)(ebp + 0x1274u);
/* 7686d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7686d5: lea ecx, [ebx + 0x1274] */
  ecx = (uint32_t)(ebx + 0x1274u);
/* 7686db: call 0x6ccc7f */
  esp -= 4; W32(esp, 0x7686e0u); SPILL(); f_6ccc7f(); if (g_unwind) return; RELOAD();
/* 7686e0: lea edx, [ebp + 0x1280] */
  edx = (uint32_t)(ebp + 0x1280u);
/* 7686e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7686e7: lea ecx, [ebx + 0x1280] */
  ecx = (uint32_t)(ebx + 0x1280u);
/* 7686ed: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x7686f2u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 7686f2: mov eax, dword ptr [ebp + 0x128c] */
  eax = R32((uint32_t)(ebp + 0x128cu));
/* 7686f8: mov dword ptr [ebx + 0x128c], eax */
  W32((uint32_t)(ebx + 0x128cu), eax);
/* 7686fe: mov ecx, dword ptr [ebp + 0x1290] */
  ecx = R32((uint32_t)(ebp + 0x1290u));
/* 768704: mov dword ptr [ebx + 0x1290], ecx */
  W32((uint32_t)(ebx + 0x1290u), ecx);
/* 76870a: mov edx, dword ptr [ebp + 0x1294] */
  edx = R32((uint32_t)(ebp + 0x1294u));
/* 768710: mov dword ptr [ebx + 0x1294], edx */
  W32((uint32_t)(ebx + 0x1294u), edx);
/* 768716: mov eax, dword ptr [ebp + 0x1298] */
  eax = R32((uint32_t)(ebp + 0x1298u));
/* 76871c: mov dword ptr [ebx + 0x1298], eax */
  W32((uint32_t)(ebx + 0x1298u), eax);
/* 768722: mov ecx, dword ptr [ebp + 0x129c] */
  ecx = R32((uint32_t)(ebp + 0x129cu));
/* 768728: lea edx, [ebp + 0x12a0] */
  edx = (uint32_t)(ebp + 0x12a0u);
/* 76872e: mov dword ptr [ebx + 0x129c], ecx */
  W32((uint32_t)(ebx + 0x129cu), ecx);
/* 768734: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 768735: lea ecx, [ebx + 0x12a0] */
  ecx = (uint32_t)(ebx + 0x12a0u);
/* 76873b: call 0x6c6dd4 */
  esp -= 4; W32(esp, 0x768740u); SPILL(); f_6c6dd4(); if (g_unwind) return; RELOAD();
/* 768740: lea esi, [ebp + 0x12ac] */
  esi = (uint32_t)(ebp + 0x12acu);
/* 768746: lea edi, [ebx + 0x12ac] */
  edi = (uint32_t)(ebx + 0x12acu);
/* 76874c: mov ecx, 0xc */
  ecx = 0xcu;
/* 768751: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 768753: lea esi, [ebp + 0x12dc] */
  esi = (uint32_t)(ebp + 0x12dcu);
/* 768759: lea edi, [ebx + 0x12dc] */
  edi = (uint32_t)(ebx + 0x12dcu);
/* 76875f: mov ecx, 0xc */
  ecx = 0xcu;
/* 768764: lea eax, [ebp + 0x130c] */
  eax = (uint32_t)(ebp + 0x130cu);
/* 76876a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76876c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76876d: lea ecx, [ebx + 0x130c] */
  ecx = (uint32_t)(ebx + 0x130cu);
/* 768773: call 0x6ca169 */
  esp -= 4; W32(esp, 0x768778u); SPILL(); f_6ca169(); if (g_unwind) return; RELOAD();
/* 768778: mov ecx, dword ptr [ebp + 0x1318] */
  ecx = R32((uint32_t)(ebp + 0x1318u));
/* 76877e: lea edx, [ebp + 0x131c] */
  edx = (uint32_t)(ebp + 0x131cu);
/* 768784: mov dword ptr [ebx + 0x1318], ecx */
  W32((uint32_t)(ebx + 0x1318u), ecx);
/* 76878a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76878b: lea ecx, [ebx + 0x131c] */
  ecx = (uint32_t)(ebx + 0x131cu);
/* 768791: call 0x6cca95 */
  esp -= 4; W32(esp, 0x768796u); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 768796: lea eax, [ebp + 0x1328] */
  eax = (uint32_t)(ebp + 0x1328u);
/* 76879c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76879d: lea ecx, [ebx + 0x1328] */
  ecx = (uint32_t)(ebx + 0x1328u);
/* 7687a3: call 0x6cca95 */
  esp -= 4; W32(esp, 0x7687a8u); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 7687a8: lea ecx, [ebp + 0x1334] */
  ecx = (uint32_t)(ebp + 0x1334u);
/* 7687ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7687af: lea ecx, [ebx + 0x1334] */
  ecx = (uint32_t)(ebx + 0x1334u);
/* 7687b5: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x7687bau); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 7687ba: lea edx, [ebp + 0x1340] */
  edx = (uint32_t)(ebp + 0x1340u);
/* 7687c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7687c1: lea ecx, [ebx + 0x1340] */
  ecx = (uint32_t)(ebx + 0x1340u);
/* 7687c7: call 0x6c4e67 */
  esp -= 4; W32(esp, 0x7687ccu); SPILL(); f_6c4e67(); if (g_unwind) return; RELOAD();
/* 7687cc: lea eax, [ebp + 0x134c] */
  eax = (uint32_t)(ebp + 0x134cu);
/* 7687d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7687d3: lea ecx, [ebx + 0x134c] */
  ecx = (uint32_t)(ebx + 0x134cu);
/* 7687d9: call 0x6c7d60 */
  esp -= 4; W32(esp, 0x7687deu); SPILL(); f_6c7d60(); if (g_unwind) return; RELOAD();
/* 7687de: lea ecx, [ebp + 0x1358] */
  ecx = (uint32_t)(ebp + 0x1358u);
/* 7687e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7687e5: lea ecx, [ebx + 0x1358] */
  ecx = (uint32_t)(ebx + 0x1358u);
/* 7687eb: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x7687f0u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 7687f0: lea edx, [ebp + 0x1364] */
  edx = (uint32_t)(ebp + 0x1364u);
/* 7687f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7687f7: lea ecx, [ebx + 0x1364] */
  ecx = (uint32_t)(ebx + 0x1364u);
/* 7687fd: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x768802u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 768802: mov eax, dword ptr [ebp + 0x1370] */
  eax = R32((uint32_t)(ebp + 0x1370u));
/* 768808: mov dword ptr [ebx + 0x1370], eax */
  W32((uint32_t)(ebx + 0x1370u), eax);
/* 76880e: mov ecx, dword ptr [ebp + 0x1374] */
  ecx = R32((uint32_t)(ebp + 0x1374u));
/* 768814: mov dword ptr [ebx + 0x1374], ecx */
  W32((uint32_t)(ebx + 0x1374u), ecx);
/* 76881a: add ebp, 0x1378 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1378u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 768820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 768821: lea ecx, [ebx + 0x1378] */
  ecx = (uint32_t)(ebx + 0x1378u);
/* 768827: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x76882du); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76882d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76882e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76882f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 768830: mov eax, ebx */
  eax = ebx;
/* 768832: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 768833: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7688e0(void) {
  LOAD_REGS();
L_7688e0: /* 7688e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7688e1: mov esi, ecx */
  esi = ecx;
/* 7688e3: call 0x6c4ae8 */
  esp -= 4; W32(esp, 0x7688e8u); SPILL(); f_6c4ae8(); if (g_unwind) return; RELOAD();
/* 7688e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7688ed: je 0x7688fe */
  if (zf) goto L_7688fe;
L_7688ef: /* 7688ef: push 0x1384 */
  { uint32_t v = 0x1384u; esp -= 4; W32(esp, v); }
/* 7688f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7688f5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7688fbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7688fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7688fe: /* 7688fe: mov eax, esi */
  eax = esi;
/* 768900: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768901: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768920(void) {
  LOAD_REGS();
L_768920: /* 768920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 768921: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 768925: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768929: mov esi, ecx */
  esi = ecx;
/* 76892b: je 0x768960 */
  if (zf) goto L_768960;
L_76892d: /* 76892d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 768930: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768931: push 0x6c4ae8 */
  { uint32_t v = 0x6c4ae8u; esp -= 4; W32(esp, v); }
/* 768936: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 768939: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76893a: push 0x1384 */
  { uint32_t v = 0x1384u; esp -= 4; W32(esp, v); }
/* 76893f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768940: call 0x99ca3d */
  esp -= 4; W32(esp, 0x768945u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 768945: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768948: je 0x768958 */
  if (zf) goto L_768958;
L_76894a: /* 76894a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 768950: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 768952: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 768954: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768955: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x768958u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_768958: /* 768958: mov eax, edi */
  eax = edi;
/* 76895a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76895b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76895c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76895d: ret 4 */
  esp += 8; SPILL(); return;
L_768960: /* 768960: mov ecx, esi */
  ecx = esi;
/* 768962: call 0x6c4ae8 */
  esp -= 4; W32(esp, 0x768967u); SPILL(); f_6c4ae8(); if (g_unwind) return; RELOAD();
/* 768967: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76896a: je 0x76897b */
  if (zf) goto L_76897b;
L_76896c: /* 76896c: push 0x1384 */
  { uint32_t v = 0x1384u; esp -= 4; W32(esp, v); }
/* 768971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768972: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x768978u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 768978: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76897b: /* 76897b: mov eax, esi */
  eax = esi;
/* 76897d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76897e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76897f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7689b0(void) {
  LOAD_REGS();
L_7689b0: /* 7689b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7689b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7689b6: je 0x7689bd */
  if (zf) goto L_7689bd;
L_7689b8: /* 7689b8: jmp 0x6c4ce6 */
  SPILL(); f_6c4ce6(); return;
L_7689bd: /* 7689bd: ret  */
  esp += 4; SPILL(); return;
}

void f_7689d0(void) {
  LOAD_REGS();
L_7689d0: /* 7689d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7689d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7689d6: je 0x7689dd */
  if (zf) goto L_7689dd;
L_7689d8: /* 7689d8: jmp 0x6c2bd0 */
  SPILL(); f_6c2bd0(); return;
L_7689dd: /* 7689dd: ret  */
  esp += 4; SPILL(); return;
}

void f_7689f0(void) {
  LOAD_REGS();
L_7689f0: /* 7689f0: mov eax, 0xcf1560 */
  eax = 0xcf1560u;
/* 7689f5: ret  */
  esp += 4; SPILL(); return;
}

void f_768a10(void) {
  LOAD_REGS();
L_768a10: /* 768a10: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 768a15: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 768a17: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 768a1b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 768a1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768a21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768a23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768a24: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 768a28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768a2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 768a2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768a2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768a2d: push 0xcf1560 */
  { uint32_t v = 0xcf1560u; esp -= 4; W32(esp, v); }
/* 768a32: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x768a38u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 768a38: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 768a3b: ret  */
  esp += 4; SPILL(); return;
}

void f_768a50(void) {
  LOAD_REGS();
L_768a50: /* 768a50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 768a54: ret  */
  esp += 4; SPILL(); return;
}

void f_768a70(void) {
  LOAD_REGS();
L_768a70: /* 768a70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 768a72: push 0x9cba59 */
  { uint32_t v = 0x9cba59u; esp -= 4; W32(esp, v); }
/* 768a77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 768a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768a7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 768a85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768a86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768a87: mov esi, ecx */
  esi = ecx;
/* 768a89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 768a8d: mov dword ptr [esi], 0xa068a8 */
  W32((uint32_t)(esi), 0xa068a8u);
/* 768a93: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 768a9b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x768aa1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 768aa1: mov ecx, esi */
  ecx = esi;
/* 768aa3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 768aab: call dword ptr [0xcfa47c] */
  esp -= 4; W32(esp, 0x768ab1u); SPILL(); f_4e3dff(); if (g_unwind) return; /* Core!??1UPackageMap@@UAE@XZ */ RELOAD();
/* 768ab1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 768ab5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768ab6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 768abd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 768ac0: ret  */
  esp += 4; SPILL(); return;
}

void f_768af0(void) {
  LOAD_REGS();
L_768af0: /* 768af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768af1: mov esi, ecx */
  esi = ecx;
/* 768af3: call dword ptr [0xcfa480] */
  esp -= 4; W32(esp, 0x768af9u); SPILL(); f_4e1f46(); if (g_unwind) return; /* Core!??0UPackageMap@@QAE@XZ */ RELOAD();
/* 768af9: mov dword ptr [esi], 0xa068a8 */
  W32((uint32_t)(esi), 0xa068a8u);
/* 768aff: mov eax, esi */
  eax = esi;
/* 768b01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768b02: ret  */
  esp += 4; SPILL(); return;
}

void f_768b20(void) {
  LOAD_REGS();
L_768b20: /* 768b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768b21: mov esi, ecx */
  esi = ecx;
/* 768b23: call dword ptr [0xcfa480] */
  esp -= 4; W32(esp, 0x768b29u); SPILL(); f_4e1f46(); if (g_unwind) return; /* Core!??0UPackageMap@@QAE@XZ */ RELOAD();
/* 768b29: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 768b2d: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 768b30: mov dword ptr [esi], 0xa068a8 */
  W32((uint32_t)(esi), 0xa068a8u);
/* 768b36: mov eax, esi */
  eax = esi;
/* 768b38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768b39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768b50(void) {
  LOAD_REGS();
L_768b50: /* 768b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768b51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768b52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 768b56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768b57: mov esi, ecx */
  esi = ecx;
/* 768b59: call dword ptr [0xcfa484] */
  esp -= 4; W32(esp, 0x768b5fu); SPILL(); f_4e1f78(); if (g_unwind) return; /* Core!??0UPackageMap@@QAE@ABV0@@Z */ RELOAD();
/* 768b5f: mov dword ptr [esi], 0xa068a8 */
  W32((uint32_t)(esi), 0xa068a8u);
/* 768b65: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 768b68: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 768b6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768b6c: mov eax, esi */
  eax = esi;
/* 768b6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768b6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768b90(void) {
  LOAD_REGS();
L_768b90: /* 768b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768b91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768b92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 768b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768b97: mov esi, ecx */
  esi = ecx;
/* 768b99: call dword ptr [0xcfa488] */
  esp -= 4; W32(esp, 0x768b9fu); SPILL(); f_4e190b(); if (g_unwind) return; /* Core!??4UPackageMap@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 768b9f: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 768ba2: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 768ba5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768ba6: mov eax, esi */
  eax = esi;
/* 768ba8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768ba9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768bc0(void) {
  LOAD_REGS();
L_768bc0: /* 768bc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768bc1: mov esi, ecx */
  esi = ecx;
/* 768bc3: call 0x6c420a */
  esp -= 4; W32(esp, 0x768bc8u); SPILL(); f_6c420a(); if (g_unwind) return; RELOAD();
/* 768bc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768bcd: je 0x768bdb */
  if (zf) goto L_768bdb;
L_768bcf: /* 768bcf: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 768bd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768bd2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x768bd8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 768bd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_768bdb: /* 768bdb: mov eax, esi */
  eax = esi;
/* 768bdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768bde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768c00(void) {
  LOAD_REGS();
L_768c00: /* 768c00: mov eax, 0xcf1a90 */
  eax = 0xcf1a90u;
/* 768c05: ret  */
  esp += 4; SPILL(); return;
}

void f_768c20(void) {
  LOAD_REGS();
L_768c20: /* 768c20: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 768c25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 768c27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 768c2b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 768c2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768c31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768c34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 768c38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768c3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 768c3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768c3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768c3d: push 0xcf1a90 */
  { uint32_t v = 0xcf1a90u; esp -= 4; W32(esp, v); }
/* 768c42: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x768c48u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 768c48: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 768c4b: ret  */
  esp += 4; SPILL(); return;
}

void f_768c60(void) {
  LOAD_REGS();
L_768c60: /* 768c60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 768c64: ret  */
  esp += 4; SPILL(); return;
}

void f_768c80(void) {
  LOAD_REGS();
L_768c80: /* 768c80: xor eax, eax */
  eax = 0;
/* 768c82: ret  */
  esp += 4; SPILL(); return;
}

void f_768ca0(void) {
  LOAD_REGS();
L_768ca0: /* 768ca0: jmp dword ptr [0xcfa48c] */
  SPILL(); f_4e3837(); return; /* Core!??1FBitWriter@@UAE@XZ */
}

void f_768cc0(void) {
  LOAD_REGS();
L_768cc0: /* 768cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768cc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768cc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 768cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768cc7: mov esi, ecx */
  esi = ecx;
/* 768cc9: call dword ptr [0xcfa4dc] */
  esp -= 4; W32(esp, 0x768ccfu); SPILL(); f_4e2ba8(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@ABU0@@Z */ RELOAD();
/* 768ccf: mov dword ptr [esi], 0xa06958 */
  W32((uint32_t)(esi), 0xa06958u);
/* 768cd5: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 768cd8: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 768cdb: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 768cde: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 768ce1: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 768ce4: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 768ce7: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 768cea: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 768ced: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 768cf0: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 768cf3: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 768cf6: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 768cf9: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 768cfc: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 768cff: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 768d02: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 768d05: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* 768d08: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* 768d0b: mov al, byte ptr [edi + 0x78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x78u))) & 0xffu);
/* 768d0e: mov byte ptr [esi + 0x78], al */
  W8((uint32_t)(esi + 0x78u), (eax & 0xffu));
/* 768d11: mov cl, byte ptr [edi + 0x79] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x79u))) & 0xffu);
/* 768d14: mov byte ptr [esi + 0x79], cl */
  W8((uint32_t)(esi + 0x79u), (ecx & 0xffu));
/* 768d17: mov dl, byte ptr [edi + 0x7a] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7au))) & 0xffu);
/* 768d1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768d1b: mov byte ptr [esi + 0x7a], dl */
  W8((uint32_t)(esi + 0x7au), (edx & 0xffu));
/* 768d1e: mov eax, esi */
  eax = esi;
/* 768d20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768d21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768d50(void) {
  LOAD_REGS();
L_768d50: /* 768d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768d51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768d52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 768d56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768d57: mov esi, ecx */
  esi = ecx;
/* 768d59: call dword ptr [0xcfa4e0] */
  esp -= 4; W32(esp, 0x768d5fu); SPILL(); f_4e107d(); if (g_unwind) return; /* Core!??4FBitWriter@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 768d5f: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 768d62: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 768d65: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 768d68: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 768d6b: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 768d6e: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 768d71: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 768d74: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 768d77: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 768d7a: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 768d7d: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 768d80: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 768d83: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 768d86: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 768d89: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 768d8c: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 768d8f: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* 768d92: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* 768d95: mov al, byte ptr [edi + 0x78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x78u))) & 0xffu);
/* 768d98: mov byte ptr [esi + 0x78], al */
  W8((uint32_t)(esi + 0x78u), (eax & 0xffu));
/* 768d9b: mov cl, byte ptr [edi + 0x79] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x79u))) & 0xffu);
/* 768d9e: mov byte ptr [esi + 0x79], cl */
  W8((uint32_t)(esi + 0x79u), (ecx & 0xffu));
/* 768da1: mov dl, byte ptr [edi + 0x7a] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x7au))) & 0xffu);
/* 768da4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768da5: mov byte ptr [esi + 0x7a], dl */
  W8((uint32_t)(esi + 0x7au), (edx & 0xffu));
/* 768da8: mov eax, esi */
  eax = esi;
/* 768daa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768dab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768dd0(void) {
  LOAD_REGS();
L_768dd0: /* 768dd0: jmp dword ptr [0xcfa4e4] */
  SPILL(); f_4e1bf4(); return; /* Core!??1FBitReader@@UAE@XZ */
}

void f_768df0(void) {
  LOAD_REGS();
L_768df0: /* 768df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768df1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768df2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 768df6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768df7: mov esi, ecx */
  esi = ecx;
/* 768df9: call dword ptr [0xcfa4f8] */
  esp -= 4; W32(esp, 0x768dffu); SPILL(); f_4e3170(); if (g_unwind) return; /* Core!??0FBitReader@@QAE@ABU0@@Z */ RELOAD();
/* 768dff: mov dword ptr [esi], 0xa069c8 */
  W32((uint32_t)(esi), 0xa069c8u);
/* 768e05: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 768e08: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 768e0b: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 768e0e: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 768e11: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 768e14: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 768e17: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 768e1a: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 768e1d: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 768e20: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 768e23: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 768e26: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 768e29: mov al, byte ptr [edi + 0x6c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6cu))) & 0xffu);
/* 768e2c: mov byte ptr [esi + 0x6c], al */
  W8((uint32_t)(esi + 0x6cu), (eax & 0xffu));
/* 768e2f: mov cl, byte ptr [edi + 0x6d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6du))) & 0xffu);
/* 768e32: mov byte ptr [esi + 0x6d], cl */
  W8((uint32_t)(esi + 0x6du), (ecx & 0xffu));
/* 768e35: mov dl, byte ptr [edi + 0x6e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6eu))) & 0xffu);
/* 768e38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768e39: mov byte ptr [esi + 0x6e], dl */
  W8((uint32_t)(esi + 0x6eu), (edx & 0xffu));
/* 768e3c: mov eax, esi */
  eax = esi;
/* 768e3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768e3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768e70(void) {
  LOAD_REGS();
L_768e70: /* 768e70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768e71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768e72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 768e76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768e77: mov esi, ecx */
  esi = ecx;
/* 768e79: call dword ptr [0xcfa4fc] */
  esp -= 4; W32(esp, 0x768e7fu); SPILL(); f_4e3323(); if (g_unwind) return; /* Core!??4FBitReader@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 768e7f: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 768e82: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 768e85: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 768e88: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 768e8b: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 768e8e: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 768e91: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 768e94: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 768e97: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 768e9a: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 768e9d: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 768ea0: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 768ea3: mov al, byte ptr [edi + 0x6c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6cu))) & 0xffu);
/* 768ea6: mov byte ptr [esi + 0x6c], al */
  W8((uint32_t)(esi + 0x6cu), (eax & 0xffu));
/* 768ea9: mov cl, byte ptr [edi + 0x6d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6du))) & 0xffu);
/* 768eac: mov byte ptr [esi + 0x6d], cl */
  W8((uint32_t)(esi + 0x6du), (ecx & 0xffu));
/* 768eaf: mov dl, byte ptr [edi + 0x6e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6eu))) & 0xffu);
/* 768eb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768eb3: mov byte ptr [esi + 0x6e], dl */
  W8((uint32_t)(esi + 0x6eu), (edx & 0xffu));
/* 768eb6: mov eax, esi */
  eax = esi;
/* 768eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768eb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768ee0(void) {
  LOAD_REGS();
L_768ee0: /* 768ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768ee1: mov esi, ecx */
  esi = ecx;
/* 768ee3: call 0x6ca40c */
  esp -= 4; W32(esp, 0x768ee8u); SPILL(); f_6ca40c(); if (g_unwind) return; RELOAD();
/* 768ee8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768eed: je 0x768efc */
  if (zf) goto L_768efc;
L_768eef: /* 768eef: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 768ef4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 768ef6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 768ef8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768ef9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x768efcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_768efc: /* 768efc: mov eax, esi */
  eax = esi;
/* 768efe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768eff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768f20(void) {
  LOAD_REGS();
L_768f20: /* 768f20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 768f21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 768f25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768f28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768f29: mov esi, ecx */
  esi = ecx;
/* 768f2b: je 0x768f5d */
  if (zf) goto L_768f5d;
L_768f2d: /* 768f2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 768f30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768f31: push 0x6ca40c */
  { uint32_t v = 0x6ca40cu; esp -= 4; W32(esp, v); }
/* 768f36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 768f39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768f3a: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 768f3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768f3d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x768f42u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 768f42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768f45: je 0x768f55 */
  if (zf) goto L_768f55;
L_768f47: /* 768f47: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 768f4d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 768f4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 768f51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 768f52: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x768f55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_768f55: /* 768f55: mov eax, edi */
  eax = edi;
/* 768f57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 768f58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 768f5a: ret 4 */
  esp += 8; SPILL(); return;
L_768f5d: /* 768f5d: mov ecx, esi */
  ecx = esi;
/* 768f5f: call 0x6ca40c */
  esp -= 4; W32(esp, 0x768f64u); SPILL(); f_6ca40c(); if (g_unwind) return; RELOAD();
/* 768f64: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 768f67: je 0x768f76 */
  if (zf) goto L_768f76;
L_768f69: /* 768f69: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 768f6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 768f70: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 768f72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 768f73: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x768f76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_768f76: /* 768f76: mov eax, esi */
  eax = esi;
/* 768f78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 768f79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 768f7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_768fa0(void) {
  LOAD_REGS();
L_768fa0: /* 768fa0: mov eax, 0xcf08e8 */
  eax = 0xcf08e8u;
/* 768fa5: ret  */
  esp += 4; SPILL(); return;
}

void f_768fc0(void) {
  LOAD_REGS();
L_768fc0: /* 768fc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 768fc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 768fc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 768fcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 768fcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768fd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768fd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768fd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 768fd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 768fda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 768fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 768fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 768fdd: push 0xcf08e8 */
  { uint32_t v = 0xcf08e8u; esp -= 4; W32(esp, v); }
/* 768fe2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x768fe8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 768fe8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 768feb: ret  */
  esp += 4; SPILL(); return;
}

void f_769000(void) {
  LOAD_REGS();
L_769000: /* 769000: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 769004: ret  */
  esp += 4; SPILL(); return;
}

void f_769020(void) {
  LOAD_REGS();
L_769020: /* 769020: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 769022: push 0x9cba85 */
  { uint32_t v = 0x9cba85u; esp -= 4; W32(esp, v); }
/* 769027: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76902d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76902e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 769035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769037: mov esi, ecx */
  esi = ecx;
/* 769039: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76903d: mov dword ptr [esi], 0xa06a38 */
  W32((uint32_t)(esi), 0xa06a38u);
/* 769043: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 76904b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x769051u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 769051: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 769054: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 769059: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x76905fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 76905f: mov ecx, esi */
  ecx = esi;
/* 769061: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 769069: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x76906fu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 76906f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 769073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769074: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76907b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76907e: ret  */
  esp += 4; SPILL(); return;
}

void f_7690a0(void) {
  LOAD_REGS();
L_7690a0: /* 7690a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7690a2: push 0x9cbaa9 */
  { uint32_t v = 0x9cbaa9u; esp -= 4; W32(esp, v); }
/* 7690a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7690ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7690ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7690b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7690b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7690b7: mov esi, ecx */
  esi = ecx;
/* 7690b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7690bd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7690c3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7690c3: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7690c6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7690ce: mov dword ptr [esi], 0xa06a38 */
  W32((uint32_t)(esi), 0xa06a38u);
/* 7690d4: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7690dau); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7690da: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7690de: mov eax, esi */
  eax = esi;
/* 7690e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7690e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7690e8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7690eb: ret  */
  esp += 4; SPILL(); return;
}

void f_769110(void) {
  LOAD_REGS();
L_769110: /* 769110: ret  */
  esp += 4; SPILL(); return;
}

void f_769130(void) {
  LOAD_REGS();
L_769130: /* 769130: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 769132: push 0x9cbac9 */
  { uint32_t v = 0x9cbac9u; esp -= 4; W32(esp, v); }
/* 769137: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76913d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76913e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 769145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769146: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769147: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 769148: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 76914c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76914d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76914e: mov ebx, ecx */
  ebx = ecx;
/* 769150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 769151: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 769155: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x76915bu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 76915b: mov dword ptr [ebx], 0xa06a38 */
  W32((uint32_t)(ebx), 0xa06a38u);
/* 769161: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 769164: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 769167: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 76916a: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 76916d: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 769170: lea eax, [ebp + 0x34] */
  eax = (uint32_t)(ebp + 0x34u);
/* 769173: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769174: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 769177: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 76917f: mov dword ptr [ebx + 0x30], edx */
  W32((uint32_t)(ebx + 0x30u), edx);
/* 769182: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x769188u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 769188: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* 76918b: mov dword ptr [ebx + 0x40], ecx */
  W32((uint32_t)(ebx + 0x40u), ecx);
/* 76918e: mov edx, dword ptr [ebp + 0x44] */
  edx = R32((uint32_t)(ebp + 0x44u));
/* 769191: mov dword ptr [ebx + 0x44], edx */
  W32((uint32_t)(ebx + 0x44u), edx);
/* 769194: lea esi, [ebp + 0x48] */
  esi = (uint32_t)(ebp + 0x48u);
/* 769197: lea edi, [ebx + 0x48] */
  edi = (uint32_t)(ebx + 0x48u);
/* 76919a: mov ecx, 0x80 */
  ecx = 0x80u;
/* 76919f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7691a1: lea esi, [ebp + 0x248] */
  esi = (uint32_t)(ebp + 0x248u);
/* 7691a7: lea edi, [ebx + 0x248] */
  edi = (uint32_t)(ebx + 0x248u);
/* 7691ad: mov ecx, 0x80 */
  ecx = 0x80u;
/* 7691b2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7691b4: mov eax, dword ptr [ebp + 0x448] */
  eax = R32((uint32_t)(ebp + 0x448u));
/* 7691ba: mov dword ptr [ebx + 0x448], eax */
  W32((uint32_t)(ebx + 0x448u), eax);
/* 7691c0: mov ecx, dword ptr [ebp + 0x44c] */
  ecx = R32((uint32_t)(ebp + 0x44cu));
/* 7691c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7691c7: mov dword ptr [ebx + 0x44c], ecx */
  W32((uint32_t)(ebx + 0x44cu), ecx);
/* 7691cd: mov edx, dword ptr [ebp + 0x450] */
  edx = R32((uint32_t)(ebp + 0x450u));
/* 7691d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7691d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7691d8: mov dword ptr [ebx + 0x450], edx */
  W32((uint32_t)(ebx + 0x450u), edx);
/* 7691de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7691df: mov eax, ebx */
  eax = ebx;
/* 7691e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7691e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7691e9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7691ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769220(void) {
  LOAD_REGS();
L_769220: /* 769220: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769222: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769223: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 769227: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769228: mov esi, ecx */
  esi = ecx;
/* 76922a: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x769230u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 769230: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 769233: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 769236: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 769239: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 76923c: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 76923f: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 769242: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769243: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 769246: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 769249: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x76924fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76924f: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 769252: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 769255: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 769258: mov ecx, edi */
  ecx = edi;
/* 76925a: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 76925d: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 769260: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 769262: mov edx, 0x100 */
  edx = 0x100u;
/* 769267: jmp 0x769270 */
  goto L_769270;
L_769270: /* 769270: mov bx, word ptr [ecx + eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax))) & 0xffffu);
/* 769274: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 769277: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76927a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76927b: jne 0x769270 */
  if (!zf) goto L_769270;
L_76927d: /* 76927d: lea eax, [esi + 0x248] */
  eax = (uint32_t)(esi + 0x248u);
/* 769283: mov edx, 0x100 */
  edx = 0x100u;
/* 769288: jmp 0x769290 */
  goto L_769290;
L_769290: /* 769290: mov bx, word ptr [eax + ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx))) & 0xffffu);
/* 769294: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 769297: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76929a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76929b: jne 0x769290 */
  if (!zf) goto L_769290;
L_76929d: /* 76929d: mov eax, dword ptr [edi + 0x448] */
  eax = R32((uint32_t)(edi + 0x448u));
/* 7692a3: mov dword ptr [esi + 0x448], eax */
  W32((uint32_t)(esi + 0x448u), eax);
/* 7692a9: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 7692af: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7692b5: mov edx, dword ptr [edi + 0x450] */
  edx = R32((uint32_t)(edi + 0x450u));
/* 7692bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7692bc: mov dword ptr [esi + 0x450], edx */
  W32((uint32_t)(esi + 0x450u), edx);
/* 7692c2: mov eax, esi */
  eax = esi;
/* 7692c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7692c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7692c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769269(void) {
  LOAD_REGS();
L_769269: /* 769269: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_769270: /* 769270: mov bx, word ptr [ecx + eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax))) & 0xffffu);
/* 769274: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 769277: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76927a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76927b: jne 0x769270 */
  if (!zf) goto L_769270;
L_76927d: /* 76927d: lea eax, [esi + 0x248] */
  eax = (uint32_t)(esi + 0x248u);
/* 769283: mov edx, 0x100 */
  edx = 0x100u;
/* 769288: jmp 0x769290 */
  goto L_769290;
L_769290: /* 769290: mov bx, word ptr [eax + ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx))) & 0xffffu);
/* 769294: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 769297: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76929a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76929b: jne 0x769290 */
  if (!zf) goto L_769290;
L_76929d: /* 76929d: mov eax, dword ptr [edi + 0x448] */
  eax = R32((uint32_t)(edi + 0x448u));
/* 7692a3: mov dword ptr [esi + 0x448], eax */
  W32((uint32_t)(esi + 0x448u), eax);
/* 7692a9: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 7692af: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7692b5: mov edx, dword ptr [edi + 0x450] */
  edx = R32((uint32_t)(edi + 0x450u));
/* 7692bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7692bc: mov dword ptr [esi + 0x450], edx */
  W32((uint32_t)(esi + 0x450u), edx);
/* 7692c2: mov eax, esi */
  eax = esi;
/* 7692c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7692c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7692c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76928a(void) {
  LOAD_REGS();
L_76928a: /* 76928a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_769290: /* 769290: mov bx, word ptr [eax + ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx))) & 0xffffu);
/* 769294: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 769297: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76929a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76929b: jne 0x769290 */
  if (!zf) goto L_769290;
L_76929d: /* 76929d: mov eax, dword ptr [edi + 0x448] */
  eax = R32((uint32_t)(edi + 0x448u));
/* 7692a3: mov dword ptr [esi + 0x448], eax */
  W32((uint32_t)(esi + 0x448u), eax);
/* 7692a9: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 7692af: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7692b5: mov edx, dword ptr [edi + 0x450] */
  edx = R32((uint32_t)(edi + 0x450u));
/* 7692bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7692bc: mov dword ptr [esi + 0x450], edx */
  W32((uint32_t)(esi + 0x450u), edx);
/* 7692c2: mov eax, esi */
  eax = esi;
/* 7692c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7692c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7692c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769300(void) {
  LOAD_REGS();
L_769300: /* 769300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769301: mov esi, ecx */
  esi = ecx;
/* 769303: call 0x6c907a */
  esp -= 4; W32(esp, 0x769308u); SPILL(); f_6c907a(); if (g_unwind) return; RELOAD();
/* 769308: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76930d: je 0x76931e */
  if (zf) goto L_76931e;
L_76930f: /* 76930f: push 0x454 */
  { uint32_t v = 0x454u; esp -= 4; W32(esp, v); }
/* 769314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769315: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76931bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76931b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76931e: /* 76931e: mov eax, esi */
  eax = esi;
/* 769320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769321: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769340(void) {
  LOAD_REGS();
L_769340: /* 769340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769341: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 769345: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769348: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769349: mov esi, ecx */
  esi = ecx;
/* 76934b: je 0x769380 */
  if (zf) goto L_769380;
L_76934d: /* 76934d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 769350: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769351: push 0x6c907a */
  { uint32_t v = 0x6c907au; esp -= 4; W32(esp, v); }
/* 769356: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 769359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76935a: push 0x454 */
  { uint32_t v = 0x454u; esp -= 4; W32(esp, v); }
/* 76935f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769360: call 0x99ca3d */
  esp -= 4; W32(esp, 0x769365u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 769365: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769368: je 0x769378 */
  if (zf) goto L_769378;
L_76936a: /* 76936a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 769370: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 769372: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 769374: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769375: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x769378u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_769378: /* 769378: mov eax, edi */
  eax = edi;
/* 76937a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76937b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76937c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76937d: ret 4 */
  esp += 8; SPILL(); return;
L_769380: /* 769380: mov ecx, esi */
  ecx = esi;
/* 769382: call 0x6c907a */
  esp -= 4; W32(esp, 0x769387u); SPILL(); f_6c907a(); if (g_unwind) return; RELOAD();
/* 769387: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76938a: je 0x76939b */
  if (zf) goto L_76939b;
L_76938c: /* 76938c: push 0x454 */
  { uint32_t v = 0x454u; esp -= 4; W32(esp, v); }
/* 769391: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769392: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x769398u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 769398: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76939b: /* 76939b: mov eax, esi */
  eax = esi;
/* 76939d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76939e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76939f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7693d0(void) {
  LOAD_REGS();
L_7693d0: /* 7693d0: mov eax, 0xcf0e18 */
  eax = 0xcf0e18u;
/* 7693d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7693f0(void) {
  LOAD_REGS();
L_7693f0: /* 7693f0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7693f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7693f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7693fb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7693ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769404: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 769408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76940a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76940b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76940c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76940d: push 0xcf0e18 */
  { uint32_t v = 0xcf0e18u; esp -= 4; W32(esp, v); }
/* 769412: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x769418u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 769418: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76941b: ret  */
  esp += 4; SPILL(); return;
}

void f_769430(void) {
  LOAD_REGS();
L_769430: /* 769430: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 769434: ret  */
  esp += 4; SPILL(); return;
}

void f_769450(void) {
  LOAD_REGS();
L_769450: /* 769450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 769452: push 0x9cbae8 */
  { uint32_t v = 0x9cbae8u; esp -= 4; W32(esp, v); }
/* 769457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76945d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76945e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 769465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769467: mov esi, ecx */
  esi = ecx;
/* 769469: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76946d: mov dword ptr [esi], 0xa06ad8 */
  W32((uint32_t)(esi), 0xa06ad8u);
/* 769473: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 76947b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x769481u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 769481: mov ecx, esi */
  ecx = esi;
/* 769483: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76948b: call 0x6c907a */
  esp -= 4; W32(esp, 0x769490u); SPILL(); f_6c907a(); if (g_unwind) return; RELOAD();
/* 769490: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 769494: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769495: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76949c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76949f: ret  */
  esp += 4; SPILL(); return;
}

void f_7694c0(void) {
  LOAD_REGS();
L_7694c0: /* 7694c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7694c2: push 0x9cbb09 */
  { uint32_t v = 0x9cbb09u; esp -= 4; W32(esp, v); }
/* 7694c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7694cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7694ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7694d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7694d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7694d7: mov esi, ecx */
  esi = ecx;
/* 7694d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7694dd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7694e3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7694e3: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7694e6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7694ee: mov dword ptr [esi], 0xa06a38 */
  W32((uint32_t)(esi), 0xa06a38u);
/* 7694f4: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7694fau); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7694fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7694fe: mov dword ptr [esi], 0xa06ad8 */
  W32((uint32_t)(esi), 0xa06ad8u);
/* 769504: mov eax, esi */
  eax = esi;
/* 769506: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769507: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76950e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 769511: ret  */
  esp += 4; SPILL(); return;
}

void f_769540(void) {
  LOAD_REGS();
L_769540: /* 769540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769541: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769542: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 769546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769547: mov esi, ecx */
  esi = ecx;
/* 769549: call 0x6c72ed */
  esp -= 4; W32(esp, 0x76954eu); SPILL(); f_6c72ed(); if (g_unwind) return; RELOAD();
/* 76954e: mov dword ptr [esi], 0xa06ad8 */
  W32((uint32_t)(esi), 0xa06ad8u);
/* 769554: mov eax, dword ptr [edi + 0x454] */
  eax = R32((uint32_t)(edi + 0x454u));
/* 76955a: mov dword ptr [esi + 0x454], eax */
  W32((uint32_t)(esi + 0x454u), eax);
/* 769560: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769561: mov eax, esi */
  eax = esi;
/* 769563: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769564: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769580(void) {
  LOAD_REGS();
L_769580: /* 769580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769582: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 769586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769587: mov esi, ecx */
  esi = ecx;
/* 769589: call 0x6cbf41 */
  esp -= 4; W32(esp, 0x76958eu); SPILL(); f_6cbf41(); if (g_unwind) return; RELOAD();
/* 76958e: mov eax, dword ptr [edi + 0x454] */
  eax = R32((uint32_t)(edi + 0x454u));
/* 769594: mov dword ptr [esi + 0x454], eax */
  W32((uint32_t)(esi + 0x454u), eax);
/* 76959a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76959b: mov eax, esi */
  eax = esi;
/* 76959d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76959e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7695c0(void) {
  LOAD_REGS();
L_7695c0: /* 7695c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7695c1: mov esi, ecx */
  esi = ecx;
/* 7695c3: call 0x6cc7a2 */
  esp -= 4; W32(esp, 0x7695c8u); SPILL(); f_6cc7a2(); if (g_unwind) return; RELOAD();
/* 7695c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7695cd: je 0x7695de */
  if (zf) goto L_7695de;
L_7695cf: /* 7695cf: push 0x458 */
  { uint32_t v = 0x458u; esp -= 4; W32(esp, v); }
/* 7695d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7695d5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7695dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7695db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7695de: /* 7695de: mov eax, esi */
  eax = esi;
/* 7695e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7695e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769600(void) {
  LOAD_REGS();
L_769600: /* 769600: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769601: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 769605: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769608: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769609: mov esi, ecx */
  esi = ecx;
/* 76960b: je 0x769640 */
  if (zf) goto L_769640;
L_76960d: /* 76960d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 769610: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769611: push 0x6cc7a2 */
  { uint32_t v = 0x6cc7a2u; esp -= 4; W32(esp, v); }
/* 769616: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 769619: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76961a: push 0x458 */
  { uint32_t v = 0x458u; esp -= 4; W32(esp, v); }
/* 76961f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769620: call 0x99ca3d */
  esp -= 4; W32(esp, 0x769625u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 769625: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769628: je 0x769638 */
  if (zf) goto L_769638;
L_76962a: /* 76962a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 769630: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 769632: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 769634: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769635: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x769638u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_769638: /* 769638: mov eax, edi */
  eax = edi;
/* 76963a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76963b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76963c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76963d: ret 4 */
  esp += 8; SPILL(); return;
L_769640: /* 769640: mov ecx, esi */
  ecx = esi;
/* 769642: call 0x6cc7a2 */
  esp -= 4; W32(esp, 0x769647u); SPILL(); f_6cc7a2(); if (g_unwind) return; RELOAD();
/* 769647: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76964a: je 0x76965b */
  if (zf) goto L_76965b;
L_76964c: /* 76964c: push 0x458 */
  { uint32_t v = 0x458u; esp -= 4; W32(esp, v); }
/* 769651: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769652: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x769658u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 769658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76965b: /* 76965b: mov eax, esi */
  eax = esi;
/* 76965d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76965e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76965f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769690(void) {
  LOAD_REGS();
L_769690: /* 769690: mov eax, 0xceefd0 */
  eax = 0xceefd0u;
/* 769695: ret  */
  esp += 4; SPILL(); return;
}

void f_7696b0(void) {
  LOAD_REGS();
L_7696b0: /* 7696b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7696b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7696b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7696bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7696bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7696c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7696c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7696c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7696c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7696ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7696cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7696cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7696cd: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 7696d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x7696d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 7696d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7696db: ret  */
  esp += 4; SPILL(); return;
}

void f_7696f0(void) {
  LOAD_REGS();
L_7696f0: /* 7696f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7696f4: ret  */
  esp += 4; SPILL(); return;
}

void f_769710(void) {
  LOAD_REGS();
L_769710: /* 769710: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 769713: ret  */
  esp += 4; SPILL(); return;
}

void f_769730(void) {
  LOAD_REGS();
L_769730: /* 769730: ret  */
  esp += 4; SPILL(); return;
}

void f_769750(void) {
  LOAD_REGS();
L_769750: /* 769750: mov eax, 0xced6d0 */
  eax = 0xced6d0u;
/* 769755: ret  */
  esp += 4; SPILL(); return;
}

void f_769770(void) {
  LOAD_REGS();
L_769770: /* 769770: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 769775: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 769777: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 76977b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 76977f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769781: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769784: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 769788: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76978a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76978b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76978c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76978d: push 0xced6d0 */
  { uint32_t v = 0xced6d0u; esp -= 4; W32(esp, v); }
/* 769792: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x769798u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 769798: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76979b: ret  */
  esp += 4; SPILL(); return;
}

void f_7697b0(void) {
  LOAD_REGS();
L_7697b0: /* 7697b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7697b4: ret  */
  esp += 4; SPILL(); return;
}

void f_7697d0(void) {
  LOAD_REGS();
L_7697d0: /* 7697d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7697d2: push 0x9cbb29 */
  { uint32_t v = 0x9cbb29u; esp -= 4; W32(esp, v); }
/* 7697d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7697dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7697de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7697e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7697e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7697e7: mov esi, ecx */
  esi = ecx;
/* 7697e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7697ed: mov dword ptr [esi], 0xa06b78 */
  W32((uint32_t)(esi), 0xa06b78u);
/* 7697f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7697fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x769801u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 769801: mov ecx, esi */
  ecx = esi;
/* 769803: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76980b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x769811u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 769811: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 769815: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769816: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76981d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 769820: ret  */
  esp += 4; SPILL(); return;
}

void f_769850(void) {
  LOAD_REGS();
L_769850: /* 769850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769851: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769852: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 769856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769857: mov esi, ecx */
  esi = ecx;
/* 769859: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x76985fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 76985f: mov dword ptr [esi], 0xa06b78 */
  W32((uint32_t)(esi), 0xa06b78u);
/* 769865: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 769868: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 76986b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 76986e: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 769871: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 769874: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 769877: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 76987a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 76987d: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 769880: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 769883: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 769886: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 769889: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 76988c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 76988f: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 769892: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 769895: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 769898: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 76989b: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 76989e: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 7698a1: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 7698a4: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 7698a7: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 7698aa: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 7698ad: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 7698b0: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 7698b3: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 7698b6: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 7698b9: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 7698bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7698bd: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 7698c0: mov eax, esi */
  eax = esi;
/* 7698c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7698c3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7698f0(void) {
  LOAD_REGS();
L_7698f0: /* 7698f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7698f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7698f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7698f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7698f7: mov esi, ecx */
  esi = ecx;
/* 7698f9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7698ffu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7698ff: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 769902: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 769905: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 769908: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 76990b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 76990e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 769911: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 769914: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 769917: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 76991a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 76991d: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 769920: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 769923: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 769926: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 769929: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 76992c: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 76992f: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 769932: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 769935: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 769938: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 76993b: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 76993e: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 769941: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 769944: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 769947: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 76994a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 76994d: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 769950: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 769953: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 769956: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769957: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 76995a: mov eax, esi */
  eax = esi;
/* 76995c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76995d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769980(void) {
  LOAD_REGS();
L_769980: /* 769980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769981: mov esi, ecx */
  esi = ecx;
/* 769983: call 0x6c2167 */
  esp -= 4; W32(esp, 0x769988u); SPILL(); f_6c2167(); if (g_unwind) return; RELOAD();
/* 769988: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76998d: je 0x76999b */
  if (zf) goto L_76999b;
L_76998f: /* 76998f: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 769991: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769992: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x769998u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 769998: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76999b: /* 76999b: mov eax, esi */
  eax = esi;
/* 76999d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76999e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7699c0(void) {
  LOAD_REGS();
L_7699c0: /* 7699c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7699c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7699c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7699c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7699c9: mov esi, ecx */
  esi = ecx;
/* 7699cb: je 0x7699fd */
  if (zf) goto L_7699fd;
L_7699cd: /* 7699cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7699d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7699d1: push 0x6c2167 */
  { uint32_t v = 0x6c2167u; esp -= 4; W32(esp, v); }
/* 7699d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7699d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7699da: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 7699dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7699dd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7699e2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7699e2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7699e5: je 0x7699f5 */
  if (zf) goto L_7699f5;
L_7699e7: /* 7699e7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7699ed: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7699ef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7699f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7699f2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7699f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7699f5: /* 7699f5: mov eax, edi */
  eax = edi;
/* 7699f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7699f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7699f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7699fa: ret 4 */
  esp += 8; SPILL(); return;
L_7699fd: /* 7699fd: mov ecx, esi */
  ecx = esi;
/* 7699ff: call 0x6c2167 */
  esp -= 4; W32(esp, 0x769a04u); SPILL(); f_6c2167(); if (g_unwind) return; RELOAD();
/* 769a04: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769a07: je 0x769a15 */
  if (zf) goto L_769a15;
L_769a09: /* 769a09: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 769a0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769a0c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x769a12u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 769a12: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_769a15: /* 769a15: mov eax, esi */
  eax = esi;
/* 769a17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769a18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 769a19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769a40(void) {
  LOAD_REGS();
L_769a40: /* 769a40: mov eax, 0xcedc00 */
  eax = 0xcedc00u;
/* 769a45: ret  */
  esp += 4; SPILL(); return;
}

void f_769a60(void) {
  LOAD_REGS();
L_769a60: /* 769a60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 769a65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 769a67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 769a6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 769a6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769a71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769a73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769a74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 769a78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769a7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 769a7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769a7d: push 0xcedc00 */
  { uint32_t v = 0xcedc00u; esp -= 4; W32(esp, v); }
/* 769a82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x769a88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 769a88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 769a8b: ret  */
  esp += 4; SPILL(); return;
}

void f_769aa0(void) {
  LOAD_REGS();
L_769aa0: /* 769aa0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 769aa4: ret  */
  esp += 4; SPILL(); return;
}

void f_769ac0(void) {
  LOAD_REGS();
L_769ac0: /* 769ac0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 769ac2: push 0x9cbb48 */
  { uint32_t v = 0x9cbb48u; esp -= 4; W32(esp, v); }
/* 769ac7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 769acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769ace: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 769ad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769ad6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769ad7: mov esi, ecx */
  esi = ecx;
/* 769ad9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 769add: mov dword ptr [esi], 0xa06c28 */
  W32((uint32_t)(esi), 0xa06c28u);
/* 769ae3: mov dword ptr [esi + 0x64], 0xa06c18 */
  W32((uint32_t)(esi + 0x64u), 0xa06c18u);
/* 769aea: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 769af2: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x769af8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 769af8: mov ecx, esi */
  ecx = esi;
/* 769afa: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 769b02: call 0x6c2167 */
  esp -= 4; W32(esp, 0x769b07u); SPILL(); f_6c2167(); if (g_unwind) return; RELOAD();
/* 769b07: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 769b0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769b0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 769b13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 769b16: ret  */
  esp += 4; SPILL(); return;
}

void f_769b40(void) {
  LOAD_REGS();
L_769b40: /* 769b40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 769b44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 769b46: je 0x769b4d */
  if (zf) goto L_769b4d;
L_769b48: /* 769b48: jmp 0x6c716c */
  SPILL(); f_6c716c(); return;
L_769b4d: /* 769b4d: ret  */
  esp += 4; SPILL(); return;
}

void f_769b60(void) {
  LOAD_REGS();
L_769b60: /* 769b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769b61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769b62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 769b66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769b67: mov esi, ecx */
  esi = ecx;
/* 769b69: call 0x6c2090 */
  esp -= 4; W32(esp, 0x769b6eu); SPILL(); f_6c2090(); if (g_unwind) return; RELOAD();
/* 769b6e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 769b70: je 0x769b77 */
  if (zf) goto L_769b77;
L_769b72: /* 769b72: lea eax, [edi + 0x64] */
  eax = (uint32_t)(edi + 0x64u);
/* 769b75: jmp 0x769b79 */
  goto L_769b79;
L_769b77: /* 769b77: xor eax, eax */
  eax = 0;
L_769b79: /* 769b79: lea edi, [esi + 0x64] */
  edi = (uint32_t)(esi + 0x64u);
/* 769b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769b7d: mov ecx, edi */
  ecx = edi;
/* 769b7f: call dword ptr [0xcfa420] */
  esp -= 4; W32(esp, 0x769b85u); SPILL(); f_4e2090(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@ABV0@@Z */ RELOAD();
/* 769b85: mov dword ptr [edi], 0xa06c18 */
  W32((uint32_t)(edi), 0xa06c18u);
/* 769b8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769b8c: mov dword ptr [esi], 0xa06c28 */
  W32((uint32_t)(esi), 0xa06c28u);
/* 769b92: mov eax, esi */
  eax = esi;
/* 769b94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769b95: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769bb0(void) {
  LOAD_REGS();
L_769bb0: /* 769bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769bb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769bb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 769bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769bb7: mov esi, ecx */
  esi = ecx;
/* 769bb9: call 0x6c422d */
  esp -= 4; W32(esp, 0x769bbeu); SPILL(); f_6c422d(); if (g_unwind) return; RELOAD();
/* 769bbe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 769bc0: je 0x769bd6 */
  if (zf) goto L_769bd6;
L_769bc2: /* 769bc2: lea eax, [edi + 0x64] */
  eax = (uint32_t)(edi + 0x64u);
/* 769bc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769bc6: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 769bc9: call dword ptr [0xcfa428] */
  esp -= 4; W32(esp, 0x769bcfu); SPILL(); f_4e3026(); if (g_unwind) return; /* Core!??4FOutputDevice@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 769bcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769bd0: mov eax, esi */
  eax = esi;
/* 769bd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769bd3: ret 4 */
  esp += 8; SPILL(); return;
L_769bd6: /* 769bd6: xor eax, eax */
  eax = 0;
/* 769bd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769bd9: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 769bdc: call dword ptr [0xcfa428] */
  esp -= 4; W32(esp, 0x769be2u); SPILL(); f_4e3026(); if (g_unwind) return; /* Core!??4FOutputDevice@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 769be2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769be3: mov eax, esi */
  eax = esi;
/* 769be5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769be6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769c00(void) {
  LOAD_REGS();
L_769c00: /* 769c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769c01: mov esi, ecx */
  esi = ecx;
/* 769c03: call 0x6ca439 */
  esp -= 4; W32(esp, 0x769c08u); SPILL(); f_6ca439(); if (g_unwind) return; RELOAD();
/* 769c08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769c0d: je 0x769c1b */
  if (zf) goto L_769c1b;
L_769c0f: /* 769c0f: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 769c11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769c12: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x769c18u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 769c18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_769c1b: /* 769c1b: mov eax, esi */
  eax = esi;
/* 769c1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769c1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769c40(void) {
  LOAD_REGS();
L_769c40: /* 769c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769c41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 769c45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769c48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769c49: mov esi, ecx */
  esi = ecx;
/* 769c4b: je 0x769c7d */
  if (zf) goto L_769c7d;
L_769c4d: /* 769c4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 769c50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769c51: push 0x6ca439 */
  { uint32_t v = 0x6ca439u; esp -= 4; W32(esp, v); }
/* 769c56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 769c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769c5a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 769c5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769c5d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x769c62u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 769c62: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769c65: je 0x769c75 */
  if (zf) goto L_769c75;
L_769c67: /* 769c67: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 769c6d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 769c6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 769c71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769c72: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x769c75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_769c75: /* 769c75: mov eax, edi */
  eax = edi;
/* 769c77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769c78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769c79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 769c7a: ret 4 */
  esp += 8; SPILL(); return;
L_769c7d: /* 769c7d: mov ecx, esi */
  ecx = esi;
/* 769c7f: call 0x6ca439 */
  esp -= 4; W32(esp, 0x769c84u); SPILL(); f_6ca439(); if (g_unwind) return; RELOAD();
/* 769c84: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769c87: je 0x769c95 */
  if (zf) goto L_769c95;
L_769c89: /* 769c89: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 769c8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769c8c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x769c92u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 769c92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_769c95: /* 769c95: mov eax, esi */
  eax = esi;
/* 769c97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769c98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 769c99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769cc0(void) {
  LOAD_REGS();
L_769cc0: /* 769cc0: mov eax, 0xcee130 */
  eax = 0xcee130u;
/* 769cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_769ce0(void) {
  LOAD_REGS();
L_769ce0: /* 769ce0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 769ce5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 769ce7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 769ceb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 769cef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769cf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769cf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769cf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 769cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769cfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 769cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769cfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769cfd: push 0xcee130 */
  { uint32_t v = 0xcee130u; esp -= 4; W32(esp, v); }
/* 769d02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x769d08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 769d08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 769d0b: ret  */
  esp += 4; SPILL(); return;
}

void f_769d20(void) {
  LOAD_REGS();
L_769d20: /* 769d20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 769d24: ret  */
  esp += 4; SPILL(); return;
}

void f_769d40(void) {
  LOAD_REGS();
L_769d40: /* 769d40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 769d44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 769d46: je 0x769d4d */
  if (zf) goto L_769d4d;
L_769d48: /* 769d48: jmp 0x6c38fa */
  SPILL(); f_6c38fa(); return;
L_769d4d: /* 769d4d: ret  */
  esp += 4; SPILL(); return;
}

void f_769d60(void) {
  LOAD_REGS();
L_769d60: /* 769d60: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 769d63: ret  */
  esp += 4; SPILL(); return;
}

void f_769d80(void) {
  LOAD_REGS();
L_769d80: /* 769d80: mov eax, 0xcee660 */
  eax = 0xcee660u;
/* 769d85: ret  */
  esp += 4; SPILL(); return;
}

void f_769da0(void) {
  LOAD_REGS();
L_769da0: /* 769da0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 769da5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 769da7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 769dab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 769daf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769db1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769db4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 769db8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 769dba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 769dbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769dbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769dbd: push 0xcee660 */
  { uint32_t v = 0xcee660u; esp -= 4; W32(esp, v); }
/* 769dc2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x769dc8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 769dc8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 769dcb: ret  */
  esp += 4; SPILL(); return;
}

void f_769de0(void) {
  LOAD_REGS();
L_769de0: /* 769de0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 769de4: ret  */
  esp += 4; SPILL(); return;
}

void f_769e00(void) {
  LOAD_REGS();
L_769e00: /* 769e00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 769e02: push 0x9cbb68 */
  { uint32_t v = 0x9cbb68u; esp -= 4; W32(esp, v); }
/* 769e07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 769e0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769e0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 769e15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 769e16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769e17: mov esi, ecx */
  esi = ecx;
/* 769e19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 769e1d: mov dword ptr [esi], 0xa06cc8 */
  W32((uint32_t)(esi), 0xa06cc8u);
/* 769e23: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 769e2b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x769e31u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 769e31: mov ecx, esi */
  ecx = esi;
/* 769e33: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 769e3b: call 0x6c2167 */
  esp -= 4; W32(esp, 0x769e40u); SPILL(); f_6c2167(); if (g_unwind) return; RELOAD();
/* 769e40: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 769e44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769e45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 769e4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 769e4f: ret  */
  esp += 4; SPILL(); return;
}

void f_769e70(void) {
  LOAD_REGS();
L_769e70: /* 769e70: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 769e74: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 769e76: je 0x769e7d */
  if (zf) goto L_769e7d;
L_769e78: /* 769e78: jmp 0x6c1974 */
  SPILL(); f_6c1974(); return;
L_769e7d: /* 769e7d: ret  */
  esp += 4; SPILL(); return;
}

void f_769e90(void) {
  LOAD_REGS();
L_769e90: /* 769e90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769e91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 769e92: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 769e96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769e97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769e98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 769e99: mov ebx, ecx */
  ebx = ecx;
/* 769e9b: call 0x6c2090 */
  esp -= 4; W32(esp, 0x769ea0u); SPILL(); f_6c2090(); if (g_unwind) return; RELOAD();
/* 769ea0: mov dword ptr [ebx], 0xa06cc8 */
  W32((uint32_t)(ebx), 0xa06cc8u);
/* 769ea6: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* 769ea9: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 769eac: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* 769eaf: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* 769eb2: lea esi, [ebp + 0x6c] */
  esi = (uint32_t)(ebp + 0x6cu);
/* 769eb5: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 769eb8: mov ecx, 0x80 */
  ecx = 0x80u;
/* 769ebd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 769ebf: mov edx, dword ptr [ebp + 0x26c] */
  edx = R32((uint32_t)(ebp + 0x26cu));
/* 769ec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769ec6: mov dword ptr [ebx + 0x26c], edx */
  W32((uint32_t)(ebx + 0x26cu), edx);
/* 769ecc: mov eax, dword ptr [ebp + 0x270] */
  eax = R32((uint32_t)(ebp + 0x270u));
/* 769ed2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769ed3: mov dword ptr [ebx + 0x270], eax */
  W32((uint32_t)(ebx + 0x270u), eax);
/* 769ed9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 769eda: mov eax, ebx */
  eax = ebx;
/* 769edc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 769edd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769f00(void) {
  LOAD_REGS();
L_769f00: /* 769f00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769f01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769f02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769f03: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 769f07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769f08: mov esi, ecx */
  esi = ecx;
/* 769f0a: call 0x6c422d */
  esp -= 4; W32(esp, 0x769f0fu); SPILL(); f_6c422d(); if (g_unwind) return; RELOAD();
/* 769f0f: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 769f12: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 769f15: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 769f18: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 769f1b: mov ecx, edi */
  ecx = edi;
/* 769f1d: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 769f20: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 769f22: mov edx, 0x100 */
  edx = 0x100u;
/* 769f27: jmp 0x769f30 */
  goto L_769f30;
L_769f30: /* 769f30: mov bx, word ptr [ecx + eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax))) & 0xffffu);
/* 769f34: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 769f37: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 769f3a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 769f3b: jne 0x769f30 */
  if (!zf) goto L_769f30;
L_769f3d: /* 769f3d: mov edx, dword ptr [edi + 0x26c] */
  edx = R32((uint32_t)(edi + 0x26cu));
/* 769f43: mov dword ptr [esi + 0x26c], edx */
  W32((uint32_t)(esi + 0x26cu), edx);
/* 769f49: mov eax, dword ptr [edi + 0x270] */
  eax = R32((uint32_t)(edi + 0x270u));
/* 769f4f: mov dword ptr [esi + 0x270], eax */
  W32((uint32_t)(esi + 0x270u), eax);
/* 769f55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769f56: mov eax, esi */
  eax = esi;
/* 769f58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 769f5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769f29(void) {
  LOAD_REGS();
L_769f29: /* 769f29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_769f30: /* 769f30: mov bx, word ptr [ecx + eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax))) & 0xffffu);
/* 769f34: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 769f37: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 769f3a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 769f3b: jne 0x769f30 */
  if (!zf) goto L_769f30;
L_769f3d: /* 769f3d: mov edx, dword ptr [edi + 0x26c] */
  edx = R32((uint32_t)(edi + 0x26cu));
/* 769f43: mov dword ptr [esi + 0x26c], edx */
  W32((uint32_t)(esi + 0x26cu), edx);
/* 769f49: mov eax, dword ptr [edi + 0x270] */
  eax = R32((uint32_t)(edi + 0x270u));
/* 769f4f: mov dword ptr [esi + 0x270], eax */
  W32((uint32_t)(esi + 0x270u), eax);
/* 769f55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769f56: mov eax, esi */
  eax = esi;
/* 769f58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 769f5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769f80(void) {
  LOAD_REGS();
L_769f80: /* 769f80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769f81: mov esi, ecx */
  esi = ecx;
/* 769f83: call 0x6cb7f8 */
  esp -= 4; W32(esp, 0x769f88u); SPILL(); f_6cb7f8(); if (g_unwind) return; RELOAD();
/* 769f88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769f8d: je 0x769f9e */
  if (zf) goto L_769f9e;
L_769f8f: /* 769f8f: push 0x274 */
  { uint32_t v = 0x274u; esp -= 4; W32(esp, v); }
/* 769f94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769f95: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x769f9bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 769f9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_769f9e: /* 769f9e: mov eax, esi */
  eax = esi;
/* 769fa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769fa1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_769fc0(void) {
  LOAD_REGS();
L_769fc0: /* 769fc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 769fc1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 769fc5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769fc9: mov esi, ecx */
  esi = ecx;
/* 769fcb: je 0x76a000 */
  if (zf) goto L_76a000;
L_769fcd: /* 769fcd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 769fd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769fd1: push 0x6cb7f8 */
  { uint32_t v = 0x6cb7f8u; esp -= 4; W32(esp, v); }
/* 769fd6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 769fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 769fda: push 0x274 */
  { uint32_t v = 0x274u; esp -= 4; W32(esp, v); }
/* 769fdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 769fe0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x769fe5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 769fe5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 769fe8: je 0x769ff8 */
  if (zf) goto L_769ff8;
L_769fea: /* 769fea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 769ff0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 769ff2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 769ff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 769ff5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x769ff8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_769ff8: /* 769ff8: mov eax, edi */
  eax = edi;
/* 769ffa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 769ffb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 769ffc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 769ffd: ret 4 */
  esp += 8; SPILL(); return;
L_76a000: /* 76a000: mov ecx, esi */
  ecx = esi;
/* 76a002: call 0x6cb7f8 */
  esp -= 4; W32(esp, 0x76a007u); SPILL(); f_6cb7f8(); if (g_unwind) return; RELOAD();
/* 76a007: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a00a: je 0x76a01b */
  if (zf) goto L_76a01b;
L_76a00c: /* 76a00c: push 0x274 */
  { uint32_t v = 0x274u; esp -= 4; W32(esp, v); }
/* 76a011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a012: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76a018u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76a018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76a01b: /* 76a01b: mov eax, esi */
  eax = esi;
/* 76a01d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a01e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76a01f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a050(void) {
  LOAD_REGS();
L_76a050: /* 76a050: mov eax, 0xcefc60 */
  eax = 0xcefc60u;
/* 76a055: ret  */
  esp += 4; SPILL(); return;
}

void f_76a070(void) {
  LOAD_REGS();
L_76a070: /* 76a070: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 76a075: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76a077: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 76a07b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 76a07f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a083: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a084: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 76a088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a08a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76a08b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a08c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a08d: push 0xcefc60 */
  { uint32_t v = 0xcefc60u; esp -= 4; W32(esp, v); }
/* 76a092: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x76a098u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 76a098: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76a09b: ret  */
  esp += 4; SPILL(); return;
}

void f_76a0b0(void) {
  LOAD_REGS();
L_76a0b0: /* 76a0b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 76a0b4: ret  */
  esp += 4; SPILL(); return;
}

void f_76a0d0(void) {
  LOAD_REGS();
L_76a0d0: /* 76a0d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a0d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76a0d6: je 0x76a0de */
  if (zf) goto L_76a0de;
L_76a0d8: /* 76a0d8: jmp dword ptr [0xcfa2b4] */
  SPILL(); f_4e39ae(); return; /* Core!?GetIndex@UObject@@QBEKXZ */
L_76a0de: /* 76a0de: xor eax, eax */
  eax = 0;
/* 76a0e0: ret  */
  esp += 4; SPILL(); return;
}

void f_76a100(void) {
  LOAD_REGS();
L_76a100: /* 76a100: mov eax, 0xcf0190 */
  eax = 0xcf0190u;
/* 76a105: ret  */
  esp += 4; SPILL(); return;
}

void f_76a120(void) {
  LOAD_REGS();
L_76a120: /* 76a120: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 76a125: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76a127: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 76a12b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 76a12f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a131: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a133: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a134: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 76a138: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a13a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76a13b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a13c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a13d: push 0xcf0190 */
  { uint32_t v = 0xcf0190u; esp -= 4; W32(esp, v); }
/* 76a142: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x76a148u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 76a148: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76a14b: ret  */
  esp += 4; SPILL(); return;
}

void f_76a160(void) {
  LOAD_REGS();
L_76a160: /* 76a160: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 76a164: ret  */
  esp += 4; SPILL(); return;
}

void f_76a180(void) {
  LOAD_REGS();
L_76a180: /* 76a180: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a184: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76a186: je 0x76a18d */
  if (zf) goto L_76a18d;
L_76a188: /* 76a188: jmp 0x6ca6f0 */
  SPILL(); f_6ca6f0(); return;
L_76a18d: /* 76a18d: ret  */
  esp += 4; SPILL(); return;
}

void f_76a1a0(void) {
  LOAD_REGS();
L_76a1a0: /* 76a1a0: mov eax, 1 */
  eax = 0x1u;
/* 76a1a5: ret  */
  esp += 4; SPILL(); return;
}

void f_76a1c0(void) {
  LOAD_REGS();
L_76a1c0: /* 76a1c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76a1c2: push 0x9cbb8c */
  { uint32_t v = 0x9cbb8cu; esp -= 4; W32(esp, v); }
/* 76a1c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76a1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a1ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76a1d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a1d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a1d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a1d8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76a1dc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76a1de: mov esi, ecx */
  esi = ecx;
/* 76a1e0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 76a1e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a1e4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 76a1e7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76a1eb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 76a1ed: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x76a1f3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 76a1f3: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* 76a1f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76a1f7: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 76a1fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76a202: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x76a208u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 76a208: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 76a20b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 76a20f: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 76a212: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76a213: mov eax, esi */
  eax = esi;
/* 76a215: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a216: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76a21d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76a220: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a250(void) {
  LOAD_REGS();
L_76a250: /* 76a250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a252: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76a256: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76a258: mov esi, ecx */
  esi = ecx;
/* 76a25a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 76a25d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a25e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 76a261: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 76a263: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x76a269u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76a269: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* 76a26c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76a26d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 76a270: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x76a276u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76a276: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 76a279: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 76a27c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76a27d: mov eax, esi */
  eax = esi;
/* 76a27f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a280: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a2a0(void) {
  LOAD_REGS();
L_76a2a0: /* 76a2a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 76a2a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a2a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 76a2a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a2c0(void) {
  LOAD_REGS();
L_76a2c0: /* 76a2c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 76a2c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a2c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 76a2c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a2e0(void) {
  LOAD_REGS();
L_76a2e0: /* 76a2e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 76a2e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a2e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 76a2e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a300(void) {
  LOAD_REGS();
L_76a300: /* 76a300: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 76a302: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a306: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 76a309: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a320(void) {
  LOAD_REGS();
L_76a320: /* 76a320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a324: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76a326: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 76a329: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76a32b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a340(void) {
  LOAD_REGS();
L_76a340: /* 76a340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a344: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76a346: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 76a349: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76a34b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a360(void) {
  LOAD_REGS();
L_76a360: /* 76a360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a364: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a366: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 76a369: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a36c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a380(void) {
  LOAD_REGS();
L_76a380: /* 76a380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a384: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a386: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 76a389: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a38c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a3a0(void) {
  LOAD_REGS();
L_76a3a0: /* 76a3a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a3a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a3a6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76a3a9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a3ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a3c0(void) {
  LOAD_REGS();
L_76a3c0: /* 76a3c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a3c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a3c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76a3c9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a3cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a3e0(void) {
  LOAD_REGS();
L_76a3e0: /* 76a3e0: mov eax, 1 */
  eax = 0x1u;
/* 76a3e5: ret  */
  esp += 4; SPILL(); return;
}

void f_76a400(void) {
  LOAD_REGS();
L_76a400: /* 76a400: mov eax, 1 */
  eax = 0x1u;
/* 76a405: ret  */
  esp += 4; SPILL(); return;
}

void f_76a420(void) {
  LOAD_REGS();
L_76a420: /* 76a420: mov eax, 1 */
  eax = 0x1u;
/* 76a425: ret  */
  esp += 4; SPILL(); return;
}

void f_76a440(void) {
  LOAD_REGS();
L_76a440: /* 76a440: mov eax, 1 */
  eax = 0x1u;
/* 76a445: ret  */
  esp += 4; SPILL(); return;
}

void f_76a460(void) {
  LOAD_REGS();
L_76a460: /* 76a460: mov eax, 1 */
  eax = 0x1u;
/* 76a465: ret  */
  esp += 4; SPILL(); return;
}

void f_76a480(void) {
  LOAD_REGS();
L_76a480: /* 76a480: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76a482: push 0x9cbbac */
  { uint32_t v = 0x9cbbacu; esp -= 4; W32(esp, v); }
/* 76a487: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76a48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a48e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76a495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a497: mov esi, ecx */
  esi = ecx;
/* 76a499: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76a49d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 76a4a0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 76a4a8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x76a4aeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 76a4ae: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 76a4b1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76a4b9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x76a4bfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 76a4bf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76a4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a4c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76a4cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76a4ce: ret  */
  esp += 4; SPILL(); return;
}

void f_76a4f0(void) {
  LOAD_REGS();
L_76a4f0: /* 76a4f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a4f4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a4f6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76a4f9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a4fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a510(void) {
  LOAD_REGS();
L_76a510: /* 76a510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a514: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a516: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76a519: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a51c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a530(void) {
  LOAD_REGS();
L_76a530: /* 76a530: mov eax, 1 */
  eax = 0x1u;
/* 76a535: ret  */
  esp += 4; SPILL(); return;
}

void f_76a550(void) {
  LOAD_REGS();
L_76a550: /* 76a550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76a554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a555: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76a557: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76a55du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76a55d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a570(void) {
  LOAD_REGS();
L_76a570: /* 76a570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a571: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 76a575: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76a577: je 0x76a58e */
  if (zf) goto L_76a58e;
L_76a579: /* 76a579: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 76a57e: mov ecx, esi */
  ecx = esi;
/* 76a580: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x76a586u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 76a586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76a588: je 0x76a58e */
  if (zf) goto L_76a58e;
L_76a58a: /* 76a58a: mov eax, esi */
  eax = esi;
/* 76a58c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a58d: ret  */
  esp += 4; SPILL(); return;
L_76a58e: /* 76a58e: xor eax, eax */
  eax = 0;
/* 76a590: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a591: ret  */
  esp += 4; SPILL(); return;
}

void f_76a5b0(void) {
  LOAD_REGS();
L_76a5b0: /* 76a5b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a5b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 76a5b5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76a5b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76a5b9: mov ecx, esi */
  ecx = esi;
/* 76a5bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76a5c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76a5c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76a5c3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a5c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a5c7: ret  */
  esp += 4; SPILL(); return;
}

void f_76a5e0(void) {
  LOAD_REGS();
L_76a5e0: /* 76a5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a5e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 76a5e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76a5e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76a5e9: mov ecx, esi */
  ecx = esi;
/* 76a5eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76a5f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76a5f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76a5f3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a5f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a5f7: ret  */
  esp += 4; SPILL(); return;
}

void f_76a610(void) {
  LOAD_REGS();
L_76a610: /* 76a610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a611: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 76a615: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 76a617: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76a619: mov ecx, esi */
  ecx = esi;
/* 76a61b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76a621u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76a621: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76a623: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 76a626: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76a628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a629: ret  */
  esp += 4; SPILL(); return;
}

void f_76a640(void) {
  LOAD_REGS();
L_76a640: /* 76a640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a641: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 76a645: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 76a647: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76a649: mov ecx, esi */
  ecx = esi;
/* 76a64b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76a651u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76a651: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76a653: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 76a656: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a659: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a65a: ret  */
  esp += 4; SPILL(); return;
}

void f_76a670(void) {
  LOAD_REGS();
L_76a670: /* 76a670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a671: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 76a675: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76a677: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76a679: mov ecx, esi */
  ecx = esi;
/* 76a67b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76a681u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76a681: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76a683: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76a686: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a689: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a68a: ret  */
  esp += 4; SPILL(); return;
}

void f_76a6a0(void) {
  LOAD_REGS();
L_76a6a0: /* 76a6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a6a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 76a6a5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76a6a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76a6a9: mov ecx, esi */
  ecx = esi;
/* 76a6ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76a6b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76a6b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76a6b3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76a6b6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a6b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a6ba: ret  */
  esp += 4; SPILL(); return;
}

void f_76a6d0(void) {
  LOAD_REGS();
L_76a6d0: /* 76a6d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a6d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76a6d6: je 0x76a6dd */
  if (zf) goto L_76a6dd;
L_76a6d8: /* 76a6d8: jmp 0x6c2d65 */
  SPILL(); f_6c2d65(); return;
L_76a6dd: /* 76a6dd: ret  */
  esp += 4; SPILL(); return;
}

void f_76a6f0(void) {
  LOAD_REGS();
L_76a6f0: /* 76a6f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76a6f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 76a6f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a6f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a6f9: mov esi, ecx */
  esi = ecx;
/* 76a6fb: je 0x76a72d */
  if (zf) goto L_76a72d;
L_76a6fd: /* 76a6fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 76a700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a701: push 0x6c420a */
  { uint32_t v = 0x6c420au; esp -= 4; W32(esp, v); }
/* 76a706: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 76a709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a70a: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 76a70c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a70d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76a712u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76a712: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a715: je 0x76a725 */
  if (zf) goto L_76a725;
L_76a717: /* 76a717: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76a71d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a71f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76a721: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a722: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76a725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76a725: /* 76a725: mov eax, edi */
  eax = edi;
/* 76a727: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76a728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a729: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76a72a: ret 4 */
  esp += 8; SPILL(); return;
L_76a72d: /* 76a72d: mov ecx, esi */
  ecx = esi;
/* 76a72f: call 0x6c420a */
  esp -= 4; W32(esp, 0x76a734u); SPILL(); f_6c420a(); if (g_unwind) return; RELOAD();
/* 76a734: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a737: je 0x76a745 */
  if (zf) goto L_76a745;
L_76a739: /* 76a739: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 76a73b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a73c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76a742u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76a742: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76a745: /* 76a745: mov eax, esi */
  eax = esi;
/* 76a747: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a748: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76a749: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a770(void) {
  LOAD_REGS();
L_76a770: /* 76a770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a771: mov esi, ecx */
  esi = ecx;
/* 76a773: call 0x6c1fcd */
  esp -= 4; W32(esp, 0x76a778u); SPILL(); f_6c1fcd(); if (g_unwind) return; RELOAD();
/* 76a778: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a77d: je 0x76a78c */
  if (zf) goto L_76a78c;
L_76a77f: /* 76a77f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 76a784: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76a786: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76a788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a789: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76a78cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76a78c: /* 76a78c: mov eax, esi */
  eax = esi;
/* 76a78e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a78f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a7b0(void) {
  LOAD_REGS();
L_76a7b0: /* 76a7b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76a7b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 76a7b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a7b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a7b9: mov esi, ecx */
  esi = ecx;
/* 76a7bb: je 0x76a7ed */
  if (zf) goto L_76a7ed;
L_76a7bd: /* 76a7bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 76a7c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a7c1: push 0x6c1fcd */
  { uint32_t v = 0x6c1fcdu; esp -= 4; W32(esp, v); }
/* 76a7c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 76a7c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a7ca: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 76a7cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a7cd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76a7d2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76a7d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a7d5: je 0x76a7e5 */
  if (zf) goto L_76a7e5;
L_76a7d7: /* 76a7d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76a7dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76a7df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76a7e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a7e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76a7e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76a7e5: /* 76a7e5: mov eax, edi */
  eax = edi;
/* 76a7e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76a7e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a7e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76a7ea: ret 4 */
  esp += 8; SPILL(); return;
L_76a7ed: /* 76a7ed: mov ecx, esi */
  ecx = esi;
/* 76a7ef: call 0x6c1fcd */
  esp -= 4; W32(esp, 0x76a7f4u); SPILL(); f_6c1fcd(); if (g_unwind) return; RELOAD();
/* 76a7f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76a7f7: je 0x76a806 */
  if (zf) goto L_76a806;
L_76a7f9: /* 76a7f9: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 76a7fe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76a800: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76a802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a803: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76a806u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76a806: /* 76a806: mov eax, esi */
  eax = esi;
/* 76a808: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a809: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76a80a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76a830(void) {
  LOAD_REGS();
L_76a830: /* 76a830: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76a834: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76a836: je 0x76a83d */
  if (zf) goto L_76a83d;
L_76a838: /* 76a838: jmp 0x6c52c7 */
  SPILL(); f_6c52c7(); return;
L_76a83d: /* 76a83d: ret  */
  esp += 4; SPILL(); return;
}

void f_76a850(void) {
  LOAD_REGS();
L_76a850: /* 76a850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76a851: mov ebp, esp */
  ebp = esp;
/* 76a853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76a855: push 0x9cbbc0 */
  { uint32_t v = 0x9cbbc0u; esp -= 4; W32(esp, v); }
/* 76a85a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76a860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76a868: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76a86b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 76a86e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 76a871: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76a872: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 76a873: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a874: mov esi, ecx */
  esi = ecx;
/* 76a876: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 76a879: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76a87c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a87d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76a880: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76a887: jne 0x76a89e */
  if (!zf) goto L_76a89e;
L_76a889: /* 76a889: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 76a88c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 76a88d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a88f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 76a892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a893: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 76a898: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x76a89eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76a89e: /* 76a89e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 76a8a4: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76a8a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a8a8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 76a8ab: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x76a8b1u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76a8b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76a8b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76a8b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a8b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76a8bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76a8be: mov esp, ebp */
  esp = ebp;
/* 76a8c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76a8c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76a8c4(void) {
  LOAD_REGS();
L_76a8c4: /* 76a8c4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76a8c7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76a8cc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 76a8cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a8d0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 76a8d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76a8d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76a8d8(); return;
}

void f_76a8d8(void) {
  LOAD_REGS();
L_76a8d8: /* 76a8d8: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 76a8de: push 0xa06d68 */
  { uint32_t v = 0xa06d68u; esp -= 4; W32(esp, v); }
/* 76a8e3: push 0xac3da8 */
  { uint32_t v = 0xac3da8u; esp -= 4; W32(esp, v); }
/* 76a8e8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76a8eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76a8ea: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76a8ed: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 76a8f0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 76a8f3: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 76a8f6: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 76a8fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76a8ff: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 76a901: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76a902: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a904: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76a906u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76a906: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76a909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a90a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a90c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76a90eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76a90e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a90f: push 0xac3db0 */
  { uint32_t v = 0xac3db0u; esp -= 4; W32(esp, v); }
/* 76a914: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76a916u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76a916: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76a919: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a91b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76a91d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76a922u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76a922: guest_badaddr(0x76a922); return;
}

void f_76a970(void) {
  LOAD_REGS();
L_76a970: /* 76a970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76a972: push 0x9cbbd9 */
  { uint32_t v = 0x9cbbd9u; esp -= 4; W32(esp, v); }
/* 76a977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76a97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a97e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76a985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76a986: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76a987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76a988: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76a989: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 76a98d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76a990: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76a992: mov esi, ecx */
  esi = ecx;
/* 76a994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76a995: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 76a999: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76a99fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76a99f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 76a9a6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76a9a9: xor ebx, ebx */
  ebx = 0;
/* 76a9ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76a9ad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76a9b5: jle 0x76a9db */
  if ((zf || sf != of)) goto L_76a9db;
L_76a9b7: /* 76a9b7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76a9b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76a9bb: mov ecx, esi */
  ecx = esi;
/* 76a9bd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76a9c3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76a9c3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76a9c5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76a9c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76a9ca: je 0x76a9d3 */
  if (zf) goto L_76a9d3;
L_76a9cc: /* 76a9cc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 76a9ce: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 76a9d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_76a9d3: /* 76a9d3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76a9d6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76a9d7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76a9d9: jl 0x76a9b7 */
  if ((sf != of)) goto L_76a9b7;
L_76a9db: /* 76a9db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76a9df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76a9e0: mov eax, esi */
  eax = esi;
/* 76a9e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76a9e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76a9e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76a9eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76a9ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76aa30(void) {
  LOAD_REGS();
L_76aa30: /* 76aa30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76aa32: push 0x9cbbf9 */
  { uint32_t v = 0x9cbbf9u; esp -= 4; W32(esp, v); }
/* 76aa37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76aa3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76aa3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76aa45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76aa46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76aa47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76aa48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76aa49: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 76aa4d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76aa50: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76aa52: mov esi, ecx */
  esi = ecx;
/* 76aa54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76aa55: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 76aa59: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76aa5fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76aa5f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 76aa66: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76aa69: xor ebx, ebx */
  ebx = 0;
/* 76aa6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76aa6d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76aa75: jle 0x76aa9b */
  if ((zf || sf != of)) goto L_76aa9b;
L_76aa77: /* 76aa77: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76aa79: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76aa7b: mov ecx, esi */
  ecx = esi;
/* 76aa7d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76aa83u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76aa83: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76aa85: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76aa88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76aa8a: je 0x76aa93 */
  if (zf) goto L_76aa93;
L_76aa8c: /* 76aa8c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 76aa8e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 76aa91: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_76aa93: /* 76aa93: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76aa96: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76aa97: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76aa99: jl 0x76aa77 */
  if ((sf != of)) goto L_76aa77;
L_76aa9b: /* 76aa9b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76aa9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76aaa0: mov eax, esi */
  eax = esi;
/* 76aaa2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76aaa3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76aaa4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76aaab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76aaae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76aaf0(void) {
  LOAD_REGS();
L_76aaf0: /* 76aaf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76aaf2: push 0x9cbc19 */
  { uint32_t v = 0x9cbc19u; esp -= 4; W32(esp, v); }
/* 76aaf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76aafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76aafe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76ab05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ab06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ab07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ab08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ab09: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 76ab0d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76ab10: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 76ab12: mov esi, ecx */
  esi = ecx;
/* 76ab14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ab15: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 76ab19: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76ab1fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76ab1f: xor ebx, ebx */
  ebx = 0;
/* 76ab21: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 76ab24: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ab27: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 76ab2b: jle 0x76ab5d */
  if ((zf || sf != of)) goto L_76ab5d;
L_76ab2d: /* 76ab2d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76ab2e: xor ebp, ebp */
  ebp = 0;
L_76ab30: /* 76ab30: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 76ab32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76ab34: mov ecx, esi */
  ecx = esi;
/* 76ab36: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76ab3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76ab3c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76ab3e: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 76ab41: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 76ab43: je 0x76ab51 */
  if (zf) goto L_76ab51;
L_76ab45: /* 76ab45: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 76ab47: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76ab49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ab4a: mov ecx, eax */
  ecx = eax;
/* 76ab4c: call 0x6c1104 */
  esp -= 4; W32(esp, 0x76ab51u); SPILL(); f_6c1104(); if (g_unwind) return; RELOAD();
L_76ab51: /* 76ab51: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76ab54: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76ab55: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76ab58: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ab5a: jl 0x76ab30 */
  if ((sf != of)) goto L_76ab30;
L_76ab5c: /* 76ab5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76ab5d: /* 76ab5d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76ab61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ab62: mov eax, esi */
  eax = esi;
/* 76ab64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ab65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ab66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ab6d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76ab70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76abb0(void) {
  LOAD_REGS();
L_76abb0: /* 76abb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76abb2: push 0x9cbc39 */
  { uint32_t v = 0x9cbc39u; esp -= 4; W32(esp, v); }
/* 76abb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76abbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76abbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76abc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76abc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76abc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76abc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76abc9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 76abcd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76abd0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76abd2: mov esi, ecx */
  esi = ecx;
/* 76abd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76abd5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 76abd9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76abdfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76abdf: xor ebx, ebx */
  ebx = 0;
/* 76abe1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 76abe4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76abe7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 76abeb: jle 0x76ac28 */
  if ((zf || sf != of)) goto L_76ac28;
L_76abed: /* 76abed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76abee: xor ebp, ebp */
  ebp = 0;
L_76abf0: /* 76abf0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76abf2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76abf4: mov ecx, esi */
  ecx = esi;
/* 76abf6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76abfcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76abfc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 76abfe: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 76ac01: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 76ac04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ac06: je 0x76ac1c */
  if (zf) goto L_76ac1c;
L_76ac08: /* 76ac08: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 76ac0a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76ac0c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76ac0e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 76ac10: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 76ac13: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 76ac16: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 76ac19: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_76ac1c: /* 76ac1c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76ac1f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76ac20: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76ac23: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ac25: jl 0x76abf0 */
  if ((sf != of)) goto L_76abf0;
L_76ac27: /* 76ac27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76ac28: /* 76ac28: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76ac2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ac2d: mov eax, esi */
  eax = esi;
/* 76ac2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ac30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ac31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ac38: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76ac3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76ac70(void) {
  LOAD_REGS();
L_76ac70: /* 76ac70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ac71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76ac72: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 76ac78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ac79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ac7a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 76ac7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76ac80: mov esi, ecx */
  esi = ecx;
/* 76ac82: jge 0x76ac98 */
  if ((sf == of)) goto L_76ac98;
L_76ac84: /* 76ac84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 76ac89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76ac8e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 76ac93: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76ac95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ac95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76ac98: /* 76ac98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ac9b: jle 0x76acb1 */
  if ((zf || sf != of)) goto L_76acb1;
L_76ac9d: /* 76ac9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76aca2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76aca7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76acac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76acaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76acae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76acb1: /* 76acb1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 76acb5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 76acb8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 76acbb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76acbd: jle 0x76acd3 */
  if ((zf || sf != of)) goto L_76acd3;
L_76acbf: /* 76acbf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76acc4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76acc9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76acce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76acd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76acd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76acd3: /* 76acd3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76acd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76acd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76acd7: mov ecx, esi */
  ecx = esi;
/* 76acd9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76acdfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76acdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ace0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ace1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ace2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ace3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76ad10(void) {
  LOAD_REGS();
L_76ad10: /* 76ad10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76ad14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ad15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76ad17: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76ad1du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76ad1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76ad30(void) {
  LOAD_REGS();
L_76ad30: /* 76ad30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ad31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76ad32: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 76ad38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ad39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ad3a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 76ad3e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76ad40: mov esi, ecx */
  esi = ecx;
/* 76ad42: jge 0x76ad58 */
  if ((sf == of)) goto L_76ad58;
L_76ad44: /* 76ad44: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 76ad49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76ad4e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 76ad53: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76ad55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ad55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76ad58: /* 76ad58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ad5b: jle 0x76ad71 */
  if ((zf || sf != of)) goto L_76ad71;
L_76ad5d: /* 76ad5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76ad62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76ad67: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76ad6c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76ad6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ad6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76ad71: /* 76ad71: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 76ad75: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 76ad78: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 76ad7b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ad7d: jle 0x76ad93 */
  if ((zf || sf != of)) goto L_76ad93;
L_76ad7f: /* 76ad7f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76ad84: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76ad89: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76ad8e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76ad90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ad90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76ad93: /* 76ad93: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76ad95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ad96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ad97: mov ecx, esi */
  ecx = esi;
/* 76ad99: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76ad9fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76ad9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ada0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ada1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ada2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ada3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76add0(void) {
  LOAD_REGS();
L_76add0: /* 76add0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76add4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76add5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76add7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76adddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76addd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76adf0(void) {
  LOAD_REGS();
L_76adf0: /* 76adf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76adf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76adf2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76adf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76adf4: mov esi, ecx */
  esi = ecx;
/* 76adf6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 76adf9: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76adff: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76ae01: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76ae03: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 76ae06: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 76ae0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ae0c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x76ae0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ae0e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 76ae11: mov ebp, eax */
  ebp = eax;
/* 76ae13: xor ebx, ebx */
  ebx = 0;
/* 76ae15: xor eax, eax */
  eax = 0;
/* 76ae17: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ae19: jle 0x76ae30 */
  if ((zf || sf != of)) goto L_76ae30;
L_76ae1b: /* 76ae1b: jmp 0x76ae20 */
  goto L_76ae20;
L_76ae20: /* 76ae20: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 76ae28: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 76ae2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76ae2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ae2e: jl 0x76ae20 */
  if ((sf != of)) goto L_76ae20;
L_76ae30: /* 76ae30: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ae33: jle 0x76ae7d */
  if ((zf || sf != of)) goto L_76ae7d;
L_76ae35: /* 76ae35: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 76ae39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ae3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_76ae40: /* 76ae40: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76ae44: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 76ae46: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76ae48: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 76ae4b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ae4d: je 0x76ae57 */
  if (zf) goto L_76ae57;
L_76ae4f: /* 76ae4f: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x76ae55u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 76ae55: jmp 0x76ae59 */
  goto L_76ae59;
L_76ae57: /* 76ae57: xor eax, eax */
  eax = 0;
L_76ae59: /* 76ae59: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 76ae5c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 76ae5d: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 76ae5f: mov eax, dword ptr [ebp + ecx*4] */
  eax = R32((uint32_t)(ebp + ecx*4));
/* 76ae63: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 76ae65: mov dword ptr [ebp + ecx*4], ebx */
  W32((uint32_t)(ebp + ecx*4), ebx);
/* 76ae69: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76ae6d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76ae70: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76ae71: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76ae74: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ae76: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 76ae7a: jl 0x76ae40 */
  if ((sf != of)) goto L_76ae40;
L_76ae7c: /* 76ae7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_76ae7d: /* 76ae7d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 76ae80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ae82: je 0x76ae92 */
  if (zf) goto L_76ae92;
L_76ae84: /* 76ae84: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76ae8a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76ae8c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76ae8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ae8f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76ae92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76ae92: /* 76ae92: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 76ae95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ae96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ae97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ae98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 76ae99: ret  */
  esp += 4; SPILL(); return;
}

void f_76ae1d(void) {
  LOAD_REGS();
L_76ae1d: /* 76ae1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_76ae20: /* 76ae20: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 76ae28: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 76ae2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76ae2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ae2e: jl 0x76ae20 */
  if ((sf != of)) goto L_76ae20;
L_76ae30: /* 76ae30: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ae33: jle 0x76ae7d */
  if ((zf || sf != of)) goto L_76ae7d;
L_76ae35: /* 76ae35: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 76ae39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ae3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_76ae40: /* 76ae40: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76ae44: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 76ae46: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76ae48: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 76ae4b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ae4d: je 0x76ae57 */
  if (zf) goto L_76ae57;
L_76ae4f: /* 76ae4f: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x76ae55u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 76ae55: jmp 0x76ae59 */
  goto L_76ae59;
L_76ae57: /* 76ae57: xor eax, eax */
  eax = 0;
L_76ae59: /* 76ae59: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 76ae5c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 76ae5d: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 76ae5f: mov eax, dword ptr [ebp + ecx*4] */
  eax = R32((uint32_t)(ebp + ecx*4));
/* 76ae63: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 76ae65: mov dword ptr [ebp + ecx*4], ebx */
  W32((uint32_t)(ebp + ecx*4), ebx);
/* 76ae69: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76ae6d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76ae70: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76ae71: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76ae74: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ae76: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 76ae7a: jl 0x76ae40 */
  if ((sf != of)) goto L_76ae40;
L_76ae7c: /* 76ae7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_76ae7d: /* 76ae7d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 76ae80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ae82: je 0x76ae92 */
  if (zf) goto L_76ae92;
L_76ae84: /* 76ae84: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76ae8a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76ae8c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76ae8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ae8f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76ae92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76ae92: /* 76ae92: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 76ae95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ae96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ae97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ae98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 76ae99: ret  */
  esp += 4; SPILL(); return;
}

void f_76aed0(void) {
  LOAD_REGS();
L_76aed0: /* 76aed0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76aed2: push 0x9cbc59 */
  { uint32_t v = 0x9cbc59u; esp -= 4; W32(esp, v); }
/* 76aed7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76aedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76aede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76aee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76aee6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76aee7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76aee8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76aee9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 76aeed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76aef0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76aef2: mov esi, ecx */
  esi = ecx;
/* 76aef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76aef5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 76aef9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76aeffu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76aeff: xor ebx, ebx */
  ebx = 0;
/* 76af01: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 76af04: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76af07: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 76af0b: jle 0x76af48 */
  if ((zf || sf != of)) goto L_76af48;
L_76af0d: /* 76af0d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76af0e: xor ebp, ebp */
  ebp = 0;
L_76af10: /* 76af10: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76af12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76af14: mov ecx, esi */
  ecx = esi;
/* 76af16: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76af1cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76af1c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 76af1e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 76af21: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 76af24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76af26: je 0x76af3c */
  if (zf) goto L_76af3c;
L_76af28: /* 76af28: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 76af2a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76af2c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76af2e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 76af30: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 76af33: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 76af36: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 76af39: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_76af3c: /* 76af3c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76af3f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76af40: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76af43: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76af45: jl 0x76af10 */
  if ((sf != of)) goto L_76af10;
L_76af47: /* 76af47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76af48: /* 76af48: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76af4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76af4d: mov eax, esi */
  eax = esi;
/* 76af4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76af50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76af51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76af58: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76af5b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76af90(void) {
  LOAD_REGS();
L_76af90: /* 76af90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76af91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76af92: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 76af98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76af99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76af9a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 76af9e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76afa0: mov esi, ecx */
  esi = ecx;
/* 76afa2: jge 0x76afb8 */
  if ((sf == of)) goto L_76afb8;
L_76afa4: /* 76afa4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 76afa9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76afae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 76afb3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76afb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76afb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76afb8: /* 76afb8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76afbb: jle 0x76afd1 */
  if ((zf || sf != of)) goto L_76afd1;
L_76afbd: /* 76afbd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76afc2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76afc7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76afcc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76afceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76afce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76afd1: /* 76afd1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 76afd5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 76afd8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 76afdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76afdd: jle 0x76aff3 */
  if ((zf || sf != of)) goto L_76aff3;
L_76afdf: /* 76afdf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76afe4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76afe9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76afee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76aff0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76aff0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76aff3: /* 76aff3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76aff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76aff6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76aff7: mov ecx, esi */
  ecx = esi;
/* 76aff9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76afffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76afff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b000: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76b002: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b003: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76b030(void) {
  LOAD_REGS();
L_76b030: /* 76b030: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76b034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b035: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76b037: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76b03du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76b03d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76b050(void) {
  LOAD_REGS();
L_76b050: /* 76b050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b051: mov esi, ecx */
  esi = ecx;
/* 76b053: call 0x6c2c34 */
  esp -= 4; W32(esp, 0x76b058u); SPILL(); f_6c2c34(); if (g_unwind) return; RELOAD();
/* 76b058: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76b05d: je 0x76b06c */
  if (zf) goto L_76b06c;
L_76b05f: /* 76b05f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 76b064: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76b066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76b068: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b069: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76b06cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76b06c: /* 76b06c: mov eax, esi */
  eax = esi;
/* 76b06e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b06f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76b090(void) {
  LOAD_REGS();
L_76b090: /* 76b090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b091: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76b092: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 76b098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b099: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b09a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 76b09e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b0a0: mov esi, ecx */
  esi = ecx;
/* 76b0a2: jge 0x76b0b8 */
  if ((sf == of)) goto L_76b0b8;
L_76b0a4: /* 76b0a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 76b0a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b0ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 76b0b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76b0b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b0b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b0b8: /* 76b0b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b0bb: jle 0x76b0d1 */
  if ((zf || sf != of)) goto L_76b0d1;
L_76b0bd: /* 76b0bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76b0c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b0c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76b0cc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76b0ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b0ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b0d1: /* 76b0d1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 76b0d5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 76b0d8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 76b0db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b0dd: jle 0x76b0f3 */
  if ((zf || sf != of)) goto L_76b0f3;
L_76b0df: /* 76b0df: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76b0e4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b0e9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76b0ee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76b0f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b0f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b0f3: /* 76b0f3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76b0f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b0f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b0f7: mov ecx, esi */
  ecx = esi;
/* 76b0f9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76b0ffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76b0ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b101: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76b102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b103: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76b130(void) {
  LOAD_REGS();
L_76b130: /* 76b130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b132: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b133: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 76b137: mov esi, ecx */
  esi = ecx;
/* 76b139: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b13b: je 0x76b18d */
  if (zf) goto L_76b18d;
L_76b13d: /* 76b13d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b141: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76b143: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76b149u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76b149: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b14c: xor ebx, ebx */
  ebx = 0;
/* 76b14e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b150: jle 0x76b18d */
  if ((zf || sf != of)) goto L_76b18d;
L_76b152: /* 76b152: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76b153: xor ebp, ebp */
  ebp = 0;
L_76b155: /* 76b155: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76b157: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76b159: mov ecx, esi */
  ecx = esi;
/* 76b15b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76b161u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76b161: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76b163: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76b166: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76b169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76b16b: je 0x76b181 */
  if (zf) goto L_76b181;
L_76b16d: /* 76b16d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 76b16f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 76b171: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 76b173: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76b175: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 76b178: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76b17b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 76b17e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_76b181: /* 76b181: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b184: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76b185: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76b188: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b18a: jl 0x76b155 */
  if ((sf != of)) goto L_76b155;
L_76b18c: /* 76b18c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76b18d: /* 76b18d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b18e: mov eax, esi */
  eax = esi;
/* 76b190: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b191: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b192: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76b1c0(void) {
  LOAD_REGS();
L_76b1c0: /* 76b1c0: mov eax, dword ptr [0xcee0e8] */
  eax = R32((uint32_t)(0xcee0e8u));
/* 76b1c5: ret  */
  esp += 4; SPILL(); return;
}

void f_76b1e0(void) {
  LOAD_REGS();
L_76b1e0: /* 76b1e0: mov eax, dword ptr [0xcee618] */
  eax = R32((uint32_t)(0xcee618u));
/* 76b1e5: ret  */
  esp += 4; SPILL(); return;
}

void f_76b200(void) {
  LOAD_REGS();
L_76b200: /* 76b200: mov eax, dword ptr [0xceeb48] */
  eax = R32((uint32_t)(0xceeb48u));
/* 76b205: ret  */
  esp += 4; SPILL(); return;
}

void f_76b220(void) {
  LOAD_REGS();
L_76b220: /* 76b220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b221: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 76b225: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76b227: je 0x76b23e */
  if (zf) goto L_76b23e;
L_76b229: /* 76b229: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 76b22e: mov ecx, esi */
  ecx = esi;
/* 76b230: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x76b236u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 76b236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76b238: je 0x76b23e */
  if (zf) goto L_76b23e;
L_76b23a: /* 76b23a: mov eax, esi */
  eax = esi;
/* 76b23c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b23d: ret  */
  esp += 4; SPILL(); return;
L_76b23e: /* 76b23e: xor eax, eax */
  eax = 0;
/* 76b240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b241: ret  */
  esp += 4; SPILL(); return;
}

void f_76b260(void) {
  LOAD_REGS();
L_76b260: /* 76b260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76b261: mov ebp, esp */
  ebp = esp;
/* 76b263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76b265: push 0x9cbc70 */
  { uint32_t v = 0x9cbc70u; esp -= 4; W32(esp, v); }
/* 76b26a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76b270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76b278: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76b27b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b27c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b27d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b27e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76b281: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76b288: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x76b28eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 76b28e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76b291: mov dword ptr [0xced6ac], eax */
  W32((uint32_t)(0xced6acu), eax);
/* 76b296: mov eax, dword ptr [0xcee0e8] */
  eax = R32((uint32_t)(0xcee0e8u));
/* 76b29b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b29c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b29d: mov dword ptr [eax + 0x44], 1 */
  W32((uint32_t)(eax + 0x44u), 0x1u);
/* 76b2a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76b2ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b2ac: mov esp, ebp */
  esp = ebp;
/* 76b2ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76b2af: ret  */
  esp += 4; SPILL(); return;
}

void f_76b2b0(void) {
  LOAD_REGS();
L_76b2b0: /* 76b2b0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76b2b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76b2b8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 76b2bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76b2bc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 76b2bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b2c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76b2c4(); return;
}

void f_76b2c4(void) {
  LOAD_REGS();
L_76b2c4: /* 76b2c4: push 0xa06db8 */
  { uint32_t v = 0xa06db8u; esp -= 4; W32(esp, v); }
/* 76b2c9: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 76b2ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76b2d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76b2d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b2d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b2d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b2db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b2e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76b2e0: guest_badaddr(0x76b2e0); return;
}

void f_76b320(void) {
  LOAD_REGS();
L_76b320: /* 76b320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76b321: mov ebp, esp */
  ebp = esp;
/* 76b323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76b325: push 0x9cbc80 */
  { uint32_t v = 0x9cbc80u; esp -= 4; W32(esp, v); }
/* 76b32a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76b330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76b338: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76b33b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b33c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b33d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b33e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76b341: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76b348: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x76b34eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 76b34e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76b351: mov dword ptr [0xced6b0], eax */
  W32((uint32_t)(0xced6b0u), eax);
/* 76b356: mov eax, dword ptr [0xcee618] */
  eax = R32((uint32_t)(0xcee618u));
/* 76b35b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b35c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b35d: mov dword ptr [eax + 0x44], 2 */
  W32((uint32_t)(eax + 0x44u), 0x2u);
/* 76b364: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76b36b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b36c: mov esp, ebp */
  esp = ebp;
/* 76b36e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76b36f: ret  */
  esp += 4; SPILL(); return;
}

void f_76b370(void) {
  LOAD_REGS();
L_76b370: /* 76b370: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76b373: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76b378: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 76b37b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76b37c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 76b37f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b384u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76b384(); return;
}

void f_76b384(void) {
  LOAD_REGS();
L_76b384: /* 76b384: push 0xa06e10 */
  { uint32_t v = 0xa06e10u; esp -= 4; W32(esp, v); }
/* 76b389: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 76b38e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76b394u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76b394: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b397: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b39b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b3a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76b3a0: guest_badaddr(0x76b3a0); return;
}

void f_76b3e0(void) {
  LOAD_REGS();
L_76b3e0: /* 76b3e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76b3e1: mov ebp, esp */
  ebp = esp;
/* 76b3e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76b3e5: push 0x9cbc90 */
  { uint32_t v = 0x9cbc90u; esp -= 4; W32(esp, v); }
/* 76b3ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76b3f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b3f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76b3f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76b3fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b3fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b3fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b3fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76b401: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76b408: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x76b40eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 76b40e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76b411: mov dword ptr [0xced6b4], eax */
  W32((uint32_t)(0xced6b4u), eax);
/* 76b416: mov eax, dword ptr [0xceeb48] */
  eax = R32((uint32_t)(0xceeb48u));
/* 76b41b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b41c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b41d: mov dword ptr [eax + 0x44], 3 */
  W32((uint32_t)(eax + 0x44u), 0x3u);
/* 76b424: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76b42b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b42c: mov esp, ebp */
  esp = ebp;
/* 76b42e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76b42f: ret  */
  esp += 4; SPILL(); return;
}

void f_76b430(void) {
  LOAD_REGS();
L_76b430: /* 76b430: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76b433: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76b438: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 76b43b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76b43c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 76b43f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b444u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76b444(); return;
}

void f_76b444(void) {
  LOAD_REGS();
L_76b444: /* 76b444: push 0xa06e60 */
  { uint32_t v = 0xa06e60u; esp -= 4; W32(esp, v); }
/* 76b449: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 76b44e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76b454u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76b454: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b457: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b459: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b45b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b460u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76b460: guest_badaddr(0x76b460); return;
}

void f_76b4a0(void) {
  LOAD_REGS();
L_76b4a0: /* 76b4a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76b4a1: mov ebp, esp */
  ebp = esp;
/* 76b4a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76b4a5: push 0x9cbca0 */
  { uint32_t v = 0x9cbca0u; esp -= 4; W32(esp, v); }
/* 76b4aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76b4b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b4b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76b4b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76b4bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b4bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b4bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76b4c0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 76b4c3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76b4c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b4c7: xor edi, edi */
  edi = 0;
/* 76b4c9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 76b4cc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 76b4cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76b4d0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76b4d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76b4d6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 76b4d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b4da: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 76b4df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b4e0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 76b4e3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x76b4e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b4e6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 76b4e9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 76b4ea: mov eax, edx */
  eax = edx;
/* 76b4ec: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 76b4ef: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76b4f2: jne 0x76b509 */
  if (!zf) goto L_76b509;
L_76b4f4: /* 76b4f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76b4f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76b4f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b4f9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76b4fc: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 76b502: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b503: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x76b509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76b509: /* 76b509: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 76b50c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b50e: mov esi, ecx */
  esi = ecx;
/* 76b510: je 0x76b553 */
  if (zf) goto L_76b553;
L_76b512: /* 76b512: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 76b517: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x76b51du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 76b51d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b51f: je 0x76b553 */
  if (zf) goto L_76b553;
L_76b521: /* 76b521: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 76b527: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b529: je 0x76b53a */
  if (zf) goto L_76b53a;
L_76b52b: /* 76b52b: push 0xceefd0 */
  { uint32_t v = 0xceefd0u; esp -= 4; W32(esp, v); }
/* 76b530: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x76b536u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 76b536: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b538: jne 0x76b561 */
  if (!zf) goto L_76b561;
L_76b53a: /* 76b53a: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 76b540: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b542: je 0x76b553 */
  if (zf) goto L_76b553;
L_76b544: /* 76b544: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 76b549: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x76b54fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 76b54f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b551: jne 0x76b561 */
  if (!zf) goto L_76b561;
L_76b553: /* 76b553: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 76b556: push 0xac3dd4 */
  { uint32_t v = 0xac3dd4u; esp -= 4; W32(esp, v); }
/* 76b55b: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x76b561u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_76b561: /* 76b561: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76b564: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b565: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b566: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76b56d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b56e: mov esp, ebp */
  esp = ebp;
/* 76b570: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76b571: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76b574(void) {
  LOAD_REGS();
L_76b574: /* 76b574: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 76b577: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76b57c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 76b57f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76b580: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 76b583: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b588u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76b588(); return;
}

void f_76b588(void) {
  LOAD_REGS();
L_76b588: /* 76b588: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 76b58e: push 0xa06eac */
  { uint32_t v = 0xa06eacu; esp -= 4; W32(esp, v); }
/* 76b593: push 0xac3ddc */
  { uint32_t v = 0xac3ddcu; esp -= 4; W32(esp, v); }
/* 76b598: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76b59au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b59a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76b59d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 76b5a0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 76b5a3: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 76b5a6: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 76b5ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b5af: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 76b5b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76b5b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b5b4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b5b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b5b6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76b5b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b5ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b5bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b5beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b5be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b5bf: push 0xac3de4 */
  { uint32_t v = 0xac3de4u; esp -= 4; W32(esp, v); }
/* 76b5c4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76b5c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b5c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b5c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b5cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b5cd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76b5d2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76b5d2: guest_badaddr(0x76b5d2); return;
}

void f_76b630(void) {
  LOAD_REGS();
L_76b630: /* 76b630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76b632: push 0x9cbcb9 */
  { uint32_t v = 0x9cbcb9u; esp -= 4; W32(esp, v); }
/* 76b637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76b63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b63e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76b645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76b646: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b647: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b648: mov esi, ecx */
  esi = ecx;
/* 76b64a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b64b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76b64f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 76b652: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b654: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 76b65a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76b662: jge 0x76b678 */
  if ((sf == of)) goto L_76b678;
L_76b664: /* 76b664: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76b669: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b66e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76b673: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b675u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b675: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b678: /* 76b678: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b67b: jle 0x76b691 */
  if ((zf || sf != of)) goto L_76b691;
L_76b67d: /* 76b67d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76b682: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b687: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76b68c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b68eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b68e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b691: /* 76b691: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76b693: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b694: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b696: mov ecx, esi */
  ecx = esi;
/* 76b698: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76b69eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76b69e: mov ecx, esi */
  ecx = esi;
/* 76b6a0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 76b6a8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x76b6aeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 76b6ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76b6b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b6b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b6b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b6b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76b6bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b6bf: ret  */
  esp += 4; SPILL(); return;
}

void f_76b6f0(void) {
  LOAD_REGS();
L_76b6f0: /* 76b6f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b6f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b6f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b6f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 76b6f7: mov esi, ecx */
  esi = ecx;
/* 76b6f9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b6fb: je 0x76b736 */
  if (zf) goto L_76b736;
L_76b6fd: /* 76b6fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b701: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76b703: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76b709u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76b709: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b70c: xor ebx, ebx */
  ebx = 0;
/* 76b70e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b710: jle 0x76b736 */
  if ((zf || sf != of)) goto L_76b736;
L_76b712: /* 76b712: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76b714: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76b716: mov ecx, esi */
  ecx = esi;
/* 76b718: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76b71eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76b71e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76b720: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76b723: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76b725: je 0x76b72e */
  if (zf) goto L_76b72e;
L_76b727: /* 76b727: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 76b729: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 76b72c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_76b72e: /* 76b72e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b731: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76b732: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b734: jl 0x76b712 */
  if ((sf != of)) goto L_76b712;
L_76b736: /* 76b736: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b737: mov eax, esi */
  eax = esi;
/* 76b739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b73a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b73b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76b760(void) {
  LOAD_REGS();
L_76b760: /* 76b760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76b762: push 0x9cbcd9 */
  { uint32_t v = 0x9cbcd9u; esp -= 4; W32(esp, v); }
/* 76b767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76b76d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b76e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76b775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76b776: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b777: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b778: mov esi, ecx */
  esi = ecx;
/* 76b77a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b77b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76b77f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 76b782: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b784: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 76b78a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76b792: jge 0x76b7a8 */
  if ((sf == of)) goto L_76b7a8;
L_76b794: /* 76b794: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76b799: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b79e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76b7a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b7a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b7a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b7a8: /* 76b7a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b7ab: jle 0x76b7c1 */
  if ((zf || sf != of)) goto L_76b7c1;
L_76b7ad: /* 76b7ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76b7b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b7b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76b7bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b7beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b7be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b7c1: /* 76b7c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76b7c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b7c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b7c6: mov ecx, esi */
  ecx = esi;
/* 76b7c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76b7ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76b7ce: mov ecx, esi */
  ecx = esi;
/* 76b7d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 76b7d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x76b7deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 76b7de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76b7e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b7e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b7e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b7e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76b7ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b7ef: ret  */
  esp += 4; SPILL(); return;
}

void f_76b820(void) {
  LOAD_REGS();
L_76b820: /* 76b820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b822: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b823: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 76b827: mov esi, ecx */
  esi = ecx;
/* 76b829: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b82b: je 0x76b866 */
  if (zf) goto L_76b866;
L_76b82d: /* 76b82d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b831: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76b833: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76b839u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76b839: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b83c: xor ebx, ebx */
  ebx = 0;
/* 76b83e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b840: jle 0x76b866 */
  if ((zf || sf != of)) goto L_76b866;
L_76b842: /* 76b842: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 76b844: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76b846: mov ecx, esi */
  ecx = esi;
/* 76b848: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76b84eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76b84e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76b850: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76b853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76b855: je 0x76b85e */
  if (zf) goto L_76b85e;
L_76b857: /* 76b857: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 76b859: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 76b85c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_76b85e: /* 76b85e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b861: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76b862: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b864: jl 0x76b842 */
  if ((sf != of)) goto L_76b842;
L_76b866: /* 76b866: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b867: mov eax, esi */
  eax = esi;
/* 76b869: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b86a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b86b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76b890(void) {
  LOAD_REGS();
L_76b890: /* 76b890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76b892: push 0x9cbcf9 */
  { uint32_t v = 0x9cbcf9u; esp -= 4; W32(esp, v); }
/* 76b897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76b89d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b89e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76b8a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76b8a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b8a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b8a8: mov esi, ecx */
  esi = ecx;
/* 76b8aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b8ab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76b8af: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 76b8b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b8b4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 76b8ba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76b8c2: jge 0x76b8d8 */
  if ((sf == of)) goto L_76b8d8;
L_76b8c4: /* 76b8c4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76b8c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b8ce: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76b8d3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b8d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b8d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b8d8: /* 76b8d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b8db: jle 0x76b8f1 */
  if ((zf || sf != of)) goto L_76b8f1;
L_76b8dd: /* 76b8dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76b8e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76b8e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76b8ec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76b8eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76b8ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76b8f1: /* 76b8f1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76b8f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b8f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76b8f6: mov ecx, esi */
  ecx = esi;
/* 76b8f8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76b8feu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76b8fe: mov ecx, esi */
  ecx = esi;
/* 76b900: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 76b908: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x76b90eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 76b90e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76b912: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b913: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b914: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b915: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76b91c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76b91f: ret  */
  esp += 4; SPILL(); return;
}

void f_76b950(void) {
  LOAD_REGS();
L_76b950: /* 76b950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76b951: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b952: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b953: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 76b957: mov esi, ecx */
  esi = ecx;
/* 76b959: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76b95b: je 0x76b9ad */
  if (zf) goto L_76b9ad;
L_76b95d: /* 76b95d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76b961: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76b963: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76b969u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76b969: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b96c: xor ebx, ebx */
  ebx = 0;
/* 76b96e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76b970: jle 0x76b9ad */
  if ((zf || sf != of)) goto L_76b9ad;
L_76b972: /* 76b972: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76b973: xor ebp, ebp */
  ebp = 0;
L_76b975: /* 76b975: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76b977: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76b979: mov ecx, esi */
  ecx = esi;
/* 76b97b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76b981u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76b981: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76b983: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 76b986: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 76b989: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76b98b: je 0x76b9a1 */
  if (zf) goto L_76b9a1;
L_76b98d: /* 76b98d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 76b98f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 76b991: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 76b993: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76b995: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 76b998: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76b99b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 76b99e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_76b9a1: /* 76b9a1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76b9a4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76b9a5: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76b9a8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76b9aa: jl 0x76b975 */
  if ((sf != of)) goto L_76b975;
L_76b9ac: /* 76b9ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76b9ad: /* 76b9ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b9ae: mov eax, esi */
  eax = esi;
/* 76b9b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b9b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76b9b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76b9e0(void) {
  LOAD_REGS();
L_76b9e0: /* 76b9e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76b9e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b9e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76b9e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76b9e7: mov esi, ecx */
  esi = ecx;
/* 76b9e9: call 0x6cb258 */
  esp -= 4; W32(esp, 0x76b9eeu); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 76b9ee: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 76b9f1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76b9f4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 76b9f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76b9f8: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 76b9fb: mov eax, esi */
  eax = esi;
/* 76b9fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76b9fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76ba20(void) {
  LOAD_REGS();
L_76ba20: /* 76ba20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ba21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ba22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76ba26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ba27: mov esi, ecx */
  esi = ecx;
/* 76ba29: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x76ba2eu); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 76ba2e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 76ba31: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76ba34: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 76ba37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ba38: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 76ba3b: mov eax, esi */
  eax = esi;
/* 76ba3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ba3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76ba60(void) {
  LOAD_REGS();
L_76ba60: /* 76ba60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ba61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ba62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76ba66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ba67: mov esi, ecx */
  esi = ecx;
/* 76ba69: call 0x6c152d */
  esp -= 4; W32(esp, 0x76ba6eu); SPILL(); f_6c152d(); if (g_unwind) return; RELOAD();
/* 76ba6e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 76ba71: mov ecx, esi */
  ecx = esi;
/* 76ba73: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 76ba76: call 0x6c69ce */
  esp -= 4; W32(esp, 0x76ba7bu); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 76ba7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ba7c: mov eax, esi */
  eax = esi;
/* 76ba7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ba7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76baa0(void) {
  LOAD_REGS();
L_76baa0: /* 76baa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76baa2: push 0x9cbd19 */
  { uint32_t v = 0x9cbd19u; esp -= 4; W32(esp, v); }
/* 76baa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76baad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76baae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76bab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76bab6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76bab7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76bab8: mov esi, ecx */
  esi = ecx;
/* 76baba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76babb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76babf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 76bac2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76bac4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 76baca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76bad2: jge 0x76bae8 */
  if ((sf == of)) goto L_76bae8;
L_76bad4: /* 76bad4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76bad9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76bade: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76bae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76bae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76bae5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76bae8: /* 76bae8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76baeb: jle 0x76bb01 */
  if ((zf || sf != of)) goto L_76bb01;
L_76baed: /* 76baed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76baf2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76baf7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76bafc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76bafeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76bafe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76bb01: /* 76bb01: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 76bb03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76bb04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76bb06: mov ecx, esi */
  ecx = esi;
/* 76bb08: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76bb0eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76bb0e: mov ecx, esi */
  ecx = esi;
/* 76bb10: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 76bb18: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x76bb1eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 76bb1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76bb22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76bb23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76bb24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76bb25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76bb2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76bb2f: ret  */
  esp += 4; SPILL(); return;
}

void f_76bb60(void) {
  LOAD_REGS();
L_76bb60: /* 76bb60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76bb61: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 76bb65: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76bb67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76bb68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76bb69: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 76bb6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76bb70: mov ebp, ecx */
  ebp = ecx;
/* 76bb72: jge 0x76bb88 */
  if ((sf == of)) goto L_76bb88;
L_76bb74: /* 76bb74: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 76bb79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76bb7e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 76bb83: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76bb85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76bb85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76bb88: /* 76bb88: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76bb8b: jle 0x76bba1 */
  if ((zf || sf != of)) goto L_76bba1;
L_76bb8d: /* 76bb8d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76bb92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76bb97: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76bb9c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76bb9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76bb9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76bba1: /* 76bba1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 76bba5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 76bba8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76bbab: jle 0x76bbc1 */
  if ((zf || sf != of)) goto L_76bbc1;
L_76bbad: /* 76bbad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76bbb2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76bbb7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76bbbc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76bbbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76bbbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76bbc1: /* 76bbc1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76bbc3: jge 0x76bbe0 */
  if ((sf == of)) goto L_76bbe0;
L_76bbc5: /* 76bbc5: mov esi, ebx */
  esi = ebx;
/* 76bbc7: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 76bbca: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 76bbcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_76bbd0: /* 76bbd0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 76bbd3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76bbd5: call 0x6c2c34 */
  esp -= 4; W32(esp, 0x76bbdau); SPILL(); f_6c2c34(); if (g_unwind) return; RELOAD();
/* 76bbda: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76bbdd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 76bbde: jne 0x76bbd0 */
  if (!zf) goto L_76bbd0;
L_76bbe0: /* 76bbe0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 76bbe4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 76bbe6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76bbe7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76bbe8: mov ecx, ebp */
  ecx = ebp;
/* 76bbea: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76bbf0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76bbf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76bbf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76bbf2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76bbf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76bbf4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76bc30(void) {
  LOAD_REGS();
L_76bc30: /* 76bc30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76bc31: mov esi, ecx */
  esi = ecx;
/* 76bc33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76bc36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76bc37: xor edi, edi */
  edi = 0;
/* 76bc39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76bc3b: jle 0x76bc55 */
  if ((zf || sf != of)) goto L_76bc55;
L_76bc3d: /* 76bc3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76bc3e: xor ebx, ebx */
  ebx = 0;
L_76bc40: /* 76bc40: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76bc42: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76bc44: call 0x6c2c34 */
  esp -= 4; W32(esp, 0x76bc49u); SPILL(); f_6c2c34(); if (g_unwind) return; RELOAD();
/* 76bc49: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76bc4c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 76bc4d: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 76bc50: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76bc52: jl 0x76bc40 */
  if ((sf != of)) goto L_76bc40;
L_76bc54: /* 76bc54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_76bc55: /* 76bc55: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 76bc59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76bc5a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 76bc5c: mov ecx, esi */
  ecx = esi;
/* 76bc5e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76bc64u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76bc64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76bc65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76bc66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76bc80(void) {
  LOAD_REGS();
L_76bc80: /* 76bc80: jmp 0x6c3e13 */
  SPILL(); f_6c3e13(); return;
}

void f_76bca0(void) {
  LOAD_REGS();
L_76bca0: /* 76bca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76bca2: push 0x9cbd52 */
  { uint32_t v = 0x9cbd52u; esp -= 4; W32(esp, v); }
/* 76bca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76bcad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76bcae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76bcb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76bcb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76bcb7: mov esi, ecx */
  esi = ecx;
/* 76bcb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76bcbd: mov dword ptr [esi], 0xa06f00 */
  W32((uint32_t)(esi), 0xa06f00u);
/* 76bcc3: mov dword ptr [esi + 0x28], 0xa06ef8 */
  W32((uint32_t)(esi + 0x28u), 0xa06ef8u);
/* 76bcca: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 76bcd2: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x76bcd8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 76bcd8: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 76bcde: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76bce3: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x76bce8u); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 76bce8: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 76bceb: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 76bcf0: call 0x6ca7fe */
  esp -= 4; W32(esp, 0x76bcf5u); SPILL(); f_6ca7fe(); if (g_unwind) return; RELOAD();
/* 76bcf5: mov ecx, esi */
  ecx = esi;
/* 76bcf7: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76bcff: call dword ptr [0xcfa2a0] */
  esp -= 4; W32(esp, 0x76bd05u); SPILL(); f_4e152d(); if (g_unwind) return; /* Core!??1USubsystem@@UAE@XZ */ RELOAD();
/* 76bd05: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76bd09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76bd0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76bd11: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76bd14: ret  */
  esp += 4; SPILL(); return;
}

void f_76bd40(void) {
  LOAD_REGS();
L_76bd40: /* 76bd40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76bd42: push 0x9cbd84 */
  { uint32_t v = 0x9cbd84u; esp -= 4; W32(esp, v); }
/* 76bd47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76bd4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76bd4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76bd55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76bd56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76bd57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76bd58: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76bd5c: mov esi, ecx */
  esi = ecx;
/* 76bd5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76bd5f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76bd63: call dword ptr [0xcfa2a8] */
  esp -= 4; W32(esp, 0x76bd69u); SPILL(); f_4e3887(); if (g_unwind) return; /* Core!??0USubsystem@@QAE@ABV0@@Z */ RELOAD();
/* 76bd69: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 76bd6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76bd6d: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 76bd70: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76bd78: mov dword ptr [esi], 0xa06f00 */
  W32((uint32_t)(esi), 0xa06f00u);
/* 76bd7e: mov dword ptr [esi + 0x28], 0xa06ef8 */
  W32((uint32_t)(esi + 0x28u), 0xa06ef8u);
/* 76bd85: call 0x6c5dee */
  esp -= 4; W32(esp, 0x76bd8au); SPILL(); f_6c5dee(); if (g_unwind) return; RELOAD();
/* 76bd8a: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 76bd8d: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 76bd90: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 76bd93: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 76bd96: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 76bd99: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 76bd9c: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 76bd9f: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 76bda2: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 76bda5: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 76bda8: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 76bdab: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 76bdae: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 76bdb1: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 76bdb4: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 76bdb7: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 76bdba: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 76bdbd: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 76bdc0: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 76bdc3: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 76bdc6: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 76bdc9: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 76bdcc: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 76bdcf: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 76bdd2: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 76bdd5: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 76bdd8: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 76bddb: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 76bdde: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 76bde1: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 76bde4: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 76bde7: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 76bdea: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 76bded: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 76bdf0: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 76bdf3: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 76bdf6: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 76bdfc: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 76be02: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 76be08: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 76be0e: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 76be14: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 76be1a: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 76be20: add edi, 0x90 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76be26: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 76be2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76be2d: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 76be33: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 76be38: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x76be3du); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 76be3d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 76be41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76be42: mov eax, esi */
  eax = esi;
/* 76be44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76be45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76be4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76be4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76beb0(void) {
  LOAD_REGS();
L_76beb0: /* 76beb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76beb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76beb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76beb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76beb7: mov esi, ecx */
  esi = ecx;
/* 76beb9: call dword ptr [0xcfa2ac] */
  esp -= 4; W32(esp, 0x76bebfu); SPILL(); f_4e3409(); if (g_unwind) return; /* Core!??4USubsystem@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76bebf: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 76bec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76bec3: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 76bec6: call 0x6c28d8 */
  esp -= 4; W32(esp, 0x76becbu); SPILL(); f_6c28d8(); if (g_unwind) return; RELOAD();
/* 76becb: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 76bece: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 76bed1: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 76bed4: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 76bed7: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 76beda: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 76bedd: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 76bee0: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 76bee3: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 76bee6: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 76bee9: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 76beec: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 76beef: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 76bef2: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 76bef5: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 76bef8: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 76befb: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 76befe: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 76bf01: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 76bf04: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 76bf07: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 76bf0a: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 76bf0d: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 76bf10: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 76bf13: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 76bf16: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 76bf19: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 76bf1c: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 76bf1f: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 76bf22: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 76bf25: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 76bf28: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 76bf2b: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 76bf2e: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 76bf31: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 76bf34: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 76bf37: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 76bf3d: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 76bf43: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 76bf49: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 76bf4f: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 76bf55: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 76bf5b: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 76bf61: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 76bf67: add edi, 0x90 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76bf6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76bf6e: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 76bf74: call 0x6caf0b */
  esp -= 4; W32(esp, 0x76bf79u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 76bf79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76bf7a: mov eax, esi */
  eax = esi;
/* 76bf7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76bf7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76bfc0(void) {
  LOAD_REGS();
L_76bfc0: /* 76bfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76bfc1: mov esi, ecx */
  esi = ecx;
/* 76bfc3: call 0x6c97c8 */
  esp -= 4; W32(esp, 0x76bfc8u); SPILL(); f_6c97c8(); if (g_unwind) return; RELOAD();
/* 76bfc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76bfcd: je 0x76bfde */
  if (zf) goto L_76bfde;
L_76bfcf: /* 76bfcf: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 76bfd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76bfd5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76bfdbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76bfdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76bfde: /* 76bfde: mov eax, esi */
  eax = esi;
/* 76bfe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76bfe1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c000(void) {
  LOAD_REGS();
L_76c000: /* 76c000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76c001: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 76c005: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c008: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c009: mov esi, ecx */
  esi = ecx;
/* 76c00b: je 0x76c040 */
  if (zf) goto L_76c040;
L_76c00d: /* 76c00d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 76c010: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c011: push 0x6c97c8 */
  { uint32_t v = 0x6c97c8u; esp -= 4; W32(esp, v); }
/* 76c016: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 76c019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c01a: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 76c01f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c020: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76c025u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76c025: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c028: je 0x76c038 */
  if (zf) goto L_76c038;
L_76c02a: /* 76c02a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76c030: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76c032: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76c034: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c035: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76c038u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76c038: /* 76c038: mov eax, edi */
  eax = edi;
/* 76c03a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c03b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c03c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76c03d: ret 4 */
  esp += 8; SPILL(); return;
L_76c040: /* 76c040: mov ecx, esi */
  ecx = esi;
/* 76c042: call 0x6c97c8 */
  esp -= 4; W32(esp, 0x76c047u); SPILL(); f_6c97c8(); if (g_unwind) return; RELOAD();
/* 76c047: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c04a: je 0x76c05b */
  if (zf) goto L_76c05b;
L_76c04c: /* 76c04c: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 76c051: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c052: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76c058u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76c058: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76c05b: /* 76c05b: mov eax, esi */
  eax = esi;
/* 76c05d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c05e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76c05f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c090(void) {
  LOAD_REGS();
L_76c090: /* 76c090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c092: push 0x9cbde0 */
  { uint32_t v = 0x9cbde0u; esp -= 4; W32(esp, v); }
/* 76c097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c09d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c09e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c0a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c0a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c0a7: mov esi, ecx */
  esi = ecx;
/* 76c0a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76c0ad: mov dword ptr [esi], 0xa06fb0 */
  W32((uint32_t)(esi), 0xa06fb0u);
/* 76c0b3: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 76c0bb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x76c0c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 76c0c1: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 76c0c7: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 76c0cc: call 0x6c1eec */
  esp -= 4; W32(esp, 0x76c0d1u); SPILL(); f_6c1eec(); if (g_unwind) return; RELOAD();
/* 76c0d1: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 76c0d7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 76c0dc: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x76c0e1u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 76c0e1: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 76c0e7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76c0ec: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x76c0f1u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 76c0f1: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 76c0f7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 76c0fc: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x76c101u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 76c101: mov ecx, esi */
  ecx = esi;
/* 76c103: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76c10b: call 0x6c2167 */
  esp -= 4; W32(esp, 0x76c110u); SPILL(); f_6c2167(); if (g_unwind) return; RELOAD();
/* 76c110: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76c114: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c115: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76c11c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76c11f: ret  */
  esp += 4; SPILL(); return;
}

void f_76c150(void) {
  LOAD_REGS();
L_76c150: /* 76c150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c152: push 0x9cbe32 */
  { uint32_t v = 0x9cbe32u; esp -= 4; W32(esp, v); }
/* 76c157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c15e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c167: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c168: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76c16c: mov esi, ecx */
  esi = ecx;
/* 76c16e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c16f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76c173: call 0x6c2090 */
  esp -= 4; W32(esp, 0x76c178u); SPILL(); f_6c2090(); if (g_unwind) return; RELOAD();
/* 76c178: mov dword ptr [esi], 0xa06fb0 */
  W32((uint32_t)(esi), 0xa06fb0u);
/* 76c17e: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 76c181: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 76c184: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 76c187: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 76c18a: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 76c18d: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 76c190: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 76c193: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 76c196: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 76c199: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 76c19c: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 76c19f: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 76c1a2: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 76c1a5: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 76c1a8: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 76c1ae: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 76c1b4: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 76c1ba: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 76c1c0: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 76c1c6: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 76c1cc: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 76c1d2: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 76c1d8: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 76c1de: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* 76c1e4: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 76c1ea: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 76c1f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c1f1: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 76c1f7: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76c1ff: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 76c205: call 0x6cb258 */
  esp -= 4; W32(esp, 0x76c20au); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 76c20a: lea edx, [edi + 0xa4] */
  edx = (uint32_t)(edi + 0xa4u);
/* 76c210: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76c211: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 76c217: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 76c21c: call 0x6cb258 */
  esp -= 4; W32(esp, 0x76c221u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 76c221: lea eax, [edi + 0xb0] */
  eax = (uint32_t)(edi + 0xb0u);
/* 76c227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c228: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 76c22e: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 76c233: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x76c238u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 76c238: add edi, 0xbc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76c23e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c23f: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 76c245: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 76c24a: call 0x6c1875 */
  esp -= 4; W32(esp, 0x76c24fu); SPILL(); f_6c1875(); if (g_unwind) return; RELOAD();
/* 76c24f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 76c253: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c254: mov eax, esi */
  eax = esi;
/* 76c256: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c257: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76c25e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76c261: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c2c0(void) {
  LOAD_REGS();
L_76c2c0: /* 76c2c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c2c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c2c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76c2c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c2c7: mov esi, ecx */
  esi = ecx;
/* 76c2c9: call 0x6c422d */
  esp -= 4; W32(esp, 0x76c2ceu); SPILL(); f_6c422d(); if (g_unwind) return; RELOAD();
/* 76c2ce: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 76c2d1: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 76c2d4: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 76c2d7: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 76c2da: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 76c2dd: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 76c2e0: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 76c2e3: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 76c2e6: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 76c2e9: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 76c2ec: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 76c2ef: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 76c2f2: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 76c2f5: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 76c2f8: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 76c2fe: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 76c304: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 76c30a: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 76c310: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 76c316: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 76c31c: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 76c322: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 76c328: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 76c32e: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* 76c334: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 76c33a: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 76c340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c341: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 76c347: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 76c34d: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x76c352u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 76c352: lea edx, [edi + 0xa4] */
  edx = (uint32_t)(edi + 0xa4u);
/* 76c358: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76c359: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 76c35f: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x76c364u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 76c364: lea eax, [edi + 0xb0] */
  eax = (uint32_t)(edi + 0xb0u);
/* 76c36a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c36b: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 76c371: call 0x6c5eac */
  esp -= 4; W32(esp, 0x76c376u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 76c376: add edi, 0xbc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76c37c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c37d: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 76c383: call 0x6cb24e */
  esp -= 4; W32(esp, 0x76c388u); SPILL(); f_6cb24e(); if (g_unwind) return; RELOAD();
/* 76c388: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c389: mov eax, esi */
  eax = esi;
/* 76c38b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c38c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c3d0(void) {
  LOAD_REGS();
L_76c3d0: /* 76c3d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c3d1: mov esi, ecx */
  esi = ecx;
/* 76c3d3: call 0x6c856c */
  esp -= 4; W32(esp, 0x76c3d8u); SPILL(); f_6c856c(); if (g_unwind) return; RELOAD();
/* 76c3d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c3dd: je 0x76c3ee */
  if (zf) goto L_76c3ee;
L_76c3df: /* 76c3df: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 76c3e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c3e5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76c3ebu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76c3eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76c3ee: /* 76c3ee: mov eax, esi */
  eax = esi;
/* 76c3f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c3f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c410(void) {
  LOAD_REGS();
L_76c410: /* 76c410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76c411: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 76c415: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c418: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c419: mov esi, ecx */
  esi = ecx;
/* 76c41b: je 0x76c450 */
  if (zf) goto L_76c450;
L_76c41d: /* 76c41d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 76c420: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c421: push 0x6c856c */
  { uint32_t v = 0x6c856cu; esp -= 4; W32(esp, v); }
/* 76c426: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 76c429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c42a: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 76c42f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c430: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76c435u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76c435: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c438: je 0x76c448 */
  if (zf) goto L_76c448;
L_76c43a: /* 76c43a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76c440: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76c442: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76c444: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c445: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76c448u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76c448: /* 76c448: mov eax, edi */
  eax = edi;
/* 76c44a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c44b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c44c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76c44d: ret 4 */
  esp += 8; SPILL(); return;
L_76c450: /* 76c450: mov ecx, esi */
  ecx = esi;
/* 76c452: call 0x6c856c */
  esp -= 4; W32(esp, 0x76c457u); SPILL(); f_6c856c(); if (g_unwind) return; RELOAD();
/* 76c457: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c45a: je 0x76c46b */
  if (zf) goto L_76c46b;
L_76c45c: /* 76c45c: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 76c461: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c462: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76c468u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76c468: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76c46b: /* 76c46b: mov eax, esi */
  eax = esi;
/* 76c46d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c46e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76c46f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c4a0(void) {
  LOAD_REGS();
L_76c4a0: /* 76c4a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c4a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c4a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76c4a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c4a7: mov esi, ecx */
  esi = ecx;
/* 76c4a9: call 0x6c152d */
  esp -= 4; W32(esp, 0x76c4aeu); SPILL(); f_6c152d(); if (g_unwind) return; RELOAD();
/* 76c4ae: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 76c4b1: mov ecx, esi */
  ecx = esi;
/* 76c4b3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 76c4b6: call 0x6c69ce */
  esp -= 4; W32(esp, 0x76c4bbu); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 76c4bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c4bc: mov eax, esi */
  eax = esi;
/* 76c4be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c4bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c4e0(void) {
  LOAD_REGS();
L_76c4e0: /* 76c4e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c4e2: push 0x9cbe58 */
  { uint32_t v = 0x9cbe58u; esp -= 4; W32(esp, v); }
/* 76c4e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c4ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c4ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c4f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c4f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c4f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c4f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76c4fc: mov esi, ecx */
  esi = ecx;
/* 76c4fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c4ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76c503: call 0x6c8f03 */
  esp -= 4; W32(esp, 0x76c508u); SPILL(); f_6c8f03(); if (g_unwind) return; RELOAD();
/* 76c508: xor eax, eax */
  eax = 0;
/* 76c50a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 76c50e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76c511: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 76c514: mov ecx, esi */
  ecx = esi;
/* 76c516: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 76c519: call 0x6c69ce */
  esp -= 4; W32(esp, 0x76c51eu); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 76c51e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 76c522: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c523: mov eax, esi */
  eax = esi;
/* 76c525: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c526: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76c52d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76c530: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c560(void) {
  LOAD_REGS();
L_76c560: /* 76c560: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c562: push 0x9cbe78 */
  { uint32_t v = 0x9cbe78u; esp -= 4; W32(esp, v); }
/* 76c567: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c56d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c56e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c575: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c577: mov esi, ecx */
  esi = ecx;
/* 76c579: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76c57d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 76c580: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76c582: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 76c58a: je 0x76c59a */
  if (zf) goto L_76c59a;
L_76c58c: /* 76c58c: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76c592: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76c594: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76c596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c597: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76c59au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76c59a: /* 76c59a: mov ecx, esi */
  ecx = esi;
/* 76c59c: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 76c5a3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 76c5aa: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76c5b2: call 0x6c5448 */
  esp -= 4; W32(esp, 0x76c5b7u); SPILL(); f_6c5448(); if (g_unwind) return; RELOAD();
/* 76c5b7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76c5bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c5bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76c5c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76c5c6: ret  */
  esp += 4; SPILL(); return;
}

void f_76c5f0(void) {
  LOAD_REGS();
L_76c5f0: /* 76c5f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c5f2: push 0x9cbe99 */
  { uint32_t v = 0x9cbe99u; esp -= 4; W32(esp, v); }
/* 76c5f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c5fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c5fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c607: mov esi, ecx */
  esi = ecx;
/* 76c609: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76c60d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76c610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76c613: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76c61b: call 0x6c18a2 */
  esp -= 4; W32(esp, 0x76c620u); SPILL(); f_6c18a2(); if (g_unwind) return; RELOAD();
/* 76c620: mov ecx, esi */
  ecx = esi;
/* 76c622: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76c62a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x76c630u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 76c630: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76c634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c635: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76c63c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76c63f: ret  */
  esp += 4; SPILL(); return;
}

void f_76c660(void) {
  LOAD_REGS();
L_76c660: /* 76c660: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76c661: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c662: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c663: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 76c667: mov esi, ecx */
  esi = ecx;
/* 76c669: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76c66b: je 0x76c6af */
  if (zf) goto L_76c6af;
L_76c66d: /* 76c66d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76c670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c671: call 0x6c496c */
  esp -= 4; W32(esp, 0x76c676u); SPILL(); f_6c496c(); if (g_unwind) return; RELOAD();
/* 76c676: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76c679: xor ebx, ebx */
  ebx = 0;
/* 76c67b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76c67d: jle 0x76c6af */
  if ((zf || sf != of)) goto L_76c6af;
L_76c67f: /* 76c67f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76c680: xor ebp, ebp */
  ebp = 0;
L_76c682: /* 76c682: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 76c684: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76c686: mov ecx, esi */
  ecx = esi;
/* 76c688: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76c68eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76c68e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76c690: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 76c693: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 76c695: je 0x76c6a3 */
  if (zf) goto L_76c6a3;
L_76c697: /* 76c697: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 76c699: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76c69b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c69c: mov ecx, eax */
  ecx = eax;
/* 76c69e: call 0x6c1104 */
  esp -= 4; W32(esp, 0x76c6a3u); SPILL(); f_6c1104(); if (g_unwind) return; RELOAD();
L_76c6a3: /* 76c6a3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76c6a6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76c6a7: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76c6aa: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76c6ac: jl 0x76c682 */
  if ((sf != of)) goto L_76c682;
L_76c6ae: /* 76c6ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76c6af: /* 76c6af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c6b0: mov eax, esi */
  eax = esi;
/* 76c6b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c6b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76c6b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c6e0(void) {
  LOAD_REGS();
L_76c6e0: /* 76c6e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76c6e1: mov ebp, esp */
  ebp = esp;
/* 76c6e3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 76c6e6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c6e8: push 0x9cbeb9 */
  { uint32_t v = 0x9cbeb9u; esp -= 4; W32(esp, v); }
/* 76c6ed: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c6f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c6f4: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c6fb: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76c6fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76c6ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c700: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76c703: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76c706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c707: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 76c709: mov ebx, ecx */
  ebx = ecx;
/* 76c70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c70c: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 76c710: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76c716u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76c716: xor eax, eax */
  eax = 0;
/* 76c718: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 76c71b: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76c71e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 76c722: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 76c726: jle 0x76c780 */
  if ((zf || sf != of)) goto L_76c780;
L_76c728: /* 76c728: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 76c72c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_76c730: /* 76c730: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 76c732: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76c734: mov ecx, ebx */
  ecx = ebx;
/* 76c736: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76c73cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76c73c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 76c73e: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 76c741: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 76c744: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76c746: je 0x76c765 */
  if (zf) goto L_76c765;
L_76c748: /* 76c748: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 76c74a: add esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76c74e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c74f: mov ecx, edi */
  ecx = edi;
/* 76c751: call 0x6cb258 */
  esp -= 4; W32(esp, 0x76c756u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 76c756: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 76c759: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 76c75c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 76c75f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76c762: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
L_76c765: /* 76c765: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 76c769: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 76c76d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 76c770: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76c771: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 76c774: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76c776: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 76c77a: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 76c77e: jl 0x76c730 */
  if ((sf != of)) goto L_76c730;
L_76c780: /* 76c780: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 76c784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76c785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c786: mov eax, ebx */
  eax = ebx;
/* 76c788: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76c78f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76c790: mov esp, ebp */
  esp = ebp;
/* 76c792: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76c793: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c7d0(void) {
  LOAD_REGS();
L_76c7d0: /* 76c7d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c7d1: mov esi, ecx */
  esi = ecx;
/* 76c7d3: call 0x6c8f21 */
  esp -= 4; W32(esp, 0x76c7d8u); SPILL(); f_6c8f21(); if (g_unwind) return; RELOAD();
/* 76c7d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76c7dd: je 0x76c7ec */
  if (zf) goto L_76c7ec;
L_76c7df: /* 76c7df: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 76c7e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76c7e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76c7e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c7e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76c7ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76c7ec: /* 76c7ec: mov eax, esi */
  eax = esi;
/* 76c7ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c7ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76c810(void) {
  LOAD_REGS();
L_76c810: /* 76c810: jmp 0x6c4cd2 */
  SPILL(); f_6c4cd2(); return;
}

void f_76c830(void) {
  LOAD_REGS();
L_76c830: /* 76c830: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76c834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c836: mov esi, ecx */
  esi = ecx;
/* 76c838: call 0x6c4534 */
  esp -= 4; W32(esp, 0x76c83du); SPILL(); f_6c4534(); if (g_unwind) return; RELOAD();
/* 76c83d: mov eax, esi */
  eax = esi;
/* 76c83f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c840: ret 4 */
  esp += 8; SPILL(); return;
}
