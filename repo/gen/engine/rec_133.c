#include "recomp.h"
#include "rec_mod.h"

void f_94f230(void) {
  LOAD_REGS();
L_94f230: /* 94f230: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f231: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 94f235: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f237: jne 0x94f24f */
  if (!zf) goto L_94f24f;
L_94f239: /* 94f239: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94f23d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f23e: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 94f242: mov dword ptr [esp + 8], 0xaf4204 */
  W32((uint32_t)(esp + 0x8u), 0xaf4204u);
/* 94f24a: jmp 0x953470 */
  SPILL(); f_953470(); return;
L_94f24f: /* 94f24f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94f251: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f253: mov esi, dword ptr [edi + eax*4 + 4] */
  esi = R32((uint32_t)(edi + eax*4 + 0x4u));
/* 94f257: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f259: je 0x94f25e */
  if (zf) goto L_94f25e;
L_94f25b: /* 94f25b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 94f25c: jmp 0x94f260 */
  goto L_94f260;
L_94f25e: /* 94f25e: mov esi, eax */
  esi = eax;
L_94f260: /* 94f260: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 94f264: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 94f268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f269: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f26a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f26b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f26c: push 0xaf41e0 */
  { uint32_t v = 0xaf41e0u; esp -= 4; W32(esp, v); }
/* 94f271: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f272: call 0x953470 */
  esp -= 4; W32(esp, 0x94f277u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f277: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94f279: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f27c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f27e: jle 0x94f283 */
  if ((zf || sf != of)) goto L_94f283;
L_94f280: /* 94f280: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_94f283: /* 94f283: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94f285: jle 0x94f2a7 */
  if ((zf || sf != of)) goto L_94f2a7;
L_94f287: /* 94f287: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94f28a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_94f290: /* 94f290: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94f292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f293: push 0xaf41dc */
  { uint32_t v = 0xaf41dcu; esp -= 4; W32(esp, v); }
/* 94f298: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f299: call 0x953470 */
  esp -= 4; W32(esp, 0x94f29eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f29e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f2a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94f2a4: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 94f2a5: jne 0x94f290 */
  if (!zf) goto L_94f290;
L_94f2a7: /* 94f2a7: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 94f2ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f2ad: call 0x953470 */
  esp -= 4; W32(esp, 0x94f2b2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f2b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f2b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f2b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94f2b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f2b8: ret  */
  esp += 4; SPILL(); return;
}

void f_94f2c0(void) {
  LOAD_REGS();
L_94f2c0: /* 94f2c0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94f2c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f2c5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94f2c9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94f2cc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f2ce: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 94f2d1: je 0x94f2e1 */
  if (zf) goto L_94f2e1;
L_94f2d3: /* 94f2d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f2d5: je 0x94f2ee */
  if (zf) goto L_94f2ee;
L_94f2d7: /* 94f2d7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 94f2da: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94f2dd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f2df: jne 0x94f2d3 */
  if (!zf) goto L_94f2d3;
L_94f2e1: /* 94f2e1: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f2e4: je 0x94f2ee */
  if (zf) goto L_94f2ee;
L_94f2e6: /* 94f2e6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94f2ea: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 94f2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f2ed: ret  */
  esp += 4; SPILL(); return;
L_94f2ee: /* 94f2ee: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94f2f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f2f5: push 0xaf4218 */
  { uint32_t v = 0xaf4218u; esp -= 4; W32(esp, v); }
/* 94f2fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f2fb: call 0x953470 */
  esp -= 4; W32(esp, 0x94f300u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f300: mov edx, dword ptr [0xcf2f4c] */
  edx = R32((uint32_t)(0xcf2f4cu));
/* 94f306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f307: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 94f30c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f30d: call 0x94f230 */
  esp -= 4; W32(esp, 0x94f312u); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94f312: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f315: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f316: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 94f31e: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 94f326: mov dword ptr [esp + 4], 5 */
  W32((uint32_t)(esp + 0x4u), 0x5u);
/* 94f32e: jmp 0x9535b0 */
  SPILL(); f_9535b0(); return;
}

void f_94f340(void) {
  LOAD_REGS();
L_94f340: /* 94f340: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f341: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 94f345: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f347: jne 0x94f34d */
  if (!zf) goto L_94f34d;
L_94f349: /* 94f349: xor eax, eax */
  eax = 0;
/* 94f34b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f34c: ret  */
  esp += 4; SPILL(); return;
L_94f34d: /* 94f34d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94f34f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f350: mov esi, dword ptr [edi + eax*4 + 4] */
  esi = R32((uint32_t)(edi + eax*4 + 0x4u));
/* 94f354: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f356: je 0x94f394 */
  if (zf) goto L_94f394;
L_94f358: /* 94f358: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 94f359: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f35b: jle 0x94f396 */
  if ((zf || sf != of)) goto L_94f396;
L_94f35d: /* 94f35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f35e: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94f363: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f364: push 0xaf4260 */
  { uint32_t v = 0xaf4260u; esp -= 4; W32(esp, v); }
/* 94f369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f36a: call 0x953470 */
  esp -= 4; W32(esp, 0x94f36fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f36f: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94f375: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f376: push 0xaf4258 */
  { uint32_t v = 0xaf4258u; esp -= 4; W32(esp, v); }
/* 94f37b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f37c: call 0x94f230 */
  esp -= 4; W32(esp, 0x94f381u); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94f381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f383: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f385: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94f387: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94f38cu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94f38c: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f38f: mov eax, esi */
  eax = esi;
/* 94f391: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f392: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f393: ret  */
  esp += 4; SPILL(); return;
L_94f394: /* 94f394: mov esi, eax */
  esi = eax;
L_94f396: /* 94f396: mov eax, esi */
  eax = esi;
/* 94f398: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f399: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f39a: ret  */
  esp += 4; SPILL(); return;
}

void f_94f3a0(void) {
  LOAD_REGS();
L_94f3a0: /* 94f3a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94f3a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f3a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f3a6: call 0x94f020 */
  esp -= 4; W32(esp, 0x94f3abu); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 94f3ab: mov esi, eax */
  esi = eax;
/* 94f3ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f3ae: push 0xcf2f48 */
  { uint32_t v = 0xcf2f48u; esp -= 4; W32(esp, v); }
/* 94f3b3: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x94f3b8u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 94f3b8: mov eax, dword ptr [0xcf2f50] */
  eax = R32((uint32_t)(0xcf2f50u));
/* 94f3bd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f3c0: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f3c3: jl 0x94f3e9 */
  if ((sf != of)) goto L_94f3e9;
L_94f3c5: /* 94f3c5: mov ecx, dword ptr [0xcf2f48] */
  ecx = R32((uint32_t)(0xcf2f48u));
/* 94f3cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f3cc: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f3d1u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f3d1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94f3d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f3d4: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94f3d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f3da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f3db: push 0xaf42b8 */
  { uint32_t v = 0xaf42b8u; esp -= 4; W32(esp, v); }
/* 94f3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f3e1: call 0x953470 */
  esp -= 4; W32(esp, 0x94f3e6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f3e6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f3e9: /* 94f3e9: mov eax, esi */
  eax = esi;
/* 94f3eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f3ec: ret  */
  esp += 4; SPILL(); return;
}

void f_94f3f0(void) {
  LOAD_REGS();
L_94f3f0: /* 94f3f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f3f1: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 94f3f5: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f3f8: je 0x94f45e */
  if (zf) goto L_94f45e;
L_94f3fa: /* 94f3fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f3fb: call 0x94f4b0 */
  esp -= 4; W32(esp, 0x94f400u); SPILL(); f_94f4b0(); if (g_unwind) return; RELOAD();
/* 94f400: mov esi, eax */
  esi = eax;
/* 94f402: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f404: je 0x94f454 */
  if (zf) goto L_94f454;
L_94f406: /* 94f406: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f407: call 0x94f520 */
  esp -= 4; W32(esp, 0x94f40cu); SPILL(); f_94f520(); if (g_unwind) return; RELOAD();
/* 94f40c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f40d: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f412u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f412: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f416: mov eax, dword ptr [0xcf2f48] */
  eax = R32((uint32_t)(0xcf2f48u));
/* 94f41b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f41c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f41d: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f422u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f422: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 94f424: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f427: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94f428: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f429: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f42a: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f42fu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f42f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 94f431: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f435: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94f43a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f43b: push 0xaf42f0 */
  { uint32_t v = 0xaf42f0u; esp -= 4; W32(esp, v); }
/* 94f440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f441: call 0x953470 */
  esp -= 4; W32(esp, 0x94f446u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f446: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f448: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f44a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94f44c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94f451u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94f451: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f454: /* 94f454: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f455: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94f45au); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94f45a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f45d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_94f45e: /* 94f45e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f45f: ret  */
  esp += 4; SPILL(); return;
}

void f_94f4b0(void) {
  LOAD_REGS();
L_94f4b0: /* 94f4b0: mov eax, dword ptr [0xcf2f48] */
  eax = R32((uint32_t)(0xcf2f48u));
/* 94f4b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f4b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f4b7: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x94f4bcu); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 94f4bc: mov esi, eax */
  esi = eax;
/* 94f4be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f4c1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f4c3: jne 0x94f4e2 */
  if (!zf) goto L_94f4e2;
L_94f4c5: /* 94f4c5: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94f4cb: push 0xaf43a0 */
  { uint32_t v = 0xaf43a0u; esp -= 4; W32(esp, v); }
/* 94f4d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f4d1: call 0x953470 */
  esp -= 4; W32(esp, 0x94f4d6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f4d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f4d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f4d8: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94f4da: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94f4dfu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94f4df: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f4e2: /* 94f4e2: cmp dword ptr [0xcf2f50], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f50u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f4e9: jl 0x94f51a */
  if ((sf != of)) goto L_94f51a;
L_94f4eb: /* 94f4eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f4ec: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f4f1u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f4f1: mov edx, dword ptr [0xcf2f48] */
  edx = R32((uint32_t)(0xcf2f48u));
/* 94f4f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f4fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f4fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f4fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f4fd: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f502u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f502: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f505: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94f506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f507: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94f50c: push 0xaf4368 */
  { uint32_t v = 0xaf4368u; esp -= 4; W32(esp, v); }
/* 94f511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f512: call 0x953470 */
  esp -= 4; W32(esp, 0x94f517u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f517: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f51a: /* 94f51a: mov eax, esi */
  eax = esi;
/* 94f51c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f51d: ret  */
  esp += 4; SPILL(); return;
}

void f_94f520(void) {
  LOAD_REGS();
L_94f520: /* 94f520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f521: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94f525: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f526: push 0xcf2f48 */
  { uint32_t v = 0xcf2f48u; esp -= 4; W32(esp, v); }
/* 94f52b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x94f530u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 94f530: mov eax, dword ptr [0xcf2f50] */
  eax = R32((uint32_t)(0xcf2f50u));
/* 94f535: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f538: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f53b: jl 0x94f56b */
  if ((sf != of)) goto L_94f56b;
L_94f53d: /* 94f53d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f53e: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f543u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f543: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f547: mov eax, dword ptr [0xcf2f48] */
  eax = R32((uint32_t)(0xcf2f48u));
/* 94f54c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f54e: call 0x94f340 */
  esp -= 4; W32(esp, 0x94f553u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94f553: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94f559: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f55c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f55d: push 0xaf43e8 */
  { uint32_t v = 0xaf43e8u; esp -= 4; W32(esp, v); }
/* 94f562: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f563: call 0x953470 */
  esp -= 4; W32(esp, 0x94f568u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f568: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f56b: /* 94f56b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f56c: ret  */
  esp += 4; SPILL(); return;
}

void f_94f570(void) {
  LOAD_REGS();
L_94f570: /* 94f570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f571: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94f575: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f576: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 94f57a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94f57c: jl 0x94f582 */
  if ((sf != of)) goto L_94f582;
L_94f57e: /* 94f57e: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f580: jle 0x94f5b3 */
  if ((zf || sf != of)) goto L_94f5b3;
L_94f582: /* 94f582: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94f587: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f588: push 0xaf4420 */
  { uint32_t v = 0xaf4420u; esp -= 4; W32(esp, v); }
/* 94f58d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f58e: call 0x953470 */
  esp -= 4; W32(esp, 0x94f593u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f593: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94f599: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f59a: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 94f59f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f5a0: call 0x94f230 */
  esp -= 4; W32(esp, 0x94f5a5u); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94f5a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f5a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f5a9: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94f5ab: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94f5b0u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94f5b0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f5b3: /* 94f5b3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94f5b5: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 94f5b8: mov dword ptr [esi + edx*4 + 4], eax */
  W32((uint32_t)(esi + edx*4 + 0x4u), eax);
/* 94f5bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f5bd: mov dword ptr [esi + eax*4], 0 */
  W32((uint32_t)(esi + eax*4), 0x0u);
/* 94f5c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f5c5: ret  */
  esp += 4; SPILL(); return;
}

void f_94f5d0(void) {
  LOAD_REGS();
L_94f5d0: /* 94f5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f5d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 94f5d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f5d6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 94f5da: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94f5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f5dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f5de: call 0x94eed0 */
  esp -= 4; W32(esp, 0x94f5e3u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 94f5e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f5e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f5e8: jne 0x94f5fc */
  if (!zf) goto L_94f5fc;
L_94f5ea: /* 94f5ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f5ec: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x94f5f1u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 94f5f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f5f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f5f5: mov eax, 1 */
  eax = 0x1u;
/* 94f5fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f5fb: ret  */
  esp += 4; SPILL(); return;
L_94f5fc: /* 94f5fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f5fd: xor eax, eax */
  eax = 0;
/* 94f5ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f600: ret  */
  esp += 4; SPILL(); return;
}

void f_94f610(void) {
  LOAD_REGS();
L_94f610: /* 94f610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f611: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 94f615: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f616: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 94f61a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f61b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 94f61f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94f621: jl 0x94f62b */
  if ((sf != of)) goto L_94f62b;
L_94f623: /* 94f623: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f625: jge 0x94f62b */
  if ((sf == of)) goto L_94f62b;
L_94f627: /* 94f627: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f629: jle 0x94f65d */
  if ((zf || sf != of)) goto L_94f65d;
L_94f62b: /* 94f62b: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94f630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f631: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f632: push 0xaf4468 */
  { uint32_t v = 0xaf4468u; esp -= 4; W32(esp, v); }
/* 94f637: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f638: call 0x953470 */
  esp -= 4; W32(esp, 0x94f63du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f63d: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94f643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f644: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 94f649: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f64a: call 0x94f230 */
  esp -= 4; W32(esp, 0x94f64fu); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94f64f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f651: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f653: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94f655: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94f65au); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94f65a: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f65d: /* 94f65d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 94f65f: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 94f662: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 94f664: mov dword ptr [ebx + eax*4 + 4], edx */
  W32((uint32_t)(ebx + eax*4 + 0x4u), edx);
/* 94f668: lea ecx, [esi*4 + 4] */
  ecx = (uint32_t)(esi*4 + 0x4u);
/* 94f66f: mov edx, ecx */
  edx = ecx;
/* 94f671: lea edi, [ebx + edi*4 + 4] */
  edi = (uint32_t)(ebx + edi*4 + 0x4u);
/* 94f675: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94f678: xor eax, eax */
  eax = 0;
/* 94f67a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 94f67c: mov ecx, edx */
  ecx = edx;
/* 94f67e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94f681: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 94f683: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f684: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f685: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94f686: ret  */
  esp += 4; SPILL(); return;
}

void f_94f690(void) {
  LOAD_REGS();
L_94f690: /* 94f690: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94f694: xor ecx, ecx */
  ecx = 0;
L_94f696: /* 94f696: mov eax, dword ptr [ecx*4 + 0xcf84b8] */
  eax = R32((uint32_t)(ecx*4 + 0xcf84b8u));
/* 94f69d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f69f: je 0x94f6b3 */
  if (zf) goto L_94f6b3;
L_94f6a1: /* 94f6a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f6a3: je 0x94f6ac */
  if (zf) goto L_94f6ac;
L_94f6a5: /* 94f6a5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94f6a6: cmp ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f6a9: jl 0x94f696 */
  if ((sf != of)) goto L_94f696;
L_94f6ab: /* 94f6ab: ret  */
  esp += 4; SPILL(); return;
L_94f6ac: /* 94f6ac: mov dword ptr [ecx*4 + 0xcf84b8], edx */
  W32((uint32_t)(ecx*4 + 0xcf84b8u), edx);
L_94f6b3: /* 94f6b3: ret  */
  esp += 4; SPILL(); return;
}

void f_94f6c0(void) {
  LOAD_REGS();
L_94f6c0: /* 94f6c0: xor eax, eax */
  eax = 0;
/* 94f6c2: ret  */
  esp += 4; SPILL(); return;
}

void f_94f6d0(void) {
  LOAD_REGS();
L_94f6d0: /* 94f6d0: cmp dword ptr [0xcf8438], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f6d7: jl 0x94f6ec */
  if ((sf != of)) goto L_94f6ec;
L_94f6d9: /* 94f6d9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 94f6de: push 0xaf44d4 */
  { uint32_t v = 0xaf44d4u; esp -= 4; W32(esp, v); }
/* 94f6e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f6e4: call 0x953470 */
  esp -= 4; W32(esp, 0x94f6e9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f6e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f6ec: /* 94f6ec: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 94f6f2: mov eax, dword ptr [0xcf8a40] */
  eax = R32((uint32_t)(0xcf8a40u));
/* 94f6f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f6f8: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 94f6ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f701: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f706u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f706: mov ecx, dword ptr [0xcf85d0] */
  ecx = R32((uint32_t)(0xcf85d0u));
/* 94f70c: mov eax, dword ptr [0xcf89fc] */
  eax = R32((uint32_t)(0xcf89fcu));
/* 94f711: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* 94f718: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f71a: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f71fu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f71f: mov ecx, dword ptr [0xcf85d0] */
  ecx = R32((uint32_t)(0xcf85d0u));
/* 94f725: mov eax, dword ptr [0xcf89f8] */
  eax = R32((uint32_t)(0xcf89f8u));
/* 94f72a: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* 94f731: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f733: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f738u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f738: mov ecx, dword ptr [0xcf85d0] */
  ecx = R32((uint32_t)(0xcf85d0u));
/* 94f73e: mov eax, dword ptr [0xcf8a04] */
  eax = R32((uint32_t)(0xcf8a04u));
/* 94f743: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* 94f74a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f74b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f74c: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f751u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f751: mov ecx, dword ptr [0xcf85d0] */
  ecx = R32((uint32_t)(0xcf85d0u));
/* 94f757: mov eax, dword ptr [0xcf8a00] */
  eax = R32((uint32_t)(0xcf8a00u));
/* 94f75c: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* 94f763: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f765: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f76au); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f76a: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 94f76f: mov edx, dword ptr [0xcf8c1c] */
  edx = R32((uint32_t)(0xcf8c1cu));
/* 94f775: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 94f778: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 94f77b: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94f77e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f77f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f780: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f785u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f785: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 94f78a: mov edx, dword ptr [0xcf8c20] */
  edx = R32((uint32_t)(0xcf8c20u));
/* 94f790: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 94f797: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f798: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94f799: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f79eu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f79e: xor esi, esi */
  esi = 0;
/* 94f7a0: push 0xcf8c14 */
  { uint32_t v = 0xcf8c14u; esp -= 4; W32(esp, v); }
/* 94f7a5: mov dword ptr [0xcf89f8], esi */
  W32((uint32_t)(0xcf89f8u), esi);
/* 94f7ab: mov dword ptr [0xcf89fc], esi */
  W32((uint32_t)(0xcf89fcu), esi);
/* 94f7b1: mov dword ptr [0xcf8a40], esi */
  W32((uint32_t)(0xcf8a40u), esi);
/* 94f7b7: mov dword ptr [0xcf8a00], esi */
  W32((uint32_t)(0xcf8a00u), esi);
/* 94f7bd: mov dword ptr [0xcf8a04], esi */
  W32((uint32_t)(0xcf8a04u), esi);
/* 94f7c3: mov dword ptr [0xcf8c1c], esi */
  W32((uint32_t)(0xcf8c1cu), esi);
/* 94f7c9: mov dword ptr [0xcf8c20], esi */
  W32((uint32_t)(0xcf8c20u), esi);
/* 94f7cf: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94f7d4u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94f7d4: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 94f7d9: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94f7deu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94f7de: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f7e1: push 0xcf8c60 */
  { uint32_t v = 0xcf8c60u; esp -= 4; W32(esp, v); }
/* 94f7e6: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94f7ebu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94f7eb: mov eax, dword ptr [0xcf8c24] */
  eax = R32((uint32_t)(0xcf8c24u));
/* 94f7f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f7f3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f7f5: je 0x94f7fe */
  if (zf) goto L_94f7fe;
L_94f7f7: /* 94f7f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f7f8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94f7feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_94f7fe: /* 94f7fe: mov eax, dword ptr [0xcf8c2c] */
  eax = R32((uint32_t)(0xcf8c2cu));
/* 94f803: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f805: je 0x94f80e */
  if (zf) goto L_94f80e;
L_94f807: /* 94f807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f808: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94f80eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_94f80e: /* 94f80e: mov eax, dword ptr [0xcf8c30] */
  eax = R32((uint32_t)(0xcf8c30u));
/* 94f813: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f815: je 0x94f81e */
  if (zf) goto L_94f81e;
L_94f817: /* 94f817: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f818: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94f81eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_94f81e: /* 94f81e: mov eax, dword ptr [0xcf85c0] */
  eax = R32((uint32_t)(0xcf85c0u));
/* 94f823: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f825: je 0x94f82e */
  if (zf) goto L_94f82e;
L_94f827: /* 94f827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f828: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94f82eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_94f82e: /* 94f82e: mov eax, dword ptr [0xcf85bc] */
  eax = R32((uint32_t)(0xcf85bcu));
/* 94f833: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f835: je 0x94f83e */
  if (zf) goto L_94f83e;
L_94f837: /* 94f837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f838: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94f83eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_94f83e: /* 94f83e: mov eax, dword ptr [0xcf85d8] */
  eax = R32((uint32_t)(0xcf85d8u));
/* 94f843: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f845: mov dword ptr [0xcf85bc], esi */
  W32((uint32_t)(0xcf85bcu), esi);
/* 94f84b: mov dword ptr [0xcf8c24], esi */
  W32((uint32_t)(0xcf8c24u), esi);
/* 94f851: mov dword ptr [0xcf8c30], esi */
  W32((uint32_t)(0xcf8c30u), esi);
/* 94f857: mov dword ptr [0xcf85c0], esi */
  W32((uint32_t)(0xcf85c0u), esi);
/* 94f85d: mov dword ptr [0xcf8c2c], esi */
  W32((uint32_t)(0xcf8c2cu), esi);
/* 94f863: je 0x94f87a */
  if (zf) goto L_94f87a;
L_94f865: /* 94f865: cmp dword ptr [0xcf85dc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85dcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f86b: je 0x94f87a */
  if (zf) goto L_94f87a;
L_94f86d: /* 94f86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f86e: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94f874u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94f874: mov dword ptr [0xcf85d8], esi */
  W32((uint32_t)(0xcf85d8u), esi);
L_94f87a: /* 94f87a: mov eax, dword ptr [0xcf85e0] */
  eax = R32((uint32_t)(0xcf85e0u));
/* 94f87f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f881: je 0x94f898 */
  if (zf) goto L_94f898;
L_94f883: /* 94f883: cmp dword ptr [0xcf85e4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85e4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f889: je 0x94f898 */
  if (zf) goto L_94f898;
L_94f88b: /* 94f88b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f88c: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94f892u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94f892: mov dword ptr [0xcf85e0], esi */
  W32((uint32_t)(0xcf85e0u), esi);
L_94f898: /* 94f898: cmp dword ptr [0xcf8438], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f89f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f8a0: jl 0x94f8b5 */
  if ((sf != of)) goto L_94f8b5;
L_94f8a2: /* 94f8a2: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 94f8a7: push 0xaf44b8 */
  { uint32_t v = 0xaf44b8u; esp -= 4; W32(esp, v); }
/* 94f8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f8ad: call 0x953470 */
  esp -= 4; W32(esp, 0x94f8b2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f8b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f8b5: /* 94f8b5: ret  */
  esp += 4; SPILL(); return;
}

void f_94f8c0(void) {
  LOAD_REGS();
  goto L_94f8c0;
L_94f460: /* 94f460: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f461: mov eax, dword ptr [0xcf2f48] */
  eax = R32((uint32_t)(0xcf2f48u));
/* 94f466: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f469: je 0x94f492 */
  if (zf) goto L_94f492;
L_94f46b: /* 94f46b: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 94f46e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94f470: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f472: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 94f476: je 0x94f492 */
  if (zf) goto L_94f492;
L_94f478: /* 94f478: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 94f47c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f47d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94f480: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94f485u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94f485: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94f487: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f48a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f48c: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 94f490: jne 0x94f478 */
  if (!zf) goto L_94f478;
L_94f492: /* 94f492: push 0xcf2f48 */
  { uint32_t v = 0xcf2f48u; esp -= 4; W32(esp, v); }
/* 94f497: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94f49cu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94f49c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f49f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f4a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 94f4a1: ret  */
  esp += 4; SPILL(); return;
L_94f8c0: /* 94f8c0: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f8c7: jl 0x94f8dc */
  if ((sf != of)) goto L_94f8dc;
L_94f8c9: /* 94f8c9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 94f8ce: push 0xaf4508 */
  { uint32_t v = 0xaf4508u; esp -= 4; W32(esp, v); }
/* 94f8d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f8d4: call 0x953470 */
  esp -= 4; W32(esp, 0x94f8d9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f8d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f8dc: /* 94f8dc: mov eax, dword ptr [0xcf8c18] */
  eax = R32((uint32_t)(0xcf8c18u));
/* 94f8e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94f8e2: xor ebp, ebp */
  ebp = 0;
/* 94f8e4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f8e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f8e7: je 0x94f8f3 */
  if (zf) goto L_94f8f3;
L_94f8e9: /* 94f8e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94f8ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f8eb: call 0x94f570 */
  esp -= 4; W32(esp, 0x94f8f0u); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 94f8f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f8f3: /* 94f8f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f8f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f8f5: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 94f8f9: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f8fb: je 0x94f941 */
  if (zf) goto L_94f941;
L_94f8fd: /* 94f8fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94f8fe: call 0x955dc0 */
  esp -= 4; W32(esp, 0x94f903u); SPILL(); f_955dc0(); if (g_unwind) return; RELOAD();
/* 94f903: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 94f908: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f90b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f90d: je 0x94f969 */
  if (zf) goto L_94f969;
L_94f90f: /* 94f90f: nop  */
L_94f910: /* 94f910: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f912: je 0x94f91f */
  if (zf) goto L_94f91f;
L_94f914: /* 94f914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f915: call 0x956020 */
  esp -= 4; W32(esp, 0x94f91au); SPILL(); f_956020(); if (g_unwind) return; RELOAD();
/* 94f91a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f91d: jmp 0x94f936 */
  goto L_94f936;
L_94f91f: /* 94f91f: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 94f921: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f922: call 0x953a60 */
  esp -= 4; W32(esp, 0x94f927u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94f927: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f92a: mov dword ptr [0xcf8b74], ebp */
  W32((uint32_t)(0xcf8b74u), ebp);
/* 94f930: mov dword ptr [0xcf8b7c], ebp */
  W32((uint32_t)(0xcf8b7cu), ebp);
L_94f936: /* 94f936: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 94f93b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f93d: jne 0x94f910 */
  if (!zf) goto L_94f910;
L_94f93f: /* 94f93f: jmp 0x94f969 */
  goto L_94f969;
L_94f941: /* 94f941: cmp dword ptr [0xcf89f0], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf89f0u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f947: je 0x94f969 */
  if (zf) goto L_94f969;
L_94f949: /* 94f949: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 94f94f: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f951: je 0x94f969 */
  if (zf) goto L_94f969;
L_94f953: /* 94f953: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f955: je 0x94f969 */
  if (zf) goto L_94f969;
L_94f957: /* 94f957: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 94f95a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f95b: call 0x94eea0 */
  esp -= 4; W32(esp, 0x94f960u); SPILL(); f_94eea0(); if (g_unwind) return; RELOAD();
/* 94f960: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 94f962: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f965: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f967: jne 0x94f953 */
  if (!zf) goto L_94f953;
L_94f969: /* 94f969: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f96b: mov dword ptr [0xcf89f0], ebp */
  W32((uint32_t)(0xcf89f0u), ebp);
/* 94f971: mov dword ptr [0xcf8bb0], ebp */
  W32((uint32_t)(0xcf8bb0u), ebp);
/* 94f977: je 0x94fad1 */
  if (zf) goto L_94fad1;
L_94f97d: /* 94f97d: mov edx, dword ptr [0xcf8b4c] */
  edx = R32((uint32_t)(0xcf8b4cu));
/* 94f983: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f985: je 0x94f9bd */
  if (zf) goto L_94f9bd;
L_94f987: /* 94f987: mov esi, 0xfeffffff */
  esi = 0xfeffffffu;
/* 94f98c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94f990: /* 94f990: cmp dword ptr [edx + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f993: je 0x94f9bd */
  if (zf) goto L_94f9bd;
L_94f995: /* 94f995: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* 94f998: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f99a: je 0x94f9b6 */
  if (zf) goto L_94f9b6;
L_94f99c: /* 94f99c: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 94f99f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94f9a1: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9a3: je 0x94f9b6 */
  if (zf) goto L_94f9b6;
L_94f9a5: /* 94f9a5: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 94f9a8: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 94f9aa: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94f9ad: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 94f9b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94f9b2: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9b4: jne 0x94f9a5 */
  if (!zf) goto L_94f9a5;
L_94f9b6: /* 94f9b6: mov edx, dword ptr [edx + 0x1c] */
  edx = R32((uint32_t)(edx + 0x1cu));
/* 94f9b9: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9bb: jne 0x94f990 */
  if (!zf) goto L_94f990;
L_94f9bd: /* 94f9bd: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 94f9c3: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9c5: je 0x94fa16 */
  if (zf) goto L_94fa16;
L_94f9c7: /* 94f9c7: mov edi, 0x400 */
  edi = 0x400u;
/* 94f9cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94f9d0: /* 94f9d0: cmp dword ptr [esi + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9d3: je 0x94fa16 */
  if (zf) goto L_94fa16;
L_94f9d5: /* 94f9d5: test dword ptr [esi + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f9d8: je 0x94fa0f */
  if (zf) goto L_94fa0f;
L_94f9da: /* 94f9da: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 94f9dd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9df: je 0x94fa0f */
  if (zf) goto L_94fa0f;
L_94f9e1: /* 94f9e1: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 94f9e4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 94f9e6: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9e8: je 0x94fa0f */
  if (zf) goto L_94fa0f;
L_94f9ea: /* 94f9ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_94f9f0: /* 94f9f0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 94f9f3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f9f6: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94f9f8: jne 0x94f9fd */
  if (!zf) goto L_94f9fd;
L_94f9fa: /* 94f9fa: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_94f9fd: /* 94f9fd: test dword ptr [ecx + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fa00: jne 0x94fa09 */
  if (!zf) goto L_94fa09;
L_94fa02: /* 94fa02: or dword ptr [eax + 0xc], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_94fa09: /* 94fa09: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 94fa0b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fa0d: jne 0x94f9f0 */
  if (!zf) goto L_94f9f0;
L_94fa0f: /* 94fa0f: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 94fa12: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fa14: jne 0x94f9d0 */
  if (!zf) goto L_94f9d0;
L_94fa16: /* 94fa16: mov edi, dword ptr [0xcf8b4c] */
  edi = R32((uint32_t)(0xcf8b4cu));
/* 94fa1c: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fa1e: je 0x94fb26 */
  if (zf) goto L_94fb26;
L_94fa24: /* 94fa24: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 94fa27: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fa29: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 94fa2c: je 0x94fa65 */
  if (zf) goto L_94fa65;
L_94fa2e: /* 94fa2e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 94fa31: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fa33: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 94fa36: je 0x94fa63 */
  if (zf) goto L_94fa63;
L_94fa38: /* 94fa38: mov al, byte ptr [esi + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xfu))) & 0xffu);
/* 94fa3b: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 94fa3e: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94fa40: je 0x94fa55 */
  if (zf) goto L_94fa55;
L_94fa42: /* 94fa42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94fa43: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94fa48u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94fa48: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 94fa4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94fa4b: call 0x953a60 */
  esp -= 4; W32(esp, 0x94fa50u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94fa50: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fa53: jmp 0x94fa5c */
  goto L_94fa5c;
L_94fa55: /* 94fa55: or dword ptr [esi + 0xc], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_94fa5c: /* 94fa5c: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 94fa5f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fa61: jne 0x94fa38 */
  if (!zf) goto L_94fa38;
L_94fa63: /* 94fa63: xor ebp, ebp */
  ebp = 0;
L_94fa65: /* 94fa65: lea edx, [edi + 0x2c] */
  edx = (uint32_t)(edi + 0x2cu);
/* 94fa68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fa69: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94fa6eu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94fa6e: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 94fa71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fa72: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94fa77u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94fa77: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 94fa7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fa7b: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94fa80u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94fa80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94fa81: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94fa86u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94fa86: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 94fa89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fa8a: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94fa8fu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94fa8f: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 94fa92: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fa95: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fa97: je 0x94faa4 */
  if (zf) goto L_94faa4;
L_94fa99: /* 94fa99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94fa9a: call 0x95e040 */
  esp -= 4; W32(esp, 0x94fa9fu); SPILL(); f_95e040(); if (g_unwind) return; RELOAD();
/* 94fa9f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94faa2: jmp 0x94fac1 */
  goto L_94fac1;
L_94faa4: /* 94faa4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 94faa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94faa7: call 0x953a60 */
  esp -= 4; W32(esp, 0x94faacu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94faac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94faaf: mov dword ptr [0xcf8b4c], ebp */
  W32((uint32_t)(0xcf8b4cu), ebp);
/* 94fab5: mov dword ptr [0xcf8b58], ebp */
  W32((uint32_t)(0xcf8b58u), ebp);
/* 94fabb: mov dword ptr [0xcf8b5c], ebp */
  W32((uint32_t)(0xcf8b5cu), ebp);
L_94fac1: /* 94fac1: mov edi, dword ptr [0xcf8b4c] */
  edi = R32((uint32_t)(0xcf8b4cu));
/* 94fac7: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fac9: jne 0x94fa24 */
  if (!zf) goto L_94fa24;
L_94facf: /* 94facf: jmp 0x94fb26 */
  goto L_94fb26;
L_94fad1: /* 94fad1: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 94fad7: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fad9: je 0x94fb26 */
  if (zf) goto L_94fb26;
L_94fadb: /* 94fadb: mov edi, 0x1000 */
  edi = 0x1000u;
L_94fae0: /* 94fae0: cmp dword ptr [esi + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fae3: je 0x94fb26 */
  if (zf) goto L_94fb26;
L_94fae5: /* 94fae5: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 94fae8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fae9: call 0x94eea0 */
  esp -= 4; W32(esp, 0x94faeeu); SPILL(); f_94eea0(); if (g_unwind) return; RELOAD();
/* 94faee: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 94faf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94faf2: call 0x94eea0 */
  esp -= 4; W32(esp, 0x94faf7u); SPILL(); f_94eea0(); if (g_unwind) return; RELOAD();
/* 94faf7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 94fafa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fafd: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94faff: jne 0x94fb1f */
  if (!zf) goto L_94fb1f;
L_94fb01: /* 94fb01: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 94fb04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fb05: call 0x94eea0 */
  esp -= 4; W32(esp, 0x94fb0au); SPILL(); f_94eea0(); if (g_unwind) return; RELOAD();
/* 94fb0a: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 94fb0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fb0e: call 0x94eea0 */
  esp -= 4; W32(esp, 0x94fb13u); SPILL(); f_94eea0(); if (g_unwind) return; RELOAD();
/* 94fb13: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 94fb16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fb17: call 0x94eea0 */
  esp -= 4; W32(esp, 0x94fb1cu); SPILL(); f_94eea0(); if (g_unwind) return; RELOAD();
/* 94fb1c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94fb1f: /* 94fb1f: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 94fb22: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fb24: jne 0x94fae0 */
  if (!zf) goto L_94fae0;
L_94fb26: /* 94fb26: push 0xcf8c10 */
  { uint32_t v = 0xcf8c10u; esp -= 4; W32(esp, v); }
/* 94fb2b: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94fb30u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94fb30: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 94fb36: mov eax, dword ptr [0xcf8b3c] */
  eax = R32((uint32_t)(0xcf8b3cu));
/* 94fb3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fb3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fb3d: call 0x953a60 */
  esp -= 4; W32(esp, 0x94fb42u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94fb42: mov eax, dword ptr [0xcf8c08] */
  eax = R32((uint32_t)(0xcf8c08u));
/* 94fb47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fb4a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fb4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94fb4d: mov dword ptr [0xcf8b3c], ebp */
  W32((uint32_t)(0xcf8b3cu), ebp);
/* 94fb53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94fb54: je 0x94fb74 */
  if (zf) goto L_94fb74;
L_94fb56: /* 94fb56: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 94fb59: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94fb5b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fb5d: je 0x94fb74 */
  if (zf) goto L_94fb74;
L_94fb5f: /* 94fb5f: nop  */
L_94fb60: /* 94fb60: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 94fb62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fb63: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94fb66: call 0x953a60 */
  esp -= 4; W32(esp, 0x94fb6bu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94fb6b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94fb6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fb70: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fb72: jne 0x94fb60 */
  if (!zf) goto L_94fb60;
L_94fb74: /* 94fb74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94fb75: mov dword ptr [0xcf8c08], ebp */
  W32((uint32_t)(0xcf8c08u), ebp);
/* 94fb7b: mov dword ptr [0xcf8c0c], ebp */
  W32((uint32_t)(0xcf8c0cu), ebp);
/* 94fb81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94fb82: jmp 0x94f460 */
  goto L_94f460;
}

void f_94fb90(void) {
  LOAD_REGS();
L_94fb90: /* 94fb90: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94fb97: jl 0x94fbac */
  if ((sf != of)) goto L_94fbac;
L_94fb99: /* 94fb99: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 94fb9e: push 0xaf4548 */
  { uint32_t v = 0xaf4548u; esp -= 4; W32(esp, v); }
/* 94fba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fba4: call 0x953470 */
  esp -= 4; W32(esp, 0x94fba9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94fba9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94fbac: /* 94fbac: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 94fbb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94fbb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fbb2: mov dword ptr [0xcf8bd4], 1 */
  W32((uint32_t)(0xcf8bd4u), 0x1u);
/* 94fbbc: call 0x94f8c0 */
  esp -= 4; W32(esp, 0x94fbc1u); SPILL(); f_94f8c0(); if (g_unwind) return; RELOAD();
/* 94fbc1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fbc4: call 0x94f6d0 */
  esp -= 4; W32(esp, 0x94fbc9u); SPILL(); f_94f6d0(); if (g_unwind) return; RELOAD();
/* 94fbc9: call 0x961b20 */
  esp -= 4; W32(esp, 0x94fbceu); SPILL(); f_961b20(); if (g_unwind) return; RELOAD();
/* 94fbce: mov ecx, 0x221 */
  ecx = 0x221u;
/* 94fbd3: xor eax, eax */
  eax = 0;
/* 94fbd5: mov edi, 0xcf83e0 */
  edi = 0xcf83e0u;
/* 94fbda: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 94fbdc: mov dword ptr [0xcf8bd4], 1 */
  W32((uint32_t)(0xcf8bd4u), 0x1u);
/* 94fbe6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94fbe7: ret  */
  esp += 4; SPILL(); return;
}

void f_94fbf0(void) {
  LOAD_REGS();
L_94fbf0: /* 94fbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94fbf1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 94fbf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94fbf6: call 0x953b70 */
  esp -= 4; W32(esp, 0x94fbfbu); SPILL(); f_953b70(); if (g_unwind) return; RELOAD();
/* 94fbfb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94fbff: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94fc03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94fc04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fc05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fc06: call 0x952d10 */
  esp -= 4; W32(esp, 0x94fc0bu); SPILL(); f_952d10(); if (g_unwind) return; RELOAD();
/* 94fc0b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 94fc0f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94fc13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fc14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fc15: call 0x94fd30 */
  esp -= 4; W32(esp, 0x94fc1au); SPILL(); f_94fd30(); if (g_unwind) return; RELOAD();
/* 94fc1a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fc1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94fc1e: ret  */
  esp += 4; SPILL(); return;
}

void f_94fc20(void) {
  LOAD_REGS();
L_94fc20: /* 94fc20: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94fc24: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94fc28: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94fc2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fc2d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94fc31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fc32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fc33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fc34: call 0x9522f0 */
  esp -= 4; W32(esp, 0x94fc39u); SPILL(); f_9522f0(); if (g_unwind) return; RELOAD();
/* 94fc39: mov eax, dword ptr [0xcf2f28] */
  eax = R32((uint32_t)(0xcf2f28u));
/* 94fc3e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fc41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fc43: jne 0x94fc4a */
  if (!zf) goto L_94fc4a;
L_94fc45: /* 94fc45: call 0x952c80 */
  esp -= 4; W32(esp, 0x94fc4au); SPILL(); f_952c80(); if (g_unwind) return; RELOAD();
L_94fc4a: /* 94fc4a: call 0x9521b0 */
  esp -= 4; W32(esp, 0x94fc4fu); SPILL(); f_9521b0(); if (g_unwind) return; RELOAD();
/* 94fc4f: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 94fc54: call 0x952ea0 */
  esp -= 4; W32(esp, 0x94fc59u); SPILL(); f_952ea0(); if (g_unwind) return; RELOAD();
/* 94fc59: mov eax, dword ptr [0xcf8540] */
  eax = R32((uint32_t)(0xcf8540u));
/* 94fc5e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fc61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fc63: jne 0x94fc77 */
  if (!zf) goto L_94fc77;
L_94fc65: /* 94fc65: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 94fc6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fc6c: je 0x94fc7c */
  if (zf) goto L_94fc7c;
L_94fc6e: /* 94fc6e: mov eax, dword ptr [0xcf853c] */
  eax = R32((uint32_t)(0xcf853cu));
/* 94fc73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fc75: je 0x94fc7c */
  if (zf) goto L_94fc7c;
L_94fc77: /* 94fc77: call 0x964390 */
  esp -= 4; W32(esp, 0x94fc7cu); SPILL(); f_964390(); if (g_unwind) return; RELOAD();
L_94fc7c: /* 94fc7c: mov eax, dword ptr [0xcf856c] */
  eax = R32((uint32_t)(0xcf856cu));
/* 94fc81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fc83: je 0x94fc8a */
  if (zf) goto L_94fc8a;
L_94fc85: /* 94fc85: call 0x964960 */
  esp -= 4; W32(esp, 0x94fc8au); SPILL(); f_964960(); if (g_unwind) return; RELOAD();
L_94fc8a: /* 94fc8a: mov eax, dword ptr [0xcf8568] */
  eax = R32((uint32_t)(0xcf8568u));
/* 94fc8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94fc91: jl 0x94fd25 */
  if ((sf != of)) goto L_94fd25;
L_94fc97: /* 94fc97: mov ecx, dword ptr [0xcf8c20] */
  ecx = R32((uint32_t)(0xcf8c20u));
/* 94fc9d: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 94fca3: mov eax, dword ptr [0xcf8c1c] */
  eax = R32((uint32_t)(0xcf8c1cu));
/* 94fca8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fca9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fcaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fcab: call 0x9647f0 */
  esp -= 4; W32(esp, 0x94fcb0u); SPILL(); f_9647f0(); if (g_unwind) return; RELOAD();
/* 94fcb0: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 94fcb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fcb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fcba: je 0x94fd04 */
  if (zf) goto L_94fd04;
L_94fcbc: /* 94fcbc: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 94fcc2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 94fcc3: xor eax, eax */
  eax = 0;
/* 94fcc5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94fcc7: jle 0x94fcf5 */
  if ((zf || sf != of)) goto L_94fcf5;
L_94fcc9: /* 94fcc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94fcd0: /* 94fcd0: mov edx, dword ptr [0xcf8c20] */
  edx = R32((uint32_t)(0xcf8c20u));
/* 94fcd6: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 94fcd9: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 94fce0: mov edx, dword ptr [0xcf8c20] */
  edx = R32((uint32_t)(0xcf8c20u));
/* 94fce6: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 94fce9: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 94fcf0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94fcf1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94fcf3: jl 0x94fcd0 */
  if ((sf != of)) goto L_94fcd0;
L_94fcf5: /* 94fcf5: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 94fcfa: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 94fcfd: mov dword ptr [edx + ecx*4], 0x3f800000 */
  W32((uint32_t)(edx + ecx*4), 0x3f800000u);
L_94fd04: /* 94fd04: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 94fd09: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 94fd0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fd10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fd11: call 0x963540 */
  esp -= 4; W32(esp, 0x94fd16u); SPILL(); f_963540(); if (g_unwind) return; RELOAD();
/* 94fd16: mov edx, dword ptr [0xcf8c20] */
  edx = R32((uint32_t)(0xcf8c20u));
/* 94fd1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94fd1d: call 0x964840 */
  esp -= 4; W32(esp, 0x94fd22u); SPILL(); f_964840(); if (g_unwind) return; RELOAD();
/* 94fd22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94fd25: /* 94fd25: ret  */
  esp += 4; SPILL(); return;
}

void f_94fd30(void) {
  LOAD_REGS();
L_94fd30: /* 94fd30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94fd31: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 94fd35: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94fd36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94fd37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94fd38: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 94fd3c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fd3e: je 0x94fda9 */
  if (zf) goto L_94fda9;
L_94fd40: /* 94fd40: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 94fd42: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 94fd44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fd45: call dword ptr [0xcfb09c] */
  esp -= 4; W32(esp, 0x94fd4bu); SPILL(); f_406e16(); if (g_unwind) return; /* MSVCR70!strrchr */ RELOAD();
/* 94fd4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fd4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fd50: mov edx, 0xcf85e8 */
  edx = 0xcf85e8u;
/* 94fd55: je 0x94fd6c */
  if (zf) goto L_94fd6c;
L_94fd57: /* 94fd57: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94fd58: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 94fd5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_94fd60: /* 94fd60: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 94fd62: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* 94fd65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94fd66: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94fd68: jne 0x94fd60 */
  if (!zf) goto L_94fd60;
L_94fd6a: /* 94fd6a: jmp 0x94fd7a */
  goto L_94fd7a;
L_94fd6c: /* 94fd6c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94fd6e: mov edi, edi */
  edi = edi;
L_94fd70: /* 94fd70: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 94fd72: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94fd73: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 94fd75: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 94fd76: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94fd78: jne 0x94fd70 */
  if (!zf) goto L_94fd70;
L_94fd7a: /* 94fd7a: mov esi, dword ptr [0xcfb098] */
  esi = R32((uint32_t)(0xcfb098u));
/* 94fd80: push 0xaf45b4 */
  { uint32_t v = 0xaf45b4u; esp -= 4; W32(esp, v); }
/* 94fd85: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 94fd8a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x94fd8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94fd8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fd8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fd91: jne 0x94fda6 */
  if (!zf) goto L_94fda6;
L_94fd93: /* 94fd93: push 0xaf45ac */
  { uint32_t v = 0xaf45acu; esp -= 4; W32(esp, v); }
/* 94fd98: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 94fd9d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x94fd9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94fd9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fda2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fda4: je 0x94fda9 */
  if (zf) goto L_94fda9;
L_94fda6: /* 94fda6: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_94fda9: /* 94fda9: mov edx, 1 */
  edx = 0x1u;
/* 94fdae: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94fdb0: jle 0x94fe22 */
  if ((zf || sf != of)) goto L_94fe22;
L_94fdb2: /* 94fdb2: mov edi, dword ptr [ebx + edx*4] */
  edi = R32((uint32_t)(ebx + edx*4));
/* 94fdb5: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 94fdb8: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 94fdba: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 94fdbc: not ecx */
  ecx = ~ecx;
/* 94fdbe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 94fdbf: mov esi, ecx */
  esi = ecx;
/* 94fdc1: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 94fdc4: mov edi, 0xcf85e8 */
  edi = 0xcf85e8u;
/* 94fdc9: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 94fdcb: not ecx */
  ecx = ~ecx;
/* 94fdcd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 94fdce: lea ecx, [esi + ecx + 1] */
  ecx = (uint32_t)(esi + ecx + 0x1u);
/* 94fdd2: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 94fdd8: jae 0x94fe27 */
  if (!cf) goto L_94fe27;
L_94fdda: /* 94fdda: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 94fddd: mov edi, 0xcf85e8 */
  edi = 0xcf85e8u;
/* 94fde2: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 94fde4: mov ax, word ptr [0xaf45a8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xaf45a8u))) & 0xffffu);
/* 94fdea: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 94fded: mov word ptr [edi - 1], ax */
  W16((uint32_t)(edi + 0xffffffffu), (eax & 0xffffu));
/* 94fdf1: mov edi, dword ptr [ebx + edx*4] */
  edi = R32((uint32_t)(ebx + edx*4));
/* 94fdf4: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 94fdf6: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 94fdf8: not ecx */
  ecx = ~ecx;
/* 94fdfa: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 94fdfc: mov ebp, ecx */
  ebp = ecx;
/* 94fdfe: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 94fe01: mov esi, edi */
  esi = edi;
/* 94fe03: mov edi, 0xcf85e8 */
  edi = 0xcf85e8u;
/* 94fe08: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 94fe0a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 94fe0e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 94fe0f: mov ecx, ebp */
  ecx = ebp;
/* 94fe11: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94fe14: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94fe16: mov ecx, ebp */
  ecx = ebp;
/* 94fe18: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94fe1b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 94fe1c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94fe1e: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 94fe20: jl 0x94fdb2 */
  if ((sf != of)) goto L_94fdb2;
L_94fe22: /* 94fe22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94fe23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94fe24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94fe25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94fe26: ret  */
  esp += 4; SPILL(); return;
L_94fe27: /* 94fe27: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 94fe2d: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 94fe32: push 0xaf456c */
  { uint32_t v = 0xaf456cu; esp -= 4; W32(esp, v); }
/* 94fe37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94fe38: call 0x953470 */
  esp -= 4; W32(esp, 0x94fe3du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94fe3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fe40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94fe42: call dword ptr [0xcfb094] */
  esp -= 4; W32(esp, 0x94fe48u); SPILL(); f_404360(); if (g_unwind) return; /* MSVCR70!exit */ RELOAD();
/* 94fe48: nop  */
/* 94fe49: nop  */
/* 94fe4a: nop  */
/* 94fe4b: nop  */
/* 94fe4c: nop  */
/* 94fe4d: nop  */
/* 94fe4e: nop  */
/* 94fe4f: nop  */
  SPILL(); f_94fe50(); return;
}

void f_94fe50(void) {
  LOAD_REGS();
L_94fe50: /* 94fe50: sub esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94fe56: mov eax, dword ptr [esp + 0x214] */
  eax = R32((uint32_t)(esp + 0x214u));
/* 94fe5d: cmp eax, 0xcf85e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf85e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94fe62: mov ecx, eax */
  ecx = eax;
/* 94fe64: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 94fe68: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 94fe70: je 0x94fe91 */
  if (zf) goto L_94fe91;
L_94fe72: /* 94fe72: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 94fe77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fe78: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 94fe7d: mov byte ptr [0xcf85e8], 0 */
  W8((uint32_t)(0xcf85e8u), 0x0u);
/* 94fe84: call dword ptr [0xcfb0b4] */
  esp -= 4; W32(esp, 0x94fe8au); SPILL(); f_40750d(); if (g_unwind) return; /* MSVCR70!strncat */ RELOAD();
/* 94fe8a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94fe8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94fe91: /* 94fe91: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 94fe93: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94fe95: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94fe96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94fe97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94fe98: je 0x951e91 */
  if (zf) goto L_951e91;
L_94fe9e: /* 94fe9e: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 94fea4: mov ebp, 1 */
  ebp = 0x1u;
/* 94fea9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94feb0: /* 94feb0: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 94feb6: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94feb8: jle 0x94fecb */
  if ((zf || sf != of)) goto L_94fecb;
L_94feba: /* 94feba: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 94febd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 94febf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94fec0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x94fec2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94fec2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94fec6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fec9: jmp 0x94fedc */
  goto L_94fedc;
L_94fecb: /* 94fecb: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 94fece: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 94fed3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 94fed5: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 94fed9: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_94fedc: /* 94fedc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94fede: jne 0x94fef5 */
  if (!zf) goto L_94fef5;
L_94fee0: /* 94fee0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94fee1: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 94fee5: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 94fee7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94fee9: jne 0x94feb0 */
  if (!zf) goto L_94feb0;
L_94feeb: /* 94feeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94feec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94feed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94feee: add esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94fef4: ret  */
  esp += 4; SPILL(); return;
L_94fef5: /* 94fef5: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 94fef7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94fef9: je 0x951e91 */
  if (zf) goto L_951e91;
L_94feff: /* 94feff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_94ff00: /* 94ff00: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 94ff06: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ff08: jle 0x94ff17 */
  if ((zf || sf != of)) goto L_94ff17;
L_94ff0a: /* 94ff0a: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 94ff0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 94ff0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94ff10: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x94ff12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94ff12: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ff15: jmp 0x94ff29 */
  goto L_94ff29;
L_94ff17: /* 94ff17: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 94ff1d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94ff1f: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 94ff22: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 94ff26: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_94ff29: /* 94ff29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ff2b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 94ff2f: je 0x94ff3c */
  if (zf) goto L_94ff3c;
L_94ff31: /* 94ff31: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 94ff32: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 94ff36: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 94ff38: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ff3a: jne 0x94ff00 */
  if (!zf) goto L_94ff00;
L_94ff3c: /* 94ff3c: cmp byte ptr [ebx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 94ff3f: jne 0x94ff46 */
  if (!zf) goto L_94ff46;
L_94ff41: /* 94ff41: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 94ff42: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_94ff46: /* 94ff46: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 94ff48: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ff4a: je 0x951e62 */
  if (zf) goto L_951e62;
L_94ff50: /* 94ff50: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 94ff53: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 94ff57: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 94ff58: sub eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94ff5b: cmp eax, 0x35 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 94ff5e: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 94ff62: ja 0x951d7d */
  if ((!cf && !zf)) goto L_951d7d;
L_94ff68: /* 94ff68: movzx eax, byte ptr [eax + 0x951ef8] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x951ef8u)));
/* 94ff6f: jmp dword ptr [eax*4 + 0x951e9c] */
  switch (R32((uint32_t)(eax*4 + 0x951e9cu))) {
    case 0x94ff76u: goto L_94ff76;
    case 0x94ff92u: goto L_94ff92;
    case 0x94ffacu: goto L_94ffac;
    case 0x94ffc6u: goto L_94ffc6;
    case 0x94ffe0u: goto L_94ffe0;
    case 0x94fffau: goto L_94fffa;
    case 0x950014u: goto L_950014;
    case 0x95002eu: goto L_95002e;
    case 0x95004au: goto L_95004a;
    case 0x95006cu: goto L_95006c;
    case 0x950132u: goto L_950132;
    case 0x9501f8u: goto L_9501f8;
    case 0x950291u: goto L_950291;
    case 0x9503b4u: goto L_9503b4;
    case 0x95042du: goto L_95042d;
    case 0x9504aau: goto L_9504aa;
    case 0x950527u: goto L_950527;
    case 0x9505bfu: goto L_9505bf;
    case 0x95093au: goto L_95093a;
    case 0x950bceu: goto L_950bce;
    case 0x950f07u: goto L_950f07;
    case 0x951727u: goto L_951727;
    case 0x951d7du: goto L_951d7d;
    default: guest_badjump(0x94ff6f, R32((uint32_t)(eax*4 + 0x951e9cu))); return;
  }
L_94ff76: /* 94ff76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ff78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ff7a: push 0xaf57bc */
  { uint32_t v = 0xaf57bcu; esp -= 4; W32(esp, v); }
/* 94ff7f: call 0x953320 */
  esp -= 4; W32(esp, 0x94ff84u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 94ff84: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ff87: mov dword ptr [0xcf8410], ebp */
  W32((uint32_t)(0xcf8410u), ebp);
/* 94ff8d: jmp 0x951d97 */
  goto L_951d97;
L_94ff92: /* 94ff92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ff94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ff96: push 0xaf57b4 */
  { uint32_t v = 0xaf57b4u; esp -= 4; W32(esp, v); }
/* 94ff9b: call 0x953320 */
  esp -= 4; W32(esp, 0x94ffa0u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 94ffa0: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94ffa2: call 0x94f690 */
  esp -= 4; W32(esp, 0x94ffa7u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 94ffa7: jmp 0x951d94 */
  goto L_951d94;
L_94ffac: /* 94ffac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ffae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ffb0: push 0xaf57a8 */
  { uint32_t v = 0xaf57a8u; esp -= 4; W32(esp, v); }
/* 94ffb5: call 0x953320 */
  esp -= 4; W32(esp, 0x94ffbau); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 94ffba: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 94ffbc: call 0x94f690 */
  esp -= 4; W32(esp, 0x94ffc1u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 94ffc1: jmp 0x951d94 */
  goto L_951d94;
L_94ffc6: /* 94ffc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ffc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ffca: push 0xaf579c */
  { uint32_t v = 0xaf579cu; esp -= 4; W32(esp, v); }
/* 94ffcf: call 0x953320 */
  esp -= 4; W32(esp, 0x94ffd4u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 94ffd4: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 94ffd6: call 0x94f690 */
  esp -= 4; W32(esp, 0x94ffdbu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 94ffdb: jmp 0x951d94 */
  goto L_951d94;
L_94ffe0: /* 94ffe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ffe2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ffe4: push 0xaf5794 */
  { uint32_t v = 0xaf5794u; esp -= 4; W32(esp, v); }
/* 94ffe9: call 0x953320 */
  esp -= 4; W32(esp, 0x94ffeeu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 94ffee: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 94fff0: call 0x94f690 */
  esp -= 4; W32(esp, 0x94fff5u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 94fff5: jmp 0x951d94 */
  goto L_951d94;
L_94fffa: /* 94fffa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94fffc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94fffe: push 0xaf578c */
  { uint32_t v = 0xaf578cu; esp -= 4; W32(esp, v); }
/* 950003: call 0x953320 */
  esp -= 4; W32(esp, 0x950008u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950008: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 95000a: call 0x94f690 */
  esp -= 4; W32(esp, 0x95000fu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95000f: jmp 0x951d94 */
  goto L_951d94;
L_950014: /* 950014: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950016: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950018: push 0xaf5784 */
  { uint32_t v = 0xaf5784u; esp -= 4; W32(esp, v); }
/* 95001d: call 0x953320 */
  esp -= 4; W32(esp, 0x950022u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950022: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 950024: call 0x94f690 */
  esp -= 4; W32(esp, 0x950029u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950029: jmp 0x951d94 */
  goto L_951d94;
L_95002e: /* 95002e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950030: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950032: push 0xaf577c */
  { uint32_t v = 0xaf577cu; esp -= 4; W32(esp, v); }
/* 950037: call 0x953320 */
  esp -= 4; W32(esp, 0x95003cu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95003c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95003f: mov dword ptr [0xcf8534], ebp */
  W32((uint32_t)(0xcf8534u), ebp);
/* 950045: jmp 0x951d97 */
  goto L_951d97;
L_95004a: /* 95004a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95004c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95004e: push 0xaf5774 */
  { uint32_t v = 0xaf5774u; esp -= 4; W32(esp, v); }
/* 950053: call 0x953320 */
  esp -= 4; W32(esp, 0x950058u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950058: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95005b: mov dword ptr [0xcf85b0], ebp */
  W32((uint32_t)(0xcf85b0u), ebp);
/* 950061: mov dword ptr [0xcf8410], ebp */
  W32((uint32_t)(0xcf8410u), ebp);
/* 950067: jmp 0x951d97 */
  goto L_951d97;
L_95006c: /* 95006c: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 950072: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950074: jle 0x950083 */
  if ((zf || sf != of)) goto L_950083;
L_950076: /* 950076: movsx edx, byte ptr [ebx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 950079: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95007b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95007c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x95007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95007e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950081: jmp 0x950095 */
  goto L_950095;
L_950083: /* 950083: movsx eax, byte ptr [ebx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 950086: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 95008c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 95008e: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 950092: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950095: /* 950095: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950097: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95009b: jne 0x9500bf */
  if (!zf) goto L_9500bf;
L_95009d: /* 95009d: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 95009f: cmp al, 0x2e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9500a1: je 0x9500bf */
  if (zf) goto L_9500bf;
L_9500a3: /* 9500a3: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9500a5: je 0x9500c4 */
  if (zf) goto L_9500c4;
L_9500a7: /* 9500a7: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9500ac: push 0xaf5728 */
  { uint32_t v = 0xaf5728u; esp -= 4; W32(esp, v); }
/* 9500b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9500b2: call 0x953470 */
  esp -= 4; W32(esp, 0x9500b7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9500b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9500ba: jmp 0x951d97 */
  goto L_951d97;
L_9500bf: /* 9500bf: cmp byte ptr [ecx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9500c2: jne 0x9500fc */
  if (!zf) goto L_9500fc;
L_9500c4: /* 9500c4: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9500c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9500c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9500ca: call 0x953410 */
  esp -= 4; W32(esp, 0x9500cfu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 9500cf: fchs  */
  ST0 = -ST0;
/* 9500d1: push 0xcf8408 */
  { uint32_t v = 0xcf8408u; esp -= 4; W32(esp, v); }
/* 9500d6: fstp dword ptr [0xcf8408] */
  WF32((uint32_t)(0xcf8408u), ST0); FPOP();
/* 9500dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9500de: push 0xaf5714 */
  { uint32_t v = 0xaf5714u; esp -= 4; W32(esp, v); }
/* 9500e3: call 0x953320 */
  esp -= 4; W32(esp, 0x9500e8u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9500e8: mov dword ptr [0xcf8488], ebp */
  W32((uint32_t)(0xcf8488u), ebp);
/* 9500ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9500f1: mov dword ptr [0xcf845c], ebp */
  W32((uint32_t)(0xcf845cu), ebp);
/* 9500f7: jmp 0x951d97 */
  goto L_951d97;
L_9500fc: /* 9500fc: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 950100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950101: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950102: call 0x953410 */
  esp -= 4; W32(esp, 0x950107u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 950107: fstp dword ptr [0xcf840c] */
  WF32((uint32_t)(0xcf840cu), ST0); FPOP();
/* 95010d: push 0xcf840c */
  { uint32_t v = 0xcf840cu; esp -= 4; W32(esp, v); }
/* 950112: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950114: push 0xaf5704 */
  { uint32_t v = 0xaf5704u; esp -= 4; W32(esp, v); }
/* 950119: call 0x953320 */
  esp -= 4; W32(esp, 0x95011eu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95011e: mov dword ptr [0xcf8484], ebp */
  W32((uint32_t)(0xcf8484u), ebp);
/* 950124: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950127: mov dword ptr [0xcf845c], ebp */
  W32((uint32_t)(0xcf845cu), ebp);
/* 95012d: jmp 0x951d97 */
  goto L_951d97;
L_950132: /* 950132: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 950138: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95013a: jle 0x950149 */
  if ((zf || sf != of)) goto L_950149;
L_95013c: /* 95013c: movsx edx, byte ptr [ebx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 95013f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950141: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950142: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x950144u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 950144: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950147: jmp 0x95015b */
  goto L_95015b;
L_950149: /* 950149: movsx eax, byte ptr [ebx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 95014c: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 950152: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 950154: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 950158: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_95015b: /* 95015b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95015d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 950161: jne 0x950185 */
  if (!zf) goto L_950185;
L_950163: /* 950163: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 950165: cmp al, 0x2e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950167: je 0x950185 */
  if (zf) goto L_950185;
L_950169: /* 950169: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 95016b: je 0x95018a */
  if (zf) goto L_95018a;
L_95016d: /* 95016d: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 950172: push 0xaf56c0 */
  { uint32_t v = 0xaf56c0u; esp -= 4; W32(esp, v); }
/* 950177: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950178: call 0x953470 */
  esp -= 4; W32(esp, 0x95017du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95017d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950180: jmp 0x951d97 */
  goto L_951d97;
L_950185: /* 950185: cmp byte ptr [ecx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950188: jne 0x9501c2 */
  if (!zf) goto L_9501c2;
L_95018a: /* 95018a: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 95018e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95018f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950190: call 0x953410 */
  esp -= 4; W32(esp, 0x950195u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 950195: fchs  */
  ST0 = -ST0;
/* 950197: push 0xcf8460 */
  { uint32_t v = 0xcf8460u; esp -= 4; W32(esp, v); }
/* 95019c: fstp dword ptr [0xcf8460] */
  WF32((uint32_t)(0xcf8460u), ST0); FPOP();
/* 9501a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9501a4: push 0xaf56a8 */
  { uint32_t v = 0xaf56a8u; esp -= 4; W32(esp, v); }
/* 9501a9: call 0x953320 */
  esp -= 4; W32(esp, 0x9501aeu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9501ae: mov dword ptr [0xcf8488], ebp */
  W32((uint32_t)(0xcf8488u), ebp);
/* 9501b4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9501b7: mov dword ptr [0xcf845c], ebp */
  W32((uint32_t)(0xcf845cu), ebp);
/* 9501bd: jmp 0x951d97 */
  goto L_951d97;
L_9501c2: /* 9501c2: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9501c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9501c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9501c8: call 0x953410 */
  esp -= 4; W32(esp, 0x9501cdu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 9501cd: fstp dword ptr [0xcf8464] */
  WF32((uint32_t)(0xcf8464u), ST0); FPOP();
/* 9501d3: push 0xcf8464 */
  { uint32_t v = 0xcf8464u; esp -= 4; W32(esp, v); }
/* 9501d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9501da: push 0xaf5694 */
  { uint32_t v = 0xaf5694u; esp -= 4; W32(esp, v); }
/* 9501df: call 0x953320 */
  esp -= 4; W32(esp, 0x9501e4u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9501e4: mov dword ptr [0xcf8484], ebp */
  W32((uint32_t)(0xcf8484u), ebp);
/* 9501ea: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9501ed: mov dword ptr [0xcf845c], ebp */
  W32((uint32_t)(0xcf845cu), ebp);
/* 9501f3: jmp 0x951d97 */
  goto L_951d97;
L_9501f8: /* 9501f8: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 9501fa: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9501fc: jne 0x950217 */
  if (!zf) goto L_950217;
L_9501fe: /* 9501fe: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 950204: push 0xaf5648 */
  { uint32_t v = 0xaf5648u; esp -= 4; W32(esp, v); }
/* 950209: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95020a: call 0x953470 */
  esp -= 4; W32(esp, 0x95020fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95020f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950212: jmp 0x951d97 */
  goto L_951d97;
L_950217: /* 950217: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 95021d: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95021f: jle 0x95022e */
  if ((zf || sf != of)) goto L_95022e;
L_950221: /* 950221: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950224: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950227: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x950229u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 950229: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95022c: jmp 0x950240 */
  goto L_950240;
L_95022e: /* 95022e: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 950234: movsx ecx, al */
  ecx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950237: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 950239: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 95023d: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950240: /* 950240: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950242: jne 0x95025d */
  if (!zf) goto L_95025d;
L_950244: /* 950244: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95024a: push 0xaf5600 */
  { uint32_t v = 0xaf5600u; esp -= 4; W32(esp, v); }
/* 95024f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950250: call 0x953470 */
  esp -= 4; W32(esp, 0x950255u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950255: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950258: jmp 0x951d97 */
  goto L_951d97;
L_95025d: /* 95025d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 950261: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 950265: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950267: call 0x953410 */
  esp -= 4; W32(esp, 0x95026cu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 95026c: fstp dword ptr [0xcf8a14] */
  WF32((uint32_t)(0xcf8a14u), ST0); FPOP();
/* 950272: push 0xcf8a14 */
  { uint32_t v = 0xcf8a14u; esp -= 4; W32(esp, v); }
/* 950277: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950279: push 0xaf55ec */
  { uint32_t v = 0xaf55ecu; esp -= 4; W32(esp, v); }
/* 95027e: call 0x953320 */
  esp -= 4; W32(esp, 0x950283u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950283: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950286: mov dword ptr [0xcf8574], ebp */
  W32((uint32_t)(0xcf8574u), ebp);
/* 95028c: jmp 0x951d97 */
  goto L_951d97;
L_950291: /* 950291: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 950295: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950296: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 950297: mov esi, ebx */
  esi = ebx;
/* 950299: mov dword ptr [0xcf8434], ebp */
  W32((uint32_t)(0xcf8434u), ebp);
/* 95029f: call 0x953410 */
  esp -= 4; W32(esp, 0x9502a4u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 9502a4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9502a6: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9502aa: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9502ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9502b1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9502b3: jbe 0x95032f */
  if ((cf | zf)) goto L_95032f;
L_9502b5: /* 9502b5: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9502b7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9502b9: je 0x95030f */
  if (zf) goto L_95030f;
L_9502bb: /* 9502bb: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 9502c1: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9502c3: jle 0x9502d6 */
  if ((zf || sf != of)) goto L_9502d6;
L_9502c5: /* 9502c5: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 9502c8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9502ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9502cb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9502cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9502cd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9502d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9502d4: jmp 0x9502e7 */
  goto L_9502e7;
L_9502d6: /* 9502d6: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 9502d9: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 9502de: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9502e0: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 9502e4: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9502e7: /* 9502e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9502e9: jne 0x95030f */
  if (!zf) goto L_95030f;
L_9502eb: /* 9502eb: cmp byte ptr [ecx], 0x2c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9502ee: jne 0x9502f7 */
  if (!zf) goto L_9502f7;
L_9502f0: /* 9502f0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9502f1: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9502f5: jmp 0x95030f */
  goto L_95030f;
L_9502f7: /* 9502f7: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9502fd: push 0xaf55a0 */
  { uint32_t v = 0xaf55a0u; esp -= 4; W32(esp, v); }
/* 950302: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950303: call 0x953470 */
  esp -= 4; W32(esp, 0x950308u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950308: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 95030c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95030f: /* 95030f: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 950313: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950314: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950315: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 950319: call 0x953410 */
  esp -= 4; W32(esp, 0x95031eu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 95031e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 950320: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 950324: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 950328: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95032b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 95032d: ja 0x9502b5 */
  if ((!cf && !zf)) goto L_9502b5;
L_95032f: /* 95032f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 950331: jae 0x95039e */
  if (!cf) goto L_95039e;
L_950333: /* 950333: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 950335: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 950336: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950337: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x95033du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95033d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95033f: mov dword ptr [0xcf85bc], eax */
  W32((uint32_t)(0xcf85bcu), eax);
/* 950344: jne 0x950369 */
  if (!zf) goto L_950369;
L_950346: /* 950346: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95034b: push 0xaf556c */
  { uint32_t v = 0xaf556cu; esp -= 4; W32(esp, v); }
/* 950350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950351: call 0x953470 */
  esp -= 4; W32(esp, 0x950356u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950358: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95035a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95035c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x950361u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 950361: mov eax, dword ptr [0xcf85bc] */
  eax = R32((uint32_t)(0xcf85bcu));
/* 950366: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_950369: /* 950369: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 95036d: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 95036f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 950371: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950372: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x950378u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 950378: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95037a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95037c: push 0xaf555c */
  { uint32_t v = 0xaf555cu; esp -= 4; W32(esp, v); }
/* 950381: call 0x953320 */
  esp -= 4; W32(esp, 0x950386u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950386: mov edx, dword ptr [0xcf85bc] */
  edx = R32((uint32_t)(0xcf85bcu));
/* 95038c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95038e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950390: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950391: call 0x953320 */
  esp -= 4; W32(esp, 0x950396u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950396: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950399: jmp 0x951d97 */
  goto L_951d97;
L_95039e: /* 95039e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9503a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9503a2: push 0xaf5550 */
  { uint32_t v = 0xaf5550u; esp -= 4; W32(esp, v); }
/* 9503a7: call 0x953320 */
  esp -= 4; W32(esp, 0x9503acu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9503ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9503af: jmp 0x951d97 */
  goto L_951d97;
L_9503b4: /* 9503b4: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 9503b9: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9503bb: jle 0x9503ca */
  if ((zf || sf != of)) goto L_9503ca;
L_9503bd: /* 9503bd: movsx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 9503c0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9503c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9503c3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9503c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9503c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9503c8: jmp 0x9503dc */
  goto L_9503dc;
L_9503ca: /* 9503ca: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 9503cf: movsx edx, byte ptr [ebx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 9503d2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9503d4: xor eax, eax */
  eax = 0;
/* 9503d6: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 9503d9: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9503dc: /* 9503dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9503de: jne 0x9503f9 */
  if (!zf) goto L_9503f9;
L_9503e0: /* 9503e0: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9503e6: push 0xaf5508 */
  { uint32_t v = 0xaf5508u; esp -= 4; W32(esp, v); }
/* 9503eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9503ec: call 0x953470 */
  esp -= 4; W32(esp, 0x9503f1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9503f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9503f4: jmp 0x951d97 */
  goto L_951d97;
L_9503f9: /* 9503f9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9503fd: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 950401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950402: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950403: call 0x953410 */
  esp -= 4; W32(esp, 0x950408u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 950408: fstp dword ptr [0xcf854c] */
  WF32((uint32_t)(0xcf854cu), ST0); FPOP();
/* 95040e: push 0xcf854c */
  { uint32_t v = 0xcf854cu; esp -= 4; W32(esp, v); }
/* 950413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950415: push 0xaf54f4 */
  { uint32_t v = 0xaf54f4u; esp -= 4; W32(esp, v); }
/* 95041a: call 0x953320 */
  esp -= 4; W32(esp, 0x95041fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95041f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950422: mov dword ptr [0xcf8548], ebp */
  W32((uint32_t)(0xcf8548u), ebp);
/* 950428: jmp 0x951d97 */
  goto L_951d97;
L_95042d: /* 95042d: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 950433: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950435: jle 0x950444 */
  if ((zf || sf != of)) goto L_950444;
L_950437: /* 950437: movsx eax, byte ptr [ebx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 95043a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95043c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95043d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x95043fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95043f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950442: jmp 0x950456 */
  goto L_950456;
L_950444: /* 950444: movsx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 950447: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 95044d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95044f: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 950453: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950456: /* 950456: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950458: jne 0x95047c */
  if (!zf) goto L_95047c;
L_95045a: /* 95045a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95045e: cmp byte ptr [ecx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950461: je 0x95047c */
  if (zf) goto L_95047c;
L_950463: /* 950463: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 950469: push 0xaf54b0 */
  { uint32_t v = 0xaf54b0u; esp -= 4; W32(esp, v); }
/* 95046e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95046f: call 0x953470 */
  esp -= 4; W32(esp, 0x950474u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950474: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950477: jmp 0x951d97 */
  goto L_951d97;
L_95047c: /* 95047c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 950480: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 950484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950486: call 0x953410 */
  esp -= 4; W32(esp, 0x95048bu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 95048b: fstp dword ptr [0xcf846c] */
  WF32((uint32_t)(0xcf846cu), ST0); FPOP();
/* 950491: push 0xcf846c */
  { uint32_t v = 0xcf846cu; esp -= 4; W32(esp, v); }
/* 950496: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950498: push 0xaf54a4 */
  { uint32_t v = 0xaf54a4u; esp -= 4; W32(esp, v); }
/* 95049d: call 0x953320 */
  esp -= 4; W32(esp, 0x9504a2u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9504a2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9504a5: jmp 0x951d97 */
  goto L_951d97;
L_9504aa: /* 9504aa: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 9504b0: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9504b2: jle 0x9504c1 */
  if ((zf || sf != of)) goto L_9504c1;
L_9504b4: /* 9504b4: movsx eax, byte ptr [ebx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 9504b7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9504b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9504ba: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9504bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9504bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9504bf: jmp 0x9504d3 */
  goto L_9504d3;
L_9504c1: /* 9504c1: movsx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* 9504c4: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 9504ca: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9504cc: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 9504d0: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9504d3: /* 9504d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9504d5: jne 0x9504f9 */
  if (!zf) goto L_9504f9;
L_9504d7: /* 9504d7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9504db: cmp byte ptr [ecx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9504de: je 0x9504f9 */
  if (zf) goto L_9504f9;
L_9504e0: /* 9504e0: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9504e6: push 0xaf5460 */
  { uint32_t v = 0xaf5460u; esp -= 4; W32(esp, v); }
/* 9504eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9504ec: call 0x953470 */
  esp -= 4; W32(esp, 0x9504f1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9504f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9504f4: jmp 0x951d97 */
  goto L_951d97;
L_9504f9: /* 9504f9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9504fd: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 950501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950502: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950503: call 0x953410 */
  esp -= 4; W32(esp, 0x950508u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 950508: fstp dword ptr [0xcf8450] */
  WF32((uint32_t)(0xcf8450u), ST0); FPOP();
/* 95050e: push 0xcf8450 */
  { uint32_t v = 0xcf8450u; esp -= 4; W32(esp, v); }
/* 950513: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950515: push 0xaf5454 */
  { uint32_t v = 0xaf5454u; esp -= 4; W32(esp, v); }
/* 95051a: call 0x953320 */
  esp -= 4; W32(esp, 0x95051fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95051f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950522: jmp 0x951d97 */
  goto L_951d97;
L_950527: /* 950527: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 950529: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 95052b: jne 0x950546 */
  if (!zf) goto L_950546;
L_95052d: /* 95052d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 950533: push 0xaf5410 */
  { uint32_t v = 0xaf5410u; esp -= 4; W32(esp, v); }
/* 950538: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950539: call 0x953470 */
  esp -= 4; W32(esp, 0x95053eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95053e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950541: jmp 0x951d97 */
  goto L_951d97;
L_950546: /* 950546: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 95054c: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95054e: jle 0x95055d */
  if ((zf || sf != of)) goto L_95055d;
L_950550: /* 950550: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950553: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950555: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950556: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x950558u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 950558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95055b: jmp 0x95056f */
  goto L_95056f;
L_95055d: /* 95055d: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 950563: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 950565: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950568: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95056c: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_95056f: /* 95056f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950571: jne 0x95058b */
  if (!zf) goto L_95058b;
L_950573: /* 950573: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 950578: push 0xaf53d0 */
  { uint32_t v = 0xaf53d0u; esp -= 4; W32(esp, v); }
/* 95057d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95057e: call 0x953470 */
  esp -= 4; W32(esp, 0x950583u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950583: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950586: jmp 0x951d97 */
  goto L_951d97;
L_95058b: /* 95058b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 95058f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 950593: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950594: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950595: call 0x953410 */
  esp -= 4; W32(esp, 0x95059au); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 95059a: fstp dword ptr [0xcf83ec] */
  WF32((uint32_t)(0xcf83ecu), ST0); FPOP();
/* 9505a0: push 0xcf83ec */
  { uint32_t v = 0xcf83ecu; esp -= 4; W32(esp, v); }
/* 9505a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9505a7: push 0xaf53c4 */
  { uint32_t v = 0xaf53c4u; esp -= 4; W32(esp, v); }
/* 9505ac: call 0x953320 */
  esp -= 4; W32(esp, 0x9505b1u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9505b1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9505b4: mov dword ptr [0xcf83e8], ebp */
  W32((uint32_t)(0xcf83e8u), ebp);
/* 9505ba: jmp 0x951d97 */
  goto L_951d97;
L_9505bf: /* 9505bf: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 9505c1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9505c3: je 0x951d97 */
  if (zf) goto L_951d97;
L_9505c9: /* 9505c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9505d0: /* 9505d0: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 9505d6: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9505d8: jle 0x9505e7 */
  if ((zf || sf != of)) goto L_9505e7;
L_9505da: /* 9505da: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 9505dd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9505df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9505e0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9505e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9505e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9505e5: jmp 0x9505f9 */
  goto L_9505f9;
L_9505e7: /* 9505e7: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 9505ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9505ef: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 9505f2: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 9505f6: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9505f9: /* 9505f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9505fb: jne 0x951d97 */
  if (!zf) goto L_951d97;
L_950601: /* 950601: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 950605: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950608: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 950609: sub eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95060c: cmp eax, 0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 95060f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 950613: ja 0x9508ca */
  if ((!cf && !zf)) goto L_9508ca;
L_950619: /* 950619: movzx eax, byte ptr [eax + 0x951f90] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x951f90u)));
/* 950620: jmp dword ptr [eax*4 + 0x951f30] */
  switch (R32((uint32_t)(eax*4 + 0x951f30u))) {
    case 0x950627u: goto L_950627;
    case 0x950649u: goto L_950649;
    case 0x950665u: goto L_950665;
    case 0x950682u: goto L_950682;
    case 0x95069fu: goto L_95069f;
    case 0x9506bbu: goto L_9506bb;
    case 0x9506d7u: goto L_9506d7;
    case 0x9506f4u: goto L_9506f4;
    case 0x950711u: goto L_950711;
    case 0x95072eu: goto L_95072e;
    case 0x95074bu: goto L_95074b;
    case 0x950768u: goto L_950768;
    case 0x950785u: goto L_950785;
    case 0x9507a2u: goto L_9507a2;
    case 0x9507d3u: goto L_9507d3;
    case 0x9507f0u: goto L_9507f0;
    case 0x95080du: goto L_95080d;
    case 0x95082au: goto L_95082a;
    case 0x950847u: goto L_950847;
    case 0x95086au: goto L_95086a;
    case 0x950887u: goto L_950887;
    case 0x950896u: goto L_950896;
    case 0x9508b0u: goto L_9508b0;
    case 0x9508cau: goto L_9508ca;
    default: guest_badjump(0x950620, R32((uint32_t)(eax*4 + 0x951f30u))); return;
  }
L_950627: /* 950627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95062b: push 0xaf53bc */
  { uint32_t v = 0xaf53bcu; esp -= 4; W32(esp, v); }
/* 950630: call 0x953320 */
  esp -= 4; W32(esp, 0x950635u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950635: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 950636: call 0x94f690 */
  esp -= 4; W32(esp, 0x95063bu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95063b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95063e: mov dword ptr [0xcf85c4], ebp */
  W32((uint32_t)(0xcf85c4u), ebp);
/* 950644: jmp 0x950927 */
  goto L_950927;
L_950649: /* 950649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95064b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95064d: push 0xaf53b0 */
  { uint32_t v = 0xaf53b0u; esp -= 4; W32(esp, v); }
/* 950652: call 0x953320 */
  esp -= 4; W32(esp, 0x950657u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950657: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95065a: mov dword ptr [0xcf85c4], ebp */
  W32((uint32_t)(0xcf85c4u), ebp);
/* 950660: jmp 0x950927 */
  goto L_950927;
L_950665: /* 950665: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950667: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950669: push 0xaf53a4 */
  { uint32_t v = 0xaf53a4u; esp -= 4; W32(esp, v); }
/* 95066e: call 0x953320 */
  esp -= 4; W32(esp, 0x950673u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950673: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 950675: call 0x94f690 */
  esp -= 4; W32(esp, 0x95067au); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95067a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95067d: jmp 0x950927 */
  goto L_950927;
L_950682: /* 950682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950684: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950686: push 0xaf5398 */
  { uint32_t v = 0xaf5398u; esp -= 4; W32(esp, v); }
/* 95068b: call 0x953320 */
  esp -= 4; W32(esp, 0x950690u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950690: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950692: call 0x94f690 */
  esp -= 4; W32(esp, 0x950697u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950697: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95069a: jmp 0x950927 */
  goto L_950927;
L_95069f: /* 95069f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506a3: push 0xaf538c */
  { uint32_t v = 0xaf538cu; esp -= 4; W32(esp, v); }
/* 9506a8: call 0x953320 */
  esp -= 4; W32(esp, 0x9506adu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9506ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9506b0: mov dword ptr [0xcf83fc], ebp */
  W32((uint32_t)(0xcf83fcu), ebp);
/* 9506b6: jmp 0x950927 */
  goto L_950927;
L_9506bb: /* 9506bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506bf: push 0xaf5380 */
  { uint32_t v = 0xaf5380u; esp -= 4; W32(esp, v); }
/* 9506c4: call 0x953320 */
  esp -= 4; W32(esp, 0x9506c9u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9506c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9506cc: mov dword ptr [0xcf8400], ebp */
  W32((uint32_t)(0xcf8400u), ebp);
/* 9506d2: jmp 0x950927 */
  goto L_950927;
L_9506d7: /* 9506d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506db: push 0xaf5370 */
  { uint32_t v = 0xaf5370u; esp -= 4; W32(esp, v); }
/* 9506e0: call 0x953320 */
  esp -= 4; W32(esp, 0x9506e5u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9506e5: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 9506e7: call 0x94f690 */
  esp -= 4; W32(esp, 0x9506ecu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 9506ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9506ef: jmp 0x950927 */
  goto L_950927;
L_9506f4: /* 9506f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9506f8: push 0xaf5368 */
  { uint32_t v = 0xaf5368u; esp -= 4; W32(esp, v); }
/* 9506fd: call 0x953320 */
  esp -= 4; W32(esp, 0x950702u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950702: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 950704: call 0x94f690 */
  esp -= 4; W32(esp, 0x950709u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950709: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95070c: jmp 0x950927 */
  goto L_950927;
L_950711: /* 950711: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950713: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950715: push 0xaf5360 */
  { uint32_t v = 0xaf5360u; esp -= 4; W32(esp, v); }
/* 95071a: call 0x953320 */
  esp -= 4; W32(esp, 0x95071fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95071f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 950721: call 0x94f690 */
  esp -= 4; W32(esp, 0x950726u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950726: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950729: jmp 0x950927 */
  goto L_950927;
L_95072e: /* 95072e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950730: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950732: push 0xaf5358 */
  { uint32_t v = 0xaf5358u; esp -= 4; W32(esp, v); }
/* 950737: call 0x953320 */
  esp -= 4; W32(esp, 0x95073cu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95073c: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 95073e: call 0x94f690 */
  esp -= 4; W32(esp, 0x950743u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950743: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950746: jmp 0x950927 */
  goto L_950927;
L_95074b: /* 95074b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95074d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95074f: push 0xaf534c */
  { uint32_t v = 0xaf534cu; esp -= 4; W32(esp, v); }
/* 950754: call 0x953320 */
  esp -= 4; W32(esp, 0x950759u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950759: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 95075b: call 0x94f690 */
  esp -= 4; W32(esp, 0x950760u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950760: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950763: jmp 0x950927 */
  goto L_950927;
L_950768: /* 950768: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95076a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95076c: push 0xaf5338 */
  { uint32_t v = 0xaf5338u; esp -= 4; W32(esp, v); }
/* 950771: call 0x953320 */
  esp -= 4; W32(esp, 0x950776u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950776: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 950778: call 0x94f690 */
  esp -= 4; W32(esp, 0x95077du); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95077d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950780: jmp 0x950927 */
  goto L_950927;
L_950785: /* 950785: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950787: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950789: push 0xaf5330 */
  { uint32_t v = 0xaf5330u; esp -= 4; W32(esp, v); }
/* 95078e: call 0x953320 */
  esp -= 4; W32(esp, 0x950793u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950793: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 950795: call 0x94f690 */
  esp -= 4; W32(esp, 0x95079au); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95079a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95079d: jmp 0x950927 */
  goto L_950927;
L_9507a2: /* 9507a2: mov eax, dword ptr [0xcf84ac] */
  eax = R32((uint32_t)(0xcf84acu));
/* 9507a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9507a9: je 0x9507c8 */
  if (zf) goto L_9507c8;
L_9507ab: /* 9507ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9507ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9507af: push 0xaf5324 */
  { uint32_t v = 0xaf5324u; esp -= 4; W32(esp, v); }
/* 9507b4: call 0x953320 */
  esp -= 4; W32(esp, 0x9507b9u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9507b9: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 9507bb: call 0x94f690 */
  esp -= 4; W32(esp, 0x9507c0u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 9507c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9507c3: jmp 0x950927 */
  goto L_950927;
L_9507c8: /* 9507c8: mov dword ptr [0xcf84ac], ebp */
  W32((uint32_t)(0xcf84acu), ebp);
/* 9507ce: jmp 0x950927 */
  goto L_950927;
L_9507d3: /* 9507d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9507d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9507d7: push 0xaf5310 */
  { uint32_t v = 0xaf5310u; esp -= 4; W32(esp, v); }
/* 9507dc: call 0x953320 */
  esp -= 4; W32(esp, 0x9507e1u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9507e1: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 9507e3: call 0x94f690 */
  esp -= 4; W32(esp, 0x9507e8u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 9507e8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9507eb: jmp 0x950927 */
  goto L_950927;
L_9507f0: /* 9507f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9507f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9507f4: push 0xaf5300 */
  { uint32_t v = 0xaf5300u; esp -= 4; W32(esp, v); }
/* 9507f9: call 0x953320 */
  esp -= 4; W32(esp, 0x9507feu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9507fe: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 950800: call 0x94f690 */
  esp -= 4; W32(esp, 0x950805u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950805: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950808: jmp 0x950927 */
  goto L_950927;
L_95080d: /* 95080d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95080f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950811: push 0xaf52f8 */
  { uint32_t v = 0xaf52f8u; esp -= 4; W32(esp, v); }
/* 950816: call 0x953320 */
  esp -= 4; W32(esp, 0x95081bu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95081b: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 95081d: call 0x94f690 */
  esp -= 4; W32(esp, 0x950822u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950822: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950825: jmp 0x950927 */
  goto L_950927;
L_95082a: /* 95082a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95082c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95082e: push 0xaf52ec */
  { uint32_t v = 0xaf52ecu; esp -= 4; W32(esp, v); }
/* 950833: call 0x953320 */
  esp -= 4; W32(esp, 0x950838u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950838: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 95083a: call 0x94f690 */
  esp -= 4; W32(esp, 0x95083fu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95083f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950842: jmp 0x950927 */
  goto L_950927;
L_950847: /* 950847: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950849: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95084b: push 0xaf52e4 */
  { uint32_t v = 0xaf52e4u; esp -= 4; W32(esp, v); }
/* 950850: call 0x953320 */
  esp -= 4; W32(esp, 0x950855u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950855: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 950857: call 0x94f690 */
  esp -= 4; W32(esp, 0x95085cu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95085c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95085f: mov dword ptr [0xcf85c4], ebp */
  W32((uint32_t)(0xcf85c4u), ebp);
/* 950865: jmp 0x950927 */
  goto L_950927;
L_95086a: /* 95086a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95086c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95086e: push 0xaf52d8 */
  { uint32_t v = 0xaf52d8u; esp -= 4; W32(esp, v); }
/* 950873: call 0x953320 */
  esp -= 4; W32(esp, 0x950878u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950878: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 95087a: call 0x94f690 */
  esp -= 4; W32(esp, 0x95087fu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95087f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950882: jmp 0x950927 */
  goto L_950927;
L_950887: /* 950887: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* 950889: call 0x94f690 */
  esp -= 4; W32(esp, 0x95088eu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 95088e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950891: jmp 0x950927 */
  goto L_950927;
L_950896: /* 950896: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950898: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95089a: push 0xaf52c8 */
  { uint32_t v = 0xaf52c8u; esp -= 4; W32(esp, v); }
/* 95089f: call 0x953320 */
  esp -= 4; W32(esp, 0x9508a4u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9508a4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9508a6: call 0x94f690 */
  esp -= 4; W32(esp, 0x9508abu); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 9508ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9508ae: jmp 0x950927 */
  goto L_950927;
L_9508b0: /* 9508b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9508b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9508b4: push 0xaf52bc */
  { uint32_t v = 0xaf52bcu; esp -= 4; W32(esp, v); }
/* 9508b9: call 0x953320 */
  esp -= 4; W32(esp, 0x9508beu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9508be: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* 9508c0: call 0x94f690 */
  esp -= 4; W32(esp, 0x9508c5u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 9508c5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9508c8: jmp 0x950927 */
  goto L_950927;
L_9508ca: /* 9508ca: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9508d0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9508d1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9508d5: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 9508d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9508d9: push 0xaf5280 */
  { uint32_t v = 0xaf5280u; esp -= 4; W32(esp, v); }
/* 9508de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9508df: call 0x953470 */
  esp -= 4; W32(esp, 0x9508e4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9508e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9508e7: /* 9508e7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9508eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9508ec: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9508f0: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9508f2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9508f4: je 0x951d97 */
  if (zf) goto L_951d97;
L_9508fa: /* 9508fa: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 950900: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950902: jle 0x950911 */
  if ((zf || sf != of)) goto L_950911;
L_950904: /* 950904: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950907: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 950909: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95090a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x95090cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95090c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95090f: jmp 0x950923 */
  goto L_950923;
L_950911: /* 950911: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 950917: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 950919: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 95091c: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 950920: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950923: /* 950923: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950925: je 0x9508e7 */
  if (zf) goto L_9508e7;
L_950927: /* 950927: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95092b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 95092d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95092f: jne 0x9505d0 */
  if (!zf) goto L_9505d0;
L_950935: /* 950935: jmp 0x951d97 */
  goto L_951d97;
L_95093a: /* 95093a: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 95093c: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 950940: call 0x94f690 */
  esp -= 4; W32(esp, 0x950945u); SPILL(); f_94f690(); if (g_unwind) return; RELOAD();
/* 950945: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 950947: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95094a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95094c: je 0x951d97 */
  if (zf) goto L_951d97;
L_950952: /* 950952: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 950958: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95095a: jle 0x95096d */
  if ((zf || sf != of)) goto L_95096d;
L_95095c: /* 95095c: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 95095f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 950961: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950962: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950968u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95096b: jmp 0x95097f */
  goto L_95097f;
L_95096d: /* 95096d: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 950973: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 950975: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950978: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95097c: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_95097f: /* 95097f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950981: jne 0x951d97 */
  if (!zf) goto L_951d97;
L_950987: /* 950987: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95098b: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 95098e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95098f: sub eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 950992: cmp eax, 0x32 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 950995: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 950999: ja 0x950b5a */
  if ((!cf && !zf)) goto L_950b5a;
L_95099f: /* 95099f: movzx eax, byte ptr [eax + 0x951ff8] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x951ff8u)));
/* 9509a6: jmp dword ptr [eax*4 + 0x951fc8] */
  switch (R32((uint32_t)(eax*4 + 0x951fc8u))) {
    case 0x9509adu: goto L_9509ad;
    case 0x9509c9u: goto L_9509c9;
    case 0x9509e5u: goto L_9509e5;
    case 0x950a01u: goto L_950a01;
    case 0x950a1du: goto L_950a1d;
    case 0x950a39u: goto L_950a39;
    case 0x950a55u: goto L_950a55;
    case 0x950a71u: goto L_950a71;
    case 0x950a8du: goto L_950a8d;
    case 0x950aa9u: goto L_950aa9;
    case 0x950ac5u: goto L_950ac5;
    case 0x950b5au: goto L_950b5a;
    default: guest_badjump(0x9509a6, R32((uint32_t)(eax*4 + 0x951fc8u))); return;
  }
L_9509ad: /* 9509ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9509af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9509b1: push 0xaf5274 */
  { uint32_t v = 0xaf5274u; esp -= 4; W32(esp, v); }
/* 9509b6: call 0x953320 */
  esp -= 4; W32(esp, 0x9509bbu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9509bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9509be: mov dword ptr [0xcf8498], ebp */
  W32((uint32_t)(0xcf8498u), ebp);
/* 9509c4: jmp 0x950bbb */
  goto L_950bbb;
L_9509c9: /* 9509c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9509cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9509cd: push 0xaf5268 */
  { uint32_t v = 0xaf5268u; esp -= 4; W32(esp, v); }
/* 9509d2: call 0x953320 */
  esp -= 4; W32(esp, 0x9509d7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9509d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9509da: mov dword ptr [0xcf848c], ebp */
  W32((uint32_t)(0xcf848cu), ebp);
/* 9509e0: jmp 0x950bbb */
  goto L_950bbb;
L_9509e5: /* 9509e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9509e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9509e9: push 0xaf5258 */
  { uint32_t v = 0xaf5258u; esp -= 4; W32(esp, v); }
/* 9509ee: call 0x953320 */
  esp -= 4; W32(esp, 0x9509f3u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9509f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9509f6: mov dword ptr [0xcf8414], ebp */
  W32((uint32_t)(0xcf8414u), ebp);
/* 9509fc: jmp 0x950bbb */
  goto L_950bbb;
L_950a01: /* 950a01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a05: push 0xaf5250 */
  { uint32_t v = 0xaf5250u; esp -= 4; W32(esp, v); }
/* 950a0a: call 0x953320 */
  esp -= 4; W32(esp, 0x950a0fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950a0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950a12: mov dword ptr [0xcf84a0], ebp */
  W32((uint32_t)(0xcf84a0u), ebp);
/* 950a18: jmp 0x950bbb */
  goto L_950bbb;
L_950a1d: /* 950a1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a21: push 0xaf5244 */
  { uint32_t v = 0xaf5244u; esp -= 4; W32(esp, v); }
/* 950a26: call 0x953320 */
  esp -= 4; W32(esp, 0x950a2bu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950a2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950a2e: mov dword ptr [0xcf84a8], ebp */
  W32((uint32_t)(0xcf84a8u), ebp);
/* 950a34: jmp 0x950bbb */
  goto L_950bbb;
L_950a39: /* 950a39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a3d: push 0xaf523c */
  { uint32_t v = 0xaf523cu; esp -= 4; W32(esp, v); }
/* 950a42: call 0x953320 */
  esp -= 4; W32(esp, 0x950a47u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950a47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950a4a: mov dword ptr [0xcf84b0], ebp */
  W32((uint32_t)(0xcf84b0u), ebp);
/* 950a50: jmp 0x950bbb */
  goto L_950bbb;
L_950a55: /* 950a55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a59: push 0xaf5234 */
  { uint32_t v = 0xaf5234u; esp -= 4; W32(esp, v); }
/* 950a5e: call 0x953320 */
  esp -= 4; W32(esp, 0x950a63u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950a63: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950a66: mov dword ptr [0xcf8490], ebp */
  W32((uint32_t)(0xcf8490u), ebp);
/* 950a6c: jmp 0x950bbb */
  goto L_950bbb;
L_950a71: /* 950a71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a75: push 0xaf522c */
  { uint32_t v = 0xaf522cu; esp -= 4; W32(esp, v); }
/* 950a7a: call 0x953320 */
  esp -= 4; W32(esp, 0x950a7fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950a7f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950a82: mov dword ptr [0xcf8528], ebp */
  W32((uint32_t)(0xcf8528u), ebp);
/* 950a88: jmp 0x950bbb */
  goto L_950bbb;
L_950a8d: /* 950a8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950a91: push 0xaf521c */
  { uint32_t v = 0xaf521cu; esp -= 4; W32(esp, v); }
/* 950a96: call 0x953320 */
  esp -= 4; W32(esp, 0x950a9bu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950a9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950a9e: mov dword ptr [0xcf8538], ebp */
  W32((uint32_t)(0xcf8538u), ebp);
/* 950aa4: jmp 0x950bbb */
  goto L_950bbb;
L_950aa9: /* 950aa9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950aab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950aad: push 0xaf5210 */
  { uint32_t v = 0xaf5210u; esp -= 4; W32(esp, v); }
/* 950ab2: call 0x953320 */
  esp -= 4; W32(esp, 0x950ab7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950ab7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950aba: mov dword ptr [0xcf852c], ebp */
  W32((uint32_t)(0xcf852cu), ebp);
/* 950ac0: jmp 0x950bbb */
  goto L_950bbb;
L_950ac5: /* 950ac5: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 950acb: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950acd: jle 0x950ae4 */
  if ((zf || sf != of)) goto L_950ae4;
L_950acf: /* 950acf: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950ad2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950ad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950ad5: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950adbu); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950adb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 950adf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950ae2: jmp 0x950af5 */
  goto L_950af5;
L_950ae4: /* 950ae4: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950ae7: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 950aec: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 950aee: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 950af2: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950af5: /* 950af5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950af7: jne 0x950b12 */
  if (!zf) goto L_950b12;
L_950af9: /* 950af9: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 950aff: push 0xaf51d8 */
  { uint32_t v = 0xaf51d8u; esp -= 4; W32(esp, v); }
/* 950b04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950b05: call 0x953470 */
  esp -= 4; W32(esp, 0x950b0au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950b0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950b0d: jmp 0x950bbb */
  goto L_950bbb;
L_950b12: /* 950b12: mov eax, dword ptr [0xcf8418] */
  eax = R32((uint32_t)(0xcf8418u));
/* 950b17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 950b19: jl 0x950b34 */
  if ((sf != of)) goto L_950b34;
L_950b1b: /* 950b1b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 950b21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950b22: push 0xaf5190 */
  { uint32_t v = 0xaf5190u; esp -= 4; W32(esp, v); }
/* 950b27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950b28: call 0x953470 */
  esp -= 4; W32(esp, 0x950b2du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950b2d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 950b31: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_950b34: /* 950b34: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 950b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950b39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950b3a: call 0x953440 */
  esp -= 4; W32(esp, 0x950b3fu); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 950b3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950b41: push 0xcf8418 */
  { uint32_t v = 0xcf8418u; esp -= 4; W32(esp, v); }
/* 950b46: push 0xaf5184 */
  { uint32_t v = 0xaf5184u; esp -= 4; W32(esp, v); }
/* 950b4b: mov dword ptr [0xcf8418], eax */
  W32((uint32_t)(0xcf8418u), eax);
/* 950b50: call 0x953320 */
  esp -= 4; W32(esp, 0x950b55u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950b55: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950b58: jmp 0x950bbb */
  goto L_950bbb;
L_950b5a: /* 950b5a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 950b60: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 950b61: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 950b65: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950b68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950b69: push 0xaf5148 */
  { uint32_t v = 0xaf5148u; esp -= 4; W32(esp, v); }
/* 950b6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950b6f: call 0x953470 */
  esp -= 4; W32(esp, 0x950b74u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950b74: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_950b77: /* 950b77: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 950b7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 950b7c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 950b80: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 950b82: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 950b84: je 0x951d97 */
  if (zf) goto L_951d97;
L_950b8a: /* 950b8a: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 950b90: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950b92: jle 0x950ba5 */
  if ((zf || sf != of)) goto L_950ba5;
L_950b94: /* 950b94: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950b97: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 950b99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950b9a: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950ba0u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950ba0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950ba3: jmp 0x950bb7 */
  goto L_950bb7;
L_950ba5: /* 950ba5: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 950bab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 950bad: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950bb0: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 950bb4: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950bb7: /* 950bb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950bb9: je 0x950b77 */
  if (zf) goto L_950b77;
L_950bbb: /* 950bbb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 950bbf: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 950bc1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 950bc3: jne 0x950952 */
  if (!zf) goto L_950952;
L_950bc9: /* 950bc9: jmp 0x951d97 */
  goto L_951d97;
L_950bce: /* 950bce: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 950bd0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 950bd2: je 0x951d97 */
  if (zf) goto L_951d97;
L_950bd8: /* 950bd8: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 950bde: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950be0: jle 0x950bf3 */
  if ((zf || sf != of)) goto L_950bf3;
L_950be2: /* 950be2: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950be5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 950be7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950be8: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950beeu); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950bee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950bf1: jmp 0x950c05 */
  goto L_950c05;
L_950bf3: /* 950bf3: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 950bf9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 950bfb: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950bfe: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 950c02: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950c05: /* 950c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950c07: jne 0x951d97 */
  if (!zf) goto L_951d97;
L_950c0d: /* 950c0d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 950c11: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950c14: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 950c15: sub eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 950c18: cmp eax, 0x2f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 950c1b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 950c1f: ja 0x950e8c */
  if ((!cf && !zf)) goto L_950e8c;
L_950c25: /* 950c25: movzx eax, byte ptr [eax + 0x952050] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x952050u)));
/* 950c2c: jmp dword ptr [eax*4 + 0x95202c] */
  switch (R32((uint32_t)(eax*4 + 0x95202cu))) {
    case 0x950c33u: goto L_950c33;
    case 0x950cafu: goto L_950caf;
    case 0x950ccbu: goto L_950ccb;
    case 0x950ce7u: goto L_950ce7;
    case 0x950d03u: goto L_950d03;
    case 0x950d23u: goto L_950d23;
    case 0x950d9eu: goto L_950d9e;
    case 0x950e1au: goto L_950e1a;
    case 0x950e8cu: goto L_950e8c;
    default: guest_badjump(0x950c2c, R32((uint32_t)(eax*4 + 0x95202cu))); return;
  }
L_950c33: /* 950c33: mov bl, byte ptr [ecx - 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xffffffffu))) & 0xffu);
/* 950c36: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 950c3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950c3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950c3c: call 0x953440 */
  esp -= 4; W32(esp, 0x950c41u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 950c41: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 950c45: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 950c49: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 950c51: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 950c53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950c56: cmp cl, 0x3a */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950c59: jne 0x950c72 */
  if (!zf) goto L_950c72;
L_950c5b: /* 950c5b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 950c5f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 950c60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950c61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950c62: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 950c66: call 0x953410 */
  esp -= 4; W32(esp, 0x950c6bu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 950c6b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 950c6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_950c72: /* 950c72: cmp bl, 0x64 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950c75: jne 0x950c93 */
  if (!zf) goto L_950c93;
L_950c77: /* 950c77: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 950c7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950c7c: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 950c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950c81: push 0xaf5130 */
  { uint32_t v = 0xaf5130u; esp -= 4; W32(esp, v); }
/* 950c86: call 0x953320 */
  esp -= 4; W32(esp, 0x950c8bu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950c8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950c8e: jmp 0x950ef4 */
  goto L_950ef4;
L_950c93: /* 950c93: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 950c97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950c98: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 950c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950c9d: push 0xaf5118 */
  { uint32_t v = 0xaf5118u; esp -= 4; W32(esp, v); }
/* 950ca2: call 0x953320 */
  esp -= 4; W32(esp, 0x950ca7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950ca7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950caa: jmp 0x950ef4 */
  goto L_950ef4;
L_950caf: /* 950caf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950cb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950cb3: push 0xaf5108 */
  { uint32_t v = 0xaf5108u; esp -= 4; W32(esp, v); }
/* 950cb8: call 0x953320 */
  esp -= 4; W32(esp, 0x950cbdu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950cbd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950cc0: mov dword ptr [0xcf849c], ebp */
  W32((uint32_t)(0xcf849cu), ebp);
/* 950cc6: jmp 0x950ef4 */
  goto L_950ef4;
L_950ccb: /* 950ccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950ccd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950ccf: push 0xaf50f0 */
  { uint32_t v = 0xaf50f0u; esp -= 4; W32(esp, v); }
/* 950cd4: call 0x953320 */
  esp -= 4; W32(esp, 0x950cd9u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950cd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950cdc: mov dword ptr [0xcf84a4], ebp */
  W32((uint32_t)(0xcf84a4u), ebp);
/* 950ce2: jmp 0x950ef4 */
  goto L_950ef4;
L_950ce7: /* 950ce7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950ce9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950ceb: push 0xaf50e0 */
  { uint32_t v = 0xaf50e0u; esp -= 4; W32(esp, v); }
/* 950cf0: call 0x953320 */
  esp -= 4; W32(esp, 0x950cf5u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950cf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950cf8: mov dword ptr [0xcf841c], ebp */
  W32((uint32_t)(0xcf841cu), ebp);
/* 950cfe: jmp 0x950ef4 */
  goto L_950ef4;
L_950d03: /* 950d03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950d05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950d07: push 0xaf50cc */
  { uint32_t v = 0xaf50ccu; esp -= 4; W32(esp, v); }
/* 950d0c: call 0x953320 */
  esp -= 4; W32(esp, 0x950d11u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950d11: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950d14: mov dword ptr [0xcf84b4], 0 */
  W32((uint32_t)(0xcf84b4u), 0x0u);
/* 950d1e: jmp 0x950ef4 */
  goto L_950ef4;
L_950d23: /* 950d23: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 950d28: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950d2a: jle 0x950d41 */
  if ((zf || sf != of)) goto L_950d41;
L_950d2c: /* 950d2c: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950d2f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950d31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950d32: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950d38u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950d38: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 950d3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950d3f: jmp 0x950d52 */
  goto L_950d52;
L_950d41: /* 950d41: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950d44: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 950d49: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 950d4b: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 950d4f: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950d52: /* 950d52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950d54: jne 0x950d6f */
  if (!zf) goto L_950d6f;
L_950d56: /* 950d56: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 950d5c: push 0xaf5088 */
  { uint32_t v = 0xaf5088u; esp -= 4; W32(esp, v); }
/* 950d61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950d62: call 0x953470 */
  esp -= 4; W32(esp, 0x950d67u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950d67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950d6a: jmp 0x950ef4 */
  goto L_950ef4;
L_950d6f: /* 950d6f: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 950d73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950d74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950d75: call 0x953440 */
  esp -= 4; W32(esp, 0x950d7au); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 950d7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950d7c: push 0xcf843c */
  { uint32_t v = 0xcf843cu; esp -= 4; W32(esp, v); }
/* 950d81: push 0xaf507c */
  { uint32_t v = 0xaf507cu; esp -= 4; W32(esp, v); }
/* 950d86: mov dword ptr [0xcf843c], eax */
  W32((uint32_t)(0xcf843cu), eax);
/* 950d8b: call 0x953320 */
  esp -= 4; W32(esp, 0x950d90u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950d90: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950d93: mov dword ptr [0xcf85c4], ebp */
  W32((uint32_t)(0xcf85c4u), ebp);
/* 950d99: jmp 0x950ef4 */
  goto L_950ef4;
L_950d9e: /* 950d9e: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 950da3: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950da5: jle 0x950dbc */
  if ((zf || sf != of)) goto L_950dbc;
L_950da7: /* 950da7: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950daa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950dac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950dad: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950db3u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950db3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 950db7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950dba: jmp 0x950dcd */
  goto L_950dcd;
L_950dbc: /* 950dbc: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950dbf: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 950dc4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 950dc6: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 950dca: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950dcd: /* 950dcd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950dcf: jne 0x950dea */
  if (!zf) goto L_950dea;
L_950dd1: /* 950dd1: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 950dd7: push 0xaf5044 */
  { uint32_t v = 0xaf5044u; esp -= 4; W32(esp, v); }
/* 950ddc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950ddd: call 0x953470 */
  esp -= 4; W32(esp, 0x950de2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950de2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950de5: jmp 0x950ef4 */
  goto L_950ef4;
L_950dea: /* 950dea: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 950dee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950def: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950df0: call 0x953410 */
  esp -= 4; W32(esp, 0x950df5u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 950df5: fstp dword ptr [0xcf844c] */
  WF32((uint32_t)(0xcf844cu), ST0); FPOP();
/* 950dfb: push 0xcf844c */
  { uint32_t v = 0xcf844cu; esp -= 4; W32(esp, v); }
/* 950e00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950e02: push 0xaf5030 */
  { uint32_t v = 0xaf5030u; esp -= 4; W32(esp, v); }
/* 950e07: call 0x953320 */
  esp -= 4; W32(esp, 0x950e0cu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950e0c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950e0f: mov dword ptr [0xcf85c4], ebp */
  W32((uint32_t)(0xcf85c4u), ebp);
/* 950e15: jmp 0x950ef4 */
  goto L_950ef4;
L_950e1a: /* 950e1a: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 950e1f: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950e21: jle 0x950e38 */
  if ((zf || sf != of)) goto L_950e38;
L_950e23: /* 950e23: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950e26: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 950e28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950e29: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950e2fu); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950e2f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 950e33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950e36: jmp 0x950e49 */
  goto L_950e49;
L_950e38: /* 950e38: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950e3b: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 950e40: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 950e42: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 950e46: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950e49: /* 950e49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950e4b: jne 0x950e66 */
  if (!zf) goto L_950e66;
L_950e4d: /* 950e4d: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 950e53: push 0xaf4ff4 */
  { uint32_t v = 0xaf4ff4u; esp -= 4; W32(esp, v); }
/* 950e58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950e59: call 0x953470 */
  esp -= 4; W32(esp, 0x950e5eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950e5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950e61: jmp 0x950ef4 */
  goto L_950ef4;
L_950e66: /* 950e66: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 950e6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950e6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950e6c: call 0x953440 */
  esp -= 4; W32(esp, 0x950e71u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 950e71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950e73: push 0xcf8448 */
  { uint32_t v = 0xcf8448u; esp -= 4; W32(esp, v); }
/* 950e78: push 0xaf4fe8 */
  { uint32_t v = 0xaf4fe8u; esp -= 4; W32(esp, v); }
/* 950e7d: mov dword ptr [0xcf8448], eax */
  W32((uint32_t)(0xcf8448u), eax);
/* 950e82: call 0x953320 */
  esp -= 4; W32(esp, 0x950e87u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950e87: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950e8a: jmp 0x950ef4 */
  goto L_950ef4;
L_950e8c: /* 950e8c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 950e8d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 950e91: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950e94: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 950e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950e9b: push 0xaf4fac */
  { uint32_t v = 0xaf4facu; esp -= 4; W32(esp, v); }
/* 950ea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950ea1: call 0x953470 */
  esp -= 4; W32(esp, 0x950ea6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 950ea6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950ea9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_950eb0: /* 950eb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 950eb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 950eb5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 950eb9: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 950ebb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 950ebd: je 0x951d97 */
  if (zf) goto L_951d97;
L_950ec3: /* 950ec3: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 950ec9: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950ecb: jle 0x950ede */
  if ((zf || sf != of)) goto L_950ede;
L_950ecd: /* 950ecd: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950ed0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 950ed2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950ed3: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x950ed9u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 950ed9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950edc: jmp 0x950ef0 */
  goto L_950ef0;
L_950ede: /* 950ede: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 950ee4: movsx ecx, al */
  ecx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950ee7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 950ee9: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 950eed: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950ef0: /* 950ef0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 950ef2: je 0x950eb0 */
  if (zf) goto L_950eb0;
L_950ef4: /* 950ef4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 950ef8: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 950efa: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 950efc: jne 0x950bd8 */
  if (!zf) goto L_950bd8;
L_950f02: /* 950f02: jmp 0x951d97 */
  goto L_951d97;
L_950f07: /* 950f07: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 950f09: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 950f0c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 950f0e: je 0x951d97 */
  if (zf) goto L_951d97;
L_950f14: /* 950f14: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 950f1a: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 950f1c: jle 0x950f2b */
  if ((zf || sf != of)) goto L_950f2b;
L_950f1e: /* 950f1e: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950f21: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 950f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950f24: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x950f26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 950f26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950f29: jmp 0x950f3d */
  goto L_950f3d;
L_950f2b: /* 950f2b: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 950f31: movsx ecx, al */
  ecx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 950f34: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 950f36: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 950f3a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_950f3d: /* 950f3d: xor ebx, ebx */
  ebx = 0;
/* 950f3f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 950f41: jne 0x951d97 */
  if (!zf) goto L_951d97;
L_950f47: /* 950f47: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 950f4b: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 950f4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 950f4f: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 950f52: cmp eax, 0x4a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 950f55: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 950f59: ja 0x9516b7 */
  if ((!cf && !zf)) goto L_9516b7;
L_950f5f: /* 950f5f: movzx edx, byte ptr [eax + 0x9520ec] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x9520ecu)));
/* 950f66: jmp dword ptr [edx*4 + 0x952080] */
  switch (R32((uint32_t)(edx*4 + 0x952080u))) {
    case 0x950f6du: goto L_950f6d;
    case 0x9511c5u: goto L_9511c5;
    case 0x9511dfu: goto L_9511df;
    case 0x9511f9u: goto L_9511f9;
    case 0x951213u: goto L_951213;
    case 0x95122du: goto L_95122d;
    case 0x951247u: goto L_951247;
    case 0x951261u: goto L_951261;
    case 0x95127bu: goto L_95127b;
    case 0x951295u: goto L_951295;
    case 0x9512afu: goto L_9512af;
    case 0x9512cfu: goto L_9512cf;
    case 0x9512e9u: goto L_9512e9;
    case 0x951303u: goto L_951303;
    case 0x951317u: goto L_951317;
    case 0x95132bu: goto L_95132b;
    case 0x9513a1u: goto L_9513a1;
    case 0x9513bbu: goto L_9513bb;
    case 0x9513d5u: goto L_9513d5;
    case 0x9513efu: goto L_9513ef;
    case 0x951409u: goto L_951409;
    case 0x951423u: goto L_951423;
    case 0x95143du: goto L_95143d;
    case 0x9514e7u: goto L_9514e7;
    case 0x951558u: goto L_951558;
    case 0x9515ffu: goto L_9515ff;
    case 0x9516b7u: goto L_9516b7;
    default: guest_badjump(0x950f66, R32((uint32_t)(edx*4 + 0x952080u))); return;
  }
L_950f6d: /* 950f6d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 950f71: mov bl, byte ptr [eax - 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xffffffffu))) & 0xffu);
/* 950f74: cmp bl, 0x62 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950f77: jne 0x950fd3 */
  if (!zf) goto L_950fd3;
L_950f79: /* 950f79: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 950f7b: cmp al, 0x42 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950f7d: jne 0x950faa */
  if (!zf) goto L_950faa;
L_950f7f: /* 950f7f: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 950f83: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 950f87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 950f88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950f8a: push 0xaf4f98 */
  { uint32_t v = 0xaf4f98u; esp -= 4; W32(esp, v); }
/* 950f8f: mov dword ptr [esp + 0x28], 0x3f000000 */
  W32((uint32_t)(esp + 0x28u), 0x3f000000u);
/* 950f97: mov dword ptr [0xcf856c], ebp */
  W32((uint32_t)(0xcf856cu), ebp);
/* 950f9d: call 0x953320 */
  esp -= 4; W32(esp, 0x950fa2u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950fa2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950fa5: jmp 0x951714 */
  goto L_951714;
L_950faa: /* 950faa: cmp al, 0x62 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950fac: jne 0x950fd3 */
  if (!zf) goto L_950fd3;
L_950fae: /* 950fae: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 950fb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950fb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 950fb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 950fb7: push 0xaf4f88 */
  { uint32_t v = 0xaf4f88u; esp -= 4; W32(esp, v); }
/* 950fbc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 950fc0: mov dword ptr [0xcf8570], ebp */
  W32((uint32_t)(0xcf8570u), ebp);
/* 950fc6: call 0x953320 */
  esp -= 4; W32(esp, 0x950fcbu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 950fcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950fce: jmp 0x951714 */
  goto L_951714;
L_950fd3: /* 950fd3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 950fd7: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 950fdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 950fdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 950fdd: call 0x953440 */
  esp -= 4; W32(esp, 0x950fe2u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 950fe2: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 950fe6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 950fea: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 950ff2: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 950ff4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 950ff7: cmp cl, 0x3a */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 950ffa: jne 0x9510d8 */
  if (!zf) goto L_9510d8;
L_951000: /* 951000: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 951004: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 951005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951007: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 95100b: call 0x953410 */
  esp -= 4; W32(esp, 0x951010u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 951010: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 951014: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 95101a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95101d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95101f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 951022: jp 0x9510d8 */
  if (pf) goto L_9510d8;
L_951028: /* 951028: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95102c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 951030: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 951033: je 0x9510d8 */
  if (zf) goto L_9510d8;
L_951039: /* 951039: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 95103f: nop  */
L_951040: /* 951040: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 951046: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951048: jle 0x95105b */
  if ((zf || sf != of)) goto L_95105b;
L_95104a: /* 95104a: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 95104d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 95104f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951050: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951052u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951052: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 951056: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951059: jmp 0x95106c */
  goto L_95106c;
L_95105b: /* 95105b: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 95105e: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 951063: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 951065: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 951069: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_95106c: /* 95106c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95106e: jne 0x9510d8 */
  if (!zf) goto L_9510d8;
L_951070: /* 951070: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951073: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 951074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951075: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 951079: call dword ptr [0xcfb0a4] */
  esp -= 4; W32(esp, 0x95107fu); SPILL(); f_406e75(); if (g_unwind) return; /* MSVCR70!toupper */ RELOAD();
/* 95107f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951082: cmp eax, 0x42 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951085: jne 0x9510cb */
  if (!zf) goto L_9510cb;
L_951087: /* 951087: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95108b: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 95108f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951090: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951091: call 0x953440 */
  esp -= 4; W32(esp, 0x951096u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951096: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 95109a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95109d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95109f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9510a3: jne 0x9510cf */
  if (!zf) goto L_9510cf;
L_9510a5: /* 9510a5: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9510a7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9510a8: cmp al, 0x3a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9510aa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9510ae: jne 0x9510cf */
  if (!zf) goto L_9510cf;
L_9510b0: /* 9510b0: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9510b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9510b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9510b6: call 0x953410 */
  esp -= 4; W32(esp, 0x9510bbu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 9510bb: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 9510c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9510c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9510c6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9510c9: jnp 0x9510fd */
  if (!pf) goto L_9510fd;
L_9510cb: /* 9510cb: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_9510cf: /* 9510cf: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9510d2: jne 0x951040 */
  if (!zf) goto L_951040;
L_9510d8: /* 9510d8: cmp esi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9510dc: jne 0x951150 */
  if (!zf) goto L_951150;
L_9510de: /* 9510de: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9510e2: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 9510e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9510ea: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9510ed: jp 0x951150 */
  if (pf) goto L_951150;
L_9510ef: /* 9510ef: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 9510f5: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9510f8: jmp 0x951714 */
  goto L_951714;
L_9510fd: /* 9510fd: mov ecx, dword ptr [0xcf8540] */
  ecx = R32((uint32_t)(0xcf8540u));
/* 951103: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 951108: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 951109: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95110c: mov dword ptr [0xcf8540], ecx */
  W32((uint32_t)(0xcf8540u), ecx);
/* 951112: jl 0x95112d */
  if ((sf != of)) goto L_95112d;
L_951114: /* 951114: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 951118: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95111e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95111f: push 0xaf4f64 */
  { uint32_t v = 0xaf4f64u; esp -= 4; W32(esp, v); }
/* 951124: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951125: call 0x953470 */
  esp -= 4; W32(esp, 0x95112au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95112a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95112d: /* 95112d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95112f: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 951133: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951134: push 0xaf4f54 */
  { uint32_t v = 0xaf4f54u; esp -= 4; W32(esp, v); }
/* 951139: call 0x953320 */
  esp -= 4; W32(esp, 0x95113eu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95113e: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 951142: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 951148: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95114b: jmp 0x951714 */
  goto L_951714;
L_951150: /* 951150: cmp bl, 0x62 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 951153: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 951157: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 95115d: mov dword ptr [0xcf856c], ebp */
  W32((uint32_t)(0xcf856cu), ebp);
/* 951163: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 951165: jne 0x951196 */
  if (!zf) goto L_951196;
L_951167: /* 951167: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95116a: jp 0x951174 */
  if (pf) goto L_951174;
L_95116c: /* 95116c: mov dword ptr [esp + 0x1c], 0xbf000000 */
  W32((uint32_t)(esp + 0x1cu), 0xbf000000u);
L_951174: /* 951174: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 951178: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951179: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 95117d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95117e: push 0xaf4f44 */
  { uint32_t v = 0xaf4f44u; esp -= 4; W32(esp, v); }
/* 951183: call 0x953320 */
  esp -= 4; W32(esp, 0x951188u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951188: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 95118e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951191: jmp 0x951714 */
  goto L_951714;
L_951196: /* 951196: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 951199: jp 0x9511a3 */
  if (pf) goto L_9511a3;
L_95119b: /* 95119b: mov dword ptr [esp + 0x1c], 0x3f000000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f000000u);
L_9511a3: /* 9511a3: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9511a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9511a8: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9511ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9511ad: push 0xaf4f34 */
  { uint32_t v = 0xaf4f34u; esp -= 4; W32(esp, v); }
/* 9511b2: call 0x953320 */
  esp -= 4; W32(esp, 0x9511b7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9511b7: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 9511bd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9511c0: jmp 0x951714 */
  goto L_951714;
L_9511c5: /* 9511c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9511c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9511c7: push 0xaf4f24 */
  { uint32_t v = 0xaf4f24u; esp -= 4; W32(esp, v); }
/* 9511cc: call 0x953320 */
  esp -= 4; W32(esp, 0x9511d1u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9511d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9511d4: mov dword ptr [0xcf8440], ebp */
  W32((uint32_t)(0xcf8440u), ebp);
/* 9511da: jmp 0x951714 */
  goto L_951714;
L_9511df: /* 9511df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9511e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9511e1: push 0xaf4f10 */
  { uint32_t v = 0xaf4f10u; esp -= 4; W32(esp, v); }
/* 9511e6: call 0x953320 */
  esp -= 4; W32(esp, 0x9511ebu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9511eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9511ee: mov dword ptr [0xcf83f8], ebp */
  W32((uint32_t)(0xcf83f8u), ebp);
/* 9511f4: jmp 0x951714 */
  goto L_951714;
L_9511f9: /* 9511f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9511fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9511fb: push 0xaf4efc */
  { uint32_t v = 0xaf4efcu; esp -= 4; W32(esp, v); }
/* 951200: call 0x953320 */
  esp -= 4; W32(esp, 0x951205u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951205: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951208: mov dword ptr [0xcf8478], ebp */
  W32((uint32_t)(0xcf8478u), ebp);
/* 95120e: jmp 0x951714 */
  goto L_951714;
L_951213: /* 951213: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951214: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951215: push 0xaf4eec */
  { uint32_t v = 0xaf4eecu; esp -= 4; W32(esp, v); }
/* 95121a: call 0x953320 */
  esp -= 4; W32(esp, 0x95121fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95121f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951222: mov dword ptr [0xcf8444], ebp */
  W32((uint32_t)(0xcf8444u), ebp);
/* 951228: jmp 0x951714 */
  goto L_951714;
L_95122d: /* 95122d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95122e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95122f: push 0xaf4ed8 */
  { uint32_t v = 0xaf4ed8u; esp -= 4; W32(esp, v); }
/* 951234: call 0x953320 */
  esp -= 4; W32(esp, 0x951239u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951239: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95123c: mov dword ptr [0xcf847c], ebp */
  W32((uint32_t)(0xcf847cu), ebp);
/* 951242: jmp 0x951714 */
  goto L_951714;
L_951247: /* 951247: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951248: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951249: push 0xaf4ec8 */
  { uint32_t v = 0xaf4ec8u; esp -= 4; W32(esp, v); }
/* 95124e: call 0x953320 */
  esp -= 4; W32(esp, 0x951253u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951253: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951256: mov dword ptr [0xcf8558], ebp */
  W32((uint32_t)(0xcf8558u), ebp);
/* 95125c: jmp 0x951714 */
  goto L_951714;
L_951261: /* 951261: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951262: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951263: push 0xaf4eb0 */
  { uint32_t v = 0xaf4eb0u; esp -= 4; W32(esp, v); }
/* 951268: call 0x953320 */
  esp -= 4; W32(esp, 0x95126du); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95126d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951270: mov dword ptr [0xcf83e0], ebp */
  W32((uint32_t)(0xcf83e0u), ebp);
/* 951276: jmp 0x951714 */
  goto L_951714;
L_95127b: /* 95127b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95127c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95127d: push 0xaf4ea0 */
  { uint32_t v = 0xaf4ea0u; esp -= 4; W32(esp, v); }
/* 951282: call 0x953320 */
  esp -= 4; W32(esp, 0x951287u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951287: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95128a: mov dword ptr [0xcf85a4], ebp */
  W32((uint32_t)(0xcf85a4u), ebp);
/* 951290: jmp 0x951714 */
  goto L_951714;
L_951295: /* 951295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951296: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951297: push 0xaf4e84 */
  { uint32_t v = 0xaf4e84u; esp -= 4; W32(esp, v); }
/* 95129c: call 0x953320 */
  esp -= 4; W32(esp, 0x9512a1u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9512a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9512a4: mov dword ptr [0xcf858c], ebp */
  W32((uint32_t)(0xcf858cu), ebp);
/* 9512aa: jmp 0x951714 */
  goto L_951714;
L_9512af: /* 9512af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9512b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9512b1: push 0xaf4e78 */
  { uint32_t v = 0xaf4e78u; esp -= 4; W32(esp, v); }
/* 9512b6: call 0x953320 */
  esp -= 4; W32(esp, 0x9512bbu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9512bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9512be: mov dword ptr [0xcf8454], ebp */
  W32((uint32_t)(0xcf8454u), ebp);
/* 9512c4: mov dword ptr [0xcf845c], ebp */
  W32((uint32_t)(0xcf845cu), ebp);
/* 9512ca: jmp 0x951714 */
  goto L_951714;
L_9512cf: /* 9512cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9512d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9512d1: push 0xaf4e64 */
  { uint32_t v = 0xaf4e64u; esp -= 4; W32(esp, v); }
/* 9512d6: call 0x953320 */
  esp -= 4; W32(esp, 0x9512dbu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9512db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9512de: mov dword ptr [0xcf83f0], ebp */
  W32((uint32_t)(0xcf83f0u), ebp);
/* 9512e4: jmp 0x951714 */
  goto L_951714;
L_9512e9: /* 9512e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9512ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9512eb: push 0xaf4e54 */
  { uint32_t v = 0xaf4e54u; esp -= 4; W32(esp, v); }
/* 9512f0: call 0x953320 */
  esp -= 4; W32(esp, 0x9512f5u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9512f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9512f8: mov dword ptr [0xcf8474], ebp */
  W32((uint32_t)(0xcf8474u), ebp);
/* 9512fe: jmp 0x951714 */
  goto L_951714;
L_951303: /* 951303: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951304: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951305: push 0xaf4e40 */
  { uint32_t v = 0xaf4e40u; esp -= 4; W32(esp, v); }
/* 95130a: call 0x953320 */
  esp -= 4; W32(esp, 0x95130fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95130f: mov dword ptr [0xcf83e4], ebx */
  W32((uint32_t)(0xcf83e4u), ebx);
/* 951315: jmp 0x95133d */
  goto L_95133d;
L_951317: /* 951317: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951318: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951319: push 0xaf4e28 */
  { uint32_t v = 0xaf4e28u; esp -= 4; W32(esp, v); }
/* 95131e: call 0x953320 */
  esp -= 4; W32(esp, 0x951323u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951323: mov dword ptr [0xcf8458], ebx */
  W32((uint32_t)(0xcf8458u), ebx);
/* 951329: jmp 0x95133d */
  goto L_95133d;
L_95132b: /* 95132b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95132c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95132d: push 0xaf4e10 */
  { uint32_t v = 0xaf4e10u; esp -= 4; W32(esp, v); }
/* 951332: call 0x953320 */
  esp -= 4; W32(esp, 0x951337u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951337: mov dword ptr [0xcf8468], ebx */
  W32((uint32_t)(0xcf8468u), ebx);
L_95133d: /* 95133d: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 951343: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 951345: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951348: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95134a: jle 0x95135d */
  if ((zf || sf != of)) goto L_95135d;
L_95134c: /* 95134c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 951350: movsx eax, byte ptr [edx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 951353: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 951355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951356: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951358u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951358: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95135b: jmp 0x951373 */
  goto L_951373;
L_95135d: /* 95135d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 951361: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951364: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 951369: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95136b: xor eax, eax */
  eax = 0;
/* 95136d: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 951370: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951373: /* 951373: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951375: je 0x951714 */
  if (zf) goto L_951714;
L_95137b: /* 95137b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95137f: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951382: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 951388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951389: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95138a: push 0xaf4dc0 */
  { uint32_t v = 0xaf4dc0u; esp -= 4; W32(esp, v); }
/* 95138f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951390: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 951394: call 0x953470 */
  esp -= 4; W32(esp, 0x951399u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951399: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95139c: jmp 0x951714 */
  goto L_951714;
L_9513a1: /* 9513a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513a3: push 0xaf4da4 */
  { uint32_t v = 0xaf4da4u; esp -= 4; W32(esp, v); }
/* 9513a8: call 0x953320 */
  esp -= 4; W32(esp, 0x9513adu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9513ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9513b0: mov dword ptr [0xcf83f4], ebp */
  W32((uint32_t)(0xcf83f4u), ebp);
/* 9513b6: jmp 0x951714 */
  goto L_951714;
L_9513bb: /* 9513bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513bd: push 0xaf4d90 */
  { uint32_t v = 0xaf4d90u; esp -= 4; W32(esp, v); }
/* 9513c2: call 0x953320 */
  esp -= 4; W32(esp, 0x9513c7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9513c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9513ca: mov dword ptr [0xcf8578], ebp */
  W32((uint32_t)(0xcf8578u), ebp);
/* 9513d0: jmp 0x951714 */
  goto L_951714;
L_9513d5: /* 9513d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513d7: push 0xaf4d7c */
  { uint32_t v = 0xaf4d7cu; esp -= 4; W32(esp, v); }
/* 9513dc: call 0x953320 */
  esp -= 4; W32(esp, 0x9513e1u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9513e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9513e4: mov dword ptr [0xcf857c], ebp */
  W32((uint32_t)(0xcf857cu), ebp);
/* 9513ea: jmp 0x951714 */
  goto L_951714;
L_9513ef: /* 9513ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9513f1: push 0xaf4d68 */
  { uint32_t v = 0xaf4d68u; esp -= 4; W32(esp, v); }
/* 9513f6: call 0x953320 */
  esp -= 4; W32(esp, 0x9513fbu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9513fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9513fe: mov dword ptr [0xcf85ac], ebp */
  W32((uint32_t)(0xcf85acu), ebp);
/* 951404: jmp 0x951714 */
  goto L_951714;
L_951409: /* 951409: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95140a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95140b: push 0xaf4d54 */
  { uint32_t v = 0xaf4d54u; esp -= 4; W32(esp, v); }
/* 951410: call 0x953320 */
  esp -= 4; W32(esp, 0x951415u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951415: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951418: mov dword ptr [0xcf8470], ebp */
  W32((uint32_t)(0xcf8470u), ebp);
/* 95141e: jmp 0x951714 */
  goto L_951714;
L_951423: /* 951423: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951424: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951425: push 0xaf4d40 */
  { uint32_t v = 0xaf4d40u; esp -= 4; W32(esp, v); }
/* 95142a: call 0x953320 */
  esp -= 4; W32(esp, 0x95142fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95142f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951432: mov dword ptr [0xcf8480], ebp */
  W32((uint32_t)(0xcf8480u), ebp);
/* 951438: jmp 0x951714 */
  goto L_951714;
L_95143d: /* 95143d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 951441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951442: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951443: call 0x953440 */
  esp -= 4; W32(esp, 0x951448u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951448: mov ecx, dword ptr [0xcf8420] */
  ecx = R32((uint32_t)(0xcf8420u));
/* 95144e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951451: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951453: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 951457: je 0x95147a */
  if (zf) goto L_95147a;
L_951459: /* 951459: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95145f: push 0xaf4cf8 */
  { uint32_t v = 0xaf4cf8u; esp -= 4; W32(esp, v); }
/* 951464: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951465: call 0x953470 */
  esp -= 4; W32(esp, 0x95146au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95146a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95146e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951471: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 951475: jmp 0x951714 */
  goto L_951714;
L_95147a: /* 95147a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95147e: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951482: jne 0x9514a5 */
  if (!zf) goto L_9514a5;
L_951484: /* 951484: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95148a: push 0xaf4cb0 */
  { uint32_t v = 0xaf4cb0u; esp -= 4; W32(esp, v); }
/* 95148f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951490: call 0x953470 */
  esp -= 4; W32(esp, 0x951495u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951495: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 951499: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95149c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9514a0: jmp 0x951714 */
  goto L_951714;
L_9514a5: /* 9514a5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9514a7: jl 0x9514c1 */
  if ((sf != of)) goto L_9514c1;
L_9514a9: /* 9514a9: cmp byte ptr [ecx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9514ac: je 0x9514c1 */
  if (zf) goto L_9514c1;
L_9514ae: /* 9514ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9514af: mov dword ptr [0xcf8420], eax */
  W32((uint32_t)(0xcf8420u), eax);
/* 9514b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9514b5: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 9514b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9514ba: push 0xaf4c9c */
  { uint32_t v = 0xaf4c9cu; esp -= 4; W32(esp, v); }
/* 9514bf: jmp 0x9514d2 */
  goto L_9514d2;
L_9514c1: /* 9514c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9514c2: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 9514c6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9514c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9514c8: mov dword ptr [0xcf8420], eax */
  W32((uint32_t)(0xcf8420u), eax);
/* 9514cd: push 0xaf4c84 */
  { uint32_t v = 0xaf4c84u; esp -= 4; W32(esp, v); }
L_9514d2: /* 9514d2: call 0x953320 */
  esp -= 4; W32(esp, 0x9514d7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9514d7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9514db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9514de: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9514e2: jmp 0x951714 */
  goto L_951714;
L_9514e7: /* 9514e7: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 9514ec: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9514ee: jle 0x9514fd */
  if ((zf || sf != of)) goto L_9514fd;
L_9514f0: /* 9514f0: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 9514f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9514f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9514f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9514f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9514f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9514fb: jmp 0x95150f */
  goto L_95150f;
L_9514fd: /* 9514fd: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951500: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 951505: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 951507: xor eax, eax */
  eax = 0;
/* 951509: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 95150c: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_95150f: /* 95150f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951511: jne 0x95152b */
  if (!zf) goto L_95152b;
L_951513: /* 951513: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 951517: cmp byte ptr [edx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 95151a: je 0x95152b */
  if (zf) goto L_95152b;
L_95151c: /* 95151c: mov dword ptr [0xcf8bb4], 0 */
  W32((uint32_t)(0xcf8bb4u), 0x0u);
/* 951526: jmp 0x951714 */
  goto L_951714;
L_95152b: /* 95152b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95152f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 951533: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951534: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951535: call 0x953410 */
  esp -= 4; W32(esp, 0x95153au); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 95153a: fstp dword ptr [0xcf8bb4] */
  WF32((uint32_t)(0xcf8bb4u), ST0); FPOP();
/* 951540: push 0xcf8bb4 */
  { uint32_t v = 0xcf8bb4u; esp -= 4; W32(esp, v); }
/* 951545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951546: push 0xaf4c7c */
  { uint32_t v = 0xaf4c7cu; esp -= 4; W32(esp, v); }
/* 95154b: call 0x953320 */
  esp -= 4; W32(esp, 0x951550u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951550: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951553: jmp 0x951714 */
  goto L_951714;
L_951558: /* 951558: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 95155e: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951560: jle 0x95156f */
  if ((zf || sf != of)) goto L_95156f;
L_951562: /* 951562: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951565: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 951567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951568: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x95156au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95156a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95156d: jmp 0x951581 */
  goto L_951581;
L_95156f: /* 95156f: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951572: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 951578: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95157a: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 95157e: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951581: /* 951581: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951583: jne 0x9515a7 */
  if (!zf) goto L_9515a7;
L_951585: /* 951585: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 951589: cmp byte ptr [ecx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 95158c: je 0x9515a7 */
  if (zf) goto L_9515a7;
L_95158e: /* 95158e: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 951594: push 0xaf4c3c */
  { uint32_t v = 0xaf4c3cu; esp -= 4; W32(esp, v); }
/* 951599: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95159a: call 0x953470 */
  esp -= 4; W32(esp, 0x95159fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95159f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9515a2: jmp 0x951714 */
  goto L_951714;
L_9515a7: /* 9515a7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9515ab: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9515af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9515b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9515b1: call 0x953440 */
  esp -= 4; W32(esp, 0x9515b6u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 9515b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9515b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9515bb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9515bf: mov dword ptr [0xcf8568], eax */
  W32((uint32_t)(0xcf8568u), eax);
/* 9515c4: jle 0x9515de */
  if ((zf || sf != of)) goto L_9515de;
L_9515c6: /* 9515c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9515c7: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9515cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9515cc: push 0xaf4c30 */
  { uint32_t v = 0xaf4c30u; esp -= 4; W32(esp, v); }
/* 9515d1: call 0x953320 */
  esp -= 4; W32(esp, 0x9515d6u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9515d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9515d9: jmp 0x951714 */
  goto L_951714;
L_9515de: /* 9515de: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9515e1: jge 0x951714 */
  if ((sf == of)) goto L_951714;
L_9515e7: /* 9515e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9515e8: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 9515ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9515ed: push 0xaf4c20 */
  { uint32_t v = 0xaf4c20u; esp -= 4; W32(esp, v); }
/* 9515f2: call 0x953320 */
  esp -= 4; W32(esp, 0x9515f7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9515f7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9515fa: jmp 0x951714 */
  goto L_951714;
L_9515ff: /* 9515ff: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 951603: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951604: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951605: call 0x953440 */
  esp -= 4; W32(esp, 0x95160au); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 95160a: mov ecx, dword ptr [0xcf842c] */
  ecx = R32((uint32_t)(0xcf842cu));
/* 951610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951613: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951615: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 951619: je 0x95163b */
  if (zf) goto L_95163b;
L_95161b: /* 95161b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951620: push 0xaf4bd8 */
  { uint32_t v = 0xaf4bd8u; esp -= 4; W32(esp, v); }
/* 951625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951626: call 0x953470 */
  esp -= 4; W32(esp, 0x95162bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95162b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95162f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951632: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 951636: jmp 0x951714 */
  goto L_951714;
L_95163b: /* 95163b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95163f: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951643: jne 0x951666 */
  if (!zf) goto L_951666;
L_951645: /* 951645: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95164b: push 0xaf4b90 */
  { uint32_t v = 0xaf4b90u; esp -= 4; W32(esp, v); }
/* 951650: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951651: call 0x953470 */
  esp -= 4; W32(esp, 0x951656u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951656: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95165a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95165d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 951661: jmp 0x951714 */
  goto L_951714;
L_951666: /* 951666: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 951669: jge 0x951690 */
  if ((sf == of)) goto L_951690;
L_95166b: /* 95166b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95166c: mov dword ptr [0xcf842c], eax */
  W32((uint32_t)(0xcf842cu), eax);
/* 951671: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 951675: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951676: push 0xaf4b74 */
  { uint32_t v = 0xaf4b74u; esp -= 4; W32(esp, v); }
/* 95167b: call 0x953320 */
  esp -= 4; W32(esp, 0x951680u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951680: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 951684: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951687: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 95168b: jmp 0x951714 */
  goto L_951714;
L_951690: /* 951690: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 951694: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951695: push 0xaf4b5c */
  { uint32_t v = 0xaf4b5cu; esp -= 4; W32(esp, v); }
/* 95169a: call 0x953320 */
  esp -= 4; W32(esp, 0x95169fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95169f: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9516a3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9516a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9516aa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9516ab: mov dword ptr [0xcf842c], edx */
  W32((uint32_t)(0xcf842cu), edx);
/* 9516b1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9516b5: jmp 0x951714 */
  goto L_951714;
L_9516b7: /* 9516b7: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9516bd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9516be: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9516c2: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 9516c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9516c6: push 0xaf4b20 */
  { uint32_t v = 0xaf4b20u; esp -= 4; W32(esp, v); }
/* 9516cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9516cc: call 0x953470 */
  esp -= 4; W32(esp, 0x9516d1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9516d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9516d4: /* 9516d4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9516d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9516d9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9516dd: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9516df: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9516e1: je 0x951d97 */
  if (zf) goto L_951d97;
L_9516e7: /* 9516e7: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 9516ed: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9516ef: jle 0x9516fe */
  if ((zf || sf != of)) goto L_9516fe;
L_9516f1: /* 9516f1: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 9516f4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9516f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9516f7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9516f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9516f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9516fc: jmp 0x951710 */
  goto L_951710;
L_9516fe: /* 9516fe: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 951704: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 951706: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951709: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95170d: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951710: /* 951710: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951712: je 0x9516d4 */
  if (zf) goto L_9516d4;
L_951714: /* 951714: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 951718: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 95171a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95171c: jne 0x950f14 */
  if (!zf) goto L_950f14;
L_951722: /* 951722: jmp 0x951d97 */
  goto L_951d97;
L_951727: /* 951727: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 951729: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95172b: je 0x951d97 */
  if (zf) goto L_951d97;
L_951731: /* 951731: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
L_951737: /* 951737: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 95173d: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95173f: jle 0x95174e */
  if ((zf || sf != of)) goto L_95174e;
L_951741: /* 951741: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951744: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 951746: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951747: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951749u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951749: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95174c: jmp 0x951760 */
  goto L_951760;
L_95174e: /* 95174e: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 951754: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 951756: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951759: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95175d: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951760: /* 951760: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951762: jne 0x951d97 */
  if (!zf) goto L_951d97;
L_951768: /* 951768: mov esi, dword ptr [0xcfb0ac] */
  esi = R32((uint32_t)(0xcfb0acu));
/* 95176e: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951770: jle 0x951799 */
  if ((zf || sf != of)) goto L_951799;
L_951772: /* 951772: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 951776: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 951779: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 95177f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 951781: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951782: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951784u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951784: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951788: mov esi, dword ptr [0xcfb0ac] */
  esi = R32((uint32_t)(0xcfb0acu));
/* 95178e: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 951794: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951797: jmp 0x9517b5 */
  goto L_9517b5;
L_951799: /* 951799: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95179d: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 9517a0: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 9517a6: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 9517a8: movzx eax, byte ptr [edi + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edi + eax*2)));
/* 9517ac: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 9517b2: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9517b5: /* 9517b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9517b7: jne 0x951d5a */
  if (!zf) goto L_951d5a;
L_9517bd: /* 9517bd: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9517bf: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9517c1: je 0x951d5a */
  if (zf) goto L_951d5a;
L_9517c7: /* 9517c7: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 9517ca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9517cb: sub eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9517ce: cmp eax, 0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9517d1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9517d5: ja 0x951cf9 */
  if ((!cf && !zf)) goto L_951cf9;
L_9517db: /* 9517db: movzx eax, byte ptr [eax + 0x95216c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x95216cu)));
/* 9517e2: jmp dword ptr [eax*4 + 0x952138] */
  switch (R32((uint32_t)(eax*4 + 0x952138u))) {
    case 0x9517e9u: goto L_9517e9;
    case 0x951805u: goto L_951805;
    case 0x951821u: goto L_951821;
    case 0x95183du: goto L_95183d;
    case 0x951881u: goto L_951881;
    case 0x9518eeu: goto L_9518ee;
    case 0x951960u: goto L_951960;
    case 0x951afcu: goto L_951afc;
    case 0x951b5fu: goto L_951b5f;
    case 0x951bbfu: goto L_951bbf;
    case 0x951c1fu: goto L_951c1f;
    case 0x951c9bu: goto L_951c9b;
    case 0x951cf9u: goto L_951cf9;
    default: guest_badjump(0x9517e2, R32((uint32_t)(eax*4 + 0x952138u))); return;
  }
L_9517e9: /* 9517e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9517eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9517ed: push 0xaf4b0c */
  { uint32_t v = 0xaf4b0cu; esp -= 4; W32(esp, v); }
/* 9517f2: call 0x953320 */
  esp -= 4; W32(esp, 0x9517f7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9517f7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9517fa: mov dword ptr [0xcf8404], ebp */
  W32((uint32_t)(0xcf8404u), ebp);
/* 951800: jmp 0x951d6d */
  goto L_951d6d;
L_951805: /* 951805: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951807: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951809: push 0xaf4b00 */
  { uint32_t v = 0xaf4b00u; esp -= 4; W32(esp, v); }
/* 95180e: call 0x953320 */
  esp -= 4; W32(esp, 0x951813u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951813: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951816: mov dword ptr [0xcf8530], ebp */
  W32((uint32_t)(0xcf8530u), ebp);
/* 95181c: jmp 0x951d6d */
  goto L_951d6d;
L_951821: /* 951821: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951823: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951825: push 0xaf4af8 */
  { uint32_t v = 0xaf4af8u; esp -= 4; W32(esp, v); }
/* 95182a: call 0x953320 */
  esp -= 4; W32(esp, 0x95182fu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95182f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951832: mov dword ptr [0xcf85a8], ebp */
  W32((uint32_t)(0xcf85a8u), ebp);
/* 951838: jmp 0x951d6d */
  goto L_951d6d;
L_95183d: /* 95183d: mov eax, dword ptr [0xcf8b34] */
  eax = R32((uint32_t)(0xcf8b34u));
/* 951842: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951844: jne 0x95185c */
  if (!zf) goto L_95185c;
L_951846: /* 951846: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95184c: push 0xaf4ab0 */
  { uint32_t v = 0xaf4ab0u; esp -= 4; W32(esp, v); }
/* 951851: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951852: call 0x953470 */
  esp -= 4; W32(esp, 0x951857u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951857: jmp 0x951d6a */
  goto L_951d6a;
L_95185c: /* 95185c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95185e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951860: push 0xaf4aa4 */
  { uint32_t v = 0xaf4aa4u; esp -= 4; W32(esp, v); }
/* 951865: call 0x953320 */
  esp -= 4; W32(esp, 0x95186au); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95186a: mov eax, dword ptr [0xcf8b34] */
  eax = R32((uint32_t)(0xcf8b34u));
/* 95186f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951872: mov dword ptr [0xcf8b38], eax */
  W32((uint32_t)(0xcf8b38u), eax);
/* 951877: mov dword ptr [0xcf2f4c], eax */
  W32((uint32_t)(0xcf2f4cu), eax);
/* 95187c: jmp 0x951d6d */
  goto L_951d6d;
L_951881: /* 951881: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951883: jle 0x951896 */
  if ((zf || sf != of)) goto L_951896;
L_951885: /* 951885: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951888: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95188a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95188b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x95188du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95188d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951891: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951894: jmp 0x9518a2 */
  goto L_9518a2;
L_951896: /* 951896: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951899: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 95189b: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95189f: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9518a2: /* 9518a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9518a4: jne 0x9518bb */
  if (!zf) goto L_9518bb;
L_9518a6: /* 9518a6: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9518ab: push 0xaf4a58 */
  { uint32_t v = 0xaf4a58u; esp -= 4; W32(esp, v); }
/* 9518b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9518b1: call 0x953470 */
  esp -= 4; W32(esp, 0x9518b6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9518b6: jmp 0x951d6a */
  goto L_951d6a;
L_9518bb: /* 9518bb: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9518bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9518c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9518c1: call 0x953440 */
  esp -= 4; W32(esp, 0x9518c6u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 9518c6: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9518ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9518cc: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9518d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9518d1: push 0xaf4a4c */
  { uint32_t v = 0xaf4a4cu; esp -= 4; W32(esp, v); }
/* 9518d6: call 0x953320 */
  esp -= 4; W32(esp, 0x9518dbu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9518db: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9518df: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9518e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9518e3: mov dword ptr [0xcf8584], ecx */
  W32((uint32_t)(0xcf8584u), ecx);
/* 9518e9: jmp 0x951d6d */
  goto L_951d6d;
L_9518ee: /* 9518ee: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9518f0: jle 0x951903 */
  if ((zf || sf != of)) goto L_951903;
L_9518f2: /* 9518f2: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 9518f5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9518f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9518f8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9518fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9518fa: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9518fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951901: jmp 0x95190f */
  goto L_95190f;
L_951903: /* 951903: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951906: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 951908: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95190c: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_95190f: /* 95190f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951911: jne 0x951928 */
  if (!zf) goto L_951928;
L_951913: /* 951913: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951918: push 0xaf4a00 */
  { uint32_t v = 0xaf4a00u; esp -= 4; W32(esp, v); }
/* 95191d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95191e: call 0x953470 */
  esp -= 4; W32(esp, 0x951923u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951923: jmp 0x951d6a */
  goto L_951d6a;
L_951928: /* 951928: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 95192c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95192d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95192e: call 0x953440 */
  esp -= 4; W32(esp, 0x951933u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951933: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951935: push 0xcf855c */
  { uint32_t v = 0xcf855cu; esp -= 4; W32(esp, v); }
/* 95193a: push 0xaf49f4 */
  { uint32_t v = 0xaf49f4u; esp -= 4; W32(esp, v); }
/* 95193f: mov dword ptr [0xcf855c], eax */
  W32((uint32_t)(0xcf855cu), eax);
/* 951944: call 0x953320 */
  esp -= 4; W32(esp, 0x951949u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951949: mov eax, dword ptr [0xcf855c] */
  eax = R32((uint32_t)(0xcf855cu));
/* 95194e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 95194f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 951951: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951954: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 951956: mov dword ptr [0xcf8560], eax */
  W32((uint32_t)(0xcf8560u), eax);
/* 95195b: jmp 0x951d6d */
  goto L_951d6d;
L_951960: /* 951960: cmp byte ptr [ecx], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 951963: jne 0x951ae2 */
  if (!zf) goto L_951ae2;
L_951969: /* 951969: mov al, byte ptr [ecx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 95196c: cmp al, 0x22 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 95196e: je 0x951ae2 */
  if (zf) goto L_951ae2;
L_951974: /* 951974: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951976: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951979: jle 0x951989 */
  if ((zf || sf != of)) goto L_951989;
L_95197b: /* 95197b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 95197d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95197e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951980: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951984: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951987: jmp 0x951992 */
  goto L_951992;
L_951989: /* 951989: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 95198b: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95198f: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951992: /* 951992: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951994: jne 0x951ae2 */
  if (!zf) goto L_951ae2;
L_95199a: /* 95199a: xor ebx, ebx */
  ebx = 0;
/* 95199c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95199d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9519a1: cmp byte ptr [ecx], 0x27 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x27u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9519a4: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* 9519a8: jne 0x9519b1 */
  if (!zf) goto L_9519b1;
L_9519aa: /* 9519aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9519ab: mov ebx, ebp */
  ebx = ebp;
/* 9519ad: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_9519b1: /* 9519b1: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9519b4: je 0x9519f9 */
  if (zf) goto L_9519f9;
L_9519b6: /* 9519b6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9519ba: xor edi, edi */
  edi = 0;
/* 9519bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9519c0: /* 9519c0: cmp edi, 0x1f2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1f2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9519c6: jb 0x9519e9 */
  if (cf) goto L_9519e9;
L_9519c8: /* 9519c8: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9519cd: push 0xaf49c8 */
  { uint32_t v = 0xaf49c8u; esp -= 4; W32(esp, v); }
/* 9519d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9519d3: call 0x953470 */
  esp -= 4; W32(esp, 0x9519d8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9519d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9519da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9519dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9519dd: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9519e2u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9519e2: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9519e6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9519e9: /* 9519e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9519eb: je 0x951a1b */
  if (zf) goto L_951a1b;
L_9519ed: /* 9519ed: cmp byte ptr [ecx], 0x27 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x27u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9519f0: jne 0x951a53 */
  if (!zf) goto L_951a53;
L_9519f2: /* 9519f2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9519f3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9519f7: xor ebx, ebx */
  ebx = 0;
L_9519f9: /* 9519f9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9519fb: mov byte ptr [esi], 0 */
  W8((uint32_t)(esi), 0x0u);
/* 9519fe: je 0x951a69 */
  if (zf) goto L_951a69;
L_951a00: /* 951a00: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951a05: push 0xaf4980 */
  { uint32_t v = 0xaf4980u; esp -= 4; W32(esp, v); }
/* 951a0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951a0b: call 0x953470 */
  esp -= 4; W32(esp, 0x951a10u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951a10: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 951a16: jmp 0x951d6a */
  goto L_951d6a;
L_951a1b: /* 951a1b: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 951a21: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951a23: jle 0x951a3e */
  if ((zf || sf != of)) goto L_951a3e;
L_951a25: /* 951a25: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 951a29: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 951a2c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 951a2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951a2f: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x951a35u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 951a35: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951a39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951a3c: jmp 0x951a4f */
  goto L_951a4f;
L_951a3e: /* 951a3e: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951a41: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 951a46: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 951a48: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 951a4c: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951a4f: /* 951a4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951a51: jne 0x9519f9 */
  if (!zf) goto L_9519f9;
L_951a53: /* 951a53: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 951a55: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 951a57: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 951a58: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 951a59: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 951a5a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 951a5e: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 951a61: jne 0x9519c0 */
  if (!zf) goto L_9519c0;
L_951a67: /* 951a67: jmp 0x9519f9 */
  goto L_9519f9;
L_951a69: /* 951a69: mov ecx, dword ptr [0xcfb090] */
  ecx = R32((uint32_t)(0xcfb090u));
/* 951a6f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 951a72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951a73: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 951a77: push 0xaf2dd8 */
  { uint32_t v = 0xaf2dd8u; esp -= 4; W32(esp, v); }
/* 951a7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951a7d: call dword ptr [0xcfb0a0] */
  esp -= 4; W32(esp, 0x951a83u); SPILL(); f_42caca(); if (g_unwind) return; /* MSVCR70!freopen */ RELOAD();
/* 951a83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951a86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951a88: jne 0x951ab8 */
  if (!zf) goto L_951ab8;
L_951a8a: /* 951a8a: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 951a90: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 951a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951a95: push 0xaf4958 */
  { uint32_t v = 0xaf4958u; esp -= 4; W32(esp, v); }
/* 951a9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951a9b: call 0x953470 */
  esp -= 4; W32(esp, 0x951aa0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951aa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951aa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951aa4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 951aa5: call 0x9535b0 */
  esp -= 4; W32(esp, 0x951aaau); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 951aaa: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 951ab0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951ab3: jmp 0x951d6d */
  goto L_951d6d;
L_951ab8: /* 951ab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951aba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951abc: push 0xaf4948 */
  { uint32_t v = 0xaf4948u; esp -= 4; W32(esp, v); }
/* 951ac1: call 0x953320 */
  esp -= 4; W32(esp, 0x951ac6u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951ac6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951ac8: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 951acc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951ace: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951acf: call 0x953320 */
  esp -= 4; W32(esp, 0x951ad4u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951ad4: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 951ada: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951add: jmp 0x951d6d */
  goto L_951d6d;
L_951ae2: /* 951ae2: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951ae7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 951ae8: push 0xaf4888 */
  { uint32_t v = 0xaf4888u; esp -= 4; W32(esp, v); }
/* 951aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951aee: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 951af2: call 0x953470 */
  esp -= 4; W32(esp, 0x951af7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951af7: jmp 0x951d6a */
  goto L_951d6a;
L_951afc: /* 951afc: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951afe: jle 0x951b11 */
  if ((zf || sf != of)) goto L_951b11;
L_951b00: /* 951b00: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951b03: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 951b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951b06: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951b08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951b08: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951b0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951b0f: jmp 0x951b1d */
  goto L_951b1d;
L_951b11: /* 951b11: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951b14: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 951b16: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 951b1a: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951b1d: /* 951b1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951b1f: jne 0x951b36 */
  if (!zf) goto L_951b36;
L_951b21: /* 951b21: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951b26: push 0xaf4840 */
  { uint32_t v = 0xaf4840u; esp -= 4; W32(esp, v); }
/* 951b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951b2c: call 0x953470 */
  esp -= 4; W32(esp, 0x951b31u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951b31: jmp 0x951d6a */
  goto L_951d6a;
L_951b36: /* 951b36: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 951b3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951b3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951b3c: call 0x953440 */
  esp -= 4; W32(esp, 0x951b41u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951b41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951b43: push 0xcf8598 */
  { uint32_t v = 0xcf8598u; esp -= 4; W32(esp, v); }
/* 951b48: push 0xaf4834 */
  { uint32_t v = 0xaf4834u; esp -= 4; W32(esp, v); }
/* 951b4d: mov dword ptr [0xcf8598], eax */
  W32((uint32_t)(0xcf8598u), eax);
/* 951b52: call 0x953320 */
  esp -= 4; W32(esp, 0x951b57u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951b57: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951b5a: jmp 0x951d6d */
  goto L_951d6d;
L_951b5f: /* 951b5f: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951b61: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951b64: jle 0x951b74 */
  if ((zf || sf != of)) goto L_951b74;
L_951b66: /* 951b66: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 951b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951b69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951b6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951b6b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951b6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951b72: jmp 0x951b7d */
  goto L_951b7d;
L_951b74: /* 951b74: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 951b76: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 951b7a: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951b7d: /* 951b7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951b7f: jne 0x951b96 */
  if (!zf) goto L_951b96;
L_951b81: /* 951b81: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951b86: push 0xaf47f0 */
  { uint32_t v = 0xaf47f0u; esp -= 4; W32(esp, v); }
/* 951b8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951b8c: call 0x953470 */
  esp -= 4; W32(esp, 0x951b91u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951b91: jmp 0x951d6a */
  goto L_951d6a;
L_951b96: /* 951b96: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 951b9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951b9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951b9c: call 0x953440 */
  esp -= 4; W32(esp, 0x951ba1u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951ba1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951ba3: push 0xcf85a0 */
  { uint32_t v = 0xcf85a0u; esp -= 4; W32(esp, v); }
/* 951ba8: push 0xaf47e0 */
  { uint32_t v = 0xaf47e0u; esp -= 4; W32(esp, v); }
/* 951bad: mov dword ptr [0xcf85a0], eax */
  W32((uint32_t)(0xcf85a0u), eax);
/* 951bb2: call 0x953320 */
  esp -= 4; W32(esp, 0x951bb7u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951bb7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951bba: jmp 0x951d6d */
  goto L_951d6d;
L_951bbf: /* 951bbf: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951bc1: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951bc4: jle 0x951bd4 */
  if ((zf || sf != of)) goto L_951bd4;
L_951bc6: /* 951bc6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 951bc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951bc9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951bcb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951bd2: jmp 0x951bdd */
  goto L_951bdd;
L_951bd4: /* 951bd4: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 951bd6: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 951bda: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951bdd: /* 951bdd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951bdf: jne 0x951bf6 */
  if (!zf) goto L_951bf6;
L_951be1: /* 951be1: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951be6: push 0xaf4798 */
  { uint32_t v = 0xaf4798u; esp -= 4; W32(esp, v); }
/* 951beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951bec: call 0x953470 */
  esp -= 4; W32(esp, 0x951bf1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951bf1: jmp 0x951d6a */
  goto L_951d6a;
L_951bf6: /* 951bf6: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 951bfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951bfc: call 0x953440 */
  esp -= 4; W32(esp, 0x951c01u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951c01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951c03: push 0xcf8564 */
  { uint32_t v = 0xcf8564u; esp -= 4; W32(esp, v); }
/* 951c08: push 0xaf478c */
  { uint32_t v = 0xaf478cu; esp -= 4; W32(esp, v); }
/* 951c0d: mov dword ptr [0xcf8564], eax */
  W32((uint32_t)(0xcf8564u), eax);
/* 951c12: call 0x953320 */
  esp -= 4; W32(esp, 0x951c17u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951c17: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951c1a: jmp 0x951d6d */
  goto L_951d6d;
L_951c1f: /* 951c1f: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 951c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951c24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951c25: call 0x953440 */
  esp -= 4; W32(esp, 0x951c2au); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951c2a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951c2e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 951c32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951c35: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951c37: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 951c3b: jne 0x951c5e */
  if (!zf) goto L_951c5e;
L_951c3d: /* 951c3d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 951c43: push 0xaf4740 */
  { uint32_t v = 0xaf4740u; esp -= 4; W32(esp, v); }
/* 951c48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951c49: call 0x953470 */
  esp -= 4; W32(esp, 0x951c4eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951c4e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 951c52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951c55: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 951c59: jmp 0x951d6d */
  goto L_951d6d;
L_951c5e: /* 951c5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 951c60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951c62: jge 0x951c76 */
  if ((sf == of)) goto L_951c76;
L_951c64: /* 951c64: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 951c65: mov dword ptr [0xcf8588], eax */
  W32((uint32_t)(0xcf8588u), eax);
/* 951c6a: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 951c6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951c6f: push 0xaf4728 */
  { uint32_t v = 0xaf4728u; esp -= 4; W32(esp, v); }
/* 951c74: jmp 0x951c86 */
  goto L_951c86;
L_951c76: /* 951c76: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 951c7a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 951c7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951c7c: mov dword ptr [0xcf8588], eax */
  W32((uint32_t)(0xcf8588u), eax);
/* 951c81: push 0xaf4714 */
  { uint32_t v = 0xaf4714u; esp -= 4; W32(esp, v); }
L_951c86: /* 951c86: call 0x953320 */
  esp -= 4; W32(esp, 0x951c8bu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951c8b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 951c8f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951c92: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 951c96: jmp 0x951d6d */
  goto L_951d6d;
L_951c9b: /* 951c9b: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951c9d: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951ca0: jle 0x951cb0 */
  if ((zf || sf != of)) goto L_951cb0;
L_951ca2: /* 951ca2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 951ca4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951ca5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951ca7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 951cab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951cae: jmp 0x951cb9 */
  goto L_951cb9;
L_951cb0: /* 951cb0: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 951cb2: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 951cb6: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951cb9: /* 951cb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951cbb: jne 0x951cd2 */
  if (!zf) goto L_951cd2;
L_951cbd: /* 951cbd: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951cc2: push 0xaf46d0 */
  { uint32_t v = 0xaf46d0u; esp -= 4; W32(esp, v); }
/* 951cc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951cc8: call 0x953470 */
  esp -= 4; W32(esp, 0x951ccdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951ccd: jmp 0x951d6a */
  goto L_951d6a;
L_951cd2: /* 951cd2: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 951cd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951cd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951cd8: call 0x953410 */
  esp -= 4; W32(esp, 0x951cddu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 951cdd: fstp dword ptr [0xcf859c] */
  WF32((uint32_t)(0xcf859cu), ST0); FPOP();
/* 951ce3: push 0xcf859c */
  { uint32_t v = 0xcf859cu; esp -= 4; W32(esp, v); }
/* 951ce8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 951cea: push 0xaf46c4 */
  { uint32_t v = 0xaf46c4u; esp -= 4; W32(esp, v); }
/* 951cef: call 0x953320 */
  esp -= 4; W32(esp, 0x951cf4u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 951cf4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951cf7: jmp 0x951d6d */
  goto L_951d6d;
L_951cf9: /* 951cf9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 951cfa: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 951cfe: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 951d01: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 951d07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951d08: push 0xaf4688 */
  { uint32_t v = 0xaf4688u; esp -= 4; W32(esp, v); }
/* 951d0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951d0e: call 0x953470 */
  esp -= 4; W32(esp, 0x951d13u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951d13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_951d16: /* 951d16: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 951d1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 951d1b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 951d1f: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 951d21: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 951d23: je 0x951d97 */
  if (zf) goto L_951d97;
L_951d25: /* 951d25: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 951d2b: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951d2d: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 951d33: jle 0x951d42 */
  if ((zf || sf != of)) goto L_951d42;
L_951d35: /* 951d35: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951d38: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 951d3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951d3b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951d3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951d3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951d40: jmp 0x951d54 */
  goto L_951d54;
L_951d42: /* 951d42: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 951d48: movsx ecx, al */
  ecx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951d4b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 951d4d: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 951d51: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951d54: /* 951d54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951d56: je 0x951d16 */
  if (zf) goto L_951d16;
L_951d58: /* 951d58: jmp 0x951d6d */
  goto L_951d6d;
L_951d5a: /* 951d5a: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 951d5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951d60: call 0x953440 */
  esp -= 4; W32(esp, 0x951d65u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 951d65: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
L_951d6a: /* 951d6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_951d6d: /* 951d6d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 951d71: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 951d73: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 951d75: jne 0x951737 */
  if (!zf) goto L_951737;
L_951d7b: /* 951d7b: jmp 0x951d97 */
  goto L_951d97;
L_951d7d: /* 951d7d: movsx eax, byte ptr [ebx - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx + 0xffffffffu)));
/* 951d81: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 951d87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951d89: push 0xaf4660 */
  { uint32_t v = 0xaf4660u; esp -= 4; W32(esp, v); }
/* 951d8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 951d8f: call 0x953470 */
  esp -= 4; W32(esp, 0x951d94u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
L_951d94: /* 951d94: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_951d97: /* 951d97: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 951d9b: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 951d9f: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 951da2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 951da4: jne 0x951e4e */
  if (!zf) goto L_951e4e;
L_951daa: /* 951daa: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 951dac: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 951dae: je 0x951e62 */
  if (zf) goto L_951e62;
L_951db4: /* 951db4: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 951dba: cmp dword ptr [ecx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951dbc: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 951dc2: jle 0x951dd1 */
  if ((zf || sf != of)) goto L_951dd1;
L_951dc4: /* 951dc4: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951dc7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 951dc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951dca: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951dccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951dcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951dcf: jmp 0x951de3 */
  goto L_951de3;
L_951dd1: /* 951dd1: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 951dd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 951dd9: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951ddc: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 951de0: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951de3: /* 951de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951de5: jne 0x951e54 */
  if (!zf) goto L_951e54;
L_951de7: /* 951de7: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 951dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951deb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951dec: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 951df1: push 0xaf4610 */
  { uint32_t v = 0xaf4610u; esp -= 4; W32(esp, v); }
/* 951df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951df7: call 0x953470 */
  esp -= 4; W32(esp, 0x951dfcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951dfc: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 951e00: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 951e02: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951e05: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 951e07: je 0x951e62 */
  if (zf) goto L_951e62;
L_951e09: /* 951e09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_951e10: /* 951e10: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 951e16: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 951e18: jle 0x951e27 */
  if ((zf || sf != of)) goto L_951e27;
L_951e1a: /* 951e1a: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951e1d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 951e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 951e20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x951e22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 951e22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951e25: jmp 0x951e39 */
  goto L_951e39;
L_951e27: /* 951e27: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 951e2d: movsx ecx, al */
  ecx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 951e30: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 951e32: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 951e36: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_951e39: /* 951e39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951e3b: jne 0x951e54 */
  if (!zf) goto L_951e54;
L_951e3d: /* 951e3d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 951e41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 951e42: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 951e46: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 951e48: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 951e4a: jne 0x951e10 */
  if (!zf) goto L_951e10;
L_951e4c: /* 951e4c: jmp 0x951e62 */
  goto L_951e62;
L_951e4e: /* 951e4e: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
L_951e54: /* 951e54: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 951e58: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 951e5a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 951e5c: jne 0x94ff00 */
  if (!zf) goto L_94ff00;
L_951e62: /* 951e62: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 951e66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951e68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 951e69: je 0x951e91 */
  if (zf) goto L_951e91;
L_951e6b: /* 951e6b: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 951e70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951e72: jne 0x951e91 */
  if (!zf) goto L_951e91;
L_951e74: /* 951e74: mov eax, dword ptr [0xcf84bc] */
  eax = R32((uint32_t)(0xcf84bcu));
/* 951e79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 951e7b: je 0x951e91 */
  if (zf) goto L_951e91;
L_951e7d: /* 951e7d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 951e83: push 0xaf45c0 */
  { uint32_t v = 0xaf45c0u; esp -= 4; W32(esp, v); }
/* 951e88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 951e89: call 0x953470 */
  esp -= 4; W32(esp, 0x951e8eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 951e8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_951e91: /* 951e91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 951e92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 951e93: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 951e94: add esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 951e9a: ret  */
  esp += 4; SPILL(); return;
}

void f_9521b0(void) {
  LOAD_REGS();
L_9521b0: /* 9521b0: mov ecx, dword ptr [0xcf2f28] */
  ecx = R32((uint32_t)(0xcf2f28u));
/* 9521b6: lea eax, [ecx - 8] */
  eax = (uint32_t)(ecx + 0xfffffff8u);
/* 9521b9: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 9521bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9521be: mov dword ptr [0xcf8b48], eax */
  W32((uint32_t)(0xcf8b48u), eax);
/* 9521c3: jle 0x9521c9 */
  if ((zf || sf != of)) goto L_9521c9;
L_9521c5: /* 9521c5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9521c7: jle 0x9521d3 */
  if ((zf || sf != of)) goto L_9521d3;
L_9521c9: /* 9521c9: mov eax, 8 */
  eax = 0x8u;
/* 9521ce: mov dword ptr [0xcf8b48], eax */
  W32((uint32_t)(0xcf8b48u), eax);
L_9521d3: /* 9521d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9521d4: call 0x94f020 */
  esp -= 4; W32(esp, 0x9521d9u); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 9521d9: mov dword ptr [0xcf8c14], eax */
  W32((uint32_t)(0xcf8c14u), eax);
/* 9521de: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 9521e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9521e4: call 0x94f020 */
  esp -= 4; W32(esp, 0x9521e9u); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 9521e9: mov ecx, dword ptr [0xcf8b48] */
  ecx = R32((uint32_t)(0xcf8b48u));
/* 9521ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9521f0: mov dword ptr [0xcf8c18], eax */
  W32((uint32_t)(0xcf8c18u), eax);
/* 9521f5: call 0x94f020 */
  esp -= 4; W32(esp, 0x9521fau); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 9521fa: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 952200: mov dword ptr [0xcf8c60], eax */
  W32((uint32_t)(0xcf8c60u), eax);
/* 952205: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 95220c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95220d: call 0x9538c0 */
  esp -= 4; W32(esp, 0x952212u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 952212: mov ecx, dword ptr [0xcf85d0] */
  ecx = R32((uint32_t)(0xcf85d0u));
/* 952218: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* 95221f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952220: mov dword ptr [0xcf8a40], eax */
  W32((uint32_t)(0xcf8a40u), eax);
/* 952225: call 0x9538c0 */
  esp -= 4; W32(esp, 0x95222au); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 95222a: mov dword ptr [0xcf89fc], eax */
  W32((uint32_t)(0xcf89fcu), eax);
/* 95222f: mov eax, dword ptr [0xcf85d0] */
  eax = R32((uint32_t)(0xcf85d0u));
/* 952234: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 95223b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95223c: call 0x9538c0 */
  esp -= 4; W32(esp, 0x952241u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 952241: mov edx, dword ptr [0xcf85d0] */
  edx = R32((uint32_t)(0xcf85d0u));
/* 952247: mov dword ptr [0xcf89f8], eax */
  W32((uint32_t)(0xcf89f8u), eax);
/* 95224c: lea eax, [edx*4 + 4] */
  eax = (uint32_t)(edx*4 + 0x4u);
/* 952253: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952254: call 0x9538c0 */
  esp -= 4; W32(esp, 0x952259u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 952259: mov ecx, dword ptr [0xcf85d0] */
  ecx = R32((uint32_t)(0xcf85d0u));
/* 95225f: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* 952266: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952267: mov dword ptr [0xcf8a04], eax */
  W32((uint32_t)(0xcf8a04u), eax);
/* 95226c: call 0x9538c0 */
  esp -= 4; W32(esp, 0x952271u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 952271: mov dword ptr [0xcf8a00], eax */
  W32((uint32_t)(0xcf8a00u), eax);
/* 952276: mov eax, dword ptr [0xcf85d0] */
  eax = R32((uint32_t)(0xcf85d0u));
/* 95227b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95227e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95227f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 952281: je 0x9522ba */
  if (zf) goto L_9522ba;
L_952283: /* 952283: mov ecx, dword ptr [0xcf89fc] */
  ecx = R32((uint32_t)(0xcf89fcu));
/* 952289: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 95228a: mov dword ptr [ecx + eax*4], 0xff7fffff */
  W32((uint32_t)(ecx + eax*4), 0xff7fffffu);
/* 952291: mov edx, dword ptr [0xcf89f8] */
  edx = R32((uint32_t)(0xcf89f8u));
/* 952297: mov dword ptr [edx + eax*4], 0x7f7fffff */
  W32((uint32_t)(edx + eax*4), 0x7f7fffffu);
/* 95229e: mov ecx, dword ptr [0xcf8a04] */
  ecx = R32((uint32_t)(0xcf8a04u));
/* 9522a4: mov dword ptr [ecx + eax*4], 0xff7fffff */
  W32((uint32_t)(ecx + eax*4), 0xff7fffffu);
/* 9522ab: mov edx, dword ptr [0xcf8a00] */
  edx = R32((uint32_t)(0xcf8a00u));
/* 9522b1: mov dword ptr [edx + eax*4], 0x7f7fffff */
  W32((uint32_t)(edx + eax*4), 0x7f7fffffu);
/* 9522b8: jne 0x952283 */
  if (!zf) goto L_952283;
L_9522ba: /* 9522ba: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9522bf: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 9522c2: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 9522c5: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9522c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9522c9: call 0x9538c0 */
  esp -= 4; W32(esp, 0x9522ceu); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 9522ce: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 9522d4: mov dword ptr [0xcf8c1c], eax */
  W32((uint32_t)(0xcf8c1cu), eax);
/* 9522d9: lea eax, [edx*4 + 4] */
  eax = (uint32_t)(edx*4 + 0x4u);
/* 9522e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9522e1: call 0x9538c0 */
  esp -= 4; W32(esp, 0x9522e6u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 9522e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9522e9: mov dword ptr [0xcf8c20], eax */
  W32((uint32_t)(0xcf8c20u), eax);
/* 9522ee: ret  */
  esp += 4; SPILL(); return;
}

void f_9522f0(void) {
  LOAD_REGS();
L_9522f0: /* 9522f0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9522f3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9522f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9522f9: xor ebx, ebx */
  ebx = 0;
/* 9522fb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9522fd: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 952301: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 952305: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 952309: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 95230d: je 0x95232c */
  if (zf) goto L_95232c;
L_95230f: /* 95230f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 952314: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 952319: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 95231e: push 0xaf6088 */
  { uint32_t v = 0xaf6088u; esp -= 4; W32(esp, v); }
/* 952323: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952324: call 0x953470 */
  esp -= 4; W32(esp, 0x952329u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952329: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95232c: /* 95232c: cmp dword ptr [0xcf8474], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8474u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952332: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 952336: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 952337: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 95233b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95233c: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 952340: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 952341: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 952345: mov dword ptr [0xcf85dc], edi */
  W32((uint32_t)(0xcf85dcu), edi);
/* 95234b: mov dword ptr [0xcf85d8], ecx */
  W32((uint32_t)(0xcf85d8u), ecx);
/* 952351: mov dword ptr [0xcf85d4], ebp */
  W32((uint32_t)(0xcf85d4u), ebp);
/* 952357: mov dword ptr [0xcf85d0], esi */
  W32((uint32_t)(0xcf85d0u), esi);
/* 95235d: mov dword ptr [0xcf85cc], esi */
  W32((uint32_t)(0xcf85ccu), esi);
/* 952363: jne 0x9523c1 */
  if (!zf) goto L_9523c1;
L_952365: /* 952365: cmp dword ptr [0xcf8454], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95236b: jne 0x9523c1 */
  if (!zf) goto L_9523c1;
L_95236d: /* 95236d: cmp dword ptr [0xcf8488], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8488u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952373: jne 0x9523c1 */
  if (!zf) goto L_9523c1;
L_952375: /* 952375: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 95237b: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 952381: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 952383: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 952386: jne 0x9523c1 */
  if (!zf) goto L_9523c1;
L_952388: /* 952388: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95238b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95238c: mov dword ptr [0xcf845c], 1 */
  W32((uint32_t)(0xcf845cu), 0x1u);
/* 952396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952397: jg 0x9523aa */
  if ((!zf && sf == of)) goto L_9523aa;
L_952399: /* 952399: mov dword ptr [0xcf8488], 1 */
  W32((uint32_t)(0xcf8488u), 0x1u);
/* 9523a3: push 0xaf607c */
  { uint32_t v = 0xaf607cu; esp -= 4; W32(esp, v); }
/* 9523a8: jmp 0x9523b9 */
  goto L_9523b9;
L_9523aa: /* 9523aa: mov dword ptr [0xcf8454], 1 */
  W32((uint32_t)(0xcf8454u), 0x1u);
/* 9523b4: push 0xaf606c */
  { uint32_t v = 0xaf606cu; esp -= 4; W32(esp, v); }
L_9523b9: /* 9523b9: call 0x953320 */
  esp -= 4; W32(esp, 0x9523beu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9523be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9523c1: /* 9523c1: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9523c7: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9523cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9523cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9523d2: jp 0x952405 */
  if (pf) goto L_952405;
L_9523d4: /* 9523d4: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9523da: je 0x952405 */
  if (zf) goto L_952405;
L_9523dc: /* 9523dc: cmp dword ptr [0xcf856c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf856cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9523e2: jne 0x952405 */
  if (!zf) goto L_952405;
L_9523e4: /* 9523e4: cmp dword ptr [0xcf8570], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8570u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9523ea: jne 0x952405 */
  if (!zf) goto L_952405;
L_9523ec: /* 9523ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9523ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9523ee: push 0xaf605c */
  { uint32_t v = 0xaf605cu; esp -= 4; W32(esp, v); }
/* 9523f3: mov dword ptr [0xcf8570], 1 */
  W32((uint32_t)(0xcf8570u), 0x1u);
/* 9523fd: call 0x953320 */
  esp -= 4; W32(esp, 0x952402u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 952402: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952405: /* 952405: cmp dword ptr [0xcf845c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95240b: je 0x952459 */
  if (zf) goto L_952459;
L_95240d: /* 95240d: cmp dword ptr [0xcf8484], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8484u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952413: jne 0x952459 */
  if (!zf) goto L_952459;
L_952415: /* 952415: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
/* 95241b: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 952421: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 952423: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 952426: jne 0x952459 */
  if (!zf) goto L_952459;
L_952428: /* 952428: fld dword ptr [0xcf8460] */
  { double v = F32((uint32_t)(0xcf8460u)); FPUSH(v); }
/* 95242e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 952434: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 952436: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 952439: jp 0x952459 */
  if (pf) goto L_952459;
L_95243b: /* 95243b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95243c: mov eax, 1 */
  eax = 0x1u;
/* 952441: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952442: push 0xaf604c */
  { uint32_t v = 0xaf604cu; esp -= 4; W32(esp, v); }
/* 952447: mov dword ptr [0xcf89f4], eax */
  W32((uint32_t)(0xcf89f4u), eax);
/* 95244c: mov dword ptr [0xcf8c00], eax */
  W32((uint32_t)(0xcf8c00u), eax);
/* 952451: call 0x953320 */
  esp -= 4; W32(esp, 0x952456u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 952456: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952459: /* 952459: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 95245f: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 952465: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 952467: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95246a: jp 0x95248e */
  if (pf) goto L_95248e;
L_95246c: /* 95246c: cmp dword ptr [0xcf84b4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf84b4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952472: je 0x95248e */
  if (zf) goto L_95248e;
L_952474: /* 952474: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95247a: push 0x3e800000 */
  { uint32_t v = 0x3e800000u; esp -= 4; W32(esp, v); }
/* 95247f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952480: push 0xaf5fc8 */
  { uint32_t v = 0xaf5fc8u; esp -= 4; W32(esp, v); }
/* 952485: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952486: call 0x953470 */
  esp -= 4; W32(esp, 0x95248bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95248b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95248e: /* 95248e: cmp dword ptr [0xcf843c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf843cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952494: jne 0x9524bd */
  if (!zf) goto L_9524bd;
L_952496: /* 952496: fld dword ptr [0xcf844c] */
  { double v = F32((uint32_t)(0xcf844cu)); FPUSH(v); }
/* 95249c: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9524a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9524a4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9524a7: jnp 0x9524bd */
  if (!pf) goto L_9524bd;
L_9524a9: /* 9524a9: cmp dword ptr [0xcf8448], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8448u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9524af: jne 0x9524bd */
  if (!zf) goto L_9524bd;
L_9524b1: /* 9524b1: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9524b7: je 0x95254b */
  if (zf) goto L_95254b;
L_9524bd: /* 9524bd: cmp dword ptr [0xcf849c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf849cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9524c3: jne 0x9524e6 */
  if (!zf) goto L_9524e6;
L_9524c5: /* 9524c5: cmp dword ptr [0xcf84a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf84a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9524cb: jne 0x9524e6 */
  if (!zf) goto L_9524e6;
L_9524cd: /* 9524cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9524ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9524cf: push 0xaf5fbc */
  { uint32_t v = 0xaf5fbcu; esp -= 4; W32(esp, v); }
/* 9524d4: mov dword ptr [0xcf849c], 1 */
  W32((uint32_t)(0xcf849cu), 0x1u);
/* 9524de: call 0x953320 */
  esp -= 4; W32(esp, 0x9524e3u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9524e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9524e6: /* 9524e6: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9524ec: je 0x95254b */
  if (zf) goto L_95254b;
L_9524ee: /* 9524ee: cmp dword ptr [0xcf8440], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8440u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9524f4: je 0x952517 */
  if (zf) goto L_952517;
L_9524f6: /* 9524f6: cmp dword ptr [0xcf8444], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8444u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9524fc: jne 0x952517 */
  if (!zf) goto L_952517;
L_9524fe: /* 9524fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9524ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952500: push 0xaf4eec */
  { uint32_t v = 0xaf4eecu; esp -= 4; W32(esp, v); }
/* 952505: mov dword ptr [0xcf8444], 1 */
  W32((uint32_t)(0xcf8444u), 0x1u);
/* 95250f: call 0x953320 */
  esp -= 4; W32(esp, 0x952514u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 952514: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952517: /* 952517: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95251d: je 0x95254b */
  if (zf) goto L_95254b;
L_95251f: /* 95251f: cmp dword ptr [0xcf8434], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8434u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952525: je 0x952543 */
  if (zf) goto L_952543;
L_952527: /* 952527: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95252c: push 0xaf5f58 */
  { uint32_t v = 0xaf5f58u; esp -= 4; W32(esp, v); }
/* 952531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952532: call 0x953470 */
  esp -= 4; W32(esp, 0x952537u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952537: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952538: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952539: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95253b: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952540u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952540: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952543: /* 952543: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952549: jne 0x952578 */
  if (!zf) goto L_952578;
L_95254b: /* 95254b: cmp dword ptr [0xcf85a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952551: jne 0x95255b */
  if (!zf) goto L_95255b;
L_952553: /* 952553: cmp dword ptr [0xcf83f0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952559: je 0x9525a5 */
  if (zf) goto L_9525a5;
L_95255b: /* 95255b: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 952561: push 0xaf5ee8 */
  { uint32_t v = 0xaf5ee8u; esp -= 4; W32(esp, v); }
/* 952566: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952567: call 0x953470 */
  esp -= 4; W32(esp, 0x95256cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95256c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95256d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95256e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952570: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952575u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952575: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952578: /* 952578: cmp dword ptr [0xcf85a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95257e: je 0x9525a5 */
  if (zf) goto L_9525a5;
L_952580: /* 952580: cmp dword ptr [0xcf83f0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952586: je 0x9525a5 */
  if (zf) goto L_9525a5;
L_952588: /* 952588: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95258e: push 0xaf5e90 */
  { uint32_t v = 0xaf5e90u; esp -= 4; W32(esp, v); }
/* 952593: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952594: call 0x953470 */
  esp -= 4; W32(esp, 0x952599u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952599: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95259a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95259b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95259d: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9525a2u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9525a2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9525a5: /* 9525a5: cmp dword ptr [0xcf8570], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8570u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9525ab: je 0x9525c8 */
  if (zf) goto L_9525c8;
L_9525ad: /* 9525ad: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9525b3: jne 0x9525c8 */
  if (!zf) goto L_9525c8;
L_9525b5: /* 9525b5: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9525ba: push 0xaf5e30 */
  { uint32_t v = 0xaf5e30u; esp -= 4; W32(esp, v); }
/* 9525bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9525c0: call 0x953470 */
  esp -= 4; W32(esp, 0x9525c5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9525c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9525c8: /* 9525c8: cmp dword ptr [0xcf841c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf841cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9525ce: jne 0x952620 */
  if (!zf) goto L_952620;
L_9525d0: /* 9525d0: cmp dword ptr [0xcf8578], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8578u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9525d6: jne 0x952620 */
  if (!zf) goto L_952620;
L_9525d8: /* 9525d8: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 9525dd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9525df: je 0x952625 */
  if (zf) goto L_952625;
L_9525e1: /* 9525e1: cmp dword ptr [0xcf8444], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8444u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9525e7: mov ecx, 1 */
  ecx = 0x1u;
/* 9525ec: mov dword ptr [0xcf85b8], ecx */
  W32((uint32_t)(0xcf85b8u), ecx);
/* 9525f2: je 0x9525fc */
  if (zf) goto L_9525fc;
L_9525f4: /* 9525f4: cmp dword ptr [0xcf8440], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8440u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9525fa: jne 0x95260a */
  if (!zf) goto L_95260a;
L_9525fc: /* 9525fc: cmp dword ptr [0xcf8470], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8470u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952602: mov dword ptr [0xcf85c8], ecx */
  W32((uint32_t)(0xcf85c8u), ecx);
/* 952608: je 0x952610 */
  if (zf) goto L_952610;
L_95260a: /* 95260a: mov dword ptr [0xcf85c8], ebx */
  W32((uint32_t)(0xcf85c8u), ebx);
L_952610: /* 952610: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952612: je 0x952632 */
  if (zf) goto L_952632;
L_952614: /* 952614: mov dword ptr [0xcf8ba8], 2 */
  W32((uint32_t)(0xcf8ba8u), 0x2u);
/* 95261e: jmp 0x952640 */
  goto L_952640;
L_952620: /* 952620: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
L_952625: /* 952625: mov dword ptr [0xcf85b8], ebx */
  W32((uint32_t)(0xcf85b8u), ebx);
/* 95262b: mov ecx, 1 */
  ecx = 0x1u;
/* 952630: jmp 0x95260a */
  goto L_95260a;
L_952632: /* 952632: cmp dword ptr [0xcf85b0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85b0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952638: je 0x952640 */
  if (zf) goto L_952640;
L_95263a: /* 95263a: mov dword ptr [0xcf8ba8], ecx */
  W32((uint32_t)(0xcf8ba8u), ecx);
L_952640: /* 952640: cmp dword ptr [0xcf858c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf858cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952646: je 0x952669 */
  if (zf) goto L_952669;
L_952648: /* 952648: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95264a: jne 0x952669 */
  if (!zf) goto L_952669;
L_95264c: /* 95264c: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 952652: push 0xaf5de8 */
  { uint32_t v = 0xaf5de8u; esp -= 4; W32(esp, v); }
/* 952657: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952658: call 0x953470 */
  esp -= 4; W32(esp, 0x95265du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95265d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95265e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95265f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952661: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952666u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952666: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952669: /* 952669: mov ecx, dword ptr [0xcf8540] */
  ecx = R32((uint32_t)(0xcf8540u));
/* 95266f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952671: jne 0x952683 */
  if (!zf) goto L_952683;
L_952673: /* 952673: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952679: je 0x9526aa */
  if (zf) goto L_9526aa;
L_95267b: /* 95267b: cmp dword ptr [0xcf853c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf853cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952681: je 0x9526aa */
  if (zf) goto L_9526aa;
L_952683: /* 952683: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 952689: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 95268e: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 952690: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952692: mov dword ptr [0xcf85cc], edx */
  W32((uint32_t)(0xcf85ccu), edx);
/* 952698: je 0x9526aa */
  if (zf) goto L_9526aa;
L_95269a: /* 95269a: mov eax, edx */
  eax = edx;
/* 95269c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95269d: mov dword ptr [0xcf85cc], eax */
  W32((uint32_t)(0xcf85ccu), eax);
/* 9526a2: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
L_9526aa: /* 9526aa: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9526af: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9526b2: jg 0x9526d8 */
  if ((!zf && sf == of)) goto L_9526d8;
L_9526b4: /* 9526b4: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9526ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9526bb: push 0xaf5dc0 */
  { uint32_t v = 0xaf5dc0u; esp -= 4; W32(esp, v); }
/* 9526c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9526c1: call 0x953470 */
  esp -= 4; W32(esp, 0x9526c6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9526c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9526c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9526c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9526ca: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9526cfu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9526cf: mov ecx, dword ptr [0xcf8540] */
  ecx = R32((uint32_t)(0xcf8540u));
/* 9526d5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9526d8: /* 9526d8: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 9526de: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9526e4: mov eax, 2 */
  eax = 0x2u;
/* 9526e9: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9526eb: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9526ef: jle 0x952704 */
  if ((zf || sf != of)) goto L_952704;
L_9526f1: /* 9526f1: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 9526f7: fimul dword ptr [esp + 0x38] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x38u)));
/* 9526fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9526fc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9526fe: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 952702: jl 0x9526f1 */
  if ((sf != of)) goto L_9526f1;
L_952704: /* 952704: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 95270a: mov edx, dword ptr [0xcf8438] */
  edx = R32((uint32_t)(0xcf8438u));
/* 952710: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952713: fstp dword ptr [0xcf85b4] */
  WF32((uint32_t)(0xcf85b4u), ST0); FPOP();
/* 952719: jl 0x95273f */
  if ((sf != of)) goto L_95273f;
L_95271b: /* 95271b: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 952720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952721: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952722: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 952728: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 952729: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95272a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95272b: push 0xaf5d58 */
  { uint32_t v = 0xaf5d58u; esp -= 4; W32(esp, v); }
/* 952730: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952731: call 0x953470 */
  esp -= 4; W32(esp, 0x952736u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952736: mov edx, dword ptr [0xcf8438] */
  edx = R32((uint32_t)(0xcf8438u));
/* 95273c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95273f: /* 95273f: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 952745: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 95274c: mov dword ptr [0xcf8b40], eax */
  W32((uint32_t)(0xcf8b40u), eax);
/* 952751: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 952754: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952757: mov dword ptr [0xcf8b44], eax */
  W32((uint32_t)(0xcf8b44u), eax);
/* 95275c: lea edi, [ecx + 1] */
  edi = (uint32_t)(ecx + 0x1u);
/* 95275f: jle 0x95277c */
  if ((zf || sf != of)) goto L_95277c;
L_952761: /* 952761: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952762: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952763: push 0xaf5d38 */
  { uint32_t v = 0xaf5d38u; esp -= 4; W32(esp, v); }
/* 952768: mov dword ptr [0xcf8468], ebx */
  W32((uint32_t)(0xcf8468u), ebx);
/* 95276e: call 0x953320 */
  esp -= 4; W32(esp, 0x952773u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 952773: mov edx, dword ptr [0xcf8438] */
  edx = R32((uint32_t)(0xcf8438u));
/* 952779: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95277c: /* 95277c: cmp dword ptr [0xcf8420], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8420u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952782: je 0x952785 */
  if (zf) goto L_952785;
L_952784: /* 952784: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_952785: /* 952785: cmp dword ptr [0xcf8564], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8564u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95278c: jle 0x95279b */
  if ((zf || sf != of)) goto L_95279b;
L_95278e: /* 95278e: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952791: mov dword ptr [0xcf8594], edx */
  W32((uint32_t)(0xcf8594u), edx);
/* 952797: je 0x9527d9 */
  if (zf) goto L_9527d9;
L_952799: /* 952799: jmp 0x9527d3 */
  goto L_9527d3;
L_95279b: /* 95279b: cmp dword ptr [0xcf8598], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8598u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9527a2: jne 0x9527bf */
  if (!zf) goto L_9527bf;
L_9527a4: /* 9527a4: fld dword ptr [0xcf859c] */
  { double v = F32((uint32_t)(0xcf859cu)); FPUSH(v); }
/* 9527aa: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9527b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9527b2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9527b5: jnp 0x9527bf */
  if (!pf) goto L_9527bf;
L_9527b7: /* 9527b7: cmp dword ptr [0xcf85a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9527bd: je 0x9527d9 */
  if (zf) goto L_9527d9;
L_9527bf: /* 9527bf: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9527c1: mov dword ptr [0xcf8590], edx */
  W32((uint32_t)(0xcf8590u), edx);
/* 9527c7: jne 0x9527d3 */
  if (!zf) goto L_9527d3;
L_9527c9: /* 9527c9: mov dword ptr [0xcf8590], 3 */
  W32((uint32_t)(0xcf8590u), 0x3u);
L_9527d3: /* 9527d3: mov dword ptr [0xcf8438], ebx */
  W32((uint32_t)(0xcf8438u), ebx);
L_9527d9: /* 9527d9: mov eax, dword ptr [0xcf8568] */
  eax = R32((uint32_t)(0xcf8568u));
/* 9527de: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9527e0: je 0x9527e7 */
  if (zf) goto L_9527e7;
L_9527e2: /* 9527e2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9527e5: jne 0x952832 */
  if (!zf) goto L_952832;
L_9527e7: /* 9527e7: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 9527eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9527ec: call dword ptr [0xcfb0b8] */
  esp -= 4; W32(esp, 0x9527f2u); SPILL(); f_43166a(); if (g_unwind) return; /* MSVCR70!time */ RELOAD();
/* 9527f2: mov ecx, dword ptr [0xcf8568] */
  ecx = R32((uint32_t)(0xcf8568u));
/* 9527f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9527fb: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9527fe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 952802: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952803: jne 0x952817 */
  if (!zf) goto L_952817;
L_952805: /* 952805: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 952807: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 95280b: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 95280f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952810: push 0xaf4c20 */
  { uint32_t v = 0xaf4c20u; esp -= 4; W32(esp, v); }
/* 952815: jmp 0x952821 */
  goto L_952821;
L_952817: /* 952817: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 95281b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95281c: push 0xaf5d28 */
  { uint32_t v = 0xaf5d28u; esp -= 4; W32(esp, v); }
L_952821: /* 952821: call 0x953320 */
  esp -= 4; W32(esp, 0x952826u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 952826: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95282a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95282d: mov dword ptr [0xcf8568], eax */
  W32((uint32_t)(0xcf8568u), eax);
L_952832: /* 952832: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952837: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 95283b: jne 0x952844 */
  if (!zf) goto L_952844;
L_95283d: /* 95283d: mov eax, 1 */
  eax = 0x1u;
/* 952842: jmp 0x95284a */
  goto L_95284a;
L_952844: /* 952844: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952846: jge 0x95284e */
  if ((sf == of)) goto L_95284e;
L_952848: /* 952848: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_95284a: /* 95284a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_95284e: /* 95284e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95284f: call 0x9647a0 */
  esp -= 4; W32(esp, 0x952854u); SPILL(); f_9647a0(); if (g_unwind) return; RELOAD();
/* 952854: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952857: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 95285f: mov esi, 0x3e8 */
  esi = 0x3e8u;
L_952864: /* 952864: call 0x964770 */
  esp -= 4; W32(esp, 0x952869u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 952869: mov ecx, eax */
  ecx = eax;
/* 95286b: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 95286f: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 952873: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 952877: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 952879: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 95287d: fcomp dword ptr [0xa216bc] */
  fpu_com(ST0, F32((uint32_t)(0xa216bcu)));
  FPOP();
/* 952883: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 952885: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 952888: jne 0x9528ae */
  if (!zf) goto L_9528ae;
L_95288a: /* 95288a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 952890: push 0x41e00000 */
  { uint32_t v = 0x41e00000u; esp -= 4; W32(esp, v); }
/* 952895: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952896: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952897: push 0xaf5cc8 */
  { uint32_t v = 0xaf5cc8u; esp -= 4; W32(esp, v); }
/* 95289c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95289d: call 0x953470 */
  esp -= 4; W32(esp, 0x9528a2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9528a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9528a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9528a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9528a6: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9528abu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9528ab: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9528ae: /* 9528ae: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9528af: jne 0x952864 */
  if (!zf) goto L_952864;
L_9528b1: /* 9528b1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9528b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9528b6: call 0x9647a0 */
  esp -= 4; W32(esp, 0x9528bbu); SPILL(); f_9647a0(); if (g_unwind) return; RELOAD();
/* 9528bb: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9528bf: fmul dword ptr [0xa0892c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0892cu)));
/* 9528c5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9528c8: fcom dword ptr [0xa216b8] */
  fpu_com(ST0, F32((uint32_t)(0xa216b8u)));
/* 9528ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9528d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9528d3: jp 0x9528f7 */
  if (pf) goto L_9528f7;
L_9528d5: /* 9528d5: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9528db: push 0x41d00000 */
  { uint32_t v = 0x41d00000u; esp -= 4; W32(esp, v); }
/* 9528e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9528e1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9528e4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9528e7: push 0xaf5c30 */
  { uint32_t v = 0xaf5c30u; esp -= 4; W32(esp, v); }
/* 9528ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9528ed: call 0x953470 */
  esp -= 4; W32(esp, 0x9528f2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9528f2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9528f5: jmp 0x9528f9 */
  goto L_9528f9;
L_9528f7: /* 9528f7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9528f9: /* 9528f9: fld dword ptr [0xcf854c] */
  { double v = F32((uint32_t)(0xcf854cu)); FPUSH(v); }
/* 9528ff: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 952903: fmul qword ptr [0xa216b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa216b0u)));
/* 952909: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95290b: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95290d: fstp dword ptr [0xcf8550] */
  WF32((uint32_t)(0xcf8550u), ST0); FPOP();
/* 952913: fld dword ptr [0xcf854c] */
  { double v = F32((uint32_t)(0xcf854cu)); FPUSH(v); }
/* 952919: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 95291f: fstp dword ptr [0xcf8554] */
  WF32((uint32_t)(0xcf8554u), ST0); FPOP();
/* 952925: jge 0x952945 */
  if ((sf == of)) goto L_952945;
L_952927: /* 952927: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95292c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95292d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95292e: push 0xaf5bd8 */
  { uint32_t v = 0xaf5bd8u; esp -= 4; W32(esp, v); }
/* 952933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952934: call 0x953470 */
  esp -= 4; W32(esp, 0x952939u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952939: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95293a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95293b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95293d: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952942u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952942: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952945: /* 952945: cmp dword ptr [0xcf8538], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8538u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95294b: je 0x95299f */
  if (zf) goto L_95299f;
L_95294d: /* 95294d: cmp dword ptr [0xcf85cc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952954: jne 0x95296e */
  if (!zf) goto L_95296e;
L_952956: /* 952956: cmp dword ptr [0xcf8410], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95295c: je 0x95296e */
  if (zf) goto L_95296e;
L_95295e: /* 95295e: cmp dword ptr [0xcf85b0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85b0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952964: jne 0x95296e */
  if (!zf) goto L_95296e;
L_952966: /* 952966: cmp dword ptr [0xcf8418], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8418u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95296c: jl 0x95298b */
  if ((sf != of)) goto L_95298b;
L_95296e: /* 95296e: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 952974: push 0xaf5b80 */
  { uint32_t v = 0xaf5b80u; esp -= 4; W32(esp, v); }
/* 952979: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95297a: call 0x953470 */
  esp -= 4; W32(esp, 0x95297fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95297f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952981: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952983: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952988u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952988: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95298b: /* 95298b: mov dword ptr [0xcf8418], 3 */
  W32((uint32_t)(0xcf8418u), 0x3u);
/* 952995: mov dword ptr [0xcf8528], 1 */
  W32((uint32_t)(0xcf8528u), 0x1u);
L_95299f: /* 95299f: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9529a3: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 9529a7: mov esi, 0xcf8528 */
  esi = 0xcf8528u;
/* 9529ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9529b0: /* 9529b0: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 9529b3: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9529b6: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9529b9: jne 0x9529c8 */
  if (!zf) goto L_9529c8;
L_9529bb: /* 9529bb: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 9529c3: jmp 0x952a81 */
  goto L_952a81;
L_9529c8: /* 9529c8: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9529cb: jne 0x9529d7 */
  if (!zf) goto L_9529d7;
L_9529cd: /* 9529cd: mov ebp, 1 */
  ebp = 0x1u;
/* 9529d2: jmp 0x952a81 */
  goto L_952a81;
L_9529d7: /* 9529d7: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9529da: jne 0x9529e6 */
  if (!zf) goto L_9529e6;
L_9529dc: /* 9529dc: mov edi, 1 */
  edi = 0x1u;
/* 9529e1: jmp 0x952a81 */
  goto L_952a81;
L_9529e6: /* 9529e6: cmp eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9529e9: jne 0x9529f5 */
  if (!zf) goto L_9529f5;
L_9529eb: /* 9529eb: mov edi, 1 */
  edi = 0x1u;
/* 9529f0: jmp 0x952a81 */
  goto L_952a81;
L_9529f5: /* 9529f5: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9529f8: jne 0x952a21 */
  if (!zf) goto L_952a21;
L_9529fa: /* 9529fa: cmp dword ptr [0xcf8434], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8434u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a00: jne 0x952a21 */
  if (!zf) goto L_952a21;
L_952a02: /* 952a02: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 952a08: push 0xaf5b28 */
  { uint32_t v = 0xaf5b28u; esp -= 4; W32(esp, v); }
/* 952a0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_952a0e: /* 952a0e: call 0x953470 */
  esp -= 4; W32(esp, 0x952a13u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952a13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952a14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952a15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952a17: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952a1cu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952a1c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952a1f: jmp 0x952a81 */
  goto L_952a81;
L_952a21: /* 952a21: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a24: jne 0x952a45 */
  if (!zf) goto L_952a45;
L_952a26: /* 952a26: cmp dword ptr [0xcf8434], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8434u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a2c: jne 0x952a38 */
  if (!zf) goto L_952a38;
L_952a2e: /* 952a2e: mov ecx, dword ptr [0xcf85b0] */
  ecx = R32((uint32_t)(0xcf85b0u));
/* 952a34: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a36: je 0x952a4b */
  if (zf) goto L_952a4b;
L_952a38: /* 952a38: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 952a3d: push 0xaf5ac8 */
  { uint32_t v = 0xaf5ac8u; esp -= 4; W32(esp, v); }
/* 952a42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952a43: jmp 0x952a0e */
  goto L_952a0e;
L_952a45: /* 952a45: mov ecx, dword ptr [0xcf85b0] */
  ecx = R32((uint32_t)(0xcf85b0u));
L_952a4b: /* 952a4b: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a4e: jne 0x952a62 */
  if (!zf) goto L_952a62;
L_952a50: /* 952a50: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a52: je 0x952a62 */
  if (zf) goto L_952a62;
L_952a54: /* 952a54: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 952a5a: push 0xaf5a78 */
  { uint32_t v = 0xaf5a78u; esp -= 4; W32(esp, v); }
/* 952a5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952a60: jmp 0x952a0e */
  goto L_952a0e;
L_952a62: /* 952a62: cmp eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a65: jne 0x952a81 */
  if (!zf) goto L_952a81;
L_952a67: /* 952a67: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952a6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952a6b: je 0x952a74 */
  if (zf) goto L_952a74;
L_952a6d: /* 952a6d: push 0xaf5a6c */
  { uint32_t v = 0xaf5a6cu; esp -= 4; W32(esp, v); }
/* 952a72: jmp 0x952a79 */
  goto L_952a79;
L_952a74: /* 952a74: push 0xaf5a60 */
  { uint32_t v = 0xaf5a60u; esp -= 4; W32(esp, v); }
L_952a79: /* 952a79: call 0x953320 */
  esp -= 4; W32(esp, 0x952a7eu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 952a7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952a81: /* 952a81: cmp esi, 0xcf84b8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcf84b8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a87: jne 0x9529b0 */
  if (!zf) goto L_9529b0;
L_952a8d: /* 952a8d: cmp dword ptr [0xcf8440], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8440u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a93: jne 0x952acd */
  if (!zf) goto L_952acd;
L_952a95: /* 952a95: cmp dword ptr [0xcf8444], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8444u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952a9b: jne 0x952acd */
  if (!zf) goto L_952acd;
L_952a9d: /* 952a9d: cmp dword ptr [0xcf8478], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8478u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952aa3: jne 0x952acd */
  if (!zf) goto L_952acd;
L_952aa5: /* 952aa5: cmp dword ptr [0xcf8490], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8490u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952aab: je 0x952ab5 */
  if (zf) goto L_952ab5;
L_952aad: /* 952aad: cmp dword ptr [0xcf852c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf852cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952ab3: jne 0x952ab9 */
  if (!zf) goto L_952ab9;
L_952ab5: /* 952ab5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952ab7: je 0x952acd */
  if (zf) goto L_952acd;
L_952ab9: /* 952ab9: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 952abf: push 0xaf59f0 */
  { uint32_t v = 0xaf59f0u; esp -= 4; W32(esp, v); }
/* 952ac4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952ac5: call 0x953470 */
  esp -= 4; W32(esp, 0x952acau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952aca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952acd: /* 952acd: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952acf: je 0x952b06 */
  if (zf) goto L_952b06;
L_952ad1: /* 952ad1: cmp dword ptr [0xcf85cc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952ad8: jg 0x952aea */
  if ((!zf && sf == of)) goto L_952aea;
L_952ada: /* 952ada: cmp dword ptr [0xcf85b0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85b0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952ae0: jne 0x952aea */
  if (!zf) goto L_952aea;
L_952ae2: /* 952ae2: cmp dword ptr [0xcf8434], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8434u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952ae8: je 0x952b06 */
  if (zf) goto L_952b06;
L_952aea: /* 952aea: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 952aef: push 0xaf5978 */
  { uint32_t v = 0xaf5978u; esp -= 4; W32(esp, v); }
/* 952af4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952af5: call 0x953470 */
  esp -= 4; W32(esp, 0x952afau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952afa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952afb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952afc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952afe: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952b03u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952b03: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952b06: /* 952b06: cmp dword ptr [esp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952b0a: je 0x952c0f */
  if (zf) goto L_952c0f;
L_952b10: /* 952b10: cmp dword ptr [0xcf85cc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952b17: jle 0x952b36 */
  if ((zf || sf != of)) goto L_952b36;
L_952b19: /* 952b19: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 952b1f: push 0xaf5928 */
  { uint32_t v = 0xaf5928u; esp -= 4; W32(esp, v); }
/* 952b24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952b25: call 0x953470 */
  esp -= 4; W32(esp, 0x952b2au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952b2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952b2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952b2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952b2e: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952b33u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952b33: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952b36: /* 952b36: cmp dword ptr [0xcf84a8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf84a8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952b3c: je 0x952b8a */
  if (zf) goto L_952b8a;
L_952b3e: /* 952b3e: mov edx, dword ptr [0xcf8498] */
  edx = R32((uint32_t)(0xcf8498u));
/* 952b44: mov eax, dword ptr [0xcf8414] */
  eax = R32((uint32_t)(0xcf8414u));
/* 952b49: mov edi, dword ptr [0xcf848c] */
  edi = R32((uint32_t)(0xcf848cu));
/* 952b4f: mov esi, dword ptr [0xcf852c] */
  esi = R32((uint32_t)(0xcf852cu));
/* 952b55: mov ecx, dword ptr [0xcf8528] */
  ecx = R32((uint32_t)(0xcf8528u));
/* 952b5b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 952b5d: mov edx, dword ptr [0xcf8490] */
  edx = R32((uint32_t)(0xcf8490u));
/* 952b63: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 952b65: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 952b67: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 952b69: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 952b6b: jne 0x952b8a */
  if (!zf) goto L_952b8a;
L_952b6d: /* 952b6d: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 952b73: push 0xaf58f0 */
  { uint32_t v = 0xaf58f0u; esp -= 4; W32(esp, v); }
/* 952b78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952b79: call 0x953470 */
  esp -= 4; W32(esp, 0x952b7eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952b7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952b7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952b80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952b82: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952b87u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952b87: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952b8a: /* 952b8a: cmp dword ptr [0xcf85b0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85b0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952b90: je 0x952bc0 */
  if (zf) goto L_952bc0;
L_952b92: /* 952b92: cmp dword ptr [0xcf85cc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952b99: jg 0x952ba3 */
  if ((!zf && sf == of)) goto L_952ba3;
L_952b9b: /* 952b9b: cmp dword ptr [0xcf8418], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8418u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952ba1: jl 0x952bc0 */
  if ((sf != of)) goto L_952bc0;
L_952ba3: /* 952ba3: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 952ba9: push 0xaf58a8 */
  { uint32_t v = 0xaf58a8u; esp -= 4; W32(esp, v); }
/* 952bae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952baf: call 0x953470 */
  esp -= 4; W32(esp, 0x952bb4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952bb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952bb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952bb6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 952bb8: call 0x9535b0 */
  esp -= 4; W32(esp, 0x952bbdu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 952bbd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952bc0: /* 952bc0: cmp dword ptr [0xcf85cc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952bc7: jne 0x952c0f */
  if (!zf) goto L_952c0f;
L_952bc9: /* 952bc9: cmp dword ptr [0xcf8418], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8418u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952bd0: jne 0x952c0f */
  if (!zf) goto L_952c0f;
L_952bd2: /* 952bd2: cmp dword ptr [0xcf8490], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8490u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952bd8: jne 0x952bea */
  if (!zf) goto L_952bea;
L_952bda: /* 952bda: cmp dword ptr [0xcf852c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf852cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952be0: jne 0x952bea */
  if (!zf) goto L_952bea;
L_952be2: /* 952be2: cmp dword ptr [0xcf848c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf848cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952be8: je 0x952c0f */
  if (zf) goto L_952c0f;
L_952bea: /* 952bea: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 952bef: push 0xaf5820 */
  { uint32_t v = 0xaf5820u; esp -= 4; W32(esp, v); }
/* 952bf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952bf5: call 0x953470 */
  esp -= 4; W32(esp, 0x952bfau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952bfa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952bfd: mov dword ptr [0xcf848c], ebx */
  W32((uint32_t)(0xcf848cu), ebx);
/* 952c03: mov dword ptr [0xcf852c], ebx */
  W32((uint32_t)(0xcf852cu), ebx);
/* 952c09: mov dword ptr [0xcf8490], ebx */
  W32((uint32_t)(0xcf8490u), ebx);
L_952c0f: /* 952c0f: mov ecx, dword ptr [0xcf8418] */
  ecx = R32((uint32_t)(0xcf8418u));
/* 952c15: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952c17: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 952c1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 952c1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 952c1e: mov dword ptr [0xcf8494], eax */
  W32((uint32_t)(0xcf8494u), eax);
/* 952c23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 952c24: jl 0x952c66 */
  if ((sf != of)) goto L_952c66;
L_952c26: /* 952c26: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952c28: jge 0x952c57 */
  if ((sf == of)) goto L_952c57;
L_952c2a: /* 952c2a: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 952c2d: mov dword ptr [0xcf8494], edx */
  W32((uint32_t)(0xcf8494u), edx);
/* 952c33: cmp dword ptr [esp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952c37: je 0x952c3e */
  if (zf) goto L_952c3e;
L_952c39: /* 952c39: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952c3c: jge 0x952c79 */
  if ((sf == of)) goto L_952c79;
L_952c3e: /* 952c3e: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 952c43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952c44: push 0xaf57c8 */
  { uint32_t v = 0xaf57c8u; esp -= 4; W32(esp, v); }
/* 952c49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952c4a: call 0x953470 */
  esp -= 4; W32(esp, 0x952c4fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952c4f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952c52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 952c53: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952c56: ret  */
  esp += 4; SPILL(); return;
L_952c57: /* 952c57: mov dword ptr [0xcf8418], 0xffffffff */
  W32((uint32_t)(0xcf8418u), 0xffffffffu);
/* 952c61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 952c62: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952c65: ret  */
  esp += 4; SPILL(); return;
L_952c66: /* 952c66: cmp dword ptr [0xcf85b0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85b0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 952c6c: je 0x952c79 */
  if (zf) goto L_952c79;
L_952c6e: /* 952c6e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 952c6f: mov dword ptr [0xcf8418], eax */
  W32((uint32_t)(0xcf8418u), eax);
/* 952c74: mov dword ptr [0xcf8494], eax */
  W32((uint32_t)(0xcf8494u), eax);
L_952c79: /* 952c79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 952c7a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952c7d: ret  */
  esp += 4; SPILL(); return;
}

void f_952c80(void) {
  LOAD_REGS();
L_952c80: /* 952c80: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 952c85: push 0x20000 */
  { uint32_t v = 0x20000u; esp -= 4; W32(esp, v); }
/* 952c8a: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* 952c8f: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 952c91: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 952c93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952c94: call 0x953b90 */
  esp -= 4; W32(esp, 0x952c99u); SPILL(); f_953b90(); if (g_unwind) return; RELOAD();
/* 952c99: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 952c9b: call 0x953d70 */
  esp -= 4; W32(esp, 0x952ca0u); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952ca0: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 952ca5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952ca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 952caa: je 0x952cbd */
  if (zf) goto L_952cbd;
L_952cac: /* 952cac: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 952cae: call 0x953d70 */
  esp -= 4; W32(esp, 0x952cb3u); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952cb3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 952cb5: call 0x953d70 */
  esp -= 4; W32(esp, 0x952cbau); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952cba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_952cbd: /* 952cbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952cbe: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 952cc0: call 0x953d70 */
  esp -= 4; W32(esp, 0x952cc5u); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952cc5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 952cc7: call 0x953d70 */
  esp -= 4; W32(esp, 0x952cccu); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952ccc: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 952cd2: lea esi, [ecx*4 + 4] */
  esi = (uint32_t)(ecx*4 + 0x4u);
/* 952cd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952cda: call 0x953d70 */
  esp -= 4; W32(esp, 0x952cdfu); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952cdf: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 952ce5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952ce6: call 0x953d70 */
  esp -= 4; W32(esp, 0x952cebu); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952ceb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 952cee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952cef: call 0x953d70 */
  esp -= 4; W32(esp, 0x952cf4u); SPILL(); f_953d70(); if (g_unwind) return; RELOAD();
/* 952cf4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952cf7: call 0x9538b0 */
  esp -= 4; W32(esp, 0x952cfcu); SPILL(); f_9538b0(); if (g_unwind) return; RELOAD();
/* 952cfc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 952cfd: jmp 0x953c60 */
  goto L_953c60;
L_953c60: /* 953c60: mov eax, dword ptr [0xcf2f20] */
  eax = R32((uint32_t)(0xcf2f20u));
/* 953c65: mov ecx, dword ptr [0xcf2f34] */
  ecx = R32((uint32_t)(0xcf2f34u));
/* 953c6b: push 0x953d60 */
  { uint32_t v = 0x953d60u; esp -= 4; W32(esp, v); }
/* 953c70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 953c72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953c73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953c74: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x953c7au); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 953c7a: mov edx, dword ptr [0xcf2f34] */
  edx = R32((uint32_t)(0xcf2f34u));
/* 953c80: mov eax, dword ptr [0xcf2f20] */
  eax = R32((uint32_t)(0xcf2f20u));
/* 953c85: mov eax, dword ptr [edx + eax*4 - 4] */
  eax = R32((uint32_t)(edx + eax*4 + 0xfffffffcu));
/* 953c89: mov ecx, dword ptr [0xcf2f18] */
  ecx = R32((uint32_t)(0xcf2f18u));
/* 953c8f: mov edx, dword ptr [0xcf2f1c] */
  edx = R32((uint32_t)(0xcf2f1cu));
/* 953c95: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953c98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953c9a: mov dword ptr [0xcf2f28], eax */
  W32((uint32_t)(0xcf2f28u), eax);
/* 953c9f: jge 0x953ca5 */
  if ((sf == of)) goto L_953ca5;
L_953ca1: /* 953ca1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953ca3: jl 0x953ccc */
  if ((sf != of)) goto L_953ccc;
L_953ca5: /* 953ca5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953ca6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953ca7: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 953cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953cae: push 0xaf6408 */
  { uint32_t v = 0xaf6408u; esp -= 4; W32(esp, v); }
/* 953cb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953cb4: call 0x953470 */
  esp -= 4; W32(esp, 0x953cb9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953cb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953cbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953cbd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 953cbf: call 0x9535b0 */
  esp -= 4; W32(esp, 0x953cc4u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 953cc4: mov eax, dword ptr [0xcf2f28] */
  eax = R32((uint32_t)(0xcf2f28u));
/* 953cc9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953ccc: /* 953ccc: lea edx, [eax*4 + 4] */
  edx = (uint32_t)(eax*4 + 0x4u);
/* 953cd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953cd4: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x953cdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953cda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953cdc: mov dword ptr [0xcf2f38], eax */
  W32((uint32_t)(0xcf2f38u), eax);
/* 953ce1: jne 0x953d06 */
  if (!zf) goto L_953d06;
L_953ce3: /* 953ce3: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 953ce8: push 0xaf63d4 */
  { uint32_t v = 0xaf63d4u; esp -= 4; W32(esp, v); }
/* 953ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953cee: call 0x953470 */
  esp -= 4; W32(esp, 0x953cf3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953cf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953cf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953cf7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 953cf9: call 0x9535b0 */
  esp -= 4; W32(esp, 0x953cfeu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 953cfe: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 953d03: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953d06: /* 953d06: mov ecx, dword ptr [0xcf2f28] */
  ecx = R32((uint32_t)(0xcf2f28u));
/* 953d0c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 953d0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953d0f: je 0x953d1c */
  if (zf) goto L_953d1c;
L_953d11: /* 953d11: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 953d12: mov dword ptr [eax + ecx*4], ecx */
  W32((uint32_t)(eax + ecx*4), ecx);
/* 953d15: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 953d1a: jne 0x953d11 */
  if (!zf) goto L_953d11;
L_953d1c: /* 953d1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953d1d: mov esi, dword ptr [0xcf2f28] */
  esi = R32((uint32_t)(0xcf2f28u));
/* 953d23: xor ecx, ecx */
  ecx = 0;
/* 953d25: xor edx, edx */
  edx = 0;
/* 953d27: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 953d29: jl 0x953d50 */
  if ((sf != of)) goto L_953d50;
L_953d2b: /* 953d2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953d2c: jmp 0x953d33 */
  goto L_953d33;
L_953d2e: /* 953d2e: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
L_953d33: /* 953d33: mov edi, dword ptr [0xcf2f34] */
  edi = R32((uint32_t)(0xcf2f34u));
/* 953d39: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 953d3c: cmp esi, dword ptr [edi + ecx*4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953d3f: jle 0x953d42 */
  if ((zf || sf != of)) goto L_953d42;
L_953d41: /* 953d41: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_953d42: /* 953d42: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 953d45: mov eax, dword ptr [0xcf2f28] */
  eax = R32((uint32_t)(0xcf2f28u));
/* 953d4a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 953d4b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953d4d: jle 0x953d2e */
  if ((zf || sf != of)) goto L_953d2e;
L_953d4f: /* 953d4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_953d50: /* 953d50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953d51: ret  */
  esp += 4; SPILL(); return;
}

void f_952d10(void) {
  LOAD_REGS();
L_952d10: /* 952d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952d11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 952d12: xor eax, eax */
  eax = 0;
/* 952d14: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 952d17: mov ecx, 0x221 */
  ecx = 0x221u;
/* 952d1c: mov edi, 0xcf83e0 */
  edi = 0xcf83e0u;
/* 952d21: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 952d23: mov edi, 0xcf8a54 */
  edi = 0xcf8a54u;
/* 952d28: mov ecx, esi */
  ecx = esi;
/* 952d2a: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 952d2c: mov eax, dword ptr [0xaf60ac] */
  eax = R32((uint32_t)(0xaf60acu));
/* 952d31: mov cx, word ptr [0xaf60b0] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xaf60b0u))) & 0xffffu);
/* 952d38: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 952d39: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 952d3b: mov word ptr [edi + 4], cx */
  W16((uint32_t)(edi + 0x4u), (ecx & 0xffffu));
/* 952d3f: call 0x961b30 */
  esp -= 4; W32(esp, 0x952d44u); SPILL(); f_961b30(); if (g_unwind) return; RELOAD();
/* 952d44: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 952d48: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 952d4c: mov eax, 1 */
  eax = 0x1u;
/* 952d51: mov dword ptr [0xcf8b38], edx */
  W32((uint32_t)(0xcf8b38u), edx);
/* 952d57: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 952d5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952d5c: mov dword ptr [0xcf83e4], eax */
  W32((uint32_t)(0xcf83e4u), eax);
/* 952d61: mov dword ptr [0xcf8418], esi */
  W32((uint32_t)(0xcf8418u), esi);
/* 952d67: mov dword ptr [0xcf8b30], ecx */
  W32((uint32_t)(0xcf8b30u), ecx);
/* 952d6d: mov dword ptr [0xcf8b34], edx */
  W32((uint32_t)(0xcf8b34u), edx);
/* 952d73: mov dword ptr [0xcf8bac], esi */
  W32((uint32_t)(0xcf8bacu), esi);
/* 952d79: mov dword ptr [0xcf8bb4], 0x7f7fffff */
  W32((uint32_t)(0xcf8bb4u), 0x7f7fffffu);
/* 952d83: mov dword ptr [0xcf844c], 0x7f7fffff */
  W32((uint32_t)(0xcf844cu), 0x7f7fffffu);
/* 952d8d: mov dword ptr [0xcf8c3c], 0x7f7fffff */
  W32((uint32_t)(0xcf8c3cu), 0x7f7fffffu);
/* 952d97: mov dword ptr [0xcf8c40], 0x7f7fffff */
  W32((uint32_t)(0xcf8c40u), 0x7f7fffffu);
/* 952da1: mov dword ptr [0xcf8c44], 0x7f7fffff */
  W32((uint32_t)(0xcf8c44u), 0x7f7fffffu);
/* 952dab: mov dword ptr [0xcf8bbc], 0 */
  W32((uint32_t)(0xcf8bbcu), 0x0u);
/* 952db5: mov dword ptr [0xcf8bc0], 0 */
  W32((uint32_t)(0xcf8bc0u), 0x0u);
/* 952dbf: mov dword ptr [0xcf8a18], 0 */
  W32((uint32_t)(0xcf8a18u), 0x0u);
/* 952dc9: mov dword ptr [0xcf8a20], 0 */
  W32((uint32_t)(0xcf8a20u), 0x0u);
/* 952dd3: mov dword ptr [0xcf8a24], 0xff7fffff */
  W32((uint32_t)(0xcf8a24u), 0xff7fffffu);
/* 952ddd: mov dword ptr [0xcf8458], eax */
  W32((uint32_t)(0xcf8458u), eax);
/* 952de2: mov dword ptr [0xcf8a28], 0 */
  W32((uint32_t)(0xcf8a28u), 0x0u);
/* 952dec: mov dword ptr [0xcf83ec], 0 */
  W32((uint32_t)(0xcf83ecu), 0x0u);
/* 952df6: mov dword ptr [0xcf846c], 0x7f7fffff */
  W32((uint32_t)(0xcf846cu), 0x7f7fffffu);
/* 952e00: mov dword ptr [0xcf8450], 0x7f7fffff */
  W32((uint32_t)(0xcf8450u), 0x7f7fffffu);
/* 952e0a: mov dword ptr [0xcf8a4c], 0x7f7fffff */
  W32((uint32_t)(0xcf8a4cu), 0x7f7fffffu);
/* 952e14: mov dword ptr [0xcf8460], 0 */
  W32((uint32_t)(0xcf8460u), 0x0u);
/* 952e1e: mov dword ptr [0xcf8408], 0x7f7fffff */
  W32((uint32_t)(0xcf8408u), 0x7f7fffffu);
/* 952e28: mov dword ptr [0xcf84b4], eax */
  W32((uint32_t)(0xcf84b4u), eax);
/* 952e2d: mov dword ptr [0xcf8bdc], 0 */
  W32((uint32_t)(0xcf8bdcu), 0x0u);
/* 952e37: mov dword ptr [0xcf840c], 0x7f7fffff */
  W32((uint32_t)(0xcf840cu), 0x7f7fffffu);
/* 952e41: mov dword ptr [0xcf8464], 0 */
  W32((uint32_t)(0xcf8464u), 0x0u);
/* 952e4b: mov dword ptr [0xcf8568], 0x80000000 */
  W32((uint32_t)(0xcf8568u), 0x80000000u);
/* 952e55: mov dword ptr [0xcf8468], eax */
  W32((uint32_t)(0xcf8468u), eax);
/* 952e5a: mov dword ptr [0xcf8bf0], 0 */
  W32((uint32_t)(0xcf8bf0u), 0x0u);
/* 952e64: mov dword ptr [0xcf8bf4], 0 */
  W32((uint32_t)(0xcf8bf4u), 0x0u);
/* 952e6e: mov dword ptr [0xcf859c], 0x7f7fffff */
  W32((uint32_t)(0xcf859cu), 0x7f7fffffu);
/* 952e78: mov dword ptr [0xcf8598], esi */
  W32((uint32_t)(0xcf8598u), esi);
/* 952e7e: mov dword ptr [0xcf8b64], esi */
  W32((uint32_t)(0xcf8b64u), esi);
/* 952e84: mov dword ptr [0xcf8b6c], esi */
  W32((uint32_t)(0xcf8b6cu), esi);
/* 952e8a: call 0x9647a0 */
  esp -= 4; W32(esp, 0x952e8fu); SPILL(); f_9647a0(); if (g_unwind) return; RELOAD();
/* 952e8f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952e92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 952e93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 952e94: ret  */
  esp += 4; SPILL(); return;
}

void f_952ea0(void) {
  LOAD_REGS();
L_952ea0: /* 952ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 952ea1: mov ebp, esp */
  ebp = esp;
/* 952ea3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 952ea6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 952ea9: mov edx, dword ptr [0xcf85d0] */
  edx = R32((uint32_t)(0xcf85d0u));
/* 952eaf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 952eb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 952eb3: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 952eb7: mov edx, dword ptr [0xcf8410] */
  edx = R32((uint32_t)(0xcf8410u));
/* 952ebd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 952ebf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952ec0: mov ecx, eax */
  ecx = eax;
/* 952ec2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 952ec3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 952ec7: je 0x952ee1 */
  if (zf) goto L_952ee1;
L_952ec9: /* 952ec9: mov edx, dword ptr [0xcf853c] */
  edx = R32((uint32_t)(0xcf853cu));
/* 952ecf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 952ed1: jne 0x952edd */
  if (!zf) goto L_952edd;
L_952ed3: /* 952ed3: mov edx, dword ptr [0xcf8540] */
  edx = R32((uint32_t)(0xcf8540u));
/* 952ed9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 952edb: je 0x952ee1 */
  if (zf) goto L_952ee1;
L_952edd: /* 952edd: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
L_952ee1: /* 952ee1: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 952ee4: je 0x953291 */
  if (zf) goto L_953291;
L_952eea: /* 952eea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_952ef0: /* 952ef0: cmp byte ptr [ecx], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 952ef3: jne 0x952efa */
  if (!zf) goto L_952efa;
L_952ef5: /* 952ef5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 952ef6: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_952efa: /* 952efa: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 952efc: cmp al, 0x50 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 952efe: jne 0x953062 */
  if (!zf) goto L_953062;
L_952f04: /* 952f04: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 952f05: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 952f09: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 952f0b: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 952f0d: je 0x95324a */
  if (zf) goto L_95324a;
L_952f13: /* 952f13: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 952f18: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952f1b: movsx esi, bl */
  esi = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 952f1e: jle 0x952f33 */
  if ((zf || sf != of)) goto L_952f33;
L_952f20: /* 952f20: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 952f21: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 952f23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952f24: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 952f28: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x952f2eu); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 952f2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952f31: jmp 0x952f47 */
  goto L_952f47;
L_952f33: /* 952f33: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 952f39: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 952f3b: movzx eax, byte ptr [eax + esi*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + esi*2)));
/* 952f3f: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 952f42: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 952f43: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_952f47: /* 952f47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 952f49: jne 0x953246 */
  if (!zf) goto L_953246;
L_952f4f: /* 952f4f: cmp bl, 0x64 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 952f52: je 0x952f5d */
  if (zf) goto L_952f5d;
L_952f54: /* 952f54: cmp bl, 0x44 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 952f57: jne 0x95304f */
  if (!zf) goto L_95304f;
L_952f5d: /* 952f5d: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 952f63: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952f66: jle 0x952f7d */
  if ((zf || sf != of)) goto L_952f7d;
L_952f68: /* 952f68: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 952f6c: movsx eax, byte ptr [edx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 952f6f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 952f71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952f72: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x952f78u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 952f78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952f7b: jmp 0x952f93 */
  goto L_952f93;
L_952f7d: /* 952f7d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 952f81: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 952f84: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 952f89: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 952f8b: xor eax, eax */
  eax = 0;
/* 952f8d: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 952f90: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_952f93: /* 952f93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 952f95: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 952f99: jne 0x952fb6 */
  if (!zf) goto L_952fb6;
L_952f9b: /* 952f9b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 952fa0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 952fa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952fa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952fa3: push 0xaf61e0 */
  { uint32_t v = 0xaf61e0u; esp -= 4; W32(esp, v); }
/* 952fa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952fa9: call 0x953470 */
  esp -= 4; W32(esp, 0x952faeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952fae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952fb1: jmp 0x95304f */
  goto L_95304f;
L_952fb6: /* 952fb6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 952fba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952fbb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 952fbc: call 0x953440 */
  esp -= 4; W32(esp, 0x952fc1u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 952fc1: mov edi, eax */
  edi = eax;
/* 952fc3: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 952fc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952fcb: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 952fcd: jl 0x952fe7 */
  if ((sf != of)) goto L_952fe7;
L_952fcf: /* 952fcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952fd0: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 952fd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 952fd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 952fd7: push 0xaf6198 */
  { uint32_t v = 0xaf6198u; esp -= 4; W32(esp, v); }
/* 952fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952fdd: call 0x953470 */
  esp -= 4; W32(esp, 0x952fe2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 952fe2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 952fe5: jmp 0x95304f */
  goto L_95304f;
L_952fe7: /* 952fe7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 952feb: cmp byte ptr [eax], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 952fee: jne 0x953031 */
  if (!zf) goto L_953031;
L_952ff0: /* 952ff0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 952ff4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 952ff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 952ff6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 952ff7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 952ffb: call 0x953410 */
  esp -= 4; W32(esp, 0x953000u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 953000: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 953002: fabs  */
  ST0 = fabs(ST0);
/* 953004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953007: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 95300d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95300f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 953012: jne 0x953037 */
  if (!zf) goto L_953037;
L_953014: /* 953014: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95301a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95301b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95301e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 953021: push 0xaf6148 */
  { uint32_t v = 0xaf6148u; esp -= 4; W32(esp, v); }
/* 953026: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953027: call 0x953470 */
  esp -= 4; W32(esp, 0x95302cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95302c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95302f: jmp 0x95304f */
  goto L_95304f;
L_953031: /* 953031: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_953037: /* 953037: cmp bl, 0x64 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 95303a: jne 0x953046 */
  if (!zf) goto L_953046;
L_95303c: /* 95303c: mov eax, dword ptr [0xcf89fc] */
  eax = R32((uint32_t)(0xcf89fcu));
/* 953041: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
/* 953044: jmp 0x95304f */
  goto L_95304f;
L_953046: /* 953046: mov ecx, dword ptr [0xcf89f8] */
  ecx = R32((uint32_t)(0xcf89f8u));
/* 95304c: fstp dword ptr [ecx + edi*4] */
  WF32((uint32_t)(ecx + edi*4), ST0); FPOP();
L_95304f: /* 95304f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 953053: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 953055: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 953057: jne 0x952f13 */
  if (!zf) goto L_952f13;
L_95305d: /* 95305d: jmp 0x95324a */
  goto L_95324a;
L_953062: /* 953062: cmp al, 0x51 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x51u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 953064: jne 0x9531ff */
  if (!zf) goto L_9531ff;
L_95306a: /* 95306a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95306b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 95306f: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 953071: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 953073: je 0x95324a */
  if (zf) goto L_95324a;
L_953079: /* 953079: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_953080: /* 953080: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 953086: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953089: movsx esi, bl */
  esi = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 95308c: jle 0x9530a1 */
  if ((zf || sf != of)) goto L_9530a1;
L_95308e: /* 95308e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95308f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 953091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953092: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 953096: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x95309cu); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 95309c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95309f: jmp 0x9530b5 */
  goto L_9530b5;
L_9530a1: /* 9530a1: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 9530a6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9530a8: xor eax, eax */
  eax = 0;
/* 9530aa: mov al, byte ptr [edx + esi*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi*2))) & 0xffu);
/* 9530ad: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9530b0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9530b1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_9530b5: /* 9530b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9530b7: jne 0x953246 */
  if (!zf) goto L_953246;
L_9530bd: /* 9530bd: cmp bl, 0x62 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9530c0: jne 0x953110 */
  if (!zf) goto L_953110;
L_9530c2: /* 9530c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9530c6: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9530c8: cmp al, 0x42 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9530ca: jne 0x953102 */
  if (!zf) goto L_953102;
L_9530cc: /* 9530cc: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9530d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9530d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9530d3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9530d7: je 0x9531ef */
  if (zf) goto L_9531ef;
L_9530dd: /* 9530dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9530e0: /* 9530e0: mov ecx, dword ptr [0xcf8a04] */
  ecx = R32((uint32_t)(0xcf8a04u));
/* 9530e6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9530e7: mov dword ptr [ecx + eax*4], 0xbf000000 */
  W32((uint32_t)(ecx + eax*4), 0xbf000000u);
/* 9530ee: mov edx, dword ptr [0xcf8a00] */
  edx = R32((uint32_t)(0xcf8a00u));
/* 9530f4: mov dword ptr [edx + eax*4], 0x3f000000 */
  W32((uint32_t)(edx + eax*4), 0x3f000000u);
/* 9530fb: jne 0x9530e0 */
  if (!zf) goto L_9530e0;
L_9530fd: /* 9530fd: jmp 0x9531ef */
  goto L_9531ef;
L_953102: /* 953102: cmp al, 0x62 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 953104: jne 0x95311d */
  if (!zf) goto L_95311d;
L_953106: /* 953106: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 953107: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 95310b: jmp 0x9531ef */
  goto L_9531ef;
L_953110: /* 953110: cmp bl, 0x42 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 953113: jne 0x9531ef */
  if (!zf) goto L_9531ef;
L_953119: /* 953119: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_95311d: /* 95311d: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 953122: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953125: jle 0x953138 */
  if ((zf || sf != of)) goto L_953138;
L_953127: /* 953127: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 95312a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95312c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95312d: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x953133u); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 953133: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953136: jmp 0x95314a */
  goto L_95314a;
L_953138: /* 953138: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 95313b: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 953140: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 953142: xor eax, eax */
  eax = 0;
/* 953144: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 953147: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_95314a: /* 95314a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95314c: jne 0x953168 */
  if (!zf) goto L_953168;
L_95314e: /* 95314e: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 953154: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953155: push 0xaf6100 */
  { uint32_t v = 0xaf6100u; esp -= 4; W32(esp, v); }
/* 95315a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95315b: call 0x953470 */
  esp -= 4; W32(esp, 0x953160u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953160: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953163: jmp 0x9531ef */
  goto L_9531ef;
L_953168: /* 953168: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95316c: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 953170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953171: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953172: call 0x953440 */
  esp -= 4; W32(esp, 0x953177u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 953177: mov edi, eax */
  edi = eax;
/* 953179: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95317d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953180: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953182: jl 0x95319d */
  if ((sf != of)) goto L_95319d;
L_953184: /* 953184: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95318a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95318b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95318c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95318d: push 0xaf60b8 */
  { uint32_t v = 0xaf60b8u; esp -= 4; W32(esp, v); }
/* 953192: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953193: call 0x953470 */
  esp -= 4; W32(esp, 0x953198u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953198: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95319b: jmp 0x9531ef */
  goto L_9531ef;
L_95319d: /* 95319d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9531a1: cmp byte ptr [eax], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9531a4: jne 0x9531bb */
  if (!zf) goto L_9531bb;
L_9531a6: /* 9531a6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9531aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9531ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9531ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9531ad: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9531b1: call 0x953410 */
  esp -= 4; W32(esp, 0x9531b6u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 9531b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9531b9: jmp 0x9531d7 */
  goto L_9531d7;
L_9531bb: /* 9531bb: cmp bl, 0x62 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9531be: jne 0x9531d1 */
  if (!zf) goto L_9531d1;
L_9531c0: /* 9531c0: fld dword ptr [0xa07ebc] */
  { double v = F32((uint32_t)(0xa07ebcu)); FPUSH(v); }
/* 9531c6: mov edx, dword ptr [0xcf8a04] */
  edx = R32((uint32_t)(0xcf8a04u));
/* 9531cc: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 9531cf: jmp 0x9531ef */
  goto L_9531ef;
L_9531d1: /* 9531d1: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
L_9531d7: /* 9531d7: cmp bl, 0x62 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9531da: jne 0x9531e7 */
  if (!zf) goto L_9531e7;
L_9531dc: /* 9531dc: mov edx, dword ptr [0xcf8a04] */
  edx = R32((uint32_t)(0xcf8a04u));
/* 9531e2: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 9531e5: jmp 0x9531ef */
  goto L_9531ef;
L_9531e7: /* 9531e7: mov eax, dword ptr [0xcf8a00] */
  eax = R32((uint32_t)(0xcf8a00u));
/* 9531ec: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
L_9531ef: /* 9531ef: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9531f3: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 9531f5: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9531f7: jne 0x953080 */
  if (!zf) goto L_953080;
L_9531fd: /* 9531fd: jmp 0x95324a */
  goto L_95324a;
L_9531ff: /* 9531ff: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 953201: je 0x95324a */
  if (zf) goto L_95324a;
L_953203: /* 953203: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 953209: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95320c: jle 0x95321f */
  if ((zf || sf != of)) goto L_95321f;
L_95320e: /* 95320e: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 953211: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 953213: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953214: call dword ptr [0xcfb0b0] */
  esp -= 4; W32(esp, 0x95321au); SPILL(); f_4156dd(); if (g_unwind) return; /* MSVCR70!_isctype */ RELOAD();
/* 95321a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95321d: jmp 0x953231 */
  goto L_953231;
L_95321f: /* 95321f: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 953225: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 953227: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 95322a: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 95322e: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_953231: /* 953231: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953233: jne 0x953246 */
  if (!zf) goto L_953246;
L_953235: /* 953235: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 953239: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95323a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 95323e: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 953240: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 953242: jne 0x953203 */
  if (!zf) goto L_953203;
L_953244: /* 953244: jmp 0x95324a */
  goto L_95324a;
L_953246: /* 953246: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_95324a: /* 95324a: mov esi, dword ptr [0xcfb0b0] */
  esi = R32((uint32_t)(0xcfb0b0u));
L_953250: /* 953250: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 953255: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953258: jle 0x953267 */
  if ((zf || sf != of)) goto L_953267;
L_95325a: /* 95325a: movsx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 95325d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 95325f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953260: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x953262u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953262: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953265: jmp 0x953279 */
  goto L_953279;
L_953267: /* 953267: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 95326a: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 95326f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 953271: xor eax, eax */
  eax = 0;
/* 953273: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 953276: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_953279: /* 953279: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95327b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95327f: je 0x953288 */
  if (zf) goto L_953288;
L_953281: /* 953281: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 953282: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 953286: jmp 0x953250 */
  goto L_953250;
L_953288: /* 953288: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 95328b: jne 0x952ef0 */
  if (!zf) goto L_952ef0;
L_953291: /* 953291: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 953297: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953299: je 0x9532ef */
  if (zf) goto L_9532ef;
L_95329b: /* 95329b: mov eax, dword ptr [0xcf89f8] */
  eax = R32((uint32_t)(0xcf89f8u));
/* 9532a0: mov esi, dword ptr [0xcf89fc] */
  esi = R32((uint32_t)(0xcf89fcu));
/* 9532a6: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 9532a9: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9532ab: nop  */
/* 9532ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9532b0: /* 9532b0: fld dword ptr [esi + ecx - 4] */
  { double v = F32((uint32_t)(esi + ecx + 0xfffffffcu)); FPUSH(v); }
/* 9532b4: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9532b7: fcomp dword ptr [0xa216c4] */
  fpu_com(ST0, F32((uint32_t)(0xa216c4u)));
  FPOP();
/* 9532bd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 9532be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9532c0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9532c3: jne 0x9532f6 */
  if (!zf) goto L_9532f6;
L_9532c5: /* 9532c5: mov edi, 1 */
  edi = 0x1u;
/* 9532ca: mov dword ptr [0xcf8428], edi */
  W32((uint32_t)(0xcf8428u), edi);
/* 9532d0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9532d2: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9532d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9532da: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9532dd: jp 0x95330f */
  if (pf) goto L_95330f;
L_9532df: /* 9532df: mov dword ptr [0xcf8580], edi */
  W32((uint32_t)(0xcf8580u), edi);
/* 9532e5: mov dword ptr [0xcf8428], 0 */
  W32((uint32_t)(0xcf8428u), 0x0u);
L_9532ef: /* 9532ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9532f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9532f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9532f2: mov esp, ebp */
  esp = ebp;
/* 9532f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9532f5: ret  */
  esp += 4; SPILL(); return;
L_9532f6: /* 9532f6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9532f8: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9532fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 953300: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 953303: jp 0x95330f */
  if (pf) goto L_95330f;
L_953305: /* 953305: mov dword ptr [0xcf8428], 1 */
  W32((uint32_t)(0xcf8428u), 0x1u);
L_95330f: /* 95330f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953311: jne 0x9532b0 */
  if (!zf) goto L_9532b0;
L_953313: /* 953313: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953314: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953315: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 953316: mov esp, ebp */
  esp = ebp;
/* 953318: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 953319: ret  */
  esp += 4; SPILL(); return;
}

void f_953320(void) {
  LOAD_REGS();
L_953320: /* 953320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 953324: sub esp, 0xc8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95332a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95332b: mov esi, dword ptr [0xcfb078] */
  esi = R32((uint32_t)(0xcfb078u));
/* 953331: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953333: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 953337: push 0xaf6238 */
  { uint32_t v = 0xaf6238u; esp -= 4; W32(esp, v); }
/* 95333c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95333d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x95333fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95333f: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 953346: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953349: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95334b: je 0x95336d */
  if (zf) goto L_95336d;
L_95334d: /* 95334d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 95334f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 953352: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 953354: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 953358: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 95335a: not ecx */
  ecx = ~ecx;
/* 95335c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95335d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 95335e: lea eax, [esp + ecx + 0xc] */
  eax = (uint32_t)(esp + ecx + 0xcu);
/* 953362: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 953367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953368: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x95336au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95336a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95336d: /* 95336d: mov eax, dword ptr [esp + 0xdc] */
  eax = R32((uint32_t)(esp + 0xdcu));
/* 953374: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953376: je 0x95339d */
  if (zf) goto L_95339d;
L_953378: /* 953378: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 95337a: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95337d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 953380: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 953382: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 953385: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 953389: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 95338b: not ecx */
  ecx = ~ecx;
/* 95338d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 95338e: lea ecx, [esp + ecx + 0x10] */
  ecx = (uint32_t)(esp + ecx + 0x10u);
/* 953392: push 0xaf622c */
  { uint32_t v = 0xaf622cu; esp -= 4; W32(esp, v); }
/* 953397: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953398: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x95339au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95339a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95339d: /* 95339d: mov edx, dword ptr [0xcf89e8] */
  edx = R32((uint32_t)(0xcf89e8u));
/* 9533a3: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9533a6: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9533a8: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 9533ac: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9533ae: not ecx */
  ecx = ~ecx;
/* 9533b0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9533b1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9533b3: mov esi, 0x1ff */
  esi = 0x1ffu;
/* 9533b8: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 9533ba: mov dword ptr [0xcf89e8], edx */
  W32((uint32_t)(0xcf89e8u), edx);
/* 9533c0: jns 0x9533c4 */
  if (!sf) goto L_9533c4;
L_9533c2: /* 9533c2: xor esi, esi */
  esi = 0;
L_9533c4: /* 9533c4: cmp dword ptr [0xcf89e8], 0x50 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf89e8u))); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9533cb: mov edi, dword ptr [0xcfb0b4] */
  edi = R32((uint32_t)(0xcfb0b4u));
/* 9533d1: jl 0x9533f0 */
  if ((sf != of)) goto L_9533f0;
L_9533d3: /* 9533d3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9533d5: jle 0x9533f0 */
  if ((zf || sf != of)) goto L_9533f0;
L_9533d7: /* 9533d7: mov eax, esi */
  eax = esi;
/* 9533d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9533da: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9533df: push 0xcf87e8 */
  { uint32_t v = 0xcf87e8u; esp -= 4; W32(esp, v); }
/* 9533e4: mov dword ptr [0xcf89e8], ecx */
  W32((uint32_t)(0xcf89e8u), ecx);
/* 9533ea: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9533eb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9533edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9533ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9533f0: /* 9533f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9533f1: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 9533f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9533f6: push 0xcf87e8 */
  { uint32_t v = 0xcf87e8u; esp -= 4; W32(esp, v); }
/* 9533fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x9533fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9533fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953400: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953401: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953402: add esp, 0xc8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953408: ret  */
  esp += 4; SPILL(); return;
}

void f_953410(void) {
  LOAD_REGS();
L_953410: /* 953410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953411: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 953415: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953416: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 95341a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95341b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95341c: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x953422u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 953422: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 953424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953427: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 953429: jae 0x953436 */
  if (!cf) goto L_953436;
L_95342b: /* 95342b: mov cl, byte ptr [eax - 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xffffffffu))) & 0xffu);
/* 95342e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95342f: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 953432: jne 0x953436 */
  if (!zf) goto L_953436;
L_953434: /* 953434: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_953436: /* 953436: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953437: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953438: ret  */
  esp += 4; SPILL(); return;
}

void f_953440(void) {
  LOAD_REGS();
L_953440: /* 953440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953441: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 953445: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953446: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 95344a: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 95344c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95344d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95344e: call dword ptr [0xcfb0c0] */
  esp -= 4; W32(esp, 0x953454u); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 953454: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 953456: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953459: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 95345b: jae 0x953468 */
  if (!cf) goto L_953468;
L_95345d: /* 95345d: mov dl, byte ptr [ecx - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xffffffffu))) & 0xffu);
/* 953460: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 953461: cmp dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 953464: jne 0x953468 */
  if (!zf) goto L_953468;
L_953466: /* 953466: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_953468: /* 953468: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953469: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95346a: ret  */
  esp += 4; SPILL(); return;
}

void f_953470(void) {
  LOAD_REGS();
L_953470: /* 953470: xor eax, eax */
  eax = 0;
/* 953472: ret  */
  esp += 4; SPILL(); return;
}

void f_953480(void) {
  LOAD_REGS();
L_953480: /* 953480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 953481: mov ebp, esp */
  ebp = esp;
/* 953483: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953484: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 953487: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953488: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953489: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95348a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95348b: call 0x953b70 */
  esp -= 4; W32(esp, 0x953490u); SPILL(); f_953b70(); if (g_unwind) return; RELOAD();
/* 953490: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 953493: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 953495: push 0xaf6240 */
  { uint32_t v = 0xaf6240u; esp -= 4; W32(esp, v); }
/* 95349a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95349b: call dword ptr [0xcfb080] */
  esp -= 4; W32(esp, 0x9534a1u); SPILL(); f_401a52(); if (g_unwind) return; /* MSVCR70!strncmp */ RELOAD();
/* 9534a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9534a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9534a6: je 0x9534b0 */
  if (zf) goto L_9534b0;
L_9534a8: /* 9534a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9534aa: call dword ptr [0xcfb094] */
  esp -= 4; W32(esp, 0x9534b0u); SPILL(); f_404360(); if (g_unwind) return; /* MSVCR70!exit */ RELOAD();
L_9534b0: /* 9534b0: mov eax, dword ptr [0xcfb090] */
  eax = R32((uint32_t)(0xcfb090u));
/* 9534b5: lea edx, [eax + 0x40] */
  edx = (uint32_t)(eax + 0x40u);
/* 9534b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9534b9: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9534bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9534bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9534bf: call 0x952d10 */
  esp -= 4; W32(esp, 0x9534c4u); SPILL(); f_952d10(); if (g_unwind) return; RELOAD();
/* 9534c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9534c6: push 0xcf8a60 */
  { uint32_t v = 0xcf8a60u; esp -= 4; W32(esp, v); }
/* 9534cb: call 0x99cf12 */
  esp -= 4; W32(esp, 0x9534d0u); SPILL(); { GJmp *j = hle_setjmp3_slot(); if (setjmp(j->env)) R = j->r; else { R.esp += 4; R.eax = 0; j->r = R; } } RELOAD();
/* 9534d0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9534d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9534d5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9534d8: jne 0x953597 */
  if (!zf) goto L_953597;
L_9534de: /* 9534de: mov dword ptr [0xcf8bd4], eax */
  W32((uint32_t)(0xcf8bd4u), eax);
/* 9534e3: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9534e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9534e7: call 0x94fe50 */
  esp -= 4; W32(esp, 0x9534ecu); SPILL(); f_94fe50(); if (g_unwind) return; RELOAD();
/* 9534ec: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 9534f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9534f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9534f6: je 0x953502 */
  if (zf) goto L_953502;
L_9534f8: /* 9534f8: mov dword ptr [0xcf853c], 1 */
  W32((uint32_t)(0xcf853cu), 0x1u);
L_953502: /* 953502: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 953507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953509: je 0x953549 */
  if (zf) goto L_953549;
L_95350b: /* 95350b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 95350e: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
/* 953511: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953512: call 0x96d1c0 */
  esp -= 4; W32(esp, 0x953517u); SPILL(); f_96d1c0(); if (g_unwind) return; RELOAD();
/* 953517: mov ecx, dword ptr [0xcf85c0] */
  ecx = R32((uint32_t)(0xcf85c0u));
/* 95351d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 953520: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 953523: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953524: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953527: call 0x9650c0 */
  esp -= 4; W32(esp, 0x95352cu); SPILL(); f_9650c0(); if (g_unwind) return; RELOAD();
/* 95352c: mov edi, eax */
  edi = eax;
/* 95352e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 953531: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953534: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953536: mov ebx, 1 */
  ebx = 0x1u;
/* 95353b: je 0x953552 */
  if (zf) goto L_953552;
L_95353d: /* 95353d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 953540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953541: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x953547u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953547: jmp 0x953552 */
  goto L_953552;
L_953549: /* 953549: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 95354c: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 95354f: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
L_953552: /* 953552: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 953555: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953556: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953558: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953559: call 0x94fc20 */
  esp -= 4; W32(esp, 0x95355eu); SPILL(); f_94fc20(); if (g_unwind) return; RELOAD();
/* 95355e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953561: call 0x96d350 */
  esp -= 4; W32(esp, 0x953566u); SPILL(); f_96d350(); if (g_unwind) return; RELOAD();
/* 953566: call 0x954640 */
  esp -= 4; W32(esp, 0x95356bu); SPILL(); f_954640(); if (g_unwind) return; RELOAD();
/* 95356b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 95356e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953570: je 0x953577 */
  if (zf) goto L_953577;
L_953572: /* 953572: call 0x9654e0 */
  esp -= 4; W32(esp, 0x953577u); SPILL(); f_9654e0(); if (g_unwind) return; RELOAD();
L_953577: /* 953577: mov eax, dword ptr [0xcf85a8] */
  eax = R32((uint32_t)(0xcf85a8u));
/* 95357c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95357e: je 0x953597 */
  if (zf) goto L_953597;
L_953580: /* 953580: mov eax, dword ptr [0xcf8588] */
  eax = R32((uint32_t)(0xcf8588u));
/* 953585: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953587: jne 0x953597 */
  if (!zf) goto L_953597;
L_953589: /* 953589: mov eax, dword ptr [0xcf8584] */
  eax = R32((uint32_t)(0xcf8584u));
/* 95358e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953590: jne 0x953597 */
  if (!zf) goto L_953597;
L_953592: /* 953592: call 0x954760 */
  esp -= 4; W32(esp, 0x953597u); SPILL(); f_954760(); if (g_unwind) return; RELOAD();
L_953597: /* 953597: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 95359a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95359b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95359c: mov dword ptr [0xcf8bd4], 1 */
  W32((uint32_t)(0xcf8bd4u), 0x1u);
/* 9535a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9535a7: mov esp, ebp */
  esp = ebp;
/* 9535a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9535aa: ret  */
  esp += 4; SPILL(); return;
}

void f_9535b0(void) {
  LOAD_REGS();
L_9535b0: /* 9535b0: mov eax, dword ptr [0xcf8c34] */
  eax = R32((uint32_t)(0xcf8c34u));
/* 9535b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9535b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9535b8: je 0x9535c2 */
  if (zf) goto L_9535c2;
L_9535ba: /* 9535ba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9535bc: call dword ptr [0xcfb094] */
  esp -= 4; W32(esp, 0x9535c2u); SPILL(); f_404360(); if (g_unwind) return; /* MSVCR70!exit */ RELOAD();
L_9535c2: /* 9535c2: mov eax, dword ptr [0xcf8bec] */
  eax = R32((uint32_t)(0xcf8becu));
/* 9535c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9535c9: mov dword ptr [0xcf8c34], 1 */
  W32((uint32_t)(0xcf8c34u), 0x1u);
/* 9535d3: jne 0x9535e5 */
  if (!zf) goto L_9535e5;
L_9535d5: /* 9535d5: call 0x94f6c0 */
  esp -= 4; W32(esp, 0x9535dau); SPILL(); f_94f6c0(); if (g_unwind) return; RELOAD();
/* 9535da: sub eax, dword ptr [0xcf8b9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b9cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9535e0: mov dword ptr [0xcf8b9c], eax */
  W32((uint32_t)(0xcf8b9cu), eax);
L_9535e5: /* 9535e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9535e6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9535ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9535eb: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9535ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9535f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9535f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9535f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9535f5: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 9535fa: call 0x953700 */
  esp -= 4; W32(esp, 0x9535ffu); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 9535ff: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 953604: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 953608: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95360b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95360d: je 0x953627 */
  if (zf) goto L_953627;
L_95360f: /* 95360f: mov eax, dword ptr [0xcf8bec] */
  eax = R32((uint32_t)(0xcf8becu));
/* 953614: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953616: jne 0x953620 */
  if (!zf) goto L_953620;
L_953618: /* 953618: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95361a: jne 0x953627 */
  if (!zf) goto L_953627;
L_95361c: /* 95361c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95361e: jne 0x953627 */
  if (!zf) goto L_953627;
L_953620: /* 953620: call 0x9654e0 */
  esp -= 4; W32(esp, 0x953625u); SPILL(); f_9654e0(); if (g_unwind) return; RELOAD();
/* 953625: jmp 0x953699 */
  goto L_953699;
L_953627: /* 953627: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95362a: je 0x953678 */
  if (zf) goto L_953678;
L_95362c: /* 95362c: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 953631: mov ecx, dword ptr [0xcf7a70] */
  ecx = R32((uint32_t)(0xcf7a70u));
/* 953637: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 953638: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95363a: jle 0x953678 */
  if ((zf || sf != of)) goto L_953678;
L_95363c: /* 95363c: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 953642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953643: call 0x96f1c0 */
  esp -= 4; W32(esp, 0x953648u); SPILL(); f_96f1c0(); if (g_unwind) return; RELOAD();
/* 953648: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 95364d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953652: je 0x953678 */
  if (zf) goto L_953678;
L_953654: /* 953654: call 0x9616b0 */
  esp -= 4; W32(esp, 0x953659u); SPILL(); f_9616b0(); if (g_unwind) return; RELOAD();
/* 953659: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95365f: push 0xaf6248 */
  { uint32_t v = 0xaf6248u; esp -= 4; W32(esp, v); }
/* 953664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953665: call 0x961d00 */
  esp -= 4; W32(esp, 0x95366au); SPILL(); f_961d00(); if (g_unwind) return; RELOAD();
/* 95366a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95366f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953670: call 0x953e00 */
  esp -= 4; W32(esp, 0x953675u); SPILL(); f_953e00(); if (g_unwind) return; RELOAD();
/* 953675: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953678: /* 953678: mov eax, dword ptr [0xcf84b4] */
  eax = R32((uint32_t)(0xcf84b4u));
/* 95367d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95367f: je 0x953699 */
  if (zf) goto L_953699;
L_953681: /* 953681: mov ecx, dword ptr [0xcf81c4] */
  ecx = R32((uint32_t)(0xcf81c4u));
/* 953687: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95368d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95368f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953690: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953691: call 0x9620d0 */
  esp -= 4; W32(esp, 0x953696u); SPILL(); f_9620d0(); if (g_unwind) return; RELOAD();
/* 953696: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953699: /* 953699: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95369b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95369c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95369d: jne 0x9536a6 */
  if (!zf) goto L_9536a6;
L_95369f: /* 95369f: mov ebx, 5 */
  ebx = 0x5u;
/* 9536a4: jmp 0x9536d5 */
  goto L_9536d5;
L_9536a6: /* 9536a6: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9536a9: jne 0x9536b8 */
  if (!zf) goto L_9536b8;
L_9536ab: /* 9536ab: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9536b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9536b1: call 0x96aa00 */
  esp -= 4; W32(esp, 0x9536b6u); SPILL(); f_96aa00(); if (g_unwind) return; RELOAD();
/* 9536b6: jmp 0x9536d2 */
  goto L_9536d2;
L_9536b8: /* 9536b8: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9536bb: jne 0x9536d5 */
  if (!zf) goto L_9536d5;
L_9536bd: /* 9536bd: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 9536c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9536c4: jne 0x9536d5 */
  if (!zf) goto L_9536d5;
L_9536c6: /* 9536c6: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9536cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9536cd: call 0x96a920 */
  esp -= 4; W32(esp, 0x9536d2u); SPILL(); f_96a920(); if (g_unwind) return; RELOAD();
L_9536d2: /* 9536d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9536d5: /* 9536d5: mov eax, dword ptr [0xcf8bd4] */
  eax = R32((uint32_t)(0xcf8bd4u));
/* 9536da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9536dc: je 0x9536e6 */
  if (zf) goto L_9536e6;
L_9536de: /* 9536de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9536e0: call dword ptr [0xcfb094] */
  esp -= 4; W32(esp, 0x9536e6u); SPILL(); f_404360(); if (g_unwind) return; /* MSVCR70!exit */ RELOAD();
L_9536e6: /* 9536e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9536e7: push 0xcf8a60 */
  { uint32_t v = 0xcf8a60u; esp -= 4; W32(esp, v); }
/* 9536ec: mov dword ptr [0xcf8bd4], 1 */
  W32((uint32_t)(0xcf8bd4u), 0x1u);
/* 9536f6: call dword ptr [0xcfb0c8] */
  esp -= 4; W32(esp, 0x9536fcu); SPILL(); hle_longjmp(); if (g_unwind) return; /* MSVCR70!longjmp */ RELOAD();
/* 9536fc: nop  */
/* 9536fd: nop  */
/* 9536fe: nop  */
/* 9536ff: nop  */
  SPILL(); f_953700(); return;
}

void f_953700(void) {
  LOAD_REGS();
L_953700: /* 953700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953701: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953702: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953703: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 953707: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953709: je 0x95371a */
  if (zf) goto L_95371a;
L_95370b: /* 95370b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 953710: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953712: call 0x968be0 */
  esp -= 4; W32(esp, 0x953717u); SPILL(); f_968be0(); if (g_unwind) return; RELOAD();
/* 953717: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95371a: /* 95371a: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 95371e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953720: je 0x953732 */
  if (zf) goto L_953732;
L_953722: /* 953722: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 953728: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953729: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95372a: call 0x968be0 */
  esp -= 4; W32(esp, 0x95372fu); SPILL(); f_968be0(); if (g_unwind) return; RELOAD();
/* 95372f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953732: /* 953732: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 953736: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953738: je 0x95379c */
  if (zf) goto L_95379c;
L_95373a: /* 95373a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 953740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953742: call 0x96b6b0 */
  esp -= 4; W32(esp, 0x953747u); SPILL(); f_96b6b0(); if (g_unwind) return; RELOAD();
/* 953747: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95374a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95374d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95374f: je 0x953768 */
  if (zf) goto L_953768;
L_953751: /* 953751: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 953753: je 0x953768 */
  if (zf) goto L_953768;
L_953755: /* 953755: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 953757: je 0x953768 */
  if (zf) goto L_953768;
L_953759: /* 953759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95375a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95375f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953760: call 0x968be0 */
  esp -= 4; W32(esp, 0x953765u); SPILL(); f_968be0(); if (g_unwind) return; RELOAD();
/* 953765: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953768: /* 953768: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 95376b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95376d: je 0x953787 */
  if (zf) goto L_953787;
L_95376f: /* 95376f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 953771: je 0x953787 */
  if (zf) goto L_953787;
L_953773: /* 953773: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 953775: je 0x953787 */
  if (zf) goto L_953787;
L_953777: /* 953777: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95377d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95377e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95377f: call 0x968be0 */
  esp -= 4; W32(esp, 0x953784u); SPILL(); f_968be0(); if (g_unwind) return; RELOAD();
/* 953784: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953787: /* 953787: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953789: jne 0x95378e */
  if (!zf) goto L_95378e;
L_95378b: /* 95378b: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
L_95378e: /* 95378e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953790: jne 0x95379c */
  if (!zf) goto L_95379c;
L_953792: /* 953792: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 953795: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 953797: jne 0x95379c */
  if (!zf) goto L_95379c;
L_953799: /* 953799: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
L_95379c: /* 95379c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9537a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9537a2: je 0x9537b4 */
  if (zf) goto L_9537b4;
L_9537a4: /* 9537a4: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9537aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9537ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9537ac: call 0x96b950 */
  esp -= 4; W32(esp, 0x9537b1u); SPILL(); f_96b950(); if (g_unwind) return; RELOAD();
/* 9537b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9537b4: /* 9537b4: mov eax, dword ptr [0xcf8b34] */
  eax = R32((uint32_t)(0xcf8b34u));
/* 9537b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9537bb: je 0x953802 */
  if (zf) goto L_953802;
L_9537bd: /* 9537bd: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 9537c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9537c4: je 0x953802 */
  if (zf) goto L_953802;
L_9537c6: /* 9537c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9537c8: je 0x953802 */
  if (zf) goto L_953802;
L_9537ca: /* 9537ca: mov eax, dword ptr [0xcf8bec] */
  eax = R32((uint32_t)(0xcf8becu));
/* 9537cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9537d1: jne 0x953802 */
  if (!zf) goto L_953802;
L_9537d3: /* 9537d3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9537d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9537da: jne 0x953802 */
  if (!zf) goto L_953802;
L_9537dc: /* 9537dc: mov esi, 0xcf84b8 */
  esi = 0xcf84b8u;
L_9537e1: /* 9537e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9537e3: mov ecx, dword ptr [0xcf8b34] */
  ecx = R32((uint32_t)(0xcf8b34u));
/* 9537e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9537eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9537ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9537ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9537ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9537ef: call 0x96b0b0 */
  esp -= 4; W32(esp, 0x9537f4u); SPILL(); f_96b0b0(); if (g_unwind) return; RELOAD();
/* 9537f4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9537f7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9537fa: cmp esi, 0xcf8528 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcf8528u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953800: jl 0x9537e1 */
  if ((sf != of)) goto L_9537e1;
L_953802: /* 953802: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953803: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953804: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 953805: ret  */
  esp += 4; SPILL(); return;
}

void f_953810(void) {
  LOAD_REGS();
L_953810: /* 953810: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 953815: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953816: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 95381a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95381b: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 95381f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953820: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953821: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 953825: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953826: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953827: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 953828: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95382a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95382b: call 0x967450 */
  esp -= 4; W32(esp, 0x953830u); SPILL(); f_967450(); if (g_unwind) return; RELOAD();
/* 953830: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953833: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953835: je 0x953861 */
  if (zf) goto L_953861;
L_953837: /* 953837: mov esi, ebp */
  esi = ebp;
/* 953839: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_953840: /* 953840: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 953843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953845: je 0x953861 */
  if (zf) goto L_953861;
L_953847: /* 953847: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95384d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95384e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95384f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 953851: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953852: call 0x966cd0 */
  esp -= 4; W32(esp, 0x953857u); SPILL(); f_966cd0(); if (g_unwind) return; RELOAD();
/* 953857: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95385a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95385d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95385f: jne 0x953840 */
  if (!zf) goto L_953840;
L_953861: /* 953861: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953863: je 0x95388c */
  if (zf) goto L_95388c;
L_953865: /* 953865: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 953868: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95386a: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* 95386d: je 0x95388c */
  if (zf) goto L_95388c;
L_95386f: /* 95386f: nop  */
L_953870: /* 953870: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 953876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953877: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953878: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95387a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95387b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95387e: call 0x966cd0 */
  esp -= 4; W32(esp, 0x953883u); SPILL(); f_966cd0(); if (g_unwind) return; RELOAD();
/* 953883: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 953885: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95388a: jne 0x953870 */
  if (!zf) goto L_953870;
L_95388c: /* 95388c: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 953891: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953892: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953893: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 953894: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 953896: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953897: call 0x9684d0 */
  esp -= 4; W32(esp, 0x95389cu); SPILL(); f_9684d0(); if (g_unwind) return; RELOAD();
/* 95389c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95389f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9538a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9538a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9538a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9538a3: ret  */
  esp += 4; SPILL(); return;
}

void f_9538b0(void) {
  LOAD_REGS();
L_9538b0: /* 9538b0: ret  */
  esp += 4; SPILL(); return;
}

void f_9538c0(void) {
  LOAD_REGS();
L_9538c0: /* 9538c0: mov eax, dword ptr [0xcf2f28] */
  eax = R32((uint32_t)(0xcf2f28u));
/* 9538c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9538c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9538c7: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9538cb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9538cd: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 9538d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9538d3: ja 0x9539ac */
  if ((!cf && !zf)) goto L_9539ac;
L_9538d9: /* 9538d9: mov esi, dword ptr [eax + esi*4] */
  esi = R32((uint32_t)(eax + esi*4));
/* 9538dc: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 9538e2: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 9538e9: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 9538ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9538ee: je 0x953902 */
  if (zf) goto L_953902;
L_9538f0: /* 9538f0: inc dword ptr [0xcf2f54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f54u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f54u), r);
  }
/* 9538f6: mov esi, dword ptr [ecx + edx] */
  esi = R32((uint32_t)(ecx + edx));
/* 9538f9: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9538fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9538fc: mov dword ptr [ecx + edx], esi */
  W32((uint32_t)(ecx + edx), esi);
/* 9538ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953900: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 953901: ret  */
  esp += 4; SPILL(); return;
L_953902: /* 953902: mov edx, dword ptr [0xcf2f34] */
  edx = R32((uint32_t)(0xcf2f34u));
/* 953908: mov ebx, dword ptr [ecx + edx] */
  ebx = R32((uint32_t)(ecx + edx));
/* 95390b: mov ecx, dword ptr [0xcf2f58] */
  ecx = R32((uint32_t)(0xcf2f58u));
/* 953911: mov esi, dword ptr [0xcf2f44] */
  esi = R32((uint32_t)(0xcf2f44u));
/* 953917: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 953918: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95391a: mov dword ptr [0xcf2f58], ecx */
  W32((uint32_t)(0xcf2f58u), ecx);
/* 953920: jle 0x953990 */
  if ((zf || sf != of)) goto L_953990;
L_953922: /* 953922: mov eax, dword ptr [0xcf2f3c] */
  eax = R32((uint32_t)(0xcf2f3cu));
/* 953927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953929: mov esi, dword ptr [0xcf2f1c] */
  esi = R32((uint32_t)(0xcf2f1cu));
/* 95392f: je 0x953937 */
  if (zf) goto L_953937;
L_953931: /* 953931: mov esi, dword ptr [0xcf2f18] */
  esi = R32((uint32_t)(0xcf2f18u));
L_953937: /* 953937: mov edx, dword ptr [0xcf2f6c] */
  edx = R32((uint32_t)(0xcf2f6cu));
/* 95393d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95393f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953940: mov dword ptr [0xcf2f6c], edx */
  W32((uint32_t)(0xcf2f6cu), edx);
/* 953946: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x95394cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 95394c: mov edi, eax */
  edi = eax;
/* 95394e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953950: jne 0x95396e */
  if (!zf) goto L_95396e;
L_953952: /* 953952: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 953957: push 0xaf62c8 */
  { uint32_t v = 0xaf62c8u; esp -= 4; W32(esp, v); }
/* 95395c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95395d: call 0x953470 */
  esp -= 4; W32(esp, 0x953962u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953962: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953963: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953964: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 953966: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95396bu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95396b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95396e: /* 95396e: mov ecx, dword ptr [0xcf2f3c] */
  ecx = R32((uint32_t)(0xcf2f3cu));
/* 953974: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 953976: mov ecx, dword ptr [0xcf2f2c] */
  ecx = R32((uint32_t)(0xcf2f2cu));
/* 95397c: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 95397f: not ecx */
  ecx = ~ecx;
/* 953981: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 953983: mov dword ptr [0xcf2f3c], edi */
  W32((uint32_t)(0xcf2f3cu), edi);
/* 953989: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 95398c: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 95398e: jmp 0x953996 */
  goto L_953996;
L_953990: /* 953990: mov ecx, dword ptr [0xcf2f40] */
  ecx = R32((uint32_t)(0xcf2f40u));
L_953996: /* 953996: mov eax, ecx */
  eax = ecx;
/* 953998: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95399a: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 95399c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95399d: mov dword ptr [0xcf2f44], esi */
  W32((uint32_t)(0xcf2f44u), esi);
/* 9539a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9539a4: mov dword ptr [0xcf2f40], ecx */
  W32((uint32_t)(0xcf2f40u), ecx);
/* 9539aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9539ab: ret  */
  esp += 4; SPILL(); return;
L_9539ac: /* 9539ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9539ae: jne 0x9539cf */
  if (!zf) goto L_9539cf;
L_9539b0: /* 9539b0: mov edx, dword ptr [0xcf2f4c] */
  edx = R32((uint32_t)(0xcf2f4cu));
/* 9539b6: push 0xaf6280 */
  { uint32_t v = 0xaf6280u; esp -= 4; W32(esp, v); }
/* 9539bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9539bc: call 0x953470 */
  esp -= 4; W32(esp, 0x9539c1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9539c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9539c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9539c5: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9539c7: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9539ccu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9539cc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9539cf: /* 9539cf: mov ebx, dword ptr [0xcf2f5c] */
  ebx = R32((uint32_t)(0xcf2f5cu));
/* 9539d5: mov eax, dword ptr [0xcf2f70] */
  eax = R32((uint32_t)(0xcf2f70u));
/* 9539da: mov edi, dword ptr [0xcf2f60] */
  edi = R32((uint32_t)(0xcf2f60u));
/* 9539e0: mov ecx, dword ptr [0xcf2f74] */
  ecx = R32((uint32_t)(0xcf2f74u));
/* 9539e6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9539e7: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9539e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9539ea: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9539ec: mov dword ptr [0xcf2f5c], ebx */
  W32((uint32_t)(0xcf2f5cu), ebx);
/* 9539f2: mov dword ptr [0xcf2f60], edi */
  W32((uint32_t)(0xcf2f60u), edi);
/* 9539f8: mov dword ptr [0xcf2f70], eax */
  W32((uint32_t)(0xcf2f70u), eax);
/* 9539fd: jge 0x953a04 */
  if ((sf == of)) goto L_953a04;
L_9539ff: /* 9539ff: mov dword ptr [0xcf2f74], eax */
  W32((uint32_t)(0xcf2f74u), eax);
L_953a04: /* 953a04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953a05: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x953a0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953a0b: mov edi, eax */
  edi = eax;
/* 953a0d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953a0f: jne 0x953a2d */
  if (!zf) goto L_953a2d;
L_953a11: /* 953a11: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 953a16: push 0xaf62c8 */
  { uint32_t v = 0xaf62c8u; esp -= 4; W32(esp, v); }
/* 953a1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953a1c: call 0x953470 */
  esp -= 4; W32(esp, 0x953a21u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953a21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953a22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953a23: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 953a25: call 0x9535b0 */
  esp -= 4; W32(esp, 0x953a2au); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 953a2a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953a2d: /* 953a2d: cmp dword ptr [0xcf2f50], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f50u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953a34: jl 0x953a4c */
  if ((sf != of)) goto L_953a4c;
L_953a36: /* 953a36: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 953a3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953a3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953a3e: push 0xaf6258 */
  { uint32_t v = 0xaf6258u; esp -= 4; W32(esp, v); }
/* 953a43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953a44: call 0x953470 */
  esp -= 4; W32(esp, 0x953a49u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953a49: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953a4c: /* 953a4c: mov eax, edi */
  eax = edi;
/* 953a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 953a51: ret  */
  esp += 4; SPILL(); return;
}

void f_953a60(void) {
  LOAD_REGS();
L_953a60: /* 953a60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953a61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 953a65: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953a67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953a68: je 0x953ada */
  if (zf) goto L_953ada;
L_953a6a: /* 953a6a: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 953a6e: cmp edi, dword ptr [0xcf2f28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2f28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953a74: jg 0x953a9b */
  if ((!zf && sf == of)) goto L_953a9b;
L_953a76: /* 953a76: mov eax, dword ptr [0xcf2f64] */
  eax = R32((uint32_t)(0xcf2f64u));
/* 953a7b: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 953a81: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 953a82: mov dword ptr [0xcf2f64], eax */
  W32((uint32_t)(0xcf2f64u), eax);
/* 953a87: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 953a8c: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 953a8f: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 953a92: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 953a94: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 953a96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953a97: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 953a99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953a9a: ret  */
  esp += 4; SPILL(); return;
L_953a9b: /* 953a9b: mov eax, dword ptr [0xcf2f68] */
  eax = R32((uint32_t)(0xcf2f68u));
/* 953aa0: mov edx, dword ptr [0xcf2f70] */
  edx = R32((uint32_t)(0xcf2f70u));
/* 953aa6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 953aa7: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 953aa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953aaa: mov dword ptr [0xcf2f68], eax */
  W32((uint32_t)(0xcf2f68u), eax);
/* 953aaf: mov dword ptr [0xcf2f70], edx */
  W32((uint32_t)(0xcf2f70u), edx);
/* 953ab5: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x953abbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953abb: cmp dword ptr [0xcf2f50], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f50u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953ac2: jl 0x953ada */
  if ((sf != of)) goto L_953ada;
L_953ac4: /* 953ac4: mov edx, dword ptr [0xcf2f4c] */
  edx = R32((uint32_t)(0xcf2f4cu));
/* 953aca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953acb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953acc: push 0xaf62f8 */
  { uint32_t v = 0xaf62f8u; esp -= 4; W32(esp, v); }
/* 953ad1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953ad2: call 0x953470 */
  esp -= 4; W32(esp, 0x953ad7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953ad7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953ada: /* 953ada: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953adb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953adc: ret  */
  esp += 4; SPILL(); return;
}

void f_953ae0(void) {
  LOAD_REGS();
L_953ae0: /* 953ae0: mov edx, dword ptr [0xcf2f68] */
  edx = R32((uint32_t)(0xcf2f68u));
/* 953ae6: mov eax, dword ptr [0xcf2f5c] */
  eax = R32((uint32_t)(0xcf2f5cu));
/* 953aeb: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 953aef: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 953af1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 953af5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 953af7: mov eax, dword ptr [0xcf2f70] */
  eax = R32((uint32_t)(0xcf2f70u));
/* 953afc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 953afe: mov eax, dword ptr [0xcf2f3c] */
  eax = R32((uint32_t)(0xcf2f3cu));
/* 953b03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953b05: je 0x953b18 */
  if (zf) goto L_953b18;
L_953b07: /* 953b07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_953b08: /* 953b08: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 953b0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953b0b: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x953b11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953b11: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953b13: mov eax, esi */
  eax = esi;
/* 953b15: jne 0x953b08 */
  if (!zf) goto L_953b08;
L_953b17: /* 953b17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_953b18: /* 953b18: mov eax, dword ptr [0xcf2f28] */
  eax = R32((uint32_t)(0xcf2f28u));
/* 953b1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953b1f: mov dword ptr [0xcf2f3c], 0 */
  W32((uint32_t)(0xcf2f3cu), 0x0u);
/* 953b29: je 0x953b51 */
  if (zf) goto L_953b51;
L_953b2b: /* 953b2b: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 953b31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953b32: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x953b38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953b38: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 953b3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953b3f: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x953b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953b45: mov eax, dword ptr [0xcf2f34] */
  eax = R32((uint32_t)(0xcf2f34u));
/* 953b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953b4b: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x953b51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_953b51: /* 953b51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953b52: mov ecx, 0x1a */
  ecx = 0x1au;
/* 953b57: xor eax, eax */
  eax = 0;
/* 953b59: mov edi, 0xcf2f18 */
  edi = 0xcf2f18u;
/* 953b5e: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 953b60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953b61: ret  */
  esp += 4; SPILL(); return;
}

void f_953b70(void) {
  LOAD_REGS();
L_953b70: /* 953b70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953b71: xor eax, eax */
  eax = 0;
/* 953b73: mov ecx, 0x1a */
  ecx = 0x1au;
/* 953b78: mov edi, 0xcf2f18 */
  edi = 0xcf2f18u;
/* 953b7d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 953b7f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 953b83: mov dword ptr [0xcf2f4c], eax */
  W32((uint32_t)(0xcf2f4cu), eax);
/* 953b88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953b89: ret  */
  esp += 4; SPILL(); return;
}

void f_953b90(void) {
  LOAD_REGS();
L_953b90: /* 953b90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 953b94: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 953b98: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 953b9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953b9d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 953ba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953ba2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 953ba6: mov dword ptr [0xcf2f50], eax */
  W32((uint32_t)(0xcf2f50u), eax);
/* 953bab: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 953bae: mov dword ptr [0xcf2f18], ecx */
  W32((uint32_t)(0xcf2f18u), ecx);
/* 953bb4: mov ecx, eax */
  ecx = eax;
/* 953bb6: not ecx */
  ecx = ~ecx;
/* 953bb8: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953bba: mov dword ptr [0xcf2f24], esi */
  W32((uint32_t)(0xcf2f24u), esi);
/* 953bc0: mov dword ptr [0xcf2f1c], edx */
  W32((uint32_t)(0xcf2f1cu), edx);
/* 953bc6: mov dword ptr [0xcf2f2c], eax */
  W32((uint32_t)(0xcf2f2cu), eax);
/* 953bcb: je 0x953bed */
  if (zf) goto L_953bed;
L_953bcd: /* 953bcd: mov edx, dword ptr [0xcf2f4c] */
  edx = R32((uint32_t)(0xcf2f4cu));
/* 953bd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953bd4: push 0xaf6388 */
  { uint32_t v = 0xaf6388u; esp -= 4; W32(esp, v); }
/* 953bd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953bda: call 0x953470 */
  esp -= 4; W32(esp, 0x953bdfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953bdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953be1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953be3: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 953be5: call 0x9535b0 */
  esp -= 4; W32(esp, 0x953beau); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 953bea: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953bed: /* 953bed: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 953bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953bf1: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x953bf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953bf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953bf8: mov dword ptr [0xcf2f34], eax */
  W32((uint32_t)(0xcf2f34u), eax);
/* 953bfd: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x953c03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 953c03: mov ecx, dword ptr [0xcf2f34] */
  ecx = R32((uint32_t)(0xcf2f34u));
/* 953c09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953c0b: mov dword ptr [0xcf2f30], eax */
  W32((uint32_t)(0xcf2f30u), eax);
/* 953c10: je 0x953c16 */
  if (zf) goto L_953c16;
L_953c12: /* 953c12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953c14: jne 0x953c34 */
  if (!zf) goto L_953c34;
L_953c16: /* 953c16: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 953c1b: push 0xaf6358 */
  { uint32_t v = 0xaf6358u; esp -= 4; W32(esp, v); }
/* 953c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953c21: call 0x953470 */
  esp -= 4; W32(esp, 0x953c26u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953c26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953c28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953c2a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 953c2c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x953c31u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 953c31: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953c34: /* 953c34: cmp dword ptr [0xcf2f50], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f50u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953c3b: jl 0x953c52 */
  if ((sf != of)) goto L_953c52;
L_953c3d: /* 953c3d: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 953c43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953c44: push 0xaf631c */
  { uint32_t v = 0xaf631cu; esp -= 4; W32(esp, v); }
/* 953c49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953c4a: call 0x953470 */
  esp -= 4; W32(esp, 0x953c4fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953c4f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953c52: /* 953c52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953c53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953c54: ret  */
  esp += 4; SPILL(); return;
}

void f_953d60(void) {
  LOAD_REGS();
L_953d60: /* 953d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 953d64: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 953d68: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 953d6a: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 953d6c: ret  */
  esp += 4; SPILL(); return;
}

void f_953d70(void) {
  LOAD_REGS();
L_953d70: /* 953d70: mov eax, dword ptr [0xcf2f28] */
  eax = R32((uint32_t)(0xcf2f28u));
/* 953d75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953d77: je 0x953d97 */
  if (zf) goto L_953d97;
L_953d79: /* 953d79: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 953d7e: push 0xaf64b0 */
  { uint32_t v = 0xaf64b0u; esp -= 4; W32(esp, v); }
/* 953d83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953d84: call 0x953470 */
  esp -= 4; W32(esp, 0x953d89u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953d89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 953d8d: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 953d8f: call 0x9535b0 */
  esp -= 4; W32(esp, 0x953d94u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 953d94: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953d97: /* 953d97: mov eax, dword ptr [0xcf2f2c] */
  eax = R32((uint32_t)(0xcf2f2cu));
/* 953d9c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 953da0: mov edx, dword ptr [0xcf2f20] */
  edx = R32((uint32_t)(0xcf2f20u));
/* 953da6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 953da8: not eax */
  eax = ~eax;
/* 953daa: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 953dac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953dad: mov esi, dword ptr [0xcf2f34] */
  esi = R32((uint32_t)(0xcf2f34u));
/* 953db3: mov eax, edx */
  eax = edx;
/* 953db5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953db7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953db8: je 0x953dcd */
  if (zf) goto L_953dcd;
L_953dba: /* 953dba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_953dc0: /* 953dc0: mov edi, dword ptr [esi + eax*4 - 4] */
  edi = R32((uint32_t)(esi + eax*4 + 0xfffffffcu));
/* 953dc4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 953dc5: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 953dc7: je 0x953dfc */
  if (zf) goto L_953dfc;
L_953dc9: /* 953dc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953dcb: jne 0x953dc0 */
  if (!zf) goto L_953dc0;
L_953dcd: /* 953dcd: mov eax, dword ptr [0xcf2f24] */
  eax = R32((uint32_t)(0xcf2f24u));
/* 953dd2: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953dd4: jge 0x953de7 */
  if ((sf == of)) goto L_953de7;
L_953dd6: /* 953dd6: mov dword ptr [esi + edx*4], ecx */
  W32((uint32_t)(esi + edx*4), ecx);
/* 953dd9: mov eax, dword ptr [0xcf2f20] */
  eax = R32((uint32_t)(0xcf2f20u));
/* 953dde: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 953ddf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953de0: mov dword ptr [0xcf2f20], eax */
  W32((uint32_t)(0xcf2f20u), eax);
/* 953de5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953de6: ret  */
  esp += 4; SPILL(); return;
L_953de7: /* 953de7: mov edx, dword ptr [0xcf2f4c] */
  edx = R32((uint32_t)(0xcf2f4cu));
/* 953ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953dee: push 0xaf6468 */
  { uint32_t v = 0xaf6468u; esp -= 4; W32(esp, v); }
/* 953df3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953df4: call 0x953470 */
  esp -= 4; W32(esp, 0x953df9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953df9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953dfc: /* 953dfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953dfe: ret  */
  esp += 4; SPILL(); return;
}

void f_953e00(void) {
  LOAD_REGS();
L_953e00: /* 953e00: mov eax, dword ptr [0xcf2f20] */
  eax = R32((uint32_t)(0xcf2f20u));
/* 953e05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953e06: xor esi, esi */
  esi = 0;
/* 953e08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 953e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953e0b: jle 0x953e45 */
  if ((zf || sf != of)) goto L_953e45;
L_953e0d: /* 953e0d: mov edx, dword ptr [0xcf2f34] */
  edx = R32((uint32_t)(0xcf2f34u));
/* 953e13: mov edi, dword ptr [0xcf2f30] */
  edi = R32((uint32_t)(0xcf2f30u));
/* 953e19: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953e1a: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 953e1c: mov ebx, eax */
  ebx = eax;
/* 953e1e: mov edi, edi */
  edi = edi;
L_953e20: /* 953e20: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 953e23: xor ecx, ecx */
  ecx = 0;
/* 953e25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953e27: je 0x953e37 */
  if (zf) goto L_953e37;
L_953e29: /* 953e29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_953e30: /* 953e30: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 953e32: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 953e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953e35: jne 0x953e30 */
  if (!zf) goto L_953e30;
L_953e37: /* 953e37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 953e39: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 953e3c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 953e3e: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 953e41: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 953e42: jne 0x953e20 */
  if (!zf) goto L_953e20;
L_953e44: /* 953e44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_953e45: /* 953e45: mov ecx, dword ptr [0xcf2f1c] */
  ecx = R32((uint32_t)(0xcf2f1cu));
/* 953e4b: mov edx, dword ptr [0xcf2f18] */
  edx = R32((uint32_t)(0xcf2f18u));
/* 953e51: mov eax, dword ptr [0xcf2f5c] */
  eax = R32((uint32_t)(0xcf2f5cu));
/* 953e56: mov edi, dword ptr [0xcf2f44] */
  edi = R32((uint32_t)(0xcf2f44u));
/* 953e5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953e5d: mov ecx, dword ptr [0xcf2f68] */
  ecx = R32((uint32_t)(0xcf2f68u));
/* 953e63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953e64: mov edx, eax */
  edx = eax;
/* 953e66: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 953e68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953e69: mov edx, dword ptr [0xcf2f70] */
  edx = R32((uint32_t)(0xcf2f70u));
/* 953e6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953e70: mov edx, dword ptr [0xcf2f74] */
  edx = R32((uint32_t)(0xcf2f74u));
/* 953e76: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953e77: mov edx, dword ptr [0xcf2f6c] */
  edx = R32((uint32_t)(0xcf2f6cu));
/* 953e7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953e7e: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 953e80: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 953e84: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 953e86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953e87: mov edx, dword ptr [0xcf2f58] */
  edx = R32((uint32_t)(0xcf2f58u));
/* 953e8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953e8e: mov ecx, dword ptr [0xcf2f64] */
  ecx = R32((uint32_t)(0xcf2f64u));
/* 953e94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953e96: mov eax, dword ptr [0xcf2f54] */
  eax = R32((uint32_t)(0xcf2f54u));
/* 953e9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953e9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953e9d: push 0xaf6548 */
  { uint32_t v = 0xaf6548u; esp -= 4; W32(esp, v); }
/* 953ea2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953ea3: call 0x953470 */
  esp -= 4; W32(esp, 0x953ea8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953ea8: mov eax, dword ptr [0xcf2f78] */
  eax = R32((uint32_t)(0xcf2f78u));
/* 953ead: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953eb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953eb2: je 0x953ee0 */
  if (zf) goto L_953ee0;
L_953eb4: /* 953eb4: fild dword ptr [0xcf2f7c] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf2f7cu)); FPUSH(v); }
/* 953eba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 953ebd: fidiv dword ptr [0xcf2f78] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(0xcf2f78u)));
/* 953ec3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 953ec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 953ec7: push 0xaf650c */
  { uint32_t v = 0xaf650cu; esp -= 4; W32(esp, v); }
/* 953ecc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953ecd: call 0x953470 */
  esp -= 4; W32(esp, 0x953ed2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953ed2: push 0xaf64f0 */
  { uint32_t v = 0xaf64f0u; esp -= 4; W32(esp, v); }
/* 953ed7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953ed8: call 0x953470 */
  esp -= 4; W32(esp, 0x953eddu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953edd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953ee0: /* 953ee0: mov eax, dword ptr [0xcf2f20] */
  eax = R32((uint32_t)(0xcf2f20u));
/* 953ee5: xor esi, esi */
  esi = 0;
/* 953ee7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 953ee9: jle 0x953f29 */
  if ((zf || sf != of)) goto L_953f29;
L_953eeb: /* 953eeb: nop  */
/* 953eec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_953ef0: /* 953ef0: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 953ef6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 953ef9: xor ecx, ecx */
  ecx = 0;
/* 953efb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953efd: je 0x953f07 */
  if (zf) goto L_953f07;
L_953eff: /* 953eff: nop  */
L_953f00: /* 953f00: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 953f02: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 953f03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953f05: jne 0x953f00 */
  if (!zf) goto L_953f00;
L_953f07: /* 953f07: mov eax, dword ptr [0xcf2f34] */
  eax = R32((uint32_t)(0xcf2f34u));
/* 953f0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953f0d: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 953f10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953f11: push 0xaf64e8 */
  { uint32_t v = 0xaf64e8u; esp -= 4; W32(esp, v); }
/* 953f16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953f17: call 0x953470 */
  esp -= 4; W32(esp, 0x953f1cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953f1c: mov eax, dword ptr [0xcf2f20] */
  eax = R32((uint32_t)(0xcf2f20u));
/* 953f21: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953f24: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 953f25: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953f27: jl 0x953ef0 */
  if ((sf != of)) goto L_953ef0;
L_953f29: /* 953f29: push 0xaf64e4 */
  { uint32_t v = 0xaf64e4u; esp -= 4; W32(esp, v); }
/* 953f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953f2f: call 0x953470 */
  esp -= 4; W32(esp, 0x953f34u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953f34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 953f37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953f38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953f39: ret  */
  esp += 4; SPILL(); return;
}

void f_953f40(void) {
  LOAD_REGS();
L_953f40: /* 953f40: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 953f44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953f45: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 953f49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953f4a: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 953f4e: mov ecx, dword ptr [esi + edx*4 + 4] */
  ecx = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 953f52: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953f54: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 953f57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953f58: je 0x953f85 */
  if (zf) goto L_953f85;
L_953f5a: /* 953f5a: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 953f5e: mov edi, edi */
  edi = edi;
L_953f60: /* 953f60: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 953f62: je 0x953f81 */
  if (zf) goto L_953f81;
L_953f64: /* 953f64: xor edx, edx */
  edx = 0;
/* 953f66: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953f68: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 953f6b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 953f6c: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 953f6e: mov ecx, dword ptr [esi + edx*4 + 4] */
  ecx = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 953f72: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953f74: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 953f77: jne 0x953f60 */
  if (!zf) goto L_953f60;
L_953f79: /* 953f79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953f7a: mov dword ptr [esi + edx*4 + 4], ebx */
  W32((uint32_t)(esi + edx*4 + 0x4u), ebx);
/* 953f7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953f7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 953f80: ret  */
  esp += 4; SPILL(); return;
L_953f81: /* 953f81: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 953f83: jne 0x953f89 */
  if (!zf) goto L_953f89;
L_953f85: /* 953f85: mov dword ptr [esi + edx*4 + 4], ebx */
  W32((uint32_t)(esi + edx*4 + 0x4u), ebx);
L_953f89: /* 953f89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 953f8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 953f8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 953f8c: ret  */
  esp += 4; SPILL(); return;
}

void f_953f90(void) {
  LOAD_REGS();
L_953f90: /* 953f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 953f91: mov ebp, esp */
  ebp = esp;
/* 953f93: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 953f96: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 953f99: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 953f9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 953f9f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 953fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 953fa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 953fa2: xor edi, edi */
  edi = 0;
/* 953fa4: xor ebp, ebp */
  ebp = 0;
/* 953fa6: mov esi, 1 */
  esi = 0x1u;
/* 953fab: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953fad: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 953fb1: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 953fb5: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 953fb9: mov dword ptr [esp + 0x18], 0xff7fffff */
  W32((uint32_t)(esp + 0x18u), 0xff7fffffu);
/* 953fc1: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 953fc5: jl 0x953fe4 */
  if ((sf != of)) goto L_953fe4;
L_953fc7: /* 953fc7: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 953fcc: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 953fcf: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 953fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 953fd6: push 0xaf6918 */
  { uint32_t v = 0xaf6918u; esp -= 4; W32(esp, v); }
/* 953fdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 953fdc: call 0x953470 */
  esp -= 4; W32(esp, 0x953fe1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 953fe1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_953fe4: /* 953fe4: call 0x963bf0 */
  esp -= 4; W32(esp, 0x953fe9u); SPILL(); f_963bf0(); if (g_unwind) return; RELOAD();
/* 953fe9: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 953fef: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 953ff4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 953ff6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 953ff8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 953ffc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 953ffe: jl 0x95401d */
  if ((sf != of)) goto L_95401d;
L_954000: /* 954000: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954004: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954009: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95400c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95400f: push 0xaf68c8 */
  { uint32_t v = 0xaf68c8u; esp -= 4; W32(esp, v); }
/* 954014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954015: call 0x953470 */
  esp -= 4; W32(esp, 0x95401au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95401a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95401d: /* 95401d: call 0x957ef0 */
  esp -= 4; W32(esp, 0x954022u); SPILL(); f_957ef0(); if (g_unwind) return; RELOAD();
/* 954022: cmp dword ptr [0xcf84b4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf84b4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954028: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 95402c: je 0x95406d */
  if (zf) goto L_95406d;
L_95402e: /* 95402e: cmp dword ptr [0xcf8478], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8478u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954034: mov ecx, 0xaf68bc */
  ecx = 0xaf68bcu;
/* 954039: jne 0x954040 */
  if (!zf) goto L_954040;
L_95403b: /* 95403b: mov ecx, 0xcf2eb4 */
  ecx = 0xcf2eb4u;
L_954040: /* 954040: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954044: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954045: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954048: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95404b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95404c: call 0x94f340 */
  esp -= 4; W32(esp, 0x954051u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 954051: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 954057: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95405a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95405b: push 0xaf6860 */
  { uint32_t v = 0xaf6860u; esp -= 4; W32(esp, v); }
/* 954060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954061: call 0x953470 */
  esp -= 4; W32(esp, 0x954066u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954066: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 95406a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95406d: /* 95406d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95406f: je 0x9541b5 */
  if (zf) goto L_9541b5;
L_954075: /* 954075: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 954078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954079: xor ebx, ebx */
  ebx = 0;
/* 95407b: call 0x94f340 */
  esp -= 4; W32(esp, 0x954080u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 954080: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954083: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 954085: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 954089: jle 0x9541b5 */
  if ((zf || sf != of)) goto L_9541b5;
L_95408f: /* 95408f: nop  */
L_954090: /* 954090: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954092: je 0x954098 */
  if (zf) goto L_954098;
L_954094: /* 954094: xor ebp, ebp */
  ebp = 0;
/* 954096: jmp 0x9540a3 */
  goto L_9540a3;
L_954098: /* 954098: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 95409e: mov ebp, 1 */
  ebp = 0x1u;
L_9540a3: /* 9540a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9540a4: call 0x957e10 */
  esp -= 4; W32(esp, 0x9540a9u); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 9540a9: mov edi, eax */
  edi = eax;
/* 9540ab: mov eax, dword ptr [0xcf8424] */
  eax = R32((uint32_t)(0xcf8424u));
/* 9540b0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9540b3: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9540b5: je 0x954198 */
  if (zf) goto L_954198;
L_9540bb: /* 9540bb: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 9540bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9540c0: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 9540c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9540c5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9540c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9540ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9540cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9540ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9540d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9540d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9540d2: call 0x96fc50 */
  esp -= 4; W32(esp, 0x9540d7u); SPILL(); f_96fc50(); if (g_unwind) return; RELOAD();
/* 9540d7: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9540db: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 9540df: mov esi, eax */
  esi = eax;
/* 9540e1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9540e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9540e6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9540e9: jp 0x9540f3 */
  if (pf) goto L_9540f3;
L_9540eb: /* 9540eb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9540ef: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_9540f3: /* 9540f3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9540f7: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 9540fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9540fd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954100: jne 0x95417d */
  if (!zf) goto L_95417d;
L_954102: /* 954102: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 954107: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954109: je 0x95413d */
  if (zf) goto L_95413d;
L_95410b: /* 95410b: test dword ptr [esi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954112: jne 0x95413d */
  if (!zf) goto L_95413d;
L_954114: /* 954114: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 954118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954119: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 95411d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95411e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95411f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 954120: call 0x9631e0 */
  esp -= 4; W32(esp, 0x954125u); SPILL(); f_9631e0(); if (g_unwind) return; RELOAD();
/* 954125: mov esi, eax */
  esi = eax;
/* 954127: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95412a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95412c: je 0x954198 */
  if (zf) goto L_954198;
L_95412e: /* 95412e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954132: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 954136: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954138: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95413b: jne 0x954198 */
  if (!zf) goto L_954198;
L_95413d: /* 95413d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954141: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 954144: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954149: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95414c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 954150: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* 954158: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 95415c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95415f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 954161: push 0xaf6800 */
  { uint32_t v = 0xaf6800u; esp -= 4; W32(esp, v); }
/* 954166: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954167: call 0x953470 */
  esp -= 4; W32(esp, 0x95416cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95416c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 954170: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954173: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 954177: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 95417b: jmp 0x954198 */
  goto L_954198;
L_95417d: /* 95417d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95417f: je 0x954198 */
  if (zf) goto L_954198;
L_954181: /* 954181: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 954187: fchs  */
  ST0 = -ST0;
/* 954189: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 95418d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95418f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954192: jne 0x954198 */
  if (!zf) goto L_954198;
L_954194: /* 954194: inc dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x20u), r);
  }
L_954198: /* 954198: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 95419c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9541a0: mov esi, dword ptr [edx + ebx*4 + 8] */
  esi = R32((uint32_t)(edx + ebx*4 + 0x8u));
/* 9541a4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9541a5: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9541a7: jl 0x954090 */
  if ((sf != of)) goto L_954090;
L_9541ad: /* 9541ad: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9541b1: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
L_9541b5: /* 9541b5: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9541b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9541ba: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9541bfu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9541bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9541c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9541c4: je 0x9541ed */
  if (zf) goto L_9541ed;
L_9541c6: /* 9541c6: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 9541cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9541cd: jne 0x9541ed */
  if (!zf) goto L_9541ed;
L_9541cf: /* 9541cf: mov eax, dword ptr [0xcf84b4] */
  eax = R32((uint32_t)(0xcf84b4u));
/* 9541d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9541d6: je 0x9541ed */
  if (zf) goto L_9541ed;
L_9541d8: /* 9541d8: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9541de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9541df: push 0xaf6758 */
  { uint32_t v = 0xaf6758u; esp -= 4; W32(esp, v); }
/* 9541e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9541e5: call 0x953470 */
  esp -= 4; W32(esp, 0x9541eau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9541ea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9541ed: /* 9541ed: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9541f1: fcomp dword ptr [0xcf8a4c] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a4cu)));
  FPOP();
/* 9541f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9541f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9541fc: jne 0x954235 */
  if (!zf) goto L_954235;
L_9541fe: /* 9541fe: fld dword ptr [0xcf8a4c] */
  { double v = F32((uint32_t)(0xcf8a4cu)); FPUSH(v); }
/* 954204: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95420a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95420d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 954211: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 954215: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954218: push 0xaf66d0 */
  { uint32_t v = 0xaf66d0u; esp -= 4; W32(esp, v); }
/* 95421d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95421e: call 0x953470 */
  esp -= 4; W32(esp, 0x954223u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954223: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 954227: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 954228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954229: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 95422b: call 0x96e130 */
  esp -= 4; W32(esp, 0x954230u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 954230: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954233: jmp 0x954260 */
  goto L_954260;
L_954235: /* 954235: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 954239: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95423b: je 0x954260 */
  if (zf) goto L_954260;
L_95423d: /* 95423d: fld dword ptr [0xcf8a4c] */
  { double v = F32((uint32_t)(0xcf8a4cu)); FPUSH(v); }
/* 954243: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 954249: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95424b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95424e: jne 0x954260 */
  if (!zf) goto L_954260;
L_954250: /* 954250: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 954254: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 954255: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954256: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 954258: call 0x96e130 */
  esp -= 4; W32(esp, 0x95425du); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95425d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954260: /* 954260: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 954265: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954267: je 0x954287 */
  if (zf) goto L_954287;
L_954269: /* 954269: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 95426d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 954273: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954276: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954279: push 0xaf669c */
  { uint32_t v = 0xaf669cu; esp -= 4; W32(esp, v); }
/* 95427e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95427f: call 0x953470 */
  esp -= 4; W32(esp, 0x954284u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954284: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954287: /* 954287: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 954288: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 954289: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95428a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95428b: mov esp, ebp */
  esp = ebp;
/* 95428d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95428e: ret  */
  esp += 4; SPILL(); return;
}

void f_954290(void) {
  LOAD_REGS();
L_954290: /* 954290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 954291: mov ebp, esp */
  ebp = esp;
/* 954293: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 954296: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954299: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95429e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95429f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9542a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9542a1: mov esi, 1 */
  esi = 0x1u;
/* 9542a6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9542a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9542a9: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 9542b1: jl 0x9542c6 */
  if ((sf != of)) goto L_9542c6;
L_9542b3: /* 9542b3: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9542b8: push 0xaf6a44 */
  { uint32_t v = 0xaf6a44u; esp -= 4; W32(esp, v); }
/* 9542bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9542be: call 0x953470 */
  esp -= 4; W32(esp, 0x9542c3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9542c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9542c6: /* 9542c6: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 9542cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9542cd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9542d5: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9542dd: je 0x95446b */
  if (zf) goto L_95446b;
L_9542e3: /* 9542e3: mov eax, dword ptr [0xcf8534] */
  eax = R32((uint32_t)(0xcf8534u));
/* 9542e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9542ea: jne 0x954322 */
  if (!zf) goto L_954322;
L_9542ec: /* 9542ec: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 9542f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9542f3: jne 0x954322 */
  if (!zf) goto L_954322;
L_9542f5: /* 9542f5: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 9542fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9542fc: jne 0x954322 */
  if (!zf) goto L_954322;
L_9542fe: /* 9542fe: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 954303: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954305: jne 0x954322 */
  if (!zf) goto L_954322;
L_954307: /* 954307: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 95430c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95430e: jne 0x954322 */
  if (!zf) goto L_954322;
L_954310: /* 954310: mov eax, dword ptr [0xcf84b8] */
  eax = R32((uint32_t)(0xcf84b8u));
/* 954315: cmp eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954318: je 0x954322 */
  if (zf) goto L_954322;
L_95431a: /* 95431a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95431c: jne 0x95446b */
  if (!zf) goto L_95446b;
L_954322: /* 954322: cmp dword ptr [0xcf8438], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 954328: jl 0x95433e */
  if ((sf != of)) goto L_95433e;
L_95432a: /* 95432a: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 954330: push 0xaf6a08 */
  { uint32_t v = 0xaf6a08u; esp -= 4; W32(esp, v); }
/* 954335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954336: call 0x953470 */
  esp -= 4; W32(esp, 0x95433bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95433b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95433e: /* 95433e: call 0x957fe0 */
  esp -= 4; W32(esp, 0x954343u); SPILL(); f_957fe0(); if (g_unwind) return; RELOAD();
/* 954343: mov edi, dword ptr [0xcf8b74] */
  edi = R32((uint32_t)(0xcf8b74u));
/* 954349: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95434b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 95434f: je 0x95442e */
  if (zf) goto L_95442e;
L_954355: /* 954355: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954358: je 0x95442e */
  if (zf) goto L_95442e;
L_95435e: /* 95435e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 954361: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954363: je 0x954424 */
  if (zf) goto L_954424;
L_954369: /* 954369: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95436c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95436e: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 954371: je 0x954424 */
  if (zf) goto L_954424;
L_954377: /* 954377: mov eax, dword ptr [0xcf7898] */
  eax = R32((uint32_t)(0xcf7898u));
/* 95437c: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 954380: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 954383: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 954384: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954385: mov dword ptr [0xcf7898], eax */
  W32((uint32_t)(0xcf7898u), eax);
/* 95438a: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 95438d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95438e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95438f: call 0x96fa90 */
  esp -= 4; W32(esp, 0x954394u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 954394: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 954398: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 95439c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95439f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9543a1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9543a4: jne 0x9543ae */
  if (!zf) goto L_9543ae;
L_9543a6: /* 9543a6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9543aa: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_9543ae: /* 9543ae: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9543b2: fchs  */
  ST0 = -ST0;
/* 9543b4: fcomp dword ptr [0xcf859c] */
  fpu_com(ST0, F32((uint32_t)(0xcf859cu)));
  FPOP();
/* 9543ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9543bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9543bf: je 0x9543e2 */
  if (zf) goto L_9543e2;
L_9543c1: /* 9543c1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9543c5: fcomp dword ptr [0xcf859c] */
  fpu_com(ST0, F32((uint32_t)(0xcf859cu)));
  FPOP();
/* 9543cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9543cd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9543d0: je 0x9543e2 */
  if (zf) goto L_9543e2;
L_9543d2: /* 9543d2: cmp esi, dword ptr [0xcf8b68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9543d8: je 0x9543e2 */
  if (zf) goto L_9543e2;
L_9543da: /* 9543da: cmp edi, dword ptr [0xcf8b70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b70u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9543e0: jne 0x95441a */
  if (!zf) goto L_95441a;
L_9543e2: /* 9543e2: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 9543e5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9543e9: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9543ec: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9543ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9543f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9543f3: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9543f8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9543fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9543fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9543fd: call 0x95f210 */
  esp -= 4; W32(esp, 0x954402u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 954402: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 954408: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95440b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95440c: push 0xaf69d8 */
  { uint32_t v = 0xaf69d8u; esp -= 4; W32(esp, v); }
/* 954411: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954412: call 0x953470 */
  esp -= 4; W32(esp, 0x954417u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954417: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95441a: /* 95441a: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95441c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95441e: jne 0x954377 */
  if (!zf) goto L_954377;
L_954424: /* 954424: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 954426: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954428: jne 0x954355 */
  if (!zf) goto L_954355;
L_95442e: /* 95442e: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 954433: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954435: je 0x954454 */
  if (zf) goto L_954454;
L_954437: /* 954437: fld dword ptr [0xcf7990] */
  { double v = F32((uint32_t)(0xcf7990u)); FPUSH(v); }
/* 95443d: fcomp dword ptr [0xcf8bc4] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bc4u)));
  FPOP();
/* 954443: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954445: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954448: jne 0x954454 */
  if (!zf) goto L_954454;
L_95444a: /* 95444a: mov eax, dword ptr [0xcf8bc4] */
  eax = R32((uint32_t)(0xcf8bc4u));
/* 95444f: mov dword ptr [0xcf7990], eax */
  W32((uint32_t)(0xcf7990u), eax);
L_954454: /* 954454: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 954458: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 95445c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95445d: mov dword ptr [0xcf8bc4], ecx */
  W32((uint32_t)(0xcf8bc4u), ecx);
/* 954463: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x954468u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 954468: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95446b: /* 95446b: call 0x957ef0 */
  esp -= 4; W32(esp, 0x954470u); SPILL(); f_957ef0(); if (g_unwind) return; RELOAD();
/* 954470: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954472: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 954476: je 0x9545a7 */
  if (zf) goto L_9545a7;
L_95447c: /* 95447c: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95447f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954480: xor ebx, ebx */
  ebx = 0;
/* 954482: call 0x94f340 */
  esp -= 4; W32(esp, 0x954487u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 954487: mov ebp, eax */
  ebp = eax;
/* 954489: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95448c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95448e: jle 0x9545a7 */
  if ((zf || sf != of)) goto L_9545a7;
L_954494: /* 954494: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954496: je 0x954596 */
  if (zf) goto L_954596;
L_95449c: /* 95449c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95449d: call 0x957e10 */
  esp -= 4; W32(esp, 0x9544a2u); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 9544a2: mov esi, eax */
  esi = eax;
/* 9544a4: mov eax, dword ptr [0xcf8424] */
  eax = R32((uint32_t)(0xcf8424u));
/* 9544a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9544ac: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9544ae: je 0x954596 */
  if (zf) goto L_954596;
L_9544b4: /* 9544b4: mov edx, dword ptr [0xcf7a78] */
  edx = R32((uint32_t)(0xcf7a78u));
/* 9544ba: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 9544be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9544bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9544c1: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9544c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9544c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9544c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9544ca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9544cc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9544cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9544ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9544cf: mov dword ptr [0xcf7a78], edx */
  W32((uint32_t)(0xcf7a78u), edx);
/* 9544d5: call 0x96fc50 */
  esp -= 4; W32(esp, 0x9544dau); SPILL(); f_96fc50(); if (g_unwind) return; RELOAD();
/* 9544da: mov edi, dword ptr [0xcf7808] */
  edi = R32((uint32_t)(0xcf7808u));
/* 9544e0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 9544e4: mov ecx, eax */
  ecx = eax;
/* 9544e6: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9544e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9544eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9544ed: mov dword ptr [0xcf7808], edi */
  W32((uint32_t)(0xcf7808u), edi);
/* 9544f3: je 0x95454d */
  if (zf) goto L_95454d;
L_9544f5: /* 9544f5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9544f9: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 9544fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9544ff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954502: jne 0x95454d */
  if (!zf) goto L_95454d;
L_954504: /* 954504: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 954509: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95450b: je 0x954545 */
  if (zf) goto L_954545;
L_95450d: /* 95450d: test dword ptr [ecx + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954514: jne 0x954545 */
  if (!zf) goto L_954545;
L_954516: /* 954516: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 95451a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95451b: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 95451f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 954522: call 0x9631e0 */
  esp -= 4; W32(esp, 0x954527u); SPILL(); f_9631e0(); if (g_unwind) return; RELOAD();
/* 954527: mov ecx, eax */
  ecx = eax;
/* 954529: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95452c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95452e: je 0x95453f */
  if (zf) goto L_95453f;
L_954530: /* 954530: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954534: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 954538: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95453a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95453d: je 0x954545 */
  if (zf) goto L_954545;
L_95453f: /* 95453f: inc dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 954543: jmp 0x95454d */
  goto L_95454d;
L_954545: /* 954545: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 954549: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_95454d: /* 95454d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954551: fcomp dword ptr [0xcf859c] */
  fpu_com(ST0, F32((uint32_t)(0xcf859cu)));
  FPOP();
/* 954557: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954559: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95455c: je 0x95456a */
  if (zf) goto L_95456a;
L_95455e: /* 95455e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954560: je 0x954596 */
  if (zf) goto L_954596;
L_954562: /* 954562: cmp ecx, dword ptr [0xcf8b68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954568: jne 0x954596 */
  if (!zf) goto L_954596;
L_95456a: /* 95456a: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 95456d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954571: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954572: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954575: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 954579: call 0x95f210 */
  esp -= 4; W32(esp, 0x95457eu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 95457e: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 954584: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954587: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954588: push 0xaf69b0 */
  { uint32_t v = 0xaf69b0u; esp -= 4; W32(esp, v); }
/* 95458d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95458e: call 0x953470 */
  esp -= 4; W32(esp, 0x954593u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954593: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954596: /* 954596: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95459a: mov edi, dword ptr [eax + ebx*4 + 8] */
  edi = R32((uint32_t)(eax + ebx*4 + 0x8u));
/* 95459e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 95459f: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9545a1: jl 0x954494 */
  if ((sf != of)) goto L_954494;
L_9545a7: /* 9545a7: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9545ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9545ac: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9545b1u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9545b1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9545b5: fsub dword ptr [0xcf8bbc] */
  ST0 = ST0 - (F32((uint32_t)(0xcf8bbcu)));
/* 9545bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9545be: fstp dword ptr [0xcf7934] */
  WF32((uint32_t)(0xcf7934u), ST0); FPOP();
/* 9545c4: fld dword ptr [0xcf7938] */
  { double v = F32((uint32_t)(0xcf7938u)); FPUSH(v); }
/* 9545ca: fcomp dword ptr [0xcf8bbc] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bbcu)));
  FPOP();
/* 9545d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9545d2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9545d5: jp 0x9545e3 */
  if (pf) goto L_9545e3;
L_9545d7: /* 9545d7: mov edx, dword ptr [0xcf8bbc] */
  edx = R32((uint32_t)(0xcf8bbcu));
/* 9545dd: mov dword ptr [0xcf7938], edx */
  W32((uint32_t)(0xcf7938u), edx);
L_9545e3: /* 9545e3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9545e7: mov dword ptr [0xcf8bbc], eax */
  W32((uint32_t)(0xcf8bbcu), eax);
/* 9545ec: call 0x957a20 */
  esp -= 4; W32(esp, 0x9545f1u); SPILL(); f_957a20(); if (g_unwind) return; RELOAD();
/* 9545f1: mov ecx, dword ptr [0xcf8438] */
  ecx = R32((uint32_t)(0xcf8438u));
/* 9545f7: mov eax, 1 */
  eax = 0x1u;
/* 9545fc: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9545fe: mov dword ptr [0xcf8bb8], eax */
  W32((uint32_t)(0xcf8bb8u), eax);
/* 954603: jl 0x954632 */
  if ((sf != of)) goto L_954632;
L_954605: /* 954605: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 954609: fld dword ptr [0xcf8bc4] */
  { double v = F32((uint32_t)(0xcf8bc4u)); FPUSH(v); }
/* 95460f: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 954615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954616: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954619: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 95461d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 954621: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954624: push 0xaf6960 */
  { uint32_t v = 0xaf6960u; esp -= 4; W32(esp, v); }
/* 954629: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95462a: call 0x953470 */
  esp -= 4; W32(esp, 0x95462fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95462f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954632: /* 954632: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 954633: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 954634: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 954635: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 954636: mov esp, ebp */
  esp = ebp;
/* 954638: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 954639: ret  */
  esp += 4; SPILL(); return;
}
