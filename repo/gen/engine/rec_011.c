#include "recomp.h"
#include "rec_mod.h"

void f_7198b0(void) {
  LOAD_REGS();
L_7198b0: /* 7198b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7198b1: mov esi, ecx */
  esi = ecx;
/* 7198b3: call 0x6c7d06 */
  esp -= 4; W32(esp, 0x7198b8u); SPILL(); f_6c7d06(); if (g_unwind) return; RELOAD();
/* 7198b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7198bd: je 0x7198cc */
  if (zf) goto L_7198cc;
L_7198bf: /* 7198bf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7198c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7198c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7198c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7198c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7198ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7198cc: /* 7198cc: mov eax, esi */
  eax = esi;
/* 7198ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7198cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7198f0(void) {
  LOAD_REGS();
L_7198f0: /* 7198f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7198f1: mov esi, ecx */
  esi = ecx;
/* 7198f3: call 0x6c52b3 */
  esp -= 4; W32(esp, 0x7198f8u); SPILL(); f_6c52b3(); if (g_unwind) return; RELOAD();
/* 7198f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7198fd: je 0x71990c */
  if (zf) goto L_71990c;
L_7198ff: /* 7198ff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 719904: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 719906: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719909: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x71990cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_71990c: /* 71990c: mov eax, esi */
  eax = esi;
/* 71990e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71990f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719930(void) {
  LOAD_REGS();
L_719930: /* 719930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719931: mov esi, ecx */
  esi = ecx;
/* 719933: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 719936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719937: xor edi, edi */
  edi = 0;
/* 719939: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71993b: jle 0x719955 */
  if ((zf || sf != of)) goto L_719955;
L_71993d: /* 71993d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71993e: xor ebx, ebx */
  ebx = 0;
L_719940: /* 719940: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719942: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 719944: call 0x6c7d06 */
  esp -= 4; W32(esp, 0x719949u); SPILL(); f_6c7d06(); if (g_unwind) return; RELOAD();
/* 719949: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71994c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71994d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 719950: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 719952: jl 0x719940 */
  if ((sf != of)) goto L_719940;
L_719954: /* 719954: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_719955: /* 719955: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 719959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71995a: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71995c: mov ecx, esi */
  ecx = esi;
/* 71995e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x719964u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 719964: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719965: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719966: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719980(void) {
  LOAD_REGS();
L_719980: /* 719980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719981: mov esi, ecx */
  esi = ecx;
/* 719983: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 719986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719987: xor edi, edi */
  edi = 0;
/* 719989: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71998b: jle 0x7199a5 */
  if ((zf || sf != of)) goto L_7199a5;
L_71998d: /* 71998d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71998e: xor ebx, ebx */
  ebx = 0;
L_719990: /* 719990: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719992: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 719994: call 0x6c52b3 */
  esp -= 4; W32(esp, 0x719999u); SPILL(); f_6c52b3(); if (g_unwind) return; RELOAD();
/* 719999: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71999c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71999d: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7199a0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7199a2: jl 0x719990 */
  if ((sf != of)) goto L_719990;
L_7199a4: /* 7199a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7199a5: /* 7199a5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7199a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7199aa: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7199ac: mov ecx, esi */
  ecx = esi;
/* 7199ae: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7199b4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7199b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7199b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7199b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7199d0(void) {
  LOAD_REGS();
L_7199d0: /* 7199d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7199d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7199d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7199d6: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 7199db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7199dd: mov ecx, esi */
  ecx = esi;
/* 7199df: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7199e5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7199e5: mov edi, eax */
  edi = eax;
/* 7199e7: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7199ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7199ee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7199f0: je 0x719a10 */
  if (zf) goto L_719a10;
L_7199f2: /* 7199f2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7199f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7199f7: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 7199fc: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 719a01: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 719a06: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719a08: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719a0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719a0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719a0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719a0d: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x719a10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_719a10: /* 719a10: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719a12: mov eax, edi */
  eax = edi;
/* 719a14: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 719a1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719a1b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 719a1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719a1e: ret  */
  esp += 4; SPILL(); return;
}

void f_719a40(void) {
  LOAD_REGS();
L_719a40: /* 719a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719a41: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 719a45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719a46: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 719a48: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719a4a: mov ecx, esi */
  ecx = esi;
/* 719a4c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x719a52u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 719a52: mov edi, eax */
  edi = eax;
/* 719a54: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 719a59: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 719a5b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 719a5d: je 0x719a7a */
  if (zf) goto L_719a7a;
L_719a5f: /* 719a5f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 719a62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719a64: push 0x6cc68a */
  { uint32_t v = 0x6cc68au; esp -= 4; W32(esp, v); }
/* 719a69: push 0x6c7bc1 */
  { uint32_t v = 0x6c7bc1u; esp -= 4; W32(esp, v); }
/* 719a6e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 719a70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719a72: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719a74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719a75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719a76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719a77: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x719a7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_719a7a: /* 719a7a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719a7c: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 719a7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719a80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719a81: ret  */
  esp += 4; SPILL(); return;
}

void f_719ab0(void) {
  LOAD_REGS();
L_719ab0: /* 719ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719ab1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 719ab5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719ab6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 719ab8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719aba: mov ecx, esi */
  ecx = esi;
/* 719abc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x719ac2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 719ac2: mov edi, eax */
  edi = eax;
/* 719ac4: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 719ac9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 719acb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 719acd: je 0x719aea */
  if (zf) goto L_719aea;
L_719acf: /* 719acf: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 719ad2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719ad4: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 719ad9: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 719ade: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 719ae0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719ae2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719ae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719ae7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x719aeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_719aea: /* 719aea: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 719aec: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 719aef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719af0: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 719af3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719af4: ret  */
  esp += 4; SPILL(); return;
}

void f_719b20(void) {
  LOAD_REGS();
L_719b20: /* 719b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719b21: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 719b25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719b26: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 719b28: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719b2a: mov ecx, esi */
  ecx = esi;
/* 719b2c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x719b32u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 719b32: mov edi, eax */
  edi = eax;
/* 719b34: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 719b39: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 719b3b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 719b3d: je 0x719b5a */
  if (zf) goto L_719b5a;
L_719b3f: /* 719b3f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 719b42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719b44: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 719b49: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 719b4e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 719b50: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719b52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719b54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719b55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 719b57: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x719b5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_719b5a: /* 719b5a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 719b5c: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 719b5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 719b60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719b61: ret  */
  esp += 4; SPILL(); return;
}

void f_719b90(void) {
  LOAD_REGS();
L_719b90: /* 719b90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 719b94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 719b96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719b97: mov esi, ecx */
  esi = ecx;
/* 719b99: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 719b9b: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 719ba2: jne 0x719bbc */
  if (!zf) goto L_719bbc;
L_719ba4: /* 719ba4: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 719ba9: push 0xac3d40 */
  { uint32_t v = 0xac3d40u; esp -= 4; W32(esp, v); }
/* 719bae: push 0xac3d38 */
  { uint32_t v = 0xac3d38u; esp -= 4; W32(esp, v); }
/* 719bb3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x719bb9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 719bb9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_719bbc: /* 719bbc: mov ecx, esi */
  ecx = esi;
/* 719bbe: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x719bc3u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 719bc3: mov eax, esi */
  eax = esi;
/* 719bc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 719bc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_719be0(void) {
  LOAD_REGS();
L_719be0: /* 719be0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 719be1: mov ebp, esp */
  ebp = esp;
/* 719be3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 719be6: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 719be9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 719bea: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 719bed: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 719bf0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 719bf4: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 719bf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 719bf9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 719bfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 719bfd: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 719c03: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 719c0b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 719c0e: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 719c10: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 719c13: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 719c16: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 719c19: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 719c1c: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719c20: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719c22: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719c28: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 719c2c: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719c32: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 719c36: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719c3c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 719c3f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 719c41: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 719c44: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 719c46: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 719c49: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 719c4b: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719c4f: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 719c52: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 719c54: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 719c58: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 719c5b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 719c5d: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 719c5f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 719c61: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 719c64: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 719c68: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 719c6c: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 719c6e: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 719c72: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719c74: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 719c77: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 719c7b: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 719c7e: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 719c82: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719c88: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 719c8c: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 719c90: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719c96: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 719c9a: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719ca0: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 719ca4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 719ca7: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719cad: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 719cb0: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719cb6: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 719cb9: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719cbf: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 719cc3: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 719cc6: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719ccc: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 719ccf: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719cd5: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 719cd8: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 719cde: mov ecx, esi */
  ecx = esi;
/* 719ce0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 719ce2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 719ce5: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719ce9: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 719cec: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 719cef: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 719cf1: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 719cf5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 719cf9: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 719cfd: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 719d01: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 719d04: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 719d06: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 719d0a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 719d0c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 719d0e: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 719d11: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 719d15: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 719d19: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 719d1d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 719d1f: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 719d23: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 719d27: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 719d29: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 719d2b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 719d2d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 719d31: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 719d35: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 719d39: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 719d3b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 719d3f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719d41: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 719d44: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 719d48: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 719d4b: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 719d4f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 719d53: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719d55: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 719d59: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719d5b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 719d5f: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719d61: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719d65: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719d67: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719d69: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 719d6d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719d6f: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 719d73: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719d75: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 719d79: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719d7b: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 719d7f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719d81: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719d83: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 719d87: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719d89: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 719d8d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 719d91: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719d93: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 719d97: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719d99: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 719d9d: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719d9f: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719da3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719da5: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719da7: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 719dab: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719dad: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 719db1: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 719db5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719db7: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 719dbb: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 719dbf: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719dc1: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 719dc5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719dc7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 719dc9: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 719dcd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 719dcf: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 719dd3: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 719dd7: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 719ddb: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 719ddf: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 719de3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719de5: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 719de9: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719ded: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 719df1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 719df5: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 719df9: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 719dfd: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 719e01: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 719e05: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 719e09: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 719e0d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 719e11: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 719e17: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 719e1b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 719e1f: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 719e25: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 719e27: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 719e2b: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 719e31: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 719e35: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 719e39: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719e3b: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 719e3f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719e41: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719e43: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 719e47: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719e49: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 719e4d: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719e4f: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 719e53: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719e55: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 719e59: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719e5b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719e5d: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719e61: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719e63: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 719e67: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 719e69: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 719e6d: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719e6f: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 719e73: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 719e77: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 719e79: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 719e7d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 719e7f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 719e83: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 719e85: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 719e89: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719e8b: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 719e8e: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 719e90: mov edx, esi */
  edx = esi;
/* 719e92: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 719e94: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 719e97: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 719e9b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 719e9e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 719ea0: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719ea2: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 719ea6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 719ea8: mov ecx, edi */
  ecx = edi;
/* 719eaa: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 719eae: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 719eb2: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 719eb6: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 719eb8: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 719ebc: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 719ec0: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 719ec2: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 719ec6: fmul st(7) */
  ST0 = ST0 * STI(7);
/* 719ec8: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 719ecc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719ece: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 719ed0: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 719ed4: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 719ed6: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 719eda: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 719ede: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 719ee0: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 719ee4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 719ee6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 719ee8: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 719eec: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 719ef0: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 719ef4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719ef6: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 719efa: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 719efe: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 719f02: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719f04: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 719f08: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719f0a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 719f0c: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 719f10: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 719f12: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 719f16: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 719f18: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 719f1c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 719f1e: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 719f22: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 719f24: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 719f26: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 719f2a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 719f2c: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 719f30: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 719f34: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 719f36: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 719f3a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 719f3e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 719f40: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 719f44: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 719f46: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x719f4cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 719f4c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 719f4e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 719f51: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 719f54: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 719f57: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 719f59: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 719f5b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 719f5e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 719f61: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 719f64: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 719f67: jle 0x71a06a */
  if ((zf || sf != of)) goto L_71a06a;
L_719f6d: /* 719f6d: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 719f6e: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_719f72: /* 719f72: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 719f76: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 719f79: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 719f7d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 719f81: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 719f85: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 719f89: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 719f8d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 719f91: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 719f95: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 719f99: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 719f9d: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 719fa1: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 719fa5: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 719fa9: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 719fad: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 719fb1: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 719fb5: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 719fb9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 719fbd: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 719fc1: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 719fc5: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 719fc9: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 719fcd: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 719fd1: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 719fd5: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 719fd9: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 719fdd: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 719fe1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 719fe5: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 719fe9: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 719fed: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 719ff1: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 719ff5: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 719ff9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 719ffb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 719ffd: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 719fff: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 71a001: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 71a003: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 71a005: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 71a007: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 71a009: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 71a00c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 71a00e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 71a010: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 71a012: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x71a018u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 71a018: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 71a01c: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 71a020: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 71a024: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 71a028: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a02b: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 71a02f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71a031: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 71a035: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a037: mov ecx, edi */
  ecx = edi;
/* 71a039: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 71a03d: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 71a041: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a047u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a047: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 71a04a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71a04c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 71a04f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71a053: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 71a057: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 71a059: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 71a05c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 71a05d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 71a060: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71a064: jne 0x719f72 */
  if (!zf) goto L_719f72;
L_71a06a: /* 71a06a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 71a06e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a06f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a070: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71a071: mov esp, ebp */
  esp = ebp;
/* 71a073: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71a074: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_71a1b0(void) {
  LOAD_REGS();
L_71a1b0: /* 71a1b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a1b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a1b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a1b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a1b7: mov esi, ecx */
  esi = ecx;
/* 71a1b9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x71a1bfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71a1bf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 71a1c2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 71a1c5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 71a1c8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 71a1cb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 71a1ce: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 71a1d1: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 71a1d4: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71a1d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a1d8: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 71a1db: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 71a1de: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71a1e3u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71a1e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a1e4: mov eax, esi */
  eax = esi;
/* 71a1e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a1e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a200(void) {
  LOAD_REGS();
L_71a200: /* 71a200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a202: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71a204: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a206: mov esi, ecx */
  esi = ecx;
/* 71a208: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a20eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a20e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71a210: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 71a213: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 71a216: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 71a21a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71a21e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 71a220: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 71a224: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 71a227: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71a229: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 71a22c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a22e: mov ecx, edi */
  ecx = edi;
/* 71a230: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 71a233: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a239u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a239: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71a23b: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 71a23e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 71a241: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 71a245: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 71a249: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 71a24b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 71a24f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 71a252: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71a254: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 71a257: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71a25a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a25c: mov ecx, esi */
  ecx = esi;
/* 71a25e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a264u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a264: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71a266: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 71a26a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a26b: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 71a26e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a26f: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_71a2a0(void) {
  LOAD_REGS();
L_71a2a0: /* 71a2a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71a2a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a2a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a2a3: mov ebx, ecx */
  ebx = ecx;
/* 71a2a5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71a2a7: lea esi, [ebx + 0x48] */
  esi = (uint32_t)(ebx + 0x48u);
/* 71a2aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a2ac: mov ecx, esi */
  ecx = esi;
/* 71a2ae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a2b4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a2b4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71a2b6: mov edi, eax */
  edi = eax;
/* 71a2b8: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 71a2bb: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71a2bd: mov ecx, 7 */
  ecx = 0x7u;
/* 71a2c2: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 71a2c6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 71a2c8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71a2ca: lea esi, [ebx + 0x54] */
  esi = (uint32_t)(ebx + 0x54u);
/* 71a2cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a2cf: mov ecx, esi */
  ecx = esi;
/* 71a2d1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a2d7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a2d7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71a2d9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 71a2dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a2de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a2df: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 71a2e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71a2e3: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_71a310(void) {
  LOAD_REGS();
L_71a310: /* 71a310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a311: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a312: mov esi, ecx */
  esi = ecx;
/* 71a314: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71a316: lea edi, [esi + 0x24] */
  edi = (uint32_t)(esi + 0x24u);
/* 71a319: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a31b: mov ecx, edi */
  ecx = edi;
/* 71a31d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a323u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a323: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71a325: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 71a328: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 71a32b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 71a32f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71a333: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 71a335: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 71a339: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 71a33c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71a33e: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* 71a341: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a343: mov ecx, edi */
  ecx = edi;
/* 71a345: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 71a348: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a34eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a34e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71a350: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 71a353: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 71a356: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 71a35a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 71a35e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 71a360: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 71a364: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 71a367: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71a369: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 71a36c: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71a36f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a371: mov ecx, esi */
  ecx = esi;
/* 71a373: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71a379u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71a379: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71a37b: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 71a37f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a380: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 71a383: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a384: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_71a3b0(void) {
  LOAD_REGS();
L_71a3b0: /* 71a3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a3b1: mov esi, ecx */
  esi = ecx;
/* 71a3b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71a3b5: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 71a3b8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71a3ba: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71a3c0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71a3c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71a3c2: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 71a3c5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71a3c7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71a3cdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71a3cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71a3cf: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 71a3d2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71a3d4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71a3dau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71a3da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a3db: ret  */
  esp += 4; SPILL(); return;
}

void f_71a3f0(void) {
  LOAD_REGS();
L_71a3f0: /* 71a3f0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71a3f3: jmp 0x6cbadc */
  SPILL(); f_6cbadc(); return;
}

void f_71a410(void) {
  LOAD_REGS();
L_71a410: /* 71a410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a412: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a416: mov esi, ecx */
  esi = ecx;
/* 71a418: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71a41b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a41c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71a41f: mov dword ptr [esi], 0x9f7fc8 */
  W32((uint32_t)(esi), 0x9f7fc8u);
/* 71a425: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x71a42au); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 71a42a: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 71a42d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 71a430: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 71a433: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 71a436: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 71a439: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 71a43c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a43d: mov eax, esi */
  eax = esi;
/* 71a43f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a440: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a460(void) {
  LOAD_REGS();
L_71a460: /* 71a460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a461: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a462: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a466: mov esi, ecx */
  esi = ecx;
/* 71a468: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71a46b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a46c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71a46f: call 0x6cca95 */
  esp -= 4; W32(esp, 0x71a474u); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 71a474: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 71a477: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 71a47a: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 71a47d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 71a480: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 71a483: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 71a486: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a487: mov eax, esi */
  eax = esi;
/* 71a489: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a48a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a4a0(void) {
  LOAD_REGS();
L_71a4a0: /* 71a4a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a4a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a4a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a4a6: mov esi, ecx */
  esi = ecx;
/* 71a4a8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71a4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a4ac: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71a4af: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x71a4b4u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 71a4b4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 71a4b7: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 71a4ba: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 71a4bd: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 71a4c0: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 71a4c3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 71a4c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a4c7: mov eax, esi */
  eax = esi;
/* 71a4c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a4ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a4e0(void) {
  LOAD_REGS();
L_71a4e0: /* 71a4e0: mov eax, ecx */
  eax = ecx;
/* 71a4e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 71a4e6: mov dword ptr [eax], 0x9f7fe0 */
  W32((uint32_t)(eax), 0x9f7fe0u);
/* 71a4ec: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 71a4ef: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 71a4f2: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71a4f5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71a4f8: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 71a4fb: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 71a4fe: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 71a501: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 71a504: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a520(void) {
  LOAD_REGS();
L_71a520: /* 71a520: mov eax, ecx */
  eax = ecx;
/* 71a522: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 71a526: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 71a529: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 71a52c: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71a52f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71a532: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 71a535: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 71a538: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 71a53b: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 71a53e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a560(void) {
  LOAD_REGS();
L_71a560: /* 71a560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a561: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a562: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a567: mov esi, ecx */
  esi = ecx;
/* 71a569: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x71a56fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71a56f: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71a572: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a573: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 71a576: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x71a57bu); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 71a57b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a57c: mov eax, esi */
  eax = esi;
/* 71a57e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a57f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a5a0(void) {
  LOAD_REGS();
L_71a5a0: /* 71a5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a5a1: mov esi, ecx */
  esi = ecx;
/* 71a5a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a5a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71a5a7: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71a5aa: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71a5b0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71a5b0: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 71a5b7: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 71a5be: mov dword ptr [esi + 0x10], 0x9f7f0c */
  W32((uint32_t)(esi + 0x10u), 0x9f7f0cu);
/* 71a5c5: mov eax, esi */
  eax = esi;
/* 71a5c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a5c8: ret  */
  esp += 4; SPILL(); return;
}

void f_71a5e0(void) {
  LOAD_REGS();
L_71a5e0: /* 71a5e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71a5e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 71a5e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a5e6: mov esi, ecx */
  esi = ecx;
/* 71a5e8: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 71a5ea: mov edx, 1 */
  edx = 0x1u;
/* 71a5ef: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 71a5f1: mov cl, byte ptr [esp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 71a5f5: mov eax, 1 */
  eax = 0x1u;
/* 71a5fa: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 71a5fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a5fe: mov byte ptr [esi + 0xd], cl */
  W8((uint32_t)(esi + 0xdu), (ecx & 0xffu));
/* 71a601: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71a604: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 71a607: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 71a60a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a60b: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 71a611: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 71a614: mov byte ptr [esi + 0xc], bl */
  W8((uint32_t)(esi + 0xcu), (ebx & 0xffu));
/* 71a617: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71a61du); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71a61d: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 71a624: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 71a62b: mov dword ptr [esi + 0x10], 0x9f7f0c */
  W32((uint32_t)(esi + 0x10u), 0x9f7f0cu);
/* 71a632: mov eax, esi */
  eax = esi;
/* 71a634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a635: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71a636: ret 8 */
  esp += 12; SPILL(); return;
}

void f_71a660(void) {
  LOAD_REGS();
L_71a660: /* 71a660: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 71a664: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a665: mov esi, ecx */
  esi = ecx;
/* 71a667: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 71a669: mov edx, 1 */
  edx = 0x1u;
/* 71a66e: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 71a670: mov cl, byte ptr [esp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 71a674: mov byte ptr [esi + 0xc], al */
  W8((uint32_t)(esi + 0xcu), (eax & 0xffu));
/* 71a677: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71a67b: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 71a67e: mov edx, 1 */
  edx = 0x1u;
/* 71a683: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 71a685: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71a687: mov byte ptr [esi + 0xd], cl */
  W8((uint32_t)(esi + 0xdu), (ecx & 0xffu));
/* 71a68a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a68b: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71a68e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 71a694: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 71a697: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71a69du); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71a69d: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 71a6a4: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 71a6ab: mov dword ptr [esi + 0x10], 0x9f7f0c */
  W32((uint32_t)(esi + 0x10u), 0x9f7f0cu);
/* 71a6b2: mov eax, esi */
  eax = esi;
/* 71a6b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a6b5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_71a6e0(void) {
  LOAD_REGS();
L_71a6e0: /* 71a6e0: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71a6e3: jmp 0x6ccd74 */
  SPILL(); f_6ccd74(); return;
}

