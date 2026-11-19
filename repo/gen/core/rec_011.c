#include "recomp.h"
#include "rec_mod.h"

void f_525870(void) {
  LOAD_REGS();
L_525870: /* 525870: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525872: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525873: mov edi, ecx */
  edi = ecx;
/* 525875: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 525878: xor esi, esi */
  esi = 0;
/* 52587a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52587c: jle 0x5258a0 */
  if ((zf || sf != of)) goto L_5258a0;
L_52587e: /* 52587e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52587f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_525883: /* 525883: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 525885: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 525888: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52588a: jne 0x525897 */
  if (!zf) goto L_525897;
L_52588c: /* 52588c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52588e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52588f: mov ecx, edi */
  ecx = edi;
/* 525891: call 0x4e2adb */
  esp -= 4; W32(esp, 0x525896u); SPILL(); f_4e2adb(); if (g_unwind) return; RELOAD();
/* 525896: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_525897: /* 525897: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 52589a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 52589b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52589d: jl 0x525883 */
  if ((sf != of)) goto L_525883;
L_52589f: /* 52589f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_5258a0: /* 5258a0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5258a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5258a4: mov eax, ebp */
  eax = ebp;
/* 5258a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5258a7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5258a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5258aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5258c0(void) {
  LOAD_REGS();
L_5258c0: /* 5258c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5258c1: mov esi, ecx */
  esi = ecx;
/* 5258c3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5258c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5258c7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5258ca: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5258cd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5258cf: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5258d2: jle 0x5258f0 */
  if ((zf || sf != of)) goto L_5258f0;
L_5258d4: /* 5258d4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5258d7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5258d8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5258db: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5258dd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5258e0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5258e4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5258e6: mov ecx, esi */
  ecx = esi;
/* 5258e8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5258eb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5258f0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5258f0: /* 5258f0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5258f4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5258f6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5258f8: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 5258fb: mov eax, edi */
  eax = edi;
/* 5258fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5258fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5258ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_525930(void) {
  LOAD_REGS();
L_525930: /* 525930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 525934: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 52593b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 52593e: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 525946: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_525960(void) {
  LOAD_REGS();
L_525960: /* 525960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525961: mov esi, ecx */
  esi = ecx;
/* 525963: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 525966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525967: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 52596a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 52596d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52596f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 525972: jle 0x525990 */
  if ((zf || sf != of)) goto L_525990;
L_525974: /* 525974: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 525977: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 525978: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52597b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52597d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 525980: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 525984: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 525986: mov ecx, esi */
  ecx = esi;
/* 525988: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52598b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x525990u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_525990: /* 525990: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 525994: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 525996: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 525998: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 52599b: mov eax, edi */
  eax = edi;
/* 52599d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52599e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52599f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5259d0(void) {
  LOAD_REGS();
L_5259d0: /* 5259d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5259d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5259d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5259d3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5259d7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5259d9: mov esi, ecx */
  esi = ecx;
/* 5259db: jge 0x5259f4 */
  if ((sf == of)) goto L_5259f4;
L_5259dd: /* 5259dd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 5259e2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5259e7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 5259ec: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5259f1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5259f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5259f4: /* 5259f4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5259f7: jle 0x525a10 */
  if ((zf || sf != of)) goto L_525a10;
L_5259f9: /* 5259f9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5259fe: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 525a03: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 525a08: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x525a0du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 525a0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525a10: /* 525a10: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 525a14: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 525a17: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 525a1a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 525a1c: jle 0x525a35 */
  if ((zf || sf != of)) goto L_525a35;
L_525a1e: /* 525a1e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 525a23: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 525a28: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 525a2d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x525a32u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 525a32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525a35: /* 525a35: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 525a37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 525a38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525a39: mov ecx, esi */
  ecx = esi;
/* 525a3b: call 0x4e438b */
  esp -= 4; W32(esp, 0x525a40u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 525a40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 525a41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525a42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525a43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_525a70(void) {
  LOAD_REGS();
L_525a70: /* 525a70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 525a74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525a76: je 0x525a8f */
  if (zf) goto L_525a8f;
L_525a78: /* 525a78: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 525a7b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525a7d: je 0x525a8f */
  if (zf) goto L_525a8f;
L_525a7f: /* 525a7f: nop  */
L_525a80: /* 525a80: cmp ecx, 0x69ff70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 525a86: je 0x525a91 */
  if (zf) goto L_525a91;
L_525a88: /* 525a88: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 525a8b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525a8d: jne 0x525a80 */
  if (!zf) goto L_525a80;
L_525a8f: /* 525a8f: xor eax, eax */
  eax = 0;
L_525a91: /* 525a91: ret  */
  esp += 4; SPILL(); return;
}

void f_525ab0(void) {
  LOAD_REGS();
L_525ab0: /* 525ab0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 525ab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525ab6: je 0x525acf */
  if (zf) goto L_525acf;
L_525ab8: /* 525ab8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 525abb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525abd: je 0x525acf */
  if (zf) goto L_525acf;
L_525abf: /* 525abf: nop  */
L_525ac0: /* 525ac0: cmp ecx, 0x5f0d80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 525ac6: je 0x525ad1 */
  if (zf) goto L_525ad1;
L_525ac8: /* 525ac8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 525acb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525acd: jne 0x525ac0 */
  if (!zf) goto L_525ac0;
L_525acf: /* 525acf: xor eax, eax */
  eax = 0;
L_525ad1: /* 525ad1: ret  */
  esp += 4; SPILL(); return;
}

void f_525af0(void) {
  LOAD_REGS();
L_525af0: /* 525af0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525af1: mov ebp, esp */
  ebp = esp;
/* 525af3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525af5: push 0x557ce0 */
  { uint32_t v = 0x557ce0u; esp -= 4; W32(esp, v); }
/* 525afa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 525b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525b01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 525b08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 525b0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 525b0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525b0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525b0e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 525b11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 525b14: xor esi, esi */
  esi = 0;
/* 525b16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525b17: mov ebx, ecx */
  ebx = ecx;
/* 525b19: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 525b1c: call 0x4e1519 */
  esp -= 4; W32(esp, 0x525b21u); SPILL(); f_4e1519(); if (g_unwind) return; RELOAD();
/* 525b21: mov ecx, dword ptr [ebx + 0x80] */
  ecx = R32((uint32_t)(ebx + 0x80u));
/* 525b27: mov edx, dword ptr [ebx + 0x7c] */
  edx = R32((uint32_t)(ebx + 0x7cu));
/* 525b2a: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 525b2d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 525b2f: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 525b32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525b33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525b34: mov ecx, edi */
  ecx = edi;
/* 525b36: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x525b39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525b39: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 525b3f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 525b41: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 525b44: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 525b47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525b48: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 525b4e: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 525b51: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 525b54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525b55: mov ecx, edi */
  ecx = edi;
/* 525b57: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x525b5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525b5a: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 525b5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525b5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525b5f: call 0x4e17da */
  esp -= 4; W32(esp, 0x525b64u); SPILL(); f_4e17da(); if (g_unwind) return; RELOAD();
/* 525b64: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 525b66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525b69: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 525b6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525b6d: mov ecx, eax */
  ecx = eax;
/* 525b6f: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x525b72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_525b72: /* 525b72: cmp esi, dword ptr [ebx + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 525b78: jge 0x525b94 */
  if ((sf == of)) goto L_525b94;
L_525b7a: /* 525b7a: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 525b80: lea edx, [esi + esi*8] */
  edx = (uint32_t)(esi + esi*8);
/* 525b83: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 525b86: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 525b88: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 525b8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525b8c: mov ecx, edi */
  ecx = edi;
/* 525b8e: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x525b91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525b91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 525b92: jmp 0x525b72 */
  goto L_525b72;
L_525b94: /* 525b94: xor esi, esi */
  esi = 0;
/* 525b96: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 525b99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_525ba0: /* 525ba0: cmp esi, dword ptr [ebx + 0x7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 525ba3: jge 0x525c05 */
  if ((sf == of)) goto L_525c05;
L_525ba5: /* 525ba5: mov eax, dword ptr [ebx + 0x78] */
  eax = R32((uint32_t)(ebx + 0x78u));
/* 525ba8: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 525bab: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 525bad: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 525baf: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 525bb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525bb3: mov ecx, edi */
  ecx = edi;
/* 525bb5: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x525bb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525bb8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 525bba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525bbb: mov ecx, edi */
  ecx = edi;
/* 525bbd: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x525bc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525bc0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 525bc2: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 525bc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525bc6: mov ecx, eax */
  ecx = eax;
/* 525bc8: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x525bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525bcb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 525bce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 525bcf: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 525bd2: mov esi, eax */
  esi = eax;
/* 525bd4: jmp 0x525ba0 */
  goto L_525ba0;
L_525c05: /* 525c05: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 525c08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 525c09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525c0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 525c11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525c12: mov esp, ebp */
  esp = ebp;
/* 525c14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 525c15: ret 4 */
  esp += 8; SPILL(); return;
}

void f_525bd6(void) {
  LOAD_REGS();
L_525bd6: /* 525bd6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 525bd9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 525bde: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 525be1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525be2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 525be5: call 0x554df6 */
  esp -= 4; W32(esp, 0x525beau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_525bea(); return;
}

void f_525bea(void) {
  LOAD_REGS();
L_525bea: /* 525bea: push 0x56c6cc */
  { uint32_t v = 0x56c6ccu; esp -= 4; W32(esp, v); }
/* 525bef: push 0x5a6cb8 */
  { uint32_t v = 0x5a6cb8u; esp -= 4; W32(esp, v); }
/* 525bf4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x525bf9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 525bf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525bfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525bfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525c00: call 0x554df6 */
  esp -= 4; W32(esp, 0x525c05u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 525c05: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 525c08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 525c09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525c0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 525c11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525c12: mov esp, ebp */
  esp = ebp;
/* 525c14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 525c15: ret 4 */
  esp += 8; SPILL(); return;
}

void f_525c70(void) {
  LOAD_REGS();
L_525c70: /* 525c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525c71: mov ebp, esp */
  ebp = esp;
/* 525c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525c75: push 0x557cf0 */
  { uint32_t v = 0x557cf0u; esp -= 4; W32(esp, v); }
/* 525c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 525c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 525c88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 525c8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 525c8c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 525c8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525c90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525c91: mov esi, ecx */
  esi = ecx;
/* 525c93: mov edi, dword ptr [esi + 0x84] */
  edi = R32((uint32_t)(esi + 0x84u));
/* 525c99: lea ebx, [ebx + ebx*8] */
  ebx = (uint32_t)(ebx + ebx*8);
/* 525c9c: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 525c9f: mov eax, dword ptr [edi + ebx + 0x1c] */
  eax = R32((uint32_t)(edi + ebx + 0x1cu));
/* 525ca3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 525ca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525ca7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 525caa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 525cb1: jne 0x525cca */
  if (!zf) goto L_525cca;
L_525cb3: /* 525cb3: push 0x359 */
  { uint32_t v = 0x359u; esp -= 4; W32(esp, v); }
/* 525cb8: push 0x5a726c */
  { uint32_t v = 0x5a726cu; esp -= 4; W32(esp, v); }
/* 525cbd: push 0x5a727c */
  { uint32_t v = 0x5a727cu; esp -= 4; W32(esp, v); }
/* 525cc2: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x525cc7u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 525cc7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525cca: /* 525cca: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 525ccd: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x525cd2u); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 525cd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525cd4: jne 0x525d37 */
  if (!zf) goto L_525d37;
L_525cd6: /* 525cd6: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 525cdc: mov eax, dword ptr [ecx + ebx] */
  eax = R32((uint32_t)(ecx + ebx));
/* 525cdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 525ce1: jge 0x525cf0 */
  if ((sf == of)) goto L_525cf0;
L_525ce3: /* 525ce3: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 525ce6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 525ce9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 525ceb: mov ecx, dword ptr [ecx - 0x10] */
  ecx = R32((uint32_t)(ecx + 0xfffffff0u));
/* 525cee: jmp 0x525d00 */
  goto L_525d00;
L_525cf0: /* 525cf0: jle 0x525cfb */
  if ((zf || sf != of)) goto L_525cfb;
L_525cf2: /* 525cf2: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 525cf5: mov ecx, dword ptr [ecx + edx*4 - 0x18] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0xffffffe8u));
/* 525cf9: jmp 0x525d00 */
  goto L_525d00;
L_525cfb: /* 525cfb: mov ecx, 0x2a5 */
  ecx = 0x2a5u;
L_525d00: /* 525d00: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 525d05: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 525d08: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 525d0b: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 525d0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525d0f: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 525d12: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 525d15: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 525d18: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 525d1b: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 525d21: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 525d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525d25: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 525d28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525d29: push 0x5a7288 */
  { uint32_t v = 0x5a7288u; esp -= 4; W32(esp, v); }
/* 525d2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525d2f: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x525d34u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 525d34: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525d37: /* 525d37: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 525d3a: cmp dword ptr [edx + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 525d3d: je 0x525da0 */
  if (zf) goto L_525da0;
L_525d3f: /* 525d3f: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 525d45: mov eax, dword ptr [ecx + ebx] */
  eax = R32((uint32_t)(ecx + ebx));
/* 525d48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 525d4a: jge 0x525d59 */
  if ((sf == of)) goto L_525d59;
L_525d4c: /* 525d4c: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 525d4f: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 525d52: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 525d54: mov ecx, dword ptr [ecx - 0x10] */
  ecx = R32((uint32_t)(ecx + 0xfffffff0u));
/* 525d57: jmp 0x525d69 */
  goto L_525d69;
L_525d59: /* 525d59: jle 0x525d64 */
  if ((zf || sf != of)) goto L_525d64;
L_525d5b: /* 525d5b: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 525d5e: mov ecx, dword ptr [ecx + edx*4 - 0x18] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0xffffffe8u));
/* 525d62: jmp 0x525d69 */
  goto L_525d69;
L_525d64: /* 525d64: mov ecx, 0x2a5 */
  ecx = 0x2a5u;
L_525d69: /* 525d69: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 525d6e: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 525d71: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 525d74: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 525d77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525d78: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 525d7b: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 525d7e: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 525d81: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 525d84: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 525d8a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 525d8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525d8e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 525d91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525d92: push 0x5a72d0 */
  { uint32_t v = 0x5a72d0u; esp -= 4; W32(esp, v); }
/* 525d97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525d98: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x525d9du); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 525d9d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525da0: /* 525da0: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 525da3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 525da6: cmp dword ptr [edx + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 525da9: je 0x525e0c */
  if (zf) goto L_525e0c;
L_525dab: /* 525dab: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 525db1: mov eax, dword ptr [ecx + ebx] */
  eax = R32((uint32_t)(ecx + ebx));
/* 525db4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 525db6: jge 0x525dc5 */
  if ((sf == of)) goto L_525dc5;
L_525db8: /* 525db8: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 525dbb: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 525dbe: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 525dc0: mov ecx, dword ptr [ecx - 0x10] */
  ecx = R32((uint32_t)(ecx + 0xfffffff0u));
/* 525dc3: jmp 0x525dd5 */
  goto L_525dd5;
L_525dc5: /* 525dc5: jle 0x525dd0 */
  if ((zf || sf != of)) goto L_525dd0;
L_525dc7: /* 525dc7: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 525dca: mov ecx, dword ptr [ecx + edx*4 - 0x18] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0xffffffe8u));
/* 525dce: jmp 0x525dd5 */
  goto L_525dd5;
L_525dd0: /* 525dd0: mov ecx, 0x2a5 */
  ecx = 0x2a5u;
L_525dd5: /* 525dd5: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 525dda: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 525ddd: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 525de0: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 525de3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525de4: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 525de7: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 525dea: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 525ded: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 525df0: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 525df6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 525df9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525dfa: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 525dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525dfe: push 0x5a7318 */
  { uint32_t v = 0x5a7318u; esp -= 4; W32(esp, v); }
/* 525e03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525e04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x525e09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 525e09: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525e0c: /* 525e0c: mov edx, dword ptr [esi + 0x84] */
  edx = R32((uint32_t)(esi + 0x84u));
/* 525e12: mov ecx, dword ptr [ebx + edx + 0x1c] */
  ecx = R32((uint32_t)(ebx + edx + 0x1cu));
/* 525e16: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525e18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525e1a: call 0x4e1447 */
  esp -= 4; W32(esp, 0x525e1fu); SPILL(); f_4e1447(); if (g_unwind) return; RELOAD();
/* 525e1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 525e22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 525e23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525e24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 525e2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525e2c: mov esp, ebp */
  esp = ebp;
/* 525e2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 525e2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_525e32(void) {
  LOAD_REGS();
L_525e32: /* 525e32: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 525e35: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 525e3a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 525e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525e3e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 525e41: call 0x554df6 */
  esp -= 4; W32(esp, 0x525e46u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_525e46(); return;
}

void f_525e46(void) {
  LOAD_REGS();
L_525e46: /* 525e46: push 0x56c6fc */
  { uint32_t v = 0x56c6fcu; esp -= 4; W32(esp, v); }
/* 525e4b: push 0x5a735c */
  { uint32_t v = 0x5a735cu; esp -= 4; W32(esp, v); }
/* 525e50: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x525e55u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 525e55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525e58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525e5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525e5c: call 0x554df6 */
  esp -= 4; W32(esp, 0x525e61u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_525e61: guest_badaddr(0x525e61); return;
}

void f_525ef0(void) {
  LOAD_REGS();
L_525ef0: /* 525ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525ef1: mov ebp, esp */
  ebp = esp;
/* 525ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525ef5: push 0x557d00 */
  { uint32_t v = 0x557d00u; esp -= 4; W32(esp, v); }
/* 525efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 525f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 525f08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 525f0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 525f0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525f0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525f0e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 525f11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 525f14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525f15: mov esi, ecx */
  esi = ecx;
/* 525f17: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 525f1e: call 0x4e1c0d */
  esp -= 4; W32(esp, 0x525f23u); SPILL(); f_4e1c0d(); if (g_unwind) return; RELOAD();
/* 525f23: mov ecx, dword ptr [esi + 0x504] */
  ecx = R32((uint32_t)(esi + 0x504u));
/* 525f29: mov edx, dword ptr [esi + 0x500] */
  edx = R32((uint32_t)(esi + 0x500u));
/* 525f2f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 525f31: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 525f34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525f35: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 525f38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525f39: mov ecx, edi */
  ecx = edi;
/* 525f3b: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x525f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525f3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 525f41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 525f42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525f43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 525f4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525f4b: mov esp, ebp */
  esp = ebp;
/* 525f4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 525f4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_525f51(void) {
  LOAD_REGS();
L_525f51: /* 525f51: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 525f54: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 525f59: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 525f5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525f5d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 525f60: call 0x554df6 */
  esp -= 4; W32(esp, 0x525f65u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_525f65(); return;
}

void f_525f65(void) {
  LOAD_REGS();
L_525f65: /* 525f65: push 0x56c73c */
  { uint32_t v = 0x56c73cu; esp -= 4; W32(esp, v); }
/* 525f6a: push 0x5a7364 */
  { uint32_t v = 0x5a7364u; esp -= 4; W32(esp, v); }
/* 525f6f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x525f74u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 525f74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525f77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525f79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525f7b: call 0x554df6 */
  esp -= 4; W32(esp, 0x525f80u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_525f80: guest_badaddr(0x525f80); return;
}

void f_525fc0(void) {
  LOAD_REGS();
L_525fc0: /* 525fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525fc1: mov ebp, esp */
  ebp = esp;
/* 525fc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525fc5: push 0x557d10 */
  { uint32_t v = 0x557d10u; esp -= 4; W32(esp, v); }
/* 525fca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 525fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525fd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 525fd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 525fdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 525fdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525fdd: mov esi, ecx */
  esi = ecx;
/* 525fdf: mov ebx, dword ptr [esi + 0x44c] */
  ebx = R32((uint32_t)(esi + 0x44cu));
/* 525fe5: mov eax, dword ptr [esi + 0x450] */
  eax = R32((uint32_t)(esi + 0x450u));
/* 525feb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525fec: lea edi, [esi + 0x448] */
  edi = (uint32_t)(esi + 0x448u);
/* 525ff2: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 525ff5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 525ff7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 525ffa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 526001: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 526004: jle 0x526022 */
  if ((zf || sf != of)) goto L_526022;
L_526006: /* 526006: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 526009: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52600a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52600d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52600f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 526012: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 526016: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 526018: mov ecx, edi */
  ecx = edi;
/* 52601a: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 52601d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526022u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_526022: /* 526022: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 526024: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 526027: lea eax, [esi - 0xb4] */
  eax = (uint32_t)(esi + 0xffffff4cu);
/* 52602d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 52602f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 526031: mov dword ptr [ecx + ebx*4], edi */
  W32((uint32_t)(ecx + ebx*4), edi);
/* 526034: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 526036: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 526039: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52603b: mov ecx, esi */
  ecx = esi;
/* 52603d: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x526040u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 526040: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 526043: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 526046: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 526047: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 526048: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52604f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 526050: mov esp, ebp */
  esp = ebp;
/* 526052: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 526053: ret 4 */
  esp += 8; SPILL(); return;
}

void f_526056(void) {
  LOAD_REGS();
L_526056: /* 526056: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 526059: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52605e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 526061: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526062: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 526065: call 0x554df6 */
  esp -= 4; W32(esp, 0x52606au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52606a(); return;
}

void f_52606a(void) {
  LOAD_REGS();
L_52606a: /* 52606a: push 0x56c774 */
  { uint32_t v = 0x56c774u; esp -= 4; W32(esp, v); }
/* 52606f: push 0x5a73ac */
  { uint32_t v = 0x5a73acu; esp -= 4; W32(esp, v); }
/* 526074: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x526079u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 526079: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52607c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52607e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 526080: call 0x554df6 */
  esp -= 4; W32(esp, 0x526085u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_526085: guest_badaddr(0x526085); return;
}

void f_5260d0(void) {
  LOAD_REGS();
L_5260d0: /* 5260d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5260d1: mov ebp, esp */
  ebp = esp;
/* 5260d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5260d5: push 0x557d20 */
  { uint32_t v = 0x557d20u; esp -= 4; W32(esp, v); }
/* 5260da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5260e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5260e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5260e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5260eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5260ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5260ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5260ee: xor edx, edx */
  edx = 0;
/* 5260f0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5260f3: mov ebx, ecx */
  ebx = ecx;
/* 5260f5: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 5260f8: xor edi, edi */
  edi = 0;
/* 5260fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_526100: /* 526100: cmp edi, dword ptr [ebx + 0x500] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x500u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 526106: jge 0x526127 */
  if ((sf == of)) goto L_526127;
L_526108: /* 526108: mov eax, dword ptr [ebx + 0x4fc] */
  eax = R32((uint32_t)(ebx + 0x4fcu));
/* 52610e: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 526111: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526114: je 0x52611e */
  if (zf) goto L_52611e;
L_526116: /* 526116: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 526118: mov ecx, esi */
  ecx = esi;
/* 52611a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52611cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52611c: xor edx, edx */
  edx = 0;
L_52611e: /* 52611e: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 526121: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 526124: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 526125: jmp 0x526100 */
  goto L_526100;
L_526127: /* 526127: lea ecx, [ebx + 0x4fc] */
  ecx = (uint32_t)(ebx + 0x4fcu);
/* 52612d: xor eax, eax */
  eax = 0;
/* 52612f: nop  */
L_526130: /* 526130: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 526133: jge 0x526138 */
  if ((sf == of)) goto L_526138;
L_526135: /* 526135: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 526136: jmp 0x526130 */
  goto L_526130;
L_526138: /* 526138: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 52613a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 52613d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 526140: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526145u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526145: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 526148: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 526149: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52614a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 526151: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 526152: mov esp, ebp */
  esp = ebp;
/* 526154: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 526155: ret 4 */
  esp += 8; SPILL(); return;
}

void f_526158(void) {
  LOAD_REGS();
L_526158: /* 526158: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52615b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 526160: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 526163: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526164: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 526167: call 0x554df6 */
  esp -= 4; W32(esp, 0x52616cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52616c(); return;
}

void f_52616c(void) {
  LOAD_REGS();
L_52616c: /* 52616c: push 0x56c7c0 */
  { uint32_t v = 0x56c7c0u; esp -= 4; W32(esp, v); }
/* 526171: push 0x5a7404 */
  { uint32_t v = 0x5a7404u; esp -= 4; W32(esp, v); }
/* 526176: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52617bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52617b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52617e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 526180: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 526182: call 0x554df6 */
  esp -= 4; W32(esp, 0x526187u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_526187: guest_badaddr(0x526187); return;
}

void f_5261c0(void) {
  LOAD_REGS();
L_5261c0: /* 5261c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5261c2: push 0x557d38 */
  { uint32_t v = 0x557d38u; esp -= 4; W32(esp, v); }
/* 5261c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5261cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5261ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5261d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5261d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5261d7: mov esi, ecx */
  esi = ecx;
/* 5261d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5261da: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 5261de: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5261e1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5261e3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 5261eb: jge 0x526204 */
  if ((sf == of)) goto L_526204;
L_5261ed: /* 5261ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5261f2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5261f7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5261fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x526201u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 526201: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_526204: /* 526204: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 526207: jle 0x526220 */
  if ((zf || sf != of)) goto L_526220;
L_526209: /* 526209: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 52620e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 526213: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 526218: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x52621du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 52621d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_526220: /* 526220: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 526222: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 526223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 526225: mov ecx, esi */
  ecx = esi;
/* 526227: call 0x4e438b */
  esp -= 4; W32(esp, 0x52622cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 52622c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52622e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 526230: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 526238: je 0x526246 */
  if (zf) goto L_526246;
L_52623a: /* 52623a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 526240: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 526242: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526243: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x526246u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_526246: /* 526246: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 52624a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 526250: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 526257: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 52625e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52625f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 526260: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 526267: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52626a: ret  */
  esp += 4; SPILL(); return;
}

void f_5262a0(void) {
  LOAD_REGS();
L_5262a0: /* 5262a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5262a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5262a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5262a3: mov edi, ecx */
  edi = ecx;
/* 5262a5: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 5262a8: xor esi, esi */
  esi = 0;
/* 5262aa: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5262ac: jle 0x5262d0 */
  if ((zf || sf != of)) goto L_5262d0;
L_5262ae: /* 5262ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5262af: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_5262b3: /* 5262b3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5262b5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 5262b8: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5262ba: jne 0x5262c7 */
  if (!zf) goto L_5262c7;
L_5262bc: /* 5262bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5262be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5262bf: mov ecx, edi */
  ecx = edi;
/* 5262c1: call 0x4e166d */
  esp -= 4; W32(esp, 0x5262c6u); SPILL(); f_4e166d(); if (g_unwind) return; RELOAD();
/* 5262c6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_5262c7: /* 5262c7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 5262ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5262cb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5262cd: jl 0x5262b3 */
  if ((sf != of)) goto L_5262b3;
L_5262cf: /* 5262cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_5262d0: /* 5262d0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5262d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5262d4: mov eax, ebp */
  eax = ebp;
/* 5262d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5262d7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5262d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5262da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5262f0(void) {
  LOAD_REGS();
L_5262f0: /* 5262f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5262f1: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 5262f5: lea eax, [ecx + 0x34] */
  eax = (uint32_t)(ecx + 0x34u);
/* 5262f8: xor ecx, ecx */
  ecx = 0;
/* 5262fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5262fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5262fc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5262fe: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 526301: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 526304: mov ecx, 0x40 */
  ecx = 0x40u;
/* 526309: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 52630d: xor eax, eax */
  eax = 0;
/* 52630f: mov ebx, ecx */
  ebx = ecx;
/* 526311: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 526314: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 526317: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 526319: mov ecx, ebx */
  ecx = ebx;
/* 52631b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 52631d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 526321: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 526322: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 526323: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 526324: ret  */
  esp += 4; SPILL(); return;
}

void f_526340(void) {
  LOAD_REGS();
L_526340: /* 526340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 526341: mov ebp, esp */
  ebp = esp;
/* 526343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 526345: push 0x557d58 */
  { uint32_t v = 0x557d58u; esp -= 4; W32(esp, v); }
/* 52634a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 526350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 526358: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52635b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52635c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 52635f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526360: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 526363: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 526364: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 526367: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526368: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526369: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 526370: call 0x4e4160 */
  esp -= 4; W32(esp, 0x526375u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 526375: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526378: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 52637b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52637c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52637d: call 0x4e4160 */
  esp -= 4; W32(esp, 0x526382u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 526382: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526385: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 526388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526389: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52638a: call 0x4e4165 */
  esp -= 4; W32(esp, 0x52638fu); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 52638f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526392: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 526395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526397: call 0x4e4160 */
  esp -= 4; W32(esp, 0x52639cu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 52639c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52639f: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 5263a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5263a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5263a4: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5263a9u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5263a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5263ac: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 5263af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5263b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5263b1: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5263b6u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5263b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5263b9: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 5263bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5263bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5263be: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5263c3u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5263c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5263c6: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 5263c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5263ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5263cb: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5263d0u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5263d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5263d3: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 5263d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5263d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5263d8: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5263ddu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5263dd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 5263df: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5263e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5263e8: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5263eb: jl 0x52646c */
  if ((sf != of)) goto L_52646c;
L_5263ed: /* 5263ed: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 5263f0: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 5263f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5263f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5263f5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5263f8: call 0x4e3896 */
  esp -= 4; W32(esp, 0x5263fdu); SPILL(); f_4e3896(); if (g_unwind) return; RELOAD();
/* 5263fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526400: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 526403: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526405: call 0x4e4160 */
  esp -= 4; W32(esp, 0x52640au); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 52640a: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 52640d: xor edi, edi */
  edi = 0;
/* 52640f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526412: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526414: je 0x526450 */
  if (zf) goto L_526450;
L_526416: /* 526416: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 526419: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 52641b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 52641e: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 526421: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 526424: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 526427: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52642cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52642c: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 52642f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526430: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 526433: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 526437: call 0x4e31ac */
  esp -= 4; W32(esp, 0x52643cu); SPILL(); f_4e31ac(); if (g_unwind) return; RELOAD();
/* 52643c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 52643f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 526443: call 0x4e3bd9 */
  esp -= 4; W32(esp, 0x526448u); SPILL(); f_4e3bd9(); if (g_unwind) return; RELOAD();
/* 526448: jmp 0x526450 */
  goto L_526450;
L_526450: /* 526450: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 526453: jge 0x526536 */
  if ((sf == of)) goto L_526536;
L_526459: /* 526459: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 52645c: lea edx, [ecx + edi*8] */
  edx = (uint32_t)(ecx + edi*8);
/* 52645f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526461: call 0x4e30fd */
  esp -= 4; W32(esp, 0x526466u); SPILL(); f_4e30fd(); if (g_unwind) return; RELOAD();
/* 526466: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526469: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52646a: jmp 0x526450 */
  goto L_526450;
L_52646c: /* 52646c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52646f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526471: call 0x4e4160 */
  esp -= 4; W32(esp, 0x526476u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 526476: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526479: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 52647c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52647d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52647e: call 0x4e4160 */
  esp -= 4; W32(esp, 0x526483u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 526483: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 526485: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526488: mov ecx, ebx */
  ecx = ebx;
/* 52648a: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x52648du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52648d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 526490: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 526493: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 526495: je 0x5264b9 */
  if (zf) goto L_5264b9;
L_526497: /* 526497: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52649a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 52649c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52649d: mov ecx, ebx */
  ecx = ebx;
/* 52649f: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x5264a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5264a2: xor edi, edi */
  edi = 0;
L_5264a4: /* 5264a4: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5264a7: jge 0x5264b9 */
  if ((sf == of)) goto L_5264b9;
L_5264a9: /* 5264a9: lea edx, [esi + 0x24] */
  edx = (uint32_t)(esi + 0x24u);
/* 5264ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5264ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5264ae: call 0x4e3896 */
  esp -= 4; W32(esp, 0x5264b3u); SPILL(); f_4e3896(); if (g_unwind) return; RELOAD();
/* 5264b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5264b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5264b7: jmp 0x5264a4 */
  goto L_5264a4;
L_5264b9: /* 5264b9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5264bc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5264be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5264bf: mov ecx, ebx */
  ecx = ebx;
/* 5264c1: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x5264c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5264c4: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 5264c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5264c9: je 0x526536 */
  if (zf) goto L_526536;
L_5264cb: /* 5264cb: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 5264ce: xor eax, eax */
  eax = 0;
L_5264d0: /* 5264d0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5264d3: jge 0x5264d8 */
  if ((sf == of)) goto L_5264d8;
L_5264d5: /* 5264d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5264d6: jmp 0x5264d0 */
  goto L_5264d0;
L_5264d8: /* 5264d8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5264da: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 5264e1: mov dword ptr [ecx + 8], 1 */
  W32((uint32_t)(ecx + 0x8u), 0x1u);
/* 5264e8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5264edu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5264ed: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 5264f0: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 5264f3: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* 5264f6: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 5264f9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5264fb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 5264fe: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 526501: jle 0x526522 */
  if ((zf || sf != of)) goto L_526522;
L_526503: /* 526503: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 526506: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 526507: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52650a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52650c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52650f: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 526513: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 526515: mov ecx, edi */
  ecx = edi;
/* 526517: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 52651a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52651fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52651f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_526522: /* 526522: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 526524: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 526527: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 526529: je 0x526536 */
  if (zf) goto L_526536;
L_52652b: /* 52652b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 52652e: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 526531: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 526533: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_526536: /* 526536: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 526539: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52653a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52653b: mov eax, ebx */
  eax = ebx;
/* 52653d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 526544: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 526545: mov esp, ebp */
  esp = ebp;
/* 526547: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 526548: ret  */
  esp += 4; SPILL(); return;
}

void f_52644a(void) {
  LOAD_REGS();
L_52644a: /* 52644a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_526450: /* 526450: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 526453: jge 0x526536 */
  if ((sf == of)) goto L_526536;
L_526459: /* 526459: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 52645c: lea edx, [ecx + edi*8] */
  edx = (uint32_t)(ecx + edi*8);
/* 52645f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526461: call 0x4e30fd */
  esp -= 4; W32(esp, 0x526466u); SPILL(); f_4e30fd(); if (g_unwind) return; RELOAD();
/* 526466: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526469: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52646a: jmp 0x526450 */
  goto L_526450;
L_526536: /* 526536: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 526539: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52653a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52653b: mov eax, ebx */
  eax = ebx;
/* 52653d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 526544: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 526545: mov esp, ebp */
  esp = ebp;
/* 526547: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 526548: ret  */
  esp += 4; SPILL(); return;
}

void f_526549(void) {
  LOAD_REGS();
L_526549: /* 526549: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 52654c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 526551: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 526554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526555: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 526558: call 0x554df6 */
  esp -= 4; W32(esp, 0x52655du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52655d(); return;
}

void f_52655d(void) {
  LOAD_REGS();
L_52655d: /* 52655d: push 0x56c814 */
  { uint32_t v = 0x56c814u; esp -= 4; W32(esp, v); }
/* 526562: push 0x5a6c78 */
  { uint32_t v = 0x5a6c78u; esp -= 4; W32(esp, v); }
/* 526567: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52656cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52656c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52656f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 526571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 526573: call 0x554df6 */
  esp -= 4; W32(esp, 0x526578u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_526578: guest_badaddr(0x526578); return;
}

void f_526610(void) {
  LOAD_REGS();
L_526610: /* 526610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 526612: push 0x557db5 */
  { uint32_t v = 0x557db5u; esp -= 4; W32(esp, v); }
/* 526617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52661d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52661e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 526625: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 526628: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526629: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52662a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52662b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 52662f: call 0x4e245a */
  esp -= 4; W32(esp, 0x526634u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 526634: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 526638: mov dword ptr [eax], 0x56a990 */
  W32((uint32_t)(eax), 0x56a990u);
/* 52663e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 526642: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 526646: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 526649: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52664d: xor esi, esi */
  esi = 0;
/* 52664f: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 526652: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 526656: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 52665a: mov dword ptr [eax + 0x34], esi */
  W32((uint32_t)(eax + 0x34u), esi);
/* 52665d: mov dword ptr [eax + 0x38], esi */
  W32((uint32_t)(eax + 0x38u), esi);
/* 526660: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* 526663: mov ecx, 0x40 */
  ecx = 0x40u;
/* 526668: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 52666c: xor eax, eax */
  eax = 0;
/* 52666e: mov ebx, ecx */
  ebx = ecx;
/* 526670: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 526673: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 526676: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 526678: mov ecx, ebx */
  ecx = ebx;
/* 52667a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 52667c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 526680: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 526683: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 526685: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 526688: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 52668b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52668f: add eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 526692: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 526694: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 526697: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 52669a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52669e: add eax, 0x84 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5266a3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 5266a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 5266a8: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 5266ab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5266af: mov dword ptr [eax + 0x90], 0x1e240 */
  W32((uint32_t)(eax + 0x90u), 0x1e240u);
/* 5266b9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 5266bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5266be: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 5266c2: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5266c8: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 5266cd: call 0x4e13de */
  esp -= 4; W32(esp, 0x5266d2u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 5266d2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 5266d6: mov dword ptr [edx + 0xa0], esi */
  W32((uint32_t)(edx + 0xa0u), esi);
/* 5266dc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5266e0: cmp dword ptr [eax + 0x28], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5266e3: mov byte ptr [esp + 0x1c], 5 */
  W8((uint32_t)(esp + 0x1cu), 0x5u);
/* 5266e8: jne 0x526705 */
  if (!zf) goto L_526705;
L_5266ea: /* 5266ea: push 0xa1 */
  { uint32_t v = 0xa1u; esp -= 4; W32(esp, v); }
/* 5266ef: push 0x5a6c80 */
  { uint32_t v = 0x5a6c80u; esp -= 4; W32(esp, v); }
/* 5266f4: push 0x5a6c90 */
  { uint32_t v = 0x5a6c90u; esp -= 4; W32(esp, v); }
/* 5266f9: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5266feu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5266fe: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 526702: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_526705: /* 526705: cmp dword ptr [esp + 0x28], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526709: jne 0x526726 */
  if (!zf) goto L_526726;
L_52670b: /* 52670b: push 0xa2 */
  { uint32_t v = 0xa2u; esp -= 4; W32(esp, v); }
/* 526710: push 0x5a6c9c */
  { uint32_t v = 0x5a6c9cu; esp -= 4; W32(esp, v); }
/* 526715: push 0x5a6cac */
  { uint32_t v = 0x5a6cacu; esp -= 4; W32(esp, v); }
/* 52671a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x52671fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 52671f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 526723: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_526726: /* 526726: cmp dword ptr [0x5b211c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b211cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52672c: je 0x52673c */
  if (zf) goto L_52673c;
L_52672e: /* 52672e: or dword ptr [eax + 0xa0], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xa0u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xa0u), r);
  }
/* 526738: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_52673c: /* 52673c: cmp dword ptr [0x5b2128], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b2128u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526742: je 0x526752 */
  if (zf) goto L_526752;
L_526744: /* 526744: or dword ptr [eax + 0xa0], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xa0u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xa0u), r);
  }
/* 52674e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_526752: /* 526752: mov ecx, dword ptr [0x5b212c] */
  ecx = R32((uint32_t)(0x5b212cu));
/* 526758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 526759: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52675b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52675c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52675d: je 0x52676d */
  if (zf) goto L_52676d;
L_52675f: /* 52675f: or dword ptr [eax + 0xa0], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xa0u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xa0u), r);
  }
/* 526769: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
L_52676d: /* 52676d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 526771: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 526778: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52677b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5267e0(void) {
  LOAD_REGS();
L_5267e0: /* 5267e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5267e1: mov ebp, esp */
  ebp = esp;
/* 5267e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5267e5: push 0x557e77 */
  { uint32_t v = 0x557e77u; esp -= 4; W32(esp, v); }
/* 5267ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5267f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5267f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5267f8: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5267fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5267fc: xor ebx, ebx */
  ebx = 0;
/* 5267fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5267ff: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 526802: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 526803: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 526806: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 526809: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 526810: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 526813: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 526816: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 526819: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52681c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52681f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 526821: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 526825: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 526828: mov edi, eax */
  edi = eax;
/* 52682a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_526830: /* 526830: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526832: je 0x5269eb */
  if (zf) goto L_5269eb;
L_526838: /* 526838: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52683a: je 0x526919 */
  if (zf) goto L_526919;
L_526840: /* 526840: push 0x5f77cc */
  { uint32_t v = 0x5f77ccu; esp -= 4; W32(esp, v); }
/* 526845: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 526848: call 0x4e13de */
  esp -= 4; W32(esp, 0x52684du); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 52684d: push 0x5a6cc0 */
  { uint32_t v = 0x5a6cc0u; esp -= 4; W32(esp, v); }
/* 526852: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 526855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526856: mov ecx, eax */
  ecx = eax;
/* 526858: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 52685c: call 0x4e2149 */
  esp -= 4; W32(esp, 0x526861u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 526861: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 526864: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526865: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 526868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526869: mov ecx, eax */
  ecx = eax;
/* 52686b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 52686f: call 0x4e4282 */
  esp -= 4; W32(esp, 0x526874u); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 526874: mov esi, eax */
  esi = eax;
/* 526876: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 526879: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52687b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 52687f: je 0x5268b9 */
  if (zf) goto L_5268b9;
L_526881: /* 526881: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 526884: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526886: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 526889: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 52688c: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 52688f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526894u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526894: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 526897: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526899: je 0x5268b9 */
  if (zf) goto L_5268b9;
L_52689b: /* 52689b: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52689e: je 0x5268a4 */
  if (zf) goto L_5268a4;
L_5268a0: /* 5268a0: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 5268a2: jmp 0x5268a9 */
  goto L_5268a9;
L_5268a4: /* 5268a4: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_5268a9: /* 5268a9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5268ac: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5268ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5268af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5268b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5268b1: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5268b6u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5268b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5268b9: /* 5268b9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5268bb: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5268be: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5268c2: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5268c5: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5268c8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5268cdu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5268cd: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5268d0: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5268d4: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5268d9u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5268d9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5268db: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 5268de: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 5268e2: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 5268e5: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 5268e8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5268edu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5268ed: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 5268f0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5268f4: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5268f9u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5268f9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5268fb: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 5268fe: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 526902: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 526905: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 526908: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52690du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52690d: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 526910: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 526914: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526919u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_526919: /* 526919: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52691c: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 52691f: mov eax, dword ptr [edx + 0x78] */
  eax = R32((uint32_t)(edx + 0x78u));
/* 526922: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 526928: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 52692a: mov ecx, dword ptr [eax - 0x10] */
  ecx = R32((uint32_t)(eax + 0xfffffff0u));
/* 52692d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 526930: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 526933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526934: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 526937: call 0x4e13de */
  esp -= 4; W32(esp, 0x52693cu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 52693c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 52693f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526940: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 526943: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526944: mov ecx, eax */
  ecx = eax;
/* 526946: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 52694a: call 0x4e4282 */
  esp -= 4; W32(esp, 0x52694fu); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 52694f: mov esi, eax */
  esi = eax;
/* 526951: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 526954: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526956: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 52695a: je 0x526995 */
  if (zf) goto L_526995;
L_52695c: /* 52695c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 52695f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526961: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 526964: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 526967: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 52696a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52696fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52696f: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 526972: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526974: je 0x526995 */
  if (zf) goto L_526995;
L_526976: /* 526976: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526979: je 0x52697f */
  if (zf) goto L_52697f;
L_52697b: /* 52697b: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 52697d: jmp 0x526984 */
  goto L_526984;
L_52697f: /* 52697f: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_526984: /* 526984: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 526987: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 52698a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52698b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52698c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52698d: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x526992u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 526992: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_526995: /* 526995: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526997: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 52699a: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 52699e: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5269a1: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 5269a4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5269a9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5269a9: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 5269ac: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 5269b0: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5269b5u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5269b5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5269b7: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 5269ba: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 5269be: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 5269c1: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5269c4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5269c9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5269c9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 5269cc: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5269d0: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5269d5u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5269d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5269d8: mov ecx, dword ptr [eax + 0x78] */
  ecx = R32((uint32_t)(eax + 0x78u));
/* 5269db: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5269de: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5269e0: mov edi, dword ptr [ecx - 0x14] */
  edi = R32((uint32_t)(ecx + 0xffffffecu));
/* 5269e3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5269e6: jmp 0x526830 */
  goto L_526830;
L_5269eb: /* 5269eb: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5269ee: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 5269f1: mov eax, dword ptr [edx + 0x78] */
  eax = R32((uint32_t)(edx + 0x78u));
/* 5269f4: mov ecx, dword ptr [eax + ecx + 4] */
  ecx = R32((uint32_t)(eax + ecx + 0x4u));
/* 5269f8: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5269fe: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 526a01: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 526a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526a05: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 526a08: call 0x4e13de */
  esp -= 4; W32(esp, 0x526a0du); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 526a0d: push 0x5a6cc4 */
  { uint32_t v = 0x5a6cc4u; esp -= 4; W32(esp, v); }
/* 526a12: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 526a15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526a16: mov ecx, eax */
  ecx = eax;
/* 526a18: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 526a1c: call 0x4e2149 */
  esp -= 4; W32(esp, 0x526a21u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 526a21: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 526a24: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 526a27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526a28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526a29: mov ecx, eax */
  ecx = eax;
/* 526a2b: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 526a2f: call 0x4e4282 */
  esp -= 4; W32(esp, 0x526a34u); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 526a34: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 526a38: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526a3a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 526a3d: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 526a41: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 526a44: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 526a47: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526a4cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526a4c: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 526a4f: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 526a53: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526a58u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526a58: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526a5a: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 526a5d: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 526a61: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 526a64: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 526a67: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526a6cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526a6c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 526a6f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 526a73: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526a78u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526a78: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526a7a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 526a7d: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 526a81: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 526a84: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 526a87: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526a8cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526a8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 526a8f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 526a93: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526a98u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526a98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 526a9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 526a9c: mov eax, esi */
  eax = esi;
/* 526a9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 526a9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 526aa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 526aa7: mov esp, ebp */
  esp = ebp;
/* 526aa9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 526aaa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_526aad(void) {
  LOAD_REGS();
L_526aad: /* 526aad: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 526ab0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 526ab5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 526ab8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526ab9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 526abc: call 0x554df6 */
  esp -= 4; W32(esp, 0x526ac1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_526ac1(); return;
}

void f_526ac1(void) {
  LOAD_REGS();
L_526ac1: /* 526ac1: push 0x56c848 */
  { uint32_t v = 0x56c848u; esp -= 4; W32(esp, v); }
/* 526ac6: push 0x5a6cc8 */
  { uint32_t v = 0x5a6cc8u; esp -= 4; W32(esp, v); }
/* 526acb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x526ad0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 526ad0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526ad3: xor ebx, ebx */
  ebx = 0;
/* 526ad5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526ad6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526ad7: call 0x554df6 */
  esp -= 4; W32(esp, 0x526adcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_526adc: guest_badaddr(0x526adc); return;
}

void f_526ba0(void) {
  LOAD_REGS();
L_526ba0: /* 526ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 526ba1: mov ebp, esp */
  ebp = esp;
/* 526ba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 526ba5: push 0x557f67 */
  { uint32_t v = 0x557f67u; esp -= 4; W32(esp, v); }
/* 526baa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 526bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526bb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 526bb8: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 526bbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526bbc: xor ebx, ebx */
  ebx = 0;
/* 526bbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526bbf: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 526bc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 526bc3: mov edx, ecx */
  edx = ecx;
/* 526bc5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 526bc8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 526bcb: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 526bd2: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 526bd5: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 526bd8: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 526bdb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 526bde: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 526be2: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
L_526be5: /* 526be5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526be7: je 0x526da7 */
  if (zf) goto L_526da7;
L_526bed: /* 526bed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 526bee: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526bf0: je 0x526cd2 */
  if (zf) goto L_526cd2;
L_526bf6: /* 526bf6: push 0x5f77d0 */
  { uint32_t v = 0x5f77d0u; esp -= 4; W32(esp, v); }
/* 526bfb: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 526bfe: call 0x4e13de */
  esp -= 4; W32(esp, 0x526c03u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 526c03: push 0x5a6cd0 */
  { uint32_t v = 0x5a6cd0u; esp -= 4; W32(esp, v); }
/* 526c08: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 526c0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526c0c: mov ecx, eax */
  ecx = eax;
/* 526c0e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 526c12: call 0x4e2149 */
  esp -= 4; W32(esp, 0x526c17u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 526c17: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 526c1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526c1b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 526c1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526c1f: mov ecx, eax */
  ecx = eax;
/* 526c21: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 526c25: call 0x4e4282 */
  esp -= 4; W32(esp, 0x526c2au); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 526c2a: mov esi, eax */
  esi = eax;
/* 526c2c: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 526c2f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526c31: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 526c35: je 0x526c6f */
  if (zf) goto L_526c6f;
L_526c37: /* 526c37: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 526c3a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526c3c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 526c3f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 526c42: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 526c45: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526c4au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526c4a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 526c4d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526c4f: je 0x526c6f */
  if (zf) goto L_526c6f;
L_526c51: /* 526c51: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526c54: je 0x526c5a */
  if (zf) goto L_526c5a;
L_526c56: /* 526c56: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 526c58: jmp 0x526c5f */
  goto L_526c5f;
L_526c5a: /* 526c5a: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_526c5f: /* 526c5f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 526c62: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 526c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 526c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526c67: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x526c6cu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 526c6c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_526c6f: /* 526c6f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526c71: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 526c74: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 526c78: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 526c7b: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 526c7e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526c83u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526c83: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 526c86: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 526c8a: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526c8fu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526c8f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526c91: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 526c94: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 526c98: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 526c9b: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 526c9e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526ca3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526ca3: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 526ca6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 526caa: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526cafu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526caf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526cb1: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 526cb4: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 526cb8: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 526cbb: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 526cbe: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526cc3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526cc3: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 526cc6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 526cca: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526ccfu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526ccf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_526cd2: /* 526cd2: mov edx, dword ptr [edx + 0x84] */
  edx = R32((uint32_t)(edx + 0x84u));
/* 526cd8: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 526cde: lea edi, [edi + edi*8] */
  edi = (uint32_t)(edi + edi*8);
/* 526ce1: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 526ce4: mov eax, dword ptr [edi + edx - 0x18] */
  eax = R32((uint32_t)(edi + edx + 0xffffffe8u));
/* 526ce8: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 526ceb: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 526cee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526cef: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 526cf2: call 0x4e13de */
  esp -= 4; W32(esp, 0x526cf7u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 526cf7: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 526cfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526cfb: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 526cfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526cff: mov ecx, eax */
  ecx = eax;
/* 526d01: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 526d05: call 0x4e4282 */
  esp -= 4; W32(esp, 0x526d0au); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 526d0a: mov esi, eax */
  esi = eax;
/* 526d0c: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 526d0f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526d11: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 526d15: je 0x526d50 */
  if (zf) goto L_526d50;
L_526d17: /* 526d17: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 526d1a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526d1c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 526d1f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 526d22: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 526d25: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526d2au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526d2a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 526d2d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526d2f: je 0x526d50 */
  if (zf) goto L_526d50;
L_526d31: /* 526d31: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526d34: je 0x526d3a */
  if (zf) goto L_526d3a;
L_526d36: /* 526d36: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 526d38: jmp 0x526d3f */
  goto L_526d3f;
L_526d3a: /* 526d3a: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_526d3f: /* 526d3f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 526d42: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 526d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526d46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526d47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526d48: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x526d4du); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 526d4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_526d50: /* 526d50: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526d52: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 526d55: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 526d59: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 526d5c: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 526d5f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526d64u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526d64: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 526d67: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 526d6b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526d70u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526d70: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526d72: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 526d75: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 526d79: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 526d7c: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 526d7f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526d84u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526d84: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 526d87: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 526d8b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526d90u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526d90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 526d93: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 526d99: mov edi, dword ptr [edi + ecx - 0x1c] */
  edi = R32((uint32_t)(edi + ecx + 0xffffffe4u));
/* 526d9d: mov edx, eax */
  edx = eax;
/* 526d9f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 526da2: jmp 0x526be5 */
  goto L_526be5;
L_526da7: /* 526da7: mov ecx, dword ptr [edx + 0x84] */
  ecx = R32((uint32_t)(edx + 0x84u));
/* 526dad: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 526db0: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 526db3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 526db5: jle 0x526dc0 */
  if ((zf || sf != of)) goto L_526dc0;
L_526db7: /* 526db7: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 526dba: lea ecx, [ecx + eax*4 - 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0xffffffe8u);
/* 526dbe: jmp 0x526dd9 */
  goto L_526dd9;
L_526dc0: /* 526dc0: jge 0x526dcf */
  if ((sf == of)) goto L_526dcf;
L_526dc2: /* 526dc2: mov ecx, dword ptr [edx + 0x78] */
  ecx = R32((uint32_t)(edx + 0x78u));
/* 526dc5: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 526dc8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 526dca: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 526dcd: jmp 0x526dd9 */
  goto L_526dd9;
L_526dcf: /* 526dcf: mov dword ptr [ebp + 0xc], 0x2a5 */
  W32((uint32_t)(ebp + 0xcu), 0x2a5u);
/* 526dd6: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
L_526dd9: /* 526dd9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 526ddc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 526dde: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 526de0: jne 0x526dec */
  if (!zf) goto L_526dec;
L_526de2: /* 526de2: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 526de5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526de6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526de7: call 0x4e2cde */
  esp -= 4; W32(esp, 0x526decu); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
L_526dec: /* 526dec: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 526df2: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 526df5: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 526df8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526df9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 526dfc: mov esi, eax */
  esi = eax;
/* 526dfe: call 0x4e13de */
  esp -= 4; W32(esp, 0x526e03u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 526e03: push 0x5a6cd4 */
  { uint32_t v = 0x5a6cd4u; esp -= 4; W32(esp, v); }
/* 526e08: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 526e0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526e0c: mov ecx, eax */
  ecx = eax;
/* 526e0e: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 526e12: call 0x4e2149 */
  esp -= 4; W32(esp, 0x526e17u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 526e17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526e18: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 526e1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526e1c: mov ecx, eax */
  ecx = eax;
/* 526e1e: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 526e22: call 0x4e2149 */
  esp -= 4; W32(esp, 0x526e27u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 526e27: push 0x5a6cd8 */
  { uint32_t v = 0x5a6cd8u; esp -= 4; W32(esp, v); }
/* 526e2c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 526e2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526e30: mov ecx, eax */
  ecx = eax;
/* 526e32: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 526e36: call 0x4e2149 */
  esp -= 4; W32(esp, 0x526e3bu); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 526e3b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 526e3e: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 526e41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 526e42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 526e43: mov ecx, eax */
  ecx = eax;
/* 526e45: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 526e49: call 0x4e4282 */
  esp -= 4; W32(esp, 0x526e4eu); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 526e4e: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 526e52: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526e54: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 526e57: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 526e5b: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 526e5e: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 526e61: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526e66u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526e66: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 526e69: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 526e6d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526e72u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526e72: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526e74: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 526e77: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 526e7b: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 526e7e: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 526e81: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526e86u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526e86: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 526e89: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 526e8d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526e92u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526e92: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526e94: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 526e97: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 526e9b: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 526e9e: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 526ea1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526ea6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526ea6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 526ea9: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 526ead: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526eb2u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526eb2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526eb4: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 526eb7: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 526ebb: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 526ebe: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 526ec1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526ec6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526ec6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 526ec9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 526ecd: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526ed2u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526ed2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 526ed4: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 526ed7: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 526edb: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 526ede: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 526ee1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x526ee6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 526ee6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 526ee9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 526eed: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x526ef2u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 526ef2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 526ef5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 526ef6: mov eax, esi */
  eax = esi;
/* 526ef8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 526ef9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 526f00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 526f01: mov esp, ebp */
  esp = ebp;
/* 526f03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 526f04: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_526f07(void) {
  LOAD_REGS();
L_526f07: /* 526f07: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 526f0a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 526f0f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 526f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 526f13: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 526f16: call 0x554df6 */
  esp -= 4; W32(esp, 0x526f1bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_526f1b(); return;
}

void f_526f1b(void) {
  LOAD_REGS();
L_526f1b: /* 526f1b: push 0x56c894 */
  { uint32_t v = 0x56c894u; esp -= 4; W32(esp, v); }
/* 526f20: push 0x5a6cdc */
  { uint32_t v = 0x5a6cdcu; esp -= 4; W32(esp, v); }
/* 526f25: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x526f2au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 526f2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 526f2d: xor ebx, ebx */
  ebx = 0;
/* 526f2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 526f31: call 0x554df6 */
  esp -= 4; W32(esp, 0x526f36u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_526f36: guest_badaddr(0x526f36); return;
}

void f_527030(void) {
  LOAD_REGS();
L_527030: /* 527030: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 527032: push 0x557fe7 */
  { uint32_t v = 0x557fe7u; esp -= 4; W32(esp, v); }
/* 527037: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52703d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52703e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 527045: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 527048: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527049: xor ebx, ebx */
  ebx = 0;
/* 52704b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52704c: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 527050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527051: mov edi, ecx */
  edi = ecx;
/* 527053: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 527057: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 52705b: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 52705f: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* 527067: xor esi, esi */
  esi = 0;
/* 527069: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_527070: /* 527070: movzx eax, byte ptr [edi + esi + 0xa4] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi + 0xa4u)));
/* 527078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527079: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 52707d: push 0x5a6ce4 */
  { uint32_t v = 0x5a6ce4u; esp -= 4; W32(esp, v); }
/* 527082: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527083: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x527088u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 527088: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52708b: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52708e: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 527093: je 0x527099 */
  if (zf) goto L_527099;
L_527095: /* 527095: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 527097: jmp 0x52709e */
  goto L_52709e;
L_527099: /* 527099: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_52709e: /* 52709e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52709f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 5270a3: call 0x4e180c */
  esp -= 4; W32(esp, 0x5270a8u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 5270a8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5270aa: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 5270ae: mov byte ptr [esp + 0x34], 3 */
  W8((uint32_t)(esp + 0x34u), 0x3u);
/* 5270b3: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 5270b7: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 5270bb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5270c0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5270c0: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 5270c4: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 5270c9: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5270ceu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5270ce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5270cf: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5270d2: jl 0x527070 */
  if ((sf != of)) goto L_527070;
L_5270d4: /* 5270d4: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 5270d8: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 5270dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5270dd: mov ecx, esi */
  ecx = esi;
/* 5270df: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x5270e4u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 5270e4: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* 5270ec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5270ee: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 5270f2: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
/* 5270fa: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5270fe: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 527102: call 0x4e4502 */
  esp -= 4; W32(esp, 0x527107u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 527107: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 52710b: mov byte ptr [esp + 0x30], bl */
  W8((uint32_t)(esp + 0x30u), (ebx & 0xffu));
/* 52710f: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x527114u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 527114: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 527118: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527119: mov eax, esi */
  eax = esi;
/* 52711b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52711c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52711d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527124: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527127: ret 4 */
  esp += 8; SPILL(); return;
}

void f_527170(void) {
  LOAD_REGS();
L_527170: /* 527170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 527171: mov ebp, esp */
  ebp = esp;
/* 527173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 527175: push 0x558048 */
  { uint32_t v = 0x558048u; esp -= 4; W32(esp, v); }
/* 52717a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 527180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 527188: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52718b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52718c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52718d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52718e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 527191: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 527194: mov ebx, ecx */
  ebx = ecx;
/* 527196: mov ecx, dword ptr [ebx + 0x78] */
  ecx = R32((uint32_t)(ebx + 0x78u));
/* 527199: mov eax, dword ptr [edi + ecx + 0x14] */
  eax = R32((uint32_t)(edi + ecx + 0x14u));
/* 52719d: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 52719f: xor esi, esi */
  esi = 0;
/* 5271a1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5271a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5271a6: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5271a9: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 5271ac: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 5271af: je 0x5271bb */
  if (zf) goto L_5271bb;
L_5271b1: /* 5271b1: cmp dword ptr [edi + 0x18], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5271b5: jne 0x5277d4 */
  if (!zf) goto L_5277d4;
L_5271bb: /* 5271bb: cmp dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5271bd: je 0x5277d4 */
  if (zf) goto L_5277d4;
L_5271c3: /* 5271c3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5271c6: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5271c8: je 0x5277d4 */
  if (zf) goto L_5277d4;
L_5271ce: /* 5271ce: cmp dword ptr [edi + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5271d1: je 0x5277d4 */
  if (zf) goto L_5277d4;
L_5271d7: /* 5271d7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 5271da: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5271dc: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 5271df: jne 0x527282 */
  if (!zf) goto L_527282;
L_5271e5: /* 5271e5: cmp ecx, 0x2a2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2a2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5271eb: je 0x527204 */
  if (zf) goto L_527204;
L_5271ed: /* 5271ed: push 0x1f4 */
  { uint32_t v = 0x1f4u; esp -= 4; W32(esp, v); }
/* 5271f2: push 0x5a6e2c */
  { uint32_t v = 0x5a6e2cu; esp -= 4; W32(esp, v); }
/* 5271f7: push 0x5a6e3c */
  { uint32_t v = 0x5a6e3cu; esp -= 4; W32(esp, v); }
/* 5271fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x527201u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 527201: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_527204: /* 527204: cmp dword ptr [edi], 0x14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527207: je 0x527220 */
  if (zf) goto L_527220;
L_527209: /* 527209: push 0x1f5 */
  { uint32_t v = 0x1f5u; esp -= 4; W32(esp, v); }
/* 52720e: push 0x5a6e5c */
  { uint32_t v = 0x5a6e5cu; esp -= 4; W32(esp, v); }
/* 527213: push 0x5a6e6c */
  { uint32_t v = 0x5a6e6cu; esp -= 4; W32(esp, v); }
/* 527218: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x52721du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 52721d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_527220: /* 527220: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 527223: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 527229: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 52722c: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52722f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527230: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527232: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x527237u); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 527237: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52723a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52723c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52723e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 527240: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527242: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527243: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 527247: call 0x4e43b8 */
  esp -= 4; W32(esp, 0x52724cu); SPILL(); f_4e43b8(); if (g_unwind) return; RELOAD();
/* 52724c: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52724f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527252: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 527255: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52725c: jmp 0x5272f2 */
  goto L_5272f2;
L_527282: /* 527282: jl 0x52729b */
  if ((sf != of)) goto L_52729b;
L_527284: /* 527284: push 0x202 */
  { uint32_t v = 0x202u; esp -= 4; W32(esp, v); }
/* 527289: push 0x5a6e8c */
  { uint32_t v = 0x5a6e8cu; esp -= 4; W32(esp, v); }
/* 52728e: push 0x5a6e9c */
  { uint32_t v = 0x5a6e9cu; esp -= 4; W32(esp, v); }
/* 527293: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x527298u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 527298: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52729b: /* 52729b: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 52729e: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 5272a1: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5272a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5272a4: mov ecx, ebx */
  ecx = ebx;
/* 5272a6: call 0x4e22a2 */
  esp -= 4; W32(esp, 0x5272abu); SPILL(); f_4e22a2(); if (g_unwind) return; RELOAD();
/* 5272ab: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 5272ae: mov eax, dword ptr [ebx + 0x78] */
  eax = R32((uint32_t)(ebx + 0x78u));
/* 5272b1: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 5272b4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5272b6: mov eax, dword ptr [eax - 8] */
  eax = R32((uint32_t)(eax + 0xfffffff8u));
/* 5272b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5272bb: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 5272be: je 0x5272f2 */
  if (zf) goto L_5272f2;
L_5272c0: /* 5272c0: mov eax, edi */
  eax = edi;
L_5272c2: /* 5272c2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5272c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5272c7: jge 0x5272d5 */
  if ((sf == of)) goto L_5272d5;
L_5272c9: /* 5272c9: mov eax, dword ptr [ebx + 0x78] */
  eax = R32((uint32_t)(ebx + 0x78u));
/* 5272cc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 5272cd: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 5272d0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5272d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5272d3: jmp 0x5272c2 */
  goto L_5272c2;
L_5272d5: /* 5272d5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 5272d8: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5272de: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 5272e1: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5272e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5272e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5272e7: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5272ecu); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5272ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5272ef: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_5272f2: /* 5272f2: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 5272f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_527300: /* 527300: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 527302: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 527305: imul ecx, ecx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1fu);
  ecx = (uint32_t)r;
  }
/* 527308: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 52730b: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 52730e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 527310: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527312: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 527315: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 52731a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52731c: je 0x52750a */
  if (zf) goto L_52750a;
L_527322: /* 527322: mov ecx, dword ptr [edx + eax*4 + 0xfc] */
  ecx = R32((uint32_t)(edx + eax*4 + 0xfcu));
/* 527329: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 52732c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_527330: /* 527330: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527333: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527336: je 0x52750a */
  if (zf) goto L_52750a;
L_52733c: /* 52733c: mov ecx, eax */
  ecx = eax;
/* 52733e: mov eax, dword ptr [edx + 0x84] */
  eax = R32((uint32_t)(edx + 0x84u));
/* 527344: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 527347: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52734a: mov esi, dword ptr [eax + ecx + 0xc] */
  esi = R32((uint32_t)(eax + ecx + 0xcu));
/* 52734e: lea ebx, [eax + ecx] */
  ebx = (uint32_t)(eax + ecx);
/* 527351: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 527354: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527356: jne 0x527544 */
  if (!zf) goto L_527544;
L_52735c: /* 52735c: mov esi, dword ptr [edx + 0x84] */
  esi = R32((uint32_t)(edx + 0x84u));
/* 527362: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* 527365: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 527367: jge 0x527376 */
  if ((sf == of)) goto L_527376;
L_527369: /* 527369: mov esi, dword ptr [edx + 0x78] */
  esi = R32((uint32_t)(edx + 0x78u));
/* 52736c: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 52736f: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 527371: mov esi, dword ptr [esi - 0x10] */
  esi = R32((uint32_t)(esi + 0xfffffff0u));
/* 527374: jmp 0x527386 */
  goto L_527386;
L_527376: /* 527376: jle 0x527381 */
  if ((zf || sf != of)) goto L_527381;
L_527378: /* 527378: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 52737b: mov esi, dword ptr [esi + eax*4 - 0x18] */
  esi = R32((uint32_t)(esi + eax*4 + 0xffffffe8u));
/* 52737f: jmp 0x527386 */
  goto L_527386;
L_527381: /* 527381: mov esi, 0x2a5 */
  esi = 0x2a5u;
L_527386: /* 527386: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527389: jne 0x527544 */
  if (!zf) goto L_527544;
L_52738f: /* 52738f: mov eax, dword ptr [edx + 0x84] */
  eax = R32((uint32_t)(edx + 0x84u));
/* 527395: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527397: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 527399: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52739b: jge 0x5273b7 */
  if ((sf == of)) goto L_5273b7;
L_52739d: /* 52739d: mov eax, dword ptr [edx + 0x78] */
  eax = R32((uint32_t)(edx + 0x78u));
/* 5273a0: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 5273a3: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 5273a6: mov ecx, eax */
  ecx = eax;
/* 5273a8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5273aa: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 5273ad: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 5273b0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5273b2: mov eax, dword ptr [eax - 0x10] */
  eax = R32((uint32_t)(eax + 0xfffffff0u));
/* 5273b5: jmp 0x5273c6 */
  goto L_5273c6;
L_5273b7: /* 5273b7: jle 0x5273c1 */
  if ((zf || sf != of)) goto L_5273c1;
L_5273b9: /* 5273b9: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 5273bc: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 5273bf: jmp 0x5273c6 */
  goto L_5273c6;
L_5273c1: /* 5273c1: mov eax, 0x14 */
  eax = 0x14u;
L_5273c6: /* 5273c6: cmp eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5273c8: jne 0x527544 */
  if (!zf) goto L_527544;
L_5273ce: /* 5273ce: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 5273d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5273d3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5273d6: jge 0x527409 */
  if ((sf == of)) goto L_527409;
L_5273d8: /* 5273d8: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 5273db: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 5273de: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 5273e1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5273e3: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 5273e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5273e8: je 0x527409 */
  if (zf) goto L_527409;
L_5273ea: /* 5273ea: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 5273ed: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5273f0: jne 0x5273f9 */
  if (!zf) goto L_5273f9;
L_5273f2: /* 5273f2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 5273f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5273f7: jmp 0x527403 */
  goto L_527403;
L_5273f9: /* 5273f9: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 5273fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5273fd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5273ff: je 0x527409 */
  if (zf) goto L_527409;
L_527401: /* 527401: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_527403: /* 527403: jne 0x527544 */
  if (!zf) goto L_527544;
L_527409: /* 527409: test byte ptr [ebx + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52740d: jne 0x527501 */
  if (!zf) goto L_527501;
L_527413: /* 527413: mov eax, dword ptr [esi + 0xf4] */
  eax = R32((uint32_t)(esi + 0xf4u));
/* 527419: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52741c: je 0x5274a4 */
  if (zf) goto L_5274a4;
L_527422: /* 527422: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 527425: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 527428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527429: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x52742eu); SPILL(); f_4e3e9a(); if (g_unwind) return; RELOAD();
/* 52742e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527431: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527433: je 0x527449 */
  if (zf) goto L_527449;
L_527435: /* 527435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527436: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x52743bu); SPILL(); f_4e3e9a(); if (g_unwind) return; RELOAD();
/* 52743b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 52743e: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527441: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527444: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 527447: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_527449: /* 527449: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52744c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52744d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 527450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527451: mov ecx, ebx */
  ecx = ebx;
/* 527453: call 0x4e356c */
  esp -= 4; W32(esp, 0x527458u); SPILL(); f_4e356c(); if (g_unwind) return; RELOAD();
/* 527458: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 52745b: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 527461: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 527467: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527469: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 52746d: je 0x527473 */
  if (zf) goto L_527473;
L_52746f: /* 52746f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 527471: jmp 0x527478 */
  goto L_527478;
L_527473: /* 527473: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_527478: /* 527478: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 52747b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52747d: je 0x527483 */
  if (zf) goto L_527483;
L_52747f: /* 52747f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 527481: jmp 0x527488 */
  goto L_527488;
L_527483: /* 527483: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_527488: /* 527488: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 52748e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52748f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 527492: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527493: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 527496: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52749a: push 0x5a6eb4 */
  { uint32_t v = 0x5a6eb4u; esp -= 4; W32(esp, v); }
/* 52749f: jmp 0x5277b9 */
  goto L_5277b9;
L_5274a4: /* 5274a4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5274a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5274a8: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 5274ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5274ac: mov ecx, esi */
  ecx = esi;
/* 5274ae: call 0x4e356c */
  esp -= 4; W32(esp, 0x5274b3u); SPILL(); f_4e356c(); if (g_unwind) return; RELOAD();
/* 5274b3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 5274b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5274b8: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5274bc: je 0x5274c2 */
  if (zf) goto L_5274c2;
L_5274be: /* 5274be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 5274c0: jmp 0x5274c7 */
  goto L_5274c7;
L_5274c2: /* 5274c2: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_5274c7: /* 5274c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5274c9: push 0x5a6ef4 */
  { uint32_t v = 0x5a6ef4u; esp -= 4; W32(esp, v); }
/* 5274ce: push 0x5a6f00 */
  { uint32_t v = 0x5a6f00u; esp -= 4; W32(esp, v); }
/* 5274d3: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5274d8u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 5274d8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5274db: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5274e1: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 5274e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5274e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5274e8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5274eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5274ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5274ed: call 0x4e3418 */
  esp -= 4; W32(esp, 0x5274f2u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 5274f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5274f5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5274f8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5274fc: call 0x4e1217 */
  esp -= 4; W32(esp, 0x527501u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_527501: /* 527501: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527504: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 527507: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
L_52750a: /* 52750a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 52750d: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527513: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 527516: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527519: push 0x5a6f28 */
  { uint32_t v = 0x5a6f28u; esp -= 4; W32(esp, v); }
/* 52751e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52751f: call 0x4e26df */
  esp -= 4; W32(esp, 0x527524u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 527524: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527527: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527529: jne 0x527552 */
  if (!zf) goto L_527552;
L_52752b: /* 52752b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52752d: push 0x5a6f34 */
  { uint32_t v = 0x5a6f34u; esp -= 4; W32(esp, v); }
/* 527532: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 527535: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x52753au); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 52753a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52753c: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 52753f: jmp 0x527300 */
  goto L_527300;
L_527544: /* 527544: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 527547: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52754a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 52754d: jmp 0x527330 */
  goto L_527330;
L_527552: /* 527552: cmp dword ptr [edi + 0x18], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527556: jne 0x5277d4 */
  if (!zf) goto L_5277d4;
L_52755c: /* 52755c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52755f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527561: je 0x5277d4 */
  if (zf) goto L_5277d4;
L_527567: /* 527567: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 527569: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 52756e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 527571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527573: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527577: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527579: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 52757e: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x527583u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 527583: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527588: je 0x5276a9 */
  if (zf) goto L_5276a9;
L_52758e: /* 52758e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 527591: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527597: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 52759a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52759c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52759f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5275a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5275a1: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 5275a6: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x5275abu); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 5275ab: mov esi, eax */
  esi = eax;
/* 5275ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5275b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5275b2: je 0x5276a9 */
  if (zf) goto L_5276a9;
L_5275b8: /* 5275b8: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 5275bb: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5275c1: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5275c4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5275c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5275c9: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5275cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5275cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5275ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5275cf: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x5275d4u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 5275d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5275d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5275d9: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275db: /* 5275db: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 5275de: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5275e1: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275e3: /* 5275e3: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5275e9: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275eb: /* 5275eb: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5275ee: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275f0: /* 5275f0: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 5275f3: inc dword ptr [0x69f450] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f450u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x69f450u), r);
  }
/* 5275f9: jmp 0x5276a9 */
  goto L_5276a9;
L_5275fe: /* 5275fe: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 527603: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527605: je 0x52764a */
  if (zf) goto L_52764a;
L_527607: /* 527607: mov eax, dword ptr [0x5b2120] */
  eax = R32((uint32_t)(0x5b2120u));
/* 52760c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52760e: jne 0x52764a */
  if (!zf) goto L_52764a;
L_527610: /* 527610: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 527613: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527614: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 527617: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527618: mov ecx, ebx */
  ecx = ebx;
/* 52761a: call 0x4e356c */
  esp -= 4; W32(esp, 0x52761fu); SPILL(); f_4e356c(); if (g_unwind) return; RELOAD();
/* 52761f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 527622: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527624: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 527628: je 0x52762e */
  if (zf) goto L_52762e;
L_52762a: /* 52762a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52762c: jmp 0x527633 */
  goto L_527633;
L_52762e: /* 52762e: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_527633: /* 527633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527634: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 527636: call 0x4e29a5 */
  esp -= 4; W32(esp, 0x52763bu); SPILL(); f_4e29a5(); if (g_unwind) return; RELOAD();
/* 52763b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52763e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527641: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527645: call 0x4e1217 */
  esp -= 4; W32(esp, 0x52764au); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_52764a: /* 52764a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52764d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52764e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527652: mov ecx, ebx */
  ecx = ebx;
/* 527654: call 0x4e356c */
  esp -= 4; W32(esp, 0x527659u); SPILL(); f_4e356c(); if (g_unwind) return; RELOAD();
/* 527659: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 52765c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52765e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 527662: je 0x527668 */
  if (zf) goto L_527668;
L_527664: /* 527664: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 527666: jmp 0x52766d */
  goto L_52766d;
L_527668: /* 527668: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_52766d: /* 52766d: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 527670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527671: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 527676: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 527679: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 52767f: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 527682: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527683: push 0x5a6f44 */
  { uint32_t v = 0x5a6f44u; esp -= 4; W32(esp, v); }
/* 527688: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 52768d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52768e: call 0x4e30df */
  esp -= 4; W32(esp, 0x527693u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 527693: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527696: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527699: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52769d: call 0x4e1217 */
  esp -= 4; W32(esp, 0x5276a2u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 5276a2: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_5276a9: /* 5276a9: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 5276ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276ae: jne 0x5277d4 */
  if (!zf) goto L_5277d4;
L_5276b4: /* 5276b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5276b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276b9: jne 0x5277d4 */
  if (!zf) goto L_5277d4;
L_5276bf: /* 5276bf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5276c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5276c3: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 5276c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5276c7: mov ecx, ebx */
  ecx = ebx;
/* 5276c9: call 0x4e356c */
  esp -= 4; W32(esp, 0x5276ceu); SPILL(); f_4e356c(); if (g_unwind) return; RELOAD();
/* 5276ce: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 5276d1: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 5276d7: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5276dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276df: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 5276e3: je 0x5276e9 */
  if (zf) goto L_5276e9;
L_5276e5: /* 5276e5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5276e7: jmp 0x5276ee */
  goto L_5276ee;
L_5276e9: /* 5276e9: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5276ee: /* 5276ee: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 5276f1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276f3: je 0x5276f9 */
  if (zf) goto L_5276f9;
L_5276f5: /* 5276f5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5276f7: jmp 0x5276fe */
  goto L_5276fe;
L_5276f9: /* 5276f9: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5276fe: /* 5276fe: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527705: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 527708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527709: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 52770c: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 527712: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527716: push 0x5a6f60 */
  { uint32_t v = 0x5a6f60u; esp -= 4; W32(esp, v); }
/* 52771b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52771c: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x527721u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 527721: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527724: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527727: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52772b: call 0x4e1217 */
  esp -= 4; W32(esp, 0x527730u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 527730: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 527736: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 527739: je 0x5277e7 */
  if (zf) goto L_5277e7;
L_52773f: /* 52773f: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 527742: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527743: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x527748u); SPILL(); f_4e3e9a(); if (g_unwind) return; RELOAD();
/* 527748: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52774b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52774d: je 0x527763 */
  if (zf) goto L_527763;
L_52774f: /* 52774f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527750: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x527755u); SPILL(); f_4e3e9a(); if (g_unwind) return; RELOAD();
/* 527755: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 527758: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52775b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52775e: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 527761: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_527763: /* 527763: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 527766: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527767: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 52776a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52776b: mov ecx, ebx */
  ecx = ebx;
/* 52776d: call 0x4e356c */
  esp -= 4; W32(esp, 0x527772u); SPILL(); f_4e356c(); if (g_unwind) return; RELOAD();
/* 527772: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 527775: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 52777b: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 527781: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527783: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 527787: je 0x52778d */
  if (zf) goto L_52778d;
L_527789: /* 527789: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 52778b: jmp 0x527792 */
  goto L_527792;
L_52778d: /* 52778d: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_527792: /* 527792: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 527795: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527797: je 0x52779d */
  if (zf) goto L_52779d;
L_527799: /* 527799: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52779b: jmp 0x5277a2 */
  goto L_5277a2;
L_52779d: /* 52779d: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5277a2: /* 5277a2: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5277a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5277a9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5277ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5277ad: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 5277b0: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5277b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5277b4: push 0x5a6fa0 */
  { uint32_t v = 0x5a6fa0u; esp -= 4; W32(esp, v); }
L_5277b9: /* 5277b9: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 5277bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5277c0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5277c5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5277c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5277c8: /* 5277c8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5277cb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5277cf: call 0x4e1217 */
  esp -= 4; W32(esp, 0x5277d4u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_5277d4: /* 5277d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5277d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5277d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5277d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5277e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5277e1: mov esp, ebp */
  esp = ebp;
/* 5277e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5277e4: ret 4 */
  esp += 8; SPILL(); return;
L_5277e7: /* 5277e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5277e8: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 5277eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5277ec: mov ecx, ebx */
  ecx = ebx;
/* 5277ee: call 0x4e356c */
  esp -= 4; W32(esp, 0x5277f3u); SPILL(); f_4e356c(); if (g_unwind) return; RELOAD();
/* 5277f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 5277f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5277f8: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 5277fc: je 0x527802 */
  if (zf) goto L_527802;
L_5277fe: /* 5277fe: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 527800: jmp 0x527807 */
  goto L_527807;
L_527802: /* 527802: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_527807: /* 527807: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527809: push 0x5a6fe0 */
  { uint32_t v = 0x5a6fe0u; esp -= 4; W32(esp, v); }
/* 52780e: push 0x5a6fec */
  { uint32_t v = 0x5a6fecu; esp -= 4; W32(esp, v); }
/* 527813: call 0x4e1613 */
  esp -= 4; W32(esp, 0x527818u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 527818: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 52781b: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527821: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 527824: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527828: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52782b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52782c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52782d: call 0x4e3418 */
  esp -= 4; W32(esp, 0x527832u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 527832: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527835: jmp 0x5277c8 */
  goto L_5277c8;
}

void f_527261(void) {
  LOAD_REGS();
L_527261: /* 527261: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527264: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527265: call 0x4e3418 */
  esp -= 4; W32(esp, 0x52726au); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 52726a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52726d: mov eax, 0x527273 */
  eax = 0x527273u;
/* 527272: ret  */
  esp += 4; SPILL(); return;
}

void f_527273(void) {
  LOAD_REGS();
L_527273: /* 527273: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 527276: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 527279: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527280: jmp 0x5272f2 */
  goto L_5272f2;
L_5272f2: /* 5272f2: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 5272f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_527300: /* 527300: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 527302: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 527305: imul ecx, ecx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1fu);
  ecx = (uint32_t)r;
  }
/* 527308: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 52730b: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 52730e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 527310: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527312: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 527315: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 52731a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52731c: je 0x52750a */
  if (zf) goto L_52750a;
L_527322: /* 527322: mov ecx, dword ptr [edx + eax*4 + 0xfc] */
  ecx = R32((uint32_t)(edx + eax*4 + 0xfcu));
/* 527329: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 52732c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_527330: /* 527330: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527333: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527336: je 0x52750a */
  if (zf) goto L_52750a;
L_52733c: /* 52733c: mov ecx, eax */
  ecx = eax;
/* 52733e: mov eax, dword ptr [edx + 0x84] */
  eax = R32((uint32_t)(edx + 0x84u));
/* 527344: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 527347: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52734a: mov esi, dword ptr [eax + ecx + 0xc] */
  esi = R32((uint32_t)(eax + ecx + 0xcu));
/* 52734e: lea ebx, [eax + ecx] */
  ebx = (uint32_t)(eax + ecx);
/* 527351: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 527354: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527356: jne 0x527544 */
  if (!zf) goto L_527544;
L_52735c: /* 52735c: mov esi, dword ptr [edx + 0x84] */
  esi = R32((uint32_t)(edx + 0x84u));
/* 527362: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* 527365: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 527367: jge 0x527376 */
  if ((sf == of)) goto L_527376;
L_527369: /* 527369: mov esi, dword ptr [edx + 0x78] */
  esi = R32((uint32_t)(edx + 0x78u));
/* 52736c: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 52736f: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 527371: mov esi, dword ptr [esi - 0x10] */
  esi = R32((uint32_t)(esi + 0xfffffff0u));
/* 527374: jmp 0x527386 */
  goto L_527386;
L_527376: /* 527376: jle 0x527381 */
  if ((zf || sf != of)) goto L_527381;
L_527378: /* 527378: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 52737b: mov esi, dword ptr [esi + eax*4 - 0x18] */
  esi = R32((uint32_t)(esi + eax*4 + 0xffffffe8u));
/* 52737f: jmp 0x527386 */
  goto L_527386;
L_527381: /* 527381: mov esi, 0x2a5 */
  esi = 0x2a5u;
L_527386: /* 527386: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527389: jne 0x527544 */
  if (!zf) goto L_527544;
L_52738f: /* 52738f: mov eax, dword ptr [edx + 0x84] */
  eax = R32((uint32_t)(edx + 0x84u));
/* 527395: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527397: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 527399: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52739b: jge 0x5273b7 */
  if ((sf == of)) goto L_5273b7;
L_52739d: /* 52739d: mov eax, dword ptr [edx + 0x78] */
  eax = R32((uint32_t)(edx + 0x78u));
/* 5273a0: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 5273a3: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 5273a6: mov ecx, eax */
  ecx = eax;
/* 5273a8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5273aa: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 5273ad: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 5273b0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5273b2: mov eax, dword ptr [eax - 0x10] */
  eax = R32((uint32_t)(eax + 0xfffffff0u));
/* 5273b5: jmp 0x5273c6 */
  goto L_5273c6;
L_5273b7: /* 5273b7: jle 0x5273c1 */
  if ((zf || sf != of)) goto L_5273c1;
L_5273b9: /* 5273b9: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 5273bc: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 5273bf: jmp 0x5273c6 */
  goto L_5273c6;
L_5273c1: /* 5273c1: mov eax, 0x14 */
  eax = 0x14u;
L_5273c6: /* 5273c6: cmp eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5273c8: jne 0x527544 */
  if (!zf) goto L_527544;
L_5273ce: /* 5273ce: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 5273d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5273d3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5273d6: jge 0x527409 */
  if ((sf == of)) goto L_527409;
L_5273d8: /* 5273d8: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 5273db: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 5273de: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 5273e1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5273e3: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 5273e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5273e8: je 0x527409 */
  if (zf) goto L_527409;
L_5273ea: /* 5273ea: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 5273ed: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5273f0: jne 0x5273f9 */
  if (!zf) goto L_5273f9;
L_5273f2: /* 5273f2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 5273f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5273f7: jmp 0x527403 */
  goto L_527403;
L_5273f9: /* 5273f9: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 5273fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5273fd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5273ff: je 0x527409 */
  if (zf) goto L_527409;
L_527401: /* 527401: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_527403: /* 527403: jne 0x527544 */
  if (!zf) goto L_527544;
L_527409: /* 527409: test byte ptr [ebx + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52740d: jne 0x527501 */
  if (!zf) goto L_527501;
L_527413: /* 527413: mov eax, dword ptr [esi + 0xf4] */
  eax = R32((uint32_t)(esi + 0xf4u));
/* 527419: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52741c: je 0x5274a4 */
  if (zf) goto L_5274a4;
L_527422: /* 527422: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 527425: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 527428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527429: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x52742eu); SPILL(); f_4e3e9a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 52742e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527431: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527433: je 0x527449 */
  if (zf) goto L_527449;
L_527435: /* 527435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527436: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x52743bu); SPILL(); f_4e3e9a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 52743b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 52743e: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527441: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527444: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 527447: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_527449: /* 527449: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52744c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52744d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 527450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527451: mov ecx, ebx */
  ecx = ebx;
/* 527453: call 0x4e356c */
  esp -= 4; W32(esp, 0x527458u); SPILL(); f_4e356c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527458: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 52745b: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 527461: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 527467: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527469: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 52746d: je 0x527473 */
  if (zf) goto L_527473;
L_52746f: /* 52746f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 527471: jmp 0x527478 */
  goto L_527478;
L_527473: /* 527473: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_527478: /* 527478: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 52747b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52747d: je 0x527483 */
  if (zf) goto L_527483;
L_52747f: /* 52747f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 527481: jmp 0x527488 */
  goto L_527488;
L_527483: /* 527483: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_527488: /* 527488: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 52748e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52748f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 527492: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527493: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 527496: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52749a: push 0x5a6eb4 */
  { uint32_t v = 0x5a6eb4u; esp -= 4; W32(esp, v); }
/* 52749f: jmp 0x5277b9 */
  goto L_5277b9;
L_5274a4: /* 5274a4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5274a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5274a8: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 5274ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5274ac: mov ecx, esi */
  ecx = esi;
/* 5274ae: call 0x4e356c */
  esp -= 4; W32(esp, 0x5274b3u); SPILL(); f_4e356c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5274b3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 5274b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5274b8: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5274bc: je 0x5274c2 */
  if (zf) goto L_5274c2;
L_5274be: /* 5274be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 5274c0: jmp 0x5274c7 */
  goto L_5274c7;
L_5274c2: /* 5274c2: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_5274c7: /* 5274c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5274c9: push 0x5a6ef4 */
  { uint32_t v = 0x5a6ef4u; esp -= 4; W32(esp, v); }
/* 5274ce: push 0x5a6f00 */
  { uint32_t v = 0x5a6f00u; esp -= 4; W32(esp, v); }
/* 5274d3: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5274d8u); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5274d8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5274db: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5274e1: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 5274e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5274e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5274e8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5274eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5274ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5274ed: call 0x4e3418 */
  esp -= 4; W32(esp, 0x5274f2u); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5274f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5274f5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5274f8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5274fc: call 0x4e1217 */
  esp -= 4; W32(esp, 0x527501u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
L_527501: /* 527501: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527504: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 527507: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
L_52750a: /* 52750a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 52750d: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527513: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 527516: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527519: push 0x5a6f28 */
  { uint32_t v = 0x5a6f28u; esp -= 4; W32(esp, v); }
/* 52751e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52751f: call 0x4e26df */
  esp -= 4; W32(esp, 0x527524u); SPILL(); f_4e26df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527524: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527527: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527529: jne 0x527552 */
  if (!zf) goto L_527552;
L_52752b: /* 52752b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52752d: push 0x5a6f34 */
  { uint32_t v = 0x5a6f34u; esp -= 4; W32(esp, v); }
/* 527532: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 527535: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x52753au); SPILL(); f_4e36a7(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 52753a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52753c: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 52753f: jmp 0x527300 */
  goto L_527300;
L_527544: /* 527544: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 527547: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52754a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 52754d: jmp 0x527330 */
  goto L_527330;
L_527552: /* 527552: cmp dword ptr [edi + 0x18], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527556: jne 0x5277d4 */
  if (!zf) goto L_5277d4;
L_52755c: /* 52755c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52755f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527561: je 0x5277d4 */
  if (zf) goto L_5277d4;
L_527567: /* 527567: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 527569: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 52756e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 527571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527573: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527577: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527579: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 52757e: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x527583u); SPILL(); f_4e3c65(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527583: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527588: je 0x5276a9 */
  if (zf) goto L_5276a9;
L_52758e: /* 52758e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 527591: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527597: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 52759a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52759c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52759f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5275a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5275a1: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 5275a6: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x5275abu); SPILL(); f_4e3c65(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5275ab: mov esi, eax */
  esi = eax;
/* 5275ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5275b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5275b2: je 0x5276a9 */
  if (zf) goto L_5276a9;
L_5275b8: /* 5275b8: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 5275bb: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5275c1: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5275c4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5275c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5275c9: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5275cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5275cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5275ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5275cf: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x5275d4u); SPILL(); f_4e3c65(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5275d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5275d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5275d9: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275db: /* 5275db: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 5275de: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5275e1: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275e3: /* 5275e3: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5275e9: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275eb: /* 5275eb: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5275ee: je 0x5275fe */
  if (zf) goto L_5275fe;
L_5275f0: /* 5275f0: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 5275f3: inc dword ptr [0x69f450] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f450u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x69f450u), r);
  }
/* 5275f9: jmp 0x5276a9 */
  goto L_5276a9;
L_5275fe: /* 5275fe: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 527603: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527605: je 0x52764a */
  if (zf) goto L_52764a;
L_527607: /* 527607: mov eax, dword ptr [0x5b2120] */
  eax = R32((uint32_t)(0x5b2120u));
/* 52760c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52760e: jne 0x52764a */
  if (!zf) goto L_52764a;
L_527610: /* 527610: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 527613: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527614: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 527617: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527618: mov ecx, ebx */
  ecx = ebx;
/* 52761a: call 0x4e356c */
  esp -= 4; W32(esp, 0x52761fu); SPILL(); f_4e356c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 52761f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 527622: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527624: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 527628: je 0x52762e */
  if (zf) goto L_52762e;
L_52762a: /* 52762a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52762c: jmp 0x527633 */
  goto L_527633;
L_52762e: /* 52762e: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_527633: /* 527633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527634: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 527636: call 0x4e29a5 */
  esp -= 4; W32(esp, 0x52763bu); SPILL(); f_4e29a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 52763b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52763e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527641: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527645: call 0x4e1217 */
  esp -= 4; W32(esp, 0x52764au); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
L_52764a: /* 52764a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52764d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52764e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527652: mov ecx, ebx */
  ecx = ebx;
/* 527654: call 0x4e356c */
  esp -= 4; W32(esp, 0x527659u); SPILL(); f_4e356c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527659: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 52765c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52765e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 527662: je 0x527668 */
  if (zf) goto L_527668;
L_527664: /* 527664: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 527666: jmp 0x52766d */
  goto L_52766d;
L_527668: /* 527668: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_52766d: /* 52766d: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 527670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527671: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 527676: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 527679: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 52767f: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 527682: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527683: push 0x5a6f44 */
  { uint32_t v = 0x5a6f44u; esp -= 4; W32(esp, v); }
/* 527688: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 52768d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52768e: call 0x4e30df */
  esp -= 4; W32(esp, 0x527693u); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527693: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527696: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527699: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52769d: call 0x4e1217 */
  esp -= 4; W32(esp, 0x5276a2u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5276a2: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_5276a9: /* 5276a9: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 5276ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276ae: jne 0x5277d4 */
  if (!zf) goto L_5277d4;
L_5276b4: /* 5276b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5276b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276b9: jne 0x5277d4 */
  if (!zf) goto L_5277d4;
L_5276bf: /* 5276bf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5276c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5276c3: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 5276c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5276c7: mov ecx, ebx */
  ecx = ebx;
/* 5276c9: call 0x4e356c */
  esp -= 4; W32(esp, 0x5276ceu); SPILL(); f_4e356c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5276ce: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 5276d1: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 5276d7: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5276dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276df: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 5276e3: je 0x5276e9 */
  if (zf) goto L_5276e9;
L_5276e5: /* 5276e5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5276e7: jmp 0x5276ee */
  goto L_5276ee;
L_5276e9: /* 5276e9: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5276ee: /* 5276ee: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 5276f1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5276f3: je 0x5276f9 */
  if (zf) goto L_5276f9;
L_5276f5: /* 5276f5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5276f7: jmp 0x5276fe */
  goto L_5276fe;
L_5276f9: /* 5276f9: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5276fe: /* 5276fe: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527705: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 527708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527709: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 52770c: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 527712: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 527715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527716: push 0x5a6f60 */
  { uint32_t v = 0x5a6f60u; esp -= 4; W32(esp, v); }
/* 52771b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52771c: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x527721u); SPILL(); f_4e2d4c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527721: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527724: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 527727: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52772b: call 0x4e1217 */
  esp -= 4; W32(esp, 0x527730u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527730: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 527736: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 527739: je 0x5277e7 */
  if (zf) goto L_5277e7;
L_52773f: /* 52773f: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 527742: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527743: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x527748u); SPILL(); f_4e3e9a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527748: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52774b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52774d: je 0x527763 */
  if (zf) goto L_527763;
L_52774f: /* 52774f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527750: call 0x4e3e9a */
  esp -= 4; W32(esp, 0x527755u); SPILL(); f_4e3e9a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527755: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 527758: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52775b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52775e: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 527761: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_527763: /* 527763: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 527766: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527767: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 52776a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52776b: mov ecx, ebx */
  ecx = ebx;
/* 52776d: call 0x4e356c */
  esp -= 4; W32(esp, 0x527772u); SPILL(); f_4e356c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527772: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 527775: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 52777b: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 527781: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527783: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 527787: je 0x52778d */
  if (zf) goto L_52778d;
L_527789: /* 527789: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 52778b: jmp 0x527792 */
  goto L_527792;
L_52778d: /* 52778d: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_527792: /* 527792: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 527795: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527797: je 0x52779d */
  if (zf) goto L_52779d;
L_527799: /* 527799: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52779b: jmp 0x5277a2 */
  goto L_5277a2;
L_52779d: /* 52779d: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5277a2: /* 5277a2: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5277a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5277a9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 5277ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5277ad: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 5277b0: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5277b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5277b4: push 0x5a6fa0 */
  { uint32_t v = 0x5a6fa0u; esp -= 4; W32(esp, v); }
L_5277b9: /* 5277b9: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 5277bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5277c0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5277c5u); SPILL(); f_4e2d4c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5277c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5277c8: /* 5277c8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5277cb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5277cf: call 0x4e1217 */
  esp -= 4; W32(esp, 0x5277d4u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
L_5277d4: /* 5277d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5277d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5277d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5277d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5277e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5277e1: mov esp, ebp */
  esp = ebp;
/* 5277e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5277e4: ret 4 */
  esp += 8; SPILL(); return;
L_5277e7: /* 5277e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5277e8: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 5277eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5277ec: mov ecx, ebx */
  ecx = ebx;
/* 5277ee: call 0x4e356c */
  esp -= 4; W32(esp, 0x5277f3u); SPILL(); f_4e356c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 5277f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 5277f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5277f8: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 5277fc: je 0x527802 */
  if (zf) goto L_527802;
L_5277fe: /* 5277fe: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 527800: jmp 0x527807 */
  goto L_527807;
L_527802: /* 527802: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_527807: /* 527807: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527809: push 0x5a6fe0 */
  { uint32_t v = 0x5a6fe0u; esp -= 4; W32(esp, v); }
/* 52780e: push 0x5a6fec */
  { uint32_t v = 0x5a6fecu; esp -= 4; W32(esp, v); }
/* 527813: call 0x4e1613 */
  esp -= 4; W32(esp, 0x527818u); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527818: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 52781b: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527821: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 527824: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527828: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52782b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52782c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52782d: call 0x4e3418 */
  esp -= 4; W32(esp, 0x527832u); SPILL(); f_4e3418(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x527273u: guest_unwind_done(); RELOAD(); goto L_527273; } return; } RELOAD();
/* 527832: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527835: jmp 0x5277c8 */
  goto L_5277c8;
}

void f_527837(void) {
  LOAD_REGS();
L_527837: /* 527837: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 52783a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52783f: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 527842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527843: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 527846: call 0x554df6 */
  esp -= 4; W32(esp, 0x52784bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52784b(); return;
}

void f_52784b(void) {
  LOAD_REGS();
L_52784b: /* 52784b: push 0x56c8e0 */
  { uint32_t v = 0x56c8e0u; esp -= 4; W32(esp, v); }
/* 527850: push 0x5a7008 */
  { uint32_t v = 0x5a7008u; esp -= 4; W32(esp, v); }
/* 527855: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52785au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52785a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52785d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52785f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527861: call 0x554df6 */
  esp -= 4; W32(esp, 0x527866u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_527866: guest_badaddr(0x527866); return;
}

void f_527a30(void) {
  LOAD_REGS();
L_527a30: /* 527a30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 527a31: mov ebp, esp */
  ebp = esp;
/* 527a33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 527a35: push 0x558078 */
  { uint32_t v = 0x558078u; esp -= 4; W32(esp, v); }
/* 527a3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 527a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527a41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 527a48: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 527a4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 527a4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527a4f: mov ebx, ecx */
  ebx = ecx;
/* 527a51: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 527a57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527a58: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 527a5b: mov edx, dword ptr [ecx + eax*4 + 0xc] */
  edx = R32((uint32_t)(ecx + eax*4 + 0xcu));
/* 527a5f: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 527a62: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 527a67: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 527a6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527a6b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 527a6e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 527a71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527a72: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 527a75: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 527a78: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527a7f: call 0x4e13de */
  esp -= 4; W32(esp, 0x527a84u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 527a84: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 527a87: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527a89: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 527a8c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 527a90: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 527a93: jne 0x527c2d */
  if (!zf) goto L_527c2d;
L_527a99: /* 527a99: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 527a9c: test dword ptr [ebx + 0xa0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527aa2: je 0x527c2d */
  if (zf) goto L_527c2d;
L_527aa8: /* 527aa8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 527aab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527aad: jne 0x527aca */
  if (!zf) goto L_527aca;
L_527aaf: /* 527aaf: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 527ab1: je 0x527aca */
  if (zf) goto L_527aca;
L_527ab3: /* 527ab3: push 0x2fd */
  { uint32_t v = 0x2fdu; esp -= 4; W32(esp, v); }
/* 527ab8: push 0x5a7134 */
  { uint32_t v = 0x5a7134u; esp -= 4; W32(esp, v); }
/* 527abd: push 0x5a7148 */
  { uint32_t v = 0x5a7148u; esp -= 4; W32(esp, v); }
/* 527ac2: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x527ac7u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 527ac7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_527aca: /* 527aca: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 527acc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527acd: mov ecx, ebx */
  ecx = ebx;
/* 527acf: call 0x4e330f */
  esp -= 4; W32(esp, 0x527ad4u); SPILL(); f_4e330f(); if (g_unwind) return; RELOAD();
/* 527ad4: mov edi, eax */
  edi = eax;
/* 527ad6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527ad8: jne 0x527b05 */
  if (!zf) goto L_527b05;
L_527ada: /* 527ada: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527add: je 0x527b00 */
  if (zf) goto L_527b00;
L_527adf: /* 527adf: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 527ae2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527ae6: call 0x4e1217 */
  esp -= 4; W32(esp, 0x527aebu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 527aeb: xor eax, eax */
  eax = 0;
/* 527aed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527af0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527af7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527af8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527af9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527afa: mov esp, ebp */
  esp = ebp;
/* 527afc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527afd: ret 4 */
  esp += 8; SPILL(); return;
L_527b00: /* 527b00: mov edi, 0x5f0d80 */
  edi = 0x5f0d80u;
L_527b05: /* 527b05: cmp dword ptr [edi + 0x24], 0x5f0d80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x24u))); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527b0c: je 0x527b25 */
  if (zf) goto L_527b25;
L_527b0e: /* 527b0e: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 527b13: push 0x5a71a4 */
  { uint32_t v = 0x5a71a4u; esp -= 4; W32(esp, v); }
/* 527b18: push 0x5a71b4 */
  { uint32_t v = 0x5a71b4u; esp -= 4; W32(esp, v); }
/* 527b1d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x527b22u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 527b22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_527b25: /* 527b25: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 527b28: cmp eax, 0xa2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527b2d: je 0x527adf */
  if (zf) goto L_527adf;
L_527b2f: /* 527b2f: cmp eax, 0xa3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527b34: je 0x527adf */
  if (zf) goto L_527adf;
L_527b36: /* 527b36: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 527b3c: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 527b42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527b43: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x527b46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 527b46: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 527b49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527b4b: je 0x527b57 */
  if (zf) goto L_527b57;
L_527b4d: /* 527b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527b4e: mov ecx, ebx */
  ecx = ebx;
/* 527b50: call 0x4e330f */
  esp -= 4; W32(esp, 0x527b55u); SPILL(); f_4e330f(); if (g_unwind) return; RELOAD();
/* 527b55: jmp 0x527b5a */
  goto L_527b5a;
L_527b57: /* 527b57: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
L_527b5a: /* 527b5a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 527b5d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 527b5f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527b61: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 527b64: je 0x527b88 */
  if (zf) goto L_527b88;
L_527b66: /* 527b66: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 527b69: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527b6d: call 0x4e1217 */
  esp -= 4; W32(esp, 0x527b72u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 527b72: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527b75: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527b78: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527b7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527b80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527b81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527b82: mov esp, ebp */
  esp = ebp;
/* 527b84: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527b85: ret 4 */
  esp += 8; SPILL(); return;
L_527b88: /* 527b88: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 527b8e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 527b91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527b93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527b94: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 527b97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527b99: and ecx, 0x67f01a5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x67f01a5u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 527b9f: or ecx, 0x1000200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000200u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 527ba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527ba6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527ba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527ba8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527ba9: call 0x4e335a */
  esp -= 4; W32(esp, 0x527baeu); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 527bae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 527bb1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 527bb4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527bb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527bb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527bb9: mov ecx, eax */
  ecx = eax;
/* 527bbb: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 527bbd: call 0x4e1447 */
  esp -= 4; W32(esp, 0x527bc2u); SPILL(); f_4e1447(); if (g_unwind) return; RELOAD();
/* 527bc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527bc3: mov ecx, 0x69fa24 */
  ecx = 0x69fa24u;
/* 527bc8: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x527bcdu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
/* 527bcd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 527bcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527bd1: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x527bd6u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 527bd6: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 527bdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527bdd: push 0x5a71e4 */
  { uint32_t v = 0x5a71e4u; esp -= 4; W32(esp, v); }
/* 527be2: push 0x308 */
  { uint32_t v = 0x308u; esp -= 4; W32(esp, v); }
/* 527be7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527be8: call 0x4e30df */
  esp -= 4; W32(esp, 0x527bedu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 527bed: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 527bef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527bf2: push 0x5f0848 */
  { uint32_t v = 0x5f0848u; esp -= 4; W32(esp, v); }
/* 527bf7: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x527bfcu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 527bfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527bfe: je 0x527c14 */
  if (zf) goto L_527c14;
L_527c00: /* 527c00: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 527c03: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527c05: je 0x527c14 */
  if (zf) goto L_527c14;
L_527c07: /* 527c07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527c08: mov ecx, ebx */
  ecx = ebx;
/* 527c0a: call 0x4e330f */
  esp -= 4; W32(esp, 0x527c0fu); SPILL(); f_4e330f(); if (g_unwind) return; RELOAD();
/* 527c0f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 527c11: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
L_527c14: /* 527c14: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 527c16: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 527c1b: mov ecx, esi */
  ecx = esi;
/* 527c1d: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x527c22u); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 527c22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527c24: je 0x527c2d */
  if (zf) goto L_527c2d;
L_527c26: /* 527c26: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 527c28: mov ecx, esi */
  ecx = esi;
/* 527c2a: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x527c2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_527c2d: /* 527c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 527c30: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 527c32: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 527c35: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527c39: call 0x4e1217 */
  esp -= 4; W32(esp, 0x527c3eu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 527c3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527c41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527c42: mov eax, esi */
  eax = esi;
/* 527c44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527c45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527c4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527c4d: mov esp, ebp */
  esp = ebp;
/* 527c4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527c50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_527c53(void) {
  LOAD_REGS();
L_527c53: /* 527c53: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 527c56: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 527c5b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 527c5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 527c5f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 527c62: call 0x554df6 */
  esp -= 4; W32(esp, 0x527c67u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_527c67(); return;
}

void f_527c67(void) {
  LOAD_REGS();
L_527c67: /* 527c67: push 0x56c920 */
  { uint32_t v = 0x56c920u; esp -= 4; W32(esp, v); }
/* 527c6c: push 0x5a71fc */
  { uint32_t v = 0x5a71fcu; esp -= 4; W32(esp, v); }
/* 527c71: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x527c76u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 527c76: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 527c79: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 527c7c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 527c7f: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 527c85: mov ecx, dword ptr [edx + ecx*4 + 0xc] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xcu));
/* 527c89: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 527c8f: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 527c92: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 527c98: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 527c9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527c9d: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 527ca0: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x527ca3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 527ca3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527ca4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527ca5: push 0x5a7204 */
  { uint32_t v = 0x5a7204u; esp -= 4; W32(esp, v); }
/* 527caa: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x527cafu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 527caf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527cb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527cb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527cb6: call 0x554df6 */
  esp -= 4; W32(esp, 0x527cbbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_527cbb: guest_badaddr(0x527cbb); return;
}

void f_527d70(void) {
  LOAD_REGS();
L_527d70: /* 527d70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 527d71: mov ebp, esp */
  ebp = esp;
/* 527d73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 527d75: push 0x558090 */
  { uint32_t v = 0x558090u; esp -= 4; W32(esp, v); }
/* 527d7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 527d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527d81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 527d88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 527d8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527d8c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 527d8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527d90: mov esi, ebx */
  esi = ebx;
/* 527d92: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 527d95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527d96: mov edi, ecx */
  edi = ecx;
/* 527d98: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 527d9b: mov eax, dword ptr [esi + ecx + 0x10] */
  eax = R32((uint32_t)(esi + ecx + 0x10u));
/* 527d9f: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 527da1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527da3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 527da6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527dad: jne 0x527de2 */
  if (!zf) goto L_527de2;
L_527daf: /* 527daf: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 527db2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 527db4: jne 0x527dc8 */
  if (!zf) goto L_527dc8;
L_527db6: /* 527db6: call 0x4e3d50 */
  esp -= 4; W32(esp, 0x527dbbu); SPILL(); f_4e3d50(); if (g_unwind) return; RELOAD();
/* 527dbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527dbc: mov ecx, edi */
  ecx = edi;
/* 527dbe: call 0x4e22a2 */
  esp -= 4; W32(esp, 0x527dc3u); SPILL(); f_4e22a2(); if (g_unwind) return; RELOAD();
/* 527dc3: call 0x4e375b */
  esp -= 4; W32(esp, 0x527dc8u); SPILL(); f_4e375b(); if (g_unwind) return; RELOAD();
L_527dc8: /* 527dc8: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 527dcb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 527dce: je 0x527de2 */
  if (zf) goto L_527de2;
L_527dd0: /* 527dd0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 527dd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527dd4: call 0x4e11e5 */
  esp -= 4; W32(esp, 0x527dd9u); SPILL(); f_4e11e5(); if (g_unwind) return; RELOAD();
/* 527dd9: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 527ddc: inc dword ptr [0x69f450] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f450u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x69f450u), r);
  }
L_527de2: /* 527de2: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 527de5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527dea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527df1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527df2: mov esp, ebp */
  esp = ebp;
/* 527df4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527df5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_527df8(void) {
  LOAD_REGS();
L_527df8: /* 527df8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527dfb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 527e00: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 527e03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527e04: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 527e07: call 0x554df6 */
  esp -= 4; W32(esp, 0x527e0cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_527e0c(); return;
}

void f_527e0c(void) {
  LOAD_REGS();
L_527e0c: /* 527e0c: push 0x56c960 */
  { uint32_t v = 0x56c960u; esp -= 4; W32(esp, v); }
/* 527e11: push 0x5a7214 */
  { uint32_t v = 0x5a7214u; esp -= 4; W32(esp, v); }
/* 527e16: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x527e1bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 527e1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527e1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527e20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527e22: call 0x554df6 */
  esp -= 4; W32(esp, 0x527e27u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_527e27: guest_badaddr(0x527e27); return;
}

void f_527e60(void) {
  LOAD_REGS();
L_527e60: /* 527e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 527e61: mov ebp, esp */
  ebp = esp;
/* 527e63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 527e65: push 0x5580a0 */
  { uint32_t v = 0x5580a0u; esp -= 4; W32(esp, v); }
/* 527e6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 527e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527e71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 527e78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 527e7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 527e7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 527e80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527e81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527e82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527e83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 527e86: mov esi, ecx */
  esi = ecx;
/* 527e88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527e8f: jle 0x527ee6 */
  if ((zf || sf != of)) goto L_527ee6;
L_527e91: /* 527e91: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 527e94: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 527e96: jl 0x527ea0 */
  if ((sf != of)) goto L_527ea0;
L_527e98: /* 527e98: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 527e9e: jl 0x527ecb */
  if ((sf != of)) goto L_527ecb;
L_527ea0: /* 527ea0: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 527ea6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527ea8: push 0x5a721c */
  { uint32_t v = 0x5a721cu; esp -= 4; W32(esp, v); }
/* 527ead: push 0x5a7228 */
  { uint32_t v = 0x5a7228u; esp -= 4; W32(esp, v); }
/* 527eb2: call 0x4e1613 */
  esp -= 4; W32(esp, 0x527eb7u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 527eb7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527eba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527ebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527ebd: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 527ec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527ec3: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x527ec8u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 527ec8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_527ecb: /* 527ecb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527ecc: mov ecx, esi */
  ecx = esi;
/* 527ece: call 0x4e11e5 */
  esp -= 4; W32(esp, 0x527ed3u); SPILL(); f_4e11e5(); if (g_unwind) return; RELOAD();
/* 527ed3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527ed6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527edd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527ede: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527edf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527ee0: mov esp, ebp */
  esp = ebp;
/* 527ee2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527ee3: ret 4 */
  esp += 8; SPILL(); return;
L_527ee6: /* 527ee6: jge 0x527f67 */
  if ((sf == of)) goto L_527f67;
L_527ee8: /* 527ee8: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 527eeb: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 527eed: js 0x527ef4 */
  if (sf) goto L_527ef4;
L_527eef: /* 527eef: cmp edi, dword ptr [esi + 0x7c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 527ef2: jl 0x527f1d */
  if ((sf != of)) goto L_527f1d;
L_527ef4: /* 527ef4: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 527ef7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527ef9: push 0x5a7240 */
  { uint32_t v = 0x5a7240u; esp -= 4; W32(esp, v); }
/* 527efe: push 0x5a724c */
  { uint32_t v = 0x5a724cu; esp -= 4; W32(esp, v); }
/* 527f03: call 0x4e1613 */
  esp -= 4; W32(esp, 0x527f08u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 527f08: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 527f0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527f11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527f12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527f14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 527f15: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x527f1au); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 527f1a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_527f1d: /* 527f1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527f1e: mov ecx, esi */
  ecx = esi;
/* 527f20: call 0x4e300d */
  esp -= 4; W32(esp, 0x527f25u); SPILL(); f_4e300d(); if (g_unwind) return; RELOAD();
/* 527f25: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527f28: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527f2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527f30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527f31: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527f32: mov esp, ebp */
  esp = ebp;
/* 527f34: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527f35: ret 4 */
  esp += 8; SPILL(); return;
L_527f67: /* 527f67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527f6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527f6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527f6c: xor eax, eax */
  eax = 0;
/* 527f6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527f75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527f76: mov esp, ebp */
  esp = ebp;
/* 527f78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527f79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_527f38(void) {
  LOAD_REGS();
L_527f38: /* 527f38: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 527f3b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 527f40: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 527f43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527f44: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 527f47: call 0x554df6 */
  esp -= 4; W32(esp, 0x527f4cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_527f4c(); return;
}

void f_527f4c(void) {
  LOAD_REGS();
L_527f4c: /* 527f4c: push 0x56c9a0 */
  { uint32_t v = 0x56c9a0u; esp -= 4; W32(esp, v); }
/* 527f51: push 0x5a7264 */
  { uint32_t v = 0x5a7264u; esp -= 4; W32(esp, v); }
/* 527f56: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x527f5bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 527f5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 527f5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527f60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 527f62: call 0x554df6 */
  esp -= 4; W32(esp, 0x527f67u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 527f67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 527f6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 527f6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 527f6c: xor eax, eax */
  eax = 0;
/* 527f6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 527f75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 527f76: mov esp, ebp */
  esp = ebp;
/* 527f78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 527f79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_527fd0(void) {
  LOAD_REGS();
L_527fd0: /* 527fd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 527fd1: mov ebp, esp */
  ebp = esp;
/* 527fd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 527fd5: push 0x5580b0 */
  { uint32_t v = 0x5580b0u; esp -= 4; W32(esp, v); }
/* 527fda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 527fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 527fe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 527fe8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 527feb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 527fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 527fed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 527fee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 527ff1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 527ff4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 527ffb: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 527ffd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 528000: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 528003: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 528006: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 528009: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52800b: jge 0x528013 */
  if ((sf == of)) goto L_528013;
L_52800d: /* 52800d: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_528013: /* 528013: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 528016: fmul qword ptr [0x56c4f8] */
  ST0 = ST0 * (F64((uint32_t)(0x56c4f8u)));
/* 52801c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52801e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 528021: jge 0x528029 */
  if ((sf == of)) goto L_528029;
L_528023: /* 528023: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_528029: /* 528029: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52802c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 52802e: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 528031: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528033: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 528039: fadd qword ptr [0x56c4e8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4e8u)));
/* 52803f: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 528042: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x528047u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 528047: fld qword ptr [ebp - 0x20] */
  { double v = F64((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 52804a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52804b: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 528051: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 528056: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 528059: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 52805c: push 0x5a736c */
  { uint32_t v = 0x5a736cu; esp -= 4; W32(esp, v); }
/* 528061: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528062: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x528067u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 528067: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52806a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52806d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52806f: call 0x4e41a1 */
  esp -= 4; W32(esp, 0x528074u); SPILL(); f_4e41a1(); if (g_unwind) return; RELOAD();
/* 528074: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 528077: xor esi, esi */
  esi = 0;
/* 528079: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_528080: /* 528080: cmp esi, dword ptr [eax + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 528086: jge 0x5280a7 */
  if ((sf == of)) goto L_5280a7;
L_528088: /* 528088: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 52808e: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 528091: mov edi, dword ptr [edx + ecx*4 + 0x1c] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 528095: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528097: je 0x5280a4 */
  if (zf) goto L_5280a4;
L_528099: /* 528099: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52809a: mov ecx, eax */
  ecx = eax;
/* 52809c: call 0x4e25b3 */
  esp -= 4; W32(esp, 0x5280a1u); SPILL(); f_4e25b3(); if (g_unwind) return; RELOAD();
/* 5280a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_5280a4: /* 5280a4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5280a5: jmp 0x528080 */
  goto L_528080;
L_5280a7: /* 5280a7: mov edi, eax */
  edi = eax;
/* 5280a9: xor esi, esi */
  esi = 0;
/* 5280ab: jmp 0x5280b0 */
  goto L_5280b0;
L_5280b0: /* 5280b0: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5280b6: jge 0x52813d */
  if ((sf == of)) goto L_52813d;
L_5280bc: /* 5280bc: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5280c2: cmp dword ptr [ecx + esi*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5280c5: jne 0x528137 */
  if (!zf) goto L_528137;
L_5280c7: /* 5280c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5280c9: jge 0x5280e2 */
  if ((sf == of)) goto L_5280e2;
L_5280cb: /* 5280cb: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 5280d0: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5280d5: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 5280da: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5280dfu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5280df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5280e2: /* 5280e2: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5280e8: jle 0x528101 */
  if ((zf || sf != of)) goto L_528101;
L_5280ea: /* 5280ea: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5280ef: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5280f4: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5280f9: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5280feu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5280fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_528101: /* 528101: mov eax, dword ptr [0x69ff64] */
  eax = R32((uint32_t)(0x69ff64u));
/* 528106: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 528109: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52810b: jle 0x528124 */
  if ((zf || sf != of)) goto L_528124;
L_52810d: /* 52810d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 528112: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 528117: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 52811c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x528121u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 528121: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_528124: /* 528124: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 528126: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 528128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528129: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 52812e: call 0x4e438b */
  esp -= 4; W32(esp, 0x528133u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 528133: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 528136: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_528137: /* 528137: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 528138: jmp 0x5280b0 */
  goto L_5280b0;
L_52813d: /* 52813d: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 528143: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528145: je 0x528150 */
  if (zf) goto L_528150;
L_528147: /* 528147: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 528149: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52814b: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x52814du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52814d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_528150: /* 528150: mov dword ptr [eax + 0x508], 0 */
  W32((uint32_t)(eax + 0x508u), 0x0u);
/* 52815a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52815d: call 0x4e2a9a */
  esp -= 4; W32(esp, 0x528162u); SPILL(); f_4e2a9a(); if (g_unwind) return; RELOAD();
/* 528162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 528166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52816e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52816f: mov esp, ebp */
  esp = ebp;
/* 528171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528172: ret  */
  esp += 4; SPILL(); return;
}

void f_5280ad(void) {
  LOAD_REGS();
L_5280ad: /* 5280ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5280b0: /* 5280b0: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5280b6: jge 0x52813d */
  if ((sf == of)) goto L_52813d;
L_5280bc: /* 5280bc: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5280c2: cmp dword ptr [ecx + esi*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5280c5: jne 0x528137 */
  if (!zf) goto L_528137;
L_5280c7: /* 5280c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5280c9: jge 0x5280e2 */
  if ((sf == of)) goto L_5280e2;
L_5280cb: /* 5280cb: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 5280d0: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5280d5: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 5280da: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5280dfu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5280df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5280e2: /* 5280e2: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5280e8: jle 0x528101 */
  if ((zf || sf != of)) goto L_528101;
L_5280ea: /* 5280ea: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5280ef: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5280f4: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5280f9: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5280feu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5280fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_528101: /* 528101: mov eax, dword ptr [0x69ff64] */
  eax = R32((uint32_t)(0x69ff64u));
/* 528106: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 528109: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52810b: jle 0x528124 */
  if ((zf || sf != of)) goto L_528124;
L_52810d: /* 52810d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 528112: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 528117: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 52811c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x528121u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 528121: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_528124: /* 528124: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 528126: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 528128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528129: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 52812e: call 0x4e438b */
  esp -= 4; W32(esp, 0x528133u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 528133: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 528136: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_528137: /* 528137: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 528138: jmp 0x5280b0 */
  goto L_5280b0;
L_52813d: /* 52813d: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 528143: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528145: je 0x528150 */
  if (zf) goto L_528150;
L_528147: /* 528147: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 528149: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52814b: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x52814du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52814d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_528150: /* 528150: mov dword ptr [eax + 0x508], 0 */
  W32((uint32_t)(eax + 0x508u), 0x0u);
/* 52815a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52815d: call 0x4e2a9a */
  esp -= 4; W32(esp, 0x528162u); SPILL(); f_4e2a9a(); if (g_unwind) return; RELOAD();
/* 528162: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528165: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 528166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528167: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52816e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52816f: mov esp, ebp */
  esp = ebp;
/* 528171: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528172: ret  */
  esp += 4; SPILL(); return;
}

void f_528173(void) {
  LOAD_REGS();
L_528173: /* 528173: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 528176: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52817b: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 52817e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52817f: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 528182: call 0x554df6 */
  esp -= 4; W32(esp, 0x528187u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_528187(); return;
}

void f_528187(void) {
  LOAD_REGS();
L_528187: /* 528187: push 0x56c9c4 */
  { uint32_t v = 0x56c9c4u; esp -= 4; W32(esp, v); }
/* 52818c: push 0x5a7398 */
  { uint32_t v = 0x5a7398u; esp -= 4; W32(esp, v); }
/* 528191: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x528196u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 528196: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 528199: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52819c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52819e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5281a3u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5281a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5281a4: push 0x5a73a0 */
  { uint32_t v = 0x5a73a0u; esp -= 4; W32(esp, v); }
/* 5281a9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5281aeu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5281ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5281b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5281b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5281b5: call 0x554df6 */
  esp -= 4; W32(esp, 0x5281bau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5281ba: guest_badaddr(0x5281ba); return;
}

void f_528240(void) {
  LOAD_REGS();
L_528240: /* 528240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 528241: mov ebp, esp */
  ebp = esp;
/* 528243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528245: push 0x5580c0 */
  { uint32_t v = 0x5580c0u; esp -= 4; W32(esp, v); }
/* 52824a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 528250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 528258: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52825b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52825c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52825d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52825e: mov esi, ecx */
  esi = ecx;
/* 528260: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 528263: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 528266: xor edi, edi */
  edi = 0;
/* 528268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528269: lea ecx, [esi + 0x448] */
  ecx = (uint32_t)(esi + 0x448u);
/* 52826f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 528272: call 0x4e346d */
  esp -= 4; W32(esp, 0x528277u); SPILL(); f_4e346d(); if (g_unwind) return; RELOAD();
/* 528277: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52827a: je 0x5282a1 */
  if (zf) goto L_5282a1;
L_52827c: /* 52827c: cmp dword ptr [esi - 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xffffffe4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52827f: je 0x528286 */
  if (zf) goto L_528286;
L_528281: /* 528281: mov esi, dword ptr [esi - 0x20] */
  esi = R32((uint32_t)(esi + 0xffffffe0u));
/* 528284: jmp 0x52828b */
  goto L_52828b;
L_528286: /* 528286: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_52828b: /* 52828b: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 528291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528293: push 0x5a73b8 */
  { uint32_t v = 0x5a73b8u; esp -= 4; W32(esp, v); }
/* 528298: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528299: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x52829eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 52829e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5282a1: /* 5282a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5282a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5282a7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 5282aa: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 5282ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5282ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5282af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5282b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5282b7: mov esp, ebp */
  esp = ebp;
/* 5282b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5282ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5282bd(void) {
  LOAD_REGS();
L_5282bd: /* 5282bd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5282c0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5282c5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5282c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5282c9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5282cc: call 0x554df6 */
  esp -= 4; W32(esp, 0x5282d1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5282d1(); return;
}

void f_5282d1(void) {
  LOAD_REGS();
L_5282d1: /* 5282d1: push 0x56c9f8 */
  { uint32_t v = 0x56c9f8u; esp -= 4; W32(esp, v); }
/* 5282d6: push 0x5a73fc */
  { uint32_t v = 0x5a73fcu; esp -= 4; W32(esp, v); }
/* 5282db: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5282e0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5282e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5282e3: xor edi, edi */
  edi = 0;
/* 5282e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5282e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5282e7: call 0x554df6 */
  esp -= 4; W32(esp, 0x5282ecu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5282ec: guest_badaddr(0x5282ec); return;
}

void f_528320(void) {
  LOAD_REGS();
L_528320: /* 528320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528322: push 0x558102 */
  { uint32_t v = 0x558102u; esp -= 4; W32(esp, v); }
/* 528327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52832d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52832e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 528335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528336: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 52833a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52833b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52833c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52833d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52833e: mov esi, ecx */
  esi = ecx;
/* 528340: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 528344: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528346: mov ecx, esi */
  ecx = esi;
/* 528348: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 52834c: call 0x4e15cd */
  esp -= 4; W32(esp, 0x528351u); SPILL(); f_4e15cd(); if (g_unwind) return; RELOAD();
/* 528351: xor edi, edi */
  edi = 0;
/* 528353: mov eax, 1 */
  eax = 0x1u;
/* 528358: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 52835c: mov dword ptr [esi + 0xb4], 0x569110 */
  W32((uint32_t)(esi + 0xb4u), 0x569110u);
/* 528366: mov dword ptr [esi + 0xb8], 0x7e */
  W32((uint32_t)(esi + 0xb8u), 0x7eu);
/* 528370: mov dword ptr [esi + 0xbc], 0x7d0 */
  W32((uint32_t)(esi + 0xbcu), 0x7d0u);
/* 52837a: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 528380: mov dword ptr [esi + 0xc4], edi */
  W32((uint32_t)(esi + 0xc4u), edi);
/* 528386: mov dword ptr [esi + 0xc8], edi */
  W32((uint32_t)(esi + 0xc8u), edi);
/* 52838c: mov dword ptr [esi + 0xcc], edi */
  W32((uint32_t)(esi + 0xccu), edi);
/* 528392: mov dword ptr [esi + 0xd0], edi */
  W32((uint32_t)(esi + 0xd0u), edi);
/* 528398: mov dword ptr [esi + 0xd4], eax */
  W32((uint32_t)(esi + 0xd4u), eax);
/* 52839e: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 5283a4: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 5283aa: mov dword ptr [esi + 0xe0], edi */
  W32((uint32_t)(esi + 0xe0u), edi);
/* 5283b0: mov dword ptr [esi + 0xe4], edi */
  W32((uint32_t)(esi + 0xe4u), edi);
/* 5283b6: mov dword ptr [esi + 0xe8], edi */
  W32((uint32_t)(esi + 0xe8u), edi);
/* 5283bc: mov dword ptr [esi + 0xec], edi */
  W32((uint32_t)(esi + 0xecu), edi);
/* 5283c2: mov dword ptr [esi + 0xf0], 0xffffffff */
  W32((uint32_t)(esi + 0xf0u), 0xffffffffu);
/* 5283cc: lea ebx, [esi + 0xf8] */
  ebx = (uint32_t)(esi + 0xf8u);
/* 5283d2: mov dword ptr [esi], 0x56cab0 */
  W32((uint32_t)(esi), 0x56cab0u);
/* 5283d8: mov dword ptr [esi + 0xb4], 0x56ca40 */
  W32((uint32_t)(esi + 0xb4u), 0x56ca40u);
/* 5283e2: mov dword ptr [esi + 0xf4], edi */
  W32((uint32_t)(esi + 0xf4u), edi);
/* 5283e8: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 5283ea: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 5283ed: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 5283f0: lea ebp, [esi + 0x104] */
  ebp = (uint32_t)(esi + 0x104u);
/* 5283f6: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 5283f9: mov dword ptr [ebp + 4], edi */
  W32((uint32_t)(ebp + 0x4u), edi);
/* 5283fc: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 5283ff: mov eax, dword ptr [0x5a0c9c] */
  eax = R32((uint32_t)(0x5a0c9cu));
/* 528404: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 52840a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52840c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52840d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 528411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528413: mov byte ptr [esp + 0x28], 3 */
  W8((uint32_t)(esp + 0x28u), 0x3u);
/* 528418: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x52841bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52841b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52841d: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 528423: jne 0x52843e */
  if (!zf) goto L_52843e;
L_528425: /* 528425: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528426: push 0x5a742c */
  { uint32_t v = 0x5a742cu; esp -= 4; W32(esp, v); }
/* 52842b: push 0x5a7438 */
  { uint32_t v = 0x5a7438u; esp -= 4; W32(esp, v); }
/* 528430: call 0x4e1613 */
  esp -= 4; W32(esp, 0x528435u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 528435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528436: call 0x4e3418 */
  esp -= 4; W32(esp, 0x52843bu); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 52843b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52843e: /* 52843e: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 528441: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528443: mov dword ptr [esi + 0x2c], 0x9e2a83c1 */
  W32((uint32_t)(esi + 0x2cu), 0x9e2a83c1u);
/* 52844a: mov dword ptr [esi + 0x30], 0x1007e */
  W32((uint32_t)(esi + 0x30u), 0x1007eu);
/* 528451: je 0x528493 */
  if (zf) goto L_528493;
L_528453: /* 528453: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 528456: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528458: je 0x528493 */
  if (zf) goto L_528493;
L_52845a: /* 52845a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_528460: /* 528460: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528465: je 0x528470 */
  if (zf) goto L_528470;
L_528467: /* 528467: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 52846a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52846c: jne 0x528460 */
  if (!zf) goto L_528460;
L_52846e: /* 52846e: jmp 0x528493 */
  goto L_528493;
L_528470: /* 528470: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528472: je 0x52848e */
  if (zf) goto L_52848e;
L_528474: /* 528474: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 528477: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528479: je 0x52848e */
  if (zf) goto L_52848e;
L_52847b: /* 52847b: jmp 0x528480 */
  goto L_528480;
L_528480: /* 528480: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528485: je 0x528490 */
  if (zf) goto L_528490;
L_528487: /* 528487: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 52848a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52848c: jne 0x528480 */
  if (!zf) goto L_528480;
L_52848e: /* 52848e: xor ecx, ecx */
  ecx = 0;
L_528490: /* 528490: mov edi, dword ptr [ecx + 0x30] */
  edi = R32((uint32_t)(ecx + 0x30u));
L_528493: /* 528493: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 528496: mov edi, 1 */
  edi = 0x1u;
/* 52849b: mov dword ptr [esi + 0xc8], edi */
  W32((uint32_t)(esi + 0xc8u), edi);
/* 5284a1: mov dword ptr [esi + 0xd0], edi */
  W32((uint32_t)(esi + 0xd0u), edi);
/* 5284a7: mov ecx, dword ptr [0x5b211c] */
  ecx = R32((uint32_t)(0x5b211cu));
/* 5284ad: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 5284b3: mov dword ptr [esi + 0xd8], edi */
  W32((uint32_t)(esi + 0xd8u), edi);
/* 5284b9: mov dword ptr [esi + 0xdc], edi */
  W32((uint32_t)(esi + 0xdcu), edi);
/* 5284bf: mov edx, dword ptr [0x6a0f08] */
  edx = R32((uint32_t)(0x6a0f08u));
/* 5284c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5284c6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5284c8: mov ecx, ebx */
  ecx = ebx;
/* 5284ca: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x5284cfu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 5284cf: mov eax, dword ptr [0x69a75c] */
  eax = R32((uint32_t)(0x69a75cu));
/* 5284d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5284d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5284d7: mov ecx, ebp */
  ecx = ebp;
/* 5284d9: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x5284deu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 5284de: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5284e2: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 5284e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5284e9: mov eax, esi */
  eax = esi;
/* 5284eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5284ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5284ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5284ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5284f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5284f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52847d(void) {
  LOAD_REGS();
L_52847d: /* 52847d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_528480: /* 528480: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528485: je 0x528490 */
  if (zf) goto L_528490;
L_528487: /* 528487: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 52848a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52848c: jne 0x528480 */
  if (!zf) goto L_528480;
L_52848e: /* 52848e: xor ecx, ecx */
  ecx = 0;
L_528490: /* 528490: mov edi, dword ptr [ecx + 0x30] */
  edi = R32((uint32_t)(ecx + 0x30u));
/* 528493: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 528496: mov edi, 1 */
  edi = 0x1u;
/* 52849b: mov dword ptr [esi + 0xc8], edi */
  W32((uint32_t)(esi + 0xc8u), edi);
/* 5284a1: mov dword ptr [esi + 0xd0], edi */
  W32((uint32_t)(esi + 0xd0u), edi);
/* 5284a7: mov ecx, dword ptr [0x5b211c] */
  ecx = R32((uint32_t)(0x5b211cu));
/* 5284ad: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 5284b3: mov dword ptr [esi + 0xd8], edi */
  W32((uint32_t)(esi + 0xd8u), edi);
/* 5284b9: mov dword ptr [esi + 0xdc], edi */
  W32((uint32_t)(esi + 0xdcu), edi);
/* 5284bf: mov edx, dword ptr [0x6a0f08] */
  edx = R32((uint32_t)(0x6a0f08u));
/* 5284c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5284c6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5284c8: mov ecx, ebx */
  ecx = ebx;
/* 5284ca: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x5284cfu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 5284cf: mov eax, dword ptr [0x69a75c] */
  eax = R32((uint32_t)(0x69a75cu));
/* 5284d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5284d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5284d7: mov ecx, ebp */
  ecx = ebp;
/* 5284d9: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x5284deu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 5284de: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5284e2: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 5284e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5284e9: mov eax, esi */
  eax = esi;
/* 5284eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5284ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5284ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5284ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5284f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5284f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_528580(void) {
  LOAD_REGS();
L_528580: /* 528580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 528584: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 528586: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 528589: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 52858c: lea eax, [ecx - 0xb4] */
  eax = (uint32_t)(ecx + 0xffffff4cu);
/* 528592: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 528594: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 528596: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 528598: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 52859c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52859d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52859e: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 5285a2: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5285a7u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5285a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5285aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5285c0(void) {
  LOAD_REGS();
L_5285c0: /* 5285c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5285c4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5285c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5285c8: je 0x5285d9 */
  if (zf) goto L_5285d9;
L_5285ca: /* 5285ca: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 5285cd: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 5285d0: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 5285d3: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 5285d7: jmp 0x5285e1 */
  goto L_5285e1;
L_5285d9: /* 5285d9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
L_5285e1: /* 5285e1: lea eax, [ecx - 0xb4] */
  eax = (uint32_t)(ecx + 0xffffff4cu);
/* 5285e7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 5285e9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 5285eb: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5285ed: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 5285f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5285f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5285f3: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5285f8u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5285f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5285fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_528610(void) {
  LOAD_REGS();
L_528610: /* 528610: sub ecx, 0xb4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 528616: jmp 0x4e2013 */
  SPILL(); f_4e2013(); return;
}

void f_528620(void) {
  LOAD_REGS();
L_528620: /* 528620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528621: mov esi, ecx */
  esi = ecx;
/* 528623: call 0x4e2c4d */
  esp -= 4; W32(esp, 0x528628u); SPILL(); f_4e2c4d(); if (g_unwind) return; RELOAD();
/* 528628: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52862d: je 0x52863d */
  if (zf) goto L_52863d;
L_52862f: /* 52862f: push 0x110 */
  { uint32_t v = 0x110u; esp -= 4; W32(esp, v); }
/* 528634: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528635: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x52863au); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 52863a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52863d: /* 52863d: mov eax, esi */
  eax = esi;
/* 52863f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528640: ret 4 */
  esp += 8; SPILL(); return;
}

void f_528660(void) {
  LOAD_REGS();
L_528660: /* 528660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528662: push 0x55816d */
  { uint32_t v = 0x55816du; esp -= 4; W32(esp, v); }
/* 528667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52866d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52866e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 528675: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528677: mov esi, ecx */
  esi = ecx;
/* 528679: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 52867d: mov dword ptr [esi], 0x56cab0 */
  W32((uint32_t)(esi), 0x56cab0u);
/* 528683: mov dword ptr [esi + 0xb4], 0x56ca40 */
  W32((uint32_t)(esi + 0xb4u), 0x56ca40u);
/* 52868d: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 528695: call 0x4e2559 */
  esp -= 4; W32(esp, 0x52869au); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 52869a: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 5286a0: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 5286a5: call 0x4e32fb */
  esp -= 4; W32(esp, 0x5286aau); SPILL(); f_4e32fb(); if (g_unwind) return; RELOAD();
/* 5286aa: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 5286b0: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 5286b5: call 0x4e32fb */
  esp -= 4; W32(esp, 0x5286bau); SPILL(); f_4e32fb(); if (g_unwind) return; RELOAD();
/* 5286ba: mov ecx, esi */
  ecx = esi;
/* 5286bc: mov dword ptr [esi + 0xb4], 0x569110 */
  W32((uint32_t)(esi + 0xb4u), 0x569110u);
/* 5286c6: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5286ce: call 0x4e25ea */
  esp -= 4; W32(esp, 0x5286d3u); SPILL(); f_4e25ea(); if (g_unwind) return; RELOAD();
/* 5286d3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5286d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5286d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5286df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5286e2: ret  */
  esp += 4; SPILL(); return;
}

void f_528720(void) {
  LOAD_REGS();
L_528720: /* 528720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 528721: mov ebp, esp */
  ebp = esp;
/* 528723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528725: push 0x558190 */
  { uint32_t v = 0x558190u; esp -= 4; W32(esp, v); }
/* 52872a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 528730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 528738: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52873b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52873c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52873d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52873e: mov edi, ecx */
  edi = ecx;
/* 528740: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 528746: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528748: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52874b: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 52874e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 528755: jne 0x52883d */
  if (!zf) goto L_52883d;
L_52875b: /* 52875b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 52875e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528760: je 0x52879d */
  if (zf) goto L_52879d;
L_528762: /* 528762: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_528765: /* 528765: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528767: je 0x52879d */
  if (zf) goto L_52879d;
L_528769: /* 528769: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52876e: je 0x528775 */
  if (zf) goto L_528775;
L_528770: /* 528770: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 528773: jmp 0x528765 */
  goto L_528765;
L_528775: /* 528775: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528777: je 0x52879d */
  if (zf) goto L_52879d;
L_528779: /* 528779: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 52877c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52877e: je 0x528797 */
  if (zf) goto L_528797;
L_528780: /* 528780: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_528783: /* 528783: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528785: je 0x528797 */
  if (zf) goto L_528797;
L_528787: /* 528787: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52878c: je 0x528793 */
  if (zf) goto L_528793;
L_52878e: /* 52878e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 528791: jmp 0x528783 */
  goto L_528783;
L_528793: /* 528793: mov eax, ecx */
  eax = ecx;
/* 528795: jmp 0x528799 */
  goto L_528799;
L_528797: /* 528797: xor eax, eax */
  eax = 0;
L_528799: /* 528799: and dword ptr [eax + 0x30], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
L_52879d: /* 52879d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5287a1: xor esi, esi */
  esi = 0;
L_5287a3: /* 5287a3: cmp esi, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5287a6: jge 0x52883d */
  if ((sf == of)) goto L_52883d;
L_5287ac: /* 5287ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5287ad: mov ecx, edi */
  ecx = edi;
/* 5287af: call 0x4e22a2 */
  esp -= 4; W32(esp, 0x5287b4u); SPILL(); f_4e22a2(); if (g_unwind) return; RELOAD();
/* 5287b4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5287b5: jmp 0x5287a3 */
  goto L_5287a3;
L_52883d: /* 52883d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528840: mov dword ptr [edi + 0xf8], 1 */
  W32((uint32_t)(edi + 0xf8u), 0x1u);
/* 52884a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52884b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52884c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528853: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528854: mov esp, ebp */
  esp = ebp;
/* 528856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528857: ret  */
  esp += 4; SPILL(); return;
}

void f_5287b7(void) {
  LOAD_REGS();
L_5287b7: /* 5287b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5287ba: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5287bf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5287c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5287c3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5287c6: call 0x554df6 */
  esp -= 4; W32(esp, 0x5287cbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5287cb(); return;
}

void f_5287cb(void) {
  LOAD_REGS();
L_5287cb: /* 5287cb: push 0x56cb64 */
  { uint32_t v = 0x56cb64u; esp -= 4; W32(esp, v); }
/* 5287d0: push 0x5a6e1c */
  { uint32_t v = 0x5a6e1cu; esp -= 4; W32(esp, v); }
/* 5287d5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5287dau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5287da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5287dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5287df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5287e1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5287e6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5287e6(); return;
}

void f_5287e6(void) {
  LOAD_REGS();
L_5287e6: /* 5287e6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5287e9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 5287ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5287ed: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 5287f2: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5287f5: call 0x4e17f3 */
  esp -= 4; W32(esp, 0x5287fau); SPILL(); f_4e17f3(); if (g_unwind) return; RELOAD();
/* 5287fa: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 5287fd: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 528802: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 528805: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 528806: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 528809: call 0x554df6 */
  esp -= 4; W32(esp, 0x52880eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52880e(); return;
}

void f_52880e(void) {
  LOAD_REGS();
L_52880e: /* 52880e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 528811: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 528816: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 528819: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52881a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 52881d: call 0x554df6 */
  esp -= 4; W32(esp, 0x528822u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_528822(); return;
}

void f_528822(void) {
  LOAD_REGS();
L_528822: /* 528822: push 0x56cb34 */
  { uint32_t v = 0x56cb34u; esp -= 4; W32(esp, v); }
/* 528827: push 0x5a6e24 */
  { uint32_t v = 0x5a6e24u; esp -= 4; W32(esp, v); }
/* 52882c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x528831u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 528831: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528838: call 0x554df6 */
  esp -= 4; W32(esp, 0x52883du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 52883d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528840: mov dword ptr [edi + 0xf8], 1 */
  W32((uint32_t)(edi + 0xf8u), 0x1u);
/* 52884a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52884b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52884c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528853: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528854: mov esp, ebp */
  esp = ebp;
/* 528856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528857: ret  */
  esp += 4; SPILL(); return;
}

void f_5288b0(void) {
  LOAD_REGS();
L_5288b0: /* 5288b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5288b1: mov ebp, esp */
  ebp = esp;
/* 5288b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5288b5: push 0x5581a0 */
  { uint32_t v = 0x5581a0u; esp -= 4; W32(esp, v); }
/* 5288ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5288c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5288c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5288c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5288cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5288cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5288cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5288ce: mov edi, ecx */
  edi = ecx;
/* 5288d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5288d3: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 5288d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5288dd: xor esi, esi */
  esi = 0;
/* 5288df: nop  */
L_5288e0: /* 5288e0: cmp esi, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5288e3: jge 0x528937 */
  if ((sf == of)) goto L_528937;
L_5288e5: /* 5288e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5288e6: mov ecx, edi */
  ecx = edi;
/* 5288e8: call 0x4e11e5 */
  esp -= 4; W32(esp, 0x5288edu); SPILL(); f_4e11e5(); if (g_unwind) return; RELOAD();
/* 5288ed: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5288ee: jmp 0x5288e0 */
  goto L_5288e0;
L_528937: /* 528937: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52893a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52893b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52893c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528943: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528944: mov esp, ebp */
  esp = ebp;
/* 528946: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528947: ret  */
  esp += 4; SPILL(); return;
}

void f_5288f0(void) {
  LOAD_REGS();
L_5288f0: /* 5288f0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5288f3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5288f8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5288fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5288fc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5288ff: call 0x554df6 */
  esp -= 4; W32(esp, 0x528904u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_528904(); return;
}

void f_528904(void) {
  LOAD_REGS();
L_528904: /* 528904: push 0x56cb8c */
  { uint32_t v = 0x56cb8cu; esp -= 4; W32(esp, v); }
/* 528909: push 0x5a7010 */
  { uint32_t v = 0x5a7010u; esp -= 4; W32(esp, v); }
/* 52890e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x528913u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 528913: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 528916: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528919: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52891b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x528920u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 528920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528921: push 0x5a7018 */
  { uint32_t v = 0x5a7018u; esp -= 4; W32(esp, v); }
/* 528926: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52892bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52892b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52892e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528930: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528932: call 0x554df6 */
  esp -= 4; W32(esp, 0x528937u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 528937: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52893a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52893b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52893c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528943: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528944: mov esp, ebp */
  esp = ebp;
/* 528946: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528947: ret  */
  esp += 4; SPILL(); return;
}

void f_528980(void) {
  LOAD_REGS();
L_528980: /* 528980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 528981: mov ebp, esp */
  ebp = esp;
/* 528983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528985: push 0x5581b0 */
  { uint32_t v = 0x5581b0u; esp -= 4; W32(esp, v); }
/* 52898a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 528990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 528998: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52899b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52899c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52899d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52899e: mov ebx, ecx */
  ebx = ecx;
/* 5289a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5289a3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5289a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5289ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5289b0: /* 5289b0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5289b3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5289b6: imul ecx, ecx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1fu);
  ecx = (uint32_t)r;
  }
/* 5289b9: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 5289bc: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 5289bf: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5289c1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5289c3: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5289c8: mov eax, dword ptr [ebx + eax*4 + 0xfc] */
  eax = R32((uint32_t)(ebx + eax*4 + 0xfcu));
/* 5289cf: nop  */
L_5289d0: /* 5289d0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5289d3: je 0x528a5e */
  if (zf) goto L_528a5e;
L_5289d9: /* 5289d9: mov edi, dword ptr [ebx + 0x84] */
  edi = R32((uint32_t)(ebx + 0x84u));
/* 5289df: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 5289e2: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5289e5: lea esi, [edi + ecx*4] */
  esi = (uint32_t)(edi + ecx*4);
/* 5289e8: cmp dword ptr [esi + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5289eb: jne 0x528a56 */
  if (!zf) goto L_528a56;
L_5289ed: /* 5289ed: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 5289f0: cmp dword ptr [esi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5289f3: je 0x5289fa */
  if (zf) goto L_5289fa;
L_5289f5: /* 5289f5: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5289f8: jne 0x528a56 */
  if (!zf) goto L_528a56;
L_5289fa: /* 5289fa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5289fc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5289fe: jge 0x528a1a */
  if ((sf == of)) goto L_528a1a;
L_528a00: /* 528a00: mov ecx, dword ptr [ebx + 0x78] */
  ecx = R32((uint32_t)(ebx + 0x78u));
/* 528a03: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 528a06: mov ebx, ecx */
  ebx = ecx;
/* 528a08: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 528a0a: mov edx, dword ptr [ebx - 0x14] */
  edx = R32((uint32_t)(ebx + 0xffffffecu));
/* 528a0d: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 528a10: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 528a13: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 528a15: mov ecx, dword ptr [ecx - 0x10] */
  ecx = R32((uint32_t)(ecx + 0xfffffff0u));
/* 528a18: jmp 0x528a29 */
  goto L_528a29;
L_528a1a: /* 528a1a: jle 0x528a24 */
  if ((zf || sf != of)) goto L_528a24;
L_528a1c: /* 528a1c: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 528a1f: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 528a22: jmp 0x528a29 */
  goto L_528a29;
L_528a24: /* 528a24: mov ecx, 0x14 */
  ecx = 0x14u;
L_528a29: /* 528a29: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528a2c: jne 0x528a56 */
  if (!zf) goto L_528a56;
L_528a2e: /* 528a2e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 528a30: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 528a32: jge 0x528a41 */
  if ((sf == of)) goto L_528a41;
L_528a34: /* 528a34: mov edx, dword ptr [ebx + 0x78] */
  edx = R32((uint32_t)(ebx + 0x78u));
/* 528a37: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 528a3a: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 528a3c: mov ecx, dword ptr [edx - 0x10] */
  ecx = R32((uint32_t)(edx + 0xfffffff0u));
/* 528a3f: jmp 0x528a51 */
  goto L_528a51;
L_528a41: /* 528a41: jle 0x528a4c */
  if ((zf || sf != of)) goto L_528a4c;
L_528a43: /* 528a43: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 528a46: mov ecx, dword ptr [edi + ecx*4 - 0x18] */
  ecx = R32((uint32_t)(edi + ecx*4 + 0xffffffe8u));
/* 528a4a: jmp 0x528a51 */
  goto L_528a51;
L_528a4c: /* 528a4c: mov ecx, 0x2a5 */
  ecx = 0x2a5u;
L_528a51: /* 528a51: cmp ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528a54: je 0x528ac1 */
  if (zf) goto L_528ac1;
L_528a56: /* 528a56: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 528a59: jmp 0x5289d0 */
  goto L_5289d0;
L_528a5e: /* 528a5e: xor esi, esi */
  esi = 0;
L_528a60: /* 528a60: cmp esi, dword ptr [ebx + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 528a66: jge 0x528adc */
  if ((sf == of)) goto L_528adc;
L_528a68: /* 528a68: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 528a6e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 528a71: lea edx, [esi + esi*8] */
  edx = (uint32_t)(esi + esi*8);
/* 528a74: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 528a77: cmp dword ptr [eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528a7a: jne 0x528ad9 */
  if (!zf) goto L_528ad9;
L_528a7c: /* 528a7c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 528a7f: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528a82: je 0x528a89 */
  if (zf) goto L_528a89;
L_528a84: /* 528a84: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528a87: jne 0x528ad9 */
  if (!zf) goto L_528ad9;
L_528a89: /* 528a89: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 528a8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 528a8c: mov ecx, ebx */
  ecx = ebx;
/* 528a8e: call 0x4e330f */
  esp -= 4; W32(esp, 0x528a93u); SPILL(); f_4e330f(); if (g_unwind) return; RELOAD();
/* 528a93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528a95: je 0x528ab1 */
  if (zf) goto L_528ab1;
L_528a97: /* 528a97: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 528a9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_528aa0: /* 528aa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528aa2: je 0x528ab1 */
  if (zf) goto L_528ab1;
L_528aa4: /* 528aa4: cmp ecx, 0x5f0d80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528aaa: je 0x528ab3 */
  if (zf) goto L_528ab3;
L_528aac: /* 528aac: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 528aaf: jmp 0x528aa0 */
  goto L_528aa0;
L_528ab1: /* 528ab1: xor eax, eax */
  eax = 0;
L_528ab3: /* 528ab3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528ab5: je 0x528ad9 */
  if (zf) goto L_528ad9;
L_528ab7: /* 528ab7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 528aba: cmp dword ptr [eax + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528abd: jne 0x528ad4 */
  if (!zf) goto L_528ad4;
L_528abf: /* 528abf: mov eax, esi */
  eax = esi;
L_528ac1: /* 528ac1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528ac4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528acb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 528acc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528acd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528ace: mov esp, ebp */
  esp = ebp;
/* 528ad0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528ad1: ret 0x10 */
  esp += 20; SPILL(); return;
L_528ad4: /* 528ad4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 528ad7: jmp 0x528ab3 */
  goto L_528ab3;
L_528ad9: /* 528ad9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 528ada: jmp 0x528a60 */
  goto L_528a60;
L_528adc: /* 528adc: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 528ae2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 528ae5: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 528ae8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 528aeb: push 0x5a7024 */
  { uint32_t v = 0x5a7024u; esp -= 4; W32(esp, v); }
/* 528af0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528af1: call 0x4e26df */
  esp -= 4; W32(esp, 0x528af6u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 528af6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528af9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528afb: jne 0x528b16 */
  if (!zf) goto L_528b16;
L_528afd: /* 528afd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 528aff: push 0x5a7030 */
  { uint32_t v = 0x5a7030u; esp -= 4; W32(esp, v); }
/* 528b04: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 528b07: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x528b0cu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 528b0c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 528b0e: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 528b11: jmp 0x5289b0 */
  goto L_5289b0;
L_528b16: /* 528b16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528b19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 528b1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528b1b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 528b1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528b25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528b26: mov esp, ebp */
  esp = ebp;
/* 528b28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528b29: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_528b2c(void) {
  LOAD_REGS();
L_528b2c: /* 528b2c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 528b2f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 528b34: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 528b37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528b38: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 528b3b: call 0x554df6 */
  esp -= 4; W32(esp, 0x528b40u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_528b40(); return;
}

void f_528b40(void) {
  LOAD_REGS();
L_528b40: /* 528b40: push 0x56cbd0 */
  { uint32_t v = 0x56cbd0u; esp -= 4; W32(esp, v); }
/* 528b45: push 0x5a7040 */
  { uint32_t v = 0x5a7040u; esp -= 4; W32(esp, v); }
/* 528b4a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x528b4fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 528b4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528b52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528b54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528b56: call 0x554df6 */
  esp -= 4; W32(esp, 0x528b5bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_528b5b: guest_badaddr(0x528b5b); return;
}

void f_528be0(void) {
  LOAD_REGS();
L_528be0: /* 528be0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 528be1: mov ebp, esp */
  ebp = esp;
/* 528be3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528be5: push 0x5581c0 */
  { uint32_t v = 0x5581c0u; esp -= 4; W32(esp, v); }
/* 528bea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 528bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528bf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 528bf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 528bfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528bfc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 528bff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528c00: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 528c03: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 528c06: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 528c09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528c0a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 528c0d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528c0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528c10: mov edi, ecx */
  edi = ecx;
/* 528c12: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 528c15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528c16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528c17: mov ecx, edi */
  ecx = edi;
/* 528c19: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 528c20: call 0x4e173a */
  esp -= 4; W32(esp, 0x528c25u); SPILL(); f_4e173a(); if (g_unwind) return; RELOAD();
/* 528c25: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528c28: je 0x528c61 */
  if (zf) goto L_528c61;
L_528c2a: /* 528c2a: test byte ptr [ebp + 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 528c2e: je 0x528c46 */
  if (zf) goto L_528c46;
L_528c30: /* 528c30: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 528c33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528c36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528c3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 528c3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528c3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528c40: mov esp, ebp */
  esp = ebp;
/* 528c42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528c43: ret 0x10 */
  esp += 20; SPILL(); return;
L_528c46: /* 528c46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528c47: mov ecx, edi */
  ecx = edi;
/* 528c49: call 0x4e11e5 */
  esp -= 4; W32(esp, 0x528c4eu); SPILL(); f_4e11e5(); if (g_unwind) return; RELOAD();
/* 528c4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528c51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528c58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 528c59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528c5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528c5b: mov esp, ebp */
  esp = ebp;
/* 528c5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528c5e: ret 0x10 */
  esp += 20; SPILL(); return;
L_528c61: /* 528c61: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 528c64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 528c66: je 0x528c9c */
  if (zf) goto L_528c9c;
L_528c68: /* 528c68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528c6a: push 0x5a7048 */
  { uint32_t v = 0x5a7048u; esp -= 4; W32(esp, v); }
/* 528c6f: push 0x5a7054 */
  { uint32_t v = 0x5a7054u; esp -= 4; W32(esp, v); }
/* 528c74: call 0x4e1613 */
  esp -= 4; W32(esp, 0x528c79u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 528c79: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 528c7f: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 528c82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528c85: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 528c88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 528c89: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 528c8c: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 528c8f: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 528c92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528c93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528c94: call 0x4e3418 */
  esp -= 4; W32(esp, 0x528c99u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 528c99: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_528c9c: /* 528c9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 528c9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 528ca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 528ca1: xor eax, eax */
  eax = 0;
/* 528ca3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 528caa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 528cab: mov esp, ebp */
  esp = ebp;
/* 528cad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 528cae: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_528cb1(void) {
  LOAD_REGS();
L_528cb1: /* 528cb1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 528cb4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 528cb9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 528cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528cbd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 528cc0: call 0x554df6 */
  esp -= 4; W32(esp, 0x528cc5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_528cc5(); return;
}

void f_528cc5(void) {
  LOAD_REGS();
L_528cc5: /* 528cc5: push 0x56cc18 */
  { uint32_t v = 0x56cc18u; esp -= 4; W32(esp, v); }
/* 528cca: push 0x5a7070 */
  { uint32_t v = 0x5a7070u; esp -= 4; W32(esp, v); }
/* 528ccf: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x528cd4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 528cd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528cd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528cd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 528cdb: call 0x554df6 */
  esp -= 4; W32(esp, 0x528ce0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_528ce0: guest_badaddr(0x528ce0); return;
}

void f_528d40(void) {
  LOAD_REGS();
L_528d40: /* 528d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 528d41: mov ebp, esp */
  ebp = esp;
/* 528d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 528d45: push 0x5581f4 */
  { uint32_t v = 0x5581f4u; esp -= 4; W32(esp, v); }
/* 528d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 528d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 528d58: sub esp, 0x11c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 528d5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 528d61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528d63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528d64: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 528d67: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 528d6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528d6b: mov esi, ecx */
  esi = ecx;
/* 528d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528d6e: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 528d71: call 0x4e15cd */
  esp -= 4; W32(esp, 0x528d76u); SPILL(); f_4e15cd(); if (g_unwind) return; RELOAD();
/* 528d76: xor ebx, ebx */
  ebx = 0;
/* 528d78: mov eax, 1 */
  eax = 0x1u;
/* 528d7d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 528d80: mov dword ptr [esi + 0xb4], 0x569110 */
  W32((uint32_t)(esi + 0xb4u), 0x569110u);
/* 528d8a: mov dword ptr [esi + 0xb8], 0x7e */
  W32((uint32_t)(esi + 0xb8u), 0x7eu);
/* 528d94: mov dword ptr [esi + 0xbc], 0x7d0 */
  W32((uint32_t)(esi + 0xbcu), 0x7d0u);
/* 528d9e: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 528da4: mov dword ptr [esi + 0xc4], ebx */
  W32((uint32_t)(esi + 0xc4u), ebx);
/* 528daa: mov dword ptr [esi + 0xc8], ebx */
  W32((uint32_t)(esi + 0xc8u), ebx);
/* 528db0: mov dword ptr [esi + 0xcc], ebx */
  W32((uint32_t)(esi + 0xccu), ebx);
/* 528db6: mov dword ptr [esi + 0xd0], ebx */
  W32((uint32_t)(esi + 0xd0u), ebx);
/* 528dbc: mov dword ptr [esi + 0xd4], eax */
  W32((uint32_t)(esi + 0xd4u), eax);
/* 528dc2: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 528dc8: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 528dce: mov dword ptr [esi + 0xe0], ebx */
  W32((uint32_t)(esi + 0xe0u), ebx);
/* 528dd4: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 528dda: mov dword ptr [esi + 0xe8], ebx */
  W32((uint32_t)(esi + 0xe8u), ebx);
/* 528de0: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 528de6: mov dword ptr [esi + 0xf0], 0xffffffff */
  W32((uint32_t)(esi + 0xf0u), 0xffffffffu);
/* 528df0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 528df3: mov dword ptr [esi], 0x56cda8 */
  W32((uint32_t)(esi), 0x56cda8u);
/* 528df9: mov dword ptr [esi + 0xb4], 0x56cd38 */
  W32((uint32_t)(esi + 0xb4u), 0x56cd38u);
/* 528e03: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 528e09: mov dword ptr [esi + 0x4fc], ebx */
  W32((uint32_t)(esi + 0x4fcu), ebx);
/* 528e0f: mov dword ptr [esi + 0x500], ebx */
  W32((uint32_t)(esi + 0x500u), ebx);
/* 528e15: mov dword ptr [esi + 0x504], ebx */
  W32((uint32_t)(esi + 0x504u), ebx);
/* 528e1b: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 528e20: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 528e26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 528e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528e29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528e2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528e2b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 528e2f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x528e32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 528e32: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528e34: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 528e3a: jne 0x528e58 */
  if (!zf) goto L_528e58;
L_528e3c: /* 528e3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528e3d: push 0x5a6cf0 */
  { uint32_t v = 0x5a6cf0u; esp -= 4; W32(esp, v); }
/* 528e42: push 0x5a6cfc */
  { uint32_t v = 0x5a6cfcu; esp -= 4; W32(esp, v); }
/* 528e47: call 0x4e1613 */
  esp -= 4; W32(esp, 0x528e4cu); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 528e4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528e4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528e50: call 0x4e3418 */
  esp -= 4; W32(esp, 0x528e55u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 528e55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_528e58: /* 528e58: xor edi, edi */
  edi = 0;
/* 528e5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_528e60: /* 528e60: cmp edi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 528e66: jge 0x528ead */
  if ((sf == of)) goto L_528ead;
L_528e68: /* 528e68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528e69: call 0x4e2356 */
  esp -= 4; W32(esp, 0x528e6eu); SPILL(); f_4e2356(); if (g_unwind) return; RELOAD();
/* 528e6e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 528e71: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 528e74: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528e77: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528e79: jne 0x528eaa */
  if (!zf) goto L_528eaa;
L_528e7b: /* 528e7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528e7c: push 0x5a6d14 */
  { uint32_t v = 0x5a6d14u; esp -= 4; W32(esp, v); }
/* 528e81: push 0x5a6d20 */
  { uint32_t v = 0x5a6d20u; esp -= 4; W32(esp, v); }
/* 528e86: call 0x4e1613 */
  esp -= 4; W32(esp, 0x528e8bu); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 528e8b: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 528e8e: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 528e91: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 528e97: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 528e9a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528e9d: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 528ea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528ea1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528ea2: call 0x4e3418 */
  esp -= 4; W32(esp, 0x528ea7u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 528ea7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_528eaa: /* 528eaa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 528eab: jmp 0x528e60 */
  goto L_528e60;
L_528ead: /* 528ead: cmp dword ptr [esi + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528eb3: je 0x528ebd */
  if (zf) goto L_528ebd;
L_528eb5: /* 528eb5: mov edi, dword ptr [esi + 0x94] */
  edi = R32((uint32_t)(esi + 0x94u));
/* 528ebb: jmp 0x528ec2 */
  goto L_528ec2;
L_528ebd: /* 528ebd: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_528ec2: /* 528ec2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528ec3: push 0x5a6d3c */
  { uint32_t v = 0x5a6d3cu; esp -= 4; W32(esp, v); }
/* 528ec8: push 0x5a6d48 */
  { uint32_t v = 0x5a6d48u; esp -= 4; W32(esp, v); }
/* 528ecd: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x528ed2u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 528ed2: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 528ed8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 528eda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528edd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 528ede: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528edf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528ee0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528ee1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 528ee2: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x528ee5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 528ee5: mov eax, 1 */
  eax = 0x1u;
/* 528eea: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 528ef0: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 528ef6: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 528efc: mov dword ptr [esi + 0xb8], 0x7e */
  W32((uint32_t)(esi + 0xb8u), 0x7eu);
/* 528f06: mov ecx, dword ptr [0x5b211c] */
  ecx = R32((uint32_t)(0x5b211cu));
/* 528f0c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528f0f: lea edx, [esi + 0x2c] */
  edx = (uint32_t)(esi + 0x2cu);
/* 528f12: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 528f18: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 528f1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 528f1f: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 528f25: mov edi, 3 */
  edi = 0x3u;
/* 528f2a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 528f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528f2e: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 528f34: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 528f38: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x528f3du); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 528f3d: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 528f40: mov ecx, eax */
  ecx = eax;
/* 528f42: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 528f48: sar eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 528f4b: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* 528f51: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 528f54: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 528f59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528f5c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528f5e: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 528f64: je 0x528fac */
  if (zf) goto L_528fac;
L_528f66: /* 528f66: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 528f69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_528f70: /* 528f70: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528f72: je 0x528fac */
  if (zf) goto L_528fac;
L_528f74: /* 528f74: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528f79: je 0x528f80 */
  if (zf) goto L_528f80;
L_528f7b: /* 528f7b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 528f7e: jmp 0x528f70 */
  goto L_528f70;
L_528f80: /* 528f80: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528f82: je 0x528fac */
  if (zf) goto L_528fac;
L_528f84: /* 528f84: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 528f87: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528f89: je 0x528fa4 */
  if (zf) goto L_528fa4;
L_528f8b: /* 528f8b: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 528f8e: mov edi, edi */
  edi = edi;
L_528f90: /* 528f90: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528f92: je 0x528fa4 */
  if (zf) goto L_528fa4;
L_528f94: /* 528f94: cmp eax, 0x69ff70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528f99: je 0x528fa0 */
  if (zf) goto L_528fa0;
L_528f9b: /* 528f9b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 528f9e: jmp 0x528f90 */
  goto L_528f90;
L_528fa0: /* 528fa0: mov eax, ecx */
  eax = ecx;
/* 528fa2: jmp 0x528fa6 */
  goto L_528fa6;
L_528fa4: /* 528fa4: xor eax, eax */
  eax = 0;
L_528fa6: /* 528fa6: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 528fa9: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
L_528fac: /* 528fac: cmp dword ptr [esi + 0x2c], 0x9e2a83c1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2cu))); uint32_t b = (uint32_t)(0x9e2a83c1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528fb3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 528fb6: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 528fba: je 0x52904b */
  if (zf) goto L_52904b;
L_528fc0: /* 528fc0: cmp dword ptr [esi + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 528fc6: je 0x528fd0 */
  if (zf) goto L_528fd0;
L_528fc8: /* 528fc8: mov esi, dword ptr [esi + 0x94] */
  esi = R32((uint32_t)(esi + 0x94u));
/* 528fce: jmp 0x528fd5 */
  goto L_528fd5;
L_528fd0: /* 528fd0: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_528fd5: /* 528fd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528fd6: push 0x5a6d68 */
  { uint32_t v = 0x5a6d68u; esp -= 4; W32(esp, v); }
/* 528fdb: push 0x5a6d74 */
  { uint32_t v = 0x5a6d74u; esp -= 4; W32(esp, v); }
/* 528fe0: call 0x4e1613 */
  esp -= 4; W32(esp, 0x528fe5u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 528fe5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 528fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528fea: mov eax, dword ptr [0x5afee8] */
  eax = R32((uint32_t)(0x5afee8u));
/* 528fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 528ff0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x528ff5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 528ff5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 528ff8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 528ff9: push 0x5a6d90 */
  { uint32_t v = 0x5a6d90u; esp -= 4; W32(esp, v); }
/* 528ffe: push 0x5a6d9c */
  { uint32_t v = 0x5a6d9cu; esp -= 4; W32(esp, v); }
/* 529003: call 0x4e1613 */
  esp -= 4; W32(esp, 0x529008u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 529008: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52900b: push 0x571080 */
  { uint32_t v = 0x571080u; esp -= 4; W32(esp, v); }
/* 529010: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 529013: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 529014: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 529017: call 0x554df6 */
  esp -= 4; W32(esp, 0x52901cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52901c(); return;
L_52904b: /* 52904b: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 52904e: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 529054: cmp ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529057: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 52905a: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 52905e: jge 0x5290f9 */
  if ((sf == of)) goto L_5290f9;
L_529064: /* 529064: cmp dword ptr [esi + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52906a: je 0x529074 */
  if (zf) goto L_529074;
L_52906c: /* 52906c: mov edi, dword ptr [esi + 0x94] */
  edi = R32((uint32_t)(esi + 0x94u));
/* 529072: jmp 0x529079 */
  goto L_529079;
L_529074: /* 529074: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_529079: /* 529079: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52907a: push 0x5a6db4 */
  { uint32_t v = 0x5a6db4u; esp -= 4; W32(esp, v); }
/* 52907f: push 0x5a6dc0 */
  { uint32_t v = 0x5a6dc0u; esp -= 4; W32(esp, v); }
/* 529084: call 0x4e1a8c */
  esp -= 4; W32(esp, 0x529089u); SPILL(); f_4e1a8c(); if (g_unwind) return; RELOAD();
/* 529089: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 52908f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 529091: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529096: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 529097: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x52909au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52909a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52909d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52909f: jne 0x5290f4 */
  if (!zf) goto L_5290f4;
L_5290a1: /* 5290a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5290a2: push 0x5a6dd8 */
  { uint32_t v = 0x5a6dd8u; esp -= 4; W32(esp, v); }
/* 5290a7: push 0x5a6de4 */
  { uint32_t v = 0x5a6de4u; esp -= 4; W32(esp, v); }
/* 5290ac: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5290b1u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 5290b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5290b4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 5290b7: push 0x571080 */
  { uint32_t v = 0x571080u; esp -= 4; W32(esp, v); }
/* 5290bc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 5290bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5290c0: call 0x554df6 */
  esp -= 4; W32(esp, 0x5290c5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5290c5(); return;
L_5290f4: /* 5290f4: mov edi, 3 */
  edi = 0x3u;
L_5290f9: /* 5290f9: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 5290fc: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 5290ff: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 529102: xor eax, eax */
  eax = 0;
L_529104: /* 529104: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529107: jge 0x52910c */
  if ((sf == of)) goto L_52910c;
L_529109: /* 529109: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52910a: jmp 0x529104 */
  goto L_529104;
L_52910c: /* 52910c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 52910e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 529111: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529114: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529119u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 529119: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 52911c: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* 529122: xor eax, eax */
  eax = 0;
L_529124: /* 529124: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529127: jge 0x52912c */
  if ((sf == of)) goto L_52912c;
L_529129: /* 529129: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52912a: jmp 0x529124 */
  goto L_529124;
L_52912c: /* 52912c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52912e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 529131: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529134: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529139u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 529139: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 52913c: lea edi, [esi + 0x6c] */
  edi = (uint32_t)(esi + 0x6cu);
/* 52913f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529141: mov ecx, edi */
  ecx = edi;
/* 529143: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 529146: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 529149: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52914eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52914e: cmp dword ptr [esi + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529151: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 529155: jle 0x529230 */
  if ((zf || sf != of)) goto L_529230;
L_52915b: /* 52915b: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 52915e: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 529164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529165: call 0x4e13cf */
  esp -= 4; W32(esp, 0x52916au); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 52916a: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 52916d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_529170: /* 529170: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 529173: cmp ecx, dword ptr [esi + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529176: jge 0x529230 */
  if ((sf == of)) goto L_529230;
L_52917c: /* 52917c: lea edx, [ebp - 0x128] */
  edx = (uint32_t)(ebp + 0xfffffed8u);
/* 529182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529183: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52918a: call 0x4e1be0 */
  esp -= 4; W32(esp, 0x52918fu); SPILL(); f_4e1be0(); if (g_unwind) return; RELOAD();
/* 52918f: mov eax, dword ptr [ebp - 0x124] */
  eax = R32((uint32_t)(ebp + 0xfffffedcu));
/* 529195: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* 52919b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52919e: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5291a0: je 0x5291b8 */
  if (zf) goto L_5291b8;
L_5291a2: /* 5291a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5291a4: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 5291aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5291ab: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 5291ae: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5291b3u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5291b3: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 5291b6: jmp 0x5291c1 */
  goto L_5291c1;
L_5291b8: /* 5291b8: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 5291bb: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 5291be: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_5291c1: /* 5291c1: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 5291c4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 5291c7: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5291ca: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5291cc: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5291cf: jle 0x5291ed */
  if ((zf || sf != of)) goto L_5291ed;
L_5291d1: /* 5291d1: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5291d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5291d5: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5291d8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5291da: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5291dd: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5291e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5291e3: mov ecx, edi */
  ecx = edi;
/* 5291e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 5291e8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5291edu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5291ed: /* 5291ed: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5291f0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5291f2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 5291f4: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* 5291f7: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 5291fa: xor ebx, ebx */
  ebx = 0;
/* 5291fc: jmp 0x529170 */
  goto L_529170;
L_529230: /* 529230: lea edi, [esi + 0xb4] */
  edi = (uint32_t)(esi + 0xb4u);
/* 529236: mov ecx, edi */
  ecx = edi;
/* 529238: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 52923f: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x529244u); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 529244: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 529247: cmp dword ptr [esi + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52924a: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 52924e: jle 0x5292f1 */
  if ((zf || sf != of)) goto L_5292f1;
L_529254: /* 529254: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 529257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529258: mov ecx, edi */
  ecx = edi;
/* 52925a: call 0x4e13cf */
  esp -= 4; W32(esp, 0x52925fu); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 52925f: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_529262: /* 529262: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 529265: cmp ecx, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529268: jge 0x5292f1 */
  if ((sf == of)) goto L_5292f1;
L_52926e: /* 52926e: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 529271: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 529277: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 52927a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 52927d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52927f: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529282: jle 0x5292a0 */
  if ((zf || sf != of)) goto L_5292a0;
L_529284: /* 529284: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529287: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529288: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52928b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52928d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529290: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 529294: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 529296: mov ecx, edi */
  ecx = edi;
/* 529298: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 52929b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5292a0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5292a0: /* 5292a0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5292a2: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 5292a5: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5292a7: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 5292ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5292ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5292af: call 0x4e1ded */
  esp -= 4; W32(esp, 0x5292b4u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 5292b4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5292b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5292ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5292bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5292be: xor ebx, ebx */
  ebx = 0;
/* 5292c0: jmp 0x529262 */
  goto L_529262;
L_5292f1: /* 5292f1: cmp dword ptr [esi + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5292f4: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5292fb: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 5292ff: jle 0x5293ca */
  if ((zf || sf != of)) goto L_5293ca;
L_529305: /* 529305: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 529308: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529309: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 52930f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529314u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529314: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 529317: jmp 0x529320 */
  goto L_529320;
L_529320: /* 529320: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529323: cmp eax, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529326: jge 0x5293ca */
  if ((sf == of)) goto L_5293ca;
L_52932c: /* 52932c: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 529332: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 529338: lea edi, [esi + 0x84] */
  edi = (uint32_t)(esi + 0x84u);
/* 52933e: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 529341: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529343: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529346: jle 0x529364 */
  if ((zf || sf != of)) goto L_529364;
L_529348: /* 529348: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52934b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52934c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52934f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529351: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529354: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 529358: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 52935b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52935d: mov ecx, edi */
  ecx = edi;
/* 52935f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529364u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529364: /* 529364: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 529366: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 529369: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 52936c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52936e: je 0x529380 */
  if (zf) goto L_529380;
L_529370: /* 529370: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 529377: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 52937e: jmp 0x529382 */
  goto L_529382;
L_529380: /* 529380: xor eax, eax */
  eax = 0;
L_529382: /* 529382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529383: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52938a: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x52938fu); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 52938f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529392: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 529396: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 529399: jmp 0x529320 */
  goto L_529320;
L_5293ca: /* 5293ca: lea ebx, [esi + 0xb4] */
  ebx = (uint32_t)(esi + 0xb4u);
/* 5293d0: mov ecx, ebx */
  ecx = ebx;
/* 5293d2: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5293d9: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x5293deu); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 5293de: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 5293e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5293e4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5293e6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5293e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5293eb: jge 0x5293ef */
  if ((sf == of)) goto L_5293ef;
L_5293ed: /* 5293ed: mov eax, ecx */
  eax = ecx;
L_5293ef: /* 5293ef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5293f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5293f7: push 0x5f77d4 */
  { uint32_t v = 0x5f77d4u; esp -= 4; W32(esp, v); }
/* 5293fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5293fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5293ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5293ff: mov edi, eax */
  edi = eax;
/* 529401: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 529407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529408: call 0x4e2423 */
  esp -= 4; W32(esp, 0x52940du); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 52940d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529412: mov ecx, ebx */
  ecx = ebx;
/* 529414: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529419u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52941c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52941d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52941e: mov ecx, ebx */
  ecx = ebx;
/* 529420: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529425u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529425: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 529428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529429: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52942f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529431: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529436u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529436: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 529439: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52943c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52943d: mov ecx, ebx */
  ecx = ebx;
/* 52943f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529444u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 529447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529449: mov ecx, ebx */
  ecx = ebx;
/* 52944b: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529450u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529450: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529453: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529454: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 52945a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52945b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52945c: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529461u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529461: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529464: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 52946a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52946b: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 529471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529472: call 0x4e281a */
  esp -= 4; W32(esp, 0x529477u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 529477: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52947d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52947f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529483: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x529486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529486: xor eax, eax */
  eax = 0;
/* 529488: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52948b: jmp 0x529490 */
  goto L_529490;
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_52901c(void) {
  LOAD_REGS();
L_52901c: /* 52901c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 52901f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 529024: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 529027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529028: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 52902b: call 0x554df6 */
  esp -= 4; W32(esp, 0x529030u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_529030(); return;
}

void f_529030(void) {
  LOAD_REGS();
L_529030: /* 529030: push 0x56cd20 */
  { uint32_t v = 0x56cd20u; esp -= 4; W32(esp, v); }
/* 529035: push 0x5a6dac */
  { uint32_t v = 0x5a6dacu; esp -= 4; W32(esp, v); }
/* 52903a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52903fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52903f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529042: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529044: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529046: call 0x554df6 */
  esp -= 4; W32(esp, 0x52904bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 52904b: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 52904e: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 529054: cmp ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529057: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 52905a: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 52905e: jge 0x5290f9 */
  if ((sf == of)) goto L_5290f9;
L_529064: /* 529064: cmp dword ptr [esi + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52906a: je 0x529074 */
  if (zf) goto L_529074;
L_52906c: /* 52906c: mov edi, dword ptr [esi + 0x94] */
  edi = R32((uint32_t)(esi + 0x94u));
/* 529072: jmp 0x529079 */
  goto L_529079;
L_529074: /* 529074: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_529079: /* 529079: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52907a: push 0x5a6db4 */
  { uint32_t v = 0x5a6db4u; esp -= 4; W32(esp, v); }
/* 52907f: push 0x5a6dc0 */
  { uint32_t v = 0x5a6dc0u; esp -= 4; W32(esp, v); }
/* 529084: call 0x4e1a8c */
  esp -= 4; W32(esp, 0x529089u); SPILL(); f_4e1a8c(); if (g_unwind) return; RELOAD();
/* 529089: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 52908f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 529091: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529096: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 529097: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x52909au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52909a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52909d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52909f: jne 0x5290f4 */
  if (!zf) goto L_5290f4;
L_5290a1: /* 5290a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5290a2: push 0x5a6dd8 */
  { uint32_t v = 0x5a6dd8u; esp -= 4; W32(esp, v); }
/* 5290a7: push 0x5a6de4 */
  { uint32_t v = 0x5a6de4u; esp -= 4; W32(esp, v); }
/* 5290ac: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5290b1u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 5290b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5290b4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 5290b7: push 0x571080 */
  { uint32_t v = 0x571080u; esp -= 4; W32(esp, v); }
/* 5290bc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 5290bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5290c0: call 0x554df6 */
  esp -= 4; W32(esp, 0x5290c5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5290c5(); return;
L_5290f4: /* 5290f4: mov edi, 3 */
  edi = 0x3u;
L_5290f9: /* 5290f9: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 5290fc: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 5290ff: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 529102: xor eax, eax */
  eax = 0;
L_529104: /* 529104: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529107: jge 0x52910c */
  if ((sf == of)) goto L_52910c;
L_529109: /* 529109: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52910a: jmp 0x529104 */
  goto L_529104;
L_52910c: /* 52910c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 52910e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 529111: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529114: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529119u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 529119: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 52911c: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* 529122: xor eax, eax */
  eax = 0;
L_529124: /* 529124: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529127: jge 0x52912c */
  if ((sf == of)) goto L_52912c;
L_529129: /* 529129: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52912a: jmp 0x529124 */
  goto L_529124;
L_52912c: /* 52912c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52912e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 529131: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529134: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529139u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 529139: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 52913c: lea edi, [esi + 0x6c] */
  edi = (uint32_t)(esi + 0x6cu);
/* 52913f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529141: mov ecx, edi */
  ecx = edi;
/* 529143: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 529146: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 529149: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52914eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52914e: cmp dword ptr [esi + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529151: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 529155: jle 0x529230 */
  if ((zf || sf != of)) goto L_529230;
L_52915b: /* 52915b: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 52915e: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 529164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529165: call 0x4e13cf */
  esp -= 4; W32(esp, 0x52916au); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 52916a: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 52916d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_529170: /* 529170: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 529173: cmp ecx, dword ptr [esi + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529176: jge 0x529230 */
  if ((sf == of)) goto L_529230;
L_52917c: /* 52917c: lea edx, [ebp - 0x128] */
  edx = (uint32_t)(ebp + 0xfffffed8u);
/* 529182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529183: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52918a: call 0x4e1be0 */
  esp -= 4; W32(esp, 0x52918fu); SPILL(); f_4e1be0(); if (g_unwind) return; RELOAD();
/* 52918f: mov eax, dword ptr [ebp - 0x124] */
  eax = R32((uint32_t)(ebp + 0xfffffedcu));
/* 529195: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* 52919b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52919e: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5291a0: je 0x5291b8 */
  if (zf) goto L_5291b8;
L_5291a2: /* 5291a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5291a4: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 5291aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5291ab: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 5291ae: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5291b3u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5291b3: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 5291b6: jmp 0x5291c1 */
  goto L_5291c1;
L_5291b8: /* 5291b8: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 5291bb: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 5291be: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_5291c1: /* 5291c1: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 5291c4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 5291c7: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5291ca: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5291cc: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5291cf: jle 0x5291ed */
  if ((zf || sf != of)) goto L_5291ed;
L_5291d1: /* 5291d1: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5291d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5291d5: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5291d8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5291da: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5291dd: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5291e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5291e3: mov ecx, edi */
  ecx = edi;
/* 5291e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 5291e8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5291edu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5291ed: /* 5291ed: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5291f0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5291f2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 5291f4: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* 5291f7: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 5291fa: xor ebx, ebx */
  ebx = 0;
/* 5291fc: jmp 0x529170 */
  goto L_529170;
L_529230: /* 529230: lea edi, [esi + 0xb4] */
  edi = (uint32_t)(esi + 0xb4u);
/* 529236: mov ecx, edi */
  ecx = edi;
/* 529238: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 52923f: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x529244u); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 529244: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 529247: cmp dword ptr [esi + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52924a: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 52924e: jle 0x5292f1 */
  if ((zf || sf != of)) goto L_5292f1;
L_529254: /* 529254: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 529257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529258: mov ecx, edi */
  ecx = edi;
/* 52925a: call 0x4e13cf */
  esp -= 4; W32(esp, 0x52925fu); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 52925f: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_529262: /* 529262: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 529265: cmp ecx, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529268: jge 0x5292f1 */
  if ((sf == of)) goto L_5292f1;
L_52926e: /* 52926e: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 529271: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 529277: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 52927a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 52927d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52927f: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529282: jle 0x5292a0 */
  if ((zf || sf != of)) goto L_5292a0;
L_529284: /* 529284: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529287: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529288: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52928b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52928d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529290: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 529294: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 529296: mov ecx, edi */
  ecx = edi;
/* 529298: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 52929b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5292a0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5292a0: /* 5292a0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5292a2: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 5292a5: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5292a7: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 5292ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5292ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5292af: call 0x4e1ded */
  esp -= 4; W32(esp, 0x5292b4u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 5292b4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5292b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5292ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5292bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5292be: xor ebx, ebx */
  ebx = 0;
/* 5292c0: jmp 0x529262 */
  goto L_529262;
L_5292f1: /* 5292f1: cmp dword ptr [esi + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5292f4: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5292fb: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 5292ff: jle 0x5293ca */
  if ((zf || sf != of)) goto L_5293ca;
L_529305: /* 529305: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 529308: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529309: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 52930f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529314u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529314: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 529317: jmp 0x529320 */
  goto L_529320;
L_529320: /* 529320: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529323: cmp eax, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529326: jge 0x5293ca */
  if ((sf == of)) goto L_5293ca;
L_52932c: /* 52932c: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 529332: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 529338: lea edi, [esi + 0x84] */
  edi = (uint32_t)(esi + 0x84u);
/* 52933e: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 529341: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529343: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529346: jle 0x529364 */
  if ((zf || sf != of)) goto L_529364;
L_529348: /* 529348: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52934b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52934c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52934f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529351: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529354: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 529358: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 52935b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52935d: mov ecx, edi */
  ecx = edi;
/* 52935f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529364u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529364: /* 529364: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 529366: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 529369: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 52936c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52936e: je 0x529380 */
  if (zf) goto L_529380;
L_529370: /* 529370: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 529377: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 52937e: jmp 0x529382 */
  goto L_529382;
L_529380: /* 529380: xor eax, eax */
  eax = 0;
L_529382: /* 529382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529383: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52938a: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x52938fu); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 52938f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529392: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 529396: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 529399: jmp 0x529320 */
  goto L_529320;
L_5293ca: /* 5293ca: lea ebx, [esi + 0xb4] */
  ebx = (uint32_t)(esi + 0xb4u);
/* 5293d0: mov ecx, ebx */
  ecx = ebx;
/* 5293d2: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5293d9: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x5293deu); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 5293de: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 5293e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5293e4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5293e6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5293e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5293eb: jge 0x5293ef */
  if ((sf == of)) goto L_5293ef;
L_5293ed: /* 5293ed: mov eax, ecx */
  eax = ecx;
L_5293ef: /* 5293ef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5293f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5293f7: push 0x5f77d4 */
  { uint32_t v = 0x5f77d4u; esp -= 4; W32(esp, v); }
/* 5293fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5293fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5293ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5293ff: mov edi, eax */
  edi = eax;
/* 529401: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 529407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529408: call 0x4e2423 */
  esp -= 4; W32(esp, 0x52940du); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 52940d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529412: mov ecx, ebx */
  ecx = ebx;
/* 529414: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529419u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52941c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52941d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52941e: mov ecx, ebx */
  ecx = ebx;
/* 529420: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529425u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529425: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 529428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529429: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52942f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529431: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529436u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529436: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 529439: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52943c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52943d: mov ecx, ebx */
  ecx = ebx;
/* 52943f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529444u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 529447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529449: mov ecx, ebx */
  ecx = ebx;
/* 52944b: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529450u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529450: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529453: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529454: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 52945a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52945b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52945c: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529461u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529461: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529464: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 52946a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52946b: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 529471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529472: call 0x4e281a */
  esp -= 4; W32(esp, 0x529477u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 529477: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52947d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52947f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529483: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x529486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529486: xor eax, eax */
  eax = 0;
/* 529488: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52948b: jmp 0x529490 */
  goto L_529490;
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5290c5(void) {
  LOAD_REGS();
L_5290c5: /* 5290c5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5290c8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5290cd: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 5290d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5290d1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 5290d4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5290d9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5290d9(); return;
}

void f_5290d9(void) {
  LOAD_REGS();
L_5290d9: /* 5290d9: push 0x56cd00 */
  { uint32_t v = 0x56cd00u; esp -= 4; W32(esp, v); }
/* 5290de: push 0x5a6df4 */
  { uint32_t v = 0x5a6df4u; esp -= 4; W32(esp, v); }
/* 5290e3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5290e8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5290e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5290eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5290ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5290ef: call 0x554df6 */
  esp -= 4; W32(esp, 0x5290f4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5290f4: mov edi, 3 */
  edi = 0x3u;
/* 5290f9: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 5290fc: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 5290ff: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 529102: xor eax, eax */
  eax = 0;
L_529104: /* 529104: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529107: jge 0x52910c */
  if ((sf == of)) goto L_52910c;
L_529109: /* 529109: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52910a: jmp 0x529104 */
  goto L_529104;
L_52910c: /* 52910c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 52910e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 529111: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529114: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529119u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 529119: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 52911c: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* 529122: xor eax, eax */
  eax = 0;
L_529124: /* 529124: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529127: jge 0x52912c */
  if ((sf == of)) goto L_52912c;
L_529129: /* 529129: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52912a: jmp 0x529124 */
  goto L_529124;
L_52912c: /* 52912c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52912e: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 529131: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 529134: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529139u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 529139: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 52913c: lea edi, [esi + 0x6c] */
  edi = (uint32_t)(esi + 0x6cu);
/* 52913f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529141: mov ecx, edi */
  ecx = edi;
/* 529143: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 529146: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 529149: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52914eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52914e: cmp dword ptr [esi + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529151: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 529155: jle 0x529230 */
  if ((zf || sf != of)) goto L_529230;
L_52915b: /* 52915b: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 52915e: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 529164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529165: call 0x4e13cf */
  esp -= 4; W32(esp, 0x52916au); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 52916a: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 52916d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_529170: /* 529170: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 529173: cmp ecx, dword ptr [esi + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529176: jge 0x529230 */
  if ((sf == of)) goto L_529230;
L_52917c: /* 52917c: lea edx, [ebp - 0x128] */
  edx = (uint32_t)(ebp + 0xfffffed8u);
/* 529182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529183: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52918a: call 0x4e1be0 */
  esp -= 4; W32(esp, 0x52918fu); SPILL(); f_4e1be0(); if (g_unwind) return; RELOAD();
/* 52918f: mov eax, dword ptr [ebp - 0x124] */
  eax = R32((uint32_t)(ebp + 0xfffffedcu));
/* 529195: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* 52919b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52919e: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5291a0: je 0x5291b8 */
  if (zf) goto L_5291b8;
L_5291a2: /* 5291a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5291a4: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 5291aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5291ab: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 5291ae: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5291b3u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5291b3: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 5291b6: jmp 0x5291c1 */
  goto L_5291c1;
L_5291b8: /* 5291b8: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 5291bb: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 5291be: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_5291c1: /* 5291c1: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 5291c4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 5291c7: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5291ca: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5291cc: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 5291cf: jle 0x5291ed */
  if ((zf || sf != of)) goto L_5291ed;
L_5291d1: /* 5291d1: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5291d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5291d5: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5291d8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5291da: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5291dd: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5291e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5291e3: mov ecx, edi */
  ecx = edi;
/* 5291e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 5291e8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5291edu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5291ed: /* 5291ed: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5291f0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5291f2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 5291f4: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* 5291f7: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 5291fa: xor ebx, ebx */
  ebx = 0;
/* 5291fc: jmp 0x529170 */
  goto L_529170;
L_529230: /* 529230: lea edi, [esi + 0xb4] */
  edi = (uint32_t)(esi + 0xb4u);
/* 529236: mov ecx, edi */
  ecx = edi;
/* 529238: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 52923f: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x529244u); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 529244: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 529247: cmp dword ptr [esi + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52924a: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 52924e: jle 0x5292f1 */
  if ((zf || sf != of)) goto L_5292f1;
L_529254: /* 529254: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 529257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529258: mov ecx, edi */
  ecx = edi;
/* 52925a: call 0x4e13cf */
  esp -= 4; W32(esp, 0x52925fu); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 52925f: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_529262: /* 529262: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 529265: cmp ecx, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529268: jge 0x5292f1 */
  if ((sf == of)) goto L_5292f1;
L_52926e: /* 52926e: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 529271: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 529277: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 52927a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 52927d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52927f: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529282: jle 0x5292a0 */
  if ((zf || sf != of)) goto L_5292a0;
L_529284: /* 529284: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529287: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529288: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52928b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52928d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529290: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 529294: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 529296: mov ecx, edi */
  ecx = edi;
/* 529298: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 52929b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5292a0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5292a0: /* 5292a0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5292a2: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 5292a5: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5292a7: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 5292ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5292ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5292af: call 0x4e1ded */
  esp -= 4; W32(esp, 0x5292b4u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 5292b4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5292b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5292ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5292bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5292be: xor ebx, ebx */
  ebx = 0;
/* 5292c0: jmp 0x529262 */
  goto L_529262;
L_5292f1: /* 5292f1: cmp dword ptr [esi + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5292f4: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5292fb: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 5292ff: jle 0x5293ca */
  if ((zf || sf != of)) goto L_5293ca;
L_529305: /* 529305: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 529308: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529309: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 52930f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529314u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529314: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 529317: jmp 0x529320 */
  goto L_529320;
L_529320: /* 529320: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529323: cmp eax, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529326: jge 0x5293ca */
  if ((sf == of)) goto L_5293ca;
L_52932c: /* 52932c: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 529332: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 529338: lea edi, [esi + 0x84] */
  edi = (uint32_t)(esi + 0x84u);
/* 52933e: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 529341: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529343: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529346: jle 0x529364 */
  if ((zf || sf != of)) goto L_529364;
L_529348: /* 529348: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52934b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52934c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52934f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529351: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529354: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 529358: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 52935b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52935d: mov ecx, edi */
  ecx = edi;
/* 52935f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529364u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529364: /* 529364: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 529366: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 529369: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 52936c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52936e: je 0x529380 */
  if (zf) goto L_529380;
L_529370: /* 529370: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 529377: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 52937e: jmp 0x529382 */
  goto L_529382;
L_529380: /* 529380: xor eax, eax */
  eax = 0;
L_529382: /* 529382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529383: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52938a: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x52938fu); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 52938f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529392: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 529396: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 529399: jmp 0x529320 */
  goto L_529320;
L_5293ca: /* 5293ca: lea ebx, [esi + 0xb4] */
  ebx = (uint32_t)(esi + 0xb4u);
/* 5293d0: mov ecx, ebx */
  ecx = ebx;
/* 5293d2: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5293d9: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x5293deu); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 5293de: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 5293e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5293e4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5293e6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5293e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5293eb: jge 0x5293ef */
  if ((sf == of)) goto L_5293ef;
L_5293ed: /* 5293ed: mov eax, ecx */
  eax = ecx;
L_5293ef: /* 5293ef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5293f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5293f7: push 0x5f77d4 */
  { uint32_t v = 0x5f77d4u; esp -= 4; W32(esp, v); }
/* 5293fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5293fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5293ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5293ff: mov edi, eax */
  edi = eax;
/* 529401: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 529407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529408: call 0x4e2423 */
  esp -= 4; W32(esp, 0x52940du); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 52940d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529412: mov ecx, ebx */
  ecx = ebx;
/* 529414: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529419u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52941c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52941d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52941e: mov ecx, ebx */
  ecx = ebx;
/* 529420: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529425u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529425: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 529428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529429: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52942f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529431: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529436u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529436: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 529439: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52943c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52943d: mov ecx, ebx */
  ecx = ebx;
/* 52943f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529444u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 529447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529449: mov ecx, ebx */
  ecx = ebx;
/* 52944b: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529450u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529450: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529453: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529454: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 52945a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52945b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52945c: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529461u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529461: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529464: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 52946a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52946b: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 529471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529472: call 0x4e281a */
  esp -= 4; W32(esp, 0x529477u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 529477: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52947d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52947f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529483: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x529486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529486: xor eax, eax */
  eax = 0;
/* 529488: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52948b: jmp 0x529490 */
  goto L_529490;
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_529201(void) {
  LOAD_REGS();
L_529201: /* 529201: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 529204: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 529209: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 52920c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52920d: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 529210: call 0x554df6 */
  esp -= 4; W32(esp, 0x529215u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_529215(); return;
}

void f_529215(void) {
  LOAD_REGS();
L_529215: /* 529215: push 0x56cce8 */
  { uint32_t v = 0x56cce8u; esp -= 4; W32(esp, v); }
/* 52921a: push 0x5a6dfc */
  { uint32_t v = 0x5a6dfcu; esp -= 4; W32(esp, v); }
/* 52921f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x529224u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 529224: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52922b: call 0x554df6 */
  esp -= 4; W32(esp, 0x529230u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 529230: lea edi, [esi + 0xb4] */
  edi = (uint32_t)(esi + 0xb4u);
/* 529236: mov ecx, edi */
  ecx = edi;
/* 529238: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 52923f: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x529244u); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 529244: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 529247: cmp dword ptr [esi + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52924a: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 52924e: jle 0x5292f1 */
  if ((zf || sf != of)) goto L_5292f1;
L_529254: /* 529254: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 529257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529258: mov ecx, edi */
  ecx = edi;
/* 52925a: call 0x4e13cf */
  esp -= 4; W32(esp, 0x52925fu); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 52925f: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_529262: /* 529262: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 529265: cmp ecx, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529268: jge 0x5292f1 */
  if ((sf == of)) goto L_5292f1;
L_52926e: /* 52926e: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 529271: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 529277: lea edi, [esi + 0x78] */
  edi = (uint32_t)(esi + 0x78u);
/* 52927a: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 52927d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52927f: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529282: jle 0x5292a0 */
  if ((zf || sf != of)) goto L_5292a0;
L_529284: /* 529284: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529287: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529288: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52928b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52928d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529290: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 529294: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 529296: mov ecx, edi */
  ecx = edi;
/* 529298: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 52929b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5292a0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5292a0: /* 5292a0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5292a2: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 5292a5: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5292a7: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 5292ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5292ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5292af: call 0x4e1ded */
  esp -= 4; W32(esp, 0x5292b4u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 5292b4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5292b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5292ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5292bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5292be: xor ebx, ebx */
  ebx = 0;
/* 5292c0: jmp 0x529262 */
  goto L_529262;
L_5292f1: /* 5292f1: cmp dword ptr [esi + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5292f4: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5292fb: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 5292ff: jle 0x5293ca */
  if ((zf || sf != of)) goto L_5293ca;
L_529305: /* 529305: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 529308: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529309: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 52930f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529314u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529314: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 529317: jmp 0x529320 */
  goto L_529320;
L_529320: /* 529320: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529323: cmp eax, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529326: jge 0x5293ca */
  if ((sf == of)) goto L_5293ca;
L_52932c: /* 52932c: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 529332: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 529338: lea edi, [esi + 0x84] */
  edi = (uint32_t)(esi + 0x84u);
/* 52933e: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 529341: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529343: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529346: jle 0x529364 */
  if ((zf || sf != of)) goto L_529364;
L_529348: /* 529348: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52934b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52934c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52934f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529351: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529354: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 529358: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 52935b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52935d: mov ecx, edi */
  ecx = edi;
/* 52935f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529364u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529364: /* 529364: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 529366: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 529369: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 52936c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52936e: je 0x529380 */
  if (zf) goto L_529380;
L_529370: /* 529370: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 529377: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 52937e: jmp 0x529382 */
  goto L_529382;
L_529380: /* 529380: xor eax, eax */
  eax = 0;
L_529382: /* 529382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529383: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52938a: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x52938fu); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 52938f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529392: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 529396: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 529399: jmp 0x529320 */
  goto L_529320;
L_5293ca: /* 5293ca: lea ebx, [esi + 0xb4] */
  ebx = (uint32_t)(esi + 0xb4u);
/* 5293d0: mov ecx, ebx */
  ecx = ebx;
/* 5293d2: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5293d9: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x5293deu); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 5293de: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 5293e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5293e4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5293e6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5293e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5293eb: jge 0x5293ef */
  if ((sf == of)) goto L_5293ef;
L_5293ed: /* 5293ed: mov eax, ecx */
  eax = ecx;
L_5293ef: /* 5293ef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5293f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5293f7: push 0x5f77d4 */
  { uint32_t v = 0x5f77d4u; esp -= 4; W32(esp, v); }
/* 5293fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5293fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5293ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5293ff: mov edi, eax */
  edi = eax;
/* 529401: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 529407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529408: call 0x4e2423 */
  esp -= 4; W32(esp, 0x52940du); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 52940d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529412: mov ecx, ebx */
  ecx = ebx;
/* 529414: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529419u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52941c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52941d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52941e: mov ecx, ebx */
  ecx = ebx;
/* 529420: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529425u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529425: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 529428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529429: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52942f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529431: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529436u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529436: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 529439: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52943c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52943d: mov ecx, ebx */
  ecx = ebx;
/* 52943f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529444u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 529447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529449: mov ecx, ebx */
  ecx = ebx;
/* 52944b: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529450u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529450: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529453: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529454: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 52945a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52945b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52945c: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529461u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529461: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529464: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 52946a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52946b: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 529471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529472: call 0x4e281a */
  esp -= 4; W32(esp, 0x529477u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 529477: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52947d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52947f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529483: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x529486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529486: xor eax, eax */
  eax = 0;
/* 529488: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52948b: jmp 0x529490 */
  goto L_529490;
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5292c2(void) {
  LOAD_REGS();
L_5292c2: /* 5292c2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 5292c5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5292ca: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5292cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5292ce: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 5292d1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5292d6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5292d6(); return;
}

void f_5292d6(void) {
  LOAD_REGS();
L_5292d6: /* 5292d6: push 0x56ccc4 */
  { uint32_t v = 0x56ccc4u; esp -= 4; W32(esp, v); }
/* 5292db: push 0x5a6e04 */
  { uint32_t v = 0x5a6e04u; esp -= 4; W32(esp, v); }
/* 5292e0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5292e5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5292e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5292e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5292ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5292ec: call 0x554df6 */
  esp -= 4; W32(esp, 0x5292f1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5292f1: cmp dword ptr [esi + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5292f4: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5292fb: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 5292ff: jle 0x5293ca */
  if ((zf || sf != of)) goto L_5293ca;
L_529305: /* 529305: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 529308: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529309: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 52930f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529314u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529314: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 529317: jmp 0x529320 */
  goto L_529320;
L_529320: /* 529320: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529323: cmp eax, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529326: jge 0x5293ca */
  if ((sf == of)) goto L_5293ca;
L_52932c: /* 52932c: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 529332: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 529338: lea edi, [esi + 0x84] */
  edi = (uint32_t)(esi + 0x84u);
/* 52933e: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 529341: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529343: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529346: jle 0x529364 */
  if ((zf || sf != of)) goto L_529364;
L_529348: /* 529348: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52934b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52934c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52934f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529351: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529354: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 529358: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 52935b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52935d: mov ecx, edi */
  ecx = edi;
/* 52935f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529364u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529364: /* 529364: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 529366: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 529369: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 52936c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52936e: je 0x529380 */
  if (zf) goto L_529380;
L_529370: /* 529370: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 529377: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 52937e: jmp 0x529382 */
  goto L_529382;
L_529380: /* 529380: xor eax, eax */
  eax = 0;
L_529382: /* 529382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529383: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52938a: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x52938fu); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 52938f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529392: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 529396: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 529399: jmp 0x529320 */
  goto L_529320;
L_5293ca: /* 5293ca: lea ebx, [esi + 0xb4] */
  ebx = (uint32_t)(esi + 0xb4u);
/* 5293d0: mov ecx, ebx */
  ecx = ebx;
/* 5293d2: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5293d9: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x5293deu); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 5293de: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 5293e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5293e4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5293e6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5293e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5293eb: jge 0x5293ef */
  if ((sf == of)) goto L_5293ef;
L_5293ed: /* 5293ed: mov eax, ecx */
  eax = ecx;
L_5293ef: /* 5293ef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5293f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5293f7: push 0x5f77d4 */
  { uint32_t v = 0x5f77d4u; esp -= 4; W32(esp, v); }
/* 5293fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5293fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5293ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5293ff: mov edi, eax */
  edi = eax;
/* 529401: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 529407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529408: call 0x4e2423 */
  esp -= 4; W32(esp, 0x52940du); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 52940d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529412: mov ecx, ebx */
  ecx = ebx;
/* 529414: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529419u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52941c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52941d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52941e: mov ecx, ebx */
  ecx = ebx;
/* 529420: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529425u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529425: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 529428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529429: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52942f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529431: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529436u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529436: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 529439: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52943c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52943d: mov ecx, ebx */
  ecx = ebx;
/* 52943f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529444u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 529447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529449: mov ecx, ebx */
  ecx = ebx;
/* 52944b: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529450u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529450: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529453: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529454: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 52945a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52945b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52945c: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529461u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529461: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529464: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 52946a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52946b: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 529471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529472: call 0x4e281a */
  esp -= 4; W32(esp, 0x529477u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 529477: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52947d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52947f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529483: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x529486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529486: xor eax, eax */
  eax = 0;
/* 529488: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52948b: jmp 0x529490 */
  goto L_529490;
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_529319(void) {
  LOAD_REGS();
L_529319: /* 529319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_529320: /* 529320: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529323: cmp eax, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529326: jge 0x5293ca */
  if ((sf == of)) goto L_5293ca;
L_52932c: /* 52932c: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 529332: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 529338: lea edi, [esi + 0x84] */
  edi = (uint32_t)(esi + 0x84u);
/* 52933e: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 529341: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529343: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 529346: jle 0x529364 */
  if ((zf || sf != of)) goto L_529364;
L_529348: /* 529348: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 52934b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52934c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52934f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 529351: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 529354: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 529358: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 52935b: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 52935d: mov ecx, edi */
  ecx = edi;
/* 52935f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529364u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529364: /* 529364: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 529366: lea edx, [ebx + ebx*8] */
  edx = (uint32_t)(ebx + ebx*8);
/* 529369: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 52936c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52936e: je 0x529380 */
  if (zf) goto L_529380;
L_529370: /* 529370: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 529377: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 52937e: jmp 0x529382 */
  goto L_529382;
L_529380: /* 529380: xor eax, eax */
  eax = 0;
L_529382: /* 529382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529383: lea eax, [esi + 0xb4] */
  eax = (uint32_t)(esi + 0xb4u);
/* 529389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52938a: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x52938fu); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 52938f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529392: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 529396: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 529399: jmp 0x529320 */
  goto L_529320;
L_5293ca: /* 5293ca: lea ebx, [esi + 0xb4] */
  ebx = (uint32_t)(esi + 0xb4u);
/* 5293d0: mov ecx, ebx */
  ecx = ebx;
/* 5293d2: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5293d9: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x5293deu); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 5293de: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 5293e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5293e4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5293e6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5293e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5293eb: jge 0x5293ef */
  if ((sf == of)) goto L_5293ef;
L_5293ed: /* 5293ed: mov eax, ecx */
  eax = ecx;
L_5293ef: /* 5293ef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5293f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5293f7: push 0x5f77d4 */
  { uint32_t v = 0x5f77d4u; esp -= 4; W32(esp, v); }
/* 5293fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5293fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5293ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5293ff: mov edi, eax */
  edi = eax;
/* 529401: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 529407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529408: call 0x4e2423 */
  esp -= 4; W32(esp, 0x52940du); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 52940d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529412: mov ecx, ebx */
  ecx = ebx;
/* 529414: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529419u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52941c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52941d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52941e: mov ecx, ebx */
  ecx = ebx;
/* 529420: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529425u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529425: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 529428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529429: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52942f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529431: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529436u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529436: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 529439: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52943c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52943d: mov ecx, ebx */
  ecx = ebx;
/* 52943f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529444u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 529447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529449: mov ecx, ebx */
  ecx = ebx;
/* 52944b: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529450u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529450: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529453: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529454: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 52945a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52945b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52945c: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529461u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529461: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529464: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 52946a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52946b: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 529471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529472: call 0x4e281a */
  esp -= 4; W32(esp, 0x529477u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 529477: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52947d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52947f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529483: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x529486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529486: xor eax, eax */
  eax = 0;
/* 529488: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52948b: jmp 0x529490 */
  goto L_529490;
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_52939b(void) {
  LOAD_REGS();
L_52939b: /* 52939b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52939e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5293a3: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5293a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5293a7: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 5293aa: call 0x554df6 */
  esp -= 4; W32(esp, 0x5293afu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5293af(); return;
}

void f_5293af(void) {
  LOAD_REGS();
L_5293af: /* 5293af: push 0x56cca0 */
  { uint32_t v = 0x56cca0u; esp -= 4; W32(esp, v); }
/* 5293b4: push 0x5a6e0c */
  { uint32_t v = 0x5a6e0cu; esp -= 4; W32(esp, v); }
/* 5293b9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5293beu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5293be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5293c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5293c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5293c5: call 0x554df6 */
  esp -= 4; W32(esp, 0x5293cau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5293ca: lea ebx, [esi + 0xb4] */
  ebx = (uint32_t)(esi + 0xb4u);
/* 5293d0: mov ecx, ebx */
  ecx = ebx;
/* 5293d2: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5293d9: call 0x4e1ce4 */
  esp -= 4; W32(esp, 0x5293deu); SPILL(); f_4e1ce4(); if (g_unwind) return; RELOAD();
/* 5293de: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 5293e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5293e4: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5293e6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5293e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5293eb: jge 0x5293ef */
  if ((sf == of)) goto L_5293ef;
L_5293ed: /* 5293ed: mov eax, ecx */
  eax = ecx;
L_5293ef: /* 5293ef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5293f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5293f7: push 0x5f77d4 */
  { uint32_t v = 0x5f77d4u; esp -= 4; W32(esp, v); }
/* 5293fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5293fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5293ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5293ff: mov edi, eax */
  edi = eax;
/* 529401: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 529407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529408: call 0x4e2423 */
  esp -= 4; W32(esp, 0x52940du); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 52940d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 529412: mov ecx, ebx */
  ecx = ebx;
/* 529414: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529419u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52941c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52941d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52941e: mov ecx, ebx */
  ecx = ebx;
/* 529420: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529425u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529425: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 529428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529429: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 52942f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529431: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529436u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529436: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 529439: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52943c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52943d: mov ecx, ebx */
  ecx = ebx;
/* 52943f: call 0x4e13cf */
  esp -= 4; W32(esp, 0x529444u); SPILL(); f_4e13cf(); if (g_unwind) return; RELOAD();
/* 529444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 529447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 529448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529449: mov ecx, ebx */
  ecx = ebx;
/* 52944b: call 0x4e25fe */
  esp -= 4; W32(esp, 0x529450u); SPILL(); f_4e25fe(); if (g_unwind) return; RELOAD();
/* 529450: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 529453: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529454: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 52945a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52945b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52945c: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x529461u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 529461: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529464: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 52946a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52946b: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 529471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 529472: call 0x4e281a */
  esp -= 4; W32(esp, 0x529477u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 529477: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52947d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52947f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 529482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 529483: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x529486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 529486: xor eax, eax */
  eax = 0;
/* 529488: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 52948b: jmp 0x529490 */
  goto L_529490;
L_529490: /* 529490: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 529495: jae 0x5294a1 */
  if (!cf) goto L_5294a1;
L_529497: /* 529497: mov dword ptr [esi + eax*4 + 0xfc], ecx */
  W32((uint32_t)(esi + eax*4 + 0xfcu), ecx);
/* 52949e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52949f: jmp 0x529490 */
  goto L_529490;
L_5294a1: /* 5294a1: xor edi, edi */
  edi = 0;
L_5294a3: /* 5294a3: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5294a9: jge 0x529539 */
  if ((sf == of)) goto L_529539;
L_5294af: /* 5294af: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 5294b5: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5294b8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 5294bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294bf: jge 0x5294d8 */
  if ((sf == of)) goto L_5294d8;
L_5294c1: /* 5294c1: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 5294c4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294c7: mov ecx, edx */
  ecx = edx;
/* 5294c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294cb: mov eax, dword ptr [ecx - 0x14] */
  eax = R32((uint32_t)(ecx + 0xffffffecu));
/* 5294ce: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 5294d3: mov edx, dword ptr [edx - 0x10] */
  edx = R32((uint32_t)(edx + 0xfffffff0u));
/* 5294d6: jmp 0x5294e7 */
  goto L_5294e7;
L_5294d8: /* 5294d8: jle 0x5294e2 */
  if ((zf || sf != of)) goto L_5294e2;
L_5294da: /* 5294da: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5294dd: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5294e0: jmp 0x5294e7 */
  goto L_5294e7;
L_5294e2: /* 5294e2: mov edx, 0x14 */
  edx = 0x14u;
L_5294e7: /* 5294e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5294e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5294eb: jge 0x5294fa */
  if ((sf == of)) goto L_5294fa;
L_5294ed: /* 5294ed: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 5294f0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5294f3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5294f5: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5294f8: jmp 0x529510 */
  goto L_529510;
L_5294fa: /* 5294fa: jle 0x52950b */
  if ((zf || sf != of)) goto L_52950b;
L_5294fc: /* 5294fc: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 5294ff: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 529505: mov eax, dword ptr [eax + ecx*4 - 0x18] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xffffffe8u));
/* 529509: jmp 0x529510 */
  goto L_529510;
L_52950b: /* 52950b: mov eax, 0x2a5 */
  eax = 0x2a5u;
L_529510: /* 529510: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 529513: imul edx, edx, 0x1f */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1fu);
  edx = (uint32_t)r;
  }
/* 529516: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 529519: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52951b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52951d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 529522: mov edx, dword ptr [esi + eax*4 + 0xfc] */
  edx = R32((uint32_t)(esi + eax*4 + 0xfcu));
/* 529529: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 52952c: mov dword ptr [esi + eax*4 + 0xfc], edi */
  W32((uint32_t)(esi + eax*4 + 0xfcu), edi);
/* 529533: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 529534: jmp 0x5294a3 */
  goto L_5294a3;
L_529539: /* 529539: mov ecx, dword ptr [0x69ff64] */
  ecx = R32((uint32_t)(0x69ff64u));
/* 52953f: mov eax, dword ptr [0x69ff68] */
  eax = R32((uint32_t)(0x69ff68u));
/* 529544: mov edi, ecx */
  edi = ecx;
/* 529546: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 529547: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 529549: mov dword ptr [0x69ff64], ecx */
  W32((uint32_t)(0x69ff64u), ecx);
/* 52954f: jle 0x529572 */
  if ((zf || sf != of)) goto L_529572;
L_529551: /* 529551: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 529554: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 529555: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 529558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52955a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 52955d: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 529561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 529563: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 529568: mov dword ptr [0x69ff68], eax */
  W32((uint32_t)(0x69ff68u), eax);
/* 52956d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x529572u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_529572: /* 529572: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 529578: mov dword ptr [ecx + edi*4], esi */
  W32((uint32_t)(ecx + edi*4), esi);
/* 52957b: mov al, byte ptr [esi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xf4u))) & 0xffu);
/* 529581: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 529583: js 0x52958c */
  if (sf) goto L_52958c;
L_529585: /* 529585: mov ecx, esi */
  ecx = esi;
/* 529587: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x52958cu); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
L_52958c: /* 52958c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 529590: mov dword ptr [esi + 0x90], 1 */
  W32((uint32_t)(esi + 0x90u), 0x1u);
/* 52959a: mov eax, esi */
  eax = esi;
/* 52959c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52959d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5295a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5295a5: mov esp, ebp */
  esp = ebp;
/* 5295a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5295a8: ret 0xc */
  esp += 16; SPILL(); return;
}
