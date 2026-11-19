#include "recomp.h"
#include "rec_mod.h"

void f_958f30(void) {
  LOAD_REGS();
L_958f30: /* 958f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 958f34: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 958f37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958f38: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958f39: xor ebx, ebx */
  ebx = 0;
/* 958f3b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958f3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958f3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958f3f: je 0x958faa */
  if (zf) goto L_958faa;
L_958f41: /* 958f41: mov edx, dword ptr [0xcf8b4c] */
  edx = R32((uint32_t)(0xcf8b4cu));
L_958f47: /* 958f47: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958f49: je 0x959186 */
  if (zf) goto L_959186;
L_958f4f: /* 958f4f: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_958f53: /* 958f53: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 958f57: cmp dword ptr [ecx + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958f5a: je 0x959186 */
  if (zf) goto L_959186;
L_958f60: /* 958f60: inc dword ptr [0xcf8bfc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bfcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8bfcu), r);
  }
/* 958f66: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 958f69: xor edi, edi */
  edi = 0;
/* 958f6b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958f6d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 958f71: je 0x9590e7 */
  if (zf) goto L_9590e7;
L_958f77: /* 958f77: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 958f7a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958f7c: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 958f7f: je 0x9590e7 */
  if (zf) goto L_9590e7;
L_958f85: /* 958f85: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 958f88: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958f8a: jne 0x95905d */
  if (!zf) goto L_95905d;
L_958f90: /* 958f90: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 958f94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958f96: jne 0x95905d */
  if (!zf) goto L_95905d;
L_958f9c: /* 958f9c: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 958fa0: mov edi, 1 */
  edi = 0x1u;
/* 958fa5: jmp 0x9590d8 */
  goto L_9590d8;
L_958faa: /* 958faa: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 958fb0: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958fb2: je 0x958fe6 */
  if (zf) goto L_958fe6;
L_958fb4: /* 958fb4: mov eax, edx */
  eax = edx;
/* 958fb6: mov esi, 0x1000 */
  esi = 0x1000u;
/* 958fbb: nop  */
/* 958fbc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_958fc0: /* 958fc0: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 958fc3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958fc5: je 0x958fe6 */
  if (zf) goto L_958fe6;
L_958fc7: /* 958fc7: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 958fca: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 958fcd: test dword ptr [edi + 0x3c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958fd0: je 0x95902c */
  if (zf) goto L_95902c;
L_958fd2: /* 958fd2: test dword ptr [eax + 0x3c], 0x108000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x108000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958fd9: jne 0x95902c */
  if (!zf) goto L_95902c;
L_958fdb: /* 958fdb: cmp dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958fde: je 0x95902c */
  if (zf) goto L_95902c;
L_958fe0: /* 958fe0: mov eax, ecx */
  eax = ecx;
/* 958fe2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958fe4: jne 0x958fc0 */
  if (!zf) goto L_958fc0;
L_958fe6: /* 958fe6: cmp dword ptr [0xcf8454], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958fec: je 0x958f47 */
  if (zf) goto L_958f47;
L_958ff2: /* 958ff2: cmp dword ptr [0xcf8c00], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8c00u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958ff8: je 0x958f47 */
  if (zf) goto L_958f47;
L_958ffe: /* 958ffe: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959005: jl 0x9591bc */
  if ((sf != of)) goto L_9591bc;
L_95900b: /* 95900b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 959011: push 0xaf8c08 */
  { uint32_t v = 0xaf8c08u; esp -= 4; W32(esp, v); }
/* 959016: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959017: call 0x953470 */
  esp -= 4; W32(esp, 0x95901cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95901c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95901f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 959020: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 959021: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 959022: mov eax, 1 */
  eax = 0x1u;
/* 959027: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 959028: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95902b: ret  */
  esp += 4; SPILL(); return;
L_95902c: /* 95902c: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959033: mov dword ptr [0xcf8c00], ebx */
  W32((uint32_t)(0xcf8c00u), ebx);
/* 959039: jl 0x959053 */
  if ((sf != of)) goto L_959053;
L_95903b: /* 95903b: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 95903e: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 959044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959045: push 0xaf8bdc */
  { uint32_t v = 0xaf8bdcu; esp -= 4; W32(esp, v); }
/* 95904a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95904b: call 0x953470 */
  esp -= 4; W32(esp, 0x959050u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959050: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959053: /* 959053: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 959054: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 959055: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 959056: xor eax, eax */
  eax = 0;
/* 959058: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 959059: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95905c: ret  */
  esp += 4; SPILL(); return;
L_95905d: /* 95905d: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 959060: mov esi, dword ptr [eax + edi*4 + 4] */
  esi = R32((uint32_t)(eax + edi*4 + 0x4u));
/* 959064: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 95906a: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 95906d: mov ecx, dword ptr [0xcf789c] */
  ecx = R32((uint32_t)(0xcf789cu));
/* 959073: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 959077: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 959078: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 959079: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95907a: mov dword ptr [0xcf789c], ecx */
  W32((uint32_t)(0xcf789cu), ecx);
/* 959080: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 959083: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959085: call 0x96fa90 */
  esp -= 4; W32(esp, 0x95908au); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 95908a: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 959090: fchs  */
  ST0 = -ST0;
/* 959092: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959095: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 959099: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95909b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95909e: jp 0x9590d8 */
  if (pf) goto L_9590d8;
L_9590a0: /* 9590a0: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 9590a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9590a7: mov dword ptr [0xcf8c00], 0 */
  W32((uint32_t)(0xcf8c00u), 0x0u);
/* 9590b1: je 0x9591c9 */
  if (zf) goto L_9591c9;
L_9590b7: /* 9590b7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9590bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9590bd: jne 0x9591c9 */
  if (!zf) goto L_9591c9;
L_9590c3: /* 9590c3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9590c7: fcomp dword ptr [0xcf8a14] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a14u)));
  FPOP();
/* 9590cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9590cf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9590d2: je 0x9591c9 */
  if (zf) goto L_9591c9;
L_9590d8: /* 9590d8: mov ebx, dword ptr [ebp] */
  ebx = R32((uint32_t)(ebp));
/* 9590db: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9590dd: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9590e1: jne 0x958f85 */
  if (!zf) goto L_958f85;
L_9590e7: /* 9590e7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9590eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9590ed: jne 0x959171 */
  if (!zf) goto L_959171;
L_9590f3: /* 9590f3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9590f7: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 9590fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9590fc: je 0x959171 */
  if (zf) goto L_959171;
L_9590fe: /* 9590fe: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 959101: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 959104: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959106: je 0x959171 */
  if (zf) goto L_959171;
L_959108: /* 959108: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
/* 95910e: mov edi, edi */
  edi = edi;
L_959110: /* 959110: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* 959113: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 959116: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959118: jne 0x959122 */
  if (!zf) goto L_959122;
L_95911a: /* 95911a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 95911c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95911e: jne 0x959110 */
  if (!zf) goto L_959110;
L_959120: /* 959120: jmp 0x959171 */
  goto L_959171;
L_959122: /* 959122: inc dword ptr [0xcf789c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf789cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf789cu), r);
  }
/* 959128: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 95912c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95912d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95912e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 959131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959132: call 0x96fa90 */
  esp -= 4; W32(esp, 0x959137u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 959137: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 95913d: fchs  */
  ST0 = -ST0;
/* 95913f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959142: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 959146: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 959148: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95914b: jp 0x959171 */
  if (pf) goto L_959171;
L_95914d: /* 95914d: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 959152: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959154: mov dword ptr [0xcf8c00], 0 */
  W32((uint32_t)(0xcf8c00u), 0x0u);
/* 95915e: je 0x9591c9 */
  if (zf) goto L_9591c9;
L_959160: /* 959160: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 959164: fcomp dword ptr [0xcf8a14] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a14u)));
  FPOP();
/* 95916a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95916c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95916f: je 0x9591c9 */
  if (zf) goto L_9591c9;
L_959171: /* 959171: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 959175: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 959178: xor ebx, ebx */
  ebx = 0;
/* 95917a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95917c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 959180: jne 0x958f53 */
  if (!zf) goto L_958f53;
L_959186: /* 959186: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95918d: jl 0x9591bc */
  if ((sf != of)) goto L_9591bc;
L_95918f: /* 95918f: cmp dword ptr [0xcf8454], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959195: je 0x9591a2 */
  if (zf) goto L_9591a2;
L_959197: /* 959197: cmp dword ptr [esp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95919b: mov eax, 0xaf8bb0 */
  eax = 0xaf8bb0u;
/* 9591a0: je 0x9591a7 */
  if (zf) goto L_9591a7;
L_9591a2: /* 9591a2: mov eax, 0xaf8ba0 */
  eax = 0xaf8ba0u;
L_9591a7: /* 9591a7: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9591ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9591ae: push 0xaf8b80 */
  { uint32_t v = 0xaf8b80u; esp -= 4; W32(esp, v); }
/* 9591b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9591b4: call 0x953470 */
  esp -= 4; W32(esp, 0x9591b9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9591b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9591bc: /* 9591bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9591bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9591be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9591bf: mov eax, 1 */
  eax = 0x1u;
/* 9591c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9591c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9591c8: ret  */
  esp += 4; SPILL(); return;
L_9591c9: /* 9591c9: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9591d0: jl 0x959205 */
  if ((sf != of)) goto L_959205;
L_9591d2: /* 9591d2: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9591d5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9591d9: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 9591dc: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9591e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9591e3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9591e6: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9591eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9591ec: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 9591ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9591f0: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9591f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9591f7: push 0xaf8b38 */
  { uint32_t v = 0xaf8b38u; esp -= 4; W32(esp, v); }
/* 9591fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9591fd: call 0x953470 */
  esp -= 4; W32(esp, 0x959202u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959202: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959205: /* 959205: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 959206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 959207: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 959208: xor eax, eax */
  eax = 0;
/* 95920a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95920b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95920e: ret  */
  esp += 4; SPILL(); return;
}

void f_959210(void) {
  LOAD_REGS();
L_959210: /* 959210: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959211: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959212: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959213: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 959217: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 95921a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 95921d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95921f: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 959222: je 0x959289 */
  if (zf) goto L_959289;
L_959224: /* 959224: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 959227: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 959229: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95922b: je 0x959289 */
  if (zf) goto L_959289;
L_95922d: /* 95922d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_959230: /* 959230: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 959233: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 959236: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959238: jne 0x95923d */
  if (!zf) goto L_95923d;
L_95923a: /* 95923a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_95923d: /* 95923d: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95923f: jne 0x959245 */
  if (!zf) goto L_959245;
L_959241: /* 959241: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959243: jne 0x95924f */
  if (!zf) goto L_95924f;
L_959245: /* 959245: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 959247: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959249: jne 0x959230 */
  if (!zf) goto L_959230;
L_95924b: /* 95924b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95924c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95924d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95924e: ret  */
  esp += 4; SPILL(); return;
L_95924f: /* 95924f: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 959252: or edx, 0x4000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 959258: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 95925b: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959262: mov eax, edx */
  eax = edx;
/* 959264: jl 0x959289 */
  if ((sf != of)) goto L_959289;
L_959266: /* 959266: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95926c: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 959271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959272: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 959275: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95927a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95927b: push 0xaf8c44 */
  { uint32_t v = 0xaf8c44u; esp -= 4; W32(esp, v); }
/* 959280: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959281: call 0x953470 */
  esp -= 4; W32(esp, 0x959286u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959286: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959289: /* 959289: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95928a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95928b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95928c: ret  */
  esp += 4; SPILL(); return;
}

void f_959290(void) {
  LOAD_REGS();
L_959290: /* 959290: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959297: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959298: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 95929c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95929d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95929e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95929f: jl 0x9592b9 */
  if ((sf != of)) goto L_9592b9;
L_9592a1: /* 9592a1: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 9592a4: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9592aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9592ab: push 0xaf8cec */
  { uint32_t v = 0xaf8cecu; esp -= 4; W32(esp, v); }
/* 9592b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9592b1: call 0x953470 */
  esp -= 4; W32(esp, 0x9592b6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9592b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9592b9: /* 9592b9: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 9592bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9592be: je 0x959367 */
  if (zf) goto L_959367;
L_9592c4: /* 9592c4: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9592c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9592c9: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 9592cc: je 0x959367 */
  if (zf) goto L_959367;
L_9592d2: /* 9592d2: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
L_9592d8: /* 9592d8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9592db: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9592dc: mov dword ptr [0xcf8bfc], edx */
  W32((uint32_t)(0xcf8bfcu), edx);
/* 9592e2: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9592e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9592e7: je 0x959304 */
  if (zf) goto L_959304;
L_9592e9: /* 9592e9: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 9592ec: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9592ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9592f0: je 0x959304 */
  if (zf) goto L_959304;
L_9592f2: /* 9592f2: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9592f5: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 9592f8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9592fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9592fc: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
/* 959302: jne 0x9592f2 */
  if (!zf) goto L_9592f2;
L_959304: /* 959304: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 959307: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959309: je 0x959324 */
  if (zf) goto L_959324;
L_95930b: /* 95930b: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95930e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 959310: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959312: je 0x959324 */
  if (zf) goto L_959324;
L_959314: /* 959314: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 959317: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95931a: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95931c: jne 0x95935d */
  if (!zf) goto L_95935d;
L_95931e: /* 95931e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 959320: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959322: jne 0x959314 */
  if (!zf) goto L_959314;
L_959324: /* 959324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 959326: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 959328: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959329: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95932a: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95932fu); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95932f: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 959334: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959337: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95933a: jl 0x9593ad */
  if ((sf != of)) goto L_9593ad;
L_95933c: /* 95933c: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95933f: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 959342: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 959348: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95934a: push 0xaf8cb0 */
  { uint32_t v = 0xaf8cb0u; esp -= 4; W32(esp, v); }
/* 95934f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959350: call 0x953470 */
  esp -= 4; W32(esp, 0x959355u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959355: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959358: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 959359: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95935a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95935b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95935c: ret  */
  esp += 4; SPILL(); return;
L_95935d: /* 95935d: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95935f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959361: jne 0x9592d8 */
  if (!zf) goto L_9592d8;
L_959367: /* 959367: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 95936a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95936b: call 0x94f340 */
  esp -= 4; W32(esp, 0x959370u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 959370: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 959376: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959379: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95937b: jge 0x9593ad */
  if ((sf == of)) goto L_9593ad;
L_95937d: /* 95937d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95937f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 959381: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959382: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959383: call 0x958ca0 */
  esp -= 4; W32(esp, 0x959388u); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 959388: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95938d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959390: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959393: jl 0x9593ad */
  if ((sf != of)) goto L_9593ad;
L_959395: /* 959395: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 959398: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95939e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95939f: push 0xaf8c7c */
  { uint32_t v = 0xaf8c7cu; esp -= 4; W32(esp, v); }
/* 9593a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9593a5: call 0x953470 */
  esp -= 4; W32(esp, 0x9593aau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9593aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9593ad: /* 9593ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9593ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9593af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9593b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9593b1: ret  */
  esp += 4; SPILL(); return;
}

void f_9593c0(void) {
  LOAD_REGS();
L_9593c0: /* 9593c0: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9593c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9593c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9593c9: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 9593cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9593ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9593cf: jl 0x9593fa */
  if ((sf != of)) goto L_9593fa;
L_9593d1: /* 9593d1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9593d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9593d7: je 0x9593de */
  if (zf) goto L_9593de;
L_9593d9: /* 9593d9: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 9593dc: jmp 0x9593e1 */
  goto L_9593e1;
L_9593de: /* 9593de: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_9593e1: /* 9593e1: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9593e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9593e8: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 9593eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9593ec: push 0xaf8e10 */
  { uint32_t v = 0xaf8e10u; esp -= 4; W32(esp, v); }
/* 9593f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9593f2: call 0x953470 */
  esp -= 4; W32(esp, 0x9593f7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9593f7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9593fa: /* 9593fa: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 9593fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9593fe: call 0x94f340 */
  esp -= 4; W32(esp, 0x959403u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 959403: mov esi, eax */
  esi = eax;
/* 959405: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95940a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95940d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95940f: jge 0x959448 */
  if ((sf == of)) goto L_959448;
L_959411: /* 959411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 959413: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 959415: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959416: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959417: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95941cu); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95941c: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 959421: mov ebx, 2 */
  ebx = 0x2u;
/* 959426: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959429: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95942b: jl 0x95944d */
  if ((sf != of)) goto L_95944d;
L_95942d: /* 95942d: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 959430: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 959436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959438: push 0xaf8dc8 */
  { uint32_t v = 0xaf8dc8u; esp -= 4; W32(esp, v); }
/* 95943d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95943e: call 0x953470 */
  esp -= 4; W32(esp, 0x959443u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959443: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959446: jmp 0x95944d */
  goto L_95944d;
L_959448: /* 959448: mov ebx, 2 */
  ebx = 0x2u;
L_95944d: /* 95944d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 959451: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959453: jne 0x959459 */
  if (!zf) goto L_959459;
L_959455: /* 959455: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
L_959459: /* 959459: inc dword ptr [0xcf8bfc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bfcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8bfcu), r);
  }
/* 95945f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 959462: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959464: je 0x959482 */
  if (zf) goto L_959482;
L_959466: /* 959466: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 959469: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95946b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95946d: je 0x959482 */
  if (zf) goto L_959482;
L_95946f: /* 95946f: nop  */
L_959470: /* 959470: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
/* 959476: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 959479: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 95947c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95947e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959480: jne 0x959470 */
  if (!zf) goto L_959470;
L_959482: /* 959482: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 959486: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 959489: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95948b: je 0x9594fa */
  if (zf) goto L_9594fa;
L_95948d: /* 95948d: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 959490: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959492: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 959495: je 0x9594fa */
  if (zf) goto L_9594fa;
L_959497: /* 959497: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95949a: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95949c: je 0x9594f4 */
  if (zf) goto L_9594f4;
L_95949e: /* 95949e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9594a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9594a3: je 0x9594c2 */
  if (zf) goto L_9594c2;
L_9594a5: /* 9594a5: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 9594a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9594aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9594ac: je 0x9594c2 */
  if (zf) goto L_9594c2;
L_9594ae: /* 9594ae: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
L_9594b4: /* 9594b4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9594b7: cmp dword ptr [eax + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9594ba: jne 0x9594f4 */
  if (!zf) goto L_9594f4;
L_9594bc: /* 9594bc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9594be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9594c0: jne 0x9594b4 */
  if (!zf) goto L_9594b4;
L_9594c2: /* 9594c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9594c4: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 9594c6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9594c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9594c8: call 0x958ca0 */
  esp -= 4; W32(esp, 0x9594cdu); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 9594cd: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9594d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9594d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9594d7: jl 0x9594f4 */
  if ((sf != of)) goto L_9594f4;
L_9594d9: /* 9594d9: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 9594dc: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 9594df: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9594e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9594e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9594e6: push 0xaf8d88 */
  { uint32_t v = 0xaf8d88u; esp -= 4; W32(esp, v); }
/* 9594eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9594ec: call 0x953470 */
  esp -= 4; W32(esp, 0x9594f1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9594f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9594f4: /* 9594f4: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 9594f6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9594f8: jne 0x959497 */
  if (!zf) goto L_959497;
L_9594fa: /* 9594fa: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9594fe: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 959501: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959503: je 0x959569 */
  if (zf) goto L_959569;
L_959505: /* 959505: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 959508: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95950a: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95950d: je 0x959569 */
  if (zf) goto L_959569;
L_95950f: /* 95950f: nop  */
L_959510: /* 959510: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 959513: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959515: je 0x959563 */
  if (zf) goto L_959563;
L_959517: /* 959517: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 95951a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95951b: call 0x94f340 */
  esp -= 4; W32(esp, 0x959520u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 959520: mov edi, eax */
  edi = eax;
/* 959522: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 959527: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95952a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95952c: jge 0x959563 */
  if ((sf == of)) goto L_959563;
L_95952e: /* 95952e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 959530: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 959532: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959533: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959534: call 0x958ca0 */
  esp -= 4; W32(esp, 0x959539u); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 959539: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95953e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959541: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959544: jl 0x959563 */
  if ((sf != of)) goto L_959563;
L_959546: /* 959546: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 959549: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95954c: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 959552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959553: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959555: push 0xaf8d30 */
  { uint32_t v = 0xaf8d30u; esp -= 4; W32(esp, v); }
/* 95955a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95955b: call 0x953470 */
  esp -= 4; W32(esp, 0x959560u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959560: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959563: /* 959563: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 959565: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959567: jne 0x959510 */
  if (!zf) goto L_959510;
L_959569: /* 959569: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95956a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95956b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95956c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95956d: ret  */
  esp += 4; SPILL(); return;
}

void f_959570(void) {
  LOAD_REGS();
L_959570: /* 959570: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 959575: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 959578: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95957b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95957c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95957d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95957e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95957f: jl 0x959634 */
  if ((sf != of)) goto L_959634;
L_959585: /* 959585: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 959589: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 95958c: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 959592: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 959598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959599: push 0xaf8f38 */
  { uint32_t v = 0xaf8f38u; esp -= 4; W32(esp, v); }
/* 95959e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95959f: call 0x953470 */
  esp -= 4; W32(esp, 0x9595a4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9595a4: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 9595a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9595ab: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9595ad: je 0x9595e6 */
  if (zf) goto L_9595e6;
L_9595af: /* 9595af: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9595b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9595b4: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
/* 9595b7: je 0x9595e6 */
  if (zf) goto L_9595e6;
L_9595b9: /* 9595b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9595c0: /* 9595c0: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 9595c3: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9595c9: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9595ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9595cf: push 0xaf88c4 */
  { uint32_t v = 0xaf88c4u; esp -= 4; W32(esp, v); }
/* 9595d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9595d5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9595d8: call 0x953470 */
  esp -= 4; W32(esp, 0x9595ddu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9595dd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9595df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9595e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9595e4: jne 0x9595c0 */
  if (!zf) goto L_9595c0;
L_9595e6: /* 9595e6: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 9595ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9595ec: je 0x95961e */
  if (zf) goto L_95961e;
L_9595ee: /* 9595ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9595f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9595f3: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 9595f6: je 0x95961e */
  if (zf) goto L_95961e;
L_9595f8: /* 9595f8: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 9595fb: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 959600: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 959606: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959607: push 0xaf8f30 */
  { uint32_t v = 0xaf8f30u; esp -= 4; W32(esp, v); }
/* 95960c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95960d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 959610: call 0x953470 */
  esp -= 4; W32(esp, 0x959615u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959615: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 959617: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95961a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95961c: jne 0x9595f8 */
  if (!zf) goto L_9595f8;
L_95961e: /* 95961e: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 959624: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 959629: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95962a: call 0x953470 */
  esp -= 4; W32(esp, 0x95962fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95962f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959632: jmp 0x95963c */
  goto L_95963c;
L_959634: /* 959634: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 959638: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_95963c: /* 95963c: xor ebx, ebx */
  ebx = 0;
/* 95963e: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959640: je 0x95965c */
  if (zf) goto L_95965c;
L_959642: /* 959642: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 959645: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959647: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 95964a: je 0x95965c */
  if (zf) goto L_95965c;
L_95964c: /* 95964c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_959650: /* 959650: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 959653: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 959656: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 959658: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95965a: jne 0x959650 */
  if (!zf) goto L_959650;
L_95965c: /* 95965c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95965e: je 0x959698 */
  if (zf) goto L_959698;
L_959660: /* 959660: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 959663: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959665: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 959668: je 0x959698 */
  if (zf) goto L_959698;
L_95966a: /* 95966a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_959670: /* 959670: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 959672: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 959675: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959677: je 0x959692 */
  if (zf) goto L_959692;
L_959679: /* 959679: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95967c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95967e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959680: je 0x959692 */
  if (zf) goto L_959692;
L_959682: /* 959682: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 959685: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 959688: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 959689: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 95968c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95968e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959690: jne 0x959682 */
  if (!zf) goto L_959682;
L_959692: /* 959692: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 959694: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959696: jne 0x959670 */
  if (!zf) goto L_959670;
L_959698: /* 959698: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95969a: je 0x9596dc */
  if (zf) goto L_9596dc;
L_95969c: /* 95969c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 95969f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9596a1: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
/* 9596a4: je 0x9596dc */
  if (zf) goto L_9596dc;
L_9596a6: /* 9596a6: mov edi, esi */
  edi = esi;
/* 9596a8: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9596aa: sub edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9596ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9596b0: /* 9596b0: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 9596b3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9596b6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9596b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9596bb: jne 0x9596d2 */
  if (!zf) goto L_9596d2;
L_9596bd: /* 9596bd: mov edx, edi */
  edx = edi;
/* 9596bf: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 9596c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9596c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9596c4: call 0x94eae0 */
  esp -= 4; W32(esp, 0x9596c9u); SPILL(); f_94eae0(); if (g_unwind) return; RELOAD();
/* 9596c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9596cc: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9596cf: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_9596d2: /* 9596d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9596d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9596d6: jne 0x9596b0 */
  if (!zf) goto L_9596b0;
L_9596d8: /* 9596d8: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_9596dc: /* 9596dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9596dd: call 0x94f340 */
  esp -= 4; W32(esp, 0x9596e2u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9596e2: mov ebx, dword ptr [0xcf8bfc] */
  ebx = R32((uint32_t)(0xcf8bfcu));
/* 9596e8: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9596ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9596eb: mov dword ptr [0xcf8bfc], ebx */
  W32((uint32_t)(0xcf8bfcu), ebx);
/* 9596f1: call 0x94f340 */
  esp -= 4; W32(esp, 0x9596f6u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9596f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9596f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9596fb: jne 0x959732 */
  if (!zf) goto L_959732;
L_9596fd: /* 9596fd: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959704: jl 0x959728 */
  if ((sf != of)) goto L_959728;
L_959706: /* 959706: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95970a: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 95970d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 959713: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 959719: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95971a: push 0xaf8efc */
  { uint32_t v = 0xaf8efcu; esp -= 4; W32(esp, v); }
/* 95971f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959720: call 0x953470 */
  esp -= 4; W32(esp, 0x959725u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959728: /* 959728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 959729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95972a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95972b: xor eax, eax */
  eax = 0;
/* 95972d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95972e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959731: ret  */
  esp += 4; SPILL(); return;
L_959732: /* 959732: push 0x959900 */
  { uint32_t v = 0x959900u; esp -= 4; W32(esp, v); }
/* 959737: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 959739: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95973a: lea ebx, [ebp + 4] */
  ebx = (uint32_t)(ebp + 0x4u);
/* 95973d: call 0x94f340 */
  esp -= 4; W32(esp, 0x959742u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 959742: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959745: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959746: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959747: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x95974du); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 95974d: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 959752: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959755: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959757: je 0x95978c */
  if (zf) goto L_95978c;
L_959759: /* 959759: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95975a: call 0x94f340 */
  esp -= 4; W32(esp, 0x95975fu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95975f: mov esi, dword ptr [0xcf791c] */
  esi = R32((uint32_t)(0xcf791cu));
/* 959765: mov edx, dword ptr [0xcf792c] */
  edx = R32((uint32_t)(0xcf792cu));
/* 95976b: mov ecx, dword ptr [0xcf7924] */
  ecx = R32((uint32_t)(0xcf7924u));
/* 959771: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959774: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 959775: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 959777: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959779: mov dword ptr [0xcf791c], esi */
  W32((uint32_t)(0xcf791cu), esi);
/* 95977f: mov dword ptr [0xcf792c], edx */
  W32((uint32_t)(0xcf792cu), edx);
/* 959785: jge 0x95978c */
  if ((sf == of)) goto L_95978c;
L_959787: /* 959787: mov dword ptr [0xcf7924], eax */
  W32((uint32_t)(0xcf7924u), eax);
L_95978c: /* 95978c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95978d: call 0x94f340 */
  esp -= 4; W32(esp, 0x959792u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 959792: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959793: call 0x957bd0 */
  esp -= 4; W32(esp, 0x959798u); SPILL(); f_957bd0(); if (g_unwind) return; RELOAD();
/* 959798: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 95979c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95979f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9597a1: mov ebp, eax */
  ebp = eax;
/* 9597a3: je 0x9597cf */
  if (zf) goto L_9597cf;
L_9597a5: /* 9597a5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9597a8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9597ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9597ad: je 0x9597cf */
  if (zf) goto L_9597cf;
L_9597af: /* 9597af: nop  */
L_9597b0: /* 9597b0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9597b4: mov edx, dword ptr [0xcf8c10] */
  edx = R32((uint32_t)(0xcf8c10u));
/* 9597ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9597bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9597bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9597bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9597be: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9597c1: call 0x95a410 */
  esp -= 4; W32(esp, 0x9597c6u); SPILL(); f_95a410(); if (g_unwind) return; RELOAD();
/* 9597c6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9597c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9597cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9597cd: jne 0x9597b0 */
  if (!zf) goto L_9597b0;
L_9597cf: /* 9597cf: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9597d3: xor edi, edi */
  edi = 0;
/* 9597d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9597d7: je 0x959850 */
  if (zf) goto L_959850;
L_9597d9: /* 9597d9: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 9597db: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9597dd: je 0x959850 */
  if (zf) goto L_959850;
L_9597df: /* 9597df: nop  */
L_9597e0: /* 9597e0: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9597e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9597e4: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 9597e8: call 0x95da30 */
  esp -= 4; W32(esp, 0x9597edu); SPILL(); f_95da30(); if (g_unwind) return; RELOAD();
/* 9597ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9597f0: xor esi, esi */
  esi = 0;
/* 9597f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9597f4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9597f8: je 0x959835 */
  if (zf) goto L_959835;
L_9597fa: /* 9597fa: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9597fd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9597ff: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 959802: je 0x959835 */
  if (zf) goto L_959835;
L_959804: /* 959804: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 959808: mov edx, dword ptr [0xcf8c10] */
  edx = R32((uint32_t)(0xcf8c10u));
/* 95980e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 959812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959813: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959814: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959815: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959816: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959817: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959818: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95981b: call 0x95a460 */
  esp -= 4; W32(esp, 0x959820u); SPILL(); f_95a460(); if (g_unwind) return; RELOAD();
/* 959820: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959823: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959825: jne 0x95982f */
  if (!zf) goto L_95982f;
L_959827: /* 959827: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 959829: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95982b: jne 0x959804 */
  if (!zf) goto L_959804;
L_95982d: /* 95982d: jmp 0x959835 */
  goto L_959835;
L_95982f: /* 95982f: inc dword ptr [0xcf78e4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf78e4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf78e4u), r);
  }
L_959835: /* 959835: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 959839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95983a: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95983fu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95983f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959842: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959844: je 0x9598a5 */
  if (zf) goto L_9598a5;
L_959846: /* 959846: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 95984a: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95984c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95984e: jne 0x9597e0 */
  if (!zf) goto L_9597e0;
L_959850: /* 959850: mov ecx, dword ptr [0xcf78ec] */
  ecx = R32((uint32_t)(0xcf78ecu));
/* 959856: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95985b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95985c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95985e: mov dword ptr [0xcf78ec], ecx */
  W32((uint32_t)(0xcf78ecu), ecx);
/* 959864: je 0x95988e */
  if (zf) goto L_95988e;
L_959866: /* 959866: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95986a: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 959870: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 959873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959874: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95987a: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95987f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959880: push 0xaf8ea8 */
  { uint32_t v = 0xaf8ea8u; esp -= 4; W32(esp, v); }
/* 959885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959886: call 0x953470 */
  esp -= 4; W32(esp, 0x95988bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95988b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95988e: /* 95988e: push 0xcf8c10 */
  { uint32_t v = 0xcf8c10u; esp -= 4; W32(esp, v); }
/* 959893: call 0x94ee00 */
  esp -= 4; W32(esp, 0x959898u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 959898: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95989b: mov eax, edi */
  eax = edi;
/* 95989d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95989e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95989f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9598a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9598a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9598a4: ret  */
  esp += 4; SPILL(); return;
L_9598a5: /* 9598a5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9598a7: je 0x959850 */
  if (zf) goto L_959850;
L_9598a9: /* 9598a9: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9598b0: jl 0x95988e */
  if ((sf != of)) goto L_95988e;
L_9598b2: /* 9598b2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9598b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9598b7: call 0x94f340 */
  esp -= 4; W32(esp, 0x9598bcu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9598bc: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9598c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9598c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9598c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9598c5: call 0x94f340 */
  esp -= 4; W32(esp, 0x9598cau); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9598ca: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 9598cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9598d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9598d1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9598d5: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 9598d8: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9598dd: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9598e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9598e4: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9598ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9598eb: push 0xaf8e58 */
  { uint32_t v = 0xaf8e58u; esp -= 4; W32(esp, v); }
/* 9598f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9598f1: call 0x953470 */
  esp -= 4; W32(esp, 0x9598f6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9598f6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9598f9: jmp 0x95988e */
  goto L_95988e;
}

void f_959900(void) {
  LOAD_REGS();
L_959900: /* 959900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 959904: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 959906: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 95990a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95990c: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 95990f: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 959912: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 959914: mov eax, ecx */
  eax = ecx;
/* 959916: ret  */
  esp += 4; SPILL(); return;
}

void f_959920(void) {
  LOAD_REGS();
L_959920: /* 959920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 959924: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959927: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95992b: je 0x95997d */
  if (zf) goto L_95997d;
L_95992d: /* 95992d: mov eax, dword ptr [0xcf7800] */
  eax = R32((uint32_t)(0xcf7800u));
/* 959932: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 959936: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 959937: mov dword ptr [0xcf7800], eax */
  W32((uint32_t)(0xcf7800u), eax);
/* 95993c: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 95993f: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 959943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959944: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959945: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959946: call 0x96fa90 */
  esp -= 4; W32(esp, 0x95994bu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 95994b: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 959951: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959954: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 959958: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 95995e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 959960: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 959963: jp 0x959979 */
  if (pf) goto L_959979;
L_959965: /* 959965: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 95996b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 95996d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 959971: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 959973: fchs  */
  ST0 = -ST0;
/* 959975: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 959977: jmp 0x959999 */
  goto L_959999;
L_959979: /* 959979: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 95997b: jmp 0x959999 */
  goto L_959999;
L_95997d: /* 95997d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 959981: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 959985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959986: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 95998a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95998b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95998c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95998d: call 0x9709f0 */
  esp -= 4; W32(esp, 0x959992u); SPILL(); f_9709f0(); if (g_unwind) return; RELOAD();
/* 959992: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 959996: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959999: /* 959999: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 95999d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 95999f: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 9599a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9599a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9599a6: jp 0x9599c2 */
  if (pf) goto L_9599c2;
L_9599a8: /* 9599a8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9599ac: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9599b0: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9599b4: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 9599b6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9599b8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9599bc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9599be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9599bf: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9599c1: ret  */
  esp += 4; SPILL(); return;
L_9599c2: /* 9599c2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9599c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9599c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9599c7: ret  */
  esp += 4; SPILL(); return;
}

void f_9599d0(void) {
  LOAD_REGS();
L_9599d0: /* 9599d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9599d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9599d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9599d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9599d6: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 9599da: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9599dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9599de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9599df: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9599e7: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 9599ef: xor ebx, ebx */
  ebx = 0;
/* 9599f1: call 0x94f340 */
  esp -= 4; W32(esp, 0x9599f6u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9599f6: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9599fa: mov dword ptr [ecx], 0x7f7fffff */
  W32((uint32_t)(ecx), 0x7f7fffffu);
/* 959a00: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 959a06: mov edi, eax */
  edi = eax;
/* 959a08: lea eax, [edx + edx + 0x14] */
  eax = (uint32_t)(edx + edx + 0x14u);
/* 959a0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959a0f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959a11: jle 0x959a31 */
  if ((zf || sf != of)) goto L_959a31;
L_959a13: /* 959a13: inc dword ptr [0xcf77fc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf77fcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf77fcu), r);
  }
/* 959a19: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 959a1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959a1e: mov ebx, 1 */
  ebx = 0x1u;
/* 959a23: jne 0x959a31 */
  if (!zf) goto L_959a31;
L_959a25: /* 959a25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959a26: call 0x970960 */
  esp -= 4; W32(esp, 0x959a2bu); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 959a2b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959a2e: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_959a31: /* 959a31: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 959a37: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 959a3b: add ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 959a3e: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959a40: jle 0x959a97 */
  if ((zf || sf != of)) goto L_959a97;
L_959a42: /* 959a42: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 959a45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959a47: je 0x959a97 */
  if (zf) goto L_959a97;
L_959a49: /* 959a49: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 959a4c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 959a4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959a50: je 0x959a97 */
  if (zf) goto L_959a97;
L_959a52: /* 959a52: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 959a55: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 959a58: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959a5e: je 0x959a89 */
  if (zf) goto L_959a89;
L_959a60: /* 959a60: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 959a63: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959a65: jne 0x959a6c */
  if (!zf) goto L_959a6c;
L_959a67: /* 959a67: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 959a6a: jmp 0x959a6e */
  goto L_959a6e;
L_959a6c: /* 959a6c: mov eax, ecx */
  eax = ecx;
L_959a6e: /* 959a6e: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 959a72: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 959a76: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959a77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959a78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959a79: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 959a7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959a7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959a7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959a80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959a81: call 0x959920 */
  esp -= 4; W32(esp, 0x959a86u); SPILL(); f_959920(); if (g_unwind) return; RELOAD();
/* 959a86: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959a89: /* 959a89: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 959a8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959a8d: jne 0x959a52 */
  if (!zf) goto L_959a52;
L_959a8f: /* 959a8f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 959a93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959a95: jne 0x959afd */
  if (!zf) goto L_959afd;
L_959a97: /* 959a97: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* 959a9a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959a9c: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 959aa4: je 0x959adc */
  if (zf) goto L_959adc;
L_959aa6: /* 959aa6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 959aa9: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 959aac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959aae: je 0x959adc */
  if (zf) goto L_959adc;
L_959ab0: /* 959ab0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 959ab4: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 959ab8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959ab9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959aba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959abb: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 959abf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959ac1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959ac2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959ac3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 959ac6: call 0x959920 */
  esp -= 4; W32(esp, 0x959acbu); SPILL(); f_959920(); if (g_unwind) return; RELOAD();
/* 959acb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 959acd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959ad0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959ad2: jne 0x959ab0 */
  if (!zf) goto L_959ab0;
L_959ad4: /* 959ad4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 959ad8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959ada: jne 0x959afd */
  if (!zf) goto L_959afd;
L_959adc: /* 959adc: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 959adf: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 959ae4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959ae5: push 0xaf8fe0 */
  { uint32_t v = 0xaf8fe0u; esp -= 4; W32(esp, v); }
/* 959aea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959aeb: call 0x953470 */
  esp -= 4; W32(esp, 0x959af0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959af0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 959af2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959af3: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 959af5: call 0x9535b0 */
  esp -= 4; W32(esp, 0x959afau); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 959afa: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959afd: /* 959afd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959aff: je 0x959b17 */
  if (zf) goto L_959b17;
L_959b01: /* 959b01: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 959b05: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 959b09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959b0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959b0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959b0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959b0d: call 0x9709f0 */
  esp -= 4; W32(esp, 0x959b12u); SPILL(); f_9709f0(); if (g_unwind) return; RELOAD();
/* 959b12: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 959b14: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959b17: /* 959b17: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959b1e: jl 0x959b62 */
  if ((sf != of)) goto L_959b62;
L_959b20: /* 959b20: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 959b23: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 959b27: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 959b2b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 959b2f: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 959b32: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 959b36: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 959b38: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 959b3b: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 959b3f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 959b41: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 959b45: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 959b48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959b49: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 959b4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959b4e: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 959b53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959b54: push 0xaf8f70 */
  { uint32_t v = 0xaf8f70u; esp -= 4; W32(esp, v); }
/* 959b59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959b5a: call 0x953470 */
  esp -= 4; W32(esp, 0x959b5fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959b5f: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959b62: /* 959b62: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 959b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 959b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 959b68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 959b69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 959b6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959b6d: ret  */
  esp += 4; SPILL(); return;
}

void f_959b70(void) {
  LOAD_REGS();
L_959b70: /* 959b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959b71: mov ebp, esp */
  ebp = esp;
/* 959b73: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 959b76: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 959b79: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 959b7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959b7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959b80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959b81: xor edi, edi */
  edi = 0;
/* 959b83: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959b86: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 959b8a: jl 0x959b9f */
  if ((sf != of)) goto L_959b9f;
L_959b8c: /* 959b8c: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 959b91: push 0xaf90b4 */
  { uint32_t v = 0xaf90b4u; esp -= 4; W32(esp, v); }
/* 959b96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959b97: call 0x953470 */
  esp -= 4; W32(esp, 0x959b9cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959b9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959b9f: /* 959b9f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 959ba2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959ba4: je 0x959bce */
  if (zf) goto L_959bce;
L_959ba6: /* 959ba6: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 959ba9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959bab: je 0x959bce */
  if (zf) goto L_959bce;
L_959bad: /* 959bad: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 959bb0: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 959bb2: jns 0x959bc7 */
  if (!sf) goto L_959bc7;
L_959bb4: /* 959bb4: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 959bb7: jne 0x959bc7 */
  if (!zf) goto L_959bc7;
L_959bb9: /* 959bb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 959bbb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 959bbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959bbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959bbf: call 0x958ca0 */
  esp -= 4; W32(esp, 0x959bc4u); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 959bc4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959bc7: /* 959bc7: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 959bca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959bcc: jne 0x959ba6 */
  if (!zf) goto L_959ba6;
L_959bce: /* 959bce: call 0x94f4b0 */
  esp -= 4; W32(esp, 0x959bd3u); SPILL(); f_94f4b0(); if (g_unwind) return; RELOAD();
/* 959bd3: mov ecx, dword ptr [0xcf8b48] */
  ecx = R32((uint32_t)(0xcf8b48u));
/* 959bd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959bda: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 959bde: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x959be3u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 959be3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 959be7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959be8: mov dword ptr [0xcf8c08], eax */
  W32((uint32_t)(0xcf8c08u), eax);
/* 959bed: call 0x94f520 */
  esp -= 4; W32(esp, 0x959bf2u); SPILL(); f_94f520(); if (g_unwind) return; RELOAD();
/* 959bf2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 959bf6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959bf9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959bfb: je 0x959d58 */
  if (zf) goto L_959d58;
L_959c01: /* 959c01: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 959c04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959c06: lea ebx, [ecx + 4] */
  ebx = (uint32_t)(ecx + 0x4u);
/* 959c09: je 0x959d12 */
  if (zf) goto L_959d12;
L_959c0f: /* 959c0f: nop  */
L_959c10: /* 959c10: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 959c13: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 959c16: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 959c19: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959c1c: jne 0x959d04 */
  if (!zf) goto L_959d04;
L_959c22: /* 959c22: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 959c25: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 959c28: jne 0x959d04 */
  if (!zf) goto L_959d04;
L_959c2e: /* 959c2e: mov eax, dword ptr [0xcf85a0] */
  eax = R32((uint32_t)(0xcf85a0u));
/* 959c33: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 959c39: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 959c3a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959c3c: jne 0x959c4d */
  if (!zf) goto L_959c4d;
L_959c3e: /* 959c3e: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 959c43: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 959c48: mov dword ptr [0xcf2f50], eax */
  W32((uint32_t)(0xcf2f50u), eax);
L_959c4d: /* 959c4d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 959c51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959c52: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 959c56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959c57: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 959c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959c5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959c5d: call 0x9599d0 */
  esp -= 4; W32(esp, 0x959c62u); SPILL(); f_9599d0(); if (g_unwind) return; RELOAD();
/* 959c62: mov edi, eax */
  edi = eax;
/* 959c64: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 959c69: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959c6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959c6e: je 0x959c9d */
  if (zf) goto L_959c9d;
L_959c70: /* 959c70: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 959c76: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 959c7a: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 959c7d: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 959c80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959c81: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 959c87: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 959c8a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 959c8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959c8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959c8f: push 0xaf9070 */
  { uint32_t v = 0xaf9070u; esp -= 4; W32(esp, v); }
/* 959c94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959c95: call 0x953470 */
  esp -= 4; W32(esp, 0x959c9au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959c9a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959c9d: /* 959c9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 959c9f: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 959ca3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959ca4: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 959ca8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959ca9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959caa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959cab: call 0x95ba10 */
  esp -= 4; W32(esp, 0x959cb0u); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 959cb0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 959cb4: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 959cb9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959cbc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 959cbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959cbf: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 959cc3: je 0x959cfb */
  if (zf) goto L_959cfb;
L_959cc5: /* 959cc5: fld dword ptr [0xcf78f8] */
  { double v = F32((uint32_t)(0xcf78f8u)); FPUSH(v); }
/* 959ccb: mov eax, dword ptr [0xcf78f0] */
  eax = R32((uint32_t)(0xcf78f0u));
/* 959cd0: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 959cd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 959cd5: mov dword ptr [0xcf78f0], eax */
  W32((uint32_t)(0xcf78f0u), eax);
/* 959cda: fstp dword ptr [0xcf78f8] */
  WF32((uint32_t)(0xcf78f8u), ST0); FPOP();
/* 959ce0: fld dword ptr [0xcf78f4] */
  { double v = F32((uint32_t)(0xcf78f4u)); FPUSH(v); }
/* 959ce6: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 959cea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 959cec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 959cef: jp 0x959cfb */
  if (pf) goto L_959cfb;
L_959cf1: /* 959cf1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 959cf5: mov dword ptr [0xcf78f4], ecx */
  W32((uint32_t)(0xcf78f4u), ecx);
L_959cfb: /* 959cfb: call 0x95a9a0 */
  esp -= 4; W32(esp, 0x959d00u); SPILL(); f_95a9a0(); if (g_unwind) return; RELOAD();
/* 959d00: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_959d04: /* 959d04: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 959d06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959d08: jne 0x959c10 */
  if (!zf) goto L_959c10;
L_959d0e: /* 959d0e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_959d12: /* 959d12: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959d14: je 0x959d58 */
  if (zf) goto L_959d58;
L_959d16: /* 959d16: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 959d19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959d1b: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 959d1e: je 0x959d58 */
  if (zf) goto L_959d58;
L_959d20: /* 959d20: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 959d23: mov ebx, dword ptr [edx + 0x3c] */
  ebx = R32((uint32_t)(edx + 0x3cu));
/* 959d26: mov ecx, 0x400 */
  ecx = 0x400u;
/* 959d2b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 959d2e: test ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959d30: jne 0x959d47 */
  if (!zf) goto L_959d47;
L_959d32: /* 959d32: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 959d35: test dword ptr [edx + 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x3cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959d38: jne 0x959d47 */
  if (!zf) goto L_959d47;
L_959d3a: /* 959d3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959d3b: push 0xcf8c08 */
  { uint32_t v = 0xcf8c08u; esp -= 4; W32(esp, v); }
/* 959d40: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x959d45u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 959d45: jmp 0x959d4f */
  goto L_959d4f;
L_959d47: /* 959d47: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 959d49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959d4a: call 0x953a60 */
  esp -= 4; W32(esp, 0x959d4fu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
L_959d4f: /* 959d4f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 959d51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959d54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959d56: jne 0x959d20 */
  if (!zf) goto L_959d20;
L_959d58: /* 959d58: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 959d5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959d5d: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x959d62u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 959d62: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959d65: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959d67: je 0x959d72 */
  if (zf) goto L_959d72;
L_959d69: /* 959d69: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 959d6c: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
L_959d72: /* 959d72: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959d79: jl 0x959d90 */
  if ((sf != of)) goto L_959d90;
L_959d7b: /* 959d7b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 959d81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959d82: push 0xaf9028 */
  { uint32_t v = 0xaf9028u; esp -= 4; W32(esp, v); }
/* 959d87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959d88: call 0x953470 */
  esp -= 4; W32(esp, 0x959d8du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959d8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959d90: /* 959d90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 959d91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 959d92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 959d93: mov esp, ebp */
  esp = ebp;
/* 959d95: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 959d96: ret  */
  esp += 4; SPILL(); return;
}

void f_959da0(void) {
  LOAD_REGS();
L_959da0: /* 959da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 959da1: mov ebp, esp */
  ebp = esp;
/* 959da3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 959da6: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 959da9: mov eax, dword ptr [0xcf85a0] */
  eax = R32((uint32_t)(0xcf85a0u));
/* 959dae: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 959db4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 959db5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959db6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959db7: xor edi, edi */
  edi = 0;
/* 959db9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 959dba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959dbc: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 959dc0: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 959dc4: jne 0x959dd5 */
  if (!zf) goto L_959dd5;
L_959dc6: /* 959dc6: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 959dcb: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 959dd0: mov dword ptr [0xcf2f50], eax */
  W32((uint32_t)(0xcf2f50u), eax);
L_959dd5: /* 959dd5: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 959ddc: jl 0x959df2 */
  if ((sf != of)) goto L_959df2;
L_959dde: /* 959dde: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 959de4: push 0xaf920c */
  { uint32_t v = 0xaf920cu; esp -= 4; W32(esp, v); }
/* 959de9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959dea: call 0x953470 */
  esp -= 4; W32(esp, 0x959defu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959def: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959df2: /* 959df2: call 0x94f4b0 */
  esp -= 4; W32(esp, 0x959df7u); SPILL(); f_94f4b0(); if (g_unwind) return; RELOAD();
/* 959df7: mov edx, dword ptr [0xcf8b48] */
  edx = R32((uint32_t)(0xcf8b48u));
/* 959dfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959dfe: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 959e02: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x959e07u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 959e07: mov dword ptr [0xcf8c08], eax */
  W32((uint32_t)(0xcf8c08u), eax);
/* 959e0c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 959e10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959e11: call 0x94f520 */
  esp -= 4; W32(esp, 0x959e16u); SPILL(); f_94f520(); if (g_unwind) return; RELOAD();
/* 959e16: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 959e1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959e1d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959e1f: je 0x95a039 */
  if (zf) goto L_95a039;
L_959e25: /* 959e25: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 959e28: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959e2a: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 959e2d: je 0x959ffb */
  if (zf) goto L_959ffb;
L_959e33: /* 959e33: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 959e36: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 959e3a: cmp dword ptr [ebx + 0xc], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xcu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959e3e: jne 0x959fe5 */
  if (!zf) goto L_959fe5;
L_959e44: /* 959e44: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 959e47: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 959e4a: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 959e4d: mov eax, 0x400 */
  eax = 0x400u;
/* 959e52: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959e54: je 0x959e5e */
  if (zf) goto L_959e5e;
L_959e56: /* 959e56: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 959e59: test dword ptr [esi + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959e5c: jne 0x959e56 */
  if (!zf) goto L_959e56;
L_959e5e: /* 959e5e: test dword ptr [edi + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959e61: je 0x959e6b */
  if (zf) goto L_959e6b;
L_959e63: /* 959e63: mov edi, dword ptr [edi + 0x10] */
  edi = R32((uint32_t)(edi + 0x10u));
/* 959e66: test dword ptr [edi + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959e69: jne 0x959e63 */
  if (!zf) goto L_959e63;
L_959e6b: /* 959e6b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959e6d: je 0x959fe5 */
  if (zf) goto L_959fe5;
L_959e73: /* 959e73: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 959e76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959e77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959e78: call 0x94eed0 */
  esp -= 4; W32(esp, 0x959e7du); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 959e7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959e80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959e82: jne 0x959eb7 */
  if (!zf) goto L_959eb7;
L_959e84: /* 959e84: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 959e87: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 959e8a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 959e8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959e8e: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 959e91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959e92: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 959e95: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 959e98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959e99: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 959e9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959ea0: push 0xaf9190 */
  { uint32_t v = 0xaf9190u; esp -= 4; W32(esp, v); }
/* 959ea5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959ea6: call 0x953470 */
  esp -= 4; W32(esp, 0x959eabu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959eab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959eac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959ead: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 959eaf: call 0x96e130 */
  esp -= 4; W32(esp, 0x959eb4u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 959eb4: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959eb7: /* 959eb7: mov eax, dword ptr [0xcf85a0] */
  eax = R32((uint32_t)(0xcf85a0u));
/* 959ebc: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 959ec2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 959ec3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 959ec5: jne 0x959ed6 */
  if (!zf) goto L_959ed6;
L_959ec7: /* 959ec7: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 959ecc: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 959ed1: mov dword ptr [0xcf2f50], eax */
  W32((uint32_t)(0xcf2f50u), eax);
L_959ed6: /* 959ed6: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 959eda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959edb: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 959edf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959ee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959ee1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959ee2: call 0x9709f0 */
  esp -= 4; W32(esp, 0x959ee7u); SPILL(); f_9709f0(); if (g_unwind) return; RELOAD();
/* 959ee7: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 959eeb: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 959eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959ef0: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 959ef4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959ef5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959ef6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959ef7: call 0x9709f0 */
  esp -= 4; W32(esp, 0x959efcu); SPILL(); f_9709f0(); if (g_unwind) return; RELOAD();
/* 959efc: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 959f00: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 959f05: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959f08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959f0a: je 0x959f41 */
  if (zf) goto L_959f41;
L_959f0c: /* 959f0c: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 959f12: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 959f16: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 959f19: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 959f1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959f1d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 959f23: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 959f26: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 959f2a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 959f2e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 959f31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959f32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959f33: push 0xaf9128 */
  { uint32_t v = 0xaf9128u; esp -= 4; W32(esp, v); }
/* 959f38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959f39: call 0x953470 */
  esp -= 4; W32(esp, 0x959f3eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 959f3e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_959f41: /* 959f41: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 959f45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 959f47: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 959f4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 959f4d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 959f50: jp 0x959f65 */
  if (pf) goto L_959f65;
L_959f52: /* 959f52: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 959f56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959f57: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 959f5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 959f5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959f5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959f5e: call 0x95ba10 */
  esp -= 4; W32(esp, 0x959f63u); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 959f63: jmp 0x959f80 */
  goto L_959f80;
L_959f65: /* 959f65: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 959f69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 959f6a: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 959f6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 959f6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 959f70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 959f71: call 0x95ba10 */
  esp -= 4; W32(esp, 0x959f76u); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 959f76: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 959f7a: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 959f7e: mov esi, edi */
  esi = edi;
L_959f80: /* 959f80: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 959f83: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 959f86: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 959f88: jns 0x959fa2 */
  if (!sf) goto L_959fa2;
L_959f8a: /* 959f8a: mov ecx, dword ptr [0xcf795c] */
  ecx = R32((uint32_t)(0xcf795cu));
/* 959f90: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 959f94: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 959f95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 959f96: mov dword ptr [0xcf795c], ecx */
  W32((uint32_t)(0xcf795cu), ecx);
/* 959f9c: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 959fa0: jmp 0x959fa6 */
  goto L_959fa6;
L_959fa2: /* 959fa2: inc dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x1cu), r);
  }
L_959fa6: /* 959fa6: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 959fab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959fad: je 0x959fe5 */
  if (zf) goto L_959fe5;
L_959faf: /* 959faf: fld dword ptr [0xcf78e0] */
  { double v = F32((uint32_t)(0xcf78e0u)); FPUSH(v); }
/* 959fb5: mov eax, dword ptr [0xcf78d8] */
  eax = R32((uint32_t)(0xcf78d8u));
/* 959fba: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 959fbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 959fbf: mov dword ptr [0xcf78d8], eax */
  W32((uint32_t)(0xcf78d8u), eax);
/* 959fc4: fstp dword ptr [0xcf78e0] */
  WF32((uint32_t)(0xcf78e0u), ST0); FPOP();
/* 959fca: fld dword ptr [0xcf78dc] */
  { double v = F32((uint32_t)(0xcf78dcu)); FPUSH(v); }
/* 959fd0: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 959fd4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 959fd6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 959fd9: jp 0x959fe5 */
  if (pf) goto L_959fe5;
L_959fdb: /* 959fdb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 959fdf: mov dword ptr [0xcf78dc], edx */
  W32((uint32_t)(0xcf78dcu), edx);
L_959fe5: /* 959fe5: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 959fe9: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 959feb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959fed: jne 0x959e33 */
  if (!zf) goto L_959e33;
L_959ff3: /* 959ff3: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 959ff7: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
L_959ffb: /* 959ffb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 959ffd: je 0x95a039 */
  if (zf) goto L_95a039;
L_959fff: /* 959fff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95a002: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95a005: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a007: je 0x95a039 */
  if (zf) goto L_95a039;
L_95a009: /* 95a009: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95a010: /* 95a010: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 95a013: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95a016: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a019: jne 0x95a025 */
  if (!zf) goto L_95a025;
L_95a01b: /* 95a01b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 95a01d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a01e: call 0x953a60 */
  esp -= 4; W32(esp, 0x95a023u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95a023: jmp 0x95a030 */
  goto L_95a030;
L_95a025: /* 95a025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a026: push 0xcf8c08 */
  { uint32_t v = 0xcf8c08u; esp -= 4; W32(esp, v); }
/* 95a02b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95a030u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
L_95a030: /* 95a030: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95a032: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a037: jne 0x95a010 */
  if (!zf) goto L_95a010;
L_95a039: /* 95a039: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 95a03d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a03e: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95a043u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95a043: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a046: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a048: je 0x95a053 */
  if (zf) goto L_95a053;
L_95a04a: /* 95a04a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 95a04d: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
L_95a053: /* 95a053: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a05a: jl 0x95a075 */
  if ((sf != of)) goto L_95a075;
L_95a05c: /* 95a05c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95a060: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95a065: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a066: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a067: push 0xaf90d0 */
  { uint32_t v = 0xaf90d0u; esp -= 4; W32(esp, v); }
/* 95a06c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a06d: call 0x953470 */
  esp -= 4; W32(esp, 0x95a072u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a072: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a075: /* 95a075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a077: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a078: mov esp, ebp */
  esp = ebp;
/* 95a07a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95a07b: ret  */
  esp += 4; SPILL(); return;
}

void f_95a080(void) {
  LOAD_REGS();
L_95a080: /* 95a080: mov eax, dword ptr [0xcf8c08] */
  eax = R32((uint32_t)(0xcf8c08u));
/* 95a085: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a086: call 0x94f340 */
  esp -= 4; W32(esp, 0x95a08bu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95a08b: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95a090: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a093: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a096: jl 0x95a0ac */
  if ((sf != of)) goto L_95a0ac;
L_95a098: /* 95a098: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95a09e: push 0xaf9248 */
  { uint32_t v = 0xaf9248u; esp -= 4; W32(esp, v); }
/* 95a0a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a0a4: call 0x953470 */
  esp -= 4; W32(esp, 0x95a0a9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a0a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a0ac: /* 95a0ac: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95a0b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a0b3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a0b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a0b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a0b6: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95a0ba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95a0bb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a0bd: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 95a0c3: je 0x95a1af */
  if (zf) goto L_95a1af;
L_95a0c9: /* 95a0c9: mov ebp, 0x2000 */
  ebp = 0x2000u;
/* 95a0ce: mov edi, edi */
  edi = edi;
L_95a0d0: /* 95a0d0: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 95a0d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a0d5: je 0x95a1af */
  if (zf) goto L_95a1af;
L_95a0db: /* 95a0db: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95a0de: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a0e3: jne 0x95a1a4 */
  if (!zf) goto L_95a1a4;
L_95a0e9: /* 95a0e9: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95a0ef: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95a0f4: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 95a0f7: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95a0fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a0fc: mov dword ptr [edi + 0x34], edx */
  W32((uint32_t)(edi + 0x34u), edx);
/* 95a0ff: je 0x95a125 */
  if (zf) goto L_95a125;
L_95a101: /* 95a101: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95a104: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a106: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a108: je 0x95a125 */
  if (zf) goto L_95a125;
L_95a10a: /* 95a10a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95a110: /* 95a110: mov esi, dword ptr [eax + 0x3c] */
  esi = R32((uint32_t)(eax + 0x3cu));
/* 95a113: and esi, 0xffffdfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 95a119: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a11c: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* 95a11f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a121: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a123: jne 0x95a110 */
  if (!zf) goto L_95a110;
L_95a125: /* 95a125: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95a128: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a12a: je 0x95a1a4 */
  if (zf) goto L_95a1a4;
L_95a12c: /* 95a12c: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95a12f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a131: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95a134: je 0x95a1a4 */
  if (zf) goto L_95a1a4;
L_95a136: /* 95a136: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95a139: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95a13c: test eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a141: je 0x95a14a */
  if (zf) goto L_95a14a;
L_95a143: /* 95a143: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a148: je 0x95a19e */
  if (zf) goto L_95a19e;
L_95a14a: /* 95a14a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 95a14d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a14f: jne 0x95a154 */
  if (!zf) goto L_95a154;
L_95a151: /* 95a151: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
L_95a154: /* 95a154: test dword ptr [ecx + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a157: je 0x95a165 */
  if (zf) goto L_95a165;
L_95a159: /* 95a159: and eax, 0xfbffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfbffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95a15e: or eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95a163: jmp 0x95a19b */
  goto L_95a19b;
L_95a165: /* 95a165: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95a16b: cmp dword ptr [ecx + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a16e: je 0x95a19e */
  if (zf) goto L_95a19e;
L_95a170: /* 95a170: and eax, 0xfbffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfbffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95a175: or eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95a17a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 95a17d: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 95a180: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a181: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95a183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a184: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 95a187: call 0x95d300 */
  esp -= 4; W32(esp, 0x95a18cu); SPILL(); f_95d300(); if (g_unwind) return; RELOAD();
/* 95a18c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a18f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a191: je 0x95a19e */
  if (zf) goto L_95a19e;
L_95a193: /* 95a193: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95a196: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_95a19b: /* 95a19b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_95a19e: /* 95a19e: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95a1a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a1a2: jne 0x95a136 */
  if (!zf) goto L_95a136;
L_95a1a4: /* 95a1a4: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95a1a7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a1a9: jne 0x95a0d0 */
  if (!zf) goto L_95a0d0;
L_95a1af: /* 95a1af: mov eax, dword ptr [0xcf8c08] */
  eax = R32((uint32_t)(0xcf8c08u));
/* 95a1b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a1b5: call 0x94f340 */
  esp -= 4; W32(esp, 0x95a1bau); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95a1ba: mov esi, eax */
  esi = eax;
/* 95a1bc: mov eax, dword ptr [0xcf83e4] */
  eax = R32((uint32_t)(0xcf83e4u));
/* 95a1c1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a1c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a1c6: je 0x95a1dc */
  if (zf) goto L_95a1dc;
L_95a1c8: /* 95a1c8: mov ecx, dword ptr [0xcf8c08] */
  ecx = R32((uint32_t)(0xcf8c08u));
/* 95a1ce: push 0x95a250 */
  { uint32_t v = 0x95a250u; esp -= 4; W32(esp, v); }
/* 95a1d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95a1d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a1d6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a1da: jmp 0x95a1ee */
  goto L_95a1ee;
L_95a1dc: /* 95a1dc: mov edx, dword ptr [0xcf8c08] */
  edx = R32((uint32_t)(0xcf8c08u));
/* 95a1e2: push 0x95a280 */
  { uint32_t v = 0x95a280u; esp -= 4; W32(esp, v); }
/* 95a1e7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95a1e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a1ea: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95a1ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_95a1ee: /* 95a1ee: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x95a1f4u); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 95a1f4: mov eax, dword ptr [0xcf8be0] */
  eax = R32((uint32_t)(0xcf8be0u));
/* 95a1f9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a1fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a1fe: je 0x95a208 */
  if (zf) goto L_95a208;
L_95a200: /* 95a200: add dword ptr [0xcf7980], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7980u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xcf7980u), r);
  }
/* 95a206: jmp 0x95a225 */
  goto L_95a225;
L_95a208: /* 95a208: mov ecx, dword ptr [0xcf7978] */
  ecx = R32((uint32_t)(0xcf7978u));
/* 95a20e: mov eax, dword ptr [0xcf797c] */
  eax = R32((uint32_t)(0xcf797cu));
/* 95a213: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a215: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a217: mov dword ptr [0xcf7978], ecx */
  W32((uint32_t)(0xcf7978u), ecx);
/* 95a21d: jge 0x95a225 */
  if ((sf == of)) goto L_95a225;
L_95a21f: /* 95a21f: mov dword ptr [0xcf797c], esi */
  W32((uint32_t)(0xcf797cu), esi);
L_95a225: /* 95a225: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a22c: jl 0x95a242 */
  if ((sf != of)) goto L_95a242;
L_95a22e: /* 95a22e: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95a233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a234: push 0xaf9224 */
  { uint32_t v = 0xaf9224u; esp -= 4; W32(esp, v); }
/* 95a239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a23a: call 0x953470 */
  esp -= 4; W32(esp, 0x95a23fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a23f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a242: /* 95a242: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a243: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95a245: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a246: ret  */
  esp += 4; SPILL(); return;
}

void f_95a250(void) {
  LOAD_REGS();
L_95a250: /* 95a250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95a254: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95a256: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 95a25a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 95a25c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95a25e: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 95a260: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95a262: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95a265: jne 0x95a26d */
  if (!zf) goto L_95a26d;
L_95a267: /* 95a267: mov eax, 1 */
  eax = 0x1u;
/* 95a26c: ret  */
  esp += 4; SPILL(); return;
L_95a26d: /* 95a26d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95a270: ret  */
  esp += 4; SPILL(); return;
}

void f_95a280(void) {
  LOAD_REGS();
L_95a280: /* 95a280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95a284: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95a286: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 95a28a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95a28c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 95a28f: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 95a292: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 95a294: mov eax, ecx */
  eax = ecx;
/* 95a296: ret  */
  esp += 4; SPILL(); return;
}

void f_95a2a0(void) {
  LOAD_REGS();
L_95a2a0: /* 95a2a0: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95a2a6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95a2aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a2ab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a2ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95a2ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a2af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a2b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a2b1: mov dword ptr [0xcf8bf8], edx */
  W32((uint32_t)(0xcf8bf8u), edx);
/* 95a2b7: je 0x95a372 */
  if (zf) goto L_95a372;
L_95a2bd: /* 95a2bd: mov edi, eax */
  edi = eax;
/* 95a2bf: mov ebp, 0x4000000 */
  ebp = 0x4000000u;
L_95a2c4: /* 95a2c4: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 95a2c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a2c9: je 0x95a372 */
  if (zf) goto L_95a372;
L_95a2cf: /* 95a2cf: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95a2d4: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 95a2d7: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 95a2da: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95a2dd: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 95a2df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a2e1: mov dword ptr [edi + 0x3c], edx */
  W32((uint32_t)(edi + 0x3cu), edx);
/* 95a2e4: je 0x95a342 */
  if (zf) goto L_95a342;
L_95a2e6: /* 95a2e6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95a2e9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a2eb: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95a2ee: je 0x95a342 */
  if (zf) goto L_95a342;
L_95a2f0: /* 95a2f0: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95a2f6: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 95a2f9: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95a2fc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a2fe: je 0x95a33c */
  if (zf) goto L_95a33c;
L_95a300: /* 95a300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a301: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a302: call 0x95d300 */
  esp -= 4; W32(esp, 0x95a307u); SPILL(); f_95d300(); if (g_unwind) return; RELOAD();
/* 95a307: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a30a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a30c: je 0x95a33c */
  if (zf) goto L_95a33c;
L_95a30e: /* 95a30e: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 95a311: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a313: je 0x95a33c */
  if (zf) goto L_95a33c;
L_95a315: /* 95a315: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 95a318: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95a31a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a31c: je 0x95a33c */
  if (zf) goto L_95a33c;
L_95a31e: /* 95a31e: mov edi, edi */
  edi = edi;
L_95a320: /* 95a320: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95a323: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95a326: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a328: jne 0x95a32d */
  if (!zf) goto L_95a32d;
L_95a32a: /* 95a32a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_95a32d: /* 95a32d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a32f: je 0x95a339 */
  if (zf) goto L_95a339;
L_95a331: /* 95a331: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95a333: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a335: jne 0x95a320 */
  if (!zf) goto L_95a320;
L_95a337: /* 95a337: jmp 0x95a33c */
  goto L_95a33c;
L_95a339: /* 95a339: or dword ptr [eax + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_95a33c: /* 95a33c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95a33e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a340: jne 0x95a2f0 */
  if (!zf) goto L_95a2f0;
L_95a342: /* 95a342: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95a345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a347: je 0x95a367 */
  if (zf) goto L_95a367;
L_95a349: /* 95a349: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95a34c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a34e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a350: je 0x95a367 */
  if (zf) goto L_95a367;
L_95a352: /* 95a352: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 95a355: or esi, 0x2000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 95a35b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a35e: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 95a361: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a363: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a365: jne 0x95a352 */
  if (!zf) goto L_95a352;
L_95a367: /* 95a367: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95a36a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a36c: jne 0x95a2c4 */
  if (!zf) goto L_95a2c4;
L_95a372: /* 95a372: mov edx, dword ptr [0xcf8c08] */
  edx = R32((uint32_t)(0xcf8c08u));
/* 95a378: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a379: call 0x94f340 */
  esp -= 4; W32(esp, 0x95a37eu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95a37e: mov esi, eax */
  esi = eax;
/* 95a380: mov eax, dword ptr [0xcf83e4] */
  eax = R32((uint32_t)(0xcf83e4u));
/* 95a385: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a388: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a38a: je 0x95a39f */
  if (zf) goto L_95a39f;
L_95a38c: /* 95a38c: mov eax, dword ptr [0xcf8c08] */
  eax = R32((uint32_t)(0xcf8c08u));
/* 95a391: push 0x95a250 */
  { uint32_t v = 0x95a250u; esp -= 4; W32(esp, v); }
/* 95a396: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95a398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a399: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95a39c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a39d: jmp 0x95a3b1 */
  goto L_95a3b1;
L_95a39f: /* 95a39f: mov ecx, dword ptr [0xcf8c08] */
  ecx = R32((uint32_t)(0xcf8c08u));
/* 95a3a5: push 0x95a280 */
  { uint32_t v = 0x95a280u; esp -= 4; W32(esp, v); }
/* 95a3aa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 95a3ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a3ad: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a3b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_95a3b1: /* 95a3b1: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x95a3b7u); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 95a3b7: mov eax, dword ptr [0xcf8be0] */
  eax = R32((uint32_t)(0xcf8be0u));
/* 95a3bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a3bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a3c1: je 0x95a3cb */
  if (zf) goto L_95a3cb;
L_95a3c3: /* 95a3c3: add dword ptr [0xcf796c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf796cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xcf796cu), r);
  }
/* 95a3c9: jmp 0x95a3e8 */
  goto L_95a3e8;
L_95a3cb: /* 95a3cb: mov ecx, dword ptr [0xcf7964] */
  ecx = R32((uint32_t)(0xcf7964u));
/* 95a3d1: mov eax, dword ptr [0xcf7968] */
  eax = R32((uint32_t)(0xcf7968u));
/* 95a3d6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a3d8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a3da: mov dword ptr [0xcf7964], ecx */
  W32((uint32_t)(0xcf7964u), ecx);
/* 95a3e0: jge 0x95a3e8 */
  if ((sf == of)) goto L_95a3e8;
L_95a3e2: /* 95a3e2: mov dword ptr [0xcf7968], esi */
  W32((uint32_t)(0xcf7968u), esi);
L_95a3e8: /* 95a3e8: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a3ef: jl 0x95a406 */
  if ((sf != of)) goto L_95a406;
L_95a3f1: /* 95a3f1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95a3f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a3f8: push 0xaf9264 */
  { uint32_t v = 0xaf9264u; esp -= 4; W32(esp, v); }
/* 95a3fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a3fe: call 0x953470 */
  esp -= 4; W32(esp, 0x95a403u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a403: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a406: /* 95a406: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a407: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a408: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95a409: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a40a: ret  */
  esp += 4; SPILL(); return;
}

void f_95a410(void) {
  LOAD_REGS();
L_95a410: /* 95a410: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95a414: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95a41a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a41b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95a41f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 95a421: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a422: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 95a426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a427: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95a429: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 95a42a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a42b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a42c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a42d: call 0x95e420 */
  esp -= 4; W32(esp, 0x95a432u); SPILL(); f_95e420(); if (g_unwind) return; RELOAD();
/* 95a432: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95a436: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a439: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95a440: /* 95a440: mov ecx, dword ptr [edx + eax*4 + 4] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 95a444: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a446: je 0x95a455 */
  if (zf) goto L_95a455;
L_95a448: /* 95a448: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a44a: je 0x95a459 */
  if (zf) goto L_95a459;
L_95a44c: /* 95a44c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95a44d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a44f: jne 0x95a440 */
  if (!zf) goto L_95a440;
L_95a451: /* 95a451: xor eax, eax */
  eax = 0;
/* 95a453: jmp 0x95a440 */
  goto L_95a440;
L_95a455: /* 95a455: mov dword ptr [edx + eax*4 + 4], esi */
  W32((uint32_t)(edx + eax*4 + 0x4u), esi);
L_95a459: /* 95a459: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a45a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a45b: ret  */
  esp += 4; SPILL(); return;
}

void f_95a460(void) {
  LOAD_REGS();
L_95a460: /* 95a460: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95a464: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a465: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 95a469: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a46a: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 95a46e: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 95a474: mov ecx, dword ptr [0xcf790c] */
  ecx = R32((uint32_t)(0xcf790cu));
/* 95a47a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95a47e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a47f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a480: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95a481: mov dword ptr [0xcf790c], ecx */
  W32((uint32_t)(0xcf790cu), ecx);
/* 95a487: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95a48d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 95a48f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95a492: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 95a493: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a494: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a496: call 0x95e420 */
  esp -= 4; W32(esp, 0x95a49bu); SPILL(); f_95e420(); if (g_unwind) return; RELOAD();
/* 95a49b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 95a49f: mov edi, eax */
  edi = eax;
/* 95a4a1: mov esi, dword ptr [ecx + edi*4 + 4] */
  esi = R32((uint32_t)(ecx + edi*4 + 0x4u));
/* 95a4a5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a4a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a4aa: je 0x95a4fc */
  if (zf) goto L_95a4fc;
L_95a4ac: /* 95a4ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95a4b0: /* 95a4b0: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a4b2: jne 0x95a4c0 */
  if (!zf) goto L_95a4c0;
L_95a4b4: /* 95a4b4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 95a4b8: mov dword ptr [edx], 0xffffffff */
  W32((uint32_t)(edx), 0xffffffffu);
/* 95a4be: jmp 0x95a4e5 */
  goto L_95a4e5;
L_95a4c0: /* 95a4c0: mov edx, dword ptr [0xcf7910] */
  edx = R32((uint32_t)(0xcf7910u));
/* 95a4c6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95a4ca: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95a4cb: mov dword ptr [0xcf7910], edx */
  W32((uint32_t)(0xcf7910u), edx);
/* 95a4d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 95a4d3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 95a4d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a4d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a4d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a4d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a4d9: call 0x94ed20 */
  esp -= 4; W32(esp, 0x95a4deu); SPILL(); f_94ed20(); if (g_unwind) return; RELOAD();
/* 95a4de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a4e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a4e3: jne 0x95a50e */
  if (!zf) goto L_95a50e;
L_95a4e5: /* 95a4e5: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95a4e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 95a4ea: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a4ec: jne 0x95a4f0 */
  if (!zf) goto L_95a4f0;
L_95a4ee: /* 95a4ee: xor edi, edi */
  edi = 0;
L_95a4f0: /* 95a4f0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95a4f4: mov esi, dword ptr [eax + edi*4 + 4] */
  esi = R32((uint32_t)(eax + edi*4 + 0x4u));
/* 95a4f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a4fa: jne 0x95a4b0 */
  if (!zf) goto L_95a4b0;
L_95a4fc: /* 95a4fc: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95a500: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a503: jne 0x95a507 */
  if (!zf) goto L_95a507;
L_95a505: /* 95a505: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_95a507: /* 95a507: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a508: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a509: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95a50a: xor eax, eax */
  eax = 0;
/* 95a50c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a50d: ret  */
  esp += 4; SPILL(); return;
L_95a50e: /* 95a50e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a50f: mov eax, esi */
  eax = esi;
/* 95a511: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a512: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95a513: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a514: ret  */
  esp += 4; SPILL(); return;
}

void f_95a520(void) {
  LOAD_REGS();
L_95a520: /* 95a520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a521: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a522: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a523: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 95a527: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95a52a: xor ebx, ebx */
  ebx = 0;
/* 95a52c: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95a52f: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 95a533: je 0x95a682 */
  if (zf) goto L_95a682;
L_95a539: /* 95a539: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a540: jl 0x95a55a */
  if ((sf != of)) goto L_95a55a;
L_95a542: /* 95a542: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95a545: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95a54b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a54c: push 0xaf9290 */
  { uint32_t v = 0xaf9290u; esp -= 4; W32(esp, v); }
/* 95a551: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a552: call 0x953470 */
  esp -= 4; W32(esp, 0x95a557u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a557: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a55a: /* 95a55a: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 95a55d: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95a560: and edx, 0xffffefff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffefffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95a566: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a568: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a569: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a56a: mov dword ptr [edi + 0x3c], edx */
  W32((uint32_t)(edi + 0x3cu), edx);
/* 95a56d: je 0x95a59b */
  if (zf) goto L_95a59b;
L_95a56f: /* 95a56f: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95a572: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a574: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a576: je 0x95a59b */
  if (zf) goto L_95a59b;
L_95a578: /* 95a578: mov edx, 0xffffdfff */
  edx = 0xffffdfffu;
/* 95a57d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_95a580: /* 95a580: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a583: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a586: jne 0x95a592 */
  if (!zf) goto L_95a592;
L_95a588: /* 95a588: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 95a590: jmp 0x95a595 */
  goto L_95a595;
L_95a592: /* 95a592: and dword ptr [eax + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
L_95a595: /* 95a595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a597: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a599: jne 0x95a580 */
  if (!zf) goto L_95a580;
L_95a59b: /* 95a59b: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95a59e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a5a0: je 0x95a5ce */
  if (zf) goto L_95a5ce;
L_95a5a2: /* 95a5a2: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95a5a5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a5a7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a5a9: je 0x95a5ce */
  if (zf) goto L_95a5ce;
L_95a5ab: /* 95a5ab: nop  */
/* 95a5ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95a5b0: /* 95a5b0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 95a5b3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a5b6: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a5b8: jne 0x95a5bf */
  if (!zf) goto L_95a5bf;
L_95a5ba: /* 95a5ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 95a5bd: jmp 0x95a5c1 */
  goto L_95a5c1;
L_95a5bf: /* 95a5bf: mov eax, edx */
  eax = edx;
L_95a5c1: /* 95a5c1: or dword ptr [eax + 0x3c], 0x2000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
/* 95a5c8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a5ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a5cc: jne 0x95a5b0 */
  if (!zf) goto L_95a5b0;
L_95a5ce: /* 95a5ce: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95a5d1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a5d3: je 0x95a663 */
  if (zf) goto L_95a663;
L_95a5d9: /* 95a5d9: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 95a5dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a5dd: call 0x94f340 */
  esp -= 4; W32(esp, 0x95a5e2u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95a5e2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a5e5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a5e7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 95a5eb: jle 0x95a663 */
  if ((zf || sf != of)) goto L_95a663;
L_95a5ed: /* 95a5ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_95a5f0: /* 95a5f0: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a5f3: je 0x95a657 */
  if (zf) goto L_95a657;
L_95a5f5: /* 95a5f5: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 95a5f8: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95a5fb: jne 0x95a657 */
  if (!zf) goto L_95a657;
L_95a5fd: /* 95a5fd: call 0x95f140 */
  esp -= 4; W32(esp, 0x95a602u); SPILL(); f_95f140(); if (g_unwind) return; RELOAD();
/* 95a602: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 95a608: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95a60a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a60b: mov esi, eax */
  esi = eax;
/* 95a60d: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95a610: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a611: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a612: call 0x94f0c0 */
  esp -= 4; W32(esp, 0x95a617u); SPILL(); f_94f0c0(); if (g_unwind) return; RELOAD();
/* 95a617: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 95a619: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 95a61c: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 95a61f: mov edx, ebx */
  edx = ebx;
/* 95a621: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95a624: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95a627: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a62a: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  zf = (r) == 0;
  ecx = r;
  }
/* 95a62c: je 0x95a636 */
  if (zf) goto L_95a636;
L_95a62e: /* 95a62e: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 95a631: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 95a634: jmp 0x95a63c */
  goto L_95a63c;
L_95a636: /* 95a636: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 95a639: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
L_95a63c: /* 95a63c: lea eax, [edi + 0x24] */
  eax = (uint32_t)(edi + 0x24u);
/* 95a63f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a641: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95a646u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95a646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a647: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 95a64a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a64b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95a650u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95a650: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95a654: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a657: /* 95a657: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 95a65a: mov ebp, dword ptr [ecx + ebx*4 + 8] */
  ebp = R32((uint32_t)(ecx + ebx*4 + 0x8u));
/* 95a65e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 95a65f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a661: jl 0x95a5f0 */
  if ((sf != of)) goto L_95a5f0;
L_95a663: /* 95a663: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95a667: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a669: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a66a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95a66b: je 0x95a682 */
  if (zf) goto L_95a682;
L_95a66d: /* 95a66d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_95a670: /* 95a670: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 95a673: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 95a675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a676: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95a67bu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95a67b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a67e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a680: jne 0x95a670 */
  if (!zf) goto L_95a670;
L_95a682: /* 95a682: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a683: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a684: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95a685: ret  */
  esp += 4; SPILL(); return;
}

void f_95a690(void) {
  LOAD_REGS();
L_95a690: /* 95a690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a691: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a698: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 95a6a0: jl 0x95a6b5 */
  if ((sf != of)) goto L_95a6b5;
L_95a6a2: /* 95a6a2: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95a6a7: push 0xaf92e4 */
  { uint32_t v = 0xaf92e4u; esp -= 4; W32(esp, v); }
/* 95a6ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a6ad: call 0x953470 */
  esp -= 4; W32(esp, 0x95a6b2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a6b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a6b5: /* 95a6b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a6b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a6b7: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95a6bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a6bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a6be: je 0x95a7de */
  if (zf) goto L_95a7de;
L_95a6c4: /* 95a6c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a6c5: mov ebp, 0x600000 */
  ebp = 0x600000u;
/* 95a6ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95a6d0: /* 95a6d0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 95a6d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a6d5: je 0x95a747 */
  if (zf) goto L_95a747;
L_95a6d7: /* 95a6d7: test dword ptr [esi + 0x3c], 0x100000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a6de: je 0x95a740 */
  if (zf) goto L_95a740;
L_95a6e0: /* 95a6e0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95a6e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a6e5: je 0x95a740 */
  if (zf) goto L_95a740;
L_95a6e7: /* 95a6e7: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95a6ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a6ec: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95a6ef: je 0x95a740 */
  if (zf) goto L_95a740;
L_95a6f1: /* 95a6f1: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95a6f4: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a6f7: jne 0x95a702 */
  if (!zf) goto L_95a702;
L_95a6f9: /* 95a6f9: or dword ptr [esi + 0x3c], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 95a700: jmp 0x95a73a */
  goto L_95a73a;
L_95a702: /* 95a702: test dword ptr [edi + 0x3c], 0x100000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a709: je 0x95a73a */
  if (zf) goto L_95a73a;
L_95a70b: /* 95a70b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 95a70e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a70f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a710: call 0x94eed0 */
  esp -= 4; W32(esp, 0x95a715u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 95a715: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a718: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a71a: jne 0x95a73a */
  if (!zf) goto L_95a73a;
L_95a71c: /* 95a71c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a71d: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95a71f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a721: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95a726u); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95a726: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95a729: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95a72d: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95a72f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a732: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95a733: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95a736: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_95a73a: /* 95a73a: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95a73c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a73e: jne 0x95a6f1 */
  if (!zf) goto L_95a6f1;
L_95a740: /* 95a740: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95a743: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a745: jne 0x95a6d0 */
  if (!zf) goto L_95a6d0;
L_95a747: /* 95a747: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 95a74b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a74d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95a74e: je 0x95a7de */
  if (zf) goto L_95a7de;
L_95a754: /* 95a754: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_95a758: /* 95a758: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 95a75b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a75d: je 0x95a780 */
  if (zf) goto L_95a780;
L_95a75f: /* 95a75f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95a762: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a767: je 0x95a779 */
  if (zf) goto L_95a779;
L_95a769: /* 95a769: test eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a76e: jne 0x95a779 */
  if (!zf) goto L_95a779;
L_95a770: /* 95a770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a771: call 0x95a520 */
  esp -= 4; W32(esp, 0x95a776u); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95a776: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a779: /* 95a779: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95a77c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a77e: jne 0x95a758 */
  if (!zf) goto L_95a758;
L_95a780: /* 95a780: mov eax, dword ptr [0xcf8c08] */
  eax = R32((uint32_t)(0xcf8c08u));
/* 95a785: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a787: je 0x95a7c0 */
  if (zf) goto L_95a7c0;
L_95a789: /* 95a789: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95a78c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a78e: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 95a791: je 0x95a7c0 */
  if (zf) goto L_95a7c0;
L_95a793: /* 95a793: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95a796: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95a799: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a79c: jne 0x95a7ba */
  if (!zf) goto L_95a7ba;
L_95a79e: /* 95a79e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 95a7a1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 95a7a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a7a5: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95a7a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a7a9: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95a7aeu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95a7ae: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 95a7b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a7b2: call 0x95a520 */
  esp -= 4; W32(esp, 0x95a7b7u); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95a7b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a7ba: /* 95a7ba: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95a7bc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a7be: jne 0x95a793 */
  if (!zf) goto L_95a793;
L_95a7c0: /* 95a7c0: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a7c7: jl 0x95a7de */
  if ((sf != of)) goto L_95a7de;
L_95a7c9: /* 95a7c9: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95a7cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a7d0: push 0xaf92b4 */
  { uint32_t v = 0xaf92b4u; esp -= 4; W32(esp, v); }
/* 95a7d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a7d6: call 0x953470 */
  esp -= 4; W32(esp, 0x95a7dbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a7db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a7de: /* 95a7de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a7df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a7e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a7e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95a7e2: ret  */
  esp += 4; SPILL(); return;
}

void f_95a7f0(void) {
  LOAD_REGS();
L_95a7f0: /* 95a7f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a7f1: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95a7f7: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95a7fc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95a7fd: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a800: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a801: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 95a805: mov dword ptr [esp + 4], 0x40a00000 */
  W32((uint32_t)(esp + 0x4u), 0x40a00000u);
/* 95a80d: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 95a813: jl 0x95a82d */
  if ((sf != of)) goto L_95a82d;
L_95a815: /* 95a815: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95a818: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95a81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a81f: push 0xaf938c */
  { uint32_t v = 0xaf938cu; esp -= 4; W32(esp, v); }
/* 95a824: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a825: call 0x953470 */
  esp -= 4; W32(esp, 0x95a82au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a82a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a82d: /* 95a82d: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95a830: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a832: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a833: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a834: je 0x95a861 */
  if (zf) goto L_95a861;
L_95a836: /* 95a836: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95a839: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a83b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a83d: je 0x95a861 */
  if (zf) goto L_95a861;
L_95a83f: /* 95a83f: nop  */
L_95a840: /* 95a840: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 95a843: mov esi, dword ptr [0xcf8bf8] */
  esi = R32((uint32_t)(0xcf8bf8u));
/* 95a849: mov dword ptr [edx + 0x34], esi */
  W32((uint32_t)(edx + 0x34u), esi);
/* 95a84c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 95a84f: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95a855: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95a858: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 95a85b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95a85d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a85f: jne 0x95a840 */
  if (!zf) goto L_95a840;
L_95a861: /* 95a861: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95a864: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a866: je 0x95a93c */
  if (zf) goto L_95a93c;
L_95a86c: /* 95a86c: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95a86f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a871: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95a874: je 0x95a93c */
  if (zf) goto L_95a93c;
L_95a87a: /* 95a87a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95a880: /* 95a880: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95a885: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 95a888: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95a88b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a88d: je 0x95a932 */
  if (zf) goto L_95a932;
L_95a893: /* 95a893: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95a898: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a89a: je 0x95a8bf */
  if (zf) goto L_95a8bf;
L_95a89c: /* 95a89c: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 95a8a2: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95a8a5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95a8a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a8a9: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95a8af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a8b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a8b1: push 0xaf9340 */
  { uint32_t v = 0xaf9340u; esp -= 4; W32(esp, v); }
/* 95a8b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a8b7: call 0x953470 */
  esp -= 4; W32(esp, 0x95a8bcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a8bc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a8bf: /* 95a8bf: inc dword ptr [0xcf78d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf78d0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf78d0u), r);
  }
/* 95a8c5: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 95a8c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a8c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a8ca: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95a8cfu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95a8cf: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95a8d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a8d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a8d4: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 95a8d7: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95a8dcu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95a8dc: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95a8df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a8e0: call 0x94f340 */
  esp -= 4; W32(esp, 0x95a8e5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95a8e5: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95a8eb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a8ee: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a8f0: jge 0x95a932 */
  if ((sf == of)) goto L_95a932;
L_95a8f2: /* 95a8f2: mov ecx, dword ptr [0xcf78cc] */
  ecx = R32((uint32_t)(0xcf78ccu));
/* 95a8f8: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 95a8fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a8fd: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 95a8ff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95a900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a901: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a902: mov dword ptr [0xcf78cc], ecx */
  W32((uint32_t)(0xcf78ccu), ecx);
/* 95a908: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95a90du); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95a90d: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95a912: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a915: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a918: jl 0x95a932 */
  if ((sf != of)) goto L_95a932;
L_95a91a: /* 95a91a: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95a91d: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95a923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a924: push 0xaf9314 */
  { uint32_t v = 0xaf9314u; esp -= 4; W32(esp, v); }
/* 95a929: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a92a: call 0x953470 */
  esp -= 4; W32(esp, 0x95a92fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a92f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a932: /* 95a932: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95a934: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a936: jne 0x95a880 */
  if (!zf) goto L_95a880;
L_95a93c: /* 95a93c: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 95a93f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a940: call 0x94f340 */
  esp -= 4; W32(esp, 0x95a945u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95a945: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95a94b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a94e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95a951: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95a952: jge 0x95a994 */
  if ((sf == of)) goto L_95a994;
L_95a954: /* 95a954: mov edx, dword ptr [0xcf78cc] */
  edx = R32((uint32_t)(0xcf78ccu));
/* 95a95a: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 95a95e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a95f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 95a961: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95a962: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a963: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a964: mov dword ptr [0xcf78cc], edx */
  W32((uint32_t)(0xcf78ccu), edx);
/* 95a96a: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95a96fu); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95a96f: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95a974: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a977: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95a97a: jl 0x95a994 */
  if ((sf != of)) goto L_95a994;
L_95a97c: /* 95a97c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95a97f: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95a985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95a986: push 0xaf9314 */
  { uint32_t v = 0xaf9314u; esp -= 4; W32(esp, v); }
/* 95a98b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95a98c: call 0x953470 */
  esp -= 4; W32(esp, 0x95a991u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95a991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95a994: /* 95a994: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95a995: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95a996: ret  */
  esp += 4; SPILL(); return;
}

void f_95a9a0(void) {
  LOAD_REGS();
L_95a9a0: /* 95a9a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a9a1: mov ebp, esp */
  ebp = esp;
/* 95a9a3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 95a9a6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95a9a9: mov eax, dword ptr [0xcf8c0c] */
  eax = R32((uint32_t)(0xcf8c0cu));
/* 95a9ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95a9af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95a9b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95a9b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95a9b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a9b3: xor ebp, ebp */
  ebp = 0;
/* 95a9b5: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x95a9bau); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 95a9ba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a9bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95a9bf: je 0x95ac41 */
  if (zf) goto L_95ac41;
L_95a9c5: /* 95a9c5: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95a9c8: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 95a9cb: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 95a9ce: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 95a9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95a9d1: call 0x953a60 */
  esp -= 4; W32(esp, 0x95a9d6u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95a9d6: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95a9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95a9dc: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95a9df: jne 0x95ac2a */
  if (!zf) goto L_95ac2a;
L_95a9e5: /* 95a9e5: and eax, 0x9fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95a9ea: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 95a9ed: mov ecx, dword ptr [0xcf85a0] */
  ecx = R32((uint32_t)(0xcf85a0u));
/* 95a9f3: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 95a9f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 95a9f9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95a9fb: jne 0x95aa0c */
  if (!zf) goto L_95aa0c;
L_95a9fd: /* 95a9fd: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 95aa02: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 95aa07: mov dword ptr [0xcf2f50], eax */
  W32((uint32_t)(0xcf2f50u), eax);
L_95aa0c: /* 95aa0c: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95aa0f: jne 0x95aaa7 */
  if (!zf) goto L_95aaa7;
L_95aa15: /* 95aa15: inc dword ptr [0xcf79a0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf79a0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf79a0u), r);
  }
/* 95aa1b: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95aa1e: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95aa21: je 0x95aa5a */
  if (zf) goto L_95aa5a;
L_95aa23: /* 95aa23: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 95aa26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95aa28: jne 0x95aa4f */
  if (!zf) goto L_95aa4f;
L_95aa2a: /* 95aa2a: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95aa2d: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95aa30: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95aa36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95aa37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95aa38: push 0xaf94e8 */
  { uint32_t v = 0xaf94e8u; esp -= 4; W32(esp, v); }
/* 95aa3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95aa3e: call 0x953470 */
  esp -= 4; W32(esp, 0x95aa43u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95aa43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95aa44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95aa45: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95aa47: call 0x96e130 */
  esp -= 4; W32(esp, 0x95aa4cu); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95aa4c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95aa4f: /* 95aa4f: mov edi, dword ptr [edi + 0x10] */
  edi = R32((uint32_t)(edi + 0x10u));
/* 95aa52: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95aa55: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95aa58: jne 0x95aa23 */
  if (!zf) goto L_95aa23;
L_95aa5a: /* 95aa5a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95aa5c: jne 0x95aa6c */
  if (!zf) goto L_95aa6c;
L_95aa5e: /* 95aa5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95aa5f: call 0x959290 */
  esp -= 4; W32(esp, 0x95aa64u); SPILL(); f_959290(); if (g_unwind) return; RELOAD();
/* 95aa64: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95aa67: jmp 0x95ac2a */
  goto L_95ac2a;
L_95aa6c: /* 95aa6c: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95aa73: jl 0x95aa91 */
  if ((sf != of)) goto L_95aa91;
L_95aa75: /* 95aa75: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95aa78: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95aa7b: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95aa81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95aa82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95aa83: push 0xaf94a0 */
  { uint32_t v = 0xaf94a0u; esp -= 4; W32(esp, v); }
/* 95aa88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95aa89: call 0x953470 */
  esp -= 4; W32(esp, 0x95aa8eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95aa8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95aa91: /* 95aa91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95aa93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95aa95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95aa97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95aa98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95aa99: call 0x95ba10 */
  esp -= 4; W32(esp, 0x95aa9eu); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 95aa9e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95aaa1: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 95aaa2: jmp 0x95ac2a */
  goto L_95ac2a;
L_95aaa7: /* 95aaa7: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 95aaaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95aaab: call 0x94f340 */
  esp -= 4; W32(esp, 0x95aab0u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95aab0: mov ebx, eax */
  ebx = eax;
/* 95aab2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95aab5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95aab7: jne 0x95ab7f */
  if (!zf) goto L_95ab7f;
L_95aabd: /* 95aabd: mov ecx, dword ptr [0xcf786c] */
  ecx = R32((uint32_t)(0xcf786cu));
/* 95aac3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95aac8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95aac9: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95aacc: mov dword ptr [0xcf786c], ecx */
  W32((uint32_t)(0xcf786cu), ecx);
/* 95aad2: jl 0x95aaec */
  if ((sf != of)) goto L_95aaec;
L_95aad4: /* 95aad4: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95aad7: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95aadd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95aade: push 0xaf945c */
  { uint32_t v = 0xaf945cu; esp -= 4; W32(esp, v); }
/* 95aae3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95aae4: call 0x953470 */
  esp -= 4; W32(esp, 0x95aae9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95aae9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95aaec: /* 95aaec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95aaee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95aaef: call 0x95dbb0 */
  esp -= 4; W32(esp, 0x95aaf4u); SPILL(); f_95dbb0(); if (g_unwind) return; RELOAD();
/* 95aaf4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 95aaf7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95aafa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95aafc: je 0x95ab79 */
  if (zf) goto L_95ab79;
L_95aafe: /* 95aafe: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95ab01: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ab03: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95ab06: je 0x95ab79 */
  if (zf) goto L_95ab79;
L_95ab08: /* 95ab08: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 95ab0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ab0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ab0d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95ab10: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95ab15u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95ab15: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 95ab18: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95ab1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ab1e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ab20: jne 0x95ab73 */
  if (!zf) goto L_95ab73;
L_95ab22: /* 95ab22: mov ecx, dword ptr [0xcf7868] */
  ecx = R32((uint32_t)(0xcf7868u));
/* 95ab28: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95ab2d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95ab2e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ab31: mov dword ptr [0xcf7868], ecx */
  W32((uint32_t)(0xcf7868u), ecx);
/* 95ab37: jl 0x95ab5a */
  if ((sf != of)) goto L_95ab5a;
L_95ab39: /* 95ab39: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95ab3c: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 95ab3f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95ab44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ab45: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95ab4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ab4c: push 0xaf9418 */
  { uint32_t v = 0xaf9418u; esp -= 4; W32(esp, v); }
/* 95ab51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ab52: call 0x953470 */
  esp -= 4; W32(esp, 0x95ab57u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ab57: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ab5a: /* 95ab5a: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 95ab5d: or eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95ab62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ab63: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95ab68: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 95ab6b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95ab70u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95ab70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ab73: /* 95ab73: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95ab75: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ab77: jne 0x95ab08 */
  if (!zf) goto L_95ab08;
L_95ab79: /* 95ab79: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 95ab7a: jmp 0x95ac2a */
  goto L_95ac2a;
L_95ab7f: /* 95ab7f: cmp ebx, dword ptr [0xcf85cc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf85ccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ab85: jge 0x95ac2a */
  if ((sf == of)) goto L_95ac2a;
L_95ab8b: /* 95ab8b: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 95ab8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ab90: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 95ab94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ab95: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 95ab99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ab9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ab9b: call 0x9599d0 */
  esp -= 4; W32(esp, 0x95aba0u); SPILL(); f_9599d0(); if (g_unwind) return; RELOAD();
/* 95aba0: mov edi, eax */
  edi = eax;
/* 95aba2: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95aba7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95abaa: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95abad: jl 0x95abd5 */
  if ((sf != of)) goto L_95abd5;
L_95abaf: /* 95abaf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 95abb3: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95abb6: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95abb9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95abbe: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95abc1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95abc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95abc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95abc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95abc7: push 0xaf93c8 */
  { uint32_t v = 0xaf93c8u; esp -= 4; W32(esp, v); }
/* 95abcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95abcd: call 0x953470 */
  esp -= 4; W32(esp, 0x95abd2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95abd2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95abd5: /* 95abd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95abd7: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 95abdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95abdc: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 95abe0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95abe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95abe2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95abe3: call 0x95ba10 */
  esp -= 4; W32(esp, 0x95abe8u); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 95abe8: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 95abed: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95abf0: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 95abf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95abf3: je 0x95ac2a */
  if (zf) goto L_95ac2a;
L_95abf5: /* 95abf5: fld dword ptr [0xcf7864] */
  { double v = F32((uint32_t)(0xcf7864u)); FPUSH(v); }
/* 95abfb: mov eax, dword ptr [0xcf785c] */
  eax = R32((uint32_t)(0xcf785cu));
/* 95ac00: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 95ac04: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95ac05: mov dword ptr [0xcf785c], eax */
  W32((uint32_t)(0xcf785cu), eax);
/* 95ac0a: fstp dword ptr [0xcf7864] */
  WF32((uint32_t)(0xcf7864u), ST0); FPOP();
/* 95ac10: fld dword ptr [0xcf7860] */
  { double v = F32((uint32_t)(0xcf7860u)); FPUSH(v); }
/* 95ac16: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 95ac1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ac1c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95ac1f: jp 0x95ac2a */
  if (pf) goto L_95ac2a;
L_95ac21: /* 95ac21: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95ac25: mov dword ptr [0xcf7860], eax */
  W32((uint32_t)(0xcf7860u), eax);
L_95ac2a: /* 95ac2a: mov ecx, dword ptr [0xcf8c0c] */
  ecx = R32((uint32_t)(0xcf8c0cu));
/* 95ac30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ac31: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x95ac36u); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 95ac36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ac39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ac3b: jne 0x95a9c5 */
  if (!zf) goto L_95a9c5;
L_95ac41: /* 95ac41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ac42: mov eax, ebp */
  eax = ebp;
/* 95ac44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ac45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ac46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95ac47: mov esp, ebp */
  esp = ebp;
/* 95ac49: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ac4a: ret  */
  esp += 4; SPILL(); return;
}

void f_95ac50(void) {
  LOAD_REGS();
L_95ac50: /* 95ac50: mov eax, dword ptr [0xcf85a0] */
  eax = R32((uint32_t)(0xcf85a0u));
/* 95ac55: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 95ac5b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95ac5e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95ac5f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ac61: jne 0x95ac72 */
  if (!zf) goto L_95ac72;
L_95ac63: /* 95ac63: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 95ac68: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 95ac6d: mov dword ptr [0xcf2f50], eax */
  W32((uint32_t)(0xcf2f50u), eax);
L_95ac72: /* 95ac72: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ac79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ac7a: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 95ac7e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ac7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ac80: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 95ac84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ac85: jl 0x95aca9 */
  if ((sf != of)) goto L_95aca9;
L_95ac87: /* 95ac87: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 95ac8b: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95ac8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ac8f: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 95ac92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ac93: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95ac98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ac99: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95ac9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ac9b: push 0xaf95a4 */
  { uint32_t v = 0xaf95a4u; esp -= 4; W32(esp, v); }
/* 95aca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95aca1: call 0x953470 */
  esp -= 4; W32(esp, 0x95aca6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95aca6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95aca9: /* 95aca9: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 95acac: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95acaf: jne 0x95acb9 */
  if (!zf) goto L_95acb9;
L_95acb1: /* 95acb1: mov edi, esi */
  edi = esi;
/* 95acb3: mov esi, ebx */
  esi = ebx;
/* 95acb5: mov ebx, edi */
  ebx = edi;
/* 95acb7: jmp 0x95acbb */
  goto L_95acbb;
L_95acb9: /* 95acb9: mov edi, ebx */
  edi = ebx;
L_95acbb: /* 95acbb: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 95acbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95acc0: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 95acc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95acc5: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 95acc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95acca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95accb: call 0x9599d0 */
  esp -= 4; W32(esp, 0x95acd0u); SPILL(); f_9599d0(); if (g_unwind) return; RELOAD();
/* 95acd0: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 95acd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95acd5: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 95acd9: mov ebp, eax */
  ebp = eax;
/* 95acdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95acdc: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 95ace0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ace1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ace2: call 0x9599d0 */
  esp -= 4; W32(esp, 0x95ace7u); SPILL(); f_9599d0(); if (g_unwind) return; RELOAD();
/* 95ace7: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 95aceb: fcomp dword ptr [esp + 0x44] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x44u)));
  FPOP();
/* 95acef: mov ecx, eax */
  ecx = eax;
/* 95acf1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95acf4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95acf6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95acf9: jnp 0x95adc4 */
  if (!pf) goto L_95adc4;
L_95acff: /* 95acff: mov eax, dword ptr [0xcf83f4] */
  eax = R32((uint32_t)(0xcf83f4u));
/* 95ad04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ad06: je 0x95add9 */
  if (zf) goto L_95add9;
L_95ad0c: /* 95ad0c: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95ad0f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95ad12: jne 0x95add9 */
  if (!zf) goto L_95add9;
L_95ad18: /* 95ad18: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 95ad1e: fchs  */
  ST0 = -ST0;
/* 95ad20: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 95ad24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ad26: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95ad29: jp 0x95ad3c */
  if (pf) goto L_95ad3c;
L_95ad2b: /* 95ad2b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 95ad2f: fcomp dword ptr [0xcf8bbc] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bbcu)));
  FPOP();
/* 95ad35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ad37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95ad3a: jnp 0x95ad57 */
  if (!pf) goto L_95ad57;
L_95ad3c: /* 95ad3c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 95ad40: fmul qword ptr [0xa11218] */
  ST0 = ST0 * (F64((uint32_t)(0xa11218u)));
/* 95ad46: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 95ad4a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 95ad4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ad4e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95ad51: jne 0x95add9 */
  if (!zf) goto L_95add9;
L_95ad57: /* 95ad57: fld dword ptr [0xcf77f4] */
  { double v = F32((uint32_t)(0xcf77f4u)); FPUSH(v); }
/* 95ad5d: mov eax, dword ptr [0xcf77ec] */
  eax = R32((uint32_t)(0xcf77ecu));
/* 95ad62: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 95ad66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95ad67: mov dword ptr [0xcf77ec], eax */
  W32((uint32_t)(0xcf77ecu), eax);
/* 95ad6c: fstp dword ptr [0xcf77f4] */
  WF32((uint32_t)(0xcf77f4u), ST0); FPOP();
/* 95ad72: fld dword ptr [0xcf77f0] */
  { double v = F32((uint32_t)(0xcf77f0u)); FPUSH(v); }
/* 95ad78: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 95ad7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ad7e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95ad81: jp 0x95ad8c */
  if (pf) goto L_95ad8c;
L_95ad83: /* 95ad83: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95ad87: mov dword ptr [0xcf77f0], eax */
  W32((uint32_t)(0xcf77f0u), eax);
L_95ad8c: /* 95ad8c: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ad93: jl 0x95adc4 */
  if ((sf != of)) goto L_95adc4;
L_95ad95: /* 95ad95: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 95ad99: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 95ad9c: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95ad9f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95ada4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95ada7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95adaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95adab: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 95adaf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95adb2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95adb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95adb6: push 0xaf9548 */
  { uint32_t v = 0xaf9548u; esp -= 4; W32(esp, v); }
/* 95adbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95adbc: call 0x953470 */
  esp -= 4; W32(esp, 0x95adc1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95adc1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95adc4: /* 95adc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95adc6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 95adca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95adcb: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 95adcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95add0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95add1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95add2: call 0x95ba10 */
  esp -= 4; W32(esp, 0x95add7u); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 95add7: jmp 0x95adf4 */
  goto L_95adf4;
L_95add9: /* 95add9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95addb: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 95addf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ade0: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 95ade4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ade5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ade6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ade7: call 0x95ba10 */
  esp -= 4; W32(esp, 0x95adecu); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 95adec: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 95adf0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_95adf4: /* 95adf4: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 95adf9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95adfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95adfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95adff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ae00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ae01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95ae02: je 0x95aec3 */
  if (zf) goto L_95aec3;
L_95ae08: /* 95ae08: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95ae0c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ae0f: jne 0x95ae4f */
  if (!zf) goto L_95ae4f;
L_95ae11: /* 95ae11: fld dword ptr [0xcf77c8] */
  { double v = F32((uint32_t)(0xcf77c8u)); FPUSH(v); }
/* 95ae17: mov eax, dword ptr [0xcf77c0] */
  eax = R32((uint32_t)(0xcf77c0u));
/* 95ae1c: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 95ae20: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95ae21: mov dword ptr [0xcf77c0], eax */
  W32((uint32_t)(0xcf77c0u), eax);
/* 95ae26: fstp dword ptr [0xcf77c8] */
  WF32((uint32_t)(0xcf77c8u), ST0); FPOP();
/* 95ae2c: fld dword ptr [0xcf77c4] */
  { double v = F32((uint32_t)(0xcf77c4u)); FPUSH(v); }
/* 95ae32: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 95ae36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ae38: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95ae3b: jp 0x95aec3 */
  if (pf) goto L_95aec3;
L_95ae41: /* 95ae41: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 95ae45: mov dword ptr [0xcf77c4], ecx */
  W32((uint32_t)(0xcf77c4u), ecx);
/* 95ae4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ae4e: ret  */
  esp += 4; SPILL(); return;
L_95ae4f: /* 95ae4f: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ae52: jne 0x95ae8e */
  if (!zf) goto L_95ae8e;
L_95ae54: /* 95ae54: fld dword ptr [0xcf7818] */
  { double v = F32((uint32_t)(0xcf7818u)); FPUSH(v); }
/* 95ae5a: mov eax, dword ptr [0xcf7810] */
  eax = R32((uint32_t)(0xcf7810u));
/* 95ae5f: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 95ae63: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95ae64: mov dword ptr [0xcf7810], eax */
  W32((uint32_t)(0xcf7810u), eax);
/* 95ae69: fstp dword ptr [0xcf7818] */
  WF32((uint32_t)(0xcf7818u), ST0); FPOP();
/* 95ae6f: fld dword ptr [0xcf7814] */
  { double v = F32((uint32_t)(0xcf7814u)); FPUSH(v); }
/* 95ae75: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 95ae79: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ae7b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95ae7e: jp 0x95aec3 */
  if (pf) goto L_95aec3;
L_95ae80: /* 95ae80: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 95ae84: mov dword ptr [0xcf7814], edx */
  W32((uint32_t)(0xcf7814u), edx);
/* 95ae8a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ae8d: ret  */
  esp += 4; SPILL(); return;
L_95ae8e: /* 95ae8e: fld dword ptr [0xcf782c] */
  { double v = F32((uint32_t)(0xcf782cu)); FPUSH(v); }
/* 95ae94: mov eax, dword ptr [0xcf7824] */
  eax = R32((uint32_t)(0xcf7824u));
/* 95ae99: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 95ae9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95ae9e: mov dword ptr [0xcf7824], eax */
  W32((uint32_t)(0xcf7824u), eax);
/* 95aea3: fstp dword ptr [0xcf782c] */
  WF32((uint32_t)(0xcf782cu), ST0); FPOP();
/* 95aea9: fld dword ptr [0xcf7828] */
  { double v = F32((uint32_t)(0xcf7828u)); FPUSH(v); }
/* 95aeaf: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 95aeb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95aeb5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95aeb8: jp 0x95aec3 */
  if (pf) goto L_95aec3;
L_95aeba: /* 95aeba: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95aebe: mov dword ptr [0xcf7828], eax */
  W32((uint32_t)(0xcf7828u), eax);
L_95aec3: /* 95aec3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95aec6: ret  */
  esp += 4; SPILL(); return;
}

void f_95aed0(void) {
  LOAD_REGS();
L_95aed0: /* 95aed0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95aed3: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 95aed8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95aed9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95aeda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95aedb: xor esi, esi */
  esi = 0;
/* 95aedd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95aedf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95aee0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 95aee4: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 95aee8: jne 0x95aeef */
  if (!zf) goto L_95aeef;
L_95aeea: /* 95aeea: call 0x958540 */
  esp -= 4; W32(esp, 0x95aeefu); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
L_95aeef: /* 95aeef: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 95aef4: mov ecx, dword ptr [0xcf8560] */
  ecx = R32((uint32_t)(0xcf8560u));
/* 95aefa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95aefb: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95aefd: mov dword ptr [0xcf7a80], eax */
  W32((uint32_t)(0xcf7a80u), eax);
/* 95af02: je 0x95af22 */
  if (zf) goto L_95af22;
L_95af04: /* 95af04: cmp dword ptr [0xcf8be0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95af0a: je 0x95af22 */
  if (zf) goto L_95af22;
L_95af0c: /* 95af0c: mov edx, dword ptr [0xcf8c4c] */
  edx = R32((uint32_t)(0xcf8c4cu));
/* 95af12: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95af14: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95af16: jle 0x95af22 */
  if ((zf || sf != of)) goto L_95af22;
L_95af18: /* 95af18: call 0x95d8a0 */
  esp -= 4; W32(esp, 0x95af1du); SPILL(); f_95d8a0(); if (g_unwind) return; RELOAD();
/* 95af1d: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
L_95af22: /* 95af22: cmp dword ptr [0xcf85a0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85a0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95af28: jne 0x95af3c */
  if (!zf) goto L_95af3c;
L_95af2a: /* 95af2a: mov ecx, dword ptr [0xcf8590] */
  ecx = R32((uint32_t)(0xcf8590u));
/* 95af30: mov dword ptr [0xcf8438], ecx */
  W32((uint32_t)(0xcf8438u), ecx);
/* 95af36: mov dword ptr [0xcf2f50], ecx */
  W32((uint32_t)(0xcf2f50u), ecx);
L_95af3c: /* 95af3c: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95af43: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 95af47: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 95af4b: jl 0x95af6e */
  if ((sf != of)) goto L_95af6e;
L_95af4d: /* 95af4d: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95af50: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95af53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95af54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95af55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95af56: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95af5b: push 0xaf9688 */
  { uint32_t v = 0xaf9688u; esp -= 4; W32(esp, v); }
/* 95af60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95af61: call 0x953470 */
  esp -= 4; W32(esp, 0x95af66u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95af66: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 95af6b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95af6e: /* 95af6e: cmp edi, dword ptr [0xcf8b68] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95af74: mov ebp, 4 */
  ebp = 0x4u;
/* 95af79: jne 0x95afb6 */
  if (!zf) goto L_95afb6;
L_95af7b: /* 95af7b: mov ecx, dword ptr [0xcf8438] */
  ecx = R32((uint32_t)(0xcf8438u));
/* 95af81: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 95af87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95af88: mov dword ptr [0xcf8438], ebp */
  W32((uint32_t)(0xcf8438u), ebp);
/* 95af8e: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95af91: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 95af95: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95af98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95af99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95af9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95af9b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95afa0: push 0xaf9628 */
  { uint32_t v = 0xaf9628u; esp -= 4; W32(esp, v); }
/* 95afa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95afa6: call 0x953470 */
  esp -= 4; W32(esp, 0x95afabu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95afab: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95afae: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_95afb6: /* 95afb6: cmp dword ptr [0xcf8438], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95afbc: jl 0x95b032 */
  if ((sf != of)) goto L_95b032;
L_95afbe: /* 95afbe: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95afc4: push 0xaf9618 */
  { uint32_t v = 0xaf9618u; esp -= 4; W32(esp, v); }
/* 95afc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95afca: call 0x953470 */
  esp -= 4; W32(esp, 0x95afcfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95afcf: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 95afd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95afd5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95afd7: je 0x95b002 */
  if (zf) goto L_95b002;
L_95afd9: /* 95afd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95afe0: /* 95afe0: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 95afe3: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95afe8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95afe9: push 0xaf9610 */
  { uint32_t v = 0xaf9610u; esp -= 4; W32(esp, v); }
/* 95afee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95afef: call 0x953470 */
  esp -= 4; W32(esp, 0x95aff4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95aff4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95aff7: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95aff9: je 0x95b002 */
  if (zf) goto L_95b002;
L_95affb: /* 95affb: mov ebx, dword ptr [ebx + 0x10] */
  ebx = R32((uint32_t)(ebx + 0x10u));
/* 95affe: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b000: jne 0x95afe0 */
  if (!zf) goto L_95afe0;
L_95b002: /* 95b002: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95b008: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 95b00d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b00e: call 0x953470 */
  esp -= 4; W32(esp, 0x95b013u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b013: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b01b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b01d: jl 0x95b032 */
  if ((sf != of)) goto L_95b032;
L_95b01f: /* 95b01f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b021: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b023: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b025: push 0xaf9600 */
  { uint32_t v = 0xaf9600u; esp -= 4; W32(esp, v); }
/* 95b02a: call 0x953700 */
  esp -= 4; W32(esp, 0x95b02fu); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95b02f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b032: /* 95b032: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 95b035: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 95b038: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b039: call 0x95a520 */
  esp -= 4; W32(esp, 0x95b03eu); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95b03e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b03f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b040: call 0x95b390 */
  esp -= 4; W32(esp, 0x95b045u); SPILL(); f_95b390(); if (g_unwind) return; RELOAD();
/* 95b045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b046: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b047: call 0x95b5e0 */
  esp -= 4; W32(esp, 0x95b04cu); SPILL(); f_95b5e0(); if (g_unwind) return; RELOAD();
/* 95b04c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b04d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b04e: call 0x95b890 */
  esp -= 4; W32(esp, 0x95b053u); SPILL(); f_95b890(); if (g_unwind) return; RELOAD();
/* 95b053: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95b056: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95b059: lea ebx, [edi + 0x20] */
  ebx = (uint32_t)(edi + 0x20u);
/* 95b05c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b05f: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b061: je 0x95b06f */
  if (zf) goto L_95b06f;
L_95b063: /* 95b063: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95b064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b066: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b067: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x95b06cu); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 95b06c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b06f: /* 95b06f: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95b072: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95b075: jne 0x95b082 */
  if (!zf) goto L_95b082;
L_95b077: /* 95b077: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 95b079: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b07a: call 0x95ca00 */
  esp -= 4; W32(esp, 0x95b07fu); SPILL(); f_95ca00(); if (g_unwind) return; RELOAD();
/* 95b07f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b082: /* 95b082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b083: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b084: call 0x95b2c0 */
  esp -= 4; W32(esp, 0x95b089u); SPILL(); f_95b2c0(); if (g_unwind) return; RELOAD();
/* 95b089: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b08a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b08b: call 0x95d750 */
  esp -= 4; W32(esp, 0x95b090u); SPILL(); f_95d750(); if (g_unwind) return; RELOAD();
/* 95b090: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95b094: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b097: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b099: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95b09a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95b09b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95b09c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95b09d: je 0x95b0bc */
  if (zf) goto L_95b0bc;
L_95b09f: /* 95b09f: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95b0a5: push 0xaf95dc */
  { uint32_t v = 0xaf95dcu; esp -= 4; W32(esp, v); }
/* 95b0aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b0ab: call 0x953470 */
  esp -= 4; W32(esp, 0x95b0b0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b0b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 95b0b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b0b7: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
L_95b0bc: /* 95b0bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b0bf: ret  */
  esp += 4; SPILL(); return;
}

void f_95b0c0(void) {
  LOAD_REGS();
L_95b0c0: /* 95b0c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95b0c3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b0c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b0c9: xor esi, esi */
  esi = 0;
/* 95b0cb: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b0ce: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 95b0d2: jl 0x95b0e7 */
  if ((sf != of)) goto L_95b0e7;
L_95b0d4: /* 95b0d4: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b0d9: push 0xaf974c */
  { uint32_t v = 0xaf974cu; esp -= 4; W32(esp, v); }
/* 95b0de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b0df: call 0x953470 */
  esp -= 4; W32(esp, 0x95b0e4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b0e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b0e7: /* 95b0e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b0e8: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 95b0ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b0ee: je 0x95b29a */
  if (zf) goto L_95b29a;
L_95b0f4: /* 95b0f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b0f5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_95b0f6: /* 95b0f6: mov ebp, dword ptr [edi + 0x1c] */
  ebp = R32((uint32_t)(edi + 0x1cu));
/* 95b0f9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b0fb: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 95b0ff: je 0x95b286 */
  if (zf) goto L_95b286;
L_95b105: /* 95b105: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 95b108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b10a: jne 0x95b27c */
  if (!zf) goto L_95b27c;
L_95b110: /* 95b110: test byte ptr [edi + 0x3f], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3fu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95b114: jne 0x95b138 */
  if (!zf) goto L_95b138;
L_95b116: /* 95b116: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95b119: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95b11f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b120: push 0xaf9724 */
  { uint32_t v = 0xaf9724u; esp -= 4; W32(esp, v); }
/* 95b125: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b126: call 0x953470 */
  esp -= 4; W32(esp, 0x95b12bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b12b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b12d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b12e: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95b130: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95b135u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95b135: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b138: /* 95b138: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95b13b: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 95b13e: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b140: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 95b143: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 95b147: jne 0x95b192 */
  if (!zf) goto L_95b192;
L_95b149: /* 95b149: inc dword ptr [0xcf79f0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf79f0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf79f0u), r);
  }
/* 95b14f: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95b152: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b154: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 95b157: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95b15a: je 0x95b176 */
  if (zf) goto L_95b176;
L_95b15c: /* 95b15c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b15e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b160: je 0x95b176 */
  if (zf) goto L_95b176;
L_95b162: /* 95b162: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95b165: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b167: je 0x95b170 */
  if (zf) goto L_95b170;
L_95b169: /* 95b169: or dword ptr [eax + 0x14], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x14u), r);
  }
L_95b170: /* 95b170: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b172: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b174: jne 0x95b162 */
  if (!zf) goto L_95b162;
L_95b176: /* 95b176: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95b178: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b17a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b17c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b17d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b17e: mov dword ptr [ebx + 0x10], 0 */
  W32((uint32_t)(ebx + 0x10u), 0x0u);
/* 95b185: call 0x95ba10 */
  esp -= 4; W32(esp, 0x95b18au); SPILL(); f_95ba10(); if (g_unwind) return; RELOAD();
/* 95b18a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b18d: jmp 0x95b278 */
  goto L_95b278;
L_95b192: /* 95b192: xor ebx, ebx */
  ebx = 0;
/* 95b194: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b196: mov ebp, edi */
  ebp = edi;
/* 95b198: je 0x95b1f0 */
  if (zf) goto L_95b1f0;
L_95b19a: /* 95b19a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95b1a0: /* 95b1a0: test dword ptr [esi + 0x3c], 0x2000400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x2000400u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b1a7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 95b1aa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 95b1ae: je 0x95b1b9 */
  if (zf) goto L_95b1b9;
L_95b1b0: /* 95b1b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b1b1: call 0x956960 */
  esp -= 4; W32(esp, 0x95b1b6u); SPILL(); f_956960(); if (g_unwind) return; RELOAD();
/* 95b1b6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b1b9: /* 95b1b9: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95b1bc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95b1bf: or ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95b1c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b1c7: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95b1ca: je 0x95b1db */
  if (zf) goto L_95b1db;
L_95b1cc: /* 95b1cc: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 95b1cf: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 95b1d2: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 95b1d9: jmp 0x95b1de */
  goto L_95b1de;
L_95b1db: /* 95b1db: mov ebp, esi */
  ebp = esi;
/* 95b1dd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_95b1de: /* 95b1de: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 95b1e2: xor eax, eax */
  eax = 0;
/* 95b1e4: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b1e6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 95b1e9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95b1ea: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 95b1ec: mov esi, eax */
  esi = eax;
/* 95b1ee: jne 0x95b1a0 */
  if (!zf) goto L_95b1a0;
L_95b1f0: /* 95b1f0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95b1f4: test dword ptr [eax + 0x3c], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b1fb: je 0x95b208 */
  if (zf) goto L_95b208;
L_95b1fd: /* 95b1fd: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 95b200: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b202: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 95b206: jne 0x95b1f0 */
  if (!zf) goto L_95b1f0;
L_95b208: /* 95b208: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 95b20c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b20d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b20e: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 95b215: call 0x95aed0 */
  esp -= 4; W32(esp, 0x95b21au); SPILL(); f_95aed0(); if (g_unwind) return; RELOAD();
/* 95b21a: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95b21d: mov eax, ecx */
  eax = ecx;
/* 95b21f: and eax, 0x1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95b224: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95b226: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b229: cmp eax, 0x1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b22e: jle 0x95b23b */
  if ((zf || sf != of)) goto L_95b23b;
L_95b230: /* 95b230: or ecx, 0x1ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95b236: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95b239: jmp 0x95b24a */
  goto L_95b24a;
L_95b23b: /* 95b23b: mov edx, ecx */
  edx = ecx;
/* 95b23d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 95b23f: and edx, 0x1ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95b245: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 95b247: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
L_95b24a: /* 95b24a: mov edx, dword ptr [0xcf7854] */
  edx = R32((uint32_t)(0xcf7854u));
/* 95b250: mov ecx, dword ptr [0xcf7850] */
  ecx = R32((uint32_t)(0xcf7850u));
/* 95b256: mov eax, dword ptr [0xcf784c] */
  eax = R32((uint32_t)(0xcf784cu));
/* 95b25b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 95b25f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95b260: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95b262: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b264: mov dword ptr [0xcf7854], edx */
  W32((uint32_t)(0xcf7854u), edx);
/* 95b26a: mov dword ptr [0xcf7850], ecx */
  W32((uint32_t)(0xcf7850u), ecx);
/* 95b270: jge 0x95b278 */
  if ((sf == of)) goto L_95b278;
L_95b272: /* 95b272: mov dword ptr [0xcf784c], ebx */
  W32((uint32_t)(0xcf784cu), ebx);
L_95b278: /* 95b278: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_95b27c: /* 95b27c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b27e: mov edi, ebp */
  edi = ebp;
/* 95b280: jne 0x95b0f6 */
  if (!zf) goto L_95b0f6;
L_95b286: /* 95b286: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95b28a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b28c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95b28d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95b28e: je 0x95b29a */
  if (zf) goto L_95b29a;
L_95b290: /* 95b290: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95b294: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_95b29a: /* 95b29a: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b2a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95b2a2: jl 0x95b2b9 */
  if ((sf != of)) goto L_95b2b9;
L_95b2a4: /* 95b2a4: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95b2aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b2ab: push 0xaf96d8 */
  { uint32_t v = 0xaf96d8u; esp -= 4; W32(esp, v); }
/* 95b2b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b2b1: call 0x953470 */
  esp -= 4; W32(esp, 0x95b2b6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b2b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b2b9: /* 95b2b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95b2ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b2bd: ret  */
  esp += 4; SPILL(); return;
}

void f_95b2c0(void) {
  LOAD_REGS();
L_95b2c0: /* 95b2c0: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b2c7: jl 0x95b2dc */
  if ((sf != of)) goto L_95b2dc;
L_95b2c9: /* 95b2c9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b2ce: push 0xaf97a8 */
  { uint32_t v = 0xaf97a8u; esp -= 4; W32(esp, v); }
/* 95b2d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b2d4: call 0x953470 */
  esp -= 4; W32(esp, 0x95b2d9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b2d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b2dc: /* 95b2dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95b2dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b2de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b2df: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95b2e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b2e4: call 0x95f280 */
  esp -= 4; W32(esp, 0x95b2e9u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 95b2e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b2ea: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x95b2efu); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 95b2ef: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 95b2f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 95b2f6: and ecx, 0xffffefff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffefffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95b2fc: or ecx, 0x10000200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000200u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95b302: mov dword ptr [edi + 0x3c], ecx */
  W32((uint32_t)(edi + 0x3cu), ecx);
/* 95b305: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 95b308: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b30b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b30d: je 0x95b32c */
  if (zf) goto L_95b32c;
L_95b30f: /* 95b30f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_95b310: /* 95b310: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 95b313: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b315: call 0x95dbb0 */
  esp -= 4; W32(esp, 0x95b31au); SPILL(); f_95dbb0(); if (g_unwind) return; RELOAD();
/* 95b31a: xor edx, edx */
  edx = 0;
/* 95b31c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b31f: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b321: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 95b324: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 95b325: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 95b327: mov esi, edx */
  esi = edx;
/* 95b329: jne 0x95b310 */
  if (!zf) goto L_95b310;
L_95b32b: /* 95b32b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_95b32c: /* 95b32c: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 95b32f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b331: je 0x95b366 */
  if (zf) goto L_95b366;
L_95b333: /* 95b333: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95b336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b337: call 0x94f340 */
  esp -= 4; W32(esp, 0x95b33cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95b33c: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95b342: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95b345: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b348: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b34a: jg 0x95b366 */
  if ((!zf && sf == of)) goto L_95b366;
L_95b34c: /* 95b34c: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 95b352: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 95b355: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b357: call 0x953a60 */
  esp -= 4; W32(esp, 0x95b35cu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95b35c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b35f: mov dword ptr [edi + 0x14], 0 */
  W32((uint32_t)(edi + 0x14u), 0x0u);
L_95b366: /* 95b366: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b36d: jl 0x95b38a */
  if ((sf != of)) goto L_95b38a;
L_95b36f: /* 95b36f: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95b372: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 95b375: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b37a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b37b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b37c: push 0xaf9768 */
  { uint32_t v = 0xaf9768u; esp -= 4; W32(esp, v); }
/* 95b381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b382: call 0x953470 */
  esp -= 4; W32(esp, 0x95b387u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b387: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b38a: /* 95b38a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95b38b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95b38c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95b38d: ret  */
  esp += 4; SPILL(); return;
}

void f_95b390(void) {
  LOAD_REGS();
L_95b390: /* 95b390: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95b393: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95b397: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b398: mov ebx, dword ptr [0xcf8bf8] */
  ebx = R32((uint32_t)(0xcf8bf8u));
/* 95b39e: xor ecx, ecx */
  ecx = 0;
/* 95b3a0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 95b3a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95b3a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b3a3: mov dword ptr [0xcf8bf8], ebx */
  W32((uint32_t)(0xcf8bf8u), ebx);
/* 95b3a9: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 95b3ac: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b3ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b3af: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 95b3b3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 95b3b7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 95b3bb: je 0x95b3e7 */
  if (zf) goto L_95b3e7;
L_95b3bd: /* 95b3bd: mov edi, 0x400 */
  edi = 0x400u;
L_95b3c2: /* 95b3c2: cmp dword ptr [esi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b3c5: je 0x95b3cc */
  if (zf) goto L_95b3cc;
L_95b3c7: /* 95b3c7: test dword ptr [esi + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b3ca: je 0x95b3d9 */
  if (zf) goto L_95b3d9;
L_95b3cc: /* 95b3cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b3cd: call 0x956960 */
  esp -= 4; W32(esp, 0x95b3d2u); SPILL(); f_956960(); if (g_unwind) return; RELOAD();
/* 95b3d2: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95b3d6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b3d9: /* 95b3d9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b3db: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 95b3de: je 0x95b3e7 */
  if (zf) goto L_95b3e7;
L_95b3e0: /* 95b3e0: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 95b3e3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b3e5: jne 0x95b3c2 */
  if (!zf) goto L_95b3c2;
L_95b3e7: /* 95b3e7: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95b3ec: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 95b3f0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95b3f1: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 95b3f6: mov dword ptr [ebp + 0x34], eax */
  W32((uint32_t)(ebp + 0x34u), eax);
/* 95b3f9: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b3fe: mov esi, 4 */
  esi = 0x4u;
/* 95b403: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b405: jl 0x95b41a */
  if ((sf != of)) goto L_95b41a;
L_95b407: /* 95b407: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b40c: push 0xaf9850 */
  { uint32_t v = 0xaf9850u; esp -= 4; W32(esp, v); }
/* 95b411: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b412: call 0x953470 */
  esp -= 4; W32(esp, 0x95b417u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b417: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b41a: /* 95b41a: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 95b41d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b41f: je 0x95b456 */
  if (zf) goto L_95b456;
L_95b421: /* 95b421: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95b424: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b426: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b428: je 0x95b456 */
  if (zf) goto L_95b456;
L_95b42a: /* 95b42a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95b42e: mov edi, edi */
  edi = edi;
L_95b430: /* 95b430: mov edi, dword ptr [eax + 0x34] */
  edi = R32((uint32_t)(eax + 0x34u));
/* 95b433: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95b435: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b437: jne 0x95b443 */
  if (!zf) goto L_95b443;
L_95b439: /* 95b439: mov dword ptr [ecx - 4], 0 */
  W32((uint32_t)(ecx + 0xfffffffcu), 0x0u);
/* 95b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95b441: jmp 0x95b44c */
  goto L_95b44c;
L_95b443: /* 95b443: mov edi, dword ptr [0xcf8bf8] */
  edi = R32((uint32_t)(0xcf8bf8u));
/* 95b449: mov dword ptr [eax + 0x34], edi */
  W32((uint32_t)(eax + 0x34u), edi);
L_95b44c: /* 95b44c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b44e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b450: jne 0x95b430 */
  if (!zf) goto L_95b430;
L_95b452: /* 95b452: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_95b456: /* 95b456: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 95b459: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b45a: call 0x94e9b0 */
  esp -= 4; W32(esp, 0x95b45fu); SPILL(); f_94e9b0(); if (g_unwind) return; RELOAD();
/* 95b45f: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b464: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b467: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b469: jl 0x95b47f */
  if ((sf != of)) goto L_95b47f;
L_95b46b: /* 95b46b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95b471: push 0xaf9824 */
  { uint32_t v = 0xaf9824u; esp -= 4; W32(esp, v); }
/* 95b476: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b477: call 0x953470 */
  esp -= 4; W32(esp, 0x95b47cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b47c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b47f: /* 95b47f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95b483: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 95b486: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b488: je 0x95b5aa */
  if (zf) goto L_95b5aa;
L_95b48e: /* 95b48e: mov edi, edi */
  edi = edi;
L_95b490: /* 95b490: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 95b493: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b495: je 0x95b599 */
  if (zf) goto L_95b599;
L_95b49b: /* 95b49b: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95b49e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95b4a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b4a3: je 0x95b599 */
  if (zf) goto L_95b599;
L_95b4a9: /* 95b4a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95b4b0: /* 95b4b0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 95b4b4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95b4b7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 95b4bb: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 95b4be: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b4c0: je 0x95b58b */
  if (zf) goto L_95b58b;
L_95b4c6: /* 95b4c6: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95b4c9: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95b4cc: je 0x95b54a */
  if (zf) goto L_95b54a;
L_95b4ce: /* 95b4ce: cmp eax, dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b4d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b4d5: je 0x95b536 */
  if (zf) goto L_95b536;
L_95b4d7: /* 95b4d7: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 95b4da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b4db: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b4e0u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b4e0: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95b4e3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95b4e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b4e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b4e6: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95b4ebu); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95b4eb: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95b4f1: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 95b4f5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b4f8: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 95b4fb: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 95b4fe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95b4ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b501: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 95b505: je 0x95b58b */
  if (zf) goto L_95b58b;
L_95b50b: /* 95b50b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95b50e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b510: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 95b513: je 0x95b58b */
  if (zf) goto L_95b58b;
L_95b515: /* 95b515: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 95b518: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95b51b: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b51d: je 0x95b52c */
  if (zf) goto L_95b52c;
L_95b51f: /* 95b51f: cmp dword ptr [eax + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b522: je 0x95b531 */
  if (zf) goto L_95b531;
L_95b524: /* 95b524: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b526: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b528: jne 0x95b515 */
  if (!zf) goto L_95b515;
L_95b52a: /* 95b52a: jmp 0x95b58b */
  goto L_95b58b;
L_95b52c: /* 95b52c: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 95b52f: jmp 0x95b58b */
  goto L_95b58b;
L_95b531: /* 95b531: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 95b534: jmp 0x95b58b */
  goto L_95b58b;
L_95b536: /* 95b536: call 0x95a520 */
  esp -= 4; W32(esp, 0x95b53bu); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95b53b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95b53e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b53f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b540: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95b545u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95b545: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b548: jmp 0x95b58b */
  goto L_95b58b;
L_95b54a: /* 95b54a: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95b54d: lea edi, [esi + 0x28] */
  edi = (uint32_t)(esi + 0x28u);
/* 95b550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b551: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b552: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95b557u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95b557: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 95b55a: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95b55f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b562: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b564: je 0x95b58b */
  if (zf) goto L_95b58b;
L_95b566: /* 95b566: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95b567: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b568: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b56du); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b56d: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 95b570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b571: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b572: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b577u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b577: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95b57c: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 95b57f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95b583: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b586: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95b587: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_95b58b: /* 95b58b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95b58f: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 95b591: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b593: jne 0x95b4b0 */
  if (!zf) goto L_95b4b0;
L_95b599: /* 95b599: cmp ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b59d: je 0x95b5aa */
  if (zf) goto L_95b5aa;
L_95b59f: /* 95b59f: mov ebx, dword ptr [ebx + 0x10] */
  ebx = R32((uint32_t)(ebx + 0x10u));
/* 95b5a2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b5a4: jne 0x95b490 */
  if (!zf) goto L_95b490;
L_95b5aa: /* 95b5aa: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b5b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95b5b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95b5b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95b5b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95b5b5: jl 0x95b5d4 */
  if ((sf != of)) goto L_95b5d4;
L_95b5b7: /* 95b5b7: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 95b5bb: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 95b5bf: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b5c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b5c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b5c6: push 0xaf97e8 */
  { uint32_t v = 0xaf97e8u; esp -= 4; W32(esp, v); }
/* 95b5cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b5cc: call 0x953470 */
  esp -= 4; W32(esp, 0x95b5d1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b5d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b5d4: /* 95b5d4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b5d7: ret  */
  esp += 4; SPILL(); return;
}

void f_95b5e0(void) {
  LOAD_REGS();
L_95b5e0: /* 95b5e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95b5e3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b5e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b5e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95b5ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b5eb: xor ebp, ebp */
  ebp = 0;
/* 95b5ed: mov esi, 4 */
  esi = 0x4u;
/* 95b5f2: xor ebx, ebx */
  ebx = 0;
/* 95b5f4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b5f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b5f7: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 95b5fb: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 95b5ff: jl 0x95b614 */
  if ((sf != of)) goto L_95b614;
L_95b601: /* 95b601: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b606: push 0xaf9938 */
  { uint32_t v = 0xaf9938u; esp -= 4; W32(esp, v); }
/* 95b60b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b60c: call 0x953470 */
  esp -= 4; W32(esp, 0x95b611u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b611: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b614: /* 95b614: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 95b618: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95b61e: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95b621: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b623: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 95b626: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 95b62a: je 0x95b64f */
  if (zf) goto L_95b64f;
L_95b62c: /* 95b62c: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95b62f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b631: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b633: je 0x95b64f */
  if (zf) goto L_95b64f;
L_95b635: /* 95b635: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 95b638: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95b63a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b63c: jne 0x95b641 */
  if (!zf) goto L_95b641;
L_95b63e: /* 95b63e: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
L_95b641: /* 95b641: cmp dword ptr [ebx + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b644: jne 0x95b649 */
  if (!zf) goto L_95b649;
L_95b646: /* 95b646: mov dword ptr [ecx - 4], ebp */
  W32((uint32_t)(ecx + 0xfffffffcu), ebp);
L_95b649: /* 95b649: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b64b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b64d: jne 0x95b635 */
  if (!zf) goto L_95b635;
L_95b64f: /* 95b64f: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 95b652: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b653: call 0x94e9b0 */
  esp -= 4; W32(esp, 0x95b658u); SPILL(); f_94e9b0(); if (g_unwind) return; RELOAD();
/* 95b658: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b65d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b660: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b662: jl 0x95b677 */
  if ((sf != of)) goto L_95b677;
L_95b664: /* 95b664: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b669: push 0xaf9908 */
  { uint32_t v = 0xaf9908u; esp -= 4; W32(esp, v); }
/* 95b66e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b66f: call 0x953470 */
  esp -= 4; W32(esp, 0x95b674u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b674: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b677: /* 95b677: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 95b67b: mov ebp, dword ptr [ecx + 0x10] */
  ebp = R32((uint32_t)(ecx + 0x10u));
/* 95b67e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b680: je 0x95b859 */
  if (zf) goto L_95b859;
L_95b686: /* 95b686: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 95b689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b68b: je 0x95b76f */
  if (zf) goto L_95b76f;
L_95b691: /* 95b691: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95b694: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95b697: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b699: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 95b69d: je 0x95b76f */
  if (zf) goto L_95b76f;
L_95b6a3: /* 95b6a3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95b6a7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95b6aa: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95b6ad: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b6af: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 95b6b3: jne 0x95b6bd */
  if (!zf) goto L_95b6bd;
L_95b6b5: /* 95b6b5: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 95b6b8: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 95b6bb: jmp 0x95b6fa */
  goto L_95b6fa;
L_95b6bd: /* 95b6bd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 95b6c0: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b6c2: jne 0x95b6cb */
  if (!zf) goto L_95b6cb;
L_95b6c4: /* 95b6c4: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 95b6c7: mov ebx, eax */
  ebx = eax;
/* 95b6c9: jmp 0x95b6fa */
  goto L_95b6fa;
L_95b6cb: /* 95b6cb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b6cd: je 0x95b74b */
  if (zf) goto L_95b74b;
L_95b6cf: /* 95b6cf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b6d1: je 0x95b74b */
  if (zf) goto L_95b74b;
L_95b6d3: /* 95b6d3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 95b6d6: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b6db: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95b6e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b6e2: push 0xaf98cc */
  { uint32_t v = 0xaf98ccu; esp -= 4; W32(esp, v); }
/* 95b6e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b6e8: call 0x953470 */
  esp -= 4; W32(esp, 0x95b6edu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b6ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b6ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b6f0: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95b6f2: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95b6f7u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95b6f7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b6fa: /* 95b6fa: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b6fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b6fd: jne 0x95b709 */
  if (!zf) goto L_95b709;
L_95b6ff: /* 95b6ff: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95b704u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95b704: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b707: jmp 0x95b724 */
  goto L_95b724;
L_95b709: /* 95b709: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95b70d: cmp dword ptr [ebx + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b710: jne 0x95b74c */
  if (!zf) goto L_95b74c;
L_95b712: /* 95b712: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 95b715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b716: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95b71bu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95b71b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b71c: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95b721u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95b721: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b724: /* 95b724: mov ecx, dword ptr [0xcf2f64] */
  ecx = R32((uint32_t)(0xcf2f64u));
/* 95b72a: mov eax, dword ptr [0xcf2f30] */
  eax = R32((uint32_t)(0xcf2f30u));
/* 95b72f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95b730: mov dword ptr [0xcf2f64], ecx */
  W32((uint32_t)(0xcf2f64u), ecx);
/* 95b736: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 95b73c: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 95b73f: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 95b742: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 95b745: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 95b747: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 95b749: jmp 0x95b758 */
  goto L_95b758;
L_95b74b: /* 95b74b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_95b74c: /* 95b74c: lea eax, [edi + 0x24] */
  eax = (uint32_t)(edi + 0x24u);
/* 95b74f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b750: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b755u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b755: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b758: /* 95b758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95b75c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95b760: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 95b762: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95b763: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b765: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 95b769: jne 0x95b6a3 */
  if (!zf) goto L_95b6a3;
L_95b76f: /* 95b76f: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 95b772: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b774: je 0x95b781 */
  if (zf) goto L_95b781;
L_95b776: /* 95b776: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b779: call 0x94f570 */
  esp -= 4; W32(esp, 0x95b77eu); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 95b77e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b781: /* 95b781: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 95b784: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95b787: je 0x95b848 */
  if (zf) goto L_95b848;
L_95b78d: /* 95b78d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 95b790: xor ebx, ebx */
  ebx = 0;
/* 95b792: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b794: je 0x95b848 */
  if (zf) goto L_95b848;
L_95b79a: /* 95b79a: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 95b79d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b79e: xor edi, edi */
  edi = 0;
/* 95b7a0: call 0x94f340 */
  esp -= 4; W32(esp, 0x95b7a5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95b7a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b7a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95b7aa: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 95b7ae: jle 0x95b844 */
  if ((zf || sf != of)) goto L_95b844;
L_95b7b4: /* 95b7b4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 95b7b8: cmp dword ptr [ebx + 0x34], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x34u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b7bb: je 0x95b834 */
  if (zf) goto L_95b834;
L_95b7bd: /* 95b7bd: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 95b7c0: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95b7c3: je 0x95b834 */
  if (zf) goto L_95b834;
L_95b7c5: /* 95b7c5: call 0x95f140 */
  esp -= 4; W32(esp, 0x95b7cau); SPILL(); f_95f140(); if (g_unwind) return; RELOAD();
/* 95b7ca: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 95b7d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95b7d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b7d3: mov esi, eax */
  esi = eax;
/* 95b7d5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 95b7d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b7d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b7da: call 0x94f0c0 */
  esp -= 4; W32(esp, 0x95b7dfu); SPILL(); f_94f0c0(); if (g_unwind) return; RELOAD();
/* 95b7df: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 95b7e1: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 95b7e4: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 95b7e7: mov edx, edi */
  edx = edi;
/* 95b7e9: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95b7ec: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95b7ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b7f2: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  zf = (r) == 0;
  ecx = r;
  }
/* 95b7f4: je 0x95b802 */
  if (zf) goto L_95b802;
L_95b7f6: /* 95b7f6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95b7fa: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 95b7fd: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 95b800: jmp 0x95b80c */
  goto L_95b80c;
L_95b802: /* 95b802: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 95b806: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 95b809: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_95b80c: /* 95b80c: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 95b810: lea eax, [edx + 0x24] */
  eax = (uint32_t)(edx + 0x24u);
/* 95b813: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b815: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b81au); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b81a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b81b: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95b81e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b81f: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b824u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b824: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95b828: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b82b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95b82c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 95b830: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_95b834: /* 95b834: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 95b837: mov ebx, dword ptr [ecx + edi*4 + 8] */
  ebx = R32((uint32_t)(ecx + edi*4 + 0x8u));
/* 95b83b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 95b83c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b83e: jl 0x95b7b4 */
  if ((sf != of)) goto L_95b7b4;
L_95b844: /* 95b844: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_95b848: /* 95b848: cmp ebp, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b84c: je 0x95b859 */
  if (zf) goto L_95b859;
L_95b84e: /* 95b84e: mov ebp, dword ptr [ebp + 0x10] */
  ebp = R32((uint32_t)(ebp + 0x10u));
/* 95b851: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b853: jne 0x95b686 */
  if (!zf) goto L_95b686;
L_95b859: /* 95b859: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b860: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95b861: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95b862: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95b863: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95b864: jl 0x95b884 */
  if ((sf != of)) goto L_95b884;
L_95b866: /* 95b866: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 95b86a: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 95b86e: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95b874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b876: push 0xaf9890 */
  { uint32_t v = 0xaf9890u; esp -= 4; W32(esp, v); }
/* 95b87b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b87c: call 0x953470 */
  esp -= 4; W32(esp, 0x95b881u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b881: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b884: /* 95b884: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b887: ret  */
  esp += 4; SPILL(); return;
}

void f_95b890(void) {
  LOAD_REGS();
L_95b890: /* 95b890: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b895: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95b898: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b89b: jl 0x95b8b0 */
  if ((sf != of)) goto L_95b8b0;
L_95b89d: /* 95b89d: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b8a2: push 0xaf9a08 */
  { uint32_t v = 0xaf9a08u; esp -= 4; W32(esp, v); }
/* 95b8a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b8a8: call 0x953470 */
  esp -= 4; W32(esp, 0x95b8adu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b8ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b8b0: /* 95b8b0: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95b8b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b8b7: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 95b8bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95b8bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b8bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b8be: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 95b8c2: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 95b8c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b8c6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 95b8ca: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 95b8cd: call 0x958d90 */
  esp -= 4; W32(esp, 0x95b8d2u); SPILL(); f_958d90(); if (g_unwind) return; RELOAD();
/* 95b8d2: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 95b8d5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 95b8d9: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 95b8dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b8dd: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 95b8e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b8e2: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b8e7u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b8e7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95b8eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b8ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b8f0: je 0x95b9cd */
  if (zf) goto L_95b9cd;
L_95b8f6: /* 95b8f6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95b8f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b8fb: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 95b8fe: je 0x95b9cd */
  if (zf) goto L_95b9cd;
L_95b904: /* 95b904: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 95b907: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95b90a: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 95b90d: or edx, 0x4000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 95b913: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 95b916: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b918: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 95b91b: je 0x95b93f */
  if (zf) goto L_95b93f;
L_95b91d: /* 95b91d: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95b920: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b922: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b924: je 0x95b93f */
  if (zf) goto L_95b93f;
L_95b926: /* 95b926: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95b92a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95b92d: cmp dword ptr [eax + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95b930: jne 0x95b939 */
  if (!zf) goto L_95b939;
L_95b932: /* 95b932: mov dword ptr [ecx - 4], 0 */
  W32((uint32_t)(ecx + 0xfffffffcu), 0x0u);
L_95b939: /* 95b939: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95b93b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b93d: jne 0x95b926 */
  if (!zf) goto L_95b926;
L_95b93f: /* 95b93f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 95b941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b942: call 0x94e9b0 */
  esp -= 4; W32(esp, 0x95b947u); SPILL(); f_94e9b0(); if (g_unwind) return; RELOAD();
/* 95b947: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95b948: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95b949: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b94eu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b94e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 95b950: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 95b953: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b956: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b958: jne 0x95b9be */
  if (!zf) goto L_95b9be;
L_95b95a: /* 95b95a: mov ecx, dword ptr [0xcf7858] */
  ecx = R32((uint32_t)(0xcf7858u));
/* 95b960: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b965: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95b966: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b969: mov dword ptr [0xcf7858], ecx */
  W32((uint32_t)(0xcf7858u), ecx);
/* 95b96f: jl 0x95b99a */
  if ((sf != of)) goto L_95b99a;
L_95b971: /* 95b971: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 95b974: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95b978: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 95b97b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95b980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b981: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 95b984: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b985: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95b98b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b98c: push 0xaf99c0 */
  { uint32_t v = 0xaf99c0u; esp -= 4; W32(esp, v); }
/* 95b991: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b992: call 0x953470 */
  esp -= 4; W32(esp, 0x95b997u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b997: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b99a: /* 95b99a: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 95b99d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b99e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b99f: call 0x94ebf0 */
  esp -= 4; W32(esp, 0x95b9a4u); SPILL(); f_94ebf0(); if (g_unwind) return; RELOAD();
/* 95b9a4: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 95b9a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95b9a8: or edi, 0x8000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 95b9ae: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95b9b3: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 95b9b6: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95b9bbu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95b9bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95b9be: /* 95b9be: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 95b9c1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95b9c3: jne 0x95b904 */
  if (!zf) goto L_95b904;
L_95b9c9: /* 95b9c9: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
L_95b9cd: /* 95b9cd: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 95b9d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b9d2: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95b9d7u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95b9d7: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95b9dc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95b9df: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95b9e2: jl 0x95ba00 */
  if ((sf != of)) goto L_95ba00;
L_95b9e4: /* 95b9e4: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 95b9e7: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95b9ea: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95b9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95b9f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95b9f2: push 0xaf9978 */
  { uint32_t v = 0xaf9978u; esp -= 4; W32(esp, v); }
/* 95b9f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95b9f8: call 0x953470 */
  esp -= 4; W32(esp, 0x95b9fdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95b9fd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ba00: /* 95ba00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ba01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ba02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ba03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95ba04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ba07: ret  */
  esp += 4; SPILL(); return;
}

void f_95ba10(void) {
  LOAD_REGS();
L_95ba10: /* 95ba10: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95ba13: mov eax, dword ptr [0xcf8560] */
  eax = R32((uint32_t)(0xcf8560u));
/* 95ba18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ba19: mov esi, dword ptr [0xcf7a80] */
  esi = R32((uint32_t)(0xcf7a80u));
/* 95ba1f: xor ecx, ecx */
  ecx = 0;
/* 95ba21: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ba22: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ba24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ba25: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 95ba29: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 95ba2d: mov dword ptr [0xcf7a80], esi */
  W32((uint32_t)(0xcf7a80u), esi);
/* 95ba33: je 0x95ba50 */
  if (zf) goto L_95ba50;
L_95ba35: /* 95ba35: cmp dword ptr [0xcf8be0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ba3b: je 0x95ba50 */
  if (zf) goto L_95ba50;
L_95ba3d: /* 95ba3d: mov ecx, dword ptr [0xcf8c4c] */
  ecx = R32((uint32_t)(0xcf8c4cu));
/* 95ba43: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95ba45: mov eax, esi */
  eax = esi;
/* 95ba47: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ba49: jle 0x95ba50 */
  if ((zf || sf != of)) goto L_95ba50;
L_95ba4b: /* 95ba4b: call 0x95d8a0 */
  esp -= 4; W32(esp, 0x95ba50u); SPILL(); f_95d8a0(); if (g_unwind) return; RELOAD();
L_95ba50: /* 95ba50: mov edx, dword ptr [0xcf8ba4] */
  edx = R32((uint32_t)(0xcf8ba4u));
/* 95ba56: cmp edx, dword ptr [0xcf8564] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8564u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ba5c: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 95ba60: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95ba64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ba65: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 95ba69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ba6a: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 95ba6e: jl 0x95bb47 */
  if ((sf != of)) goto L_95bb47;
L_95ba74: /* 95ba74: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ba76: je 0x95baf7 */
  if (zf) goto L_95baf7;
L_95ba78: /* 95ba78: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 95ba7b: fchs  */
  ST0 = -ST0;
/* 95ba7d: fcomp dword ptr [0xcf859c] */
  fpu_com(ST0, F32((uint32_t)(0xcf859cu)));
  FPOP();
/* 95ba83: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ba85: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95ba88: je 0x95ba99 */
  if (zf) goto L_95ba99;
L_95ba8a: /* 95ba8a: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 95ba8c: fcomp dword ptr [0xcf859c] */
  fpu_com(ST0, F32((uint32_t)(0xcf859cu)));
  FPOP();
/* 95ba92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95ba94: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95ba97: jne 0x95baf7 */
  if (!zf) goto L_95baf7;
L_95ba99: /* 95ba99: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 95ba9e: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 95baa3: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 95baa6: fchs  */
  ST0 = -ST0;
/* 95baa8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 95bab0: fcom dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
/* 95bab2: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 95baba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95babc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95babf: jp 0x95bac5 */
  if (pf) goto L_95bac5;
L_95bac1: /* 95bac1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 95bac3: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
L_95bac5: /* 95bac5: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 95bacb: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95bace: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95bad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bad2: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 95bad8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bad9: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95badf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bae0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95bae3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95bae6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bae7: push 0xaf9cb0 */
  { uint32_t v = 0xaf9cb0u; esp -= 4; W32(esp, v); }
/* 95baec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95baed: call 0x953470 */
  esp -= 4; W32(esp, 0x95baf2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95baf2: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95baf5: jmp 0x95bb47 */
  goto L_95bb47;
L_95baf7: /* 95baf7: mov eax, dword ptr [0xcf8b68] */
  eax = R32((uint32_t)(0xcf8b68u));
/* 95bafc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bafe: je 0x95bb04 */
  if (zf) goto L_95bb04;
L_95bb00: /* 95bb00: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bb02: jne 0x95bb47 */
  if (!zf) goto L_95bb47;
L_95bb04: /* 95bb04: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95bb09: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 95bb0f: mov edx, dword ptr [0xcf8b64] */
  edx = R32((uint32_t)(0xcf8b64u));
/* 95bb15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bb16: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95bb1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bb1d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 95bb21: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 95bb26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bb27: push 0xaf9c60 */
  { uint32_t v = 0xaf9c60u; esp -= 4; W32(esp, v); }
/* 95bb2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bb2d: mov dword ptr [0xcf8438], 4 */
  W32((uint32_t)(0xcf8438u), 0x4u);
/* 95bb37: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 95bb3f: call 0x953470 */
  esp -= 4; W32(esp, 0x95bb44u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95bb44: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bb47: /* 95bb47: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95bb4e: jl 0x95bb96 */
  if ((sf != of)) goto L_95bb96;
L_95bb50: /* 95bb50: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bb52: fld dword ptr [0xa0c9b4] */
  { double v = F32((uint32_t)(0xa0c9b4u)); FPUSH(v); }
/* 95bb58: fld dword ptr [0xa0c9b4] */
  { double v = F32((uint32_t)(0xa0c9b4u)); FPUSH(v); }
/* 95bb5e: je 0x95bb69 */
  if (zf) goto L_95bb69;
L_95bb60: /* 95bb60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 95bb62: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 95bb64: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 95bb67: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
L_95bb69: /* 95bb69: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95bb6c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95bb6f: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 95bb75: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95bb78: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 95bb7c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95bb7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bb80: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95bb86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bb87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bb88: push 0xaf9c18 */
  { uint32_t v = 0xaf9c18u; esp -= 4; W32(esp, v); }
/* 95bb8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bb8e: call 0x953470 */
  esp -= 4; W32(esp, 0x95bb93u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95bb93: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bb96: /* 95bb96: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bb98: je 0x95bbab */
  if (zf) goto L_95bbab;
L_95bb9a: /* 95bb9a: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 95bb9d: mov eax, 0x400 */
  eax = 0x400u;
/* 95bba2: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bba4: jne 0x95bbab */
  if (!zf) goto L_95bbab;
L_95bba6: /* 95bba6: test dword ptr [esi + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bba9: je 0x95bbd0 */
  if (zf) goto L_95bbd0;
L_95bbab: /* 95bbab: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95bbae: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95bbb1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95bbb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bbb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bbb9: push 0xaf9bb0 */
  { uint32_t v = 0xaf9bb0u; esp -= 4; W32(esp, v); }
/* 95bbbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bbbf: call 0x953470 */
  esp -= 4; W32(esp, 0x95bbc4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95bbc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bbc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bbc6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95bbc8: call 0x96e130 */
  esp -= 4; W32(esp, 0x95bbcdu); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95bbcd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bbd0: /* 95bbd0: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95bbd5: mov ecx, dword ptr [0xcf8b80] */
  ecx = R32((uint32_t)(0xcf8b80u));
/* 95bbdb: mov edx, dword ptr [0xcf8b60] */
  edx = R32((uint32_t)(0xcf8b60u));
/* 95bbe1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95bbe2: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 95bbe4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95bbe6: jg 0x95bc31 */
  if ((!zf && sf == of)) goto L_95bc31;
L_95bbe8: /* 95bbe8: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95bbee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bbef: push 0xaf9aa0 */
  { uint32_t v = 0xaf9aa0u; esp -= 4; W32(esp, v); }
/* 95bbf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bbf5: call 0x953470 */
  esp -= 4; W32(esp, 0x95bbfau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95bbfa: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95bbff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bc02: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95bc05: jl 0x95bc23 */
  if ((sf != of)) goto L_95bc23;
L_95bc07: /* 95bc07: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 95bc0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bc0e: jne 0x95bc23 */
  if (!zf) goto L_95bc23;
L_95bc10: /* 95bc10: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95bc15: push 0xaf9a74 */
  { uint32_t v = 0xaf9a74u; esp -= 4; W32(esp, v); }
/* 95bc1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bc1b: call 0x953470 */
  esp -= 4; W32(esp, 0x95bc20u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95bc20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bc23: /* 95bc23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95bc25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95bc27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95bc29: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95bc2eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95bc2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bc31: /* 95bc31: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 95bc36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bc38: jne 0x95bc3f */
  if (!zf) goto L_95bc3f;
L_95bc3a: /* 95bc3a: call 0x958540 */
  esp -= 4; W32(esp, 0x95bc3fu); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
L_95bc3f: /* 95bc3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bc40: call 0x95a520 */
  esp -= 4; W32(esp, 0x95bc45u); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95bc45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bc46: call 0x95a520 */
  esp -= 4; W32(esp, 0x95bc4bu); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95bc4b: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95bc50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bc53: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95bc56: jl 0x95bc6b */
  if ((sf != of)) goto L_95bc6b;
L_95bc58: /* 95bc58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95bc5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95bc5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bc5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bc5e: push 0xaf9a6c */
  { uint32_t v = 0xaf9a6cu; esp -= 4; W32(esp, v); }
/* 95bc63: call 0x953700 */
  esp -= 4; W32(esp, 0x95bc68u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95bc68: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bc6b: /* 95bc6b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bc6d: je 0x95bd06 */
  if (zf) goto L_95bd06;
L_95bc73: /* 95bc73: fld dword ptr [0xcf8bbc] */
  { double v = F32((uint32_t)(0xcf8bbcu)); FPUSH(v); }
/* 95bc79: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 95bc7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95bc7d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95bc80: jp 0x95bc8a */
  if (pf) goto L_95bc8a;
L_95bc82: /* 95bc82: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 95bc84: mov dword ptr [0xcf8bbc], ecx */
  W32((uint32_t)(0xcf8bbcu), ecx);
L_95bc8a: /* 95bc8a: fld dword ptr [0xcf8bc0] */
  { double v = F32((uint32_t)(0xcf8bc0u)); FPUSH(v); }
/* 95bc90: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 95bc92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95bc94: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95bc97: jp 0x95bca1 */
  if (pf) goto L_95bca1;
L_95bc99: /* 95bc99: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 95bc9b: mov dword ptr [0xcf8bc0], edx */
  W32((uint32_t)(0xcf8bc0u), edx);
L_95bca1: /* 95bca1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 95bca4: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 95bca6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95bca8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95bcab: jp 0x95bcb2 */
  if (pf) goto L_95bcb2;
L_95bcad: /* 95bcad: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 95bcaf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_95bcb2: /* 95bcb2: fld dword ptr [0xcf8bc4] */
  { double v = F32((uint32_t)(0xcf8bc4u)); FPUSH(v); }
/* 95bcb8: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 95bcbb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95bcbd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95bcc0: jne 0x95bccb */
  if (!zf) goto L_95bccb;
L_95bcc2: /* 95bcc2: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 95bcc5: mov dword ptr [0xcf8bc4], ecx */
  W32((uint32_t)(0xcf8bc4u), ecx);
L_95bccb: /* 95bccb: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95bcce: test ecx, 0x8000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bcd4: jne 0x95bd06 */
  if (!zf) goto L_95bd06;
L_95bcd6: /* 95bcd6: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 95bcd8: fcomp dword ptr [0xcf8a50] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a50u)));
  FPOP();
/* 95bcde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95bce0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95bce3: je 0x95bcf7 */
  if (zf) goto L_95bcf7;
L_95bce5: /* 95bce5: fld dword ptr [0xcf8a50] */
  { double v = F32((uint32_t)(0xcf8a50u)); FPUSH(v); }
/* 95bceb: fchs  */
  ST0 = -ST0;
/* 95bced: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 95bcf0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95bcf2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95bcf5: jne 0x95bd06 */
  if (!zf) goto L_95bd06;
L_95bcf7: /* 95bcf7: or ecx, 0x8000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95bcfd: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95bd00: inc dword ptr [0xcf7ac0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7ac0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7ac0u), r);
  }
L_95bd06: /* 95bd06: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95bd09: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 95bd0c: mov edx, eax */
  edx = eax;
/* 95bd0e: and edx, 0x1ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95bd14: and ecx, 0x1ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95bd1a: lea ecx, [edx + ecx + 1] */
  ecx = (uint32_t)(edx + ecx + 0x1u);
/* 95bd1e: cmp ecx, 0x1ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95bd24: jl 0x95bd30 */
  if ((sf != of)) goto L_95bd30;
L_95bd26: /* 95bd26: or eax, 0x1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95bd2b: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 95bd2e: jmp 0x95bd3f */
  goto L_95bd3f;
L_95bd30: /* 95bd30: mov edx, eax */
  edx = eax;
/* 95bd32: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 95bd34: and edx, 0x1ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95bd3a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 95bd3c: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
L_95bd3f: /* 95bd3f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95bd42: and eax, 0xffefffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffefffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95bd47: or eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95bd4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bd4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bd4e: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 95bd51: call 0x95d950 */
  esp -= 4; W32(esp, 0x95bd56u); SPILL(); f_95d950(); if (g_unwind) return; RELOAD();
/* 95bd56: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95bd5b: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 95bd5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bd62: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95bd65: jle 0x95bd8d */
  if ((zf || sf != of)) goto L_95bd8d;
L_95bd67: /* 95bd67: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 95bd6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bd6b: call 0x94f340 */
  esp -= 4; W32(esp, 0x95bd70u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95bd70: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95bd76: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bd79: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bd7b: jne 0x95bd8d */
  if (!zf) goto L_95bd8d;
L_95bd7d: /* 95bd7d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95bd7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bd7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bd80: call 0x95c1e0 */
  esp -= 4; W32(esp, 0x95bd85u); SPILL(); f_95c1e0(); if (g_unwind) return; RELOAD();
/* 95bd85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bd88: jmp 0x95be0d */
  goto L_95be0d;
L_95bd8d: /* 95bd8d: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
/* 95bd93: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95bd94: lea ebx, [esi + 0x20] */
  ebx = (uint32_t)(esi + 0x20u);
/* 95bd97: mov dword ptr [0xcf8bfc], edx */
  W32((uint32_t)(0xcf8bfcu), edx);
/* 95bd9d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 95bd9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bda1: je 0x95bdc2 */
  if (zf) goto L_95bdc2;
L_95bda3: /* 95bda3: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95bda6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95bda8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bdaa: je 0x95bdc2 */
  if (zf) goto L_95bdc2;
L_95bdac: /* 95bdac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95bdb0: /* 95bdb0: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
/* 95bdb6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95bdb9: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 95bdbc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95bdbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95bdc0: jne 0x95bdb0 */
  if (!zf) goto L_95bdb0;
L_95bdc2: /* 95bdc2: cmp dword ptr [0xcf85cc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bdc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bdca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bdcb: jne 0x95bdd7 */
  if (!zf) goto L_95bdd7;
L_95bdcd: /* 95bdcd: call 0x95beb0 */
  esp -= 4; W32(esp, 0x95bdd2u); SPILL(); f_95beb0(); if (g_unwind) return; RELOAD();
/* 95bdd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bdd5: jmp 0x95bde9 */
  goto L_95bde9;
L_95bdd7: /* 95bdd7: call 0x95c000 */
  esp -= 4; W32(esp, 0x95bddcu); SPILL(); f_95c000(); if (g_unwind) return; RELOAD();
/* 95bddc: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95bddf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95bde0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bde1: call 0x95c770 */
  esp -= 4; W32(esp, 0x95bde6u); SPILL(); f_95c770(); if (g_unwind) return; RELOAD();
/* 95bde6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bde9: /* 95bde9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bdea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bdeb: call 0x95c110 */
  esp -= 4; W32(esp, 0x95bdf0u); SPILL(); f_95c110(); if (g_unwind) return; RELOAD();
/* 95bdf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bdf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95bdf2: call 0x95c670 */
  esp -= 4; W32(esp, 0x95bdf7u); SPILL(); f_95c670(); if (g_unwind) return; RELOAD();
/* 95bdf7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95bdfa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bdfd: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95be00: jne 0x95be0d */
  if (!zf) goto L_95be0d;
L_95be02: /* 95be02: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 95be04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95be05: call 0x95ca00 */
  esp -= 4; W32(esp, 0x95be0au); SPILL(); f_95ca00(); if (g_unwind) return; RELOAD();
/* 95be0a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95be0d: /* 95be0d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95be0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95be10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95be11: jne 0x95be1d */
  if (!zf) goto L_95be1d;
L_95be13: /* 95be13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95be14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95be15: call 0x9593c0 */
  esp -= 4; W32(esp, 0x95be1au); SPILL(); f_9593c0(); if (g_unwind) return; RELOAD();
/* 95be1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95be1d: /* 95be1d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95be20: test eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95be25: jne 0x95be44 */
  if (!zf) goto L_95be44;
L_95be27: /* 95be27: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95be2a: je 0x95be44 */
  if (zf) goto L_95be44;
L_95be2c: /* 95be2c: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95be2f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95be32: jne 0x95be3c */
  if (!zf) goto L_95be3c;
L_95be34: /* 95be34: inc dword ptr [0xcf7960] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7960u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7960u), r);
  }
/* 95be3a: jmp 0x95be4a */
  goto L_95be4a;
L_95be3c: /* 95be3c: inc dword ptr [0xcf7974] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7974u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7974u), r);
  }
/* 95be42: jmp 0x95be4a */
  goto L_95be4a;
L_95be44: /* 95be44: inc dword ptr [0xcf7970] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7970u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7970u), r);
  }
L_95be4a: /* 95be4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95be4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95be4c: call 0x95dbb0 */
  esp -= 4; W32(esp, 0x95be51u); SPILL(); f_95dbb0(); if (g_unwind) return; RELOAD();
/* 95be51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95be52: call 0x95f280 */
  esp -= 4; W32(esp, 0x95be57u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 95be57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95be58: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x95be5du); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 95be5d: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 95be60: and edx, 0xfbffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfbffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95be66: or edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 95be6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95be6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95be6e: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 95be71: call 0x95d750 */
  esp -= 4; W32(esp, 0x95be76u); SPILL(); f_95d750(); if (g_unwind) return; RELOAD();
/* 95be76: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95be7a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95be7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95be7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95be80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95be81: je 0x95bea0 */
  if (zf) goto L_95bea0;
L_95be83: /* 95be83: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95be88: push 0xaf9a48 */
  { uint32_t v = 0xaf9a48u; esp -= 4; W32(esp, v); }
/* 95be8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95be8e: call 0x953470 */
  esp -= 4; W32(esp, 0x95be93u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95be93: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 95be97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95be9a: mov dword ptr [0xcf8438], ecx */
  W32((uint32_t)(0xcf8438u), ecx);
L_95bea0: /* 95bea0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bea3: ret  */
  esp += 4; SPILL(); return;
}

void f_95beb0(void) {
  LOAD_REGS();
L_95beb0: /* 95beb0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95beb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95beb4: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 95beb8: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 95bebb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 95bebe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95bebf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bec0: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 95bec4: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 95bec7: mov ebp, dword ptr [edx + 8] */
  ebp = R32((uint32_t)(edx + 0x8u));
/* 95beca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95becb: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 95bece: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 95bed1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bed3: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 95bed6: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 95bed9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 95bedc: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 95bee0: mov ebx, dword ptr [esi + 0x28] */
  ebx = R32((uint32_t)(esi + 0x28u));
/* 95bee3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 95bee7: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 95beea: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 95beed: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 95bef1: jne 0x95beff */
  if (!zf) goto L_95beff;
L_95bef3: /* 95bef3: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 95bef7: mov eax, ebp */
  eax = ebp;
/* 95bef9: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 95befd: jmp 0x95bf29 */
  goto L_95bf29;
L_95beff: /* 95beff: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bf01: jne 0x95bf0d */
  if (!zf) goto L_95bf0d;
L_95bf03: /* 95bf03: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 95bf07: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 95bf0b: jmp 0x95bf27 */
  goto L_95bf27;
L_95bf0d: /* 95bf0d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bf0f: mov edi, eax */
  edi = eax;
/* 95bf11: jne 0x95bf1f */
  if (!zf) goto L_95bf1f;
L_95bf13: /* 95bf13: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 95bf17: mov eax, ebp */
  eax = ebp;
/* 95bf19: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 95bf1d: jmp 0x95bf29 */
  goto L_95bf29;
L_95bf1f: /* 95bf1f: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 95bf23: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_95bf27: /* 95bf27: mov eax, ecx */
  eax = ecx;
L_95bf29: /* 95bf29: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 95bf2c: mov ebp, dword ptr [edi + 0x14] */
  ebp = R32((uint32_t)(edi + 0x14u));
/* 95bf2f: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95bf35: and ebp, 0xffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 95bf3b: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 95bf3d: jbe 0x95bf75 */
  if ((cf | zf)) goto L_95bf75;
L_95bf3f: /* 95bf3f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bf41: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 95bf44: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 95bf47: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 95bf4a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 95bf4d: jne 0x95bf63 */
  if (!zf) goto L_95bf63;
L_95bf4f: /* 95bf4f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95bf52: mov ecx, eax */
  ecx = eax;
/* 95bf54: not ecx */
  ecx = ~ecx;
/* 95bf56: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95bf58: and ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95bf5e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95bf60: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_95bf63: /* 95bf63: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 95bf66: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95bf6a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 95bf6d: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95bf70: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 95bf73: jmp 0x95bfab */
  goto L_95bfab;
L_95bf75: /* 95bf75: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 95bf78: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 95bf7b: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95bf7f: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 95bf82: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 95bf85: jne 0x95bf9b */
  if (!zf) goto L_95bf9b;
L_95bf87: /* 95bf87: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95bf8a: mov ecx, eax */
  ecx = eax;
/* 95bf8c: not ecx */
  ecx = ~ecx;
/* 95bf8e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95bf90: and ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95bf96: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95bf98: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_95bf9b: /* 95bf9b: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 95bf9e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 95bfa2: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 95bfa5: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95bfa8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_95bfab: /* 95bfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95bfac: call 0x95a520 */
  esp -= 4; W32(esp, 0x95bfb1u); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95bfb1: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 95bfb5: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 95bfb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95bfb9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95bfba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bfbb: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95bfc0u); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95bfc0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95bfc5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bfc8: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95bfcb: jl 0x95bff6 */
  if ((sf != of)) goto L_95bff6;
L_95bfcd: /* 95bfcd: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95bfd0: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 95bfd3: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 95bfd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bfd7: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 95bfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bfdb: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95bfe1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95bfe2: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95bfe7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95bfe8: push 0xaf9d0c */
  { uint32_t v = 0xaf9d0cu; esp -= 4; W32(esp, v); }
/* 95bfed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95bfee: call 0x953470 */
  esp -= 4; W32(esp, 0x95bff3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95bff3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95bff6: /* 95bff6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95bff7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95bff8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95bff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95bffa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95bffd: ret  */
  esp += 4; SPILL(); return;
}

void f_95c000(void) {
  LOAD_REGS();
L_95c000: /* 95c000: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c007: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c008: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 95c00c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c00d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c00e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c00f: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95c013: jl 0x95c031 */
  if ((sf != of)) goto L_95c031;
L_95c015: /* 95c015: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 95c018: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95c01b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95c021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c022: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c023: push 0xaf9d4c */
  { uint32_t v = 0xaf9d4cu; esp -= 4; W32(esp, v); }
/* 95c028: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c029: call 0x953470 */
  esp -= 4; W32(esp, 0x95c02eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c02e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c031: /* 95c031: inc dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8bf8u), r);
  }
/* 95c037: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 95c03a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c03c: lea edx, [ebx + 0x28] */
  edx = (uint32_t)(ebx + 0x28u);
/* 95c03f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 95c043: je 0x95c062 */
  if (zf) goto L_95c062;
L_95c045: /* 95c045: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95c048: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c04a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c04c: je 0x95c062 */
  if (zf) goto L_95c062;
L_95c04e: /* 95c04e: mov edi, edi */
  edi = edi;
L_95c050: /* 95c050: mov esi, dword ptr [0xcf8bf8] */
  esi = R32((uint32_t)(0xcf8bf8u));
/* 95c056: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c059: mov dword ptr [eax + 0x34], esi */
  W32((uint32_t)(eax + 0x34u), esi);
/* 95c05c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c05e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c060: jne 0x95c050 */
  if (!zf) goto L_95c050;
L_95c062: /* 95c062: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95c065: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c067: je 0x95c0e3 */
  if (zf) goto L_95c0e3;
L_95c069: /* 95c069: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95c06c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c06e: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 95c071: je 0x95c0e3 */
  if (zf) goto L_95c0e3;
L_95c073: /* 95c073: jmp 0x95c080 */
  goto L_95c080;
L_95c075: /* 95c075: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 95c079: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95c080: /* 95c080: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95c085: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 95c088: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 95c08b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c08d: jne 0x95c0c3 */
  if (!zf) goto L_95c0c3;
L_95c08f: /* 95c08f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95c092: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95c095: je 0x95c0a0 */
  if (zf) goto L_95c0a0;
L_95c097: /* 95c097: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c098: call 0x95a520 */
  esp -= 4; W32(esp, 0x95c09du); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95c09d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c0a0: /* 95c0a0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95c0a3: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c0a6: je 0x95c0b4 */
  if (zf) goto L_95c0b4;
L_95c0a8: /* 95c0a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c0a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c0aa: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c0afu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c0af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c0b2: jmp 0x95c0dc */
  goto L_95c0dc;
L_95c0b4: /* 95c0b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c0b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c0b6: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c0bbu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c0bb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95c0be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c0bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c0c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c0c1: jmp 0x95c0d4 */
  goto L_95c0d4;
L_95c0c3: /* 95c0c3: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c0c5: je 0x95c0dc */
  if (zf) goto L_95c0dc;
L_95c0c7: /* 95c0c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c0c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c0c9: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c0ceu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c0ce: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 95c0d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c0d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c0d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_95c0d4: /* 95c0d4: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95c0d9u); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95c0d9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c0dc: /* 95c0dc: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 95c0df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c0e1: jne 0x95c075 */
  if (!zf) goto L_95c075;
L_95c0e3: /* 95c0e3: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95c0e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c0e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c0e8: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c0edu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c0ed: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95c0f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 95c0f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c0f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c0f5: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c0fau); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c0fa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c0fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c0fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c0ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c100: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c101: ret  */
  esp += 4; SPILL(); return;
}

void f_95c110(void) {
  LOAD_REGS();
L_95c110: /* 95c110: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c118: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 95c11c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c11d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c11e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c11f: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 95c123: jl 0x95c141 */
  if ((sf != of)) goto L_95c141;
L_95c125: /* 95c125: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95c128: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 95c12b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95c131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c132: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c133: push 0xaf9d80 */
  { uint32_t v = 0xaf9d80u; esp -= 4; W32(esp, v); }
/* 95c138: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c139: call 0x953470 */
  esp -= 4; W32(esp, 0x95c13eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c13e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c141: /* 95c141: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95c144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c146: lea ebp, [edi + 0x24] */
  ebp = (uint32_t)(edi + 0x24u);
/* 95c149: je 0x95c1a3 */
  if (zf) goto L_95c1a3;
L_95c14b: /* 95c14b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 95c14e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c150: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 95c153: je 0x95c1a3 */
  if (zf) goto L_95c1a3;
L_95c155: /* 95c155: mov edi, 0x4000000 */
  edi = 0x4000000u;
/* 95c15a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95c160: /* 95c160: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 95c163: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95c166: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c168: je 0x95c16f */
  if (zf) goto L_95c16f;
L_95c16a: /* 95c16a: cmp dword ptr [edx + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c16d: jne 0x95c199 */
  if (!zf) goto L_95c199;
L_95c16f: /* 95c16f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95c171: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c173: je 0x95c18d */
  if (zf) goto L_95c18d;
L_95c175: /* 95c175: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95c178: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c17a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c17c: je 0x95c18d */
  if (zf) goto L_95c18d;
L_95c17e: /* 95c17e: mov edi, edi */
  edi = edi;
L_95c180: /* 95c180: or dword ptr [eax + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 95c183: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 95c186: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c189: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c18b: jne 0x95c180 */
  if (!zf) goto L_95c180;
L_95c18d: /* 95c18d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c18e: call 0x955fd0 */
  esp -= 4; W32(esp, 0x95c193u); SPILL(); f_955fd0(); if (g_unwind) return; RELOAD();
/* 95c193: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c196: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_95c199: /* 95c199: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 95c19b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c19d: jne 0x95c160 */
  if (!zf) goto L_95c160;
L_95c19f: /* 95c19f: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
L_95c1a3: /* 95c1a3: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 95c1a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c1a8: je 0x95c1d5 */
  if (zf) goto L_95c1d5;
L_95c1aa: /* 95c1aa: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 95c1ad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95c1af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c1b1: je 0x95c1d5 */
  if (zf) goto L_95c1d5;
L_95c1b3: /* 95c1b3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95c1b6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95c1b9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c1bb: jne 0x95c1c2 */
  if (!zf) goto L_95c1c2;
L_95c1bd: /* 95c1bd: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 95c1c0: jmp 0x95c1c5 */
  goto L_95c1c5;
L_95c1c2: /* 95c1c2: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
L_95c1c5: /* 95c1c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c1c6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c1c7: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c1ccu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c1cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95c1ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c1d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c1d3: jne 0x95c1b3 */
  if (!zf) goto L_95c1b3;
L_95c1d5: /* 95c1d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c1d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c1d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c1d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c1d9: ret  */
  esp += 4; SPILL(); return;
}

void f_95c1e0(void) {
  LOAD_REGS();
L_95c1e0: /* 95c1e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95c1e3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95c1e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c1e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c1e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c1ea: xor esi, esi */
  esi = 0;
/* 95c1ec: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c1ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c1ef: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 95c1f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 95c1fb: je 0x95c24b */
  if (zf) goto L_95c24b;
L_95c1fd: /* 95c1fd: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 95c201: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 95c204: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95c207: jne 0x95c215 */
  if (!zf) goto L_95c215;
L_95c209: /* 95c209: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 95c20c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c20d: call 0x95ca00 */
  esp -= 4; W32(esp, 0x95c212u); SPILL(); f_95ca00(); if (g_unwind) return; RELOAD();
/* 95c212: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c215: /* 95c215: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 95c219: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 95c21c: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 95c21f: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 95c222: cmp dword ptr [edx + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c225: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 95c228: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 95c22c: je 0x95c23e */
  if (zf) goto L_95c23e;
L_95c22e: /* 95c22e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c22f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c231: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x95c236u); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 95c236: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c239: jmp 0x95c3d4 */
  goto L_95c3d4;
L_95c23e: /* 95c23e: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 95c246: jmp 0x95c3d4 */
  goto L_95c3d4;
L_95c24b: /* 95c24b: mov edx, dword ptr [0xcf7984] */
  edx = R32((uint32_t)(0xcf7984u));
/* 95c251: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 95c255: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95c256: mov dword ptr [0xcf7984], edx */
  W32((uint32_t)(0xcf7984u), edx);
/* 95c25c: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 95c25f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c261: je 0x95c282 */
  if (zf) goto L_95c282;
L_95c263: /* 95c263: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95c266: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c268: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c26a: je 0x95c282 */
  if (zf) goto L_95c282;
L_95c26c: /* 95c26c: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
L_95c271: /* 95c271: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 95c274: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 95c276: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c279: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 95c27c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c27e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c280: jne 0x95c271 */
  if (!zf) goto L_95c271;
L_95c282: /* 95c282: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 95c285: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c287: je 0x95c2d2 */
  if (zf) goto L_95c2d2;
L_95c289: /* 95c289: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 95c28c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95c28e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c290: je 0x95c2d2 */
  if (zf) goto L_95c2d2;
L_95c292: /* 95c292: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95c295: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95c298: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c29a: jne 0x95c29f */
  if (!zf) goto L_95c29f;
L_95c29c: /* 95c29c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_95c29f: /* 95c29f: cmp ecx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2a3: je 0x95c2ad */
  if (zf) goto L_95c2ad;
L_95c2a5: /* 95c2a5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95c2a7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2a9: jne 0x95c292 */
  if (!zf) goto L_95c292;
L_95c2ab: /* 95c2ab: jmp 0x95c2d2 */
  goto L_95c2d2;
L_95c2ad: /* 95c2ad: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 95c2af: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2b1: je 0x95c2d2 */
  if (zf) goto L_95c2d2;
L_95c2b3: /* 95c2b3: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95c2b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c2b8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2ba: je 0x95c2d2 */
  if (zf) goto L_95c2d2;
L_95c2bc: /* 95c2bc: mov edx, 0x5000000 */
  edx = 0x5000000u;
L_95c2c1: /* 95c2c1: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 95c2c4: or ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 95c2c6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c2c9: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 95c2cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c2ce: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2d0: jne 0x95c2c1 */
  if (!zf) goto L_95c2c1;
L_95c2d2: /* 95c2d2: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 95c2d5: xor eax, eax */
  eax = 0;
/* 95c2d7: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2d9: je 0x95c2f6 */
  if (zf) goto L_95c2f6;
L_95c2db: /* 95c2db: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 95c2de: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c2e1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2e3: je 0x95c2f6 */
  if (zf) goto L_95c2f6;
L_95c2e5: /* 95c2e5: mov dl, byte ptr [eax + 0x17] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x17u))) & 0xffu);
/* 95c2e8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c2eb: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95c2ee: je 0x95c2f6 */
  if (zf) goto L_95c2f6;
L_95c2f0: /* 95c2f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c2f2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c2f4: jne 0x95c2e5 */
  if (!zf) goto L_95c2e5;
L_95c2f6: /* 95c2f6: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c2fd: mov ebx, eax */
  ebx = eax;
/* 95c2ff: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 95c303: jl 0x95c32e */
  if ((sf != of)) goto L_95c32e;
L_95c305: /* 95c305: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95c309: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 95c30c: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 95c30f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c310: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 95c313: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95c318: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c319: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95c31f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c320: push 0xaf9e64 */
  { uint32_t v = 0xaf9e64u; esp -= 4; W32(esp, v); }
/* 95c325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c326: call 0x953470 */
  esp -= 4; W32(esp, 0x95c32bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c32b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c32e: /* 95c32e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95c332: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 95c335: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c337: lea edi, [ecx + 0x20] */
  edi = (uint32_t)(ecx + 0x20u);
/* 95c33a: je 0x95c382 */
  if (zf) goto L_95c382;
L_95c33c: /* 95c33c: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 95c340: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95c343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c344: call 0x94f340 */
  esp -= 4; W32(esp, 0x95c349u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95c349: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c34c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95c34e: jle 0x95c382 */
  if ((zf || sf != of)) goto L_95c382;
L_95c350: /* 95c350: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 95c353: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95c359: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95c360: /* 95c360: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95c363: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95c369: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 95c36b: jb 0x95c382 */
  if (cf) goto L_95c382;
L_95c36d: /* 95c36d: je 0x95c3aa */
  if (zf) goto L_95c3aa;
L_95c36f: /* 95c36f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95c373: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95c375: mov esi, dword ptr [esi + ecx*4 + 8] */
  esi = R32((uint32_t)(esi + ecx*4 + 0x8u));
/* 95c379: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95c37a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c37c: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 95c380: jl 0x95c360 */
  if ((sf != of)) goto L_95c360;
L_95c382: /* 95c382: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 95c386: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c387: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c388: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c389: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x95c38eu); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 95c38e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c391: /* 95c391: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95c395: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 95c398: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95c39b: jne 0x95c3b4 */
  if (!zf) goto L_95c3b4;
L_95c39d: /* 95c39d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 95c39f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c3a0: call 0x95ca00 */
  esp -= 4; W32(esp, 0x95c3a5u); SPILL(); f_95ca00(); if (g_unwind) return; RELOAD();
/* 95c3a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c3a8: jmp 0x95c3d0 */
  goto L_95c3d0;
L_95c3aa: /* 95c3aa: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 95c3b2: jmp 0x95c391 */
  goto L_95c391;
L_95c3b4: /* 95c3b4: test dword ptr [ebx + 0x14], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c3bb: jne 0x95c3d0 */
  if (!zf) goto L_95c3d0;
L_95c3bd: /* 95c3bd: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 95c3c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c3c2: call 0x95f300 */
  esp -= 4; W32(esp, 0x95c3c7u); SPILL(); f_95f300(); if (g_unwind) return; RELOAD();
/* 95c3c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c3c8: call 0x95dc70 */
  esp -= 4; W32(esp, 0x95c3cdu); SPILL(); f_95dc70(); if (g_unwind) return; RELOAD();
/* 95c3cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c3d0: /* 95c3d0: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_95c3d4: /* 95c3d4: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c3db: jl 0x95c3f4 */
  if ((sf != of)) goto L_95c3f4;
L_95c3dd: /* 95c3dd: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 95c3e0: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95c3e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c3e6: push 0xaf9e30 */
  { uint32_t v = 0xaf9e30u; esp -= 4; W32(esp, v); }
/* 95c3eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c3ec: call 0x953470 */
  esp -= 4; W32(esp, 0x95c3f1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c3f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c3f4: /* 95c3f4: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 95c3f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c3f9: je 0x95c44d */
  if (zf) goto L_95c44d;
L_95c3fb: /* 95c3fb: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95c3fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c400: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 95c403: je 0x95c44d */
  if (zf) goto L_95c44d;
L_95c405: /* 95c405: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95c409: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95c40c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c40e: jne 0x95c425 */
  if (!zf) goto L_95c425;
L_95c410: /* 95c410: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95c414: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c416: jne 0x95c425 */
  if (!zf) goto L_95c425;
L_95c418: /* 95c418: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95c41b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c41c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c41d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c41e: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95c423u); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95c423: jmp 0x95c444 */
  goto L_95c444;
L_95c425: /* 95c425: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 95c428: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c42a: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c42fu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c42f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95c432: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 95c435: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c438: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c43a: jne 0x95c447 */
  if (!zf) goto L_95c447;
L_95c43c: /* 95c43c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c43d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c43e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c43f: call 0x95c5f0 */
  esp -= 4; W32(esp, 0x95c444u); SPILL(); f_95c5f0(); if (g_unwind) return; RELOAD();
L_95c444: /* 95c444: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c447: /* 95c447: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95c449: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c44b: jne 0x95c405 */
  if (!zf) goto L_95c405;
L_95c44d: /* 95c44d: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c454: jl 0x95c471 */
  if ((sf != of)) goto L_95c471;
L_95c456: /* 95c456: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 95c459: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 95c45c: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95c461: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c462: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c463: push 0xaf9df0 */
  { uint32_t v = 0xaf9df0u; esp -= 4; W32(esp, v); }
/* 95c468: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c469: call 0x953470 */
  esp -= 4; W32(esp, 0x95c46eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c46e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c471: /* 95c471: inc dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8bf8u), r);
  }
/* 95c477: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 95c47a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c47c: je 0x95c499 */
  if (zf) goto L_95c499;
L_95c47e: /* 95c47e: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95c481: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c483: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c485: je 0x95c499 */
  if (zf) goto L_95c499;
L_95c487: /* 95c487: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95c48d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c490: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 95c493: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c495: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c497: jne 0x95c487 */
  if (!zf) goto L_95c487;
L_95c499: /* 95c499: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 95c49c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c49e: je 0x95c5a0 */
  if (zf) goto L_95c5a0;
L_95c4a4: /* 95c4a4: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95c4a7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c4a9: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95c4ac: je 0x95c59c */
  if (zf) goto L_95c59c;
L_95c4b2: /* 95c4b2: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 95c4b5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95c4b8: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c4ba: jne 0x95c4bf */
  if (!zf) goto L_95c4bf;
L_95c4bc: /* 95c4bc: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
L_95c4bf: /* 95c4bf: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95c4c3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c4c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c4c6: jne 0x95c4fa */
  if (!zf) goto L_95c4fa;
L_95c4c8: /* 95c4c8: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95c4cb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 95c4cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c4ce: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c4d3u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c4d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c4d4: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95c4d9u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95c4d9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 95c4db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c4dc: call 0x953a60 */
  esp -= 4; W32(esp, 0x95c4e1u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95c4e1: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 95c4e5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 95c4e8: lea eax, [ecx + 0x28] */
  eax = (uint32_t)(ecx + 0x28u);
/* 95c4eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c4ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c4ed: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c4f2u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c4f2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c4f5: jmp 0x95c592 */
  goto L_95c592;
L_95c4fa: /* 95c4fa: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95c4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c4fe: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c503u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c503: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 95c506: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95c50c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c50f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c511: je 0x95c53b */
  if (zf) goto L_95c53b;
L_95c513: /* 95c513: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95c517: lea eax, [ecx + 0x28] */
  eax = (uint32_t)(ecx + 0x28u);
/* 95c51a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c51c: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c521u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c521: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 95c525: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95c528: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c529: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c52a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c52b: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95c530u); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95c530: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95c536: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 95c539: jmp 0x95c57a */
  goto L_95c57a;
L_95c53b: /* 95c53b: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95c53e: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95c541: je 0x95c54c */
  if (zf) goto L_95c54c;
L_95c543: /* 95c543: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c544: call 0x95a520 */
  esp -= 4; W32(esp, 0x95c549u); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 95c549: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c54c: /* 95c54c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95c54f: cmp dword ptr [eax + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c552: je 0x95c560 */
  if (zf) goto L_95c560;
L_95c554: /* 95c554: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c556: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c55bu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c55b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c55e: jmp 0x95c57d */
  goto L_95c57d;
L_95c560: /* 95c560: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95c564: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c566: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c56bu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c56b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95c56f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95c572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c573: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c574: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c575: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95c57au); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
L_95c57a: /* 95c57a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c57d: /* 95c57d: cmp dword ptr [edi + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c580: jne 0x95c58b */
  if (!zf) goto L_95c58b;
L_95c582: /* 95c582: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95c586: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 95c589: jmp 0x95c592 */
  goto L_95c592;
L_95c58b: /* 95c58b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95c58f: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_95c592: /* 95c592: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95c594: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c596: jne 0x95c4b2 */
  if (!zf) goto L_95c4b2;
L_95c59c: /* 95c59c: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_95c5a0: /* 95c5a0: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 95c5a3: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 95c5aa: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c5b1: jl 0x95c5e5 */
  if ((sf != of)) goto L_95c5e5;
L_95c5b3: /* 95c5b3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95c5b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c5b9: je 0x95c5c5 */
  if (zf) goto L_95c5c5;
L_95c5bb: /* 95c5bb: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 95c5be: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95c5c3: jmp 0x95c5c8 */
  goto L_95c5c8;
L_95c5c5: /* 95c5c5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_95c5c8: /* 95c5c8: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 95c5cb: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95c5d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c5d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c5d3: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 95c5d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c5d7: push 0xaf9db0 */
  { uint32_t v = 0xaf9db0u; esp -= 4; W32(esp, v); }
/* 95c5dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c5dd: call 0x953470 */
  esp -= 4; W32(esp, 0x95c5e2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c5e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c5e5: /* 95c5e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c5e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c5e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c5e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c5e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c5ec: ret  */
  esp += 4; SPILL(); return;
}

void f_95c5f0(void) {
  LOAD_REGS();
L_95c5f0: /* 95c5f0: mov ecx, dword ptr [0xcf7988] */
  ecx = R32((uint32_t)(0xcf7988u));
/* 95c5f6: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95c5fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c5fc: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 95c600: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95c601: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c604: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c605: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95c609: mov dword ptr [0xcf7988], ecx */
  W32((uint32_t)(0xcf7988u), ecx);
/* 95c60f: jl 0x95c63a */
  if ((sf != of)) goto L_95c63a;
L_95c611: /* 95c611: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95c614: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95c618: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 95c61b: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95c621: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c622: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95c625: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c626: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95c62b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c62c: push 0xaf9e9c */
  { uint32_t v = 0xaf9e9cu; esp -= 4; W32(esp, v); }
/* 95c631: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c632: call 0x953470 */
  esp -= 4; W32(esp, 0x95c637u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c637: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c63a: /* 95c63a: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 95c63d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c63e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c63f: call 0x94ebf0 */
  esp -= 4; W32(esp, 0x95c644u); SPILL(); f_94ebf0(); if (g_unwind) return; RELOAD();
/* 95c644: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 95c647: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c648: or edi, 0x8000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 95c64e: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95c653: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 95c656: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c65bu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c65b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c65e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c65f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c660: ret  */
  esp += 4; SPILL(); return;
}

void f_95c670(void) {
  LOAD_REGS();
L_95c670: /* 95c670: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c677: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c678: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c679: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 95c67d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c67e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c67f: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95c683: jl 0x95c6a1 */
  if ((sf != of)) goto L_95c6a1;
L_95c685: /* 95c685: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 95c688: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95c68b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95c691: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c692: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c693: push 0xaf9f28 */
  { uint32_t v = 0xaf9f28u; esp -= 4; W32(esp, v); }
/* 95c698: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c699: call 0x953470 */
  esp -= 4; W32(esp, 0x95c69eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c69e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c6a1: /* 95c6a1: mov ecx, dword ptr [0xcf8b70] */
  ecx = R32((uint32_t)(0xcf8b70u));
/* 95c6a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c6a9: je 0x95c6f1 */
  if (zf) goto L_95c6f1;
L_95c6ab: /* 95c6ab: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 95c6ae: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95c6b1: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 95c6b7: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 95c6ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c6bb: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95c6be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c6bf: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95c6c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c6c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c6c7: push 0xaf9ee0 */
  { uint32_t v = 0xaf9ee0u; esp -= 4; W32(esp, v); }
/* 95c6cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c6cd: call 0x953470 */
  esp -= 4; W32(esp, 0x95c6d2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c6d2: mov eax, dword ptr [0xcf8b70] */
  eax = R32((uint32_t)(0xcf8b70u));
/* 95c6d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c6d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c6da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c6dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c6de: push 0xaf9ed8 */
  { uint32_t v = 0xaf9ed8u; esp -= 4; W32(esp, v); }
/* 95c6e3: call 0x953700 */
  esp -= 4; W32(esp, 0x95c6e8u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95c6e8: mov ecx, dword ptr [0xcf8b70] */
  ecx = R32((uint32_t)(0xcf8b70u));
/* 95c6ee: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c6f1: /* 95c6f1: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95c6f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c6f6: je 0x95c74c */
  if (zf) goto L_95c74c;
L_95c6f8: /* 95c6f8: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95c6fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c6fd: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95c700: je 0x95c74c */
  if (zf) goto L_95c74c;
L_95c702: /* 95c702: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 95c705: mov eax, dword ptr [0xcf8bfc] */
  eax = R32((uint32_t)(0xcf8bfcu));
/* 95c70a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95c70d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95c70f: je 0x95c71e */
  if (zf) goto L_95c71e;
L_95c711: /* 95c711: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 95c714: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c715: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c717: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95c71cu); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95c71c: jmp 0x95c73d */
  goto L_95c73d;
L_95c71e: /* 95c71e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95c721: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c723: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95c728u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95c728: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95c72b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 95c72e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c733: jne 0x95c740 */
  if (!zf) goto L_95c740;
L_95c735: /* 95c735: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c736: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c737: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c738: call 0x95c5f0 */
  esp -= 4; W32(esp, 0x95c73du); SPILL(); f_95c5f0(); if (g_unwind) return; RELOAD();
L_95c73d: /* 95c73d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c740: /* 95c740: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95c742: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c744: jne 0x95c702 */
  if (!zf) goto L_95c702;
L_95c746: /* 95c746: mov ecx, dword ptr [0xcf8b70] */
  ecx = R32((uint32_t)(0xcf8b70u));
L_95c74c: /* 95c74c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c74e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c74f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c750: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c751: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c752: je 0x95c768 */
  if (zf) goto L_95c768;
L_95c754: /* 95c754: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c755: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c757: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c759: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c75b: push 0xaf9ed8 */
  { uint32_t v = 0xaf9ed8u; esp -= 4; W32(esp, v); }
/* 95c760: call 0x953700 */
  esp -= 4; W32(esp, 0x95c765u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95c765: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c768: /* 95c768: ret  */
  esp += 4; SPILL(); return;
}

void f_95c770(void) {
  LOAD_REGS();
L_95c770: /* 95c770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c771: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c772: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 95c776: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 95c778: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c779: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c77a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c77b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c77c: call 0x94f340 */
  esp -= 4; W32(esp, 0x95c781u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95c781: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 95c785: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c786: mov ebp, eax */
  ebp = eax;
/* 95c788: call 0x94f340 */
  esp -= 4; W32(esp, 0x95c78du); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95c78d: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 95c793: mov ecx, 1 */
  ecx = 0x1u;
/* 95c798: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 95c79a: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95c79c: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 95c79e: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 95c7a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c7a1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95c7a4: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x95c7a9u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 95c7a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c7ac: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c7ae: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 95c7b2: je 0x95c85c */
  if (zf) goto L_95c85c;
L_95c7b8: /* 95c7b8: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 95c7bb: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95c7bd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c7bf: je 0x95c858 */
  if (zf) goto L_95c858;
L_95c7c5: /* 95c7c5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95c7c7: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95c7ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c7cc: je 0x95c840 */
  if (zf) goto L_95c840;
L_95c7ce: /* 95c7ce: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 95c7d1: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 95c7d4: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95c7da: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95c7e0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 95c7e2: ja 0x95c840 */
  if ((!cf && !zf)) goto L_95c840;
L_95c7e4: /* 95c7e4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 95c7e7: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 95c7ea: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95c7f0: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95c7f6: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 95c7f8: jbe 0x95c819 */
  if ((cf | zf)) goto L_95c819;
L_95c7fa: /* 95c7fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c7fb: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 95c7ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c800: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95c803: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c808u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c808: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95c80a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c80d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c80f: jne 0x95c7e4 */
  if (!zf) goto L_95c7e4;
L_95c811: /* 95c811: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c812: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 95c816: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c817: jmp 0x95c846 */
  goto L_95c846;
L_95c819: /* 95c819: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95c81b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c81d: je 0x95c811 */
  if (zf) goto L_95c811;
L_95c81f: /* 95c81f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 95c822: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 95c825: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95c82b: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95c831: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 95c833: jb 0x95c811 */
  if (cf) goto L_95c811;
L_95c835: /* 95c835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c836: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 95c83a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95c83d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c83e: jmp 0x95c846 */
  goto L_95c846;
L_95c840: /* 95c840: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c841: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 95c845: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_95c846: /* 95c846: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c84bu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c84b: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95c84d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c850: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c852: jne 0x95c7c5 */
  if (!zf) goto L_95c7c5;
L_95c858: /* 95c858: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_95c85c: /* 95c85c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95c85e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c860: je 0x95c879 */
  if (zf) goto L_95c879;
L_95c862: /* 95c862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c863: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 95c867: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c868: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95c86b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95c870u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95c870: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95c872: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c875: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c877: jne 0x95c862 */
  if (!zf) goto L_95c862;
L_95c879: /* 95c879: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 95c87d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c87e: call 0x94f340 */
  esp -= 4; W32(esp, 0x95c883u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95c883: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c886: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c888: jge 0x95c8a9 */
  if ((sf == of)) goto L_95c8a9;
L_95c88a: /* 95c88a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95c890: push 0xaf9f70 */
  { uint32_t v = 0xaf9f70u; esp -= 4; W32(esp, v); }
/* 95c895: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c896: call 0x953470 */
  esp -= 4; W32(esp, 0x95c89bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c89b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c89d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95c89f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95c8a1: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95c8a6u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95c8a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c8a9: /* 95c8a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c8aa: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95c8afu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95c8af: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95c8b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c8b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c8b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c8b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c8b9: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 95c8bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c8bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c8bf: jmp 0x94f4b0 */
  SPILL(); f_94f4b0(); return;
}

void f_95c8d0(void) {
  LOAD_REGS();
L_95c8d0: /* 95c8d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95c8d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c8d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 95c8d6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 95c8d9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c8db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95c8dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95c8dd: je 0x95c904 */
  if (zf) goto L_95c904;
L_95c8df: /* 95c8df: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 95c8e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c8e4: lea ecx, [edx + 4] */
  ecx = (uint32_t)(edx + 0x4u);
/* 95c8e7: je 0x95c904 */
  if (zf) goto L_95c904;
L_95c8e9: /* 95c8e9: mov esi, 0x1000 */
  esi = 0x1000u;
/* 95c8ee: mov edi, edi */
  edi = edi;
L_95c8f0: /* 95c8f0: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* 95c8f3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95c8f6: test esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c8f8: jne 0x95c9f6 */
  if (!zf) goto L_95c9f6;
L_95c8fe: /* 95c8fe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95c900: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c902: jne 0x95c8f0 */
  if (!zf) goto L_95c8f0;
L_95c904: /* 95c904: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 95c907: mov esi, dword ptr [0xcf7928] */
  esi = R32((uint32_t)(0xcf7928u));
/* 95c90d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 95c910: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95c911: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c913: mov dword ptr [0xcf7928], esi */
  W32((uint32_t)(0xcf7928u), esi);
/* 95c919: jne 0x95c920 */
  if (!zf) goto L_95c920;
L_95c91b: /* 95c91b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c91c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c91d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c91e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c91f: ret  */
  esp += 4; SPILL(); return;
L_95c920: /* 95c920: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c922: jne 0x95c930 */
  if (!zf) goto L_95c930;
L_95c924: /* 95c924: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 95c927: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c928: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c929: call 0x94ea00 */
  esp -= 4; W32(esp, 0x95c92eu); SPILL(); f_94ea00(); if (g_unwind) return; RELOAD();
/* 95c92e: jmp 0x95c93d */
  goto L_95c93d;
L_95c930: /* 95c930: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 95c933: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 95c936: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c937: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c938: call 0x9584c0 */
  esp -= 4; W32(esp, 0x95c93du); SPILL(); f_9584c0(); if (g_unwind) return; RELOAD();
L_95c93d: /* 95c93d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c941: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 95c945: call 0x94f520 */
  esp -= 4; W32(esp, 0x95c94au); SPILL(); f_94f520(); if (g_unwind) return; RELOAD();
/* 95c94a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95c94e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95c94f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c950: call 0x94ebf0 */
  esp -= 4; W32(esp, 0x95c955u); SPILL(); f_94ebf0(); if (g_unwind) return; RELOAD();
/* 95c955: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 95c958: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c95b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c95d: je 0x95c9a6 */
  if (zf) goto L_95c9a6;
L_95c95f: /* 95c95f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95c962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c963: xor esi, esi */
  esi = 0;
/* 95c965: call 0x94f340 */
  esp -= 4; W32(esp, 0x95c96au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95c96a: mov ebx, eax */
  ebx = eax;
/* 95c96c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c96f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95c971: jle 0x95c9a6 */
  if ((zf || sf != of)) goto L_95c9a6;
L_95c973: /* 95c973: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c976: jl 0x95c99a */
  if ((sf != of)) goto L_95c99a;
L_95c978: /* 95c978: inc dword ptr [0xcf7928] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7928u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7928u), r);
  }
/* 95c97e: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 95c981: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c982: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 95c986: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c987: call 0x958490 */
  esp -= 4; W32(esp, 0x95c98cu); SPILL(); f_958490(); if (g_unwind) return; RELOAD();
/* 95c98c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95c990: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95c993: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c996: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95c998: je 0x95c9e3 */
  if (zf) goto L_95c9e3;
L_95c99a: /* 95c99a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 95c99d: mov edi, dword ptr [ecx + esi*4 + 8] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x8u));
/* 95c9a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95c9a2: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c9a4: jl 0x95c973 */
  if ((sf != of)) goto L_95c973;
L_95c9a6: /* 95c9a6: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95c9ad: jl 0x95c9da */
  if ((sf != of)) goto L_95c9da;
L_95c9af: /* 95c9af: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 95c9b2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 95c9b6: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95c9bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95c9bd: call 0x94f340 */
  esp -= 4; W32(esp, 0x95c9c2u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95c9c2: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95c9c8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95c9cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95c9cc: push 0xaf9fb8 */
  { uint32_t v = 0xaf9fb8u; esp -= 4; W32(esp, v); }
/* 95c9d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c9d2: call 0x953470 */
  esp -= 4; W32(esp, 0x95c9d7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95c9d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c9da: /* 95c9da: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95c9de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c9df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c9e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c9e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c9e2: ret  */
  esp += 4; SPILL(); return;
L_95c9e3: /* 95c9e3: inc dword ptr [0xcf7920] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7920u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7920u), r);
  }
/* 95c9e9: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 95c9ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95c9ee: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95c9f3u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95c9f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95c9f6: /* 95c9f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95c9f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95c9f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95c9f9: xor eax, eax */
  eax = 0;
/* 95c9fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95c9fc: ret  */
  esp += 4; SPILL(); return;
}

void f_95ca00(void) {
  LOAD_REGS();
L_95ca00: /* 95ca00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95ca04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ca07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ca08: je 0x95ca36 */
  if (zf) goto L_95ca36;
L_95ca0a: /* 95ca0a: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95ca0d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca0f: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 95ca12: je 0x95ca36 */
  if (zf) goto L_95ca36;
L_95ca14: /* 95ca14: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95ca17: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95ca1a: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca1f: jne 0x95ca30 */
  if (!zf) goto L_95ca30;
L_95ca21: /* 95ca21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ca22: call 0x95f300 */
  esp -= 4; W32(esp, 0x95ca27u); SPILL(); f_95f300(); if (g_unwind) return; RELOAD();
/* 95ca27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ca28: call 0x95dc70 */
  esp -= 4; W32(esp, 0x95ca2du); SPILL(); f_95dc70(); if (g_unwind) return; RELOAD();
/* 95ca2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ca30: /* 95ca30: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95ca32: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca34: jne 0x95ca14 */
  if (!zf) goto L_95ca14;
L_95ca36: /* 95ca36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ca37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ca38: ret  */
  esp += 4; SPILL(); return;
}

void f_95ca40(void) {
  LOAD_REGS();
L_95ca40: /* 95ca40: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95ca43: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95ca48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ca49: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ca4a: xor ebp, ebp */
  ebp = 0;
/* 95ca4c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ca4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ca50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ca51: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 95ca55: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 95ca59: jne 0x95ca65 */
  if (!zf) goto L_95ca65;
L_95ca5b: /* 95ca5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ca5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ca5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ca5e: xor eax, eax */
  eax = 0;
/* 95ca60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95ca61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ca64: ret  */
  esp += 4; SPILL(); return;
L_95ca65: /* 95ca65: call 0x95a9a0 */
  esp -= 4; W32(esp, 0x95ca6au); SPILL(); f_95a9a0(); if (g_unwind) return; RELOAD();
/* 95ca6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca6c: je 0x95ca76 */
  if (zf) goto L_95ca76;
L_95ca6e: /* 95ca6e: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_95ca76: /* 95ca76: mov ebx, 4 */
  ebx = 0x4u;
/* 95ca7b: nop  */
/* 95ca7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95ca80: /* 95ca80: mov esi, dword ptr [0xcf8b58] */
  esi = R32((uint32_t)(0xcf8b58u));
/* 95ca86: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca88: je 0x95cac3 */
  if (zf) goto L_95cac3;
L_95ca8a: /* 95ca8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95ca90: /* 95ca90: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 95ca93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca95: je 0x95cac3 */
  if (zf) goto L_95cac3;
L_95ca97: /* 95ca97: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95ca9a: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ca9f: je 0x95cabc */
  if (zf) goto L_95cabc;
L_95caa1: /* 95caa1: mov ecx, dword ptr [0xcf8468] */
  ecx = R32((uint32_t)(0xcf8468u));
/* 95caa7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95caa9: jne 0x95cab3 */
  if (!zf) goto L_95cab3;
L_95caab: /* 95caab: and eax, 0xefffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xefffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95cab0: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
L_95cab3: /* 95cab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cab4: call 0x95cc50 */
  esp -= 4; W32(esp, 0x95cab9u); SPILL(); f_95cc50(); if (g_unwind) return; RELOAD();
/* 95cab9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cabc: /* 95cabc: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95cabf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cac1: jne 0x95ca90 */
  if (!zf) goto L_95ca90;
L_95cac3: /* 95cac3: mov eax, dword ptr [0xcf8468] */
  eax = R32((uint32_t)(0xcf8468u));
/* 95cac8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95caca: je 0x95ca5b */
  if (zf) goto L_95ca5b;
L_95cacc: /* 95cacc: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 95cad2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cad4: je 0x95cb2b */
  if (zf) goto L_95cb2b;
L_95cad6: /* 95cad6: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 95cad9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cadb: je 0x95cb2b */
  if (zf) goto L_95cb2b;
L_95cadd: /* 95cadd: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95cae0: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cae5: je 0x95cb24 */
  if (zf) goto L_95cb24;
L_95cae7: /* 95cae7: and eax, 0xefffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xefffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95caec: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
/* 95caef: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95caf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95caf4: je 0x95cb24 */
  if (zf) goto L_95cb24;
L_95caf6: /* 95caf6: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 95caf9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95cafb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cafd: je 0x95cb24 */
  if (zf) goto L_95cb24;
L_95caff: /* 95caff: nop  */
L_95cb00: /* 95cb00: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 95cb03: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95cb05: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb0b: je 0x95cb1e */
  if (zf) goto L_95cb1e;
L_95cb0d: /* 95cb0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95cb0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cb0f: call 0x95cdf0 */
  esp -= 4; W32(esp, 0x95cb14u); SPILL(); f_95cdf0(); if (g_unwind) return; RELOAD();
/* 95cb14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cb17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb19: je 0x95cb1e */
  if (zf) goto L_95cb1e;
L_95cb1b: /* 95cb1b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 95cb1c: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_95cb1e: /* 95cb1e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95cb20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb22: jne 0x95cb00 */
  if (!zf) goto L_95cb00;
L_95cb24: /* 95cb24: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95cb27: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb29: jne 0x95cad6 */
  if (!zf) goto L_95cad6;
L_95cb2b: /* 95cb2b: mov esi, dword ptr [0xcf8b7c] */
  esi = R32((uint32_t)(0xcf8b7cu));
L_95cb31: /* 95cb31: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb33: je 0x95cb86 */
  if (zf) goto L_95cb86;
L_95cb35: /* 95cb35: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95cb38: je 0x95cb86 */
  if (zf) goto L_95cb86;
L_95cb3a: /* 95cb3a: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95cb3d: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb42: je 0x95cb75 */
  if (zf) goto L_95cb75;
L_95cb44: /* 95cb44: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb49: jne 0x95cb75 */
  if (!zf) goto L_95cb75;
L_95cb4b: /* 95cb4b: and eax, 0xfbffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfbffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95cb50: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 95cb53: cmp dword ptr [0xcf85cc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95cb59: jl 0x95cb75 */
  if ((sf != of)) goto L_95cb75;
L_95cb5b: /* 95cb5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cb5c: call 0x95cbc0 */
  esp -= 4; W32(esp, 0x95cb61u); SPILL(); f_95cbc0(); if (g_unwind) return; RELOAD();
/* 95cb61: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cb64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb66: je 0x95cb75 */
  if (zf) goto L_95cb75;
L_95cb68: /* 95cb68: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 95cb6c: call 0x95a9a0 */
  esp -= 4; W32(esp, 0x95cb71u); SPILL(); f_95a9a0(); if (g_unwind) return; RELOAD();
/* 95cb71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cb73: jne 0x95cb79 */
  if (!zf) goto L_95cb79;
L_95cb75: /* 95cb75: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 95cb77: jmp 0x95cb31 */
  goto L_95cb31;
L_95cb79: /* 95cb79: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 95cb81: jmp 0x95ca80 */
  goto L_95ca80;
L_95cb86: /* 95cb86: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95cb8d: jl 0x95cbae */
  if ((sf != of)) goto L_95cbae;
L_95cb8f: /* 95cb8f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95cb93: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 95cb97: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95cb9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cb9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cb9f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95cba0: push 0xafa000 */
  { uint32_t v = 0xafa000u; esp -= 4; W32(esp, v); }
/* 95cba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cba6: call 0x953470 */
  esp -= 4; W32(esp, 0x95cbabu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95cbab: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cbae: /* 95cbae: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95cbb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95cbb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95cbb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95cbb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95cbb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cbb9: ret  */
  esp += 4; SPILL(); return;
}

void f_95cbc0(void) {
  LOAD_REGS();
L_95cbc0: /* 95cbc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cbc1: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95cbc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cbc7: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 95cbcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95cbcc: xor edi, edi */
  edi = 0;
/* 95cbce: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95cbd1: jl 0x95cbf0 */
  if ((sf != of)) goto L_95cbf0;
L_95cbd3: /* 95cbd3: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95cbd6: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95cbdc: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95cbe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cbe2: push 0xafa054 */
  { uint32_t v = 0xafa054u; esp -= 4; W32(esp, v); }
/* 95cbe7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cbe8: call 0x953470 */
  esp -= 4; W32(esp, 0x95cbedu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95cbed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cbf0: /* 95cbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cbf1: call 0x95c8d0 */
  esp -= 4; W32(esp, 0x95cbf6u); SPILL(); f_95c8d0(); if (g_unwind) return; RELOAD();
/* 95cbf6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cbf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cbfb: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 95cbff: je 0x95cc4a */
  if (zf) goto L_95cc4a;
L_95cc01: /* 95cc01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cc02: call 0x95da30 */
  esp -= 4; W32(esp, 0x95cc07u); SPILL(); f_95da30(); if (g_unwind) return; RELOAD();
/* 95cc07: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 95cc0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cc0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cc0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cc0e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 95cc12: call 0x959570 */
  esp -= 4; W32(esp, 0x95cc17u); SPILL(); f_959570(); if (g_unwind) return; RELOAD();
/* 95cc17: mov edi, eax */
  edi = eax;
/* 95cc19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cc1c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cc1e: je 0x95cc33 */
  if (zf) goto L_95cc33;
L_95cc20: /* 95cc20: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95cc24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95cc26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95cc28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cc29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95cc2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cc2b: call 0x95d0e0 */
  esp -= 4; W32(esp, 0x95cc30u); SPILL(); f_95d0e0(); if (g_unwind) return; RELOAD();
/* 95cc30: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cc33: /* 95cc33: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 95cc37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cc38: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95cc3du); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95cc3d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 95cc41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cc42: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95cc47u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95cc47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cc4a: /* 95cc4a: mov eax, edi */
  eax = edi;
/* 95cc4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95cc4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95cc4e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95cc4f: ret  */
  esp += 4; SPILL(); return;
}

void f_95cc50(void) {
  LOAD_REGS();
L_95cc50: /* 95cc50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cc51: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95cc56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95cc57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cc58: xor ebx, ebx */
  ebx = 0;
/* 95cc5a: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95cc5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95cc5e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95cc62: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 95cc66: jl 0x95cc80 */
  if ((sf != of)) goto L_95cc80;
L_95cc68: /* 95cc68: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95cc6b: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95cc71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cc72: push 0xafa11c */
  { uint32_t v = 0xafa11cu; esp -= 4; W32(esp, v); }
/* 95cc77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cc78: call 0x953470 */
  esp -= 4; W32(esp, 0x95cc7du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95cc7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cc80: /* 95cc80: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95cc83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cc85: je 0x95cca6 */
  if (zf) goto L_95cca6;
L_95cc87: /* 95cc87: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95cc8a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95cc8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cc8e: je 0x95cca6 */
  if (zf) goto L_95cca6;
L_95cc90: /* 95cc90: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
L_95cc95: /* 95cc95: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 95cc98: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 95cc9a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95cc9d: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 95cca0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95cca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cca4: jne 0x95cc95 */
  if (!zf) goto L_95cc95;
L_95cca6: /* 95cca6: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95cca9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ccab: je 0x95ccea */
  if (zf) goto L_95ccea;
L_95ccad: /* 95ccad: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 95ccb0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95ccb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ccb4: je 0x95ccea */
  if (zf) goto L_95ccea;
L_95ccb6: /* 95ccb6: mov esi, 0x1000000 */
  esi = 0x1000000u;
/* 95ccbb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ccbc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95ccc0: /* 95ccc0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 95ccc2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95ccc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ccc7: je 0x95cce3 */
  if (zf) goto L_95cce3;
L_95ccc9: /* 95ccc9: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95cccc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95ccce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ccd0: je 0x95cce3 */
  if (zf) goto L_95cce3;
L_95ccd2: /* 95ccd2: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 95ccd5: or ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 95ccd7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95ccda: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 95ccdd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95ccdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cce1: jne 0x95ccd2 */
  if (!zf) goto L_95ccd2;
L_95cce3: /* 95cce3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95cce5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cce7: jne 0x95ccc0 */
  if (!zf) goto L_95ccc0;
L_95cce9: /* 95cce9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_95ccea: /* 95ccea: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95cced: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ccef: je 0x95cde6 */
  if (zf) goto L_95cde6;
L_95ccf5: /* 95ccf5: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95ccf8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ccfa: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 95ccfd: je 0x95cde6 */
  if (zf) goto L_95cde6;
L_95cd03: /* 95cd03: mov ebx, 1 */
  ebx = 0x1u;
L_95cd08: /* 95cd08: mov al, byte ptr [esi + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x17u))) & 0xffu);
/* 95cd0b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95cd0e: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95cd10: jne 0x95cdd3 */
  if (!zf) goto L_95cdd3;
L_95cd16: /* 95cd16: mov eax, dword ptr [0xcf7a20] */
  eax = R32((uint32_t)(0xcf7a20u));
/* 95cd1b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95cd1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95cd20: mov dword ptr [0xcf7a20], eax */
  W32((uint32_t)(0xcf7a20u), eax);
/* 95cd25: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 95cd28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cd29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cd2a: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 95cd2e: call 0x94ebf0 */
  esp -= 4; W32(esp, 0x95cd33u); SPILL(); f_94ebf0(); if (g_unwind) return; RELOAD();
/* 95cd33: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 95cd37: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 95cd3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cd3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cd3c: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95cd41u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95cd41: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95cd44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cd45: call 0x94f340 */
  esp -= 4; W32(esp, 0x95cd4au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95cd4a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cd4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cd4f: jne 0x95cda2 */
  if (!zf) goto L_95cda2;
L_95cd51: /* 95cd51: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 95cd54: or edx, 0x8000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 95cd5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cd5b: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95cd60: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 95cd63: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95cd68u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95cd68: mov ecx, dword ptr [0xcf7a24] */
  ecx = R32((uint32_t)(0xcf7a24u));
/* 95cd6e: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95cd73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cd76: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95cd77: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95cd7a: mov dword ptr [0xcf7a24], ecx */
  W32((uint32_t)(0xcf7a24u), ecx);
/* 95cd80: jl 0x95cdd0 */
  if ((sf != of)) goto L_95cdd0;
L_95cd82: /* 95cd82: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95cd85: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95cd8b: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95cd91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cd92: push 0xafa0d8 */
  { uint32_t v = 0xafa0d8u; esp -= 4; W32(esp, v); }
/* 95cd97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cd98: call 0x953470 */
  esp -= 4; W32(esp, 0x95cd9du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95cd9d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cda0: jmp 0x95cdd0 */
  goto L_95cdd0;
L_95cda2: /* 95cda2: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95cda9: jl 0x95cdd0 */
  if ((sf != of)) goto L_95cdd0;
L_95cdab: /* 95cdab: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95cdaf: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 95cdb2: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 95cdb5: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95cdba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cdbb: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95cdc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cdc2: push 0xafa088 */
  { uint32_t v = 0xafa088u; esp -= 4; W32(esp, v); }
/* 95cdc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cdc8: call 0x953470 */
  esp -= 4; W32(esp, 0x95cdcdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95cdcd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cdd0: /* 95cdd0: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_95cdd3: /* 95cdd3: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95cdd5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cdd7: jne 0x95cd08 */
  if (!zf) goto L_95cd08;
L_95cddd: /* 95cddd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 95cde1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95cde2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95cde3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95cde4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95cde5: ret  */
  esp += 4; SPILL(); return;
L_95cde6: /* 95cde6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95cde7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95cde8: mov eax, ebx */
  eax = ebx;
/* 95cdea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95cdeb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95cdec: ret  */
  esp += 4; SPILL(); return;
}

void f_95cdf0(void) {
  LOAD_REGS();
L_95cdf0: /* 95cdf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cdf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95cdf2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95cdf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cdf4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 95cdf8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95cdfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95cdfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cdfd: xor edi, edi */
  edi = 0;
/* 95cdff: call 0x94f340 */
  esp -= 4; W32(esp, 0x95ce04u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95ce04: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ce07: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ce0a: jne 0x95ce26 */
  if (!zf) goto L_95ce26;
L_95ce0c: /* 95ce0c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95ce0f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95ce12: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 95ce16: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ce18: jne 0x95ced8 */
  if (!zf) goto L_95ced8;
L_95ce1e: /* 95ce1e: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 95ce21: jmp 0x95ced8 */
  goto L_95ced8;
L_95ce26: /* 95ce26: cmp dword ptr [0xcf85cc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ce2d: jne 0x95ce37 */
  if (!zf) goto L_95ce37;
L_95ce2f: /* 95ce2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ce30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ce31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ce32: xor eax, eax */
  eax = 0;
/* 95ce34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95ce35: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95ce36: ret  */
  esp += 4; SPILL(); return;
L_95ce37: /* 95ce37: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95ce3d: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 95ce41: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95ce42: mov dword ptr [0xcf8bf8], edx */
  W32((uint32_t)(0xcf8bf8u), edx);
/* 95ce48: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 95ce4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce4d: je 0x95ce6a */
  if (zf) goto L_95ce6a;
L_95ce4f: /* 95ce4f: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95ce52: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95ce54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce56: je 0x95ce6a */
  if (zf) goto L_95ce6a;
L_95ce58: /* 95ce58: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95ce5e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95ce61: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 95ce64: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95ce66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce68: jne 0x95ce58 */
  if (!zf) goto L_95ce58;
L_95ce6a: /* 95ce6a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95ce6d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce6f: je 0x95ce9b */
  if (zf) goto L_95ce9b;
L_95ce71: /* 95ce71: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 95ce74: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95ce77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce79: je 0x95ce9b */
  if (zf) goto L_95ce9b;
L_95ce7b: /* 95ce7b: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
L_95ce81: /* 95ce81: mov ebx, dword ptr [eax + 0x34] */
  ebx = R32((uint32_t)(eax + 0x34u));
/* 95ce84: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95ce87: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ce89: jne 0x95ce91 */
  if (!zf) goto L_95ce91;
L_95ce8b: /* 95ce8b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce8d: jne 0x95ce2f */
  if (!zf) goto L_95ce2f;
L_95ce8f: /* 95ce8f: mov edi, eax */
  edi = eax;
L_95ce91: /* 95ce91: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95ce93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce95: jne 0x95ce81 */
  if (!zf) goto L_95ce81;
L_95ce97: /* 95ce97: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ce99: jne 0x95ced8 */
  if (!zf) goto L_95ced8;
L_95ce9b: /* 95ce9b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 95ce9e: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95cea1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95cea7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cea8: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95ceae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ceaf: push 0xafa1a0 */
  { uint32_t v = 0xafa1a0u; esp -= 4; W32(esp, v); }
/* 95ceb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ceb5: call 0x953470 */
  esp -= 4; W32(esp, 0x95cebau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ceba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cebb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95cebd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95cebf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95cec0: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 95cec5: call 0x953700 */
  esp -= 4; W32(esp, 0x95cecau); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95ceca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95cecc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95cece: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95ced0: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95ced5u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95ced5: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ced8: /* 95ced8: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 95cedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cede: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x95cee3u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 95cee3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 95cee7: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95ceec: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 95cef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cef1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95cef2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95cef3: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 95cef8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cef9: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 95cefc: call 0x95db20 */
  esp -= 4; W32(esp, 0x95cf01u); SPILL(); f_95db20(); if (g_unwind) return; RELOAD();
/* 95cf01: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95cf06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cf09: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95cf0c: jl 0x95cf4f */
  if ((sf != of)) goto L_95cf4f;
L_95cf0e: /* 95cf0e: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95cf11: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95cf15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cf16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cf17: call 0x94f340 */
  esp -= 4; W32(esp, 0x95cf1cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95cf1c: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 95cf1f: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 95cf22: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cf25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cf26: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 95cf29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cf2a: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95cf30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cf31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cf32: call 0x95f210 */
  esp -= 4; W32(esp, 0x95cf37u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 95cf37: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95cf3d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cf40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cf41: push 0xafa158 */
  { uint32_t v = 0xafa158u; esp -= 4; W32(esp, v); }
/* 95cf46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cf47: call 0x953470 */
  esp -= 4; W32(esp, 0x95cf4cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95cf4c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cf4f: /* 95cf4f: inc dword ptr [0xcf7928] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7928u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7928u), r);
  }
/* 95cf55: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 95cf58: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 95cf5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cf5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cf5d: call 0x9584c0 */
  esp -= 4; W32(esp, 0x95cf62u); SPILL(); f_9584c0(); if (g_unwind) return; RELOAD();
/* 95cf62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cf63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cf64: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 95cf68: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95cf6du); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95cf6d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95cf71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cf72: call 0x94f520 */
  esp -= 4; W32(esp, 0x95cf77u); SPILL(); f_94f520(); if (g_unwind) return; RELOAD();
/* 95cf77: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 95cf7b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95cf7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cf80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cf81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cf82: call 0x959570 */
  esp -= 4; W32(esp, 0x95cf87u); SPILL(); f_959570(); if (g_unwind) return; RELOAD();
/* 95cf87: mov ebx, eax */
  ebx = eax;
/* 95cf89: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cf8c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cf8e: je 0x95cfa1 */
  if (zf) goto L_95cfa1;
L_95cf90: /* 95cf90: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 95cf94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95cf95: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95cf96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cf97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95cf98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cf99: call 0x95d0e0 */
  esp -= 4; W32(esp, 0x95cf9eu); SPILL(); f_95d0e0(); if (g_unwind) return; RELOAD();
/* 95cf9e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95cfa1: /* 95cfa1: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 95cfa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cfa6: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95cfabu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95cfab: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 95cfaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cfb0: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x95cfb5u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 95cfb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cfb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95cfb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95cfba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95cfbb: mov eax, ebx */
  eax = ebx;
/* 95cfbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95cfbe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95cfbf: ret  */
  esp += 4; SPILL(); return;
}

void f_95cfc0(void) {
  LOAD_REGS();
L_95cfc0: /* 95cfc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 95cfc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95cfc5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95cfc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95cfc7: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95cfcb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 95cfcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95cfce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95cfcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95cfd0: xor edi, edi */
  edi = 0;
/* 95cfd2: call 0x94ef00 */
  esp -= 4; W32(esp, 0x95cfd7u); SPILL(); f_94ef00(); if (g_unwind) return; RELOAD();
/* 95cfd7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 95cfd9: mov ebp, eax */
  ebp = eax;
/* 95cfdb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95cfdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95cfdd: call 0x94eb60 */
  esp -= 4; W32(esp, 0x95cfe2u); SPILL(); f_94eb60(); if (g_unwind) return; RELOAD();
/* 95cfe2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95cfe4: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 95cfe8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95cfeb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cfed: je 0x95d01b */
  if (zf) goto L_95d01b;
L_95cfef: /* 95cfef: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95cff2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95cff4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95cff6: je 0x95d01b */
  if (zf) goto L_95d01b;
L_95cff8: /* 95cff8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95cffb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95cffd: je 0x95d074 */
  if (zf) goto L_95d074;
L_95cfff: /* 95cfff: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 95d002: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 95d005: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95d00a: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95d010: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 95d012: jb 0x95d01b */
  if (cf) goto L_95d01b;
L_95d014: /* 95d014: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95d016: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 95d017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d019: jne 0x95cff8 */
  if (!zf) goto L_95cff8;
L_95d01b: /* 95d01b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95d01c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d01d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d01e: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x95d023u); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 95d023: mov eax, ebp */
  eax = ebp;
/* 95d025: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95d027: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 95d028: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 95d02a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95d02c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d02f: and eax, 0x80000001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 95d034: jns 0x95d03b */
  if (!sf) goto L_95d03b;
L_95d036: /* 95d036: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95d037: or eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95d03a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_95d03b: /* 95d03b: je 0x95d06f */
  if (zf) goto L_95d06f;
L_95d03d: /* 95d03d: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d044: jl 0x95d063 */
  if ((sf != of)) goto L_95d063;
L_95d046: /* 95d046: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 95d049: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95d04e: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95d054: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d055: push 0xafa23c */
  { uint32_t v = 0xafa23cu; esp -= 4; W32(esp, v); }
/* 95d05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d05b: call 0x953470 */
  esp -= 4; W32(esp, 0x95d060u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d060: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d063: /* 95d063: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95d066: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 95d069: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 95d06c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_95d06f: /* 95d06f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d070: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d072: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d073: ret  */
  esp += 4; SPILL(); return;
L_95d074: /* 95d074: inc dword ptr [0xcf7870] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7870u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7870u), r);
  }
/* 95d07a: test dword ptr [esi + 0xc], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d081: je 0x95d08c */
  if (zf) goto L_95d08c;
L_95d083: /* 95d083: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d084: call 0x959210 */
  esp -= 4; W32(esp, 0x95d089u); SPILL(); f_959210(); if (g_unwind) return; RELOAD();
/* 95d089: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d08c: /* 95d08c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d08d: call 0x955fd0 */
  esp -= 4; W32(esp, 0x95d092u); SPILL(); f_955fd0(); if (g_unwind) return; RELOAD();
/* 95d092: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d097: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d09a: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d09d: jl 0x95d06f */
  if ((sf != of)) goto L_95d06f;
L_95d09f: /* 95d09f: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 95d0a2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 95d0a6: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 95d0a9: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95d0af: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95d0b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d0b5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95d0b8: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95d0be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d0bf: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95d0c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d0c5: push 0xafa1f0 */
  { uint32_t v = 0xafa1f0u; esp -= 4; W32(esp, v); }
/* 95d0ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d0cb: call 0x953470 */
  esp -= 4; W32(esp, 0x95d0d0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d0d0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d0d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d0d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d0d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d0d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d0d7: ret  */
  esp += 4; SPILL(); return;
}

void f_95d0e0(void) {
  LOAD_REGS();
L_95d0e0: /* 95d0e0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d0e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95d0e6: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 95d0ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95d0eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d0ec: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95d0f0: xor ebp, ebp */
  ebp = 0;
/* 95d0f2: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d0f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d0f6: jge 0x95d117 */
  if ((sf == of)) goto L_95d117;
L_95d0f8: /* 95d0f8: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95d0fb: mov eax, dword ptr [0xcf8b6c] */
  eax = R32((uint32_t)(0xcf8b6cu));
/* 95d100: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95d106: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d108: je 0x95d117 */
  if (zf) goto L_95d117;
L_95d10a: /* 95d10a: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 95d10d: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95d113: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d115: jne 0x95d11c */
  if (!zf) goto L_95d11c;
L_95d117: /* 95d117: mov ebp, 1 */
  ebp = 0x1u;
L_95d11c: /* 95d11c: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 95d120: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d122: je 0x95d144 */
  if (zf) goto L_95d144;
L_95d124: /* 95d124: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 95d127: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95d12a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d12c: je 0x95d144 */
  if (zf) goto L_95d144;
L_95d12e: /* 95d12e: mov edi, edi */
  edi = edi;
L_95d130: /* 95d130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95d131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d133: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95d136: call 0x95cfc0 */
  esp -= 4; W32(esp, 0x95d13bu); SPILL(); f_95cfc0(); if (g_unwind) return; RELOAD();
/* 95d13b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 95d13d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d140: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d142: jne 0x95d130 */
  if (!zf) goto L_95d130;
L_95d144: /* 95d144: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 95d148: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d14a: jne 0x95d1f2 */
  if (!zf) goto L_95d1f2;
L_95d150: /* 95d150: mov ecx, dword ptr [0xcf7a28] */
  ecx = R32((uint32_t)(0xcf7a28u));
/* 95d156: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95d157: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d159: mov dword ptr [0xcf7a28], ecx */
  W32((uint32_t)(0xcf7a28u), ecx);
/* 95d15f: je 0x95d188 */
  if (zf) goto L_95d188;
L_95d161: /* 95d161: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 95d164: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95d167: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95d16d: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95d172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d173: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95d179: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d17a: push 0xafa2fc */
  { uint32_t v = 0xafa2fcu; esp -= 4; W32(esp, v); }
/* 95d17f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d180: call 0x953470 */
  esp -= 4; W32(esp, 0x95d185u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d185: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d188: /* 95d188: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95d18b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d18d: je 0x95d1c9 */
  if (zf) goto L_95d1c9;
L_95d18f: /* 95d18f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95d192: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d194: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95d197: je 0x95d1c9 */
  if (zf) goto L_95d1c9;
L_95d199: /* 95d199: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95d1a0: /* 95d1a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d1a1: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95d1a4: call 0x95a7f0 */
  esp -= 4; W32(esp, 0x95d1a9u); SPILL(); f_95a7f0(); if (g_unwind) return; RELOAD();
/* 95d1a9: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95d1ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d1ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d1ae: call 0x94ebf0 */
  esp -= 4; W32(esp, 0x95d1b3u); SPILL(); f_94ebf0(); if (g_unwind) return; RELOAD();
/* 95d1b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d1b4: call 0x95cc50 */
  esp -= 4; W32(esp, 0x95d1b9u); SPILL(); f_95cc50(); if (g_unwind) return; RELOAD();
/* 95d1b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d1bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d1be: je 0x95d1c3 */
  if (zf) goto L_95d1c3;
L_95d1c0: /* 95d1c0: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_95d1c3: /* 95d1c3: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95d1c5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d1c7: jne 0x95d1a0 */
  if (!zf) goto L_95d1a0;
L_95d1c9: /* 95d1c9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95d1cc: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d1d1: jne 0x95d2f2 */
  if (!zf) goto L_95d2f2;
L_95d1d7: /* 95d1d7: or eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95d1dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d1dd: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95d1e2: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 95d1e5: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95d1eau); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95d1ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d1ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d1ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d1ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d1f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d1f1: ret  */
  esp += 4; SPILL(); return;
L_95d1f2: /* 95d1f2: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95d1f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d1f6: call 0x94f340 */
  esp -= 4; W32(esp, 0x95d1fbu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95d1fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d1fe: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d201: jne 0x95d288 */
  if (!zf) goto L_95d288;
L_95d207: /* 95d207: mov ecx, dword ptr [0xcf7a30] */
  ecx = R32((uint32_t)(0xcf7a30u));
/* 95d20d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95d20e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d210: mov dword ptr [0xcf7a30], ecx */
  W32((uint32_t)(0xcf7a30u), ecx);
/* 95d216: je 0x95d243 */
  if (zf) goto L_95d243;
L_95d218: /* 95d218: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95d21b: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 95d21e: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95d221: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d222: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95d228: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95d22d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d22e: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95d234: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d235: push 0xafa2c4 */
  { uint32_t v = 0xafa2c4u; esp -= 4; W32(esp, v); }
/* 95d23a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d23b: call 0x953470 */
  esp -= 4; W32(esp, 0x95d240u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d240: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d243: /* 95d243: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95d246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d248: je 0x95d269 */
  if (zf) goto L_95d269;
L_95d24a: /* 95d24a: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 95d24d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 95d24f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d251: je 0x95d269 */
  if (zf) goto L_95d269;
L_95d253: /* 95d253: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 95d256: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d258: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95d25b: call 0x94ebf0 */
  esp -= 4; W32(esp, 0x95d260u); SPILL(); f_94ebf0(); if (g_unwind) return; RELOAD();
/* 95d260: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 95d262: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d265: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d267: jne 0x95d253 */
  if (!zf) goto L_95d253;
L_95d269: /* 95d269: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 95d26c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d26d: or edi, 0x8000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 95d273: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95d278: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 95d27b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95d280u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95d280: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d283: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d285: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d286: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d287: ret  */
  esp += 4; SPILL(); return;
L_95d288: /* 95d288: mov ecx, dword ptr [0xcf7a2c] */
  ecx = R32((uint32_t)(0xcf7a2cu));
/* 95d28e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95d28f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d291: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 95d295: mov dword ptr [0xcf7a2c], ecx */
  W32((uint32_t)(0xcf7a2cu), ecx);
/* 95d29b: jne 0x95d2a6 */
  if (!zf) goto L_95d2a6;
L_95d29d: /* 95d29d: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d2a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d2a4: je 0x95d2d5 */
  if (zf) goto L_95d2d5;
L_95d2a6: /* 95d2a6: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 95d2a9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95d2ac: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 95d2af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d2b0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95d2b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d2b4: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95d2ba: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95d2bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d2c0: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95d2c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d2c7: push 0xafa280 */
  { uint32_t v = 0xafa280u; esp -= 4; W32(esp, v); }
/* 95d2cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d2cd: call 0x953470 */
  esp -= 4; W32(esp, 0x95d2d2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d2d2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d2d5: /* 95d2d5: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95d2d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d2d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d2da: call 0x94ebf0 */
  esp -= 4; W32(esp, 0x95d2dfu); SPILL(); f_94ebf0(); if (g_unwind) return; RELOAD();
/* 95d2df: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95d2e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d2e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d2e4: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95d2e9u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95d2e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95d2ea: call 0x95cc50 */
  esp -= 4; W32(esp, 0x95d2efu); SPILL(); f_95cc50(); if (g_unwind) return; RELOAD();
/* 95d2ef: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d2f2: /* 95d2f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d2f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d2f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d2f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d2f6: ret  */
  esp += 4; SPILL(); return;
}

void f_95d300(void) {
  LOAD_REGS();
L_95d300: /* 95d300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95d301: mov ebp, esp */
  ebp = esp;
/* 95d303: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 95d306: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95d309: mov eax, dword ptr [0xcf857c] */
  eax = R32((uint32_t)(0xcf857cu));
/* 95d30e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95d30f: xor ebx, ebx */
  ebx = 0;
/* 95d311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d312: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d314: mov eax, dword ptr [0xcf8be0] */
  eax = R32((uint32_t)(0xcf8be0u));
/* 95d319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d31a: mov dword ptr [esp + 0x10], 0xff7fffff */
  W32((uint32_t)(esp + 0x10u), 0xff7fffffu);
/* 95d322: mov dword ptr [esp + 0xc], 0xff7fffff */
  W32((uint32_t)(esp + 0xcu), 0xff7fffffu);
/* 95d32a: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 95d32e: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 95d332: je 0x95d341 */
  if (zf) goto L_95d341;
L_95d334: /* 95d334: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d336: jne 0x95d341 */
  if (!zf) goto L_95d341;
L_95d338: /* 95d338: xor eax, eax */
  eax = 0;
/* 95d33a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d33b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d33c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d33d: mov esp, ebp */
  esp = ebp;
/* 95d33f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d340: ret  */
  esp += 4; SPILL(); return;
L_95d341: /* 95d341: cmp dword ptr [0xcf8454], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d347: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 95d34a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 95d34d: je 0x95d357 */
  if (zf) goto L_95d357;
L_95d34f: /* 95d34f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d351: je 0x95d3f9 */
  if (zf) goto L_95d3f9;
L_95d357: /* 95d357: fld dword ptr [0xcf8a10] */
  { double v = F32((uint32_t)(0xcf8a10u)); FPUSH(v); }
/* 95d35d: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 95d363: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95d365: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95d368: jp 0x95d3f9 */
  if (pf) goto L_95d3f9;
L_95d36e: /* 95d36e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95d371: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 95d374: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d375: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d376: call 0x970820 */
  esp -= 4; W32(esp, 0x95d37bu); SPILL(); f_970820(); if (g_unwind) return; RELOAD();
/* 95d37b: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 95d37f: mov eax, dword ptr [0xcf77dc] */
  eax = R32((uint32_t)(0xcf77dcu));
/* 95d384: fcomp dword ptr [0xcf8a10] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a10u)));
  FPOP();
/* 95d38a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d38d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95d38e: mov dword ptr [0xcf77dc], eax */
  W32((uint32_t)(0xcf77dcu), eax);
/* 95d393: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95d395: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95d398: jne 0x95d3f1 */
  if (!zf) goto L_95d3f1;
L_95d39a: /* 95d39a: inc dword ptr [0xcf7830] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7830u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7830u), r);
  }
/* 95d3a0: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 95d3a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d3a5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 95d3a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d3a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d3a9: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95d3aeu); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95d3ae: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d3b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d3b6: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d3b9: jl 0x95d5f3 */
  if ((sf != of)) goto L_95d5f3;
L_95d3bf: /* 95d3bf: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95d3c2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 95d3c6: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95d3c9: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95d3cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d3d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d3d1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95d3d4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95d3d7: push 0xafa3f4 */
  { uint32_t v = 0xafa3f4u; esp -= 4; W32(esp, v); }
/* 95d3dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d3dd: call 0x953470 */
  esp -= 4; W32(esp, 0x95d3e2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d3e2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d3e5: mov eax, 1 */
  eax = 0x1u;
/* 95d3ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d3eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d3ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d3ed: mov esp, ebp */
  esp = ebp;
/* 95d3ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d3f0: ret  */
  esp += 4; SPILL(); return;
L_95d3f1: /* 95d3f1: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
L_95d3f9: /* 95d3f9: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 95d3fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d3fe: jne 0x95d40c */
  if (!zf) goto L_95d40c;
L_95d400: /* 95d400: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d401: call 0x970960 */
  esp -= 4; W32(esp, 0x95d406u); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 95d406: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d409: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
L_95d40c: /* 95d40c: mov edx, dword ptr [0xcf7804] */
  edx = R32((uint32_t)(0xcf7804u));
/* 95d412: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 95d416: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95d417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d418: mov dword ptr [0xcf7804], edx */
  W32((uint32_t)(0xcf7804u), edx);
/* 95d41e: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 95d421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d422: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d423: call 0x96fa90 */
  esp -= 4; W32(esp, 0x95d428u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 95d428: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 95d42c: fcomp dword ptr [0xcf8a0c] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a0cu)));
  FPOP();
/* 95d432: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d435: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95d437: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95d43a: je 0x95d4cd */
  if (zf) goto L_95d4cd;
L_95d440: /* 95d440: fld dword ptr [0xcf8a0c] */
  { double v = F32((uint32_t)(0xcf8a0cu)); FPUSH(v); }
/* 95d446: fchs  */
  ST0 = -ST0;
/* 95d448: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 95d44c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95d44e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95d451: jp 0x95d458 */
  if (pf) goto L_95d458;
L_95d453: /* 95d453: mov ebx, 1 */
  ebx = 0x1u;
L_95d458: /* 95d458: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95d45b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d45d: jne 0x95d46b */
  if (!zf) goto L_95d46b;
L_95d45f: /* 95d45f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d460: call 0x970960 */
  esp -= 4; W32(esp, 0x95d465u); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 95d465: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d468: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_95d46b: /* 95d46b: mov ecx, dword ptr [0xcf7804] */
  ecx = R32((uint32_t)(0xcf7804u));
/* 95d471: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 95d475: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95d476: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d477: mov dword ptr [0xcf7804], ecx */
  W32((uint32_t)(0xcf7804u), ecx);
/* 95d47d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95d480: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d482: call 0x96fa90 */
  esp -= 4; W32(esp, 0x95d487u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 95d487: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 95d48b: fcomp dword ptr [0xcf8a0c] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a0cu)));
  FPOP();
/* 95d491: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d494: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95d496: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95d499: je 0x95d4cd */
  if (zf) goto L_95d4cd;
L_95d49b: /* 95d49b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d49d: jne 0x95d4b2 */
  if (!zf) goto L_95d4b2;
L_95d49f: /* 95d49f: fld dword ptr [0xcf8a0c] */
  { double v = F32((uint32_t)(0xcf8a0cu)); FPUSH(v); }
/* 95d4a5: fchs  */
  ST0 = -ST0;
/* 95d4a7: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 95d4ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95d4ad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95d4b0: jp 0x95d4c4 */
  if (pf) goto L_95d4c4;
L_95d4b2: /* 95d4b2: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 95d4b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d4b9: je 0x95d4d5 */
  if (zf) goto L_95d4d5;
L_95d4bb: /* 95d4bb: mov eax, dword ptr [0xcf8be0] */
  eax = R32((uint32_t)(0xcf8be0u));
/* 95d4c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d4c2: jne 0x95d4d5 */
  if (!zf) goto L_95d4d5;
L_95d4c4: /* 95d4c4: xor eax, eax */
  eax = 0;
/* 95d4c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d4c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d4c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d4c9: mov esp, ebp */
  esp = ebp;
/* 95d4cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d4cc: ret  */
  esp += 4; SPILL(); return;
L_95d4cd: /* 95d4cd: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
L_95d4d5: /* 95d4d5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95d4d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d4db: jne 0x95d505 */
  if (!zf) goto L_95d505;
L_95d4dd: /* 95d4dd: mov eax, dword ptr [0xcf83e4] */
  eax = R32((uint32_t)(0xcf83e4u));
/* 95d4e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d4e4: je 0x95d505 */
  if (zf) goto L_95d505;
L_95d4e6: /* 95d4e6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95d4e9: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 95d4ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d4ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d4ee: call 0x970820 */
  esp -= 4; W32(esp, 0x95d4f3u); SPILL(); f_970820(); if (g_unwind) return; RELOAD();
/* 95d4f3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 95d4f7: mov eax, dword ptr [0xcf77dc] */
  eax = R32((uint32_t)(0xcf77dcu));
/* 95d4fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d4ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95d500: mov dword ptr [0xcf77dc], eax */
  W32((uint32_t)(0xcf77dcu), eax);
L_95d505: /* 95d505: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95d509: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d50b: je 0x95d59c */
  if (zf) goto L_95d59c;
L_95d511: /* 95d511: mov ecx, dword ptr [0xcf7820] */
  ecx = R32((uint32_t)(0xcf7820u));
/* 95d517: mov eax, dword ptr [0xcf83e4] */
  eax = R32((uint32_t)(0xcf83e4u));
/* 95d51c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95d51d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d51f: mov dword ptr [0xcf7820], ecx */
  W32((uint32_t)(0xcf7820u), ecx);
/* 95d525: je 0x95d535 */
  if (zf) goto L_95d535;
L_95d527: /* 95d527: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 95d52b: fadd qword ptr [0xa14fa0] */
  ST0 = ST0 + (F64((uint32_t)(0xa14fa0u)));
/* 95d531: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_95d535: /* 95d535: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 95d539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d53a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 95d53c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d53d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d53e: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95d543u); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95d543: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d548: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d54b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d54d: je 0x95d5f3 */
  if (zf) goto L_95d5f3;
L_95d553: /* 95d553: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 95d559: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 95d55d: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95d560: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95d563: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d564: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95d56a: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95d56d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 95d571: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 95d575: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 95d579: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 95d57d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95d580: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d582: push 0xafa390 */
  { uint32_t v = 0xafa390u; esp -= 4; W32(esp, v); }
/* 95d587: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d588: call 0x953470 */
  esp -= 4; W32(esp, 0x95d58du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d58d: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d590: mov eax, 1 */
  eax = 0x1u;
/* 95d595: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d596: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d597: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d598: mov esp, ebp */
  esp = ebp;
/* 95d59a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d59b: ret  */
  esp += 4; SPILL(); return;
L_95d59c: /* 95d59c: inc dword ptr [0xcf7834] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7834u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7834u), r);
  }
/* 95d5a2: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 95d5a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d5a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95d5a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d5aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d5ab: call 0x958ca0 */
  esp -= 4; W32(esp, 0x95d5b0u); SPILL(); f_958ca0(); if (g_unwind) return; RELOAD();
/* 95d5b0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d5b5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d5b8: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d5bb: jl 0x95d5f3 */
  if ((sf != of)) goto L_95d5f3;
L_95d5bd: /* 95d5bd: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 95d5c1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95d5c4: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95d5c7: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95d5cd: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95d5d0: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 95d5d4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 95d5d8: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 95d5dc: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 95d5e0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95d5e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d5e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d5e5: push 0xafa338 */
  { uint32_t v = 0xafa338u; esp -= 4; W32(esp, v); }
/* 95d5ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d5eb: call 0x953470 */
  esp -= 4; W32(esp, 0x95d5f0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d5f0: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d5f3: /* 95d5f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d5f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d5f5: mov eax, 1 */
  eax = 0x1u;
/* 95d5fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d5fb: mov esp, ebp */
  esp = ebp;
/* 95d5fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d5fe: ret  */
  esp += 4; SPILL(); return;
}