void f_71a700(void) {
  LOAD_REGS();
L_71a700: /* 71a700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a701: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a702: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a706: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71a708: mov esi, ecx */
  esi = ecx;
/* 71a70a: je 0x71a711 */
  if (zf) goto L_71a711;
L_71a70c: /* 71a70c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 71a70f: jmp 0x71a713 */
  goto L_71a713;
L_71a711: /* 71a711: xor eax, eax */
  eax = 0;
L_71a713: /* 71a713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a714: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71a717: call 0x6cb258 */
  esp -= 4; W32(esp, 0x71a71cu); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 71a71c: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 71a722: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71a725: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71a728: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 71a72b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a72c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71a72f: mov dword ptr [esi], 0x9f7f0c */
  W32((uint32_t)(esi), 0x9f7f0cu);
/* 71a735: mov eax, esi */
  eax = esi;
/* 71a737: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a738: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a750(void) {
  LOAD_REGS();
L_71a750: /* 71a750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a751: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a752: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a756: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71a758: mov esi, ecx */
  esi = ecx;
/* 71a75a: je 0x71a761 */
  if (zf) goto L_71a761;
L_71a75c: /* 71a75c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 71a75f: jmp 0x71a763 */
  goto L_71a763;
L_71a761: /* 71a761: xor eax, eax */
  eax = 0;
L_71a763: /* 71a763: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a764: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71a767: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x71a76cu); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 71a76c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71a76f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71a772: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 71a775: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a776: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71a779: mov eax, esi */
  eax = esi;
/* 71a77b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a77c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a790(void) {
  LOAD_REGS();
L_71a790: /* 71a790: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 71a793: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71a795: jne 0x71a79f */
  if (!zf) goto L_71a79f;
L_71a797: /* 71a797: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 71a79c: ret 4 */
  esp += 8; SPILL(); return;
L_71a79f: /* 71a79f: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 71a7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a7a4: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71a7a7: call 0x6cae89 */
  esp -= 4; W32(esp, 0x71a7acu); SPILL(); f_6cae89(); if (g_unwind) return; RELOAD();
/* 71a7ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71a7ae: je 0x71a7b6 */
  if (zf) goto L_71a7b6;
L_71a7b0: /* 71a7b0: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 71a7b3: ret 4 */
  esp += 8; SPILL(); return;
L_71a7b6: /* 71a7b6: mov eax, 0x20 */
  eax = 0x20u;
/* 71a7bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a7d0(void) {
  LOAD_REGS();
L_71a7d0: /* 71a7d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a7d1: mov esi, ecx */
  esi = ecx;
/* 71a7d3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71a7d6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x71a7dcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 71a7dc: mov eax, esi */
  eax = esi;
/* 71a7de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a7df: ret  */
  esp += 4; SPILL(); return;
}

void f_71a7f0(void) {
  LOAD_REGS();
L_71a7f0: /* 71a7f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71a7f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 71a7f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a7f6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 71a7fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a7fb: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 71a7fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a7ff: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 71a801: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71a804: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a805: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 71a808: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71a809: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a80a: mov ecx, ebx */
  ecx = ebx;
/* 71a80c: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x71a80fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a80f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a810: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x71a815u); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 71a815: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 71a81b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a81f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71a821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a821: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a824: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a825: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71a827u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a827: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a82a: mov ecx, ebx */
  ecx = ebx;
/* 71a82c: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x71a832u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 71a832: cmp eax, 0x5b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71a835: jl 0x71a841 */
  if ((sf != of)) goto L_71a841;
L_71a837: /* 71a837: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 71a83a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a83b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71a83c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71a83eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a83e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71a841: /* 71a841: mov ecx, ebx */
  ecx = ebx;
/* 71a843: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x71a849u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 71a849: cmp eax, 0x6b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71a84c: jl 0x71a876 */
  if ((sf != of)) goto L_71a876;
L_71a84e: /* 71a84e: lea edx, [esi + 0x24] */
  edx = (uint32_t)(esi + 0x24u);
/* 71a851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71a852: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* 71a855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a856: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71a859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a85a: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71a85d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a85e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71a85f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71a861u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a861: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a864: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a865: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71a867u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a867: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a86a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a86b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71a86du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a86d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a871: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71a873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a873: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71a876: /* 71a876: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a877: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a878: mov eax, ebx */
  eax = ebx;
/* 71a87a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71a87b: ret  */
  esp += 4; SPILL(); return;
}

void f_71a8b0(void) {
  LOAD_REGS();
L_71a8b0: /* 71a8b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 71a8b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a8b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a8b6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a8ba: lea ecx, [eax + 0x48] */
  ecx = (uint32_t)(eax + 0x48u);
/* 71a8bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a8be: lea edx, [eax + 0x3c] */
  edx = (uint32_t)(eax + 0x3cu);
/* 71a8c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71a8c2: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* 71a8c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a8c6: lea edx, [eax + 0x34] */
  edx = (uint32_t)(eax + 0x34u);
/* 71a8c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71a8ca: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
/* 71a8cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a8ce: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71a8d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a8d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a8d3: call 0x6c92e1 */
  esp -= 4; W32(esp, 0x71a8d8u); SPILL(); f_6c92e1(); if (g_unwind) return; RELOAD();
/* 71a8d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a8db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a8dc: call 0x6c92e1 */
  esp -= 4; W32(esp, 0x71a8e1u); SPILL(); f_6c92e1(); if (g_unwind) return; RELOAD();
/* 71a8e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a8e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a8e5: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x71a8ebu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 71a8eb: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 71a8f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a8f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a8f5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71a8f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a8f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a8fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a8fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71a8fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a8fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a901: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71a903u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71a903: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71a906: mov eax, edi */
  eax = edi;
/* 71a908: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a909: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a90a: ret  */
  esp += 4; SPILL(); return;
}

void f_71a930(void) {
  LOAD_REGS();
L_71a930: /* 71a930: push 0x6ccd74 */
  { uint32_t v = 0x6ccd74u; esp -= 4; W32(esp, v); }
/* 71a935: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 71a937: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71a939: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71a93c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a93d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x71a942u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 71a942: ret  */
  esp += 4; SPILL(); return;
}

void f_71a960(void) {
  LOAD_REGS();
L_71a960: /* 71a960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a961: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a962: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71a966: push 0x6ccd74 */
  { uint32_t v = 0x6ccd74u; esp -= 4; W32(esp, v); }
/* 71a96b: push 0x6cbf05 */
  { uint32_t v = 0x6cbf05u; esp -= 4; W32(esp, v); }
/* 71a970: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 71a972: mov esi, ecx */
  esi = ecx;
/* 71a974: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71a976: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71a979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71a97a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71a97d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a97e: mov dword ptr [esi], 0x9f8040 */
  W32((uint32_t)(esi), 0x9f8040u);
/* 71a984: call 0x99cb60 */
  esp -= 4; W32(esp, 0x71a989u); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 71a989: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 71a98c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 71a98f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 71a992: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 71a995: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 71a998: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 71a99b: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 71a99e: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 71a9a1: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 71a9a4: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 71a9a7: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 71a9aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71a9ab: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 71a9ae: mov eax, esi */
  eax = esi;
/* 71a9b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71a9b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71a9e0(void) {
  LOAD_REGS();
L_71a9e0: /* 71a9e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71a9e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71a9e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71a9e3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71a9e7: mov ebx, ecx */
  ebx = ecx;
/* 71a9e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71a9ea: mov eax, ebp */
  eax = ebp;
/* 71a9ec: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 71a9ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71a9ef: lea edi, [ebp + 0xc] */
  edi = (uint32_t)(ebp + 0xcu);
/* 71a9f2: lea esi, [ebx + 0x10] */
  esi = (uint32_t)(ebx + 0x10u);
/* 71a9f5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71a9f9: mov dword ptr [esp + 0x18], 2 */
  W32((uint32_t)(esp + 0x18u), 0x2u);
/* 71aa01: jmp 0x71aa07 */
  goto L_71aa07;
L_71aa03: /* 71aa03: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_71aa07: /* 71aa07: lea ecx, [edi - 8] */
  ecx = (uint32_t)(edi + 0xfffffff8u);
/* 71aa0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71aa0c: je 0x71aa12 */
  if (zf) goto L_71aa12;
L_71aa0e: /* 71aa0e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71aa10: jmp 0x71aa14 */
  goto L_71aa14;
L_71aa12: /* 71aa12: xor eax, eax */
  eax = 0;
L_71aa14: /* 71aa14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71aa15: mov ecx, esi */
  ecx = esi;
/* 71aa17: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x71aa1cu); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 71aa1c: mov edx, dword ptr [edi - 4] */
  edx = R32((uint32_t)(edi + 0xfffffffcu));
/* 71aa1f: mov dword ptr [esi - 8], edx */
  W32((uint32_t)(esi + 0xfffffff8u), edx);
/* 71aa22: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71aa24: mov dword ptr [esi - 4], eax */
  W32((uint32_t)(esi + 0xfffffffcu), eax);
/* 71aa27: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 71aa2b: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71aa2e: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71aa31: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 71aa32: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 71aa36: jne 0x71aa03 */
  if (!zf) goto L_71aa03;
L_71aa38: /* 71aa38: mov cl, byte ptr [ebp + 0x34] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x34u))) & 0xffu);
/* 71aa3b: mov byte ptr [ebx + 0x34], cl */
  W8((uint32_t)(ebx + 0x34u), (ecx & 0xffu));
/* 71aa3e: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 71aa41: mov dword ptr [ebx + 0x38], edx */
  W32((uint32_t)(ebx + 0x38u), edx);
/* 71aa44: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 71aa47: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 71aa4a: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* 71aa4d: mov dword ptr [ebx + 0x40], ecx */
  W32((uint32_t)(ebx + 0x40u), ecx);
/* 71aa50: mov edx, dword ptr [ebp + 0x44] */
  edx = R32((uint32_t)(ebp + 0x44u));
/* 71aa53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71aa54: mov dword ptr [ebx + 0x44], edx */
  W32((uint32_t)(ebx + 0x44u), edx);
/* 71aa57: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* 71aa5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71aa5b: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 71aa5e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71aa5f: mov eax, ebx */
  eax = ebx;
/* 71aa61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71aa62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71aa63: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71aaa0(void) {
  LOAD_REGS();
L_71aaa0: /* 71aaa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71aaa2: call 0x6cc52c */
  esp -= 4; W32(esp, 0x71aaa7u); SPILL(); f_6cc52c(); if (g_unwind) return; RELOAD();
/* 71aaa7: ret  */
  esp += 4; SPILL(); return;
}

void f_71aac0(void) {
  LOAD_REGS();
L_71aac0: /* 71aac0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71aac2: push 0x9c2b7b */
  { uint32_t v = 0x9c2b7bu; esp -= 4; W32(esp, v); }
/* 71aac7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71aacd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71aace: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71aad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71aad6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71aad7: mov esi, ecx */
  esi = ecx;
/* 71aad9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71aadd: push 0x6ccd74 */
  { uint32_t v = 0x6ccd74u; esp -= 4; W32(esp, v); }
/* 71aae2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 71aae4: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71aae6: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 71aae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71aaea: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 71aaf2: call 0x99ca3d */
  esp -= 4; W32(esp, 0x71aaf7u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 71aaf7: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 71aafa: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71ab02: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x71ab07u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 71ab07: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71ab0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ab0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ab13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ab16: ret  */
  esp += 4; SPILL(); return;
}

void f_71ab40(void) {
  LOAD_REGS();
L_71ab40: /* 71ab40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71ab42: push 0x9c2b9b */
  { uint32_t v = 0x9c2b9bu; esp -= 4; W32(esp, v); }
/* 71ab47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71ab4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ab4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ab55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ab56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ab57: mov esi, ecx */
  esi = ecx;
/* 71ab59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ab5a: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 71ab5e: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 71ab61: mov dword ptr [esi], 0x9f80a0 */
  W32((uint32_t)(esi), 0x9f80a0u);
/* 71ab67: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71ab6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ab6b: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 71ab6e: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71ab72: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71ab75: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x71ab7au); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 71ab7a: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* 71ab7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71ab7e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 71ab81: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71ab89: call 0x6c9688 */
  esp -= 4; W32(esp, 0x71ab8eu); SPILL(); f_6c9688(); if (g_unwind) return; RELOAD();
/* 71ab8e: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 71ab91: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 71ab94: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 71ab97: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 71ab9a: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 71ab9d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 71aba1: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 71aba4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71aba5: mov eax, esi */
  eax = esi;
/* 71aba7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71aba8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71abaf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71abb2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71abe0(void) {
  LOAD_REGS();
L_71abe0: /* 71abe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71abe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71abe2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71abe6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71abe9: mov esi, ecx */
  esi = ecx;
/* 71abeb: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 71abee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71abef: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 71abf2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71abf5: call 0x6c5eac */
  esp -= 4; W32(esp, 0x71abfau); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 71abfa: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* 71abfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71abfe: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 71ac01: call 0x6cc856 */
  esp -= 4; W32(esp, 0x71ac06u); SPILL(); f_6cc856(); if (g_unwind) return; RELOAD();
/* 71ac06: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 71ac09: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 71ac0c: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 71ac0f: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 71ac12: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 71ac15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ac16: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 71ac19: mov eax, esi */
  eax = esi;
/* 71ac1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ac1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71ac30(void) {
  LOAD_REGS();
L_71ac30: /* 71ac30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71ac31: mov ebp, esp */
  ebp = esp;
/* 71ac33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71ac35: push 0x9c2bb0 */
  { uint32_t v = 0x9c2bb0u; esp -= 4; W32(esp, v); }
/* 71ac3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71ac40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ac41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ac48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71ac4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ac4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ac4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ac4e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 71ac51: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71ac53: mov esi, ecx */
  esi = ecx;
/* 71ac55: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 71ac58: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71ac5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ac5c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71ac5f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71ac66: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 71ac68: call 0x6cbb6d */
  esp -= 4; W32(esp, 0x71ac6du); SPILL(); f_6cbb6d(); if (g_unwind) return; RELOAD();
/* 71ac6d: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 71ac70: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 71ac73: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 71ac76: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 71ac79: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 71ac7c: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 71ac7f: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 71ac82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71ac83: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71ac86: call 0x6c8846 */
  esp -= 4; W32(esp, 0x71ac8bu); SPILL(); f_6c8846(); if (g_unwind) return; RELOAD();
/* 71ac8b: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 71ac8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71ac91: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 71ac94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ac95: mov eax, esi */
  eax = esi;
/* 71ac97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ac98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ac9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71aca0: mov esp, ebp */
  esp = ebp;
/* 71aca2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71aca3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71aca6(void) {
  LOAD_REGS();
L_71aca6: /* 71aca6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71aca9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71acae: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 71acb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71acb2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 71acb5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71acbau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71acba(); return;
}

void f_71acba(void) {
  LOAD_REGS();
L_71acba: /* 71acba: push 0x9f80f4 */
  { uint32_t v = 0x9f80f4u; esp -= 4; W32(esp, v); }
/* 71acbf: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71acc4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71accau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71acca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71accd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71accf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71acd1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71acd6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71acd6: guest_badaddr(0x71acd6); return;
}

void f_71ad10(void) {
  LOAD_REGS();
L_71ad10: /* 71ad10: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71ad13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ad14: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71ad15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ad16: mov ebx, ecx */
  ebx = ecx;
/* 71ad18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ad19: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 71ad1d: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x71ad23u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 71ad23: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 71ad27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ad29: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 71ad2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ad2e: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 71ad36: mov ecx, 0xd */
  ecx = 0xdu;
/* 71ad3b: mov esi, ebp */
  esi = ebp;
/* 71ad3d: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* 71ad41: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 71ad43: mov ecx, dword ptr [0xb7e4dc] */
  ecx = R32((uint32_t)(0xb7e4dcu));
/* 71ad49: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 71ad4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ad4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ad4e: mov ecx, ebx */
  ecx = ebx;
/* 71ad50: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x71ad56u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 71ad56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ad57: mov ecx, ebx */
  ecx = ebx;
/* 71ad59: call dword ptr [esi + 0x10] */
  { uint32_t t = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, 0x71ad5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ad5c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 71ad60: mov edi, ebp */
  edi = ebp;
/* 71ad62: mov ecx, 0xd */
  ecx = 0xdu;
/* 71ad67: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 71ad6b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 71ad6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ad6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ad6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71ad70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ad71: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ad74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71ada0(void) {
  LOAD_REGS();
L_71ada0: /* 71ada0: jmp 0x6c3d46 */
  SPILL(); f_6c3d46(); return;
}

void f_71adc0(void) {
  LOAD_REGS();
L_71adc0: /* 71adc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71adc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71adc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71adc6: mov esi, ecx */
  esi = ecx;
/* 71adc8: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x71adcdu); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 71adcd: mov eax, esi */
  eax = esi;
/* 71adcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71add0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71adf0(void) {
  LOAD_REGS();
L_71adf0: /* 71adf0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 71adf4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71adf6: je 0x71adfd */
  if (zf) goto L_71adfd;
L_71adf8: /* 71adf8: jmp 0x6c2f77 */
  SPILL(); f_6c2f77(); return;
L_71adfd: /* 71adfd: ret  */
  esp += 4; SPILL(); return;
}

void f_71ae10(void) {
  LOAD_REGS();
L_71ae10: /* 71ae10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71ae11: mov ebp, esp */
  ebp = esp;
/* 71ae13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71ae15: push 0x9c2bc0 */
  { uint32_t v = 0x9c2bc0u; esp -= 4; W32(esp, v); }
/* 71ae1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71ae20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ae21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ae28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71ae2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ae2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ae2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ae2e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 71ae31: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71ae33: mov esi, ecx */
  esi = ecx;
/* 71ae35: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 71ae38: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71ae3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ae3c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71ae3f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71ae46: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 71ae48: call 0x6cb99c */
  esp -= 4; W32(esp, 0x71ae4du); SPILL(); f_6cb99c(); if (g_unwind) return; RELOAD();
/* 71ae4d: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* 71ae50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71ae51: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71ae54: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71ae59u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71ae59: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71ae5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ae5d: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71ae60: call 0x6c4246 */
  esp -= 4; W32(esp, 0x71ae65u); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 71ae65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71ae68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ae69: mov eax, esi */
  eax = esi;
/* 71ae6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ae6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ae73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ae74: mov esp, ebp */
  esp = ebp;
/* 71ae76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71ae77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71ae7a(void) {
  LOAD_REGS();
L_71ae7a: /* 71ae7a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71ae7d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71ae82: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 71ae85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ae86: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71ae89: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71ae8eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71ae8e(); return;
}

void f_71ae8e(void) {
  LOAD_REGS();
L_71ae8e: /* 71ae8e: push 0x9f8130 */
  { uint32_t v = 0x9f8130u; esp -= 4; W32(esp, v); }
/* 71ae93: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71ae98: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71ae9eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71ae9e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71aea1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71aea3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71aea5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71aeaau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71aeaa: guest_badaddr(0x71aeaa); return;
}

void f_71aee0(void) {
  LOAD_REGS();
L_71aee0: /* 71aee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71aee1: mov ebp, esp */
  ebp = esp;
/* 71aee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71aee5: push 0x9c2bd0 */
  { uint32_t v = 0x9c2bd0u; esp -= 4; W32(esp, v); }
/* 71aeea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71aef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71aef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71aef8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71aefb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71aefc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71aefd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71aefe: mov esi, ecx */
  esi = ecx;
/* 71af00: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71af03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71af0a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71af0d: xor eax, eax */
  eax = 0;
/* 71af0f: nop  */
L_71af10: /* 71af10: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71af13: jge 0x71af18 */
  if ((sf == of)) goto L_71af18;
L_71af15: /* 71af15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71af16: jmp 0x71af10 */
  goto L_71af10;
L_71af18: /* 71af18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71af1a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71af1c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71af22u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71af22: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71af25: xor eax, eax */
  eax = 0;
L_71af27: /* 71af27: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71af2a: jge 0x71af2f */
  if ((sf == of)) goto L_71af2f;
L_71af2c: /* 71af2c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71af2d: jmp 0x71af27 */
  goto L_71af27;
L_71af2f: /* 71af2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71af31: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71af33: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71af39u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71af39: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71af3c: xor eax, eax */
  eax = 0;
/* 71af3e: mov edi, edi */
  edi = edi;
L_71af40: /* 71af40: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71af43: jge 0x71af48 */
  if ((sf == of)) goto L_71af48;
L_71af45: /* 71af45: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71af46: jmp 0x71af40 */
  goto L_71af40;
L_71af48: /* 71af48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71af4a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71af4c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71af52u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71af52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71af55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71af56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71af57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71af5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71af5f: mov esp, ebp */
  esp = ebp;
/* 71af61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71af62: ret  */
  esp += 4; SPILL(); return;
}

void f_71af63(void) {
  LOAD_REGS();
L_71af63: /* 71af63: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71af66: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71af6b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 71af6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71af6f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71af72: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71af77u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71af77(); return;
}

void f_71af77(void) {
  LOAD_REGS();
L_71af77: /* 71af77: push 0x9f8168 */
  { uint32_t v = 0x9f8168u; esp -= 4; W32(esp, v); }
/* 71af7c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71af81: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71af87u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71af87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71af8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71af8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71af8e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71af93u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71af93: guest_badaddr(0x71af93); return;
}

void f_71afd0(void) {
  LOAD_REGS();
L_71afd0: /* 71afd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71afd1: mov esi, ecx */
  esi = ecx;
/* 71afd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71afd5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71afd8: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 71afda: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71afe0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71afe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71afe2: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71afe5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71afe7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71afedu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71afed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71afef: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71aff2: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x71aff8u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 71aff8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71aff9: ret  */
  esp += 4; SPILL(); return;
}

void f_71b010(void) {
  LOAD_REGS();
L_71b010: /* 71b010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b012: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b016: mov esi, ecx */
  esi = ecx;
/* 71b018: lea eax, [edi + 0x1c] */
  eax = (uint32_t)(edi + 0x1cu);
/* 71b01b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b01c: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71b01f: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71b024u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71b024: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 71b027: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b028: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71b02b: call 0x6c1e6f */
  esp -= 4; W32(esp, 0x71b030u); SPILL(); f_6c1e6f(); if (g_unwind) return; RELOAD();
/* 71b030: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71b033: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b034: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71b037: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x71b03du); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71b03d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b03e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b03f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b060(void) {
  LOAD_REGS();
L_71b060: /* 71b060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b061: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b062: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b066: mov esi, ecx */
  esi = ecx;
/* 71b068: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71b06b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b06c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71b06f: call 0x6c1e6f */
  esp -= 4; W32(esp, 0x71b074u); SPILL(); f_6c1e6f(); if (g_unwind) return; RELOAD();
/* 71b074: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 71b077: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b078: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 71b07b: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71b080u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71b080: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71b083: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b084: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71b087: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x71b08du); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71b08d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b08e: mov eax, esi */
  eax = esi;
/* 71b090: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b091: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b0b0(void) {
  LOAD_REGS();
L_71b0b0: /* 71b0b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71b0b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b0b4: mov esi, ecx */
  esi = ecx;
/* 71b0b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71b0b8: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71b0bb: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 71b0bd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71b0c3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71b0c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71b0c5: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71b0c8: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x71b0ceu); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 71b0ce: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71b0d1: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 71b0d9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71b0dd: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 71b0df: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 71b0e7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71b0eb: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 71b0f3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 71b0f7: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 71b0fa: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 71b0fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b0fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b101: ret  */
  esp += 4; SPILL(); return;
}

void f_71b130(void) {
  LOAD_REGS();
L_71b130: /* 71b130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b132: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b136: mov esi, ecx */
  esi = ecx;
/* 71b138: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71b13b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b13c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71b13f: call 0x6c1e6f */
  esp -= 4; W32(esp, 0x71b144u); SPILL(); f_6c1e6f(); if (g_unwind) return; RELOAD();
/* 71b144: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 71b147: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b148: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71b14b: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x71b151u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71b151: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71b154: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71b156: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71b159: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 71b15b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71b15e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71b161: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 71b164: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b165: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71b168: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b169: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b180(void) {
  LOAD_REGS();
L_71b180: /* 71b180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b181: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b182: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b186: mov esi, ecx */
  esi = ecx;
/* 71b188: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71b18b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b18c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71b18f: call 0x6c1e6f */
  esp -= 4; W32(esp, 0x71b194u); SPILL(); f_6c1e6f(); if (g_unwind) return; RELOAD();
/* 71b194: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 71b197: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b198: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 71b19b: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x71b1a1u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71b1a1: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71b1a4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71b1a6: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 71b1a9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 71b1ab: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 71b1ae: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 71b1b1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 71b1b4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 71b1b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b1b8: mov eax, esi */
  eax = esi;
/* 71b1ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b1bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b1d0(void) {
  LOAD_REGS();
L_71b1d0: /* 71b1d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b1d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b1d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b1d6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71b1d8: mov esi, ecx */
  esi = ecx;
/* 71b1da: je 0x71b1e1 */
  if (zf) goto L_71b1e1;
L_71b1dc: /* 71b1dc: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 71b1df: jmp 0x71b1e3 */
  goto L_71b1e3;
L_71b1e1: /* 71b1e1: xor eax, eax */
  eax = 0;
L_71b1e3: /* 71b1e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b1e4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71b1e7: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71b1ecu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71b1ec: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71b1ef: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71b1f2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 71b1f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b1f6: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71b1f9: mov eax, esi */
  eax = esi;
/* 71b1fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b1fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b210(void) {
  LOAD_REGS();
L_71b210: /* 71b210: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71b211: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b212: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 71b216: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b218: mov ebx, ecx */
  ebx = ecx;
/* 71b21a: call 0x6c3d4b */
  esp -= 4; W32(esp, 0x71b21fu); SPILL(); f_6c3d4b(); if (g_unwind) return; RELOAD();
/* 71b21f: lea eax, [esi + 0x7c] */
  eax = (uint32_t)(esi + 0x7cu);
/* 71b222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b223: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 71b226: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71b22bu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71b22b: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 71b231: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b232: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 71b238: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71b23du); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71b23d: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 71b243: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
/* 71b249: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 71b24f: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 71b255: mov ecx, dword ptr [esi + 0x9c] */
  ecx = R32((uint32_t)(esi + 0x9cu));
/* 71b25b: mov dword ptr [ebx + 0x9c], ecx */
  W32((uint32_t)(ebx + 0x9cu), ecx);
/* 71b261: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* 71b267: mov dword ptr [ebx + 0xa0], edx */
  W32((uint32_t)(ebx + 0xa0u), edx);
/* 71b26d: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 71b273: mov dword ptr [ebx + 0xa4], eax */
  W32((uint32_t)(ebx + 0xa4u), eax);
/* 71b279: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 71b27f: mov dword ptr [ebx + 0xa8], ecx */
  W32((uint32_t)(ebx + 0xa8u), ecx);
/* 71b285: add esi, 0xac */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71b28b: lea edi, [ebx + 0xac] */
  edi = (uint32_t)(ebx + 0xacu);
/* 71b291: mov ecx, 0x1c */
  ecx = 0x1cu;
/* 71b296: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 71b298: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b299: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b29a: mov eax, ebx */
  eax = ebx;
/* 71b29c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71b29d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b2d0(void) {
  LOAD_REGS();
L_71b2d0: /* 71b2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b2d1: mov esi, ecx */
  esi = ecx;
/* 71b2d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71b2d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71b2d7: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71b2da: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71b2e0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71b2e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 71b2e4: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 71b2e7: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 71b2ee: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 71b2f5: mov dword ptr [esi], 0x9f8198 */
  W32((uint32_t)(esi), 0x9f8198u);
/* 71b2fb: mov eax, esi */
  eax = esi;
/* 71b2fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b2fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b320(void) {
  LOAD_REGS();
L_71b320: /* 71b320: jmp 0x6ccd74 */
  SPILL(); f_6ccd74(); return;
}

void f_71b340(void) {
  LOAD_REGS();
L_71b340: /* 71b340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b341: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b342: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71b348: mov esi, ecx */
  esi = ecx;
/* 71b34a: je 0x71b351 */
  if (zf) goto L_71b351;
L_71b34c: /* 71b34c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 71b34f: jmp 0x71b353 */
  goto L_71b353;
L_71b351: /* 71b351: xor eax, eax */
  eax = 0;
L_71b353: /* 71b353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b354: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71b357: call 0x6cb258 */
  esp -= 4; W32(esp, 0x71b35cu); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 71b35c: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 71b362: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71b365: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71b368: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 71b36b: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71b36e: mov dword ptr [esi], 0x9f8198 */
  W32((uint32_t)(esi), 0x9f8198u);
/* 71b374: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 71b377: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b378: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 71b37b: mov eax, esi */
  eax = esi;
/* 71b37d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b37e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b3b0(void) {
  LOAD_REGS();
L_71b3b0: /* 71b3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b3b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b3b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b3b6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71b3b8: mov esi, ecx */
  esi = ecx;
/* 71b3ba: je 0x71b3c1 */
  if (zf) goto L_71b3c1;
L_71b3bc: /* 71b3bc: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 71b3bf: jmp 0x71b3c3 */
  goto L_71b3c3;
L_71b3c1: /* 71b3c1: xor eax, eax */
  eax = 0;
L_71b3c3: /* 71b3c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b3c4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71b3c7: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x71b3ccu); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 71b3cc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71b3cf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 71b3d2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 71b3d5: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71b3d8: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 71b3db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b3dc: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 71b3df: mov eax, esi */
  eax = esi;
/* 71b3e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b3e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b400(void) {
  LOAD_REGS();
L_71b400: /* 71b400: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71b402: push 0x9c2c00 */
  { uint32_t v = 0x9c2c00u; esp -= 4; W32(esp, v); }
/* 71b407: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71b40d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b40e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71b415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b417: mov esi, ecx */
  esi = ecx;
/* 71b419: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71b41d: mov dword ptr [esi], 0x9f81a8 */
  W32((uint32_t)(esi), 0x9f81a8u);
/* 71b423: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 71b42b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x71b431u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 71b431: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 71b434: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 71b439: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x71b43fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 71b43f: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 71b442: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 71b447: call 0x6ccd74 */
  esp -= 4; W32(esp, 0x71b44cu); SPILL(); f_6ccd74(); if (g_unwind) return; RELOAD();
/* 71b44c: mov ecx, esi */
  ecx = esi;
/* 71b44e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71b456: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x71b45cu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 71b45c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71b460: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b461: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71b468: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b46b: ret  */
  esp += 4; SPILL(); return;
}

void f_71b490(void) {
  LOAD_REGS();
L_71b490: /* 71b490: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71b492: push 0x9c2c34 */
  { uint32_t v = 0x9c2c34u; esp -= 4; W32(esp, v); }
/* 71b497: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71b49d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b49e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71b4a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b4a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b4a7: mov esi, ecx */
  esi = ecx;
/* 71b4a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b4aa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 71b4ae: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x71b4b4u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 71b4b4: xor edi, edi */
  edi = 0;
/* 71b4b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71b4b8: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 71b4bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b4bc: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 71b4c0: mov dword ptr [esi], 0x9f81a8 */
  W32((uint32_t)(esi), 0x9f81a8u);
/* 71b4c6: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71b4ccu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71b4cc: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 71b4cf: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 71b4d2: mov dword ptr [esi + 0x28], 0x9f8198 */
  W32((uint32_t)(esi + 0x28u), 0x9f8198u);
/* 71b4d9: mov dword ptr [esi + 0x40], esi */
  W32((uint32_t)(esi + 0x40u), esi);
/* 71b4dc: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 71b4df: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 71b4e4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x71b4eau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 71b4ea: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 71b4ed: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x71b4f3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 71b4f3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 71b4f7: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* 71b4fa: mov dword ptr [esi + 0x58], 0xbf800000 */
  W32((uint32_t)(esi + 0x58u), 0xbf800000u);
/* 71b501: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b502: mov eax, esi */
  eax = esi;
/* 71b504: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b505: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71b50c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b50f: ret  */
  esp += 4; SPILL(); return;
}

void f_71b530(void) {
  LOAD_REGS();
L_71b530: /* 71b530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71b532: push 0x9c2c70 */
  { uint32_t v = 0x9c2c70u; esp -= 4; W32(esp, v); }
/* 71b537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71b53d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b53e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71b545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b546: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71b547: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b548: mov esi, ecx */
  esi = ecx;
/* 71b54a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b54b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71b54f: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x71b555u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 71b555: xor ebx, ebx */
  ebx = 0;
/* 71b557: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71b559: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 71b55c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71b55d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 71b561: mov dword ptr [esi], 0x9f81a8 */
  W32((uint32_t)(esi), 0x9f81a8u);
/* 71b567: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71b56du); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71b56d: mov dword ptr [esi + 0x2c], ebx */
  W32((uint32_t)(esi + 0x2cu), ebx);
/* 71b570: mov dword ptr [esi + 0x30], ebx */
  W32((uint32_t)(esi + 0x30u), ebx);
/* 71b573: mov dword ptr [esi + 0x28], 0x9f8198 */
  W32((uint32_t)(esi + 0x28u), 0x9f8198u);
/* 71b57a: mov dword ptr [esi + 0x40], esi */
  W32((uint32_t)(esi + 0x40u), esi);
/* 71b57d: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 71b580: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 71b585: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x71b58bu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 71b58b: lea edi, [esi + 0x48] */
  edi = (uint32_t)(esi + 0x48u);
/* 71b58e: mov ecx, edi */
  ecx = edi;
/* 71b590: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x71b596u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 71b596: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 71b59a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b59b: mov ecx, edi */
  ecx = edi;
/* 71b59d: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 71b5a2: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x71b5a8u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 71b5a8: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 71b5ac: or ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 71b5af: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 71b5b2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71b5b6: mov dword ptr [esi + 0x5c], ebx */
  W32((uint32_t)(esi + 0x5cu), ebx);
/* 71b5b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b5ba: mov dword ptr [esi + 0x58], 0x3f800000 */
  W32((uint32_t)(esi + 0x58u), 0x3f800000u);
/* 71b5c1: mov eax, esi */
  eax = esi;
/* 71b5c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b5c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71b5c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71b5cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b5cf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_71b610(void) {
  LOAD_REGS();
L_71b610: /* 71b610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71b612: push 0x9c2ca4 */
  { uint32_t v = 0x9c2ca4u; esp -= 4; W32(esp, v); }
/* 71b617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71b61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b61e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71b625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71b627: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b628: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b629: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71b62d: mov esi, ecx */
  esi = ecx;
/* 71b62f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b630: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 71b634: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x71b63au); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 71b63a: xor eax, eax */
  eax = 0;
/* 71b63c: lea ebx, [edi + 0x28] */
  ebx = (uint32_t)(edi + 0x28u);
/* 71b63f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71b641: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 71b645: mov dword ptr [esi], 0x9f81a8 */
  W32((uint32_t)(esi), 0x9f81a8u);
/* 71b64b: je 0x71b650 */
  if (zf) goto L_71b650;
L_71b64d: /* 71b64d: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
L_71b650: /* 71b650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b651: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 71b654: call 0x6cb258 */
  esp -= 4; W32(esp, 0x71b659u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 71b659: mov dword ptr [esi + 0x28], 0x9f401c */
  W32((uint32_t)(esi + 0x28u), 0x9f401cu);
/* 71b660: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71b663: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 71b666: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 71b669: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 71b66c: mov dword ptr [esi + 0x28], 0x9f8198 */
  W32((uint32_t)(esi + 0x28u), 0x9f8198u);
/* 71b673: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 71b676: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 71b679: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 71b67c: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* 71b67f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b680: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 71b683: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 71b688: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 71b68b: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x71b691u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 71b691: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 71b694: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 71b697: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 71b69a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 71b69d: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 71b6a0: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 71b6a3: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 71b6a6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71b6aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b6ab: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 71b6ae: mov eax, esi */
  eax = esi;
/* 71b6b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b6b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71b6b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71b6b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b6bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b6f0(void) {
  LOAD_REGS();
L_71b6f0: /* 71b6f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71b6f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b6f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b6f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71b6f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b6f8: mov esi, ecx */
  esi = ecx;
/* 71b6fa: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x71b700u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71b700: lea ebx, [edi + 0x28] */
  ebx = (uint32_t)(edi + 0x28u);
/* 71b703: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71b705: je 0x71b70c */
  if (zf) goto L_71b70c;
L_71b707: /* 71b707: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 71b70a: jmp 0x71b70e */
  goto L_71b70e;
L_71b70c: /* 71b70c: xor eax, eax */
  eax = 0;
L_71b70e: /* 71b70e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b70f: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 71b712: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x71b717u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 71b717: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71b71a: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 71b71d: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 71b720: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 71b723: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 71b726: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 71b729: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 71b72c: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* 71b72f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b730: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 71b733: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 71b736: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x71b73cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71b73c: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 71b73f: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 71b742: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 71b745: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 71b748: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 71b74b: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 71b74e: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 71b751: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b752: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 71b755: mov eax, esi */
  eax = esi;
/* 71b757: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b758: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71b759: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b780(void) {
  LOAD_REGS();
L_71b780: /* 71b780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b781: mov esi, ecx */
  esi = ecx;
/* 71b783: call 0x6c345e */
  esp -= 4; W32(esp, 0x71b788u); SPILL(); f_6c345e(); if (g_unwind) return; RELOAD();
/* 71b788: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 71b78d: je 0x71b79b */
  if (zf) goto L_71b79b;
L_71b78f: /* 71b78f: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 71b791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b792: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x71b798u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 71b798: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71b79b: /* 71b79b: mov eax, esi */
  eax = esi;
/* 71b79d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b79e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b7c0(void) {
  LOAD_REGS();
L_71b7c0: /* 71b7c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71b7c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 71b7c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 71b7c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b7c9: mov esi, ecx */
  esi = ecx;
/* 71b7cb: je 0x71b7fd */
  if (zf) goto L_71b7fd;
L_71b7cd: /* 71b7cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 71b7d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b7d1: push 0x6c345e */
  { uint32_t v = 0x6c345eu; esp -= 4; W32(esp, v); }
/* 71b7d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 71b7d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b7da: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 71b7dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b7dd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x71b7e2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 71b7e2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 71b7e5: je 0x71b7f5 */
  if (zf) goto L_71b7f5;
L_71b7e7: /* 71b7e7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 71b7ed: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 71b7ef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71b7f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b7f2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x71b7f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_71b7f5: /* 71b7f5: mov eax, edi */
  eax = edi;
/* 71b7f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b7f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b7f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71b7fa: ret 4 */
  esp += 8; SPILL(); return;
L_71b7fd: /* 71b7fd: mov ecx, esi */
  ecx = esi;
/* 71b7ff: call 0x6c345e */
  esp -= 4; W32(esp, 0x71b804u); SPILL(); f_6c345e(); if (g_unwind) return; RELOAD();
/* 71b804: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 71b807: je 0x71b815 */
  if (zf) goto L_71b815;
L_71b809: /* 71b809: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 71b80b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b80c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x71b812u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 71b812: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71b815: /* 71b815: mov eax, esi */
  eax = esi;
/* 71b817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b818: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71b819: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b840(void) {
  LOAD_REGS();
L_71b840: /* 71b840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b841: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b842: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b846: mov esi, ecx */
  esi = ecx;
/* 71b848: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71b84b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b84c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71b84f: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x71b854u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 71b854: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 71b857: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 71b85a: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 71b85d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 71b860: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 71b863: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 71b866: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b867: mov eax, esi */
  eax = esi;
/* 71b869: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b86a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b880(void) {
  LOAD_REGS();
L_71b880: /* 71b880: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 71b884: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 71b887: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b888: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71b88c: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 71b88f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71b890: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71b892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b893: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x71b896u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71b896: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b897: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x71b89cu); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 71b89c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b89f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b8a0: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x71b8a6u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 71b8a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b8a9: ret  */
  esp += 4; SPILL(); return;
}

void f_71b8c0(void) {
  LOAD_REGS();
L_71b8c0: /* 71b8c0: jmp 0x6c3e13 */
  SPILL(); f_6c3e13(); return;
}

void f_71b8e0(void) {
  LOAD_REGS();
L_71b8e0: /* 71b8e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71b8e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b8e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b8e6: mov esi, ecx */
  esi = ecx;
/* 71b8e8: call 0x6cb258 */
  esp -= 4; W32(esp, 0x71b8edu); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 71b8ed: mov eax, esi */
  eax = esi;
/* 71b8ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b8f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b910(void) {
  LOAD_REGS();
L_71b910: /* 71b910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b911: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b912: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 71b916: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71b918: mov esi, ecx */
  esi = ecx;
/* 71b91a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 71b91d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b91e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71b921: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 71b923: call 0x6c4246 */
  esp -= 4; W32(esp, 0x71b928u); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 71b928: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 71b92b: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 71b92e: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 71b931: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 71b934: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b935: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 71b938: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 71b93b: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x71b941u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 71b941: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 71b944: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 71b947: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 71b94a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 71b94d: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 71b950: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 71b953: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 71b956: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71b957: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 71b95a: mov eax, esi */
  eax = esi;
/* 71b95c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b95d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71b980(void) {
  LOAD_REGS();
L_71b980: /* 71b980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71b982: push 0x9c2cc9 */
  { uint32_t v = 0x9c2cc9u; esp -= 4; W32(esp, v); }
/* 71b987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71b98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b98e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71b995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71b996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b997: mov esi, ecx */
  esi = ecx;
/* 71b999: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71b99d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71b9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71b9a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71b9a3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71b9ab: call 0x6cd00d */
  esp -= 4; W32(esp, 0x71b9b0u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 71b9b0: mov ecx, esi */
  ecx = esi;
/* 71b9b2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71b9ba: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71b9c0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71b9c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71b9c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71b9c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71b9cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71b9cf: ret  */
  esp += 4; SPILL(); return;
}

void f_71b9f0(void) {
  LOAD_REGS();
L_71b9f0: /* 71b9f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71b9f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71b9f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71b9f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71b9f7: mov esi, ecx */
  esi = ecx;
/* 71b9f9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71b9fb: je 0x71ba41 */
  if (zf) goto L_71ba41;
L_71b9fd: /* 71b9fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71ba00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ba01: call 0x6ccbdf */
  esp -= 4; W32(esp, 0x71ba06u); SPILL(); f_6ccbdf(); if (g_unwind) return; RELOAD();
/* 71ba06: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71ba09: xor ebx, ebx */
  ebx = 0;
/* 71ba0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71ba0d: jle 0x71ba41 */
  if ((zf || sf != of)) goto L_71ba41;
L_71ba0f: /* 71ba0f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71ba10: xor ebp, ebp */
  ebp = 0;
L_71ba12: /* 71ba12: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71ba14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71ba16: mov ecx, esi */
  ecx = esi;
/* 71ba18: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71ba1eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71ba1e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71ba20: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 71ba23: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 71ba26: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71ba28: je 0x71ba35 */
  if (zf) goto L_71ba35;
L_71ba2a: /* 71ba2a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71ba2c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71ba2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ba2f: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x71ba35u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_71ba35: /* 71ba35: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71ba38: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71ba39: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71ba3c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ba3e: jl 0x71ba12 */
  if ((sf != of)) goto L_71ba12;
L_71ba40: /* 71ba40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71ba41: /* 71ba41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ba42: mov eax, esi */
  eax = esi;
/* 71ba44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ba45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ba46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71ba70(void) {
  LOAD_REGS();
L_71ba70: /* 71ba70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71ba74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ba75: mov esi, ecx */
  esi = ecx;
/* 71ba77: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71ba79: je 0x71ba89 */
  if (zf) goto L_71ba89;
L_71ba7b: /* 71ba7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ba7c: call 0x6c3d19 */
  esp -= 4; W32(esp, 0x71ba81u); SPILL(); f_6c3d19(); if (g_unwind) return; RELOAD();
/* 71ba81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ba82: mov ecx, esi */
  ecx = esi;
/* 71ba84: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x71ba89u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
L_71ba89: /* 71ba89: mov eax, esi */
  eax = esi;
/* 71ba8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ba8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71baa0(void) {
  LOAD_REGS();
L_71baa0: /* 71baa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71baa1: mov ebp, esp */
  ebp = esp;
/* 71baa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71baa5: push 0x9c2ce0 */
  { uint32_t v = 0x9c2ce0u; esp -= 4; W32(esp, v); }
/* 71baaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71bab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71bab8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71babb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71babc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71babf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71bac0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71bac3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bac4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71bac7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71bac9: xor edi, edi */
  edi = 0;
/* 71bacb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bacc: mov ecx, esi */
  ecx = esi;
/* 71bace: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 71bad1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71bad7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71bad7: mov ecx, ebx */
  ecx = ebx;
/* 71bad9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71badfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71badf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71bae1: je 0x71bb31 */
  if (zf) goto L_71bb31;
L_71bae3: /* 71bae3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71bae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bae7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bae8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71baeeu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71baee: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71baf1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71baf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71baf5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71baf7: mov ecx, esi */
  ecx = esi;
/* 71baf9: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71baffu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71baff: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 71bb02: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
L_71bb08: /* 71bb08: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71bb0b: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71bb0e: jge 0x71bb58 */
  if ((sf == of)) goto L_71bb58;
L_71bb10: /* 71bb10: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71bb12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71bb14: mov ecx, esi */
  ecx = esi;
/* 71bb16: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71bb1cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71bb1c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71bb1e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71bb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bb22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bb23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71bb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71bb25: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71bb28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bb2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71bb2c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71bb2f: jmp 0x71bb08 */
  goto L_71bb08;
L_71bb31: /* 71bb31: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 71bb34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bb35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bb36: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71bb3cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71bb3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bb3f: nop  */
L_71bb40: /* 71bb40: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71bb43: jge 0x71bb58 */
  if ((sf == of)) goto L_71bb58;
L_71bb45: /* 71bb45: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71bb47: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 71bb4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bb4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bb4c: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x71bb52u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 71bb52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bb55: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71bb56: jmp 0x71bb40 */
  goto L_71bb40;
L_71bb58: /* 71bb58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71bb5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71bb5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71bb5d: mov eax, ebx */
  eax = ebx;
/* 71bb5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71bb66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71bb67: mov esp, ebp */
  esp = ebp;
/* 71bb69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71bb6a: ret  */
  esp += 4; SPILL(); return;
}

void f_71bb6b(void) {
  LOAD_REGS();
L_71bb6b: /* 71bb6b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 71bb6e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71bb73: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 71bb76: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71bb77: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 71bb7a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71bb7fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71bb7f(); return;
}

void f_71bb7f(void) {
  LOAD_REGS();
L_71bb7f: /* 71bb7f: push 0x9f8230 */
  { uint32_t v = 0x9f8230u; esp -= 4; W32(esp, v); }
/* 71bb84: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71bb89: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71bb8fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71bb8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bb92: xor edi, edi */
  edi = 0;
/* 71bb94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bb95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bb96: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71bb9bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71bb9b: guest_badaddr(0x71bb9b); return;
}

void f_71bbe0(void) {
  LOAD_REGS();
L_71bbe0: /* 71bbe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71bbe2: push 0x9c2cf9 */
  { uint32_t v = 0x9c2cf9u; esp -= 4; W32(esp, v); }
/* 71bbe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71bbed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bbee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71bbf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71bbf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71bbf7: mov esi, ecx */
  esi = ecx;
/* 71bbf9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71bbfd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71bc00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bc01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71bc03: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71bc0b: call 0x6cb109 */
  esp -= 4; W32(esp, 0x71bc10u); SPILL(); f_6cb109(); if (g_unwind) return; RELOAD();
/* 71bc10: mov ecx, esi */
  ecx = esi;
/* 71bc12: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71bc1a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71bc20u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71bc20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71bc24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71bc25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71bc2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bc2f: ret  */
  esp += 4; SPILL(); return;
}

void f_71bc50(void) {
  LOAD_REGS();
L_71bc50: /* 71bc50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bc51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71bc52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bc53: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71bc57: mov esi, ecx */
  esi = ecx;
/* 71bc59: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71bc5b: je 0x71bc9d */
  if (zf) goto L_71bc9d;
L_71bc5d: /* 71bc5d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71bc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bc61: call 0x6c8477 */
  esp -= 4; W32(esp, 0x71bc66u); SPILL(); f_6c8477(); if (g_unwind) return; RELOAD();
/* 71bc66: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71bc69: xor ebx, ebx */
  ebx = 0;
/* 71bc6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71bc6d: jle 0x71bc9d */
  if ((zf || sf != of)) goto L_71bc9d;
L_71bc6f: /* 71bc6f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71bc70: xor ebp, ebp */
  ebp = 0;
L_71bc72: /* 71bc72: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 71bc74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71bc76: mov ecx, esi */
  ecx = esi;
/* 71bc78: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71bc7eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71bc7e: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 71bc81: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71bc83: je 0x71bc91 */
  if (zf) goto L_71bc91;
L_71bc85: /* 71bc85: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71bc87: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71bc89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71bc8a: mov ecx, eax */
  ecx = eax;
/* 71bc8c: call 0x6cc75c */
  esp -= 4; W32(esp, 0x71bc91u); SPILL(); f_6cc75c(); if (g_unwind) return; RELOAD();
L_71bc91: /* 71bc91: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71bc94: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71bc95: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71bc98: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71bc9a: jl 0x71bc72 */
  if ((sf != of)) goto L_71bc72;
L_71bc9c: /* 71bc9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71bc9d: /* 71bc9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71bc9e: mov eax, esi */
  eax = esi;
/* 71bca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71bca1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71bca2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71bcd0(void) {
  LOAD_REGS();
L_71bcd0: /* 71bcd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71bcd2: push 0x9c2d19 */
  { uint32_t v = 0x9c2d19u; esp -= 4; W32(esp, v); }
/* 71bcd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71bcdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bcde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71bce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71bce6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bce7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71bce8: mov esi, ecx */
  esi = ecx;
/* 71bcea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bceb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71bcef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71bcf2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71bcf4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71bcfa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71bd02: jge 0x71bd18 */
  if ((sf == of)) goto L_71bd18;
L_71bd04: /* 71bd04: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71bd09: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71bd0e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71bd13: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71bd15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71bd15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71bd18: /* 71bd18: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71bd1b: jle 0x71bd31 */
  if ((zf || sf != of)) goto L_71bd31;
L_71bd1d: /* 71bd1d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71bd22: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71bd27: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71bd2c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71bd2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71bd2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71bd31: /* 71bd31: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71bd33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bd34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71bd36: mov ecx, esi */
  ecx = esi;
/* 71bd38: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71bd3eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71bd3e: mov ecx, esi */
  ecx = esi;
/* 71bd40: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71bd48: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71bd4eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71bd4e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71bd52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71bd53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71bd54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71bd55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71bd5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bd5f: ret  */
  esp += 4; SPILL(); return;
}

void f_71bd90(void) {
  LOAD_REGS();
L_71bd90: /* 71bd90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71bd91: mov ebp, esp */
  ebp = esp;
/* 71bd93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71bd95: push 0x9c2d30 */
  { uint32_t v = 0x9c2d30u; esp -= 4; W32(esp, v); }
/* 71bd9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71bda0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bda1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71bda8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71bdab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bdac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71bdaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71bdb0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71bdb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bdb4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71bdb7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71bdb9: xor edi, edi */
  edi = 0;
/* 71bdbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bdbc: mov ecx, esi */
  ecx = esi;
/* 71bdbe: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 71bdc1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71bdc7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71bdc7: mov ecx, ebx */
  ecx = ebx;
/* 71bdc9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71bdcfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71bdcf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71bdd1: je 0x71be4f */
  if (zf) goto L_71be4f;
L_71bdd3: /* 71bdd3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71bdd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bdd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bdd8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71bddeu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71bdde: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71bde1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bde4: xor eax, eax */
  eax = 0;
L_71bde6: /* 71bde6: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71bde9: jge 0x71bdee */
  if ((sf == of)) goto L_71bdee;
L_71bdeb: /* 71bdeb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71bdec: jmp 0x71bde6 */
  goto L_71bde6;
L_71bdee: /* 71bdee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71bdef: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71bdf1: mov ecx, esi */
  ecx = esi;
/* 71bdf3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71bdf9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71bdf9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 71bdfc: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
L_71be02: /* 71be02: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71be05: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71be08: jge 0x71be97 */
  if ((sf == of)) goto L_71be97;
L_71be0e: /* 71be0e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71be10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71be12: mov ecx, esi */
  ecx = esi;
/* 71be14: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71be1au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71be1a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 71be1d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 71be20: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 71be22: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 71be25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71be26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71be27: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71be29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71be29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71be2c: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 71be2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71be30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71be31: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71be33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71be33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71be36: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71be39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71be3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71be3b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71be3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71be3d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71be40: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71be43: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71be46: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71be49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71be4a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71be4d: jmp 0x71be02 */
  goto L_71be02;
L_71be4f: /* 71be4f: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 71be52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71be53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71be54: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71be5au); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71be5a: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 71be60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71be63: /* 71be63: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71be66: jge 0x71be94 */
  if ((sf == of)) goto L_71be94;
L_71be68: /* 71be68: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71be6a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 71be6d: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 71be70: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 71be73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71be74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71be75: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71be77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71be77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71be7a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 71be7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71be7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71be7f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71be81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71be81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71be84: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71be87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71be88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71be89: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71be8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71be8b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71be8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71be91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71be92: jmp 0x71be63 */
  goto L_71be63;
L_71be94: /* 71be94: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_71be97: /* 71be97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71be9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71be9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71be9c: mov eax, ebx */
  eax = ebx;
/* 71be9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71bea5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71bea6: mov esp, ebp */
  esp = ebp;
/* 71bea8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71bea9: ret  */
  esp += 4; SPILL(); return;
}

void f_71beaa(void) {
  LOAD_REGS();
L_71beaa: /* 71beaa: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 71bead: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71beb2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 71beb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71beb6: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 71beb9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71bebeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71bebe(); return;
}

void f_71bebe(void) {
  LOAD_REGS();
L_71bebe: /* 71bebe: push 0x9f8248 */
  { uint32_t v = 0x9f8248u; esp -= 4; W32(esp, v); }
/* 71bec3: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71bec8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71beceu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71bece: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bed1: xor edi, edi */
  edi = 0;
/* 71bed3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bed4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bed5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71bedau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71beda: guest_badaddr(0x71beda); return;
}

void f_71bf40(void) {
  LOAD_REGS();
L_71bf40: /* 71bf40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71bf42: push 0x9c2d49 */
  { uint32_t v = 0x9c2d49u; esp -= 4; W32(esp, v); }
/* 71bf47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71bf4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71bf4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71bf55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71bf56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71bf57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71bf58: mov esi, ecx */
  esi = ecx;
/* 71bf5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bf5b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71bf5f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71bf62: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71bf64: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71bf6a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71bf72: jge 0x71bf88 */
  if ((sf == of)) goto L_71bf88;
L_71bf74: /* 71bf74: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71bf79: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71bf7e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71bf83: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71bf85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71bf85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71bf88: /* 71bf88: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71bf8b: jle 0x71bfa1 */
  if ((zf || sf != of)) goto L_71bfa1;
L_71bf8d: /* 71bf8d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71bf92: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71bf97: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71bf9c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71bf9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71bf9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71bfa1: /* 71bfa1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71bfa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71bfa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71bfa6: mov ecx, esi */
  ecx = esi;
/* 71bfa8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71bfaeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71bfae: mov ecx, esi */
  ecx = esi;
/* 71bfb0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71bfb8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71bfbeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71bfbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71bfc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71bfc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71bfc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71bfc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71bfcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71bfcf: ret  */
  esp += 4; SPILL(); return;
}

void f_71c000(void) {
  LOAD_REGS();
L_71c000: /* 71c000: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c002: push 0x9c2d69 */
  { uint32_t v = 0x9c2d69u; esp -= 4; W32(esp, v); }
/* 71c007: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c00d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c00e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c016: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c017: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c018: mov esi, ecx */
  esi = ecx;
/* 71c01a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c01b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71c01f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71c022: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c024: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71c02a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71c032: jge 0x71c048 */
  if ((sf == of)) goto L_71c048;
L_71c034: /* 71c034: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71c039: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c03e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71c043: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c045u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c045: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c048: /* 71c048: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c04b: jle 0x71c061 */
  if ((zf || sf != of)) goto L_71c061;
L_71c04d: /* 71c04d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71c052: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c057: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71c05c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c05eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c05e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c061: /* 71c061: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71c063: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c066: mov ecx, esi */
  ecx = esi;
/* 71c068: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71c06eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71c06e: mov ecx, esi */
  ecx = esi;
/* 71c070: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71c078: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71c07eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71c07e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71c082: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c083: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c084: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c085: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c08c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c08f: ret  */
  esp += 4; SPILL(); return;
}

void f_71c0c0(void) {
  LOAD_REGS();
L_71c0c0: /* 71c0c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c0c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c0c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c0c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71c0c7: mov esi, ecx */
  esi = ecx;
/* 71c0c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71c0cb: je 0x71c11d */
  if (zf) goto L_71c11d;
L_71c0cd: /* 71c0cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c0d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c0d1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71c0d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71c0d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71c0d9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c0dc: xor ebx, ebx */
  ebx = 0;
/* 71c0de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c0e0: jle 0x71c11d */
  if ((zf || sf != of)) goto L_71c11d;
L_71c0e2: /* 71c0e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71c0e3: xor ebp, ebp */
  ebp = 0;
L_71c0e5: /* 71c0e5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71c0e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71c0e9: mov ecx, esi */
  ecx = esi;
/* 71c0eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71c0f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71c0f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71c0f3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 71c0f6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71c0f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71c0fb: je 0x71c111 */
  if (zf) goto L_71c111;
L_71c0fd: /* 71c0fd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71c0ff: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71c101: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 71c103: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 71c105: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 71c108: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 71c10b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 71c10e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_71c111: /* 71c111: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c114: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71c115: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71c118: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c11a: jl 0x71c0e5 */
  if ((sf != of)) goto L_71c0e5;
L_71c11c: /* 71c11c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71c11d: /* 71c11d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c11e: mov eax, esi */
  eax = esi;
/* 71c120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c121: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c122: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71c150(void) {
  LOAD_REGS();
L_71c150: /* 71c150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c152: push 0x9c2d89 */
  { uint32_t v = 0x9c2d89u; esp -= 4; W32(esp, v); }
/* 71c157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c15e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c166: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c167: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71c168: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c169: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c16a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 71c16e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c171: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71c173: mov esi, ecx */
  esi = ecx;
/* 71c175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c176: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 71c17a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71c180u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71c180: xor ebx, ebx */
  ebx = 0;
/* 71c182: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 71c185: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c188: xor ebp, ebp */
  ebp = 0;
/* 71c18a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c18c: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 71c190: jle 0x71c1d9 */
  if ((zf || sf != of)) goto L_71c1d9;
L_71c192: /* 71c192: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71c194: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71c196: mov ecx, esi */
  ecx = esi;
/* 71c198: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71c19eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71c19e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 71c1a1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71c1a3: mov ecx, eax */
  ecx = eax;
/* 71c1a5: je 0x71c1ce */
  if (zf) goto L_71c1ce;
L_71c1a7: /* 71c1a7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71c1a9: mov edx, dword ptr [eax + ebx] */
  edx = R32((uint32_t)(eax + ebx));
/* 71c1ac: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71c1ae: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 71c1b0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 71c1b3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 71c1b6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 71c1b9: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 71c1bc: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 71c1bf: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71c1c2: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 71c1c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c1c6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71c1c9: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x71c1ceu); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
L_71c1ce: /* 71c1ce: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c1d1: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 71c1d2: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 71c1d5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c1d7: jl 0x71c192 */
  if ((sf != of)) goto L_71c192;
L_71c1d9: /* 71c1d9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 71c1dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c1de: mov eax, esi */
  eax = esi;
/* 71c1e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c1e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71c1e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c1e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c1ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c1ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71c220(void) {
  LOAD_REGS();
L_71c220: /* 71c220: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c222: push 0x9c2da9 */
  { uint32_t v = 0x9c2da9u; esp -= 4; W32(esp, v); }
/* 71c227: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c22d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c22e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c235: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c236: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c237: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c238: mov esi, ecx */
  esi = ecx;
/* 71c23a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c23b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71c23f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71c242: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c244: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71c24a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71c252: jge 0x71c268 */
  if ((sf == of)) goto L_71c268;
L_71c254: /* 71c254: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71c259: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c25e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71c263: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c265u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c265: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c268: /* 71c268: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c26b: jle 0x71c281 */
  if ((zf || sf != of)) goto L_71c281;
L_71c26d: /* 71c26d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71c272: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c277: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71c27c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c27eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c27e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c281: /* 71c281: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71c283: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c284: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c286: mov ecx, esi */
  ecx = esi;
/* 71c288: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71c28eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71c28e: mov ecx, esi */
  ecx = esi;
/* 71c290: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71c298: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71c29eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71c29e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71c2a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c2a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c2a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c2a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c2ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c2af: ret  */
  esp += 4; SPILL(); return;
}

void f_71c2e0(void) {
  LOAD_REGS();
L_71c2e0: /* 71c2e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c2e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c2e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c2e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71c2e7: mov esi, ecx */
  esi = ecx;
/* 71c2e9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71c2eb: je 0x71c326 */
  if (zf) goto L_71c326;
L_71c2ed: /* 71c2ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c2f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c2f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71c2f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71c2f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71c2f9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c2fc: xor ebx, ebx */
  ebx = 0;
/* 71c2fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c300: jle 0x71c326 */
  if ((zf || sf != of)) goto L_71c326;
L_71c302: /* 71c302: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71c304: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71c306: mov ecx, esi */
  ecx = esi;
/* 71c308: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71c30eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71c30e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71c310: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71c313: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71c315: je 0x71c31e */
  if (zf) goto L_71c31e;
L_71c317: /* 71c317: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71c319: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71c31c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71c31e: /* 71c31e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c321: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71c322: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c324: jl 0x71c302 */
  if ((sf != of)) goto L_71c302;
L_71c326: /* 71c326: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c327: mov eax, esi */
  eax = esi;
/* 71c329: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c32a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c32b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71c350(void) {
  LOAD_REGS();
L_71c350: /* 71c350: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 71c355: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c356: mov esi, ecx */
  esi = ecx;
/* 71c358: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 71c35a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71c35c: je 0x71c37f */
  if (zf) goto L_71c37f;
L_71c35e: /* 71c35e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71c361: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71c363: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 71c368: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 71c36d: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 71c372: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c374: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c375: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 71c378: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c37a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c37b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c37c: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x71c37fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_71c37f: /* 71c37f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71c383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c384: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 71c389: mov ecx, esi */
  ecx = esi;
/* 71c38b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71c391u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71c391: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c392: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71c3c0(void) {
  LOAD_REGS();
L_71c3c0: /* 71c3c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71c3c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71c3c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c3c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c3c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c3ca: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 71c3cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c3d0: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 71c3d4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71c3dau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71c3da: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 71c3e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 71c3e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71c3e4: mov esi, eax */
  esi = eax;
/* 71c3e6: je 0x71c40d */
  if (zf) goto L_71c40d;
L_71c3e8: /* 71c3e8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 71c3ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71c3ee: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 71c3f3: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 71c3f8: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 71c3fd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71c3ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c400: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 71c404: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c406: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 71c409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c40a: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x71c40du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_71c40d: /* 71c40d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 71c411: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 71c415: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 71c41b: mov edx, esi */
  edx = esi;
/* 71c41d: imul edx, edx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x148u);
  edx = (uint32_t)r;
  }
/* 71c423: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 71c427: add edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71c429: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 71c42d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 71c431: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71c435: xor eax, eax */
  eax = 0;
/* 71c437: mov ebx, ecx */
  ebx = ecx;
/* 71c439: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 71c43c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 71c43f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 71c441: mov ecx, ebx */
  ecx = ebx;
/* 71c443: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 71c445: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c446: mov eax, esi */
  eax = esi;
/* 71c448: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c449: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c44a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c44d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71c480(void) {
  LOAD_REGS();
L_71c480: /* 71c480: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c482: push 0x9c2dc9 */
  { uint32_t v = 0x9c2dc9u; esp -= 4; W32(esp, v); }
/* 71c487: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c48e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c496: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c497: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c498: mov esi, ecx */
  esi = ecx;
/* 71c49a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c49b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71c49f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71c4a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c4a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71c4aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71c4b2: jge 0x71c4c8 */
  if ((sf == of)) goto L_71c4c8;
L_71c4b4: /* 71c4b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71c4b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c4be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71c4c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c4c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c4c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c4c8: /* 71c4c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c4cb: jle 0x71c4e1 */
  if ((zf || sf != of)) goto L_71c4e1;
L_71c4cd: /* 71c4cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71c4d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c4d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71c4dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c4deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c4de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c4e1: /* 71c4e1: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 71c4e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c4e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c4e9: mov ecx, esi */
  ecx = esi;
/* 71c4eb: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71c4f1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71c4f1: mov ecx, esi */
  ecx = esi;
/* 71c4f3: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71c4fb: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71c501u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71c501: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71c505: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c506: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c507: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c508: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c50f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c512: ret  */
  esp += 4; SPILL(); return;
}

void f_71c550(void) {
  LOAD_REGS();
L_71c550: /* 71c550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c552: push 0x9c2de9 */
  { uint32_t v = 0x9c2de9u; esp -= 4; W32(esp, v); }
/* 71c557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c55e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c566: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c567: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c568: mov esi, ecx */
  esi = ecx;
/* 71c56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c56b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71c56f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71c572: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c574: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71c57a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71c582: jge 0x71c598 */
  if ((sf == of)) goto L_71c598;
L_71c584: /* 71c584: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71c589: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c58e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71c593: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c595: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c598: /* 71c598: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c59b: jle 0x71c5b1 */
  if ((zf || sf != of)) goto L_71c5b1;
L_71c59d: /* 71c59d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71c5a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c5a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71c5ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c5aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c5ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c5b1: /* 71c5b1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71c5b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c5b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c5b6: mov ecx, esi */
  ecx = esi;
/* 71c5b8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71c5beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71c5be: mov ecx, esi */
  ecx = esi;
/* 71c5c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71c5c8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71c5ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71c5ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71c5d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c5d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c5d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c5d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c5dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c5df: ret  */
  esp += 4; SPILL(); return;
}

void f_71c610(void) {
  LOAD_REGS();
L_71c610: /* 71c610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c612: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c613: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71c617: mov esi, ecx */
  esi = ecx;
/* 71c619: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71c61b: je 0x71c670 */
  if (zf) goto L_71c670;
L_71c61d: /* 71c61d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c621: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71c623: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71c629u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71c629: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c62c: xor ebx, ebx */
  ebx = 0;
/* 71c62e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c630: jle 0x71c670 */
  if ((zf || sf != of)) goto L_71c670;
L_71c632: /* 71c632: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71c633: xor ebp, ebp */
  ebp = 0;
L_71c635: /* 71c635: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71c637: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71c639: mov ecx, esi */
  ecx = esi;
/* 71c63b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71c641u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71c641: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71c643: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 71c646: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71c648: je 0x71c664 */
  if (zf) goto L_71c664;
L_71c64a: /* 71c64a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71c64c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71c64e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71c650: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 71c652: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 71c655: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 71c658: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71c65b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71c65e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 71c661: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_71c664: /* 71c664: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71c667: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71c668: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71c66b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c66d: jl 0x71c635 */
  if ((sf != of)) goto L_71c635;
L_71c66f: /* 71c66f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71c670: /* 71c670: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c671: mov eax, esi */
  eax = esi;
/* 71c673: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c674: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c675: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71c6a0(void) {
  LOAD_REGS();
L_71c6a0: /* 71c6a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c6a2: push 0x9c2e09 */
  { uint32_t v = 0x9c2e09u; esp -= 4; W32(esp, v); }
/* 71c6a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c6ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c6b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c6b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c6b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c6b8: mov esi, ecx */
  esi = ecx;
/* 71c6ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c6bb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71c6bf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71c6c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c6c4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71c6ca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71c6d2: jge 0x71c6e8 */
  if ((sf == of)) goto L_71c6e8;
L_71c6d4: /* 71c6d4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71c6d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c6de: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71c6e3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c6e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c6e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c6e8: /* 71c6e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c6eb: jle 0x71c701 */
  if ((zf || sf != of)) goto L_71c701;
L_71c6ed: /* 71c6ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71c6f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c6f7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71c6fc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c6feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c6fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c701: /* 71c701: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 71c703: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c704: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c706: mov ecx, esi */
  ecx = esi;
/* 71c708: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71c70eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71c70e: mov ecx, esi */
  ecx = esi;
/* 71c710: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71c718: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71c71eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71c71e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71c722: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c723: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c724: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c725: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c72c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c72f: ret  */
  esp += 4; SPILL(); return;
}

void f_71c760(void) {
  LOAD_REGS();
L_71c760: /* 71c760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71c761: mov ebp, esp */
  ebp = esp;
/* 71c763: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c765: push 0x9c2e20 */
  { uint32_t v = 0x9c2e20u; esp -= 4; W32(esp, v); }
/* 71c76a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c771: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c778: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71c77b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c77c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71c77f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c780: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71c783: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c784: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71c787: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 71c789: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c78a: mov ecx, esi */
  ecx = esi;
/* 71c78c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71c793: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71c799u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71c799: mov ecx, ebx */
  ecx = ebx;
/* 71c79b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71c7a1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71c7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71c7a3: je 0x71c7f3 */
  if (zf) goto L_71c7f3;
L_71c7a5: /* 71c7a5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 71c7a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c7a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c7aa: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71c7b0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71c7b0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71c7b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c7b6: xor eax, eax */
  eax = 0;
L_71c7b8: /* 71c7b8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c7bb: jge 0x71c7c0 */
  if ((sf == of)) goto L_71c7c0;
L_71c7bd: /* 71c7bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71c7be: jmp 0x71c7b8 */
  goto L_71c7b8;
L_71c7c0: /* 71c7c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c7c1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 71c7c3: mov ecx, esi */
  ecx = esi;
/* 71c7c5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71c7cbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71c7cb: xor edi, edi */
  edi = 0;
/* 71c7cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_71c7d0: /* 71c7d0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c7d3: jge 0x71c81e */
  if ((sf == of)) goto L_71c81e;
L_71c7d5: /* 71c7d5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 71c7d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71c7d9: mov ecx, esi */
  ecx = esi;
/* 71c7db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71c7e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71c7e1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 71c7e4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71c7e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c7e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c7e8: call 0x6c8530 */
  esp -= 4; W32(esp, 0x71c7edu); SPILL(); f_6c8530(); if (g_unwind) return; RELOAD();
/* 71c7ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c7f0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71c7f1: jmp 0x71c7d0 */
  goto L_71c7d0;
L_71c7f3: /* 71c7f3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 71c7f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c7f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c7f8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71c7feu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71c7fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c801: xor edi, edi */
  edi = 0;
L_71c803: /* 71c803: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c806: jge 0x71c81e */
  if ((sf == of)) goto L_71c81e;
L_71c808: /* 71c808: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 71c80a: mov ecx, edi */
  ecx = edi;
/* 71c80c: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 71c80f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71c811: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c812: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c813: call 0x6c8530 */
  esp -= 4; W32(esp, 0x71c818u); SPILL(); f_6c8530(); if (g_unwind) return; RELOAD();
/* 71c818: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c81b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71c81c: jmp 0x71c803 */
  goto L_71c803;
L_71c81e: /* 71c81e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71c821: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c822: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c823: mov eax, ebx */
  eax = ebx;
/* 71c825: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c82c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c82d: mov esp, ebp */
  esp = ebp;
/* 71c82f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71c830: ret  */
  esp += 4; SPILL(); return;
}

void f_71c831(void) {
  LOAD_REGS();
L_71c831: /* 71c831: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 71c834: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71c839: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71c83c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c83d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 71c840: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71c845u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71c845(); return;
}

void f_71c845(void) {
  LOAD_REGS();
L_71c845: /* 71c845: push 0x9f8260 */
  { uint32_t v = 0x9f8260u; esp -= 4; W32(esp, v); }
/* 71c84a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71c84f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71c855u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71c855: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c858: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c85a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c85c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71c861u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71c861: guest_badaddr(0x71c861); return;
}

void f_71c8c0(void) {
  LOAD_REGS();
L_71c8c0: /* 71c8c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c8c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c8c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71c8c3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71c8c7: mov ebx, ecx */
  ebx = ecx;
/* 71c8c9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71c8cb: je 0x71c930 */
  if (zf) goto L_71c930;
L_71c8cd: /* 71c8cd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71c8d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c8d1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 71c8d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71c8d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71c8d9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71c8dc: xor eax, eax */
  eax = 0;
/* 71c8de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c8e0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71c8e4: jle 0x71c930 */
  if ((zf || sf != of)) goto L_71c930;
L_71c8e6: /* 71c8e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c8e7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71c8eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c8ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71c8f0: /* 71c8f0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 71c8f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71c8f4: mov ecx, ebx */
  ecx = ebx;
/* 71c8f6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71c8fcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71c8fc: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 71c8ff: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71c901: je 0x71c913 */
  if (zf) goto L_71c913;
L_71c903: /* 71c903: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71c906: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71c90a: mov ecx, 0xb */
  ecx = 0xbu;
/* 71c90f: mov edi, eax */
  edi = eax;
/* 71c911: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71c913: /* 71c913: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71c917: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71c91b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71c91e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71c91f: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71c922: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c924: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71c928: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71c92c: jl 0x71c8f0 */
  if ((sf != of)) goto L_71c8f0;
L_71c92e: /* 71c92e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c92f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71c930: /* 71c930: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71c931: mov eax, ebx */
  eax = ebx;
/* 71c933: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c934: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71c935: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71c960(void) {
  LOAD_REGS();
L_71c960: /* 71c960: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71c962: push 0x9c2e39 */
  { uint32_t v = 0x9c2e39u; esp -= 4; W32(esp, v); }
/* 71c967: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71c96d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71c96e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71c975: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71c976: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71c977: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71c978: mov esi, ecx */
  esi = ecx;
/* 71c97a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c97b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71c97f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71c982: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71c984: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71c98a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71c992: jge 0x71c9a8 */
  if ((sf == of)) goto L_71c9a8;
L_71c994: /* 71c994: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71c999: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c99e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71c9a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c9a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c9a8: /* 71c9a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71c9ab: jle 0x71c9c1 */
  if ((zf || sf != of)) goto L_71c9c1;
L_71c9ad: /* 71c9ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71c9b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71c9b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71c9bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71c9beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71c9be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71c9c1: /* 71c9c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71c9c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71c9c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71c9c6: mov ecx, esi */
  ecx = esi;
/* 71c9c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71c9ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71c9ce: mov ecx, esi */
  ecx = esi;
/* 71c9d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71c9d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71c9deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71c9de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71c9e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71c9e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71c9e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71c9e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71c9ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71c9ef: ret  */
  esp += 4; SPILL(); return;
}

void f_71ca20(void) {
  LOAD_REGS();
L_71ca20: /* 71ca20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71ca21: mov ebp, esp */
  ebp = esp;
/* 71ca23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71ca25: push 0x9c2e50 */
  { uint32_t v = 0x9c2e50u; esp -= 4; W32(esp, v); }
/* 71ca2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71ca30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ca31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ca38: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71ca3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ca3c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 71ca3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ca40: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 71ca43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ca44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71ca47: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71ca49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ca4a: mov ecx, ebx */
  ecx = ebx;
/* 71ca4c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71ca53: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71ca59u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71ca59: mov ecx, esi */
  ecx = esi;
/* 71ca5b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71ca61u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71ca61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71ca63: je 0x71caee */
  if (zf) goto L_71caee;
L_71ca69: /* 71ca69: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71ca6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ca6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ca6e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71ca74u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71ca74: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71ca77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ca7a: xor eax, eax */
  eax = 0;
/* 71ca7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71ca80: /* 71ca80: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ca83: jge 0x71ca88 */
  if ((sf == of)) goto L_71ca88;
L_71ca85: /* 71ca85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71ca86: jmp 0x71ca80 */
  goto L_71ca80;
L_71ca88: /* 71ca88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ca89: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71ca8b: mov ecx, ebx */
  ecx = ebx;
/* 71ca8d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71ca93u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71ca93: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 71ca99: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_71caa0: /* 71caa0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71caa3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71caa6: jge 0x71cb42 */
  if ((sf == of)) goto L_71cb42;
L_71caac: /* 71caac: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71caae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71cab0: mov ecx, ebx */
  ecx = ebx;
/* 71cab2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71cab8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71cab8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 71caba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 71cabd: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 71cac0: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 71cac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71cac5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cac7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71caca: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 71cacd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71cace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cacf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cad1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cad6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cad8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cadb: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71cade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cadf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cae0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cae2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cae2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71cae5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cae8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71cae9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71caec: jmp 0x71caa0 */
  goto L_71caa0;
L_71caee: /* 71caee: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 71caf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71caf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71caf3: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71caf9u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71caf9: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 71caff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cb02: xor eax, eax */
  eax = 0;
/* 71cb04: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_71cb07: /* 71cb07: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71cb0a: jge 0x71cb42 */
  if ((sf == of)) goto L_71cb42;
L_71cb0c: /* 71cb0c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71cb0e: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 71cb11: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71cb14: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 71cb17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71cb18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cb19: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cb1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cb1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cb1e: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 71cb21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71cb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cb23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cb25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cb28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cb29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cb2a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cb2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cb2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cb2f: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71cb32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cb33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cb34: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71cb36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cb36: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71cb39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cb3c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71cb3d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71cb40: jmp 0x71cb07 */
  goto L_71cb07;
L_71cb42: /* 71cb42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71cb45: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71cb48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71cb49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71cb4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71cb51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71cb52: mov esp, ebp */
  esp = ebp;
/* 71cb54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71cb55: ret  */
  esp += 4; SPILL(); return;
}

void f_71cb56(void) {
  LOAD_REGS();
L_71cb56: /* 71cb56: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 71cb59: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71cb5e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 71cb61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cb62: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 71cb65: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71cb6au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71cb6a(); return;
}

void f_71cb6a(void) {
  LOAD_REGS();
L_71cb6a: /* 71cb6a: push 0x9f8278 */
  { uint32_t v = 0x9f8278u; esp -= 4; W32(esp, v); }
/* 71cb6f: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71cb74: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71cb7au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71cb7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cb7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71cb7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71cb81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71cb86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71cb86: guest_badaddr(0x71cb86); return;
}

void f_71cbf0(void) {
  LOAD_REGS();
L_71cbf0: /* 71cbf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71cbf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cbf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71cbf3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71cbf7: mov esi, ecx */
  esi = ecx;
/* 71cbf9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71cbfb: je 0x71cc36 */
  if (zf) goto L_71cc36;
L_71cbfd: /* 71cbfd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71cc00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cc01: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71cc03: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71cc09u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71cc09: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71cc0c: xor ebx, ebx */
  ebx = 0;
/* 71cc0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71cc10: jle 0x71cc36 */
  if ((zf || sf != of)) goto L_71cc36;
L_71cc12: /* 71cc12: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71cc14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71cc16: mov ecx, esi */
  ecx = esi;
/* 71cc18: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71cc1eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71cc1e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71cc20: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71cc23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71cc25: je 0x71cc2e */
  if (zf) goto L_71cc2e;
L_71cc27: /* 71cc27: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71cc29: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71cc2c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71cc2e: /* 71cc2e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71cc31: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71cc32: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71cc34: jl 0x71cc12 */
  if ((sf != of)) goto L_71cc12;
L_71cc36: /* 71cc36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71cc37: mov eax, esi */
  eax = esi;
/* 71cc39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71cc3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71cc3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71cc60(void) {
  LOAD_REGS();
L_71cc60: /* 71cc60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71cc62: push 0x9c2e69 */
  { uint32_t v = 0x9c2e69u; esp -= 4; W32(esp, v); }
/* 71cc67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71cc6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cc6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71cc75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71cc76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71cc77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cc78: mov esi, ecx */
  esi = ecx;
/* 71cc7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71cc7b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71cc7f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71cc82: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71cc84: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71cc8a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71cc92: jge 0x71cca8 */
  if ((sf == of)) goto L_71cca8;
L_71cc94: /* 71cc94: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71cc99: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71cc9e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71cca3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71cca5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cca5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71cca8: /* 71cca8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ccab: jle 0x71ccc1 */
  if ((zf || sf != of)) goto L_71ccc1;
L_71ccad: /* 71ccad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71ccb2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ccb7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71ccbc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ccbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ccbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ccc1: /* 71ccc1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71ccc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ccc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ccc6: mov ecx, esi */
  ecx = esi;
/* 71ccc8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71ccceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71ccce: mov ecx, esi */
  ecx = esi;
/* 71ccd0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71ccd8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71ccdeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71ccde: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71cce2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71cce3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71cce4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71cce5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ccec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ccef: ret  */
  esp += 4; SPILL(); return;
}

void f_71cd20(void) {
  LOAD_REGS();
L_71cd20: /* 71cd20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71cd21: mov ebp, esp */
  ebp = esp;
/* 71cd23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71cd25: push 0x9c2e80 */
  { uint32_t v = 0x9c2e80u; esp -= 4; W32(esp, v); }
/* 71cd2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71cd30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cd31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71cd38: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71cd3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71cd3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cd3d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 71cd40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71cd41: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 71cd44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71cd47: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71cd49: xor ebx, ebx */
  ebx = 0;
/* 71cd4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cd4c: mov ecx, edi */
  ecx = edi;
/* 71cd4e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 71cd51: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71cd57u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71cd57: mov ecx, esi */
  ecx = esi;
/* 71cd59: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71cd5fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71cd5f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71cd61: je 0x71cdc8 */
  if (zf) goto L_71cdc8;
L_71cd63: /* 71cd63: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71cd66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cd67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cd68: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71cd6eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71cd6e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71cd71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cd74: xor eax, eax */
  eax = 0;
L_71cd76: /* 71cd76: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71cd79: jge 0x71cd7e */
  if ((sf == of)) goto L_71cd7e;
L_71cd7b: /* 71cd7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71cd7c: jmp 0x71cd76 */
  goto L_71cd76;
L_71cd7e: /* 71cd7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71cd7f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71cd81: mov ecx, edi */
  ecx = edi;
/* 71cd83: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71cd89u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71cd89: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 71cd8c: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
L_71cd92: /* 71cd92: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71cd95: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71cd98: jge 0x71cdff */
  if ((sf == of)) goto L_71cdff;
L_71cd9a: /* 71cd9a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71cd9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71cd9e: mov ecx, edi */
  ecx = edi;
/* 71cda0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71cda6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71cda6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71cda8: lea esi, [edx + eax*8] */
  esi = (uint32_t)(edx + eax*8);
/* 71cdab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71cdae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cdaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cdb0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71cdb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cdb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cdb5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71cdb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cdb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cdba: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71cdbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cdbc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71cdbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cdc2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71cdc3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71cdc6: jmp 0x71cd92 */
  goto L_71cd92;
L_71cdc8: /* 71cdc8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71cdcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cdcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cdcd: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71cdd3u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71cdd3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71cdd6: /* 71cdd6: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71cdd9: jge 0x71cdff */
  if ((sf == of)) goto L_71cdff;
L_71cddb: /* 71cddb: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71cddd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 71cde0: lea esi, [ecx + ebx*8] */
  esi = (uint32_t)(ecx + ebx*8);
/* 71cde3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cde4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71cde5: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x71cdebu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 71cdeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cdee: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71cdf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cdf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cdf3: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x71cdf9u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 71cdf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cdfc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71cdfd: jmp 0x71cdd6 */
  goto L_71cdd6;
L_71cdff: /* 71cdff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71ce02: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71ce05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ce06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ce07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ce0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ce0f: mov esp, ebp */
  esp = ebp;
/* 71ce11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71ce12: ret  */
  esp += 4; SPILL(); return;
}

void f_71ce13(void) {
  LOAD_REGS();
L_71ce13: /* 71ce13: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 71ce16: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71ce1b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 71ce1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ce1f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 71ce22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71ce27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71ce27(); return;
}

void f_71ce27(void) {
  LOAD_REGS();
L_71ce27: /* 71ce27: push 0x9f8290 */
  { uint32_t v = 0x9f8290u; esp -= 4; W32(esp, v); }
/* 71ce2c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71ce31: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71ce37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71ce37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ce3a: xor ebx, ebx */
  ebx = 0;
/* 71ce3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ce3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ce3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71ce43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71ce43: guest_badaddr(0x71ce43); return;
}

void f_71cea0(void) {
  LOAD_REGS();
L_71cea0: /* 71cea0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71cea1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 71cea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cea6: mov esi, ecx */
  esi = ecx;
/* 71cea8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71ceaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ceab: je 0x71ceed */
  if (zf) goto L_71ceed;
L_71cead: /* 71cead: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71ceb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ceb1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71ceb3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71ceb9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71ceb9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71cebc: xor edi, edi */
  edi = 0;
/* 71cebe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71cec0: jle 0x71ceed */
  if ((zf || sf != of)) goto L_71ceed;
L_71cec2: /* 71cec2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71cec4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71cec6: mov ecx, esi */
  ecx = esi;
/* 71cec8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71ceceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71cece: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71ced0: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 71ced3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71ced5: je 0x71cee5 */
  if (zf) goto L_71cee5;
L_71ced7: /* 71ced7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 71ced9: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 71cedc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 71cede: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 71cee2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_71cee5: /* 71cee5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71cee8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71cee9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ceeb: jl 0x71cec2 */
  if ((sf != of)) goto L_71cec2;
L_71ceed: /* 71ceed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ceee: mov eax, esi */
  eax = esi;
/* 71cef0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71cef1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71cef2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71cf20(void) {
  LOAD_REGS();
L_71cf20: /* 71cf20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71cf22: push 0x9c2e99 */
  { uint32_t v = 0x9c2e99u; esp -= 4; W32(esp, v); }
/* 71cf27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71cf2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cf2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71cf35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71cf36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71cf37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71cf38: mov esi, ecx */
  esi = ecx;
/* 71cf3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71cf3b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71cf3f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71cf42: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71cf44: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71cf4a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71cf52: jge 0x71cf68 */
  if ((sf == of)) goto L_71cf68;
L_71cf54: /* 71cf54: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71cf59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71cf5e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71cf63: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71cf65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cf65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71cf68: /* 71cf68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71cf6b: jle 0x71cf81 */
  if ((zf || sf != of)) goto L_71cf81;
L_71cf6d: /* 71cf6d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71cf72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71cf77: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71cf7c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71cf7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71cf7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71cf81: /* 71cf81: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71cf83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71cf84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71cf86: mov ecx, esi */
  ecx = esi;
/* 71cf88: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71cf8eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71cf8e: mov ecx, esi */
  ecx = esi;
/* 71cf90: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71cf98: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71cf9eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71cf9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71cfa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71cfa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71cfa4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71cfa5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71cfac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71cfaf: ret  */
  esp += 4; SPILL(); return;
}

void f_71cfe0(void) {
  LOAD_REGS();
L_71cfe0: /* 71cfe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71cfe1: mov ebp, esp */
  ebp = esp;
/* 71cfe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71cfe5: push 0x9c2eb0 */
  { uint32_t v = 0x9c2eb0u; esp -= 4; W32(esp, v); }
/* 71cfea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71cff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71cff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71cff8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71cffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71cffc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71cfff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d000: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71d003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d004: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71d007: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71d009: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d00a: mov ecx, esi */
  ecx = esi;
/* 71d00c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71d013: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71d019u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71d019: mov ecx, ebx */
  ecx = ebx;
/* 71d01b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71d021u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71d021: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71d023: je 0x71d076 */
  if (zf) goto L_71d076;
L_71d025: /* 71d025: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 71d028: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d029: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d02a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71d030u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71d030: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71d033: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d036: xor eax, eax */
  eax = 0;
L_71d038: /* 71d038: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d03b: jge 0x71d040 */
  if ((sf == of)) goto L_71d040;
L_71d03d: /* 71d03d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71d03e: jmp 0x71d038 */
  goto L_71d038;
L_71d040: /* 71d040: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d041: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71d043: mov ecx, esi */
  ecx = esi;
/* 71d045: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71d04bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71d04b: xor edi, edi */
  edi = 0;
/* 71d04d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_71d050: /* 71d050: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d053: jge 0x71d0a0 */
  if ((sf == of)) goto L_71d0a0;
L_71d055: /* 71d055: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71d057: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71d059: mov ecx, esi */
  ecx = esi;
/* 71d05b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71d061u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71d061: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71d063: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 71d066: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 71d069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d06a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d06b: call 0x6c83c8 */
  esp -= 4; W32(esp, 0x71d070u); SPILL(); f_6c83c8(); if (g_unwind) return; RELOAD();
/* 71d070: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d073: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71d074: jmp 0x71d050 */
  goto L_71d050;
L_71d076: /* 71d076: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 71d079: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d07a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d07b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71d081u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71d081: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d084: xor edi, edi */
  edi = 0;
L_71d086: /* 71d086: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d089: jge 0x71d0a0 */
  if ((sf == of)) goto L_71d0a0;
L_71d08b: /* 71d08b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71d08d: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 71d090: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 71d093: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71d094: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d095: call 0x6c83c8 */
  esp -= 4; W32(esp, 0x71d09au); SPILL(); f_6c83c8(); if (g_unwind) return; RELOAD();
/* 71d09a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d09d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71d09e: jmp 0x71d086 */
  goto L_71d086;
L_71d0a0: /* 71d0a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71d0a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d0a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d0a5: mov eax, ebx */
  eax = ebx;
/* 71d0a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d0ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d0af: mov esp, ebp */
  esp = ebp;
/* 71d0b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71d0b2: ret  */
  esp += 4; SPILL(); return;
}

void f_71d0b3(void) {
  LOAD_REGS();
L_71d0b3: /* 71d0b3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 71d0b6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71d0bb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 71d0be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d0bf: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 71d0c2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71d0c7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71d0c7(); return;
}

void f_71d0c7(void) {
  LOAD_REGS();
L_71d0c7: /* 71d0c7: push 0x9f82a8 */
  { uint32_t v = 0x9f82a8u; esp -= 4; W32(esp, v); }
/* 71d0cc: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71d0d1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71d0d7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71d0d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d0da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d0dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d0de: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71d0e3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71d0e3: guest_badaddr(0x71d0e3); return;
}

void f_71d140(void) {
  LOAD_REGS();
L_71d140: /* 71d140: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d141: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d142: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71d143: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71d147: mov ebx, ecx */
  ebx = ecx;
/* 71d149: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71d14b: je 0x71d1b3 */
  if (zf) goto L_71d1b3;
L_71d14d: /* 71d14d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71d150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d151: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71d153: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71d159u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71d159: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d15c: xor eax, eax */
  eax = 0;
/* 71d15e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d160: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71d164: jle 0x71d1b3 */
  if ((zf || sf != of)) goto L_71d1b3;
L_71d166: /* 71d166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d167: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71d16b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d16c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71d170: /* 71d170: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71d172: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71d174: mov ecx, ebx */
  ecx = ebx;
/* 71d176: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71d17cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71d17c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71d17e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 71d181: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 71d184: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71d186: je 0x71d196 */
  if (zf) goto L_71d196;
L_71d188: /* 71d188: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71d18b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71d18f: mov ecx, 0xa */
  ecx = 0xau;
/* 71d194: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71d196: /* 71d196: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71d19a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71d19e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d1a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71d1a2: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71d1a5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d1a7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71d1ab: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71d1af: jl 0x71d170 */
  if ((sf != of)) goto L_71d170;
L_71d1b1: /* 71d1b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d1b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71d1b3: /* 71d1b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71d1b4: mov eax, ebx */
  eax = ebx;
/* 71d1b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d1b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71d1b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71d1e0(void) {
  LOAD_REGS();
L_71d1e0: /* 71d1e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71d1e2: push 0x9c2ec9 */
  { uint32_t v = 0x9c2ec9u; esp -= 4; W32(esp, v); }
/* 71d1e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71d1ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d1ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71d1f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d1f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d1f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d1f8: mov esi, ecx */
  esi = ecx;
/* 71d1fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d1fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71d1ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71d202: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d204: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71d20a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71d212: jge 0x71d228 */
  if ((sf == of)) goto L_71d228;
L_71d214: /* 71d214: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71d219: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d21e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71d223: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d225u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d225: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d228: /* 71d228: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d22b: jle 0x71d241 */
  if ((zf || sf != of)) goto L_71d241;
L_71d22d: /* 71d22d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71d232: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d237: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71d23c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d23eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d23e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d241: /* 71d241: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 71d243: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d244: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d246: mov ecx, esi */
  ecx = esi;
/* 71d248: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71d24eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71d24e: mov ecx, esi */
  ecx = esi;
/* 71d250: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71d258: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71d25eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71d25e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71d262: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d263: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d264: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d265: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d26c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d26f: ret  */
  esp += 4; SPILL(); return;
}

void f_71d2a0(void) {
  LOAD_REGS();
L_71d2a0: /* 71d2a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d2a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d2a2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71d2a3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71d2a7: mov ebx, ecx */
  ebx = ecx;
/* 71d2a9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71d2ab: je 0x71d312 */
  if (zf) goto L_71d312;
L_71d2ad: /* 71d2ad: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71d2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d2b1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 71d2b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71d2b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71d2b9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d2bc: xor eax, eax */
  eax = 0;
/* 71d2be: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d2c0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71d2c4: jle 0x71d312 */
  if ((zf || sf != of)) goto L_71d312;
L_71d2c6: /* 71d2c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d2c7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71d2cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d2cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71d2d0: /* 71d2d0: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 71d2d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71d2d4: mov ecx, ebx */
  ecx = ebx;
/* 71d2d6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71d2dcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71d2dc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71d2de: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 71d2e1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71d2e3: je 0x71d2f5 */
  if (zf) goto L_71d2f5;
L_71d2e5: /* 71d2e5: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71d2e8: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71d2ec: mov ecx, 0x10 */
  ecx = 0x10u;
/* 71d2f1: mov edi, eax */
  edi = eax;
/* 71d2f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71d2f5: /* 71d2f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71d2f9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71d2fd: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d300: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71d301: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71d304: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d306: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71d30a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71d30e: jl 0x71d2d0 */
  if ((sf != of)) goto L_71d2d0;
L_71d310: /* 71d310: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d311: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71d312: /* 71d312: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71d313: mov eax, ebx */
  eax = ebx;
/* 71d315: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d316: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71d317: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71d340(void) {
  LOAD_REGS();
L_71d340: /* 71d340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71d342: push 0x9c2ee9 */
  { uint32_t v = 0x9c2ee9u; esp -= 4; W32(esp, v); }
/* 71d347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71d34d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d34e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71d355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d356: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d357: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d358: mov esi, ecx */
  esi = ecx;
/* 71d35a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d35b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71d35f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71d362: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d364: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71d36a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71d372: jge 0x71d388 */
  if ((sf == of)) goto L_71d388;
L_71d374: /* 71d374: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71d379: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d37e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71d383: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d385: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d388: /* 71d388: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d38b: jle 0x71d3a1 */
  if ((zf || sf != of)) goto L_71d3a1;
L_71d38d: /* 71d38d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71d392: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d397: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71d39c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d39eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d39e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d3a1: /* 71d3a1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71d3a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d3a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d3a6: mov ecx, esi */
  ecx = esi;
/* 71d3a8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71d3aeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71d3ae: mov ecx, esi */
  ecx = esi;
/* 71d3b0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71d3b8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71d3beu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71d3be: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71d3c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d3c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d3c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d3c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d3cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d3cf: ret  */
  esp += 4; SPILL(); return;
}

void f_71d400(void) {
  LOAD_REGS();
L_71d400: /* 71d400: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d401: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d402: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d403: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71d407: mov esi, ecx */
  esi = ecx;
/* 71d409: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71d40b: je 0x71d460 */
  if (zf) goto L_71d460;
L_71d40d: /* 71d40d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71d410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d411: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71d413: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71d419u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71d419: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71d41c: xor ebx, ebx */
  ebx = 0;
/* 71d41e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d420: jle 0x71d460 */
  if ((zf || sf != of)) goto L_71d460;
L_71d422: /* 71d422: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71d423: xor ebp, ebp */
  ebp = 0;
L_71d425: /* 71d425: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71d427: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71d429: mov ecx, esi */
  ecx = esi;
/* 71d42b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71d431u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71d431: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71d433: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 71d436: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71d438: je 0x71d454 */
  if (zf) goto L_71d454;
L_71d43a: /* 71d43a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71d43c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71d43e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 71d440: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 71d442: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 71d445: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 71d448: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71d44b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71d44e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 71d451: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_71d454: /* 71d454: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71d457: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71d458: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71d45b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d45d: jl 0x71d425 */
  if ((sf != of)) goto L_71d425;
L_71d45f: /* 71d45f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71d460: /* 71d460: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d461: mov eax, esi */
  eax = esi;
/* 71d463: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d464: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d465: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71d490(void) {
  LOAD_REGS();
L_71d490: /* 71d490: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71d492: push 0x9c2f09 */
  { uint32_t v = 0x9c2f09u; esp -= 4; W32(esp, v); }
/* 71d497: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71d49d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d49e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71d4a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d4a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d4a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d4a8: mov esi, ecx */
  esi = ecx;
/* 71d4aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d4ab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71d4af: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71d4b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d4b4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71d4ba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71d4c2: jge 0x71d4d8 */
  if ((sf == of)) goto L_71d4d8;
L_71d4c4: /* 71d4c4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71d4c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d4ce: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71d4d3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d4d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d4d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d4d8: /* 71d4d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d4db: jle 0x71d4f1 */
  if ((zf || sf != of)) goto L_71d4f1;
L_71d4dd: /* 71d4dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71d4e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d4e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71d4ec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d4eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d4ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d4f1: /* 71d4f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71d4f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d4f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d4f6: mov ecx, esi */
  ecx = esi;
/* 71d4f8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71d4feu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71d4fe: mov ecx, esi */
  ecx = esi;
/* 71d500: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71d508: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71d50eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71d50e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71d512: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d513: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d514: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d515: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d51c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d51f: ret  */
  esp += 4; SPILL(); return;
}

void f_71d550(void) {
  LOAD_REGS();
L_71d550: /* 71d550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71d552: push 0x9c2f29 */
  { uint32_t v = 0x9c2f29u; esp -= 4; W32(esp, v); }
/* 71d557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71d55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d55e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71d565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d566: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d567: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d568: mov esi, ecx */
  esi = ecx;
/* 71d56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d56b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71d56f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71d572: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d574: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71d57a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71d582: jge 0x71d598 */
  if ((sf == of)) goto L_71d598;
L_71d584: /* 71d584: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71d589: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d58e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71d593: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d595: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d598: /* 71d598: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d59b: jle 0x71d5b1 */
  if ((zf || sf != of)) goto L_71d5b1;
L_71d59d: /* 71d59d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71d5a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d5a7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71d5ac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d5aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d5ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d5b1: /* 71d5b1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71d5b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d5b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d5b6: mov ecx, esi */
  ecx = esi;
/* 71d5b8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71d5beu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71d5be: mov ecx, esi */
  ecx = esi;
/* 71d5c0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71d5c8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71d5ceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71d5ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71d5d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d5d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d5d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d5d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d5dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d5df: ret  */
  esp += 4; SPILL(); return;
}

void f_71d610(void) {
  LOAD_REGS();
L_71d610: /* 71d610: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d612: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71d613: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71d617: mov ebx, ecx */
  ebx = ecx;
/* 71d619: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71d61b: je 0x71d680 */
  if (zf) goto L_71d680;
L_71d61d: /* 71d61d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71d620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d621: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71d623: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71d629u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71d629: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d62c: xor eax, eax */
  eax = 0;
/* 71d62e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d630: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71d634: jle 0x71d680 */
  if ((zf || sf != of)) goto L_71d680;
L_71d636: /* 71d636: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d637: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71d63b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d63c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71d640: /* 71d640: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71d642: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71d644: mov ecx, ebx */
  ecx = ebx;
/* 71d646: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71d64cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71d64c: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 71d64f: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71d651: je 0x71d663 */
  if (zf) goto L_71d663;
L_71d653: /* 71d653: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71d656: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71d65a: mov ecx, 7 */
  ecx = 0x7u;
/* 71d65f: mov edi, eax */
  edi = eax;
/* 71d661: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71d663: /* 71d663: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71d667: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71d66b: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d66e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71d66f: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71d672: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d674: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71d678: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71d67c: jl 0x71d640 */
  if ((sf != of)) goto L_71d640;
L_71d67e: /* 71d67e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d67f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71d680: /* 71d680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71d681: mov eax, ebx */
  eax = ebx;
/* 71d683: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d684: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71d685: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71d6b0(void) {
  LOAD_REGS();
L_71d6b0: /* 71d6b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71d6b2: push 0x9c2f49 */
  { uint32_t v = 0x9c2f49u; esp -= 4; W32(esp, v); }
/* 71d6b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71d6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d6be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71d6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d6c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d6c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d6c8: mov esi, ecx */
  esi = ecx;
/* 71d6ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d6cb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71d6cf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71d6d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d6d4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71d6da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71d6e2: jge 0x71d6f8 */
  if ((sf == of)) goto L_71d6f8;
L_71d6e4: /* 71d6e4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71d6e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d6ee: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71d6f3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d6f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d6f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d6f8: /* 71d6f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d6fb: jle 0x71d711 */
  if ((zf || sf != of)) goto L_71d711;
L_71d6fd: /* 71d6fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71d702: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d707: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71d70c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d70eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d70e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d711: /* 71d711: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71d713: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d714: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d716: mov ecx, esi */
  ecx = esi;
/* 71d718: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71d71eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71d71e: mov ecx, esi */
  ecx = esi;
/* 71d720: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71d728: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71d72eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71d72e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71d732: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d734: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d735: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d73c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d73f: ret  */
  esp += 4; SPILL(); return;
}

void f_71d770(void) {
  LOAD_REGS();
L_71d770: /* 71d770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d771: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d772: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71d773: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71d777: mov ebx, ecx */
  ebx = ecx;
/* 71d779: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71d77b: je 0x71d7e3 */
  if (zf) goto L_71d7e3;
L_71d77d: /* 71d77d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71d780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d781: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71d783: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71d789u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71d789: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d78c: xor eax, eax */
  eax = 0;
/* 71d78e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d790: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71d794: jle 0x71d7e3 */
  if ((zf || sf != of)) goto L_71d7e3;
L_71d796: /* 71d796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d797: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71d79b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d79c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71d7a0: /* 71d7a0: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71d7a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71d7a4: mov ecx, ebx */
  ecx = ebx;
/* 71d7a6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71d7acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71d7ac: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71d7ae: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 71d7b1: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 71d7b4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71d7b6: je 0x71d7c6 */
  if (zf) goto L_71d7c6;
L_71d7b8: /* 71d7b8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71d7bb: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71d7bf: mov ecx, 6 */
  ecx = 0x6u;
/* 71d7c4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71d7c6: /* 71d7c6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71d7ca: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71d7ce: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d7d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71d7d2: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71d7d5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d7d7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71d7db: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71d7df: jl 0x71d7a0 */
  if ((sf != of)) goto L_71d7a0;
L_71d7e1: /* 71d7e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d7e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71d7e3: /* 71d7e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71d7e4: mov eax, ebx */
  eax = ebx;
/* 71d7e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d7e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71d7e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71d810(void) {
  LOAD_REGS();
L_71d810: /* 71d810: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71d812: push 0x9c2f69 */
  { uint32_t v = 0x9c2f69u; esp -= 4; W32(esp, v); }
/* 71d817: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71d81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d81e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71d825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d826: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d828: mov esi, ecx */
  esi = ecx;
/* 71d82a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d82b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71d82f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71d832: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d834: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71d83a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71d842: jge 0x71d858 */
  if ((sf == of)) goto L_71d858;
L_71d844: /* 71d844: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71d849: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d84e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71d853: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d855: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d858: /* 71d858: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d85b: jle 0x71d871 */
  if ((zf || sf != of)) goto L_71d871;
L_71d85d: /* 71d85d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71d862: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d867: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71d86c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d86eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d86e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d871: /* 71d871: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 71d873: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d874: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d876: mov ecx, esi */
  ecx = esi;
/* 71d878: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71d87eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71d87e: mov ecx, esi */
  ecx = esi;
/* 71d880: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71d888: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71d88eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71d88e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71d892: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d894: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d895: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d89c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d89f: ret  */
  esp += 4; SPILL(); return;
}

void f_71d8d0(void) {
  LOAD_REGS();
L_71d8d0: /* 71d8d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d8d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d8d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71d8d3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71d8d7: mov ebx, ecx */
  ebx = ecx;
/* 71d8d9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71d8db: je 0x71d943 */
  if (zf) goto L_71d943;
L_71d8dd: /* 71d8dd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71d8e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d8e1: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 71d8e3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71d8e9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71d8e9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d8ec: xor eax, eax */
  eax = 0;
/* 71d8ee: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d8f0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71d8f4: jle 0x71d943 */
  if ((zf || sf != of)) goto L_71d943;
L_71d8f6: /* 71d8f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d8f7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71d8fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d8fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71d900: /* 71d900: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 71d902: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71d904: mov ecx, ebx */
  ecx = ebx;
/* 71d906: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71d90cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71d90c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71d90e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 71d911: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 71d914: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71d916: je 0x71d926 */
  if (zf) goto L_71d926;
L_71d918: /* 71d918: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71d91b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71d91f: mov ecx, 5 */
  ecx = 0x5u;
/* 71d924: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71d926: /* 71d926: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71d92a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71d92e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71d931: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71d932: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71d935: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d937: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71d93b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71d93f: jl 0x71d900 */
  if ((sf != of)) goto L_71d900;
L_71d941: /* 71d941: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d942: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71d943: /* 71d943: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71d944: mov eax, ebx */
  eax = ebx;
/* 71d946: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d947: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71d948: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71d970(void) {
  LOAD_REGS();
L_71d970: /* 71d970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71d972: push 0x9c2f89 */
  { uint32_t v = 0x9c2f89u; esp -= 4; W32(esp, v); }
/* 71d977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71d97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71d97e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71d985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71d986: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71d987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71d988: mov esi, ecx */
  esi = ecx;
/* 71d98a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d98b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71d98f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71d992: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71d994: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71d99a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71d9a2: jge 0x71d9b8 */
  if ((sf == of)) goto L_71d9b8;
L_71d9a4: /* 71d9a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71d9a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d9ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71d9b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d9b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d9b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d9b8: /* 71d9b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71d9bb: jle 0x71d9d1 */
  if ((zf || sf != of)) goto L_71d9d1;
L_71d9bd: /* 71d9bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71d9c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71d9c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71d9cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71d9ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71d9ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71d9d1: /* 71d9d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71d9d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71d9d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71d9d6: mov ecx, esi */
  ecx = esi;
/* 71d9d8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71d9deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71d9de: mov ecx, esi */
  ecx = esi;
/* 71d9e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71d9e8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71d9eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71d9ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71d9f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71d9f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71d9f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71d9f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71d9fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71d9ff: ret  */
  esp += 4; SPILL(); return;
}

void f_71da30(void) {
  LOAD_REGS();
L_71da30: /* 71da30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71da31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71da32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71da33: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71da37: mov esi, ecx */
  esi = ecx;
/* 71da39: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71da3b: je 0x71da76 */
  if (zf) goto L_71da76;
L_71da3d: /* 71da3d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71da40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71da41: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71da43: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71da49u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71da49: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71da4c: xor ebx, ebx */
  ebx = 0;
/* 71da4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71da50: jle 0x71da76 */
  if ((zf || sf != of)) goto L_71da76;
L_71da52: /* 71da52: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71da54: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71da56: mov ecx, esi */
  ecx = esi;
/* 71da58: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71da5eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71da5e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71da60: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71da63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71da65: je 0x71da6e */
  if (zf) goto L_71da6e;
L_71da67: /* 71da67: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71da69: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71da6c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71da6e: /* 71da6e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71da71: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71da72: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71da74: jl 0x71da52 */
  if ((sf != of)) goto L_71da52;
L_71da76: /* 71da76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71da77: mov eax, esi */
  eax = esi;
/* 71da79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71da7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71da7b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71daa0(void) {
  LOAD_REGS();
L_71daa0: /* 71daa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71daa2: push 0x9c2fa9 */
  { uint32_t v = 0x9c2fa9u; esp -= 4; W32(esp, v); }
/* 71daa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71daad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71daae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71dab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71dab6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dab7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71dab8: mov esi, ecx */
  esi = ecx;
/* 71daba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71dabb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71dabf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71dac2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71dac4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71daca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71dad2: jge 0x71dae8 */
  if ((sf == of)) goto L_71dae8;
L_71dad4: /* 71dad4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71dad9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71dade: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71dae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71dae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71dae5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71dae8: /* 71dae8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71daeb: jle 0x71db01 */
  if ((zf || sf != of)) goto L_71db01;
L_71daed: /* 71daed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71daf2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71daf7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71dafc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71dafeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71dafe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71db01: /* 71db01: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71db03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71db04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71db06: mov ecx, esi */
  ecx = esi;
/* 71db08: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71db0eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71db0e: mov ecx, esi */
  ecx = esi;
/* 71db10: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71db18: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71db1eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71db1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71db22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71db23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71db24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71db25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71db2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71db2f: ret  */
  esp += 4; SPILL(); return;
}

void f_71db60(void) {
  LOAD_REGS();
L_71db60: /* 71db60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71db61: mov ebp, esp */
  ebp = esp;
/* 71db63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71db65: push 0x9c2fc0 */
  { uint32_t v = 0x9c2fc0u; esp -= 4; W32(esp, v); }
/* 71db6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71db70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71db71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71db78: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71db7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71db7c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71db7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71db80: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71db83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71db84: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71db87: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71db89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71db8a: mov ecx, esi */
  ecx = esi;
/* 71db8c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71db93: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71db99u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71db99: mov ecx, ebx */
  ecx = ebx;
/* 71db9b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71dba1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71dba1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71dba3: je 0x71dbf6 */
  if (zf) goto L_71dbf6;
L_71dba5: /* 71dba5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 71dba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71dba9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dbaa: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71dbb0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71dbb0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71dbb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71dbb6: xor eax, eax */
  eax = 0;
L_71dbb8: /* 71dbb8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71dbbb: jge 0x71dbc0 */
  if ((sf == of)) goto L_71dbc0;
L_71dbbd: /* 71dbbd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71dbbe: jmp 0x71dbb8 */
  goto L_71dbb8;
L_71dbc0: /* 71dbc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71dbc1: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71dbc3: mov ecx, esi */
  ecx = esi;
/* 71dbc5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71dbcbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71dbcb: xor edi, edi */
  edi = 0;
/* 71dbcd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_71dbd0: /* 71dbd0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71dbd3: jge 0x71dc20 */
  if ((sf == of)) goto L_71dc20;
L_71dbd5: /* 71dbd5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71dbd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71dbd9: mov ecx, esi */
  ecx = esi;
/* 71dbdb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71dbe1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71dbe1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71dbe3: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 71dbe6: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 71dbe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71dbea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dbeb: call 0x6c2176 */
  esp -= 4; W32(esp, 0x71dbf0u); SPILL(); f_6c2176(); if (g_unwind) return; RELOAD();
/* 71dbf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71dbf3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71dbf4: jmp 0x71dbd0 */
  goto L_71dbd0;
L_71dbf6: /* 71dbf6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 71dbf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71dbfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dbfb: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71dc01u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71dc01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71dc04: xor edi, edi */
  edi = 0;
L_71dc06: /* 71dc06: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71dc09: jge 0x71dc20 */
  if ((sf == of)) goto L_71dc20;
L_71dc0b: /* 71dc0b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71dc0d: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 71dc10: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 71dc13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71dc14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dc15: call 0x6c2176 */
  esp -= 4; W32(esp, 0x71dc1au); SPILL(); f_6c2176(); if (g_unwind) return; RELOAD();
/* 71dc1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71dc1d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71dc1e: jmp 0x71dc06 */
  goto L_71dc06;
L_71dc20: /* 71dc20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71dc23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71dc24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71dc25: mov eax, ebx */
  eax = ebx;
/* 71dc27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71dc2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71dc2f: mov esp, ebp */
  esp = ebp;
/* 71dc31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71dc32: ret  */
  esp += 4; SPILL(); return;
}

void f_71dc33(void) {
  LOAD_REGS();
L_71dc33: /* 71dc33: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 71dc36: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71dc3b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 71dc3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71dc3f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 71dc42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71dc47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71dc47(); return;
}

void f_71dc47(void) {
  LOAD_REGS();
L_71dc47: /* 71dc47: push 0x9f82c0 */
  { uint32_t v = 0x9f82c0u; esp -= 4; W32(esp, v); }
/* 71dc4c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71dc51: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71dc57u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71dc57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71dc5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71dc5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71dc5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71dc63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71dc63: guest_badaddr(0x71dc63); return;
}

void f_71dcc0(void) {
  LOAD_REGS();
L_71dcc0: /* 71dcc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71dcc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dcc2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71dcc3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71dcc7: mov ebx, ecx */
  ebx = ecx;
/* 71dcc9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71dccb: je 0x71dd33 */
  if (zf) goto L_71dd33;
L_71dccd: /* 71dccd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71dcd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71dcd1: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71dcd3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71dcd9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71dcd9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71dcdc: xor eax, eax */
  eax = 0;
/* 71dcde: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71dce0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71dce4: jle 0x71dd33 */
  if ((zf || sf != of)) goto L_71dd33;
L_71dce6: /* 71dce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71dce7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71dceb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71dcec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71dcf0: /* 71dcf0: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 71dcf2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71dcf4: mov ecx, ebx */
  ecx = ebx;
/* 71dcf6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71dcfcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71dcfc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71dcfe: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 71dd01: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 71dd04: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71dd06: je 0x71dd16 */
  if (zf) goto L_71dd16;
L_71dd08: /* 71dd08: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71dd0b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71dd0f: mov ecx, 0xa */
  ecx = 0xau;
/* 71dd14: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71dd16: /* 71dd16: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71dd1a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71dd1e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71dd21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71dd22: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71dd25: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71dd27: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71dd2b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71dd2f: jl 0x71dcf0 */
  if ((sf != of)) goto L_71dcf0;
L_71dd31: /* 71dd31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71dd32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71dd33: /* 71dd33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71dd34: mov eax, ebx */
  eax = ebx;
/* 71dd36: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71dd37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71dd38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71dd60(void) {
  LOAD_REGS();
L_71dd60: /* 71dd60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71dd62: push 0x9c2fd9 */
  { uint32_t v = 0x9c2fd9u; esp -= 4; W32(esp, v); }
/* 71dd67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71dd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71dd6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71dd75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71dd76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71dd78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71dd79: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71dd7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71dd80: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 71dd82: mov esi, ecx */
  esi = ecx;
/* 71dd84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71dd85: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 71dd89: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71dd8fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71dd8f: xor ebx, ebx */
  ebx = 0;
/* 71dd91: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 71dd94: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71dd97: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 71dd9b: jle 0x71ddcb */
  if ((zf || sf != of)) goto L_71ddcb;
L_71dd9d: /* 71dd9d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71dd9e: xor ebp, ebp */
  ebp = 0;
L_71dda0: /* 71dda0: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 71dda2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71dda4: mov ecx, esi */
  ecx = esi;
/* 71dda6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71ddacu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71ddac: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 71ddaf: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71ddb1: je 0x71ddbf */
  if (zf) goto L_71ddbf;
L_71ddb3: /* 71ddb3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71ddb5: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71ddb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ddb8: mov ecx, eax */
  ecx = eax;
/* 71ddba: call 0x6ccad6 */
  esp -= 4; W32(esp, 0x71ddbfu); SPILL(); f_6ccad6(); if (g_unwind) return; RELOAD();
L_71ddbf: /* 71ddbf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71ddc2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71ddc3: add ebp, 0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71ddc6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ddc8: jl 0x71dda0 */
  if ((sf != of)) goto L_71dda0;
L_71ddca: /* 71ddca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71ddcb: /* 71ddcb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71ddcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ddd0: mov eax, esi */
  eax = esi;
/* 71ddd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ddd3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ddd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71dddb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ddde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71de20(void) {
  LOAD_REGS();
L_71de20: /* 71de20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71de22: push 0x9c2ff9 */
  { uint32_t v = 0x9c2ff9u; esp -= 4; W32(esp, v); }
/* 71de27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71de2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71de2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71de35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71de36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71de37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71de38: mov esi, ecx */
  esi = ecx;
/* 71de3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71de3b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71de3f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71de42: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71de44: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71de4a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71de52: jge 0x71de68 */
  if ((sf == of)) goto L_71de68;
L_71de54: /* 71de54: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71de59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71de5e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71de63: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71de65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71de65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71de68: /* 71de68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71de6b: jle 0x71de81 */
  if ((zf || sf != of)) goto L_71de81;
L_71de6d: /* 71de6d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71de72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71de77: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71de7c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71de7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71de7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71de81: /* 71de81: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71de83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71de84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71de86: mov ecx, esi */
  ecx = esi;
/* 71de88: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71de8eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71de8e: mov ecx, esi */
  ecx = esi;
/* 71de90: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71de98: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71de9eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71de9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71dea2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71dea3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71dea4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71dea5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71deac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71deaf: ret  */
  esp += 4; SPILL(); return;
}

void f_71dee0(void) {
  LOAD_REGS();
L_71dee0: /* 71dee0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71dee1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71dee2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71dee3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71dee7: mov esi, ecx */
  esi = ecx;
/* 71dee9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71deeb: je 0x71df26 */
  if (zf) goto L_71df26;
L_71deed: /* 71deed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71def0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71def1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71def3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71def9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71def9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71defc: xor ebx, ebx */
  ebx = 0;
/* 71defe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71df00: jle 0x71df26 */
  if ((zf || sf != of)) goto L_71df26;
L_71df02: /* 71df02: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71df04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71df06: mov ecx, esi */
  ecx = esi;
/* 71df08: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71df0eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71df0e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71df10: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71df13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71df15: je 0x71df1e */
  if (zf) goto L_71df1e;
L_71df17: /* 71df17: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71df19: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71df1c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71df1e: /* 71df1e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71df21: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71df22: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71df24: jl 0x71df02 */
  if ((sf != of)) goto L_71df02;
L_71df26: /* 71df26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71df27: mov eax, esi */
  eax = esi;
/* 71df29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71df2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71df2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71df50(void) {
  LOAD_REGS();
L_71df50: /* 71df50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71df52: push 0x9c3019 */
  { uint32_t v = 0x9c3019u; esp -= 4; W32(esp, v); }
/* 71df57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71df5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71df5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71df65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71df66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71df67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71df68: mov esi, ecx */
  esi = ecx;
/* 71df6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71df6b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71df6f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71df72: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71df74: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71df7a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71df82: jge 0x71df98 */
  if ((sf == of)) goto L_71df98;
L_71df84: /* 71df84: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71df89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71df8e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71df93: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71df95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71df95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71df98: /* 71df98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71df9b: jle 0x71dfb1 */
  if ((zf || sf != of)) goto L_71dfb1;
L_71df9d: /* 71df9d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71dfa2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71dfa7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71dfac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71dfaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71dfae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71dfb1: /* 71dfb1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71dfb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71dfb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71dfb6: mov ecx, esi */
  ecx = esi;
/* 71dfb8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71dfbeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71dfbe: mov ecx, esi */
  ecx = esi;
/* 71dfc0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71dfc8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71dfceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71dfce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71dfd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71dfd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71dfd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71dfd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71dfdc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71dfdf: ret  */
  esp += 4; SPILL(); return;
}

void f_71e010(void) {
  LOAD_REGS();
L_71e010: /* 71e010: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 71e014: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e015: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71e017: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e018: mov esi, ecx */
  esi = ecx;
/* 71e01a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71e020u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71e020: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71e024: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 71e027: mov eax, esi */
  eax = esi;
/* 71e029: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e02a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_71e040(void) {
  LOAD_REGS();
L_71e040: /* 71e040: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e042: push 0x9c3039 */
  { uint32_t v = 0x9c3039u; esp -= 4; W32(esp, v); }
/* 71e047: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e04d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e04e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e056: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e057: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e058: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e059: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71e05d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e060: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 71e062: mov esi, ecx */
  esi = ecx;
/* 71e064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e065: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 71e069: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71e06fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71e06f: xor ebx, ebx */
  ebx = 0;
/* 71e071: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 71e074: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e077: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 71e07b: jle 0x71e0ad */
  if ((zf || sf != of)) goto L_71e0ad;
L_71e07d: /* 71e07d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71e07e: xor ebp, ebp */
  ebp = 0;
L_71e080: /* 71e080: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 71e082: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71e084: mov ecx, esi */
  ecx = esi;
/* 71e086: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71e08cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71e08c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71e08e: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 71e091: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71e093: je 0x71e0a1 */
  if (zf) goto L_71e0a1;
L_71e095: /* 71e095: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71e097: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71e099: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e09a: mov ecx, eax */
  ecx = eax;
/* 71e09c: call 0x6c4435 */
  esp -= 4; W32(esp, 0x71e0a1u); SPILL(); f_6c4435(); if (g_unwind) return; RELOAD();
L_71e0a1: /* 71e0a1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e0a4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71e0a5: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71e0a8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e0aa: jl 0x71e080 */
  if ((sf != of)) goto L_71e080;
L_71e0ac: /* 71e0ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71e0ad: /* 71e0ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71e0b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e0b2: mov eax, esi */
  eax = esi;
/* 71e0b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e0b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e0b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e0bd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e0c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71e100(void) {
  LOAD_REGS();
L_71e100: /* 71e100: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e102: push 0x9c3059 */
  { uint32_t v = 0x9c3059u; esp -= 4; W32(esp, v); }
/* 71e107: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e10d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e10e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e116: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e117: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e118: mov esi, ecx */
  esi = ecx;
/* 71e11a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e11b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71e11f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71e122: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71e124: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71e12a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71e132: jge 0x71e148 */
  if ((sf == of)) goto L_71e148;
L_71e134: /* 71e134: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71e139: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e13e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71e143: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e145: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e148: /* 71e148: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e14b: jle 0x71e161 */
  if ((zf || sf != of)) goto L_71e161;
L_71e14d: /* 71e14d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71e152: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e157: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71e15c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e15eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e15e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e161: /* 71e161: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 71e163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e164: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e166: mov ecx, esi */
  ecx = esi;
/* 71e168: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71e16eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71e16e: mov ecx, esi */
  ecx = esi;
/* 71e170: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71e178: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71e17eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71e17e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71e182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e183: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e184: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e185: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e18c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e18f: ret  */
  esp += 4; SPILL(); return;
}

void f_71e1c0(void) {
  LOAD_REGS();
L_71e1c0: /* 71e1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e1c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e1c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71e1c3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 71e1c7: mov ebx, ecx */
  ebx = ecx;
/* 71e1c9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71e1cb: je 0x71e233 */
  if (zf) goto L_71e233;
L_71e1cd: /* 71e1cd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 71e1d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e1d1: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 71e1d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71e1d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71e1d9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71e1dc: xor eax, eax */
  eax = 0;
/* 71e1de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e1e0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71e1e4: jle 0x71e233 */
  if ((zf || sf != of)) goto L_71e233;
L_71e1e6: /* 71e1e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e1e7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71e1eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e1ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71e1f0: /* 71e1f0: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 71e1f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71e1f4: mov ecx, ebx */
  ecx = ebx;
/* 71e1f6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71e1fcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71e1fc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71e1fe: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 71e201: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 71e204: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71e206: je 0x71e216 */
  if (zf) goto L_71e216;
L_71e208: /* 71e208: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71e20b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71e20f: mov ecx, 5 */
  ecx = 0x5u;
/* 71e214: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71e216: /* 71e216: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71e21a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71e21e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71e221: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71e222: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71e225: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e227: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71e22b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71e22f: jl 0x71e1f0 */
  if ((sf != of)) goto L_71e1f0;
L_71e231: /* 71e231: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e232: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_71e233: /* 71e233: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71e234: mov eax, ebx */
  eax = ebx;
/* 71e236: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e237: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71e238: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71e260(void) {
  LOAD_REGS();
L_71e260: /* 71e260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e262: push 0x9c3079 */
  { uint32_t v = 0x9c3079u; esp -= 4; W32(esp, v); }
/* 71e267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e26e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e277: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e278: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e279: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71e27d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e280: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 71e282: mov esi, ecx */
  esi = ecx;
/* 71e284: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e285: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 71e289: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71e28fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71e28f: xor ebx, ebx */
  ebx = 0;
/* 71e291: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 71e294: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 71e29b: jle 0x71e2cb */
  if ((zf || sf != of)) goto L_71e2cb;
L_71e29d: /* 71e29d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71e29e: xor ebp, ebp */
  ebp = 0;
L_71e2a0: /* 71e2a0: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 71e2a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71e2a4: mov ecx, esi */
  ecx = esi;
/* 71e2a6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71e2acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71e2ac: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 71e2af: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71e2b1: je 0x71e2bf */
  if (zf) goto L_71e2bf;
L_71e2b3: /* 71e2b3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71e2b5: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71e2b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e2b8: mov ecx, eax */
  ecx = eax;
/* 71e2ba: call 0x6c9859 */
  esp -= 4; W32(esp, 0x71e2bfu); SPILL(); f_6c9859(); if (g_unwind) return; RELOAD();
L_71e2bf: /* 71e2bf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e2c2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71e2c3: add ebp, 0x6c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71e2c6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e2c8: jl 0x71e2a0 */
  if ((sf != of)) goto L_71e2a0;
L_71e2ca: /* 71e2ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71e2cb: /* 71e2cb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71e2cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e2d0: mov eax, esi */
  eax = esi;
/* 71e2d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e2d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e2d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e2db: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e2de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71e320(void) {
  LOAD_REGS();
L_71e320: /* 71e320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e322: push 0x9c3099 */
  { uint32_t v = 0x9c3099u; esp -= 4; W32(esp, v); }
/* 71e327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e32d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e32e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e336: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e337: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e338: mov esi, ecx */
  esi = ecx;
/* 71e33a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e33b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71e33f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71e342: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71e344: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71e34a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71e352: jge 0x71e368 */
  if ((sf == of)) goto L_71e368;
L_71e354: /* 71e354: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71e359: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e35e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71e363: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e365u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e365: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e368: /* 71e368: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e36b: jle 0x71e381 */
  if ((zf || sf != of)) goto L_71e381;
L_71e36d: /* 71e36d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71e372: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e377: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71e37c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e37eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e37e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e381: /* 71e381: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 71e383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e386: mov ecx, esi */
  ecx = esi;
/* 71e388: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71e38eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71e38e: mov ecx, esi */
  ecx = esi;
/* 71e390: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71e398: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71e39eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71e39e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71e3a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e3a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e3a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e3a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e3ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e3af: ret  */
  esp += 4; SPILL(); return;
}

void f_71e3e0(void) {
  LOAD_REGS();
L_71e3e0: /* 71e3e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e3e2: push 0x9c30b9 */
  { uint32_t v = 0x9c30b9u; esp -= 4; W32(esp, v); }
/* 71e3e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e3ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e3ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e3f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e3f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e3f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e3f8: mov esi, ecx */
  esi = ecx;
/* 71e3fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e3fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71e3ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71e402: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71e404: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71e40a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71e412: jge 0x71e428 */
  if ((sf == of)) goto L_71e428;
L_71e414: /* 71e414: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71e419: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e41e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71e423: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e425u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e425: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e428: /* 71e428: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e42b: jle 0x71e441 */
  if ((zf || sf != of)) goto L_71e441;
L_71e42d: /* 71e42d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71e432: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e437: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71e43c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e43eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e43e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e441: /* 71e441: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71e443: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e444: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e446: mov ecx, esi */
  ecx = esi;
/* 71e448: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71e44eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71e44e: mov ecx, esi */
  ecx = esi;
/* 71e450: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71e458: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71e45eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71e45e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71e462: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e463: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e464: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e465: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e46c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e46f: ret  */
  esp += 4; SPILL(); return;
}

void f_71e4a0(void) {
  LOAD_REGS();
L_71e4a0: /* 71e4a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e4a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e4a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e4a3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71e4a7: mov esi, ecx */
  esi = ecx;
/* 71e4a9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71e4ab: je 0x71e4e6 */
  if (zf) goto L_71e4e6;
L_71e4ad: /* 71e4ad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e4b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e4b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71e4b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71e4b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71e4b9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e4bc: xor ebx, ebx */
  ebx = 0;
/* 71e4be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71e4c0: jle 0x71e4e6 */
  if ((zf || sf != of)) goto L_71e4e6;
L_71e4c2: /* 71e4c2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71e4c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71e4c6: mov ecx, esi */
  ecx = esi;
/* 71e4c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71e4ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71e4ce: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71e4d0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71e4d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71e4d5: je 0x71e4de */
  if (zf) goto L_71e4de;
L_71e4d7: /* 71e4d7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71e4d9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71e4dc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71e4de: /* 71e4de: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e4e1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71e4e2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e4e4: jl 0x71e4c2 */
  if ((sf != of)) goto L_71e4c2;
L_71e4e6: /* 71e4e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e4e7: mov eax, esi */
  eax = esi;
/* 71e4e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e4ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e4eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71e510(void) {
  LOAD_REGS();
L_71e510: /* 71e510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e512: push 0x9c30d9 */
  { uint32_t v = 0x9c30d9u; esp -= 4; W32(esp, v); }
/* 71e517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e51d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e51e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e526: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e527: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e528: mov esi, ecx */
  esi = ecx;
/* 71e52a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e52b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71e52f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71e532: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71e534: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71e53a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71e542: jge 0x71e558 */
  if ((sf == of)) goto L_71e558;
L_71e544: /* 71e544: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71e549: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e54e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71e553: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e555: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e558: /* 71e558: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e55b: jle 0x71e571 */
  if ((zf || sf != of)) goto L_71e571;
L_71e55d: /* 71e55d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71e562: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71e567: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71e56c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71e56eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e56e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71e571: /* 71e571: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71e573: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e574: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e576: mov ecx, esi */
  ecx = esi;
/* 71e578: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71e57eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71e57e: mov ecx, esi */
  ecx = esi;
/* 71e580: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71e588: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71e58eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71e58e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71e592: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e593: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e594: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e595: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e59c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e59f: ret  */
  esp += 4; SPILL(); return;
}

void f_71e5d0(void) {
  LOAD_REGS();
L_71e5d0: /* 71e5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e5d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e5d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e5d3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71e5d7: mov esi, ecx */
  esi = ecx;
/* 71e5d9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71e5db: je 0x71e652 */
  if (zf) goto L_71e652;
L_71e5dd: /* 71e5dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71e5e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e5e1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71e5e3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71e5e9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71e5e9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 71e5ec: xor eax, eax */
  eax = 0;
/* 71e5ee: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e5f0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 71e5f4: jle 0x71e652 */
  if ((zf || sf != of)) goto L_71e652;
L_71e5f6: /* 71e5f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e5f7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71e5fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71e5fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71e600: /* 71e600: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71e602: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71e604: mov ecx, esi */
  ecx = esi;
/* 71e606: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71e60cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71e60c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71e60e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 71e611: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 71e613: je 0x71e635 */
  if (zf) goto L_71e635;
L_71e615: /* 71e615: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71e617: add ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71e61b: mov edx, ecx */
  edx = ecx;
/* 71e61d: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 71e61f: mov ebx, eax */
  ebx = eax;
/* 71e621: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 71e623: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 71e626: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 71e629: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 71e62c: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 71e62f: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 71e632: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_71e635: /* 71e635: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71e639: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71e63d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 71e640: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71e641: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71e644: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e646: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71e64a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71e64e: jl 0x71e600 */
  if ((sf != of)) goto L_71e600;
L_71e650: /* 71e650: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71e651: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_71e652: /* 71e652: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e653: mov eax, esi */
  eax = esi;
/* 71e655: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e656: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 71e657: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71e690(void) {
  LOAD_REGS();
L_71e690: /* 71e690: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e692: push 0x9c30f9 */
  { uint32_t v = 0x9c30f9u; esp -= 4; W32(esp, v); }
/* 71e697: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e69d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e69e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e6a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e6a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e6a7: mov esi, ecx */
  esi = ecx;
/* 71e6a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71e6ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71e6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e6b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e6b3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71e6bb: call 0x6c3120 */
  esp -= 4; W32(esp, 0x71e6c0u); SPILL(); f_6c3120(); if (g_unwind) return; RELOAD();
/* 71e6c0: mov ecx, esi */
  ecx = esi;
/* 71e6c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71e6ca: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71e6d0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71e6d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71e6d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e6d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e6dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e6df: ret  */
  esp += 4; SPILL(); return;
}

void f_71e700(void) {
  LOAD_REGS();
L_71e700: /* 71e700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71e701: mov ebp, esp */
  ebp = esp;
/* 71e703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e705: push 0x9c3110 */
  { uint32_t v = 0x9c3110u; esp -= 4; W32(esp, v); }
/* 71e70a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e718: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71e71b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e71c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e71d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 71e720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e721: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 71e724: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71e727: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 71e729: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e72a: mov ecx, edi */
  ecx = edi;
/* 71e72c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71e733: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71e739u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71e739: mov ecx, esi */
  ecx = esi;
/* 71e73b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71e741u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71e741: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71e743: je 0x71e796 */
  if (zf) goto L_71e796;
L_71e745: /* 71e745: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 71e748: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e749: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e74a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71e750u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71e750: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71e753: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e756: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e757: mov ecx, edi */
  ecx = edi;
/* 71e759: call 0x6c63ca */
  esp -= 4; W32(esp, 0x71e75eu); SPILL(); f_6c63ca(); if (g_unwind) return; RELOAD();
/* 71e75e: xor ebx, ebx */
  ebx = 0;
L_71e760: /* 71e760: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e763: jge 0x71e7d2 */
  if ((sf == of)) goto L_71e7d2;
L_71e765: /* 71e765: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 71e767: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71e769: mov ecx, edi */
  ecx = edi;
/* 71e76b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71e771u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71e771: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* 71e774: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71e776: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 71e779: mov esi, eax */
  esi = eax;
/* 71e77b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e77c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71e77d: call 0x6c67da */
  esp -= 4; W32(esp, 0x71e782u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 71e782: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e785: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71e788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e789: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e78a: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x71e790u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 71e790: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e793: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71e794: jmp 0x71e760 */
  goto L_71e760;
L_71e796: /* 71e796: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71e799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e79a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e79b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71e7a1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71e7a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e7a4: xor ebx, ebx */
  ebx = 0;
L_71e7a6: /* 71e7a6: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e7a9: jge 0x71e7d2 */
  if ((sf == of)) goto L_71e7d2;
L_71e7ab: /* 71e7ab: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71e7ad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71e7b0: mov esi, ebx */
  esi = ebx;
/* 71e7b2: imul esi, esi, 0x44 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x44u);
  esi = (uint32_t)r;
  }
/* 71e7b5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71e7b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e7b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e7b9: call 0x6c67da */
  esp -= 4; W32(esp, 0x71e7beu); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 71e7be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e7c1: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71e7c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e7c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e7c6: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x71e7ccu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 71e7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e7cf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71e7d0: jmp 0x71e7a6 */
  goto L_71e7a6;
L_71e7d2: /* 71e7d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71e7d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71e7d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71e7d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e7da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e7e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71e7e2: mov esp, ebp */
  esp = ebp;
/* 71e7e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71e7e5: ret  */
  esp += 4; SPILL(); return;
}

void f_71e7e6(void) {
  LOAD_REGS();
L_71e7e6: /* 71e7e6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 71e7e9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71e7ee: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 71e7f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71e7f2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 71e7f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71e7fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71e7fa(); return;
}

void f_71e7fa(void) {
  LOAD_REGS();
L_71e7fa: /* 71e7fa: push 0x9f82d8 */
  { uint32_t v = 0x9f82d8u; esp -= 4; W32(esp, v); }
/* 71e7ff: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71e804: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71e80au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71e80a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e80d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e80f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e811: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71e816u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71e816: guest_badaddr(0x71e816); return;
}

void f_71e870(void) {
  LOAD_REGS();
L_71e870: /* 71e870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e872: push 0x9c3129 */
  { uint32_t v = 0x9c3129u; esp -= 4; W32(esp, v); }
/* 71e877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e87d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e87e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e887: mov esi, ecx */
  esi = ecx;
/* 71e889: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71e88d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71e890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e891: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71e893: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71e89b: call 0x6c2c43 */
  esp -= 4; W32(esp, 0x71e8a0u); SPILL(); f_6c2c43(); if (g_unwind) return; RELOAD();
/* 71e8a0: mov ecx, esi */
  ecx = esi;
/* 71e8a2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71e8aa: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71e8b0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71e8b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71e8b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71e8b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71e8bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e8bf: ret  */
  esp += 4; SPILL(); return;
}

void f_71e8e0(void) {
  LOAD_REGS();
L_71e8e0: /* 71e8e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71e8e1: mov ebp, esp */
  ebp = esp;
/* 71e8e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71e8e5: push 0x9c3140 */
  { uint32_t v = 0x9c3140u; esp -= 4; W32(esp, v); }
/* 71e8ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71e8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e8f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71e8f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71e8fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e8fc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71e8ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e900: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71e903: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71e904: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71e907: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 71e909: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e90a: mov ecx, esi */
  ecx = esi;
/* 71e90c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71e913: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71e919u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71e919: mov ecx, ebx */
  ecx = ebx;
/* 71e91b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71e921u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71e921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71e923: je 0x71e9a9 */
  if (zf) goto L_71e9a9;
L_71e929: /* 71e929: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71e92c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e92d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e92e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71e934u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71e934: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71e937: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e93a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e93b: mov ecx, esi */
  ecx = esi;
/* 71e93d: call 0x6c82fb */
  esp -= 4; W32(esp, 0x71e942u); SPILL(); f_6c82fb(); if (g_unwind) return; RELOAD();
/* 71e942: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 71e948: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 71e94f: nop  */
L_71e950: /* 71e950: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71e953: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e956: jge 0x71ea0a */
  if ((sf == of)) goto L_71ea0a;
L_71e95c: /* 71e95c: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 71e95e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71e960: mov ecx, esi */
  ecx = esi;
/* 71e962: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71e968u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71e968: imul eax, eax, 0x4c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x4cu);
  eax = (uint32_t)r;
  }
/* 71e96b: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71e96d: mov esi, eax */
  esi = eax;
/* 71e96f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71e972: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e974: call 0x6c67da */
  esp -= 4; W32(esp, 0x71e979u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 71e979: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e97c: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 71e97f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e981: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71e983u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e983: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e986: lea edx, [esi + 0x44] */
  edx = (uint32_t)(esi + 0x44u);
/* 71e989: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71e98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71e98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e990: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71e993: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e995: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71e997u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e997: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71e99a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71e99d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 71e9a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e9a3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71e9a4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71e9a7: jmp 0x71e950 */
  goto L_71e950;
L_71e9a9: /* 71e9a9: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 71e9ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e9ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71e9ae: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71e9b4u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71e9b4: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 71e9ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e9bd: xor ebx, ebx */
  ebx = 0;
/* 71e9bf: nop  */
L_71e9c0: /* 71e9c0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 71e9c3: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71e9c5: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 71e9c8: jge 0x71ea07 */
  if ((sf == of)) goto L_71ea07;
L_71e9ca: /* 71e9ca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 71e9cd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 71e9cf: mov esi, ebx */
  esi = ebx;
/* 71e9d1: imul esi, esi, 0x4c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x4cu);
  esi = (uint32_t)r;
  }
/* 71e9d4: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71e9d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 71e9d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e9da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e9db: call 0x6c67da */
  esp -= 4; W32(esp, 0x71e9e0u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 71e9e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e9e3: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* 71e9e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71e9e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e9e8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71e9eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e9ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e9ed: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 71e9f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71e9f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e9f2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71e9f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e9f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71e9f7: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71e9fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71e9fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71e9fc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71e9feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71e9fe: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 71ea01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ea04: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71ea05: jmp 0x71e9c0 */
  goto L_71e9c0;
L_71ea07: /* 71ea07: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_71ea0a: /* 71ea0a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71ea0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ea0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ea0f: mov eax, ebx */
  eax = ebx;
/* 71ea11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ea18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ea19: mov esp, ebp */
  esp = ebp;
/* 71ea1b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71ea1c: ret  */
  esp += 4; SPILL(); return;
}

void f_71ea1d(void) {
  LOAD_REGS();
L_71ea1d: /* 71ea1d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 71ea20: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71ea25: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 71ea28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ea29: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 71ea2c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71ea31u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71ea31(); return;
}

void f_71ea31(void) {
  LOAD_REGS();
L_71ea31: /* 71ea31: push 0x9f82f0 */
  { uint32_t v = 0x9f82f0u; esp -= 4; W32(esp, v); }
/* 71ea36: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71ea3b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71ea41u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71ea41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ea44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ea46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ea48: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71ea4du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71ea4d: guest_badaddr(0x71ea4d); return;
}

void f_71eab0(void) {
  LOAD_REGS();
L_71eab0: /* 71eab0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71eab2: push 0x9c3159 */
  { uint32_t v = 0x9c3159u; esp -= 4; W32(esp, v); }
/* 71eab7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71eabd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71eabe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71eac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71eac6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71eac7: mov esi, ecx */
  esi = ecx;
/* 71eac9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71eacd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71ead0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ead1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ead3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71eadb: call 0x6c5830 */
  esp -= 4; W32(esp, 0x71eae0u); SPILL(); f_6c5830(); if (g_unwind) return; RELOAD();
/* 71eae0: mov ecx, esi */
  ecx = esi;
/* 71eae2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71eaea: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71eaf0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71eaf0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71eaf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71eaf5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71eafc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71eaff: ret  */
  esp += 4; SPILL(); return;
}

void f_71eb20(void) {
  LOAD_REGS();
L_71eb20: /* 71eb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71eb21: mov ebp, esp */
  ebp = esp;
/* 71eb23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71eb25: push 0x9c3170 */
  { uint32_t v = 0x9c3170u; esp -= 4; W32(esp, v); }
/* 71eb2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71eb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71eb31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71eb38: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71eb3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71eb3c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 71eb3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71eb40: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 71eb43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71eb44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71eb47: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 71eb49: xor edi, edi */
  edi = 0;
/* 71eb4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71eb4c: mov ecx, ebx */
  ecx = ebx;
/* 71eb4e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 71eb51: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71eb57u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71eb57: mov ecx, esi */
  ecx = esi;
/* 71eb59: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71eb5fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71eb5f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71eb61: je 0x71ebda */
  if (zf) goto L_71ebda;
L_71eb63: /* 71eb63: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71eb66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71eb67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71eb68: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71eb6eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71eb6e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71eb71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71eb74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71eb75: mov ecx, ebx */
  ecx = ebx;
/* 71eb77: call 0x6c2cd9 */
  esp -= 4; W32(esp, 0x71eb7cu); SPILL(); f_6c2cd9(); if (g_unwind) return; RELOAD();
/* 71eb7c: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 71eb7f: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 71eb85: jmp 0x71eb90 */
  goto L_71eb90;
L_71eb90: /* 71eb90: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71eb93: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71eb96: jge 0x71ec21 */
  if ((sf == of)) goto L_71ec21;
L_71eb9c: /* 71eb9c: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 71eb9e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71eba0: mov ecx, ebx */
  ecx = ebx;
/* 71eba2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71eba8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71eba8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71ebaa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 71ebad: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 71ebb0: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 71ebb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ebb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71ebb5: call 0x6c67da */
  esp -= 4; W32(esp, 0x71ebbau); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 71ebba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ebbd: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 71ebc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ebc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ebc2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ebc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ebc7: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71ebca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ebcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ebcc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71ebceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ebce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71ebd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ebd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71ebd5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71ebd8: jmp 0x71eb90 */
  goto L_71eb90;
L_71ebda: /* 71ebda: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 71ebdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ebde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ebdf: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71ebe5u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71ebe5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ebe8: /* 71ebe8: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ebeb: jge 0x71ec21 */
  if ((sf == of)) goto L_71ec21;
L_71ebed: /* 71ebed: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 71ebef: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 71ebf2: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 71ebf5: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* 71ebf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ebf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ebfa: call 0x6c67da */
  esp -= 4; W32(esp, 0x71ebffu); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 71ebff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ec02: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* 71ec05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71ec06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ec07: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x71ec0du); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 71ec0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ec10: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71ec13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ec14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ec15: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x71ec1bu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 71ec1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ec1e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71ec1f: jmp 0x71ebe8 */
  goto L_71ebe8;
L_71ec21: /* 71ec21: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71ec24: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71ec27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ec28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ec29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ec30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ec31: mov esp, ebp */
  esp = ebp;
/* 71ec33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71ec34: ret  */
  esp += 4; SPILL(); return;
}

void f_71eb87(void) {
  LOAD_REGS();
L_71eb87: /* 71eb87: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 71eb8e: mov edi, edi */
  edi = edi;
L_71eb90: /* 71eb90: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71eb93: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71eb96: jge 0x71ec21 */
  if ((sf == of)) goto L_71ec21;
L_71eb9c: /* 71eb9c: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 71eb9e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71eba0: mov ecx, ebx */
  ecx = ebx;
/* 71eba2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71eba8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71eba8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71ebaa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 71ebad: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 71ebb0: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 71ebb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ebb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71ebb5: call 0x6c67da */
  esp -= 4; W32(esp, 0x71ebbau); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 71ebba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ebbd: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 71ebc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ebc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ebc2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ebc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ebc7: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71ebca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ebcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ebcc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x71ebceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ebce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71ebd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ebd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71ebd5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71ebd8: jmp 0x71eb90 */
  goto L_71eb90;
L_71ec21: /* 71ec21: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71ec24: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 71ec27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ec28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ec29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ec30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ec31: mov esp, ebp */
  esp = ebp;
/* 71ec33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71ec34: ret  */
  esp += 4; SPILL(); return;
}

void f_71ec35(void) {
  LOAD_REGS();
L_71ec35: /* 71ec35: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 71ec38: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71ec3d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 71ec40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ec41: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 71ec44: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71ec49u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71ec49(); return;
}

void f_71ec49(void) {
  LOAD_REGS();
L_71ec49: /* 71ec49: push 0x9f8308 */
  { uint32_t v = 0x9f8308u; esp -= 4; W32(esp, v); }
/* 71ec4e: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71ec53: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71ec59u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71ec59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ec5c: xor edi, edi */
  edi = 0;
/* 71ec5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ec5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ec60: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71ec65u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71ec65: guest_badaddr(0x71ec65); return;
}

void f_71ecd0(void) {
  LOAD_REGS();
L_71ecd0: /* 71ecd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71ecd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ecd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ecd6: mov esi, ecx */
  esi = ecx;
/* 71ecd8: call 0x6c2f09 */
  esp -= 4; W32(esp, 0x71ecddu); SPILL(); f_6c2f09(); if (g_unwind) return; RELOAD();
/* 71ecdd: mov eax, esi */
  eax = esi;
/* 71ecdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ece0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71ed00(void) {
  LOAD_REGS();
L_71ed00: /* 71ed00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71ed02: push 0x9c3189 */
  { uint32_t v = 0x9c3189u; esp -= 4; W32(esp, v); }
/* 71ed07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71ed0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ed0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ed15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ed16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ed17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ed18: mov esi, ecx */
  esi = ecx;
/* 71ed1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ed1b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71ed1f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71ed22: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71ed24: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71ed2a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71ed32: jge 0x71ed48 */
  if ((sf == of)) goto L_71ed48;
L_71ed34: /* 71ed34: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71ed39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ed3e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71ed43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ed45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ed45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ed48: /* 71ed48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ed4b: jle 0x71ed61 */
  if ((zf || sf != of)) goto L_71ed61;
L_71ed4d: /* 71ed4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71ed52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ed57: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71ed5c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ed5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ed5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ed61: /* 71ed61: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71ed63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ed64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ed66: mov ecx, esi */
  ecx = esi;
/* 71ed68: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71ed6eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71ed6e: mov ecx, esi */
  ecx = esi;
/* 71ed70: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71ed78: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71ed7eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71ed7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71ed82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ed83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ed84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ed85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ed8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ed8f: ret  */
  esp += 4; SPILL(); return;
}

void f_71edc0(void) {
  LOAD_REGS();
L_71edc0: /* 71edc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71edc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71edc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71edc6: mov esi, ecx */
  esi = ecx;
/* 71edc8: call 0x6c76f3 */
  esp -= 4; W32(esp, 0x71edcdu); SPILL(); f_6c76f3(); if (g_unwind) return; RELOAD();
/* 71edcd: mov eax, esi */
  eax = esi;
/* 71edcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71edd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71edf0(void) {
  LOAD_REGS();
L_71edf0: /* 71edf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71edf2: push 0x9c31a9 */
  { uint32_t v = 0x9c31a9u; esp -= 4; W32(esp, v); }
/* 71edf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71edfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71edfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ee05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ee06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ee07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ee08: mov esi, ecx */
  esi = ecx;
/* 71ee0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ee0b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71ee0f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71ee12: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71ee14: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71ee1a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71ee22: jge 0x71ee38 */
  if ((sf == of)) goto L_71ee38;
L_71ee24: /* 71ee24: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71ee29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ee2e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71ee33: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ee35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ee35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ee38: /* 71ee38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ee3b: jle 0x71ee51 */
  if ((zf || sf != of)) goto L_71ee51;
L_71ee3d: /* 71ee3d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71ee42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ee47: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71ee4c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ee4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ee4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ee51: /* 71ee51: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 71ee53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ee54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ee56: mov ecx, esi */
  ecx = esi;
/* 71ee58: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71ee5eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71ee5e: mov ecx, esi */
  ecx = esi;
/* 71ee60: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71ee68: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71ee6eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71ee6e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71ee72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ee73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ee74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ee75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ee7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ee7f: ret  */
  esp += 4; SPILL(); return;
}

void f_71eeb0(void) {
  LOAD_REGS();
L_71eeb0: /* 71eeb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71eeb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71eeb3: mov esi, ecx */
  esi = ecx;
/* 71eeb5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x71eebbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 71eebb: mov eax, esi */
  eax = esi;
/* 71eebd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71eebe: ret  */
  esp += 4; SPILL(); return;
}

void f_71eed0(void) {
  LOAD_REGS();
L_71eed0: /* 71eed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71eed4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71eed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71eed6: mov esi, ecx */
  esi = ecx;
/* 71eed8: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x71eeddu); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 71eedd: mov eax, esi */
  eax = esi;
/* 71eedf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71eee0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71ef00(void) {
  LOAD_REGS();
L_71ef00: /* 71ef00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71ef02: push 0x9c31c9 */
  { uint32_t v = 0x9c31c9u; esp -= 4; W32(esp, v); }
/* 71ef07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71ef0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71ef0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71ef15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71ef16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71ef17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71ef18: mov esi, ecx */
  esi = ecx;
/* 71ef1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ef1b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71ef1f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71ef22: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71ef24: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71ef2a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71ef32: jge 0x71ef48 */
  if ((sf == of)) goto L_71ef48;
L_71ef34: /* 71ef34: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71ef39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ef3e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71ef43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ef45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ef45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ef48: /* 71ef48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71ef4b: jle 0x71ef61 */
  if ((zf || sf != of)) goto L_71ef61;
L_71ef4d: /* 71ef4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71ef52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71ef57: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71ef5c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71ef5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71ef5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71ef61: /* 71ef61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71ef63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71ef64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71ef66: mov ecx, esi */
  ecx = esi;
/* 71ef68: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71ef6eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71ef6e: mov ecx, esi */
  ecx = esi;
/* 71ef70: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71ef78: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71ef7eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71ef7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71ef82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71ef83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71ef84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71ef85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71ef8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71ef8f: ret  */
  esp += 4; SPILL(); return;
}

void f_71efc0(void) {
  LOAD_REGS();
L_71efc0: /* 71efc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71efc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71efc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71efc3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71efc7: mov esi, ecx */
  esi = ecx;
/* 71efc9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71efcb: je 0x71f006 */
  if (zf) goto L_71f006;
L_71efcd: /* 71efcd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71efd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71efd1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71efd3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71efd9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71efd9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71efdc: xor ebx, ebx */
  ebx = 0;
/* 71efde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71efe0: jle 0x71f006 */
  if ((zf || sf != of)) goto L_71f006;
L_71efe2: /* 71efe2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71efe4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71efe6: mov ecx, esi */
  ecx = esi;
/* 71efe8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71efeeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71efee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71eff0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71eff3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71eff5: je 0x71effe */
  if (zf) goto L_71effe;
L_71eff7: /* 71eff7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71eff9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71effc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71effe: /* 71effe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71f001: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71f002: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f004: jl 0x71efe2 */
  if ((sf != of)) goto L_71efe2;
L_71f006: /* 71f006: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f007: mov eax, esi */
  eax = esi;
/* 71f009: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f00a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f00b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f030(void) {
  LOAD_REGS();
L_71f030: /* 71f030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f031: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f033: mov esi, ecx */
  esi = ecx;
/* 71f035: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x71f03bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 71f03b: mov eax, esi */
  eax = esi;
/* 71f03d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f03e: ret  */
  esp += 4; SPILL(); return;
}

void f_71f050(void) {
  LOAD_REGS();
L_71f050: /* 71f050: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71f054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f056: mov esi, ecx */
  esi = ecx;
/* 71f058: call 0x6c725c */
  esp -= 4; W32(esp, 0x71f05du); SPILL(); f_6c725c(); if (g_unwind) return; RELOAD();
/* 71f05d: mov eax, esi */
  eax = esi;
/* 71f05f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f060: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f080(void) {
  LOAD_REGS();
L_71f080: /* 71f080: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f082: push 0x9c31e9 */
  { uint32_t v = 0x9c31e9u; esp -= 4; W32(esp, v); }
/* 71f087: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f08d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f08e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f095: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f096: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f097: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f098: mov esi, ecx */
  esi = ecx;
/* 71f09a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f09b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71f09f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71f0a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f0a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71f0aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f0b2: jge 0x71f0c8 */
  if ((sf == of)) goto L_71f0c8;
L_71f0b4: /* 71f0b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71f0b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f0be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71f0c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f0c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f0c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f0c8: /* 71f0c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f0cb: jle 0x71f0e1 */
  if ((zf || sf != of)) goto L_71f0e1;
L_71f0cd: /* 71f0cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71f0d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f0d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71f0dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f0deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f0de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f0e1: /* 71f0e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71f0e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f0e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f0e6: mov ecx, esi */
  ecx = esi;
/* 71f0e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71f0eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71f0ee: mov ecx, esi */
  ecx = esi;
/* 71f0f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71f0f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f0feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f0fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71f102: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f103: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f104: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f105: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f10c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f10f: ret  */
  esp += 4; SPILL(); return;
}

void f_71f140(void) {
  LOAD_REGS();
L_71f140: /* 71f140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f142: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f143: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71f147: mov esi, ecx */
  esi = ecx;
/* 71f149: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71f14b: je 0x71f186 */
  if (zf) goto L_71f186;
L_71f14d: /* 71f14d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71f150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f151: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71f153: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71f159u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71f159: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71f15c: xor ebx, ebx */
  ebx = 0;
/* 71f15e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f160: jle 0x71f186 */
  if ((zf || sf != of)) goto L_71f186;
L_71f162: /* 71f162: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 71f164: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71f166: mov ecx, esi */
  ecx = esi;
/* 71f168: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71f16eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71f16e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 71f170: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 71f173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71f175: je 0x71f17e */
  if (zf) goto L_71f17e;
L_71f177: /* 71f177: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71f179: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71f17c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71f17e: /* 71f17e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71f181: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71f182: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f184: jl 0x71f162 */
  if ((sf != of)) goto L_71f162;
L_71f186: /* 71f186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f187: mov eax, esi */
  eax = esi;
/* 71f189: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f18a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f18b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f1b0(void) {
  LOAD_REGS();
L_71f1b0: /* 71f1b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71f1b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f1b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f1b6: mov esi, ecx */
  esi = ecx;
/* 71f1b8: call 0x6c6708 */
  esp -= 4; W32(esp, 0x71f1bdu); SPILL(); f_6c6708(); if (g_unwind) return; RELOAD();
/* 71f1bd: mov eax, esi */
  eax = esi;
/* 71f1bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f1c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f1e0(void) {
  LOAD_REGS();
L_71f1e0: /* 71f1e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f1e2: push 0x9c3209 */
  { uint32_t v = 0x9c3209u; esp -= 4; W32(esp, v); }
/* 71f1e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f1ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f1ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f1f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f1f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f1f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f1f8: mov esi, ecx */
  esi = ecx;
/* 71f1fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f1fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71f1ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71f202: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f204: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71f20a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f212: jge 0x71f228 */
  if ((sf == of)) goto L_71f228;
L_71f214: /* 71f214: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71f219: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f21e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71f223: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f225u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f225: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f228: /* 71f228: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f22b: jle 0x71f241 */
  if ((zf || sf != of)) goto L_71f241;
L_71f22d: /* 71f22d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71f232: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f237: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71f23c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f23eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f23e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f241: /* 71f241: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 71f243: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f244: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f246: mov ecx, esi */
  ecx = esi;
/* 71f248: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71f24eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71f24e: mov ecx, esi */
  ecx = esi;
/* 71f250: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71f258: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f25eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f25e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71f262: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f263: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f264: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f265: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f26c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f26f: ret  */
  esp += 4; SPILL(); return;
}

void f_71f2a0(void) {
  LOAD_REGS();
L_71f2a0: /* 71f2a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 71f2a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f2a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f2a6: mov esi, ecx */
  esi = ecx;
/* 71f2a8: call 0x6cbe88 */
  esp -= 4; W32(esp, 0x71f2adu); SPILL(); f_6cbe88(); if (g_unwind) return; RELOAD();
/* 71f2ad: mov eax, esi */
  eax = esi;
/* 71f2af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f2b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71f2d0(void) {
  LOAD_REGS();
L_71f2d0: /* 71f2d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f2d2: push 0x9c3229 */
  { uint32_t v = 0x9c3229u; esp -= 4; W32(esp, v); }
/* 71f2d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f2de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f2e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f2e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f2e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f2e8: mov esi, ecx */
  esi = ecx;
/* 71f2ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f2eb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 71f2ef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 71f2f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f2f4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 71f2fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f302: jge 0x71f318 */
  if ((sf == of)) goto L_71f318;
L_71f304: /* 71f304: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 71f309: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f30e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71f313: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f315: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f318: /* 71f318: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f31b: jle 0x71f331 */
  if ((zf || sf != of)) goto L_71f331;
L_71f31d: /* 71f31d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 71f322: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71f327: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71f32c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f32eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f32e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_71f331: /* 71f331: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 71f333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f336: mov ecx, esi */
  ecx = esi;
/* 71f338: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71f33eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71f33e: mov ecx, esi */
  ecx = esi;
/* 71f340: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 71f348: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f34eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f34e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71f352: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f353: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f354: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f355: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f35c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f35f: ret  */
  esp += 4; SPILL(); return;
}

void f_71f390(void) {
  LOAD_REGS();
L_71f390: /* 71f390: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f392: push 0x9c3249 */
  { uint32_t v = 0x9c3249u; esp -= 4; W32(esp, v); }
/* 71f397: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f39d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f39e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f3a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f3a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f3a7: mov esi, ecx */
  esi = ecx;
/* 71f3a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 71f3ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71f3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f3b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f3b3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 71f3bb: call 0x6cc02c */
  esp -= 4; W32(esp, 0x71f3c0u); SPILL(); f_6cc02c(); if (g_unwind) return; RELOAD();
/* 71f3c0: mov ecx, esi */
  ecx = esi;
/* 71f3c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 71f3ca: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x71f3d0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 71f3d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 71f3d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f3d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f3dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f3df: ret  */
  esp += 4; SPILL(); return;
}

void f_71f400(void) {
  LOAD_REGS();
L_71f400: /* 71f400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71f401: mov ebp, esp */
  ebp = esp;
/* 71f403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 71f405: push 0x9c3269 */
  { uint32_t v = 0x9c3269u; esp -= 4; W32(esp, v); }
/* 71f40a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71f410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 71f418: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 71f41b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f41c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f41d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 71f420: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f421: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 71f424: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 71f427: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71f429: xor ebx, ebx */
  ebx = 0;
/* 71f42b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f42c: mov ecx, edi */
  ecx = edi;
/* 71f42e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 71f431: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x71f437u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 71f437: mov ecx, esi */
  ecx = esi;
/* 71f439: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x71f43fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 71f43f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71f441: je 0x71f4d4 */
  if (zf) goto L_71f4d4;
L_71f447: /* 71f447: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 71f44a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f44b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f44c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71f452u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71f452: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 71f455: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f458: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f459: mov ecx, edi */
  ecx = edi;
/* 71f45b: call 0x6c77c5 */
  esp -= 4; W32(esp, 0x71f460u); SPILL(); f_6c77c5(); if (g_unwind) return; RELOAD();
/* 71f460: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 71f463: mov ebx, dword ptr [0xcfa2dc] */
  ebx = R32((uint32_t)(0xcfa2dcu));
/* 71f469: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_71f470: /* 71f470: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 71f473: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f476: jge 0x71f51a */
  if ((sf == of)) goto L_71f51a;
L_71f47c: /* 71f47c: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71f47e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71f480: mov ecx, edi */
  ecx = edi;
/* 71f482: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71f488u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71f488: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71f48a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 71f48d: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 71f490: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71f492: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 71f495: je 0x71f4b2 */
  if (zf) goto L_71f4b2;
L_71f497: /* 71f497: mov ecx, esi */
  ecx = esi;
/* 71f499: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x71f49fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 71f49f: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71f4a2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 71f4a6: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x71f4acu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 71f4ac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 71f4b0: jmp 0x71f4b4 */
  goto L_71f4b4;
L_71f4b2: /* 71f4b2: xor esi, esi */
  esi = 0;
L_71f4b4: /* 71f4b4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 71f4b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f4b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71f4b9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f4bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f4bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f4be: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71f4c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f4c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f4c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f4c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f4c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 71f4c8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 71f4cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f4ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71f4cf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 71f4d2: jmp 0x71f470 */
  goto L_71f470;
L_71f4d4: /* 71f4d4: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 71f4d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f4d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f4d9: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x71f4dfu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 71f4df: mov ebx, dword ptr [0xcfa2dc] */
  ebx = R32((uint32_t)(0xcfa2dcu));
/* 71f4e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f4e8: xor esi, esi */
  esi = 0;
/* 71f4ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_71f4f0: /* 71f4f0: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f4f3: jge 0x71f517 */
  if ((sf == of)) goto L_71f517;
L_71f4f5: /* 71f4f5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71f4f7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 71f4fa: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 71f4fd: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 71f500: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f501: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71f502: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f504u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f504: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f507: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 71f50a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f50b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f50c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x71f50eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71f50e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 71f511: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f514: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 71f515: jmp 0x71f4f0 */
  goto L_71f4f0;
L_71f517: /* 71f517: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_71f51a: /* 71f51a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 71f51d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f51e: mov eax, esi */
  eax = esi;
/* 71f520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71f528: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f529: mov esp, ebp */
  esp = ebp;
/* 71f52b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71f52c: ret  */
  esp += 4; SPILL(); return;
}

void f_71f52d(void) {
  LOAD_REGS();
L_71f52d: /* 71f52d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 71f530: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 71f535: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 71f538: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71f539: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 71f53c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71f541u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_71f541(); return;
}

void f_71f541(void) {
  LOAD_REGS();
L_71f541: /* 71f541: push 0x9f8320 */
  { uint32_t v = 0x9f8320u; esp -= 4; W32(esp, v); }
/* 71f546: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 71f54b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x71f551u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 71f551: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71f554: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f556: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 71f558: call 0x99caf8 */
  esp -= 4; W32(esp, 0x71f55du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_71f55d: guest_badaddr(0x71f55d); return;
}

void f_71f5c0(void) {
  LOAD_REGS();
L_71f5c0: /* 71f5c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 71f5c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 71f5c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71f5c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 71f5c7: mov esi, ecx */
  esi = ecx;
/* 71f5c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71f5cb: je 0x71f610 */
  if (zf) goto L_71f610;
L_71f5cd: /* 71f5cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71f5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f5d1: call 0x6c77c5 */
  esp -= 4; W32(esp, 0x71f5d6u); SPILL(); f_6c77c5(); if (g_unwind) return; RELOAD();
/* 71f5d6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71f5d9: xor ebx, ebx */
  ebx = 0;
/* 71f5db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71f5dd: jle 0x71f610 */
  if ((zf || sf != of)) goto L_71f610;
L_71f5df: /* 71f5df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71f5e0: xor ebp, ebp */
  ebp = 0;
L_71f5e2: /* 71f5e2: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71f5e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71f5e6: mov ecx, esi */
  ecx = esi;
/* 71f5e8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71f5eeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71f5ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 71f5f0: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 71f5f3: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 71f5f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71f5f8: je 0x71f604 */
  if (zf) goto L_71f604;
L_71f5fa: /* 71f5fa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71f5fc: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71f5fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71f5ff: call 0x6cc7f7 */
  esp -= 4; W32(esp, 0x71f604u); SPILL(); f_6cc7f7(); if (g_unwind) return; RELOAD();
L_71f604: /* 71f604: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71f607: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 71f608: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71f60b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71f60d: jl 0x71f5e2 */
  if ((sf != of)) goto L_71f5e2;
L_71f60f: /* 71f60f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_71f610: /* 71f610: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71f611: mov eax, esi */
  eax = esi;
/* 71f613: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71f614: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71f615: ret 4 */
  esp += 8; SPILL(); return;
}
