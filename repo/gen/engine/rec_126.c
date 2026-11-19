#include "recomp.h"
#include "rec_mod.h"

void f_92b5f0(void) {
  LOAD_REGS();
L_92b5f0: /* 92b5f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b5f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92b5f5: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 92b5f8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b5fa: jne 0x92b602 */
  if (!zf) goto L_92b602;
L_92b5fc: /* 92b5fc: xor eax, eax */
  eax = 0;
/* 92b5fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b5ff: ret 4 */
  esp += 8; SPILL(); return;
L_92b602: /* 92b602: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 92b605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b606: call 0x92c450 */
  esp -= 4; W32(esp, 0x92b60bu); SPILL(); f_92c450(); if (g_unwind) return; RELOAD();
/* 92b60b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b60d: jne 0x92b615 */
  if (!zf) goto L_92b615;
L_92b60f: /* 92b60f: xor eax, eax */
  eax = 0;
/* 92b611: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b612: ret 4 */
  esp += 8; SPILL(); return;
L_92b615: /* 92b615: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 92b61c: mov dword ptr [esi + 0x1c], 0xffffffff */
  W32((uint32_t)(esi + 0x1cu), 0xffffffffu);
/* 92b623: mov eax, 1 */
  eax = 0x1u;
/* 92b628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b629: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b630(void) {
  LOAD_REGS();
L_92b630: /* 92b630: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b634: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b637: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b63b: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 92b63e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92b640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b641: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92b644: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b645: call 0x92c7f0 */
  esp -= 4; W32(esp, 0x92b64au); SPILL(); f_92c7f0(); if (g_unwind) return; RELOAD();
/* 92b64a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 92b64d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b650(void) {
  LOAD_REGS();
L_92b650: /* 92b650: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b654: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b657: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b65b: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 92b65e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92b660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b661: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92b664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b665: call 0x92c7f0 */
  esp -= 4; W32(esp, 0x92b66au); SPILL(); f_92c7f0(); if (g_unwind) return; RELOAD();
/* 92b66a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 92b66d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b670(void) {
  LOAD_REGS();
L_92b670: /* 92b670: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b674: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92b677: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b67b: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 92b67e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92b67f: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 92b682: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b683: call 0x92c780 */
  esp -= 4; W32(esp, 0x92b688u); SPILL(); f_92c780(); if (g_unwind) return; RELOAD();
/* 92b688: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 92b68b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b690(void) {
  LOAD_REGS();
L_92b690: /* 92b690: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b694: call 0x92d270 */
  esp -= 4; W32(esp, 0x92b699u); SPILL(); f_92d270(); if (g_unwind) return; RELOAD();
/* 92b699: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b6a0(void) {
  LOAD_REGS();
L_92b6a0: /* 92b6a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b6a4: call 0x92d2c0 */
  esp -= 4; W32(esp, 0x92b6a9u); SPILL(); f_92d2c0(); if (g_unwind) return; RELOAD();
/* 92b6a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b6b0(void) {
  LOAD_REGS();
L_92b6b0: /* 92b6b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b6b4: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 92b6ba: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 92b6c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92b6d0(void) {
  LOAD_REGS();
L_92b6d0: /* 92b6d0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92b6d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b6d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b6d6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92b6da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b6db: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 92b6df: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 92b6e5: mov ebx, dword ptr [edi + 0x18] */
  ebx = R32((uint32_t)(edi + 0x18u));
/* 92b6e8: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 92b6eb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 92b6ee: mov ecx, ebx */
  ecx = ebx;
/* 92b6f0: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 92b6f2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b6f4: jl 0x92b6fe */
  if ((sf != of)) goto L_92b6fe;
L_92b6f6: /* 92b6f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b6f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b6f8: xor eax, eax */
  eax = 0;
/* 92b6fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b6fb: ret 0xc */
  esp += 16; SPILL(); return;
L_92b6fe: /* 92b6fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 92b700: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92b701: mov ecx, edi */
  ecx = edi;
/* 92b703: call 0x92c750 */
  esp -= 4; W32(esp, 0x92b708u); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92b708: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b70a: jne 0x92b725 */
  if (!zf) goto L_92b725;
L_92b70c: /* 92b70c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92b710: /* 92b710: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92b712: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b714: jge 0x92b72b */
  if ((sf == of)) goto L_92b72b;
L_92b716: /* 92b716: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92b717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92b718: mov ecx, edi */
  ecx = edi;
/* 92b71a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 92b71c: call 0x92c750 */
  esp -= 4; W32(esp, 0x92b721u); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92b721: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b723: je 0x92b710 */
  if (zf) goto L_92b710;
L_92b725: /* 92b725: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92b727: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92b729: jl 0x92b733 */
  if ((sf != of)) goto L_92b733;
L_92b72b: /* 92b72b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b72c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b72d: xor eax, eax */
  eax = 0;
/* 92b72f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b730: ret 0xc */
  esp += 16; SPILL(); return;
L_92b733: /* 92b733: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 92b736: imul eax, eax, 0x98 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x98u);
  eax = (uint32_t)r;
  }
/* 92b73c: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 92b740: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92b744: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92b746: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92b749: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92b74b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92b74c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92b74d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b74e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 92b750: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 92b753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b754: mov eax, 1 */
  eax = 0x1u;
/* 92b759: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b75a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92b760(void) {
  LOAD_REGS();
L_92b760: /* 92b760: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b764: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 92b767: sub eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92b76a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b770(void) {
  LOAD_REGS();
L_92b770: /* 92b770: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b776: jne 0x92b77d */
  if (!zf) goto L_92b77d;
L_92b778: /* 92b778: mov eax, 0x92afd0 */
  eax = 0x92afd0u;
L_92b77d: /* 92b77d: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 92b781: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b785: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 92b788: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 92b78c: jmp 0x99b210 */
  SPILL(); f_99b210(); return;
}

void f_92b7a0(void) {
  LOAD_REGS();
L_92b7a0: /* 92b7a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b7a4: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 92b7a7: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 92b7ab: jmp 0x99b220 */
  goto L_99b220;
L_99b220: /* 99b220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 99b224: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 99b227: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92b7b0(void) {
  LOAD_REGS();
L_92b7b0: /* 92b7b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b7b4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92b7b8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92b7ba: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 92b7bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b7bd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92b7c0: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 92b7c3: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92b7c6: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 92b7c9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92b7cb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92b7cd: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92b7cf: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 92b7d1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b7d3: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92b7d5: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 92b7d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b7d9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92b7dd: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 92b7e1: fmul dword ptr [0xa087d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa087d0u)));
/* 92b7e7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 92b7e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92b7eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b7ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92b7ef: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b7f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92b7f4: jne 0x92b7fa */
  if (!zf) goto L_92b7fa;
L_92b7f6: /* 92b7f6: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92b7f8: jmp 0x92b7fc */
  goto L_92b7fc;
L_92b7fa: /* 92b7fa: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_92b7fc: /* 92b7fc: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 92b7ff: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 92b802: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 92b805: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 92b808: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b80a: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 92b80d: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 92b810: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b812: fcomp dword ptr [0x9f7c08] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c08u)));
  FPOP();
/* 92b818: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b81a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b81d: jne 0x92b823 */
  if (!zf) goto L_92b823;
L_92b81f: /* 92b81f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92b821: jmp 0x92b825 */
  goto L_92b825;
L_92b823: /* 92b823: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_92b825: /* 92b825: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b827: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92b828: je 0x92b834 */
  if (zf) goto L_92b834;
L_92b82a: /* 92b82a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92b82c: je 0x92b834 */
  if (zf) goto L_92b834;
L_92b82e: /* 92b82e: mov eax, 1 */
  eax = 0x1u;
/* 92b833: ret  */
  esp += 4; SPILL(); return;
L_92b834: /* 92b834: xor eax, eax */
  eax = 0;
/* 92b836: ret  */
  esp += 4; SPILL(); return;
}

void f_92b840(void) {
  LOAD_REGS();
L_92b840: /* 92b840: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92b844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b845: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b846: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 92b84a: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
/* 92b84d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92b84f: jle 0x92b865 */
  if ((zf || sf != of)) goto L_92b865;
L_92b851: /* 92b851: xor eax, eax */
  eax = 0;
/* 92b853: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_92b854: /* 92b854: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92b856: lea ebp, [eax + ecx + 0x10] */
  ebp = (uint32_t)(eax + ecx + 0x10u);
/* 92b85a: mov dword ptr [eax + ecx + 8], ebp */
  W32((uint32_t)(eax + ecx + 0x8u), ebp);
/* 92b85e: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92b861: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 92b862: jne 0x92b854 */
  if (!zf) goto L_92b854;
L_92b864: /* 92b864: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_92b865: /* 92b865: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 92b867: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 92b86a: mov dword ptr [edi + eax - 8], 0 */
  W32((uint32_t)(edi + eax + 0xfffffff8u), 0x0u);
/* 92b872: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92b874: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92b875: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* 92b87c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 92b87f: mov dword ptr [edx + 0xc], 0 */
  W32((uint32_t)(edx + 0xcu), 0x0u);
/* 92b886: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b887: ret  */
  esp += 4; SPILL(); return;
}

void f_92b890(void) {
  LOAD_REGS();
L_92b890: /* 92b890: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b894: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 92b897: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92b899: je 0x92b8aa */
  if (zf) goto L_92b8aa;
L_92b89b: /* 92b89b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92b89e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 92b8a1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92b8a5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92b8a7: inc dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_92b8aa: /* 92b8aa: ret  */
  esp += 4; SPILL(); return;
}

void f_92b8b0(void) {
  LOAD_REGS();
L_92b8b0: /* 92b8b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92b8b4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92b8b7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92b8bb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 92b8be: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 92b8c1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92b8c4: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 92b8c7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92b8ca: ret  */
  esp += 4; SPILL(); return;
}

void f_92b8d0(void) {
  LOAD_REGS();
L_92b8d0: /* 92b8d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92b8d4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92b8d7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92b8db: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92b8de: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92b8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b8e2: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 92b8e5: mov dword ptr [edx + 0xc], esi */
  W32((uint32_t)(edx + 0xcu), esi);
/* 92b8e8: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 92b8eb: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92b8ee: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 92b8f1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 92b8f4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 92b8f7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 92b8fa: dec dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 92b8fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92b8fe: ret  */
  esp += 4; SPILL(); return;
}

void f_92b900(void) {
  LOAD_REGS();
L_92b900: /* 92b900: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92b903: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92b907: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 92b90a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 92b90d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 92b910: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92b911: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92b912: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92b913: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 92b917: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92b918: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 92b91c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92b91f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92b923: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 92b925: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92b928: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92b92c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 92b92f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 92b931: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92b934: xor ebp, ebp */
  ebp = 0;
/* 92b936: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92b938: xor ebx, ebx */
  ebx = 0;
/* 92b93a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92b93c: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* 92b941: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92b943: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92b946: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92b948: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92b94a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92b94c: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 92b94f: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92b952: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92b954: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92b956: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92b958: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92b95a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92b95d: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 92b95f: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 92b962: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92b965: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 92b967: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b969: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92b96b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92b96e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92b970: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92b973: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92b975: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 92b977: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92b979: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92b97b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b97d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92b983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b985: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92b988: jnp 0x92b990 */
  if (!pf) goto L_92b990;
L_92b98a: /* 92b98a: mov byte ptr [esp + 0x24], bl */
  W8((uint32_t)(esp + 0x24u), (ebx & 0xffu));
/* 92b98e: mov edi, edi */
  edi = edi;
L_92b990: /* 92b990: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92b992: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92b995: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92b998: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92b99c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 92b99f: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 92b9a1: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92b9a4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92b9a6: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92b9a8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92b9aa: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92b9ad: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92b9af: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92b9b1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92b9b3: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 92b9b6: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92b9b9: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92b9bb: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92b9bd: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92b9bf: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92b9c1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92b9c4: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 92b9c6: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 92b9c9: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92b9cc: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 92b9ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b9d0: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92b9d2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92b9d5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92b9d7: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92b9da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92b9dc: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 92b9de: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92b9e0: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92b9e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92b9e4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92b9ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92b9ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92b9ef: jp 0x92b9f5 */
  if (pf) goto L_92b9f5;
L_92b9f1: /* 92b9f1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92b9f3: jmp 0x92b9f7 */
  goto L_92b9f7;
L_92b9f5: /* 92b9f5: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_92b9f7: /* 92b9f7: mov dl, byte ptr [esp + 0x24] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 92b9fb: mov byte ptr [esp + 0x20], al */
  W8((uint32_t)(esp + 0x20u), (eax & 0xffu));
/* 92b9ff: xor al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ba01: je 0x92ba11 */
  if (zf) goto L_92ba11;
L_92ba03: /* 92ba03: mov al, byte ptr [esp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 92ba07: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92ba09: je 0x92ba0f */
  if (zf) goto L_92ba0f;
L_92ba0b: /* 92ba0b: mov ebx, ecx */
  ebx = ecx;
/* 92ba0d: jmp 0x92ba11 */
  goto L_92ba11;
L_92ba0f: /* 92ba0f: mov ebp, ecx */
  ebp = ecx;
L_92ba11: /* 92ba11: mov al, byte ptr [esp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 92ba15: mov byte ptr [esp + 0x24], al */
  W8((uint32_t)(esp + 0x24u), (eax & 0xffu));
/* 92ba19: mov eax, ecx */
  eax = ecx;
/* 92ba1b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92ba1f: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 92ba22: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92ba26: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92ba2a: jne 0x92b990 */
  if (!zf) goto L_92b990;
L_92ba30: /* 92ba30: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ba32: je 0x92bb73 */
  if (zf) goto L_92bb73;
L_92ba38: /* 92ba38: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 92ba3b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92ba3d: je 0x92ba55 */
  if (zf) goto L_92ba55;
L_92ba3f: /* 92ba3f: nop  */
L_92ba40: /* 92ba40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ba41: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 92ba45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ba46: call 0x92b8d0 */
  esp -= 4; W32(esp, 0x92ba4bu); SPILL(); f_92b8d0(); if (g_unwind) return; RELOAD();
/* 92ba4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 92ba4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ba51: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92ba53: jne 0x92ba40 */
  if (!zf) goto L_92ba40;
L_92ba55: /* 92ba55: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92ba59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ba5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ba5b: call 0x92b890 */
  esp -= 4; W32(esp, 0x92ba60u); SPILL(); f_92b890(); if (g_unwind) return; RELOAD();
/* 92ba60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ba61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92ba62: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 92ba66: call 0x92b8b0 */
  esp -= 4; W32(esp, 0x92ba6bu); SPILL(); f_92b8b0(); if (g_unwind) return; RELOAD();
/* 92ba6b: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92ba6e: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 92ba71: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92ba74: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 92ba76: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 92ba79: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 92ba7d: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92ba80: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ba83: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92ba85: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92ba87: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92ba89: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92ba8b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92ba8d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92ba90: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92ba92: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92ba95: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92ba98: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92ba9a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ba9c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92ba9f: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92baa1: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92baa3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92baa5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92baa8: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92baab: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92baad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92baaf: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92bab1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bab4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bab6: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bab9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92babb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92babd: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92babf: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bac1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bac3: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 92bac6: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 92bac9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 92bacc: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92bacf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 92bad1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92bad4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92bad7: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92bada: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92badc: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92bade: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92bae0: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bae3: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92bae5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bae7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bae9: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 92baec: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92baef: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92baf1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 92baf3: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92baf6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92baf8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bafb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bafd: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92baff: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92bb01: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bb03: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 92bb05: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bb07: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bb09: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bb0b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bb0e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bb10: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92bb13: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92bb16: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bb18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bb1a: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 92bb1d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 92bb1f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92bb22: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 92bb25: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 92bb28: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 92bb2a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92bb2d: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 92bb30: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92bb32: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 92bb34: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92bb36: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bb38: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92bb3a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bb3d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bb3f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92bb42: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 92bb45: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bb47: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bb49: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bb4c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92bb4e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bb50: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bb52: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92bb55: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 92bb58: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bb5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bb5c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92bb5e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bb61: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bb63: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bb66: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bb68: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92bb6a: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 92bb6c: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bb6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bb70: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
L_92bb73: /* 92bb73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92bb74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92bb75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92bb76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92bb77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92bb7a: ret  */
  esp += 4; SPILL(); return;
}

void f_92bb80(void) {
  LOAD_REGS();
L_92bb80: /* 92bb80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92bb81: mov ebp, esp */
  ebp = esp;
/* 92bb83: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92bb86: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 92bb89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92bb8a: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 92bb8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92bb8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92bb8f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 92bb92: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92bb94: fmul dword ptr [0xa087d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa087d0u)));
/* 92bb9a: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 92bb9d: je 0x92bbdc */
  if (zf) goto L_92bbdc;
L_92bb9f: /* 92bb9f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 92bba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92bba4: je 0x92bbdc */
  if (zf) goto L_92bbdc;
L_92bba6: /* 92bba6: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 92bbac: xor edx, edx */
  edx = 0;
/* 92bbae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92bbb0: jle 0x92bbea */
  if ((zf || sf != of)) goto L_92bbea;
L_92bbb2: /* 92bbb2: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 92bbb5: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 92bbb8: mov esi, edi */
  esi = edi;
/* 92bbba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_92bbc0: /* 92bbc0: fcom dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
/* 92bbc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92bbc4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92bbc7: jne 0x92bbd0 */
  if (!zf) goto L_92bbd0;
L_92bbc9: /* 92bbc9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92bbcb: lea edx, [ecx - 0x18] */
  edx = (uint32_t)(ecx + 0xffffffe8u);
/* 92bbce: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
L_92bbd0: /* 92bbd0: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92bbd3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 92bbd4: jne 0x92bbc0 */
  if (!zf) goto L_92bbc0;
L_92bbd6: /* 92bbd6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92bbd8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92bbda: jne 0x92bbfa */
  if (!zf) goto L_92bbfa;
L_92bbdc: /* 92bbdc: xor eax, eax */
  eax = 0;
/* 92bbde: lea esp, [ebp - 0x50] */
  esp = (uint32_t)(ebp + 0xffffffb0u);
/* 92bbe1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92bbe2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92bbe3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92bbe4: mov esp, ebp */
  esp = ebp;
/* 92bbe6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92bbe7: ret 0x1c */
  esp += 32; SPILL(); return;
L_92bbea: /* 92bbea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92bbec: xor eax, eax */
  eax = 0;
/* 92bbee: lea esp, [ebp - 0x50] */
  esp = (uint32_t)(ebp + 0xffffffb0u);
/* 92bbf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92bbf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92bbf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92bbf4: mov esp, ebp */
  esp = ebp;
/* 92bbf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92bbf7: ret 0x1c */
  esp += 32; SPILL(); return;
L_92bbfa: /* 92bbfa: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92bbfc: je 0x92bc24 */
  if (zf) goto L_92bc24;
L_92bbfe: /* 92bbfe: mov ecx, 0xa */
  ecx = 0xau;
/* 92bc03: mov esi, ebx */
  esi = ebx;
/* 92bc05: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 92bc08: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 92bc0a: mov ecx, 0xa */
  ecx = 0xau;
/* 92bc0f: mov esi, edx */
  esi = edx;
/* 92bc11: mov edi, ebx */
  edi = ebx;
/* 92bc13: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 92bc15: mov ecx, 0xa */
  ecx = 0xau;
/* 92bc1a: lea esi, [ebp - 0x44] */
  esi = (uint32_t)(ebp + 0xffffffbcu);
/* 92bc1d: mov edi, edx */
  edi = edx;
/* 92bc1f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 92bc21: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_92bc24: /* 92bc24: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92bc27: jne 0x92bc46 */
  if (!zf) goto L_92bc46;
L_92bc29: /* 92bc29: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 92bc2c: mov ecx, 0xa */
  ecx = 0xau;
/* 92bc31: mov esi, ebx */
  esi = ebx;
/* 92bc33: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 92bc35: mov eax, 1 */
  eax = 0x1u;
/* 92bc3a: lea esp, [ebp - 0x50] */
  esp = (uint32_t)(ebp + 0xffffffb0u);
/* 92bc3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92bc3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92bc3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92bc40: mov esp, ebp */
  esp = ebp;
/* 92bc42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92bc43: ret 0x1c */
  esp += 32; SPILL(); return;
L_92bc46: /* 92bc46: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 92bc49: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 92bc4c: mov eax, esi */
  eax = esi;
/* 92bc4e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 92bc51: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92bc54: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92bc57: call 0x99cc00 */
  esp -= 4; W32(esp, 0x92bc5cu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 92bc5c: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 92bc5f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 92bc62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92bc63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92bc64: call 0x92b840 */
  esp -= 4; W32(esp, 0x92bc69u); SPILL(); f_92b840(); if (g_unwind) return; RELOAD();
/* 92bc69: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 92bc6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92bc6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92bc6e: call 0x92b890 */
  esp -= 4; W32(esp, 0x92bc73u); SPILL(); f_92b890(); if (g_unwind) return; RELOAD();
/* 92bc73: mov ebx, eax */
  ebx = eax;
/* 92bc75: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 92bc78: mov edi, 1 */
  edi = 0x1u;
/* 92bc7d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92bc80: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92bc82: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 92bc85: mov dword ptr [ebx + 0xc], ebx */
  W32((uint32_t)(ebx + 0xcu), ebx);
/* 92bc88: mov dword ptr [ebx + 8], ebx */
  W32((uint32_t)(ebx + 0x8u), ebx);
/* 92bc8b: je 0x92bf54 */
  if (zf) goto L_92bf54;
L_92bc91: /* 92bc91: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 92bc94: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92bc96: jge 0x92bcce */
  if ((sf == of)) goto L_92bcce;
L_92bc98: /* 92bc98: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 92bc9b: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92bc9e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_92bca1: /* 92bca1: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 92bca4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 92bca6: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 92bca9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92bcaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bcab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92bcac: call 0x92b7b0 */
  esp -= 4; W32(esp, 0x92bcb1u); SPILL(); f_92b7b0(); if (g_unwind) return; RELOAD();
/* 92bcb1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92bcb4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92bcb6: je 0x92bcc9 */
  if (zf) goto L_92bcc9;
L_92bcb8: /* 92bcb8: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 92bcbb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 92bcbe: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92bcbf: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92bcc2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92bcc4: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 92bcc7: jl 0x92bca1 */
  if ((sf != of)) goto L_92bca1;
L_92bcc9: /* 92bcc9: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 92bccc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_92bcce: /* 92bcce: je 0x92bf54 */
  if (zf) goto L_92bf54;
L_92bcd4: /* 92bcd4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 92bcd7: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 92bcda: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 92bcdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bcde: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 92bce1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92bce2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92bce3: call 0x92b890 */
  esp -= 4; W32(esp, 0x92bce8u); SPILL(); f_92b890(); if (g_unwind) return; RELOAD();
/* 92bce8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92bcea: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 92bced: call 0x92b8b0 */
  esp -= 4; W32(esp, 0x92bcf2u); SPILL(); f_92b8b0(); if (g_unwind) return; RELOAD();
/* 92bcf2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92bcf5: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92bcf7: je 0x92bf54 */
  if (zf) goto L_92bf54;
L_92bcfd: /* 92bcfd: cmp dword ptr [ebp + 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92bd01: je 0x92bf54 */
  if (zf) goto L_92bf54;
L_92bd07: /* 92bd07: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92bd09: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 92bd0c: jge 0x92be0f */
  if ((sf == of)) goto L_92be0f;
L_92bd12: /* 92bd12: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 92bd15: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 92bd17: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 92bd19: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92bd1c: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 92bd1f: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 92bd22: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92bd25: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 92bd28: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92bd2a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bd2d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92bd2f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bd32: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bd34: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 92bd37: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92bd39: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 92bd3c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 92bd3e: lea edx, [eax + edx*8 + 8] */
  edx = (uint32_t)(eax + edx*8 + 0x8u);
/* 92bd42: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92bd44: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bd47: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 92bd49: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bd4b: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 92bd4d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92bd4f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 92bd52: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bd54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bd56: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bd59: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bd5b: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 92bd5e: mov edi, edi */
  edi = edi;
L_92bd60: /* 92bd60: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 92bd63: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 92bd66: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 92bd69: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 92bd6c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 92bd6e: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 92bd71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bd73: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 92bd75: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 92bd78: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* 92bd7b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bd7d: fcom dword ptr [ebp - 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffff8u)));
/* 92bd80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92bd82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92bd85: je 0x92bda6 */
  if (zf) goto L_92bda6;
L_92bd87: /* 92bd87: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 92bd8a: fchs  */
  ST0 = -ST0;
/* 92bd8c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92bd8e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 92bd90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92bd92: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92bd95: jnp 0x92bdd9 */
  if (!pf) goto L_92bdd9;
L_92bd97: /* 92bd97: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 92bd9a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92bd9c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92bd9d: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92bda0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92bda2: jl 0x92bd60 */
  if ((sf != of)) goto L_92bd60;
L_92bda4: /* 92bda4: jmp 0x92be0f */
  goto L_92be0f;
L_92bda6: /* 92bda6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 92bda9: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 92bdac: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 92bdaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bdb0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 92bdb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bdb4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92bdb5: call 0x92b890 */
  esp -= 4; W32(esp, 0x92bdbau); SPILL(); f_92b890(); if (g_unwind) return; RELOAD();
/* 92bdba: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 92bdbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bdbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92bdbf: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 92bdc2: call 0x92b8b0 */
  esp -= 4; W32(esp, 0x92bdc7u); SPILL(); f_92b8b0(); if (g_unwind) return; RELOAD();
/* 92bdc7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92bdc9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 92bdcc: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 92bdcf: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 92bdd2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92bdd4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92bdd7: jmp 0x92be09 */
  goto L_92be09;
L_92bdd9: /* 92bdd9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 92bddc: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 92bddf: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 92bde2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bde3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 92bde6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bde7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92bde8: call 0x92b890 */
  esp -= 4; W32(esp, 0x92bdedu); SPILL(); f_92b890(); if (g_unwind) return; RELOAD();
/* 92bded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bdee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92bdef: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 92bdf2: call 0x92b8b0 */
  esp -= 4; W32(esp, 0x92bdf7u); SPILL(); f_92b8b0(); if (g_unwind) return; RELOAD();
/* 92bdf7: fchs  */
  ST0 = -ST0;
/* 92bdf9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 92bdfc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92bdfe: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 92be01: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92be04: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92be06: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
L_92be09: /* 92be09: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 92be0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92be0f: /* 92be0f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 92be12: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92be14: jge 0x92bf54 */
  if ((sf == of)) goto L_92bf54;
L_92be1a: /* 92be1a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 92be1d: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 92be20: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92be22: lea ebx, [edx + ecx*8] */
  ebx = (uint32_t)(edx + ecx*8);
/* 92be25: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
L_92be28: /* 92be28: mov eax, ebx */
  eax = ebx;
/* 92be2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92be2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92be2c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 92be2f: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92be32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92be33: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 92be36: call 0x92b900 */
  esp -= 4; W32(esp, 0x92be3bu); SPILL(); f_92b900(); if (g_unwind) return; RELOAD();
/* 92be3b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 92be3e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 92be41: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92be44: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92be46: jle 0x92bf4b */
  if ((zf || sf != of)) goto L_92bf4b;
L_92be4c: /* 92be4c: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 92be4f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 92be52: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 92be55: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92be57: mov ecx, edi */
  ecx = edi;
/* 92be59: jne 0x92be5e */
  if (!zf) goto L_92be5e;
L_92be5b: /* 92be5b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
L_92be5e: /* 92be5e: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 92be61: mov edx, edi */
  edx = edi;
L_92be63: /* 92be63: fcom dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
/* 92be66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92be68: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92be6b: jne 0x92be78 */
  if (!zf) goto L_92be78;
L_92be6d: /* 92be6d: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92be6f: je 0x92be78 */
  if (zf) goto L_92be78;
L_92be71: /* 92be71: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92be73: mov ecx, edx */
  ecx = edx;
/* 92be75: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
L_92be78: /* 92be78: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 92be7b: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92be7d: jne 0x92be63 */
  if (!zf) goto L_92be63;
L_92be7f: /* 92be7f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92be81: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 92be84: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 92be87: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92be8a: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 92be8c: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 92be8f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92be91: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92be93: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92be96: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 92be99: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92be9c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 92be9f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92bea1: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 92bea3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92bea5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bea8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92beaa: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92beac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92beae: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 92beb1: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 92beb4: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92beb6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92beb8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92beba: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92bebc: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bebf: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 92bec1: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 92bec4: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 92bec7: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 92bec9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92becb: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92becd: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bed0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bed2: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bed5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bed7: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 92bed9: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 92bedb: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bedd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bedf: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 92bee2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92bee4: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92bee7: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 92beea: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92beed: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 92beef: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92bef2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92bef5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92bef7: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92bef9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92befb: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92befe: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92bf00: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bf02: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bf04: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 92bf07: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 92bf0a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bf0c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92bf0e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92bf10: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92bf12: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bf15: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 92bf17: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92bf1a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 92bf1d: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 92bf1f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bf21: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92bf23: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92bf26: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92bf28: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92bf2b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 92bf2e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92bf30: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92bf32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92bf33: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 92bf35: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92bf37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92bf39: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 92bf3c: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 92bf3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92bf40: call 0x92b8d0 */
  esp -= 4; W32(esp, 0x92bf45u); SPILL(); f_92b8d0(); if (g_unwind) return; RELOAD();
/* 92bf45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 92bf48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92bf4b: /* 92bf4b: dec dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 92bf4e: jne 0x92be28 */
  if (!zf) goto L_92be28;
L_92bf54: /* 92bf54: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 92bf57: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 92bf5a: xor edx, edx */
  edx = 0;
/* 92bf5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92bf5e: je 0x92bfbc */
  if (zf) goto L_92bfbc;
L_92bf60: /* 92bf60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92bf62: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 92bf65: jle 0x92bfbc */
  if ((zf || sf != of)) goto L_92bfbc;
L_92bf67: /* 92bf67: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 92bf6a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 92bf6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_92bf70: /* 92bf70: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 92bf72: xor ecx, ecx */
  ecx = 0;
/* 92bf74: mov cx, word ptr [esi + 0x1c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x1cu))) & 0xffffu);
/* 92bf78: cmp cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92bf7b: je 0x92bf8f */
  if (zf) goto L_92bf8f;
L_92bf7d: /* 92bf7d: and ecx, 0xffffff00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92bf83: cmp cx, 0x200 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x200u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 92bf88: je 0x92bf8f */
  if (zf) goto L_92bf8f;
L_92bf8a: /* 92bf8a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 92bf8d: jmp 0x92bfb4 */
  goto L_92bfb4;
L_92bf8f: /* 92bf8f: mov edi, ebx */
  edi = ebx;
/* 92bf91: mov ecx, 0xa */
  ecx = 0xau;
/* 92bf96: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 92bf98: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 92bf9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bf9c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 92bf9f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 92bfa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92bfa1: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 92bfa4: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92bfa7: call 0x92b8d0 */
  esp -= 4; W32(esp, 0x92bfacu); SPILL(); f_92b8d0(); if (g_unwind) return; RELOAD();
/* 92bfac: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 92bfaf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92bfb2: mov eax, esi */
  eax = esi;
L_92bfb4: /* 92bfb4: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 92bfb7: jne 0x92bf70 */
  if (!zf) goto L_92bf70;
L_92bfb9: /* 92bfb9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
L_92bfbc: /* 92bfbc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92bfbe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 92bfc1: jle 0x92bfeb */
  if ((zf || sf != of)) goto L_92bfeb;
L_92bfc3: /* 92bfc3: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 92bfc6: lea esi, [edx + edx*4] */
  esi = (uint32_t)(edx + edx*4);
/* 92bfc9: lea ebx, [edi + esi*8] */
  ebx = (uint32_t)(edi + esi*8);
/* 92bfcc: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 92bfcf: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_92bfd1: /* 92bfd1: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 92bfd3: mov edi, ebx */
  edi = ebx;
/* 92bfd5: mov ecx, 0xa */
  ecx = 0xau;
/* 92bfda: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 92bfdc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 92bfdf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 92bfe2: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92bfe5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 92bfe6: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 92bfe9: jne 0x92bfd1 */
  if (!zf) goto L_92bfd1;
L_92bfeb: /* 92bfeb: mov eax, edx */
  eax = edx;
/* 92bfed: lea esp, [ebp - 0x50] */
  esp = (uint32_t)(ebp + 0xffffffb0u);
/* 92bff0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92bff1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92bff2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92bff3: mov esp, ebp */
  esp = ebp;
/* 92bff5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92bff6: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_92c000(void) {
  LOAD_REGS();
L_92c000: /* 92c000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c001: mov esi, ecx */
  esi = ecx;
/* 92c003: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92c007: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 92c00a: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92c00d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92c00f: mov ecx, eax */
  ecx = eax;
/* 92c011: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 92c013: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92c016: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c018: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c01a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 92c01d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92c023u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c023: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 92c026: mov edi, eax */
  edi = eax;
/* 92c028: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92c02a: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 92c02c: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 92c02f: jae 0x92c043 */
  if (!cf) goto L_92c043;
L_92c031: /* 92c031: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 92c033: mov edx, ecx */
  edx = ecx;
/* 92c035: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 92c038: xor eax, eax */
  eax = 0;
/* 92c03a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 92c03c: mov ecx, edx */
  ecx = edx;
/* 92c03e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92c041: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_92c043: /* 92c043: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 92c046: mov edx, 3 */
  edx = 0x3u;
/* 92c04b: xor ecx, ecx */
  ecx = 0;
/* 92c04d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_92c050: /* 92c050: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92c053: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 92c055: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92c058: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92c05b: mov byte ptr [eax + 0x10], cl */
  W8((uint32_t)(eax + 0x10u), (ecx & 0xffu));
/* 92c05e: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c061: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 92c062: jne 0x92c050 */
  if (!zf) goto L_92c050;
L_92c064: /* 92c064: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 92c067: mov edx, 3 */
  edx = 0x3u;
/* 92c06c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92c070: /* 92c070: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92c073: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 92c075: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92c078: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92c07b: mov byte ptr [eax + 0x10], cl */
  W8((uint32_t)(eax + 0x10u), (ecx & 0xffu));
/* 92c07e: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c081: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 92c082: jne 0x92c070 */
  if (!zf) goto L_92c070;
L_92c084: /* 92c084: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* 92c08a: mov ecx, 3 */
  ecx = 0x3u;
/* 92c08f: nop  */
L_92c090: /* 92c090: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92c093: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 92c095: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c098: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 92c099: jne 0x92c090 */
  if (!zf) goto L_92c090;
L_92c09b: /* 92c09b: lea eax, [esi + 0xc0] */
  eax = (uint32_t)(esi + 0xc0u);
/* 92c0a1: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92c0a4: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 92c0a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c0a7: mov dword ptr [esi], 0xa20f7c */
  W32((uint32_t)(esi), 0xa20f7cu);
/* 92c0ad: mov eax, esi */
  eax = esi;
/* 92c0af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c0b0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92c0c0(void) {
  LOAD_REGS();
L_92c0c0: /* 92c0c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c0c1: mov esi, ecx */
  esi = ecx;
/* 92c0c3: call 0x92c110 */
  esp -= 4; W32(esp, 0x92c0c8u); SPILL(); f_92c110(); if (g_unwind) return; RELOAD();
/* 92c0c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c0cd: je 0x92c0d8 */
  if (zf) goto L_92c0d8;
L_92c0cf: /* 92c0cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c0d0: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x92c0d5u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 92c0d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92c0d8: /* 92c0d8: mov eax, esi */
  eax = esi;
/* 92c0da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c0db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92c0e0(void) {
  LOAD_REGS();
L_92c0e0: /* 92c0e0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92c0e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 92c0e5: js 0x92c10d */
  if (sf) goto L_92c10d;
L_92c0e7: /* 92c0e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c0e8: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 92c0ec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c0ed: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 92c0f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c0f2: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92c0f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c0f7: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 92c0fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_92c100: /* 92c100: mov ecx, esi */
  ecx = esi;
/* 92c102: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x92c104u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c104: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92c106: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 92c107: jne 0x92c100 */
  if (!zf) goto L_92c100;
L_92c109: /* 92c109: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c10a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c10b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c10c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_92c10d: /* 92c10d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92c110(void) {
  LOAD_REGS();
L_92c110: /* 92c110: mov dword ptr [ecx], 0xa20f7c */
  W32((uint32_t)(ecx), 0xa20f7cu);
/* 92c116: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 92c119: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92c11b: je 0x92c124 */
  if (zf) goto L_92c124;
L_92c11d: /* 92c11d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c11e: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92c124u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_92c124: /* 92c124: ret  */
  esp += 4; SPILL(); return;
}

void f_92c130(void) {
  LOAD_REGS();
L_92c130: /* 92c130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c131: mov esi, ecx */
  esi = ecx;
/* 92c133: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 92c136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c137: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92c13du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c13d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 92c140: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c141: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92c147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c147: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 92c14a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92c14b: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92c151u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c151: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92c154: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c155: call 0x99ac40 */
  esp -= 4; W32(esp, 0x92c15au); SPILL(); f_99ac40(); if (g_unwind) return; RELOAD();
/* 92c15a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 92c15c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92c15e: mov ecx, esi */
  ecx = esi;
/* 92c160: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x92c162u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c163: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x92c169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c169: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c16a: ret  */
  esp += 4; SPILL(); return;
}

void f_92c170(void) {
  LOAD_REGS();
L_92c170: /* 92c170: mov al, byte ptr [esp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 92c174: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c175: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c176: xor ebx, ebx */
  ebx = 0;
/* 92c178: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 92c17a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c17b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c17c: jbe 0x92c2bf */
  if ((cf | zf)) goto L_92c2bf;
L_92c182: /* 92c182: cmp al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 92c184: ja 0x92c2bf */
  if ((!cf && !zf)) goto L_92c2bf;
L_92c18a: /* 92c18a: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 92c18e: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c190: jle 0x92c2bf */
  if ((zf || sf != of)) goto L_92c2bf;
L_92c196: /* 92c196: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 92c19a: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c19c: jle 0x92c2bf */
  if ((zf || sf != of)) goto L_92c2bf;
L_92c1a2: /* 92c1a2: push 0xd4 */
  { uint32_t v = 0xd4u; esp -= 4; W32(esp, v); }
/* 92c1a7: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92c1adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c1ad: mov esi, eax */
  esi = eax;
/* 92c1af: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92c1b1: je 0x92c2bf */
  if (zf) goto L_92c2bf;
L_92c1b7: /* 92c1b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c1b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c1b9: mov ecx, esi */
  ecx = esi;
/* 92c1bb: call 0x92c000 */
  esp -= 4; W32(esp, 0x92c1c0u); SPILL(); f_92c000(); if (g_unwind) return; RELOAD();
/* 92c1c0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92c1c4: lea ebp, [edi*4] */
  ebp = (uint32_t)(edi*4);
/* 92c1cb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c1cc: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 92c1cf: mov dword ptr [esi + 0xc8], ebx */
  W32((uint32_t)(esi + 0xc8u), ebx);
/* 92c1d5: mov dword ptr [esi + 0xd0], ebx */
  W32((uint32_t)(esi + 0xd0u), ebx);
/* 92c1db: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 92c1de: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92c1e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c1e4: mov ecx, edi */
  ecx = edi;
/* 92c1e6: imul ecx, ecx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x98u);
  ecx = (uint32_t)r;
  }
/* 92c1ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c1ed: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 92c1f0: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92c1f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c1f6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 92c1f9: xor eax, eax */
  eax = 0;
/* 92c1fb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c1fd: jle 0x92c225 */
  if ((zf || sf != of)) goto L_92c225;
L_92c1ff: /* 92c1ff: xor ecx, ecx */
  ecx = 0;
L_92c201: /* 92c201: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 92c204: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 92c207: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 92c209: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 92c20a: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
/* 92c20d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 92c210: mov dword ptr [edx + ecx + 8], 0xffffffff */
  W32((uint32_t)(edx + ecx + 0x8u), 0xffffffffu);
/* 92c218: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92c219: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92c21f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c221: jl 0x92c201 */
  if ((sf != of)) goto L_92c201;
L_92c223: /* 92c223: xor ebx, ebx */
  ebx = 0;
L_92c225: /* 92c225: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 92c228: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c229: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 92c22c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x92c232u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92c232: mov cl, byte ptr [esp + 0x18] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 92c236: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 92c239: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 92c23c: mov byte ptr [esi + 5], cl */
  W8((uint32_t)(esi + 0x5u), (ecx & 0xffu));
/* 92c23f: mov byte ptr [esi + 4], bl */
  W8((uint32_t)(esi + 0x4u), (ebx & 0xffu));
/* 92c242: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_92c244: /* 92c244: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 92c246: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c248: dec dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c24a: and cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c24c: jne 0x92c244 */
  if (!zf) goto L_92c244;
L_92c24e: /* 92c24e: mov byte ptr [esi + 4], al */
  W8((uint32_t)(esi + 0x4u), (eax & 0xffu));
/* 92c251: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 92c257: lea eax, [esi + 0x70] */
  eax = (uint32_t)(esi + 0x70u);
/* 92c25a: mov ebp, 3 */
  ebp = 0x3u;
/* 92c25f: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_92c261: /* 92c261: mov dword ptr [eax - 0x38], 0xff7fffff */
  W32((uint32_t)(eax + 0xffffffc8u), 0xff7fffffu);
/* 92c268: mov dword ptr [eax + 4], 0x7f7fffff */
  W32((uint32_t)(eax + 0x4u), 0x7f7fffffu);
/* 92c26f: mov byte ptr [eax - 0x30], bl */
  W8((uint32_t)(eax + 0xffffffd0u), (ebx & 0xffu));
/* 92c272: mov byte ptr [eax + 0xc], bl */
  W8((uint32_t)(eax + 0xcu), (ebx & 0xffu));
/* 92c275: mov dword ptr [eax - 0x3c], ecx */
  W32((uint32_t)(eax + 0xffffffc4u), ecx);
/* 92c278: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 92c27a: mov dword ptr [eax - 0x40], edi */
  W32((uint32_t)(eax + 0xffffffc0u), edi);
/* 92c27d: lea edx, [eax - 0x40] */
  edx = (uint32_t)(eax + 0xffffffc0u);
/* 92c280: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92c282: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 92c284: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 92c287: lea edx, [eax - 4] */
  edx = (uint32_t)(eax + 0xfffffffcu);
/* 92c28a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 92c28c: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 92c28f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 92c291: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 92c293: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 92c295: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92c298: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c29b: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 92c29c: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 92c29f: jne 0x92c261 */
  if (!zf) goto L_92c261;
L_92c2a1: /* 92c2a1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 92c2a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c2a6: call 0x99abd0 */
  esp -= 4; W32(esp, 0x92c2abu); SPILL(); f_99abd0(); if (g_unwind) return; RELOAD();
/* 92c2ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c2ac: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 92c2af: mov dword ptr [esi + 0xcc], 1 */
  W32((uint32_t)(esi + 0xccu), 0x1u);
/* 92c2b9: mov eax, esi */
  eax = esi;
/* 92c2bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c2bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c2bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c2be: ret  */
  esp += 4; SPILL(); return;
L_92c2bf: /* 92c2bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c2c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c2c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c2c2: xor eax, eax */
  eax = 0;
/* 92c2c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c2c5: ret  */
  esp += 4; SPILL(); return;
}

void f_92c2d0(void) {
  LOAD_REGS();
L_92c2d0: /* 92c2d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c2d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c2d2: mov edi, ecx */
  edi = ecx;
/* 92c2d4: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 92c2d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92c2d9: jne 0x92c2e3 */
  if (!zf) goto L_92c2e3;
L_92c2db: /* 92c2db: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 92c2de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c2df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 92c2e0: ret 0x10 */
  esp += 20; SPILL(); return;
L_92c2e3: /* 92c2e3: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 92c2e6: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 92c2e9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 92c2ea: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 92c2ed: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 92c2f0: mov ecx, eax */
  ecx = eax;
/* 92c2f2: imul ecx, ecx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x98u);
  ecx = (uint32_t)r;
  }
/* 92c2f8: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92c2fa: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92c2fe: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92c302: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 92c305: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92c309: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c30a: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 92c30d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92c311: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c312: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 92c315: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 92c319: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c31a: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 92c31d: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 92c320: lea eax, [ecx + 0x20] */
  eax = (uint32_t)(ecx + 0x20u);
/* 92c323: lea esi, [edi + 0xac] */
  esi = (uint32_t)(edi + 0xacu);
/* 92c329: mov dword ptr [esp + 0x18], 3 */
  W32((uint32_t)(esp + 0x18u), 0x3u);
L_92c331: /* 92c331: mov dword ptr [eax + 8], 0x7f7fffff */
  W32((uint32_t)(eax + 0x8u), 0x7f7fffffu);
/* 92c338: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92c33b: mov byte ptr [eax + 0x10], 0 */
  W8((uint32_t)(eax + 0x10u), 0x0u);
/* 92c33f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 92c341: xor ebx, ebx */
  ebx = 0;
/* 92c343: lea edx, [esi - 4] */
  edx = (uint32_t)(esi + 0xfffffffcu);
/* 92c346: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92c348: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 92c34b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 92c34c: and ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 92c34e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 92c350: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 92c353: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 92c356: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 92c358: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 92c35a: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 92c35d: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c360: mov dword ptr [eax + 8], 0x7f7fffff */
  W32((uint32_t)(eax + 0x8u), 0x7f7fffffu);
/* 92c367: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92c36a: mov byte ptr [eax + 0x10], 1 */
  W8((uint32_t)(eax + 0x10u), 0x1u);
/* 92c36e: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 92c370: xor ebx, ebx */
  ebx = 0;
/* 92c372: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92c374: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 92c377: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92c37a: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 92c37b: and ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 92c37d: mov edx, ebx */
  edx = ebx;
/* 92c37f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92c381: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 92c384: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 92c387: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 92c389: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 92c38b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 92c38e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 92c392: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c395: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 92c396: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 92c39a: jne 0x92c331 */
  if (!zf) goto L_92c331;
L_92c39c: /* 92c39c: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 92c3a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92c3a2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c3a3: mov ecx, edi */
  ecx = edi;
/* 92c3a5: call 0x92c680 */
  esp -= 4; W32(esp, 0x92c3aau); SPILL(); f_92c680(); if (g_unwind) return; RELOAD();
/* 92c3aa: xor ecx, ecx */
  ecx = 0;
/* 92c3ac: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92c3ae: jle 0x92c3f1 */
  if ((zf || sf != of)) goto L_92c3f1;
L_92c3b0: /* 92c3b0: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 92c3b3: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92c3b6: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 92c3b9: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 92c3bc: lea esi, [edx + 1] */
  esi = (uint32_t)(edx + 0x1u);
/* 92c3bf: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 92c3c2: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 92c3c4: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c3c6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c3c8: mov esi, eax */
  esi = eax;
/* 92c3ca: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c3cc: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c3cf: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 92c3d1: mov bl, byte ptr [esi + ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 92c3d4: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92c3d6: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c3d8: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92c3da: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92c3df: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92c3e1: and al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c3e3: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c3e5: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c3e7: mov ecx, edx */
  ecx = edx;
/* 92c3e9: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c3eb: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c3ed: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 92c3ef: jl 0x92c3b0 */
  if ((sf != of)) goto L_92c3b0;
L_92c3f1: /* 92c3f1: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 92c3f4: lea edx, [ebp + 1] */
  edx = (uint32_t)(ebp + 0x1u);
/* 92c3f7: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c3f9: jge 0x92c445 */
  if ((sf == of)) goto L_92c445;
L_92c3fb: /* 92c3fb: lea ecx, [ebp + 2] */
  ecx = (uint32_t)(ebp + 0x2u);
/* 92c3fe: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 92c401: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92c403: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 92c407: jmp 0x92c410 */
  goto L_92c410;
L_92c409: /* 92c409: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 92c40d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_92c410: /* 92c410: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 92c413: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c415: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 92c418: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c41a: mov esi, eax */
  esi = eax;
/* 92c41c: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c41e: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c421: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 92c423: mov bl, byte ptr [esi + ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 92c426: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92c428: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c42a: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92c42c: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92c431: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92c433: and al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c435: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c437: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c439: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c43b: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 92c43d: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 92c440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 92c441: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c443: jl 0x92c409 */
  if ((sf != of)) goto L_92c409;
L_92c445: /* 92c445: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c446: mov eax, ebp */
  eax = ebp;
/* 92c448: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c449: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c44a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c44b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 92c44c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92c450(void) {
  LOAD_REGS();
L_92c450: /* 92c450: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92c453: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c454: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c455: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 92c459: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c45a: mov esi, ecx */
  esi = ecx;
/* 92c45c: call 0x92c750 */
  esp -= 4; W32(esp, 0x92c461u); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92c461: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c463: je 0x92c66c */
  if (zf) goto L_92c66c;
L_92c469: /* 92c469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c46a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c46b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92c46d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c46e: mov ecx, esi */
  ecx = esi;
/* 92c470: call 0x92c680 */
  esp -= 4; W32(esp, 0x92c475u); SPILL(); f_92c680(); if (g_unwind) return; RELOAD();
/* 92c475: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 92c478: mov eax, edi */
  eax = edi;
/* 92c47a: imul eax, eax, 0x98 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x98u);
  eax = (uint32_t)r;
  }
/* 92c480: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92c482: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92c486: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 92c48a: lea ecx, [edx + 0x20] */
  ecx = (uint32_t)(edx + 0x20u);
/* 92c48d: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
L_92c495: /* 92c495: mov eax, ecx */
  eax = ecx;
/* 92c497: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 92c499: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 92c49c: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 92c49f: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 92c4a2: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 92c4a4: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 92c4a6: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92c4a9: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 92c4ab: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92c4ae: mov eax, ecx */
  eax = ecx;
/* 92c4b0: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 92c4b2: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 92c4b5: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 92c4b8: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 92c4bb: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 92c4bd: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 92c4bf: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92c4c2: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 92c4c4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92c4c8: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92c4cb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 92c4cc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92c4d0: jne 0x92c495 */
  if (!zf) goto L_92c495;
L_92c4d2: /* 92c4d2: xor eax, eax */
  eax = 0;
/* 92c4d4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c4d6: jle 0x92c57d */
  if ((zf || sf != of)) goto L_92c57d;
L_92c4dc: /* 92c4dc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_92c4e0: /* 92c4e0: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 92c4e3: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 92c4e6: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* 92c4e9: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 92c4ec: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 92c4ef: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 92c4f2: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92c4f4: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 92c4f6: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92c4f8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 92c4fc: mov ebp, ebx */
  ebp = ebx;
/* 92c4fe: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 92c500: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 92c502: mov dl, byte ptr [eax + ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp))) & 0xffu);
/* 92c505: mov al, byte ptr [esi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 92c508: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c50b: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c50e: shr dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c510: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c513: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92c515: jne 0x92c535 */
  if (!zf) goto L_92c535;
L_92c517: /* 92c517: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92c51a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92c51e: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 92c522: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92c526: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92c527: mov edx, dword ptr [ecx + eax + 0xc] */
  edx = R32((uint32_t)(ecx + eax + 0xcu));
/* 92c52b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92c52e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92c52f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c530: call 0x99b010 */
  esp -= 4; W32(esp, 0x92c535u); SPILL(); f_99b010(); if (g_unwind) return; RELOAD();
L_92c535: /* 92c535: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 92c538: mov al, byte ptr [edi + ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebp))) & 0xffu);
/* 92c53b: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92c53d: and bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c540: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c543: movzx ebp, bl */
  ebp = (uint32_t)((ebx & 0xffu));
/* 92c546: mov ecx, ebp */
  ecx = ebp;
/* 92c548: mov edx, 0xf0 */
  edx = 0xf0u;
/* 92c54d: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* 92c54f: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c551: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c553: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c555: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92c559: or dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c55b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 92c55f: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 92c561: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92c565: add edx, 0x98 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92c56b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c56d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92c571: mov edi, ecx */
  edi = ecx;
/* 92c573: jl 0x92c4e0 */
  if ((sf != of)) goto L_92c4e0;
L_92c579: /* 92c579: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
L_92c57d: /* 92c57d: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 92c580: lea ebp, [edi + 1] */
  ebp = (uint32_t)(edi + 0x1u);
/* 92c583: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c585: jge 0x92c632 */
  if ((sf == of)) goto L_92c632;
L_92c58b: /* 92c58b: lea eax, [edi + 2] */
  eax = (uint32_t)(edi + 0x2u);
/* 92c58e: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 92c591: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92c593: mov edx, ebp */
  edx = ebp;
/* 92c595: imul edx, edx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x98u);
  edx = (uint32_t)r;
  }
/* 92c59b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 92c59f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92c5a3: jmp 0x92c5b1 */
  goto L_92c5b1;
L_92c5a5: /* 92c5a5: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 92c5a9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92c5ad: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_92c5b1: /* 92c5b1: imul ebx, edi */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edi);
  ebx = (uint32_t)r;
  }
/* 92c5b4: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 92c5b6: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 92c5b9: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92c5bb: mov edi, ebx */
  edi = ebx;
/* 92c5bd: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 92c5bf: mov al, byte ptr [edi + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 92c5c2: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 92c5c4: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c5c7: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c5ca: shr al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c5cc: mov cl, byte ptr [esi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4u))) & 0xffu);
/* 92c5cf: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 92c5d3: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c5d5: cmp al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92c5d7: jne 0x92c5f3 */
  if (!zf) goto L_92c5f3;
L_92c5d9: /* 92c5d9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92c5dc: mov ecx, dword ptr [edx + eax + 0xc] */
  ecx = R32((uint32_t)(edx + eax + 0xcu));
/* 92c5e0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 92c5e4: mov eax, dword ptr [eax + edx + 0xc] */
  eax = R32((uint32_t)(eax + edx + 0xcu));
/* 92c5e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c5e9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 92c5ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c5ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c5ee: call 0x99b010 */
  esp -= 4; W32(esp, 0x92c5f3u); SPILL(); f_99b010(); if (g_unwind) return; RELOAD();
L_92c5f3: /* 92c5f3: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 92c5f6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92c5fa: mov al, byte ptr [edi + edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + edx))) & 0xffu);
/* 92c5fd: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92c5ff: and bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c602: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c605: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c607: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 92c609: mov edx, 0xf0 */
  edx = 0xf0u;
/* 92c60e: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* 92c610: and dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c612: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c614: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c616: add dword ptr [esp + 0x10], 0x98 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 92c61e: or dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c620: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 92c622: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 92c625: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 92c626: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c628: jl 0x92c5a5 */
  if ((sf != of)) goto L_92c5a5;
L_92c62e: /* 92c62e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
L_92c632: /* 92c632: mov al, byte ptr [edx + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x10u))) & 0xffu);
/* 92c635: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c637: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c638: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c639: je 0x92c64f */
  if (zf) goto L_92c64f;
L_92c63b: /* 92c63b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92c63d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 92c640: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 92c643: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 92c646: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 92c648: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92c64a: mov dword ptr [edx + 4], edx */
  W32((uint32_t)(edx + 0x4u), edx);
/* 92c64d: mov dword ptr [edx], edx */
  W32((uint32_t)(edx), edx);
L_92c64f: /* 92c64f: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 92c652: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 92c655: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 92c658: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 92c65b: inc dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x20u), r);
  }
/* 92c65e: mov dword ptr [edx + 8], 0xffffffff */
  W32((uint32_t)(edx + 0x8u), 0xffffffffu);
/* 92c665: mov dword ptr [edx + 0xc], 0 */
  W32((uint32_t)(edx + 0xcu), 0x0u);
L_92c66c: /* 92c66c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c66d: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92c66f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c670: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92c673: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92c680(void) {
  LOAD_REGS();
L_92c680: /* 92c680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c681: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c682: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 92c686: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c687: mov esi, ecx */
  esi = ecx;
/* 92c689: call 0x92c750 */
  esp -= 4; W32(esp, 0x92c68eu); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92c68e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c690: jne 0x92c697 */
  if (!zf) goto L_92c697;
L_92c692: /* 92c692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c694: ret 8 */
  esp += 12; SPILL(); return;
L_92c697: /* 92c697: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92c69a: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 92c69e: mov ecx, edi */
  ecx = edi;
/* 92c6a0: imul ecx, ecx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x98u);
  ecx = (uint32_t)r;
  }
/* 92c6a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c6a7: mov bl, byte ptr [eax + ecx + 0x10] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x10u))) & 0xffu);
/* 92c6ab: lea eax, [eax + ecx + 0x10] */
  eax = (uint32_t)(eax + ecx + 0x10u);
/* 92c6af: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92c6b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c6b2: je 0x92c6f8 */
  if (zf) goto L_92c6f8;
L_92c6b4: /* 92c6b4: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c6b6: je 0x92c6db */
  if (zf) goto L_92c6db;
L_92c6b8: /* 92c6b8: mov byte ptr [eax], 1 */
  W8((uint32_t)(eax), 0x1u);
/* 92c6bb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92c6be: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c6c0: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 92c6c6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92c6c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 92c6cb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92c6cd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92c6cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92c6d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c6d2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 92c6d5: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92c6d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c6d8: ret 8 */
  esp += 12; SPILL(); return;
L_92c6db: /* 92c6db: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 92c6de: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92c6e1: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 92c6e4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c6e6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 92c6e9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 92c6ec: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 92c6ef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92c6f1: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 92c6f3: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 92c6f6: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
L_92c6f8: /* 92c6f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c6f9: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92c6fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c6fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92c700(void) {
  LOAD_REGS();
L_92c700: /* 92c700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c701: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92c705: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c707: mov edi, ecx */
  edi = ecx;
/* 92c709: call 0x92c750 */
  esp -= 4; W32(esp, 0x92c70eu); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92c70e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c710: jne 0x92c717 */
  if (!zf) goto L_92c717;
L_92c712: /* 92c712: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c714: ret 4 */
  esp += 8; SPILL(); return;
L_92c717: /* 92c717: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92c71a: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92c720: mov al, byte ptr [esi + eax + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax + 0x10u))) & 0xffu);
/* 92c724: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c726: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92c730(void) {
  LOAD_REGS();
L_92c730: /* 92c730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92c734: mov dword ptr [ecx + 0xd0], eax */
  W32((uint32_t)(ecx + 0xd0u), eax);
/* 92c73a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92c740(void) {
  LOAD_REGS();
L_92c740: /* 92c740: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 92c746: ret  */
  esp += 4; SPILL(); return;
}

void f_92c750(void) {
  LOAD_REGS();
L_92c750: /* 92c750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92c754: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 92c756: jl 0x92c776 */
  if ((sf != of)) goto L_92c776;
L_92c758: /* 92c758: cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92c75b: jge 0x92c776 */
  if ((sf == of)) goto L_92c776;
L_92c75d: /* 92c75d: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 92c760: mov edx, eax */
  edx = eax;
/* 92c762: imul edx, edx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x98u);
  edx = (uint32_t)r;
  }
/* 92c768: cmp dword ptr [edx + ecx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92c76c: jne 0x92c776 */
  if (!zf) goto L_92c776;
L_92c76e: /* 92c76e: mov eax, 1 */
  eax = 0x1u;
/* 92c773: ret 4 */
  esp += 8; SPILL(); return;
L_92c776: /* 92c776: xor eax, eax */
  eax = 0;
/* 92c778: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92c780(void) {
  LOAD_REGS();
L_92c780: /* 92c780: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c781: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 92c785: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c786: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 92c78a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92c78c: jne 0x92c795 */
  if (!zf) goto L_92c795;
L_92c78e: /* 92c78e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c78f: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 92c791: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c792: ret 8 */
  esp += 12; SPILL(); return;
L_92c795: /* 92c795: mov eax, ebx */
  eax = ebx;
/* 92c797: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c799: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92c79c: mov edx, eax */
  edx = eax;
/* 92c79e: not edx */
  edx = ~edx;
/* 92c7a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c7a1: mov ebp, eax */
  ebp = eax;
/* 92c7a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c7a4: mov esi, edx */
  esi = edx;
/* 92c7a6: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92c7a8: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92c7aa: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 92c7ac: and esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 92c7ae: and ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92c7b0: or esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92c7b2: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 92c7b5: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 92c7b8: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 92c7bb: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92c7bd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c7bf: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 92c7c2: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* 92c7c5: mov esi, dword ptr [ecx + 0x24] */
  esi = R32((uint32_t)(ecx + 0x24u));
/* 92c7c8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c7ca: mov edx, eax */
  edx = eax;
/* 92c7cc: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92c7ce: xor eax, eax */
  eax = 0;
/* 92c7d0: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92c7d2: mov al, byte ptr [edx + esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi))) & 0xffu);
/* 92c7d5: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c7d8: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c7db: shr al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c7dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c7de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c7df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c7e0: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 92c7e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c7e3: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92c7e6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92c7e9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92c7f0(void) {
  LOAD_REGS();
L_92c7f0: /* 92c7f0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92c7f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c7f5: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 92c7f9: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92c7fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c7fc: mov edi, ecx */
  edi = ecx;
/* 92c7fe: jne 0x92c807 */
  if (!zf) goto L_92c807;
L_92c800: /* 92c800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c801: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 92c803: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c804: ret 0xc */
  esp += 16; SPILL(); return;
L_92c807: /* 92c807: mov eax, ebx */
  eax = ebx;
/* 92c809: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c80b: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92c80e: mov ecx, eax */
  ecx = eax;
/* 92c810: not ecx */
  ecx = ~ecx;
/* 92c812: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c813: mov ebp, eax */
  ebp = eax;
/* 92c815: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92c817: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c818: mov esi, ecx */
  esi = ecx;
/* 92c81a: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92c81c: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 92c81e: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 92c820: mov ecx, eax */
  ecx = eax;
/* 92c822: and ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92c824: or esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92c826: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 92c829: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 92c82c: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 92c82f: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 92c832: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 92c835: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92c837: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c839: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 92c83c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c83e: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 92c842: mov ecx, eax */
  ecx = eax;
/* 92c844: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92c846: lea ebp, [ecx + edx] */
  ebp = (uint32_t)(ecx + edx);
/* 92c849: mov dl, byte ptr [ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 92c84c: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92c84e: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c851: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c854: shr dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c856: mov cl, byte ptr [esp + 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* 92c85a: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c85d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c85f: je 0x92c8c7 */
  if (zf) goto L_92c8c7;
L_92c861: /* 92c861: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c864: je 0x92c91c */
  if (zf) goto L_92c91c;
L_92c86a: /* 92c86a: mov bl, byte ptr [ebp] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 92c86d: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c86f: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c872: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c874: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92c876: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92c87b: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92c87d: and dl, 0xfb */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfbu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c880: and al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c882: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 92c884: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c886: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 92c88a: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c88c: mov byte ptr [ebp], al */
  W8((uint32_t)(ebp), (eax & 0xffu));
/* 92c88f: cmp dl, byte ptr [edi + 4] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x4u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92c892: jne 0x92c91c */
  if (!zf) goto L_92c91c;
L_92c898: /* 92c898: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92c89c: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92c8a2: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 92c8a5: imul eax, eax, 0x98 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x98u);
  eax = (uint32_t)r;
  }
/* 92c8ab: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 92c8af: mov eax, dword ptr [esi + ecx + 0xc] */
  eax = R32((uint32_t)(esi + ecx + 0xcu));
/* 92c8b3: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 92c8b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92c8b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c8b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c8b9: call 0x99aee0 */
  esp -= 4; W32(esp, 0x92c8beu); SPILL(); f_99aee0(); if (g_unwind) return; RELOAD();
/* 92c8be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c8bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c8c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c8c1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92c8c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c8c4: ret 0xc */
  esp += 16; SPILL(); return;
L_92c8c7: /* 92c8c7: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92c8ca: jne 0x92c91c */
  if (!zf) goto L_92c91c;
L_92c8cc: /* 92c8cc: mov bl, byte ptr [ebp] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 92c8cf: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c8d1: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c8d4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 92c8d6: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92c8d8: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92c8dd: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92c8df: and al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c8e1: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 92c8e3: or bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c8e6: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92c8e8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 92c8ec: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92c8ee: mov byte ptr [ebp], al */
  W8((uint32_t)(ebp), (eax & 0xffu));
/* 92c8f1: cmp dl, byte ptr [edi + 4] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x4u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92c8f4: jne 0x92c91c */
  if (!zf) goto L_92c91c;
L_92c8f6: /* 92c8f6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92c8fa: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92c900: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 92c903: imul eax, eax, 0x98 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x98u);
  eax = (uint32_t)r;
  }
/* 92c909: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 92c90d: mov eax, dword ptr [esi + ecx + 0xc] */
  eax = R32((uint32_t)(esi + ecx + 0xcu));
/* 92c911: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 92c914: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92c915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92c916: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92c917: call 0x99b010 */
  esp -= 4; W32(esp, 0x92c91cu); SPILL(); f_99b010(); if (g_unwind) return; RELOAD();
L_92c91c: /* 92c91c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92c91d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92c91e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92c91f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92c921: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92c922: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92c930(void) {
  LOAD_REGS();
L_92c930: /* 92c930: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92c934: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 92c937: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92c93b: jmp 0x99ad60 */
  goto L_99ad60;
L_99ad60: /* 99ad60: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 99ad64: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 99ad67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ad68: xor ecx, ecx */
  ecx = 0;
/* 99ad6a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ad6c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99ad6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99ad6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99ad6f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 99ad72: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 99ad75: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* 99ad78: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* 99ad7b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 99ad7f: jle 0x99ae06 */
  if ((zf || sf != of)) goto L_99ae06;
L_99ad85: /* 99ad85: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 99ad89: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 99ad8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_99ad90: /* 99ad90: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 99ad93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ad95: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 99ad98: jne 0x99adc4 */
  if (!zf) goto L_99adc4;
L_99ad9a: /* 99ad9a: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 99ad9c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 99ad9d: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 99ad9f: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 99ada2: mov eax, ebp */
  eax = ebp;
/* 99ada4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ada6: jge 0x99adb8 */
  if ((sf == of)) goto L_99adb8;
L_99ada8: /* 99ada8: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 99adaa: cmp dword ptr [ebx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99adae: jne 0x99adb8 */
  if (!zf) goto L_99adb8;
L_99adb0: /* 99adb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99adb1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 99adb3: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99adb6: jl 0x99ada8 */
  if ((sf != of)) goto L_99ada8;
L_99adb8: /* 99adb8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 99adba: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99adbd: je 0x99ae02 */
  if (zf) goto L_99ae02;
L_99adbf: /* 99adbf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 99adc1: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
L_99adc4: /* 99adc4: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 99adc7: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 99adca: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 99adcd: cmp dword ptr [ecx + 8], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99add1: jne 0x99ade1 */
  if (!zf) goto L_99ade1;
L_99add3: /* 99add3: mov ebx, dword ptr [edx + 0xc] */
  ebx = R32((uint32_t)(edx + 0xcu));
/* 99add6: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 99add8: mov dword ptr [ebp + ebx*4], ecx */
  W32((uint32_t)(ebp + ebx*4), ecx);
/* 99addc: inc dword ptr [edx + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + 0xcu), r);
  }
/* 99addf: jmp 0x99adf0 */
  goto L_99adf0;
L_99ade1: /* 99ade1: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 99ade4: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 99ade6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99ade7: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* 99adea: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 99aded: mov dword ptr [ebx + ecx*4], ebp */
  W32((uint32_t)(ebx + ecx*4), ebp);
L_99adf0: /* 99adf0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99adf4: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 99adf7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99adf8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99adfa: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 99adfe: jl 0x99ad90 */
  if ((sf != of)) goto L_99ad90;
L_99ae00: /* 99ae00: jmp 0x99ae0a */
  goto L_99ae0a;
L_99ae02: /* 99ae02: xor eax, eax */
  eax = 0;
/* 99ae04: jmp 0x99ae0a */
  goto L_99ae0a;
L_99ae06: /* 99ae06: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_99ae0a: /* 99ae0a: mov edi, dword ptr [edx + 0x10] */
  edi = R32((uint32_t)(edx + 0x10u));
/* 99ae0d: xor ecx, ecx */
  ecx = 0;
/* 99ae0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99ae11: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 99ae14: mov eax, ecx */
  eax = ecx;
/* 99ae16: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 99ae19: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ae1b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 99ae1f: jge 0x99ae55 */
  if ((sf == of)) goto L_99ae55;
L_99ae21: /* 99ae21: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 99ae23: mov ebp, dword ptr [esi + edi*4] */
  ebp = R32((uint32_t)(esi + edi*4));
/* 99ae26: cmp dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ae2a: jne 0x99ae4c */
  if (!zf) goto L_99ae4c;
L_99ae2c: /* 99ae2c: lea ebx, [esi + ecx*4] */
  ebx = (uint32_t)(esi + ecx*4);
/* 99ae2f: nop  */
L_99ae30: /* 99ae30: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ae32: jge 0x99ae41 */
  if ((sf == of)) goto L_99ae41;
L_99ae34: /* 99ae34: mov eax, dword ptr [ebx - 4] */
  eax = R32((uint32_t)(ebx + 0xfffffffcu));
/* 99ae37: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 99ae3a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99ae3b: cmp dword ptr [eax + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ae3f: jne 0x99ae30 */
  if (!zf) goto L_99ae30;
L_99ae41: /* 99ae41: mov ebx, dword ptr [esi + ecx*4] */
  ebx = R32((uint32_t)(esi + ecx*4));
/* 99ae44: mov dword ptr [esi + ecx*4], ebp */
  W32((uint32_t)(esi + ecx*4), ebp);
/* 99ae47: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 99ae49: mov dword ptr [eax + edi*4], ebx */
  W32((uint32_t)(eax + edi*4), ebx);
L_99ae4c: /* 99ae4c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 99ae4d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ae4f: jl 0x99ae21 */
  if ((sf != of)) goto L_99ae21;
L_99ae51: /* 99ae51: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_99ae55: /* 99ae55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99ae56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99ae57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99ae58: mov dword ptr [edx + 0x14], ecx */
  W32((uint32_t)(edx + 0x14u), ecx);
/* 99ae5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99ae5c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92c940(void) {
  LOAD_REGS();
L_92c940: /* 92c940: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92c944: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 92c947: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92c94b: jmp 0x99ac90 */
  goto L_99ac90;
L_99ac90: /* 99ac90: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 99ac94: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 99ac98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99ac99: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 99ac9d: xor ecx, ecx */
  ecx = 0;
/* 99ac9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99aca0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 99aca3: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* 99aca6: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 99aca8: cmp esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99acab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99acac: je 0x99ad08 */
  if (zf) goto L_99ad08;
L_99acae: /* 99acae: cmp esi, -2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99acb1: je 0x99acc8 */
  if (zf) goto L_99acc8;
L_99acb3: /* 99acb3: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99acb6: jne 0x99ad38 */
  if (!zf) goto L_99ad38;
L_99acbc: /* 99acbc: mov esi, dword ptr [ebx + 0x14] */
  esi = R32((uint32_t)(ebx + 0x14u));
/* 99acbf: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 99acc2: mov dword ptr [eax], 0xfffffffe */
  W32((uint32_t)(eax), 0xfffffffeu);
L_99acc8: /* 99acc8: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 99accb: lea edi, [ebx + 0x14] */
  edi = (uint32_t)(ebx + 0x14u);
/* 99acce: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99acd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99acd1: je 0x99acf1 */
  if (zf) goto L_99acf1;
L_99acd3: /* 99acd3: cmp ecx, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99acd6: jge 0x99acf1 */
  if ((sf == of)) goto L_99acf1;
L_99acd8: /* 99acd8: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 99acdb: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 99acde: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 99ace0: mov dword ptr [ebp + ecx*4], esi */
  W32((uint32_t)(ebp + ecx*4), esi);
/* 99ace4: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 99ace7: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 99ace9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99acea: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99acec: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 99acef: jne 0x99acd3 */
  if (!zf) goto L_99acd3;
L_99acf1: /* 99acf1: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 99acf4: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99acf7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99acf8: jne 0x99ad08 */
  if (!zf) goto L_99ad08;
L_99acfa: /* 99acfa: mov dword ptr [eax], 0xfffffffd */
  W32((uint32_t)(eax), 0xfffffffdu);
/* 99ad00: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 99ad02: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 99ad05: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
L_99ad08: /* 99ad08: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ad0b: je 0x99ad32 */
  if (zf) goto L_99ad32;
L_99ad0d: /* 99ad0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_99ad10: /* 99ad10: cmp ecx, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ad13: jge 0x99ad2d */
  if ((sf == of)) goto L_99ad2d;
L_99ad15: /* 99ad15: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 99ad18: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 99ad1b: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 99ad1d: mov dword ptr [edi + ecx*4], esi */
  W32((uint32_t)(edi + ecx*4), esi);
/* 99ad20: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 99ad23: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 99ad25: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99ad26: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ad28: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 99ad2b: jne 0x99ad10 */
  if (!zf) goto L_99ad10;
L_99ad2d: /* 99ad2d: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ad30: jne 0x99ad38 */
  if (!zf) goto L_99ad38;
L_99ad32: /* 99ad32: mov dword ptr [eax], 0xfffffffc */
  W32((uint32_t)(eax), 0xfffffffcu);
L_99ad38: /* 99ad38: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 99ad3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99ad3c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99ad3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99ad3f: mov dword ptr [edx + 0x14], ecx */
  W32((uint32_t)(edx + 0x14u), ecx);
/* 99ad42: mov dword ptr [edx + 0x18], ecx */
  W32((uint32_t)(edx + 0x18u), ecx);
/* 99ad45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99ad46: jne 0x99ad55 */
  if (!zf) goto L_99ad55;
L_99ad48: /* 99ad48: cmp dword ptr [eax], -4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99ad4b: jle 0x99ad55 */
  if ((zf || sf != of)) goto L_99ad55;
L_99ad4d: /* 99ad4d: mov eax, 1 */
  eax = 0x1u;
/* 99ad52: ret 0xc */
  esp += 16; SPILL(); return;
L_99ad55: /* 99ad55: xor eax, eax */
  eax = 0;
/* 99ad57: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92c950(void) {
  LOAD_REGS();
L_92c950: /* 92c950: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92c953: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92c954: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92c955: mov ebx, ecx */
  ebx = ecx;
/* 92c957: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92c95b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92c95e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 92c960: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 92c963: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92c964: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92c965: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 92c968: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 92c96c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 92c96f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 92c973: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92c977: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 92c97b: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92c97f: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 92c983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92c985: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92c988: jp 0x92cae2 */
  if (pf) goto L_92cae2;
L_92c98e: /* 92c98e: jmp 0x92c998 */
  goto L_92c998;
L_92c990: /* 92c990: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 92c994: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
L_92c998: /* 92c998: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92c99c: mov al, byte ptr [edx + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x10u))) & 0xffu);
/* 92c99f: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92c9a1: je 0x92cae2 */
  if (zf) goto L_92cae2;
L_92c9a7: /* 92c9a7: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92c9a9: jne 0x92cac6 */
  if (!zf) goto L_92cac6;
L_92c9af: /* 92c9af: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 92c9b2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92c9b5: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 92c9b9: mov eax, edx */
  eax = edx;
/* 92c9bb: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c9bd: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92c9c0: mov ecx, eax */
  ecx = eax;
/* 92c9c2: mov esi, eax */
  esi = eax;
/* 92c9c4: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92c9c6: not ecx */
  ecx = ~ecx;
/* 92c9c8: mov ebp, ecx */
  ebp = ecx;
/* 92c9ca: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92c9cc: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92c9ce: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 92c9d0: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92c9d2: or esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92c9d4: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 92c9d7: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 92c9da: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 92c9dd: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 92c9e0: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 92c9e3: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92c9e5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92c9e7: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 92c9ea: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92c9ec: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 92c9f0: mov ecx, eax */
  ecx = eax;
/* 92c9f2: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92c9f4: mov bl, byte ptr [ecx + edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx))) & 0xffu);
/* 92c9f7: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 92c9fa: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 92c9fc: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92c9fe: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca00: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca03: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca06: movzx ebp, al */
  ebp = (uint32_t)((eax & 0xffu));
/* 92ca09: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca0c: shr dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 7) & 1;
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92ca0e: mov ecx, ebp */
  ecx = ebp;
/* 92ca10: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92ca15: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92ca17: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca1a: and al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  cf = 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca1c: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 92ca1e: dec bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fu;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca20: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92ca22: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92ca24: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 92ca26: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92ca2a: cmp dl, byte ptr [eax + 4] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x4u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92ca2d: jne 0x92cac2 */
  if (!zf) goto L_92cac2;
L_92ca33: /* 92ca33: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92ca37: mov edi, dword ptr [edx + 0x14] */
  edi = R32((uint32_t)(edx + 0x14u));
/* 92ca3a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ca3c: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 92ca40: je 0x92ca9c */
  if (zf) goto L_92ca9c;
L_92ca42: /* 92ca42: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 92ca46: cmp edi, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92ca49: jne 0x92ca9c */
  if (!zf) goto L_92ca9c;
L_92ca4b: /* 92ca4b: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* 92ca4e: cmp edi, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92ca51: jne 0x92ca9c */
  if (!zf) goto L_92ca9c;
L_92ca53: /* 92ca53: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 92ca56: mov ebx, dword ptr [edx + 0x1c] */
  ebx = R32((uint32_t)(edx + 0x1cu));
/* 92ca59: mov eax, edi */
  eax = edi;
/* 92ca5b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92ca5d: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92ca60: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 92ca61: mov ecx, eax */
  ecx = eax;
/* 92ca63: not ecx */
  ecx = ~ecx;
/* 92ca65: mov edx, eax */
  edx = eax;
/* 92ca67: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92ca69: mov ebp, ecx */
  ebp = ecx;
/* 92ca6b: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92ca6d: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92ca6f: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 92ca72: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92ca75: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92ca77: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92ca79: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 92ca7b: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92ca7d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92ca7f: mov ecx, eax */
  ecx = eax;
/* 92ca81: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 92ca84: mov edx, 1 */
  edx = 0x1u;
/* 92ca89: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 92ca8b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92ca8f: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92ca92: test dword ptr [ecx + eax*4 + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ca96: jne 0x92cac2 */
  if (!zf) goto L_92cac2;
L_92ca98: /* 92ca98: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_92ca9c: /* 92ca9c: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92caa0: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92caa6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92caa9: imul ecx, ecx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x98u);
  ecx = (uint32_t)r;
  }
/* 92caaf: mov ecx, dword ptr [ecx + edx + 0xc] */
  ecx = R32((uint32_t)(ecx + edx + 0xcu));
/* 92cab3: mov edx, dword ptr [esi + edx + 0xc] */
  edx = R32((uint32_t)(esi + edx + 0xcu));
/* 92cab7: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 92caba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92cabb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92cabc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92cabd: call 0x99b010 */
  esp -= 4; W32(esp, 0x92cac2u); SPILL(); f_99b010(); if (g_unwind) return; RELOAD();
L_92cac2: /* 92cac2: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
L_92cac6: /* 92cac6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92caca: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 92cacc: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92cacf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92cad3: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92cad7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92cad9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92cadc: jnp 0x92c990 */
  if (!pf) goto L_92c990;
L_92cae2: /* 92cae2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92cae4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92cae7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 92caea: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 92caed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 92caef: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92caf1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92caf5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92caf7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 92cafa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92cafb: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 92cafe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92caff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92cb01: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92cb03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92cb04: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92cb07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92cb08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92cb0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92cb10(void) {
  LOAD_REGS();
L_92cb10: /* 92cb10: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92cb13: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 92cb17: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 92cb1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92cb1b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92cb1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92cb1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92cb1e: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 92cb21: mov ebx, ecx */
  ebx = ecx;
/* 92cb23: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 92cb26: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92cb29: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 92cb2d: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 92cb30: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 92cb34: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92cb38: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 92cb3c: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92cb40: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 92cb44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92cb46: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92cb49: jne 0x92cca2 */
  if (!zf) goto L_92cca2;
L_92cb4f: /* 92cb4f: jmp 0x92cb60 */
  goto L_92cb60;
L_92cb51: /* 92cb51: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 92cb55: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 92cb59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92cb60: /* 92cb60: mov al, byte ptr [ecx + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x10u))) & 0xffu);
/* 92cb63: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92cb65: je 0x92cca2 */
  if (zf) goto L_92cca2;
L_92cb6b: /* 92cb6b: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92cb6d: jne 0x92cc89 */
  if (!zf) goto L_92cc89;
L_92cb73: /* 92cb73: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92cb76: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92cb79: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 92cb7d: mov eax, edx */
  eax = edx;
/* 92cb7f: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cb81: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92cb84: mov ecx, eax */
  ecx = eax;
/* 92cb86: mov esi, eax */
  esi = eax;
/* 92cb88: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92cb8a: not ecx */
  ecx = ~ecx;
/* 92cb8c: mov ebp, ecx */
  ebp = ecx;
/* 92cb8e: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92cb90: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92cb92: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 92cb94: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92cb96: or esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92cb98: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 92cb9b: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 92cb9e: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 92cba1: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 92cba4: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 92cba7: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92cba9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cbab: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 92cbae: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92cbb0: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 92cbb4: mov ecx, eax */
  ecx = eax;
/* 92cbb6: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cbb8: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92cbba: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 92cbbd: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 92cbbf: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cbc2: movzx ebp, al */
  ebp = (uint32_t)((eax & 0xffu));
/* 92cbc5: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92cbc7: shr dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 7) & 1;
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92cbc9: mov ecx, ebp */
  ecx = ebp;
/* 92cbcb: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92cbd0: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92cbd2: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 92cbd4: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cbd7: inc dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cbd9: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cbdb: mov ecx, ebp */
  ecx = ebp;
/* 92cbdd: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 92cbdf: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92cbe1: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cbe3: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 92cbe5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92cbe9: cmp dl, byte ptr [eax + 4] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x4u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92cbec: jne 0x92cc81 */
  if (!zf) goto L_92cc81;
L_92cbf2: /* 92cbf2: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92cbf6: mov edi, dword ptr [edx + 0x14] */
  edi = R32((uint32_t)(edx + 0x14u));
/* 92cbf9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92cbfb: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 92cbff: je 0x92cc5b */
  if (zf) goto L_92cc5b;
L_92cc01: /* 92cc01: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 92cc05: cmp edi, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92cc08: jne 0x92cc5b */
  if (!zf) goto L_92cc5b;
L_92cc0a: /* 92cc0a: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* 92cc0d: cmp edi, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92cc10: jne 0x92cc5b */
  if (!zf) goto L_92cc5b;
L_92cc12: /* 92cc12: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 92cc15: mov ebx, dword ptr [edx + 0x1c] */
  ebx = R32((uint32_t)(edx + 0x1cu));
/* 92cc18: mov eax, edi */
  eax = edi;
/* 92cc1a: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cc1c: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cc1f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 92cc20: mov ecx, eax */
  ecx = eax;
/* 92cc22: not ecx */
  ecx = ~ecx;
/* 92cc24: mov edx, eax */
  edx = eax;
/* 92cc26: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92cc28: mov ebp, ecx */
  ebp = ecx;
/* 92cc2a: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92cc2c: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92cc2e: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 92cc31: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92cc34: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92cc36: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92cc38: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 92cc3a: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cc3c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92cc3e: mov ecx, eax */
  ecx = eax;
/* 92cc40: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 92cc43: mov edx, 1 */
  edx = 0x1u;
/* 92cc48: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 92cc4a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92cc4e: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cc51: test dword ptr [ecx + eax*4 + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92cc55: jne 0x92cc81 */
  if (!zf) goto L_92cc81;
L_92cc57: /* 92cc57: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_92cc5b: /* 92cc5b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92cc5f: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92cc65: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92cc68: imul ecx, ecx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x98u);
  ecx = (uint32_t)r;
  }
/* 92cc6e: mov ecx, dword ptr [ecx + edx + 0xc] */
  ecx = R32((uint32_t)(ecx + edx + 0xcu));
/* 92cc72: mov edx, dword ptr [esi + edx + 0xc] */
  edx = R32((uint32_t)(esi + edx + 0xcu));
/* 92cc76: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 92cc79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92cc7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92cc7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92cc7c: call 0x99aee0 */
  esp -= 4; W32(esp, 0x92cc81u); SPILL(); f_99aee0(); if (g_unwind) return; RELOAD();
L_92cc81: /* 92cc81: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92cc85: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
L_92cc89: /* 92cc89: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 92cc8c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92cc8f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92cc93: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92cc97: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92cc99: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92cc9c: je 0x92cb51 */
  if (zf) goto L_92cb51;
L_92cca2: /* 92cca2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 92cca4: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 92cca7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 92ccaa: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 92ccad: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 92ccaf: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 92ccb1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 92ccb4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92ccb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ccb7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 92ccb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ccba: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92ccbc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92ccbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92ccbf: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92ccc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92ccc3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ccc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ccd0(void) {
  LOAD_REGS();
L_92ccd0: /* 92ccd0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92ccd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ccd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92ccd5: mov ebx, ecx */
  ebx = ecx;
/* 92ccd7: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92ccdb: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92ccde: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 92cce0: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 92cce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92cce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92cce5: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 92cce8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 92ccec: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 92ccef: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 92ccf3: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92ccf7: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 92ccfb: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92ccff: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 92cd03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92cd05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92cd08: jp 0x92ce5d */
  if (pf) goto L_92ce5d;
L_92cd0e: /* 92cd0e: jmp 0x92cd18 */
  goto L_92cd18;
L_92cd10: /* 92cd10: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 92cd14: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
L_92cd18: /* 92cd18: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92cd1c: mov al, byte ptr [edx + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x10u))) & 0xffu);
/* 92cd1f: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92cd21: je 0x92ce5d */
  if (zf) goto L_92ce5d;
L_92cd27: /* 92cd27: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92cd29: jne 0x92ce41 */
  if (!zf) goto L_92ce41;
L_92cd2f: /* 92cd2f: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 92cd32: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92cd35: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 92cd39: mov eax, edx */
  eax = edx;
/* 92cd3b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cd3d: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92cd40: mov ecx, eax */
  ecx = eax;
/* 92cd42: mov esi, eax */
  esi = eax;
/* 92cd44: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92cd46: not ecx */
  ecx = ~ecx;
/* 92cd48: mov ebp, ecx */
  ebp = ecx;
/* 92cd4a: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92cd4c: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92cd4e: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 92cd50: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92cd52: or esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92cd54: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 92cd57: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 92cd5a: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 92cd5d: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 92cd60: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 92cd63: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92cd65: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cd67: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 92cd6a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92cd6c: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 92cd70: mov ecx, eax */
  ecx = eax;
/* 92cd72: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cd74: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92cd76: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 92cd79: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 92cd7b: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cd7e: movzx ebp, al */
  ebp = (uint32_t)((eax & 0xffu));
/* 92cd81: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92cd83: shr dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 7) & 1;
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92cd85: mov ecx, ebp */
  ecx = ebp;
/* 92cd87: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92cd8c: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92cd8e: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 92cd90: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cd93: inc dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cd95: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cd97: mov ecx, ebp */
  ecx = ebp;
/* 92cd99: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 92cd9b: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92cd9d: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cd9f: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 92cda1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92cda5: cmp dl, byte ptr [eax + 4] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x4u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92cda8: jne 0x92ce3d */
  if (!zf) goto L_92ce3d;
L_92cdae: /* 92cdae: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92cdb2: mov edi, dword ptr [edx + 0x14] */
  edi = R32((uint32_t)(edx + 0x14u));
/* 92cdb5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92cdb7: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 92cdbb: je 0x92ce17 */
  if (zf) goto L_92ce17;
L_92cdbd: /* 92cdbd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 92cdc1: cmp edi, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92cdc4: jne 0x92ce17 */
  if (!zf) goto L_92ce17;
L_92cdc6: /* 92cdc6: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* 92cdc9: cmp edi, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92cdcc: jne 0x92ce17 */
  if (!zf) goto L_92ce17;
L_92cdce: /* 92cdce: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 92cdd1: mov ebx, dword ptr [edx + 0x1c] */
  ebx = R32((uint32_t)(edx + 0x1cu));
/* 92cdd4: mov eax, edi */
  eax = edi;
/* 92cdd6: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cdd8: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cddb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 92cddc: mov ecx, eax */
  ecx = eax;
/* 92cdde: not ecx */
  ecx = ~ecx;
/* 92cde0: mov edx, eax */
  edx = eax;
/* 92cde2: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92cde4: mov ebp, ecx */
  ebp = ecx;
/* 92cde6: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92cde8: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92cdea: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 92cded: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92cdf0: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92cdf2: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92cdf4: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 92cdf6: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cdf8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92cdfa: mov ecx, eax */
  ecx = eax;
/* 92cdfc: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 92cdff: mov edx, 1 */
  edx = 0x1u;
/* 92ce04: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 92ce06: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92ce0a: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92ce0d: test dword ptr [ecx + eax*4 + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ce11: jne 0x92ce3d */
  if (!zf) goto L_92ce3d;
L_92ce13: /* 92ce13: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_92ce17: /* 92ce17: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92ce1b: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92ce21: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92ce24: imul ecx, ecx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x98u);
  ecx = (uint32_t)r;
  }
/* 92ce2a: mov ecx, dword ptr [ecx + edx + 0xc] */
  ecx = R32((uint32_t)(ecx + edx + 0xcu));
/* 92ce2e: mov edx, dword ptr [esi + edx + 0xc] */
  edx = R32((uint32_t)(esi + edx + 0xcu));
/* 92ce32: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 92ce35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ce36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ce37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ce38: call 0x99aee0 */
  esp -= 4; W32(esp, 0x92ce3du); SPILL(); f_99aee0(); if (g_unwind) return; RELOAD();
L_92ce3d: /* 92ce3d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
L_92ce41: /* 92ce41: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92ce45: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 92ce47: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92ce4a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92ce4e: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92ce52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92ce54: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92ce57: jnp 0x92cd10 */
  if (!pf) goto L_92cd10;
L_92ce5d: /* 92ce5d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92ce5f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92ce62: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 92ce65: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 92ce68: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 92ce6a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92ce6c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92ce70: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92ce72: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 92ce75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ce76: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 92ce79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ce7a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92ce7c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92ce7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92ce7f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92ce82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92ce83: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ce86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ce90(void) {
  LOAD_REGS();
L_92ce90: /* 92ce90: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92ce93: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 92ce97: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 92ce9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ce9b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92ce9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ce9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ce9e: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 92cea1: mov ebx, ecx */
  ebx = ecx;
/* 92cea3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 92cea6: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92cea9: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 92cead: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 92ceb0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 92ceb4: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92ceb8: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 92cebc: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92cec0: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 92cec4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92cec6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92cec9: jne 0x92d027 */
  if (!zf) goto L_92d027;
L_92cecf: /* 92cecf: jmp 0x92cee0 */
  goto L_92cee0;
L_92ced1: /* 92ced1: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 92ced5: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 92ced9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92cee0: /* 92cee0: mov al, byte ptr [ecx + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x10u))) & 0xffu);
/* 92cee3: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92cee5: je 0x92d027 */
  if (zf) goto L_92d027;
L_92ceeb: /* 92ceeb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92ceed: jne 0x92d00e */
  if (!zf) goto L_92d00e;
L_92cef3: /* 92cef3: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92cef6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 92cef9: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 92cefd: mov eax, edx */
  eax = edx;
/* 92ceff: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cf01: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92cf04: mov ecx, eax */
  ecx = eax;
/* 92cf06: mov esi, eax */
  esi = eax;
/* 92cf08: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92cf0a: not ecx */
  ecx = ~ecx;
/* 92cf0c: mov ebp, ecx */
  ebp = ecx;
/* 92cf0e: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92cf10: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92cf12: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 92cf14: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92cf16: or esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92cf18: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 92cf1b: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 92cf1e: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 92cf21: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 92cf24: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 92cf27: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 92cf29: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cf2b: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 92cf2e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92cf30: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 92cf34: mov ecx, eax */
  ecx = eax;
/* 92cf36: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92cf38: mov bl, byte ptr [ecx + edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx))) & 0xffu);
/* 92cf3b: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 92cf3e: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 92cf40: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 92cf42: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf44: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf47: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf4a: movzx ebp, al */
  ebp = (uint32_t)((eax & 0xffu));
/* 92cf4d: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf50: shr dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 7) & 1;
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92cf52: mov ecx, ebp */
  ecx = ebp;
/* 92cf54: mov eax, 0xf0 */
  eax = 0xf0u;
/* 92cf59: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 92cf5b: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf5e: and al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  cf = 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf60: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 92cf62: dec bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fu;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf64: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92cf66: or al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92cf68: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 92cf6a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92cf6e: cmp dl, byte ptr [eax + 4] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0x4u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92cf71: jne 0x92d006 */
  if (!zf) goto L_92d006;
L_92cf77: /* 92cf77: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92cf7b: mov edi, dword ptr [edx + 0x14] */
  edi = R32((uint32_t)(edx + 0x14u));
/* 92cf7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92cf80: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 92cf84: je 0x92cfe0 */
  if (zf) goto L_92cfe0;
L_92cf86: /* 92cf86: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 92cf8a: cmp edi, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92cf8d: jne 0x92cfe0 */
  if (!zf) goto L_92cfe0;
L_92cf8f: /* 92cf8f: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* 92cf92: cmp edi, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92cf95: jne 0x92cfe0 */
  if (!zf) goto L_92cfe0;
L_92cf97: /* 92cf97: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 92cf9a: mov ebx, dword ptr [edx + 0x1c] */
  ebx = R32((uint32_t)(edx + 0x1cu));
/* 92cf9d: mov eax, edi */
  eax = edi;
/* 92cf9f: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92cfa1: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cfa4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 92cfa5: mov ecx, eax */
  ecx = eax;
/* 92cfa7: not ecx */
  ecx = ~ecx;
/* 92cfa9: mov edx, eax */
  edx = eax;
/* 92cfab: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92cfad: mov ebp, ecx */
  ebp = ecx;
/* 92cfaf: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92cfb1: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92cfb3: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 92cfb6: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92cfb9: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92cfbb: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92cfbd: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 92cfbf: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cfc1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92cfc3: mov ecx, eax */
  ecx = eax;
/* 92cfc5: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 92cfc8: mov edx, 1 */
  edx = 0x1u;
/* 92cfcd: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 92cfcf: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92cfd3: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92cfd6: test dword ptr [ecx + eax*4 + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92cfda: jne 0x92d006 */
  if (!zf) goto L_92d006;
L_92cfdc: /* 92cfdc: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_92cfe0: /* 92cfe0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92cfe4: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92cfea: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 92cfed: imul ecx, ecx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x98u);
  ecx = (uint32_t)r;
  }
/* 92cff3: mov ecx, dword ptr [ecx + edx + 0xc] */
  ecx = R32((uint32_t)(ecx + edx + 0xcu));
/* 92cff7: mov edx, dword ptr [esi + edx + 0xc] */
  edx = R32((uint32_t)(esi + edx + 0xcu));
/* 92cffb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 92cffe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92cfff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d001: call 0x99b010 */
  esp -= 4; W32(esp, 0x92d006u); SPILL(); f_99b010(); if (g_unwind) return; RELOAD();
L_92d006: /* 92d006: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92d00a: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
L_92d00e: /* 92d00e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 92d011: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92d014: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92d018: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92d01c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d01e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d021: je 0x92ced1 */
  if (zf) goto L_92ced1;
L_92d027: /* 92d027: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 92d029: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 92d02c: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 92d02f: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 92d032: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 92d034: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 92d036: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 92d039: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92d03b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d03c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 92d03e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d03f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92d041: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 92d043: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92d044: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92d047: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92d048: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d04b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92d050(void) {
  LOAD_REGS();
L_92d050: /* 92d050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d051: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92d055: imul eax, eax, 0x98 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x98u);
  eax = (uint32_t)r;
  }
/* 92d05b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92d05c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92d05d: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 92d061: mov ebx, ecx */
  ebx = ecx;
/* 92d063: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 92d066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d067: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92d069: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d06a: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 92d06e: xor ecx, ecx */
  ecx = 0;
/* 92d070: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92d074: lea esi, [eax + 0x3c] */
  esi = (uint32_t)(eax + 0x3cu);
/* 92d077: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ebp = r;
  }
/* 92d079: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92d080: /* 92d080: mov eax, 1 */
  eax = 0x1u;
/* 92d085: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 92d087: mov cl, byte ptr [ebx + 5] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x5u))) & 0xffu);
/* 92d08a: test cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d08c: je 0x92d167 */
  if (zf) goto L_92d167;
L_92d092: /* 92d092: mov edx, dword ptr [esi - 0x14] */
  edx = R32((uint32_t)(esi + 0xffffffecu));
/* 92d095: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92d097: mov ecx, dword ptr [edi + ebp] */
  ecx = R32((uint32_t)(edi + ebp));
/* 92d09a: mov dword ptr [esi - 0x14], ecx */
  W32((uint32_t)(esi + 0xffffffecu), ecx);
/* 92d09d: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 92d0a1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 92d0a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 92d0a7: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 92d0a9: fld dword ptr [edi + ebp] */
  { double v = F32((uint32_t)(edi + ebp)); FPUSH(v); }
/* 92d0ac: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92d0b0: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 92d0b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d0ba: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d0bd: jne 0x92d0f9 */
  if (!zf) goto L_92d0f9;
L_92d0bf: /* 92d0bf: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92d0c1: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92d0c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d0c7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d0ca: jp 0x92d0d9 */
  if (pf) goto L_92d0d9;
L_92d0cc: /* 92d0cc: lea eax, [esi - 8] */
  eax = (uint32_t)(esi + 0xfffffff8u);
/* 92d0cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d0d0: mov ecx, ebx */
  ecx = ebx;
/* 92d0d2: call 0x92ce90 */
  esp -= 4; W32(esp, 0x92d0d7u); SPILL(); f_92ce90(); if (g_unwind) return; RELOAD();
/* 92d0d7: jmp 0x92d0f1 */
  goto L_92d0f1;
L_92d0d9: /* 92d0d9: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92d0db: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92d0df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d0e1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d0e4: jne 0x92d0f1 */
  if (!zf) goto L_92d0f1;
L_92d0e6: /* 92d0e6: lea ecx, [esi - 8] */
  ecx = (uint32_t)(esi + 0xfffffff8u);
/* 92d0e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d0ea: mov ecx, ebx */
  ecx = ebx;
/* 92d0ec: call 0x92ccd0 */
  esp -= 4; W32(esp, 0x92d0f1u); SPILL(); f_92ccd0(); if (g_unwind) return; RELOAD();
L_92d0f1: /* 92d0f1: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
L_92d0f9: /* 92d0f9: fld dword ptr [edi + ebp] */
  { double v = F32((uint32_t)(edi + ebp)); FPUSH(v); }
/* 92d0fc: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 92d100: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d102: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d105: jp 0x92d114 */
  if (pf) goto L_92d114;
L_92d107: /* 92d107: lea edx, [esi - 0x1c] */
  edx = (uint32_t)(esi + 0xffffffe4u);
/* 92d10a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d10b: mov ecx, ebx */
  ecx = ebx;
/* 92d10d: call 0x92cb10 */
  esp -= 4; W32(esp, 0x92d112u); SPILL(); f_92cb10(); if (g_unwind) return; RELOAD();
/* 92d112: jmp 0x92d12d */
  goto L_92d12d;
L_92d114: /* 92d114: fld dword ptr [edi + ebp] */
  { double v = F32((uint32_t)(edi + ebp)); FPUSH(v); }
/* 92d117: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 92d11b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d11d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d120: jne 0x92d12d */
  if (!zf) goto L_92d12d;
L_92d122: /* 92d122: lea eax, [esi - 0x1c] */
  eax = (uint32_t)(esi + 0xffffffe4u);
/* 92d125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d126: mov ecx, ebx */
  ecx = ebx;
/* 92d128: call 0x92c950 */
  esp -= 4; W32(esp, 0x92d12du); SPILL(); f_92c950(); if (g_unwind) return; RELOAD();
L_92d12d: /* 92d12d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 92d131: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d133: jne 0x92d167 */
  if (!zf) goto L_92d167;
L_92d135: /* 92d135: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92d137: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92d13b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d13d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d140: jp 0x92d14f */
  if (pf) goto L_92d14f;
L_92d142: /* 92d142: lea ecx, [esi - 8] */
  ecx = (uint32_t)(esi + 0xfffffff8u);
/* 92d145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d146: mov ecx, ebx */
  ecx = ebx;
/* 92d148: call 0x92ce90 */
  esp -= 4; W32(esp, 0x92d14du); SPILL(); f_92ce90(); if (g_unwind) return; RELOAD();
/* 92d14d: jmp 0x92d167 */
  goto L_92d167;
L_92d14f: /* 92d14f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92d151: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 92d155: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d157: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d15a: jne 0x92d167 */
  if (!zf) goto L_92d167;
L_92d15c: /* 92d15c: lea edx, [esi - 8] */
  edx = (uint32_t)(esi + 0xfffffff8u);
/* 92d15f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d160: mov ecx, ebx */
  ecx = ebx;
/* 92d162: call 0x92ccd0 */
  esp -= 4; W32(esp, 0x92d167u); SPILL(); f_92ccd0(); if (g_unwind) return; RELOAD();
L_92d167: /* 92d167: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92d16b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92d16c: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92d16f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92d172: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92d175: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92d179: jl 0x92d080 */
  if ((sf != of)) goto L_92d080;
L_92d17f: /* 92d17f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d180: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d181: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92d182: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92d183: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 92d184: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92d190(void) {
  LOAD_REGS();
L_92d190: /* 92d190: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92d193: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92d194: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 92d198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d199: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92d19a: mov esi, ecx */
  esi = ecx;
/* 92d19c: call 0x92c700 */
  esp -= 4; W32(esp, 0x92d1a1u); SPILL(); f_92c700(); if (g_unwind) return; RELOAD();
/* 92d1a1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d1a3: je 0x92d1e4 */
  if (zf) goto L_92d1e4;
L_92d1a5: /* 92d1a5: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 92d1a8: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 92d1ac: mov eax, ebx */
  eax = ebx;
/* 92d1ae: imul eax, eax, 0x98 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x98u);
  eax = (uint32_t)r;
  }
/* 92d1b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d1b5: mov edi, dword ptr [eax + ecx + 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xcu));
/* 92d1b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d1ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d1bb: call dword ptr [esi + 0xc8] */
  { uint32_t t = R32((uint32_t)(esi + 0xc8u)); esp -= 4; W32(esp, 0x92d1c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92d1c1: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 92d1c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d1c6: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 92d1ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d1cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d1cc: call 0x928710 */
  esp -= 4; W32(esp, 0x92d1d1u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 92d1d1: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 92d1d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d1d6: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 92d1da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d1db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92d1dc: mov ecx, esi */
  ecx = esi;
/* 92d1de: call 0x92d050 */
  esp -= 4; W32(esp, 0x92d1e3u); SPILL(); f_92d050(); if (g_unwind) return; RELOAD();
/* 92d1e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_92d1e4: /* 92d1e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d1e5: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92d1e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92d1e8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d1eb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92d1f0(void) {
  LOAD_REGS();
L_92d1f0: /* 92d1f0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92d1f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d1f4: mov edi, ecx */
  edi = ecx;
/* 92d1f6: mov eax, dword ptr [edi + 0xc8] */
  eax = R32((uint32_t)(edi + 0xc8u));
/* 92d1fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d1fe: jne 0x92d209 */
  if (!zf) goto L_92d209;
L_92d200: /* 92d200: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 92d202: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d203: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d206: ret 4 */
  esp += 8; SPILL(); return;
L_92d209: /* 92d209: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92d20a: lea ebx, [edi + 0xc0] */
  ebx = (uint32_t)(edi + 0xc0u);
/* 92d210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d211: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 92d213: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d215: je 0x92d25a */
  if (zf) goto L_92d25a;
L_92d217: /* 92d217: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92d218: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 92d21c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92d220: /* 92d220: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92d223: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92d224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d225: call dword ptr [edi + 0xc8] */
  { uint32_t t = R32((uint32_t)(edi + 0xc8u)); esp -= 4; W32(esp, 0x92d22bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92d22b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 92d22e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 92d232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d233: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 92d237: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d238: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d239: call 0x928710 */
  esp -= 4; W32(esp, 0x92d23eu); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 92d23e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 92d241: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 92d245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d246: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 92d24a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d24b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d24c: mov ecx, edi */
  ecx = edi;
/* 92d24e: call 0x92d050 */
  esp -= 4; W32(esp, 0x92d253u); SPILL(); f_92d050(); if (g_unwind) return; RELOAD();
/* 92d253: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 92d255: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d257: jne 0x92d220 */
  if (!zf) goto L_92d220;
L_92d259: /* 92d259: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_92d25a: /* 92d25a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d25b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92d25c: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92d25e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d25f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d262: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92d270(void) {
  LOAD_REGS();
L_92d270: /* 92d270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d271: mov esi, ecx */
  esi = ecx;
/* 92d273: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92d276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d277: call 0x99b130 */
  esp -= 4; W32(esp, 0x92d27cu); SPILL(); f_99b130(); if (g_unwind) return; RELOAD();
/* 92d27c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 92d27f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 92d280: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 92d283: js 0x92d2a6 */
  if (sf) goto L_92d2a6;
L_92d285: /* 92d285: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_92d286: /* 92d286: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92d289: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 92d28c: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 92d28f: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* 92d292: mov dword ptr [edi + edx*4], eax */
  W32((uint32_t)(edi + edx*4), eax);
/* 92d295: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 92d298: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 92d29b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92d29c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 92d29d: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 92d2a0: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 92d2a3: jns 0x92d286 */
  if (!sf) goto L_92d286;
L_92d2a5: /* 92d2a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_92d2a6: /* 92d2a6: mov eax, 1 */
  eax = 0x1u;
/* 92d2ab: mov dword ptr [esi + 0x20], 0 */
  W32((uint32_t)(esi + 0x20u), 0x0u);
/* 92d2b2: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 92d2b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d2b9: ret  */
  esp += 4; SPILL(); return;
}

void f_92d2c0(void) {
  LOAD_REGS();
L_92d2c0: /* 92d2c0: mov dword ptr [ecx + 0xcc], 0 */
  W32((uint32_t)(ecx + 0xccu), 0x0u);
/* 92d2ca: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 92d2cc: ret  */
  esp += 4; SPILL(); return;
}

void f_92d2d0(void) {
  LOAD_REGS();
L_92d2d0: /* 92d2d0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92d2d3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 92d2d7: imul eax, eax, 0x98 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x98u);
  eax = (uint32_t)r;
  }
/* 92d2dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92d2de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d2df: mov edi, ecx */
  edi = ecx;
/* 92d2e1: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 92d2e4: mov edx, dword ptr [eax + ecx + 0x14] */
  edx = R32((uint32_t)(eax + ecx + 0x14u));
/* 92d2e8: mov ebx, dword ptr [edi + 0x18] */
  ebx = R32((uint32_t)(edi + 0x18u));
/* 92d2eb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92d2ed: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92d2f0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 92d2f4: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 92d2f7: xor eax, eax */
  eax = 0;
/* 92d2f9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92d2fb: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 92d2ff: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92d303: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 92d307: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 92d30b: jle 0x92d4d4 */
  if ((zf || sf != of)) goto L_92d4d4;
L_92d311: /* 92d311: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92d312: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 92d316: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_92d317: /* 92d317: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 92d31a: mov esi, eax */
  esi = eax;
/* 92d31c: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92d322: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92d324: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d325: mov ecx, edi */
  ecx = edi;
/* 92d327: call 0x92c750 */
  esp -= 4; W32(esp, 0x92d32cu); SPILL(); f_92c750(); if (g_unwind) return; RELOAD();
/* 92d32c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d32e: je 0x92d4b7 */
  if (zf) goto L_92d4b7;
L_92d334: /* 92d334: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92d338: cmp eax, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d33c: je 0x92d4b7 */
  if (zf) goto L_92d4b7;
L_92d342: /* 92d342: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 92d346: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d348: je 0x92d3ac */
  if (zf) goto L_92d3ac;
L_92d34a: /* 92d34a: cmp dword ptr [esi + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d34d: jne 0x92d3ac */
  if (!zf) goto L_92d3ac;
L_92d34f: /* 92d34f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 92d353: cmp dword ptr [esi + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d356: jne 0x92d3ac */
  if (!zf) goto L_92d3ac;
L_92d358: /* 92d358: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 92d35b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92d35f: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92d361: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92d364: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 92d365: mov ecx, eax */
  ecx = eax;
/* 92d367: not ecx */
  ecx = ~ecx;
/* 92d369: mov edx, eax */
  edx = eax;
/* 92d36b: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92d36d: mov ebp, ecx */
  ebp = ecx;
/* 92d36f: and ebp, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92d373: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92d375: and eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92d379: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92d37b: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 92d37e: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92d381: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 92d383: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92d385: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92d387: mov ecx, eax */
  ecx = eax;
/* 92d389: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 92d38c: mov edx, 1 */
  edx = 0x1u;
/* 92d391: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 92d393: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92d397: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92d39a: test dword ptr [ecx + eax*4 + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d39e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 92d3a2: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 92d3aa: jne 0x92d3b4 */
  if (!zf) goto L_92d3b4;
L_92d3ac: /* 92d3ac: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
L_92d3b4: /* 92d3b4: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 92d3b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d3ba: je 0x92d41b */
  if (zf) goto L_92d41b;
L_92d3bc: /* 92d3bc: cmp dword ptr [esi + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d3bf: jne 0x92d41b */
  if (!zf) goto L_92d41b;
L_92d3c1: /* 92d3c1: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 92d3c4: cmp edx, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d3c8: jne 0x92d41b */
  if (!zf) goto L_92d41b;
L_92d3ca: /* 92d3ca: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 92d3ce: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 92d3d1: mov eax, edi */
  eax = edi;
/* 92d3d3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92d3d5: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92d3d8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 92d3d9: mov ecx, eax */
  ecx = eax;
/* 92d3db: not ecx */
  ecx = ~ecx;
/* 92d3dd: mov edx, eax */
  edx = eax;
/* 92d3df: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92d3e1: mov ebp, ecx */
  ebp = ecx;
/* 92d3e3: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92d3e5: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92d3e7: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 92d3ea: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 92d3ed: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92d3ef: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92d3f1: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 92d3f5: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 92d3f7: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92d3f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92d3fb: mov ecx, eax */
  ecx = eax;
/* 92d3fd: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 92d400: mov edx, 1 */
  edx = 0x1u;
/* 92d405: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 92d407: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 92d40b: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 92d40e: test dword ptr [ecx + eax*4 + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d412: je 0x92d41b */
  if (zf) goto L_92d41b;
L_92d414: /* 92d414: mov ebp, 1 */
  ebp = 0x1u;
/* 92d419: jmp 0x92d41d */
  goto L_92d41d;
L_92d41b: /* 92d41b: xor ebp, ebp */
  ebp = 0;
L_92d41d: /* 92d41d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92d421: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 92d425: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92d429: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92d42b: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92d42e: mov ecx, eax */
  ecx = eax;
/* 92d430: not ecx */
  ecx = ~ecx;
/* 92d432: mov edx, ecx */
  edx = ecx;
/* 92d434: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92d436: mov esi, eax */
  esi = eax;
/* 92d438: and esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 92d43c: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 92d43e: and eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92d442: and ecx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92d446: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 92d448: mov esi, eax */
  esi = eax;
/* 92d44a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 92d44e: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92d450: je 0x92d4b7 */
  if (zf) goto L_92d4b7;
L_92d452: /* 92d452: imul ebx, edx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edx);
  ebx = (uint32_t)r;
  }
/* 92d455: lea ebp, [edx + 1] */
  ebp = (uint32_t)(edx + 0x1u);
/* 92d458: lea ecx, [edx + 2] */
  ecx = (uint32_t)(edx + 0x2u);
/* 92d45b: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 92d45e: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 92d460: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 92d462: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 92d465: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92d467: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 92d46b: mov ebp, ebx */
  ebp = ebx;
/* 92d46d: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 92d46f: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 92d473: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92d476: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 92d478: mov bl, byte ptr [ebx + ebp] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ebp))) & 0xffu);
/* 92d47b: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92d47e: shr bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 92d480: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* 92d483: and bl, 0xf */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 92d486: cmp bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92d488: jne 0x92d4b7 */
  if (!zf) goto L_92d4b7;
L_92d48a: /* 92d48a: imul esi, esi, 0x98 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x98u);
  esi = (uint32_t)r;
  }
/* 92d490: imul edx, edx, 0x98 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x98u);
  edx = (uint32_t)r;
  }
/* 92d496: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d498: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 92d49b: mov ecx, dword ptr [esi + eax + 0xc] */
  ecx = R32((uint32_t)(esi + eax + 0xcu));
/* 92d49f: mov edx, dword ptr [edx + eax + 0xc] */
  edx = R32((uint32_t)(edx + eax + 0xcu));
/* 92d4a3: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 92d4a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d4a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d4a9: je 0x92d4b2 */
  if (zf) goto L_92d4b2;
L_92d4ab: /* 92d4ab: call 0x99aee0 */
  esp -= 4; W32(esp, 0x92d4b0u); SPILL(); f_99aee0(); if (g_unwind) return; RELOAD();
/* 92d4b0: jmp 0x92d4b7 */
  goto L_92d4b7;
L_92d4b2: /* 92d4b2: call 0x99b010 */
  esp -= 4; W32(esp, 0x92d4b7u); SPILL(); f_99b010(); if (g_unwind) return; RELOAD();
L_92d4b7: /* 92d4b7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 92d4bb: mov ebx, dword ptr [edi + 0x18] */
  ebx = R32((uint32_t)(edi + 0x18u));
/* 92d4be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92d4bf: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 92d4c3: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 92d4c6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92d4c8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 92d4cc: jl 0x92d317 */
  if ((sf != of)) goto L_92d317;
L_92d4d2: /* 92d4d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d4d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_92d4d4: /* 92d4d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d4d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92d4d6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d4d9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92d4e0(void) {
  LOAD_REGS();
L_92d4e0: /* 92d4e0: mov ax, 1 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x1u) & 0xffffu);
/* 92d4e4: ret  */
  esp += 4; SPILL(); return;
}

void f_92d4f0(void) {
  LOAD_REGS();
L_92d4f0: /* 92d4f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d4f4: push 0x92d7e0 */
  { uint32_t v = 0x92d7e0u; esp -= 4; W32(esp, v); }
/* 92d4f9: push 0x92d730 */
  { uint32_t v = 0x92d730u; esp -= 4; W32(esp, v); }
/* 92d4fe: push 0x92d6d0 */
  { uint32_t v = 0x92d6d0u; esp -= 4; W32(esp, v); }
/* 92d503: push 0x92d6b0 */
  { uint32_t v = 0x92d6b0u; esp -= 4; W32(esp, v); }
/* 92d508: push 0x92d590 */
  { uint32_t v = 0x92d590u; esp -= 4; W32(esp, v); }
/* 92d50d: push 0x92d580 */
  { uint32_t v = 0x92d580u; esp -= 4; W32(esp, v); }
/* 92d512: push 0xaf3eb8 */
  { uint32_t v = 0xaf3eb8u; esp -= 4; W32(esp, v); }
/* 92d517: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92d519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d51a: call 0x929d50 */
  esp -= 4; W32(esp, 0x92d51fu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 92d51f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92d530(void) {
  LOAD_REGS();
L_92d530: /* 92d530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d531: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 92d533: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 92d535: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x92d53bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92d53b: mov esi, eax */
  esi = eax;
/* 92d53d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d53f: je 0x92d559 */
  if (zf) goto L_92d559;
L_92d541: /* 92d541: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92d545: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 92d547: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d549: call 0x92a720 */
  esp -= 4; W32(esp, 0x92d54eu); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 92d54e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92d552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d553: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d554: call 0x92d560 */
  esp -= 4; W32(esp, 0x92d559u); SPILL(); f_92d560(); if (g_unwind) return; RELOAD();
L_92d559: /* 92d559: mov eax, esi */
  eax = esi;
/* 92d55b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d55c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92d560(void) {
  LOAD_REGS();
L_92d560: /* 92d560: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92d564: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d568: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92d56b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92d570(void) {
  LOAD_REGS();
L_92d570: /* 92d570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d574: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92d577: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92d580(void) {
  LOAD_REGS();
L_92d580: /* 92d580: jmp 0x92a770 */
  SPILL(); f_92a770(); return;
}

void f_92d590(void) {
  LOAD_REGS();
L_92d590: /* 92d590: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92d593: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d594: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 92d598: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d599: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d59a: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92d59fu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92d59f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d5a0: mov edi, eax */
  edi = eax;
/* 92d5a2: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92d5a7u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92d5a7: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92d5aa: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92d5ad: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 92d5b0: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92d5b3: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 92d5b6: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 92d5b9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 92d5bc: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 92d5bf: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 92d5c2: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 92d5c5: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 92d5c8: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 92d5cb: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 92d5ce: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92d5d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d5d4: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 92d5d7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92d5db: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 92d5de: je 0x92d674 */
  if (zf) goto L_92d674;
L_92d5e4: /* 92d5e4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92d5e7: fcomp dword ptr [ecx + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x30u)));
  FPOP();
/* 92d5ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d5ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d5ef: jp 0x92d5f6 */
  if (pf) goto L_92d5f6;
L_92d5f1: /* 92d5f1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92d5f4: jmp 0x92d5f9 */
  goto L_92d5f9;
L_92d5f6: /* 92d5f6: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
L_92d5f9: /* 92d5f9: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92d5fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 92d5ff: fcomp dword ptr [ecx + 0x34] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x34u)));
  FPOP();
/* 92d602: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d604: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d607: jp 0x92d60e */
  if (pf) goto L_92d60e;
L_92d609: /* 92d609: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 92d60c: jmp 0x92d611 */
  goto L_92d611;
L_92d60e: /* 92d60e: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
L_92d611: /* 92d611: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 92d614: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92d617: fcomp dword ptr [ecx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x38u)));
  FPOP();
/* 92d61a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d61c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d61f: jp 0x92d626 */
  if (pf) goto L_92d626;
L_92d621: /* 92d621: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92d624: jmp 0x92d629 */
  goto L_92d629;
L_92d626: /* 92d626: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
L_92d629: /* 92d629: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 92d62c: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92d62f: fcomp dword ptr [ecx + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x30u)));
  FPOP();
/* 92d632: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d634: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d637: jne 0x92d63e */
  if (!zf) goto L_92d63e;
L_92d639: /* 92d639: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92d63c: jmp 0x92d641 */
  goto L_92d641;
L_92d63e: /* 92d63e: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
L_92d641: /* 92d641: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 92d644: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92d647: fcomp dword ptr [ecx + 0x34] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x34u)));
  FPOP();
/* 92d64a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d64c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d64f: jne 0x92d656 */
  if (!zf) goto L_92d656;
L_92d651: /* 92d651: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92d654: jmp 0x92d659 */
  goto L_92d659;
L_92d656: /* 92d656: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
L_92d659: /* 92d659: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 92d65c: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 92d65f: fcomp dword ptr [ecx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x38u)));
  FPOP();
/* 92d662: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d664: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92d667: jne 0x92d66e */
  if (!zf) goto L_92d66e;
L_92d669: /* 92d669: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 92d66c: jmp 0x92d671 */
  goto L_92d671;
L_92d66e: /* 92d66e: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
L_92d671: /* 92d671: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
L_92d674: /* 92d674: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92d677: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d678: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92d67a: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92d67d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 92d680: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92d682: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 92d685: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92d688: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 92d68c: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 92d68f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92d691: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 92d694: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 92d697: fadd dword ptr [esi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18u)));
/* 92d69a: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 92d69d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92d6a1: fadd dword ptr [esi + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1cu)));
/* 92d6a4: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 92d6a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d6a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d6ab: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92d6b0(void) {
  LOAD_REGS();
L_92d6b0: /* 92d6b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92d6b4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92d6b8: xor ecx, ecx */
  ecx = 0;
/* 92d6ba: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92d6bd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92d6c0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92d6c2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d6c6: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 92d6c9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 92d6cb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92d6d0(void) {
  LOAD_REGS();
L_92d6d0: /* 92d6d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92d6d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d6d4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 92d6d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d6d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d6da: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92d6dfu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92d6df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d6e0: mov edi, eax */
  edi = eax;
/* 92d6e2: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92d6e7u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92d6e7: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92d6ea: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92d6ee: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d6f0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92d6f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d6f3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92d6f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d6f6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92d6f9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 92d6fd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92d6ff: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 92d702: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 92d706: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92d709: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 92d70d: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92d710: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92d714: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92d717: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92d71b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92d71d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92d71f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92d722: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 92d725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d728: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92d730(void) {
  LOAD_REGS();
L_92d730: /* 92d730: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92d734: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d735: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92d739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d73a: xor eax, eax */
  eax = 0;
/* 92d73c: mov edi, esi */
  edi = esi;
/* 92d73e: mov ecx, 9 */
  ecx = 0x9u;
/* 92d743: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 92d745: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 92d748: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d74a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92d74c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92d750: fmul dword ptr [0xa11210] */
  ST0 = ST0 * (F32((uint32_t)(0xa11210u)));
/* 92d756: xor ecx, ecx */
  ecx = 0;
/* 92d758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d759: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 92d75b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92d75d: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 92d760: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d762: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92d764: fmul dword ptr [0xa11210] */
  ST0 = ST0 * (F32((uint32_t)(0xa11210u)));
/* 92d76a: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 92d76d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92d76f: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 92d772: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d774: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92d776: fmul dword ptr [0xa11210] */
  ST0 = ST0 * (F32((uint32_t)(0xa11210u)));
/* 92d77c: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 92d77f: mov esi, 0x3f800000 */
  esi = 0x3f800000u;
/* 92d784: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 92d786: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92d788: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 92d78b: mov dword ptr [eax + 0x28], esi */
  W32((uint32_t)(eax + 0x28u), esi);
/* 92d78e: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* 92d791: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92d794: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92d797: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92d79a: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92d79d: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 92d7a0: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 92d7a3: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 92d7a6: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 92d7a9: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 92d7ac: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 92d7af: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 92d7b2: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 92d7b5: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 92d7b8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92d7bc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d7be: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92d7c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d7c1: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 92d7c4: fmul dword ptr [0xa211c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa211c0u)));
/* 92d7ca: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92d7cc: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 92d7cf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92d7d1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92d7e0(void) {
  LOAD_REGS();
L_92d7e0: /* 92d7e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d7e4: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 92d7e6: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92d7e9: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92d7ec: jne 0x92d8fd */
  if (!zf) goto L_92d8fd;
L_92d7f2: /* 92d7f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92d7f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d7f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92d7f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d7f6: call 0x92d570 */
  esp -= 4; W32(esp, 0x92d7fbu); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 92d7fb: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92d7ff: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 92d803: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 92d807: mov edi, 0xa20f88 */
  edi = 0xa20f88u;
/* 92d80c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92d810: /* 92d810: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92d814: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 92d817: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 92d81a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 92d81d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92d821: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 92d824: fmul dword ptr [edi - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffffcu)));
/* 92d827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d828: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92d82c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d82d: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 92d82f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d830: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 92d834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d835: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d837: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 92d83b: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92d83e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d83f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92d841: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92d844: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d846: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92d848: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92d84a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d84c: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 92d84f: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92d853: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d855: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92d858: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92d85a: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92d85d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d85f: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92d861: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92d864: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d866: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 92d869: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 92d86d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92d86f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92d872: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92d874: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92d877: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92d879: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92d87c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d87e: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 92d881: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 92d885: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92d889: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 92d88c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92d890: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 92d893: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92d897: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 92d89a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d89c: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92d89f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92d8a1: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92d8a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d8a6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92d8a8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92d8aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d8ac: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 92d8af: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92d8b3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92d8b5: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92d8b8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92d8ba: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92d8bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d8bf: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92d8c1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92d8c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d8c6: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 92d8c9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 92d8cd: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92d8cf: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92d8d2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92d8d4: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92d8d7: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92d8d9: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92d8dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92d8de: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 92d8e1: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92d8e5: call dword ptr [0xb022c8] */
  { uint32_t t = R32((uint32_t)(0xb022c8u)); esp -= 4; W32(esp, 0x92d8ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92d8eb: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92d8ee: cmp edi, 0xa211c8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa211c8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92d8f4: jl 0x92d810 */
  if ((sf != of)) goto L_92d810;
L_92d8fa: /* 92d8fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92d8fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d8fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_92d8fd: /* 92d8fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92d900: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92d910(void) {
  LOAD_REGS();
L_92d910: /* 92d910: mov ax, 5 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x5u) & 0xffffu);
/* 92d914: ret  */
  esp += 4; SPILL(); return;
}

void f_92d920(void) {
  LOAD_REGS();
L_92d920: /* 92d920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d924: push 0x92dd40 */
  { uint32_t v = 0x92dd40u; esp -= 4; W32(esp, v); }
/* 92d929: push 0x92dc90 */
  { uint32_t v = 0x92dc90u; esp -= 4; W32(esp, v); }
/* 92d92e: push 0x92dbe0 */
  { uint32_t v = 0x92dbe0u; esp -= 4; W32(esp, v); }
/* 92d933: push 0x92dbb0 */
  { uint32_t v = 0x92dbb0u; esp -= 4; W32(esp, v); }
/* 92d938: push 0x92da30 */
  { uint32_t v = 0x92da30u; esp -= 4; W32(esp, v); }
/* 92d93d: push 0x92da20 */
  { uint32_t v = 0x92da20u; esp -= 4; W32(esp, v); }
/* 92d942: push 0xaf3ec4 */
  { uint32_t v = 0xaf3ec4u; esp -= 4; W32(esp, v); }
/* 92d947: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 92d949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d94a: call 0x929d50 */
  esp -= 4; W32(esp, 0x92d94fu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 92d94f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92d960(void) {
  LOAD_REGS();
L_92d960: /* 92d960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d961: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 92d963: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 92d965: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x92d96bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92d96b: mov esi, eax */
  esi = eax;
/* 92d96d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92d96f: je 0x92d994 */
  if (zf) goto L_92d994;
L_92d971: /* 92d971: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92d975: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 92d977: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92d978: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d979: call 0x92a720 */
  esp -= 4; W32(esp, 0x92d97eu); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 92d97e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92d982: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92d983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d984: call 0x92d9a0 */
  esp -= 4; W32(esp, 0x92d989u); SPILL(); f_92d9a0(); if (g_unwind) return; RELOAD();
/* 92d989: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92d98d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92d98e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92d98f: call 0x92d9e0 */
  esp -= 4; W32(esp, 0x92d994u); SPILL(); f_92d9e0(); if (g_unwind) return; RELOAD();
L_92d994: /* 92d994: mov eax, esi */
  eax = esi;
/* 92d996: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92d997: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92d9a0(void) {
  LOAD_REGS();
L_92d9a0: /* 92d9a0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92d9a4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92d9aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d9ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d9af: jp 0x92d9c1 */
  if (pf) goto L_92d9c1;
L_92d9b1: /* 92d9b1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 92d9b7: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d9bb: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92d9be: ret 8 */
  esp += 12; SPILL(); return;
L_92d9c1: /* 92d9c1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92d9c5: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92d9c9: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 92d9cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92d9d0(void) {
  LOAD_REGS();
L_92d9d0: /* 92d9d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92d9d4: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92d9d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92d9e0(void) {
  LOAD_REGS();
L_92d9e0: /* 92d9e0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92d9e4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92d9ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92d9ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92d9ef: jp 0x92d9f9 */
  if (pf) goto L_92d9f9;
L_92d9f1: /* 92d9f1: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_92d9f9: /* 92d9f9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92d9fd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92da01: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92da07: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 92da0a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92da10(void) {
  LOAD_REGS();
L_92da10: /* 92da10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92da14: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92da17: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92da19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92da20(void) {
  LOAD_REGS();
L_92da20: /* 92da20: jmp 0x92a770 */
  SPILL(); f_92a770(); return;
}

void f_92da30(void) {
  LOAD_REGS();
L_92da30: /* 92da30: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92da33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92da34: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 92da38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92da39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92da3a: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92da3fu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92da3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92da40: mov edi, eax */
  edi = eax;
/* 92da42: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92da47u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92da47: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92da4a: fabs  */
  ST0 = fabs(ST0);
/* 92da4c: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92da4f: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 92da52: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92da55: fabs  */
  ST0 = fabs(ST0);
/* 92da57: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92da5a: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 92da5d: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92da60: fabs  */
  ST0 = fabs(ST0);
/* 92da62: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92da65: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 92da68: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92da6c: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92da6f: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92da71: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92da74: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92da77: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92da79: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 92da7c: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 92da7f: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 92da83: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 92da86: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92da88: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92da8b: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 92da8e: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92da91: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 92da94: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 92da98: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92da9b: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 92da9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92daa1: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 92daa4: je 0x92dba0 */
  if (zf) goto L_92dba0;
L_92daaa: /* 92daaa: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92daad: fabs  */
  ST0 = fabs(ST0);
/* 92daaf: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92dab2: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 92dab5: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92dab8: fabs  */
  ST0 = fabs(ST0);
/* 92daba: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92dabd: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 92dac0: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92dac3: fabs  */
  ST0 = fabs(ST0);
/* 92dac5: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92dac8: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 92dacb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92dacf: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92dad2: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92dad4: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 92dad8: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92dadb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92dadd: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 92dae1: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 92dae4: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 92dae8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92daec: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92daee: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92daf1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92daf5: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92daf8: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 92dafc: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92daff: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92db03: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92db06: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 92db0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92db0c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92db0f: jp 0x92db16 */
  if (pf) goto L_92db16;
L_92db11: /* 92db11: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92db14: jmp 0x92db1a */
  goto L_92db1a;
L_92db16: /* 92db16: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_92db1a: /* 92db1a: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92db1d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 92db20: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 92db24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92db26: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92db29: jp 0x92db30 */
  if (pf) goto L_92db30;
L_92db2b: /* 92db2b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 92db2e: jmp 0x92db34 */
  goto L_92db34;
L_92db30: /* 92db30: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_92db34: /* 92db34: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 92db37: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92db3a: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 92db3e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92db40: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92db43: jp 0x92db4a */
  if (pf) goto L_92db4a;
L_92db45: /* 92db45: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92db48: jmp 0x92db4e */
  goto L_92db4e;
L_92db4a: /* 92db4a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_92db4e: /* 92db4e: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 92db51: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92db54: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 92db58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92db5a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92db5d: jne 0x92db64 */
  if (!zf) goto L_92db64;
L_92db5f: /* 92db5f: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92db62: jmp 0x92db68 */
  goto L_92db68;
L_92db64: /* 92db64: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
L_92db68: /* 92db68: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 92db6b: fcom dword ptr [esi + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x18u)));
/* 92db6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92db70: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92db73: jp 0x92db7a */
  if (pf) goto L_92db7a;
L_92db75: /* 92db75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92db77: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
L_92db7a: /* 92db7a: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 92db7d: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 92db80: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 92db84: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92db86: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92db89: jne 0x92db99 */
  if (!zf) goto L_92db99;
L_92db8b: /* 92db8b: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 92db8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92db8f: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 92db92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92db93: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92db96: ret 0xc */
  esp += 16; SPILL(); return;
L_92db99: /* 92db99: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92db9d: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
L_92dba0: /* 92dba0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92dba1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92dba2: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92dba5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92dbb0(void) {
  LOAD_REGS();
L_92dbb0: /* 92dbb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92dbb4: xor ecx, ecx */
  ecx = 0;
/* 92dbb6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92dbb9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92dbbc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92dbbe: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92dbc2: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92dbc5: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* 92dbc8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92dbcc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92dbce: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92dbe0(void) {
  LOAD_REGS();
L_92dbe0: /* 92dbe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92dbe1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92dbe5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92dbe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92dbe7: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92dbecu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92dbec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92dbed: mov edi, eax */
  edi = eax;
/* 92dbef: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92dbf4u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92dbf4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 92dbf8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92dbfc: mov edx, eax */
  edx = eax;
/* 92dbfe: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 92dc01: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 92dc04: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92dc07: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 92dc0a: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92dc0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92dc0f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 92dc11: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 92dc14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 92dc16: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* 92dc19: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 92dc1c: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 92dc1f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92dc21: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 92dc24: fcom dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
/* 92dc2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92dc2c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92dc2f: jne 0x92dc38 */
  if (!zf) goto L_92dc38;
L_92dc31: /* 92dc31: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92dc33: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 92dc36: jmp 0x92dc4a */
  goto L_92dc4a;
L_92dc38: /* 92dc38: fcomp dword ptr [0xa1ba98] */
  fpu_com(ST0, F32((uint32_t)(0xa1ba98u)));
  FPOP();
/* 92dc3e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92dc40: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92dc43: jp 0x92dc67 */
  if (pf) goto L_92dc67;
L_92dc45: /* 92dc45: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 92dc48: fchs  */
  ST0 = -ST0;
L_92dc4a: /* 92dc4a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92dc4c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 92dc4f: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 92dc51: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92dc53: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92dc55: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 92dc58: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 92dc5b: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92dc5e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 92dc61: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 92dc64: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
L_92dc67: /* 92dc67: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92dc6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92dc6b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92dc6d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92dc6f: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 92dc71: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92dc73: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92dc75: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92dc78: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 92dc7b: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92dc7e: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92dc81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92dc82: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 92dc85: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92dc88: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92dc90(void) {
  LOAD_REGS();
L_92dc90: /* 92dc90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92dc94: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92dc97: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92dc9b: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92dc9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92dc9f: fmul dword ptr [0xa211d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa211d0u)));
/* 92dca5: mov edi, edx */
  edi = edx;
/* 92dca7: mov ecx, 9 */
  ecx = 0x9u;
/* 92dcac: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* 92dcaf: xor eax, eax */
  eax = 0;
/* 92dcb1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 92dcb3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92dcb7: xor ecx, ecx */
  ecx = 0;
/* 92dcb9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92dcbb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92dcbc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92dcbe: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92dcc0: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92dcc2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92dcc4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92dcc6: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92dcc8: fmul qword ptr [0xa211c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa211c8u)));
/* 92dcce: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92dcd0: fmul qword ptr [0xa0b278] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b278u)));
/* 92dcd6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92dcd8: fst dword ptr [edx] */
  WF32((uint32_t)(edx), ST0);
/* 92dcda: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 92dcdd: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 92dce3: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 92dce6: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 92dceb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92dced: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92dcef: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92dcf2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92dcf5: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92dcf8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92dcfa: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92dcfd: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 92dd00: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 92dd03: fmul dword ptr [0xa20f50] */
  ST0 = ST0 * (F32((uint32_t)(0xa20f50u)));
/* 92dd09: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 92dd0c: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 92dd0f: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 92dd12: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 92dd15: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 92dd18: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 92dd1b: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 92dd1e: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 92dd21: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 92dd24: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92dd28: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92dd2a: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 92dd2d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92dd2f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92dd40(void) {
  LOAD_REGS();
L_92dd40: /* 92dd40: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92dd50(void) {
  LOAD_REGS();
L_92dd50: /* 92dd50: mov ax, 2 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x2u) & 0xffffu);
/* 92dd54: ret  */
  esp += 4; SPILL(); return;
}

void f_92dd60(void) {
  LOAD_REGS();
L_92dd60: /* 92dd60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92dd64: push 0x92e410 */
  { uint32_t v = 0x92e410u; esp -= 4; W32(esp, v); }
/* 92dd69: push 0x92e2a0 */
  { uint32_t v = 0x92e2a0u; esp -= 4; W32(esp, v); }
/* 92dd6e: push 0x92e190 */
  { uint32_t v = 0x92e190u; esp -= 4; W32(esp, v); }
/* 92dd73: push 0x92e130 */
  { uint32_t v = 0x92e130u; esp -= 4; W32(esp, v); }
/* 92dd78: push 0x92dea0 */
  { uint32_t v = 0x92dea0u; esp -= 4; W32(esp, v); }
/* 92dd7d: push 0x92de90 */
  { uint32_t v = 0x92de90u; esp -= 4; W32(esp, v); }
/* 92dd82: push 0xaf3ed0 */
  { uint32_t v = 0xaf3ed0u; esp -= 4; W32(esp, v); }
/* 92dd87: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 92dd89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92dd8a: call 0x929d50 */
  esp -= 4; W32(esp, 0x92dd8fu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 92dd8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92dda0(void) {
  LOAD_REGS();
L_92dda0: /* 92dda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92dda1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 92dda3: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 92dda5: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x92ddabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92ddab: mov esi, eax */
  esi = eax;
/* 92ddad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ddaf: jne 0x92ddb5 */
  if (!zf) goto L_92ddb5;
L_92ddb1: /* 92ddb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ddb2: ret 0x10 */
  esp += 20; SPILL(); return;
L_92ddb5: /* 92ddb5: call 0x92dd50 */
  esp -= 4; W32(esp, 0x92ddbau); SPILL(); f_92dd50(); if (g_unwind) return; RELOAD();
/* 92ddba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ddbb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92ddbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ddc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ddc1: call 0x92a720 */
  esp -= 4; W32(esp, 0x92ddc6u); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 92ddc6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92ddca: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92ddce: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92ddd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ddd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ddd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ddd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ddd6: call 0x92ddf0 */
  esp -= 4; W32(esp, 0x92dddbu); SPILL(); f_92ddf0(); if (g_unwind) return; RELOAD();
/* 92dddb: mov eax, esi */
  eax = esi;
/* 92dddd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ddde: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92ddf0(void) {
  LOAD_REGS();
L_92ddf0: /* 92ddf0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92ddf4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ddf8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92ddfe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92de00: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92de03: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92de07: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92de0d: fst dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0);
/* 92de10: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92de14: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92de1a: fst dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0);
/* 92de1d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92de1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92de21: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92de23: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 92de25: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92de27: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92de29: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 92de2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92de2d: fsqrt  */
  ST0 = sqrt(ST0);
/* 92de2f: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 92de31: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92de33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92de35: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 92de38: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92de40(void) {
  LOAD_REGS();
L_92de40: /* 92de40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92de44: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92de47: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92de4b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92de4f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92de51: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92de53: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92de56: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92de58: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 92de5a: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92de5d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92de61: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92de63: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92de65: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92de70(void) {
  LOAD_REGS();
L_92de70: /* 92de70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92de74: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 92de77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92de80(void) {
  LOAD_REGS();
L_92de80: /* 92de80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92de84: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92de87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92de90(void) {
  LOAD_REGS();
L_92de90: /* 92de90: jmp 0x92a770 */
  SPILL(); f_92a770(); return;
}

void f_92dea0(void) {
  LOAD_REGS();
L_92dea0: /* 92dea0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92dea3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92dea4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92dea5: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 92dea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92deaa: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92deafu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92deaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92deb0: mov esi, eax */
  esi = eax;
/* 92deb2: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92deb7u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92deb7: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92deba: fabs  */
  ST0 = fabs(ST0);
/* 92debc: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92debf: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92dec2: fabs  */
  ST0 = fabs(ST0);
/* 92dec4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92dec6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92dec8: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92decb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92decd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92decf: fabs  */
  ST0 = fabs(ST0);
/* 92ded1: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 92ded5: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92ded8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92deda: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92dedd: fabs  */
  ST0 = fabs(ST0);
/* 92dedf: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92dee2: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92dee5: fabs  */
  ST0 = fabs(ST0);
/* 92dee7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92dee9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92deeb: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92deee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92def0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92def3: fabs  */
  ST0 = fabs(ST0);
/* 92def5: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 92def9: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92defc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92defe: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92df01: fabs  */
  ST0 = fabs(ST0);
/* 92df03: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92df06: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92df09: fabs  */
  ST0 = fabs(ST0);
/* 92df0b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92df0d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92df0f: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92df12: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92df14: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92df17: fabs  */
  ST0 = fabs(ST0);
/* 92df19: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 92df1d: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92df20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92df22: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92df26: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92df29: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92df2b: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 92df2e: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92df31: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92df33: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 92df36: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 92df39: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 92df3d: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 92df40: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92df42: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92df45: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 92df48: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92df4b: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 92df4e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 92df52: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92df55: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 92df59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92df5b: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 92df5e: je 0x92e0a4 */
  if (zf) goto L_92e0a4;
L_92df64: /* 92df64: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92df67: fabs  */
  ST0 = fabs(ST0);
/* 92df69: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92df6c: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92df6f: fabs  */
  ST0 = fabs(ST0);
/* 92df71: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92df73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92df75: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92df78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92df7a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92df7c: fabs  */
  ST0 = fabs(ST0);
/* 92df7e: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 92df82: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92df85: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92df87: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92df8a: fabs  */
  ST0 = fabs(ST0);
/* 92df8c: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92df8f: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92df92: fabs  */
  ST0 = fabs(ST0);
/* 92df94: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92df96: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92df98: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92df9b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92df9d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92dfa0: fabs  */
  ST0 = fabs(ST0);
/* 92dfa2: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 92dfa6: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92dfa9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92dfab: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92dfae: fabs  */
  ST0 = fabs(ST0);
/* 92dfb0: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92dfb3: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92dfb6: fabs  */
  ST0 = fabs(ST0);
/* 92dfb8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92dfba: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92dfbc: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92dfbf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92dfc1: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92dfc4: fabs  */
  ST0 = fabs(ST0);
/* 92dfc6: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 92dfca: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92dfcd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92dfcf: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92dfd3: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92dfd6: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92dfd8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 92dfdc: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92dfdf: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92dfe1: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 92dfe5: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 92dfe8: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 92dfec: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92dff0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92dff2: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92dff5: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92dff9: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92dffc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 92e000: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92e003: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92e007: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92e00a: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 92e00e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e010: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e013: jp 0x92e01a */
  if (pf) goto L_92e01a;
L_92e015: /* 92e015: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92e018: jmp 0x92e01e */
  goto L_92e01e;
L_92e01a: /* 92e01a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_92e01e: /* 92e01e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 92e021: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 92e024: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 92e028: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e02a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e02d: jp 0x92e034 */
  if (pf) goto L_92e034;
L_92e02f: /* 92e02f: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 92e032: jmp 0x92e038 */
  goto L_92e038;
L_92e034: /* 92e034: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_92e038: /* 92e038: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 92e03b: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92e03e: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 92e042: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e044: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e047: jp 0x92e04e */
  if (pf) goto L_92e04e;
L_92e049: /* 92e049: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92e04c: jmp 0x92e052 */
  goto L_92e052;
L_92e04e: /* 92e04e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_92e052: /* 92e052: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 92e055: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 92e058: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 92e05c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e05e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e061: jne 0x92e068 */
  if (!zf) goto L_92e068;
L_92e063: /* 92e063: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 92e066: jmp 0x92e06c */
  goto L_92e06c;
L_92e068: /* 92e068: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
L_92e06c: /* 92e06c: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 92e06f: fcom dword ptr [edi + 0x18] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x18u)));
/* 92e072: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e074: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e077: jp 0x92e07e */
  if (pf) goto L_92e07e;
L_92e079: /* 92e079: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e07b: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
L_92e07e: /* 92e07e: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 92e081: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 92e084: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 92e088: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e08a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e08d: jne 0x92e09d */
  if (!zf) goto L_92e09d;
L_92e08f: /* 92e08f: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 92e092: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 92e095: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92e096: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e097: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e09a: ret 0xc */
  esp += 16; SPILL(); return;
L_92e09d: /* 92e09d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92e0a1: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
L_92e0a4: /* 92e0a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92e0a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e0a6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e0a9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e0b0(void) {
  LOAD_REGS();
L_92e0b0: /* 92e0b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92e0b4: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92e0b7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92e0bb: fabs  */
  ST0 = fabs(ST0);
/* 92e0bd: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 92e0c0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92e0c3: fabs  */
  ST0 = fabs(ST0);
/* 92e0c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e0c7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e0c9: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92e0cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e0ce: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92e0d0: fabs  */
  ST0 = fabs(ST0);
/* 92e0d2: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 92e0d6: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 92e0d9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e0db: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92e0de: fabs  */
  ST0 = fabs(ST0);
/* 92e0e0: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 92e0e3: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92e0e6: fabs  */
  ST0 = fabs(ST0);
/* 92e0e8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e0ea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e0ec: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92e0ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e0f1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92e0f4: fabs  */
  ST0 = fabs(ST0);
/* 92e0f6: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 92e0fa: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 92e0fd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92e101: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e103: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92e106: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92e108: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92e10a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e10c: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92e10f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92e112: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92e115: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92e117: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92e11a: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92e11d: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 92e120: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e130(void) {
  LOAD_REGS();
L_92e130: /* 92e130: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92e134: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92e138: xor ecx, ecx */
  ecx = 0;
/* 92e13a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92e13d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92e140: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92e142: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e146: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 92e149: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 92e14b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e150(void) {
  LOAD_REGS();
L_92e150: /* 92e150: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 92e154: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92e15a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e15c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e15f: jp 0x92e168 */
  if (pf) goto L_92e168;
L_92e161: /* 92e161: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 92e167: ret  */
  esp += 4; SPILL(); return;
L_92e168: /* 92e168: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 92e16c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92e172: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e174: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e177: jp 0x92e180 */
  if (pf) goto L_92e180;
L_92e179: /* 92e179: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 92e17f: ret  */
  esp += 4; SPILL(); return;
L_92e180: /* 92e180: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 92e186: ret  */
  esp += 4; SPILL(); return;
}

void f_92e190(void) {
  LOAD_REGS();
L_92e190: /* 92e190: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92e193: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92e194: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e195: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 92e199: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92e19a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e19b: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92e1a0u); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92e1a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e1a1: mov edi, eax */
  edi = eax;
/* 92e1a3: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92e1a8u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92e1a8: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92e1ac: mov esi, eax */
  esi = eax;
/* 92e1ae: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 92e1b1: lea ebx, [esi + 0x20] */
  ebx = (uint32_t)(esi + 0x20u);
/* 92e1b4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92e1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92e1b8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92e1bb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 92e1be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e1c0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 92e1c2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92e1c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e1c6: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92e1ca: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92e1cd: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 92e1d0: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92e1d3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92e1d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e1d8: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92e1db: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92e1dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e1df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92e1e3: call 0x92e280 */
  esp -= 4; W32(esp, 0x92e1e8u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 92e1e8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92e1ec: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92e1f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e1f1: call 0x92e150 */
  esp -= 4; W32(esp, 0x92e1f6u); SPILL(); f_92e150(); if (g_unwind) return; RELOAD();
/* 92e1f6: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 92e1f9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 92e1fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92e1fe: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92e202: call 0x92e150 */
  esp -= 4; W32(esp, 0x92e207u); SPILL(); f_92e150(); if (g_unwind) return; RELOAD();
/* 92e207: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92e20a: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 92e20e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92e20f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92e213: call 0x92e150 */
  esp -= 4; W32(esp, 0x92e218u); SPILL(); f_92e150(); if (g_unwind) return; RELOAD();
/* 92e218: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 92e21b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e21d: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 92e221: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 92e223: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e226: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e22a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92e22c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e22e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e232: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92e235: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e237: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 92e23a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92e23c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e23e: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92e241: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e245: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92e248: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e24a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e24e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92e251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e253: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 92e256: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92e259: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92e25c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e260: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92e263: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e265: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e269: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92e26c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e26e: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 92e271: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 92e274: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92e275: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e276: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92e277: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e27a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e280(void) {
  LOAD_REGS();
L_92e280: /* 92e280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e284: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92e287: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 92e28a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92e28d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 92e290: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e292: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92e294: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92e296: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e298: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92e2a0(void) {
  LOAD_REGS();
L_92e2a0: /* 92e2a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e2a4: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92e2a7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92e2ab: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92e2ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92e2af: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92e2b2: xor eax, eax */
  eax = 0;
/* 92e2b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e2b6: mov edi, edx */
  edi = edx;
/* 92e2b8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92e2ba: mov ecx, 9 */
  ecx = 0x9u;
/* 92e2bf: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 92e2c1: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e2c3: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 92e2c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e2c7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92e2cb: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 92e2cd: xor ecx, ecx */
  ecx = 0;
/* 92e2cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92e2d0: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 92e2d6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 92e2d8: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 92e2da: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 92e2dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e2de: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 92e2e0: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 92e2e6: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 92e2e9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 92e2eb: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 92e2f1: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 92e2f4: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 92e2f9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92e2fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e2fd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92e300: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e302: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92e305: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92e307: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92e30a: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92e30d: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 92e310: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92e312: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 92e315: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 92e318: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 92e31b: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 92e321: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 92e324: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 92e327: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 92e32a: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 92e32d: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 92e330: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 92e333: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 92e336: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92e33a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92e33c: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 92e33f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e341: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e343: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92e350(void) {
  LOAD_REGS();
L_92e350: /* 92e350: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92e354: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 92e356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e358: call 0x92e150 */
  esp -= 4; W32(esp, 0x92e35du); SPILL(); f_92e150(); if (g_unwind) return; RELOAD();
/* 92e35d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92e361: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 92e364: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 92e368: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 92e36a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 92e36d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e36e: call 0x92e150 */
  esp -= 4; W32(esp, 0x92e373u); SPILL(); f_92e150(); if (g_unwind) return; RELOAD();
/* 92e373: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 92e376: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 92e379: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 92e37c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92e37d: call 0x92e150 */
  esp -= 4; W32(esp, 0x92e382u); SPILL(); f_92e150(); if (g_unwind) return; RELOAD();
/* 92e382: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 92e385: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e388: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92e38b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e38c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e390(void) {
  LOAD_REGS();
L_92e390: /* 92e390: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92e394: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92e397: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92e39b: fabs  */
  ST0 = fabs(ST0);
/* 92e39d: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 92e3a0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92e3a3: fabs  */
  ST0 = fabs(ST0);
/* 92e3a5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e3a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e3a9: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92e3ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e3ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92e3b0: fabs  */
  ST0 = fabs(ST0);
/* 92e3b2: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 92e3b6: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 92e3b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e3bb: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92e3be: fabs  */
  ST0 = fabs(ST0);
/* 92e3c0: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 92e3c3: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92e3c6: fabs  */
  ST0 = fabs(ST0);
/* 92e3c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e3ca: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e3cc: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92e3cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e3d1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92e3d4: fabs  */
  ST0 = fabs(ST0);
/* 92e3d6: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 92e3da: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 92e3dd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92e3e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e3e3: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92e3e6: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92e3e8: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92e3ea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e3ec: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92e3ef: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92e3f2: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92e3f5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92e3f7: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92e3fa: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92e3fd: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 92e400: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e410(void) {
  LOAD_REGS();
L_92e410: /* 92e410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e414: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 92e416: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92e419: cmp cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92e41c: jne 0x92e55e */
  if (!zf) goto L_92e55e;
L_92e422: /* 92e422: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92e423: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e424: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92e425: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 92e429: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92e42a: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 92e42e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92e42f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 92e433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92e434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e435: call 0x92de40 */
  esp -= 4; W32(esp, 0x92e43au); SPILL(); f_92de40(); if (g_unwind) return; RELOAD();
/* 92e43a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e43e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92e444: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 92e448: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 92e44c: mov edi, 0xa211e0 */
  edi = 0xa211e0u;
/* 92e451: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 92e455: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e459: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92e45f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92e463: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92e467: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92e46d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_92e471: /* 92e471: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e475: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 92e478: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 92e47b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 92e47e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e482: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 92e485: fmul dword ptr [edi - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffffcu)));
/* 92e488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92e489: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92e48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e48e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 92e490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92e491: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 92e495: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92e496: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e498: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 92e49c: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92e49f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e4a0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e4a2: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92e4a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e4a7: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92e4a9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92e4ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e4ad: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 92e4b0: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 92e4b4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e4b6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92e4b9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92e4bb: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92e4be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e4c0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e4c2: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92e4c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e4c7: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 92e4ca: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92e4ce: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92e4d0: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92e4d3: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92e4d5: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92e4d8: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92e4da: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92e4dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e4df: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 92e4e2: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 92e4e6: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92e4ea: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 92e4ed: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92e4f1: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 92e4f4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92e4f8: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 92e4fb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e4fd: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92e500: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e502: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92e505: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e507: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92e509: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92e50b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e50d: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 92e510: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92e514: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e516: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92e519: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92e51b: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92e51e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e520: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e522: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92e525: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e527: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 92e52a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 92e52e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92e530: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92e533: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92e535: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92e538: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92e53a: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92e53d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e53f: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 92e542: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 92e546: call dword ptr [0xb022c8] */
  { uint32_t t = R32((uint32_t)(0xb022c8u)); esp -= 4; W32(esp, 0x92e54cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92e54c: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92e54f: cmp edi, 0xa21300 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa21300u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92e555: jl 0x92e471 */
  if ((sf != of)) goto L_92e471;
L_92e55b: /* 92e55b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92e55c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e55d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_92e55e: /* 92e55e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e561: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e570(void) {
  LOAD_REGS();
L_92e570: /* 92e570: mov ax, 4 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x4u) & 0xffffu);
/* 92e574: ret  */
  esp += 4; SPILL(); return;
}

void f_92e580(void) {
  LOAD_REGS();
L_92e580: /* 92e580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e584: push 0x92ed90 */
  { uint32_t v = 0x92ed90u; esp -= 4; W32(esp, v); }
/* 92e589: push 0x92ecf0 */
  { uint32_t v = 0x92ecf0u; esp -= 4; W32(esp, v); }
/* 92e58e: push 0x92ea90 */
  { uint32_t v = 0x92ea90u; esp -= 4; W32(esp, v); }
/* 92e593: push 0x92ea60 */
  { uint32_t v = 0x92ea60u; esp -= 4; W32(esp, v); }
/* 92e598: push 0x92e6d0 */
  { uint32_t v = 0x92e6d0u; esp -= 4; W32(esp, v); }
/* 92e59d: push 0x92e6c0 */
  { uint32_t v = 0x92e6c0u; esp -= 4; W32(esp, v); }
/* 92e5a2: push 0xaf3ed8 */
  { uint32_t v = 0xaf3ed8u; esp -= 4; W32(esp, v); }
/* 92e5a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 92e5a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e5aa: call 0x929d50 */
  esp -= 4; W32(esp, 0x92e5afu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 92e5af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92e5c0(void) {
  LOAD_REGS();
L_92e5c0: /* 92e5c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e5c1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 92e5c3: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 92e5c5: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x92e5cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92e5cb: mov esi, eax */
  esi = eax;
/* 92e5cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92e5cf: je 0x92e5ee */
  if (zf) goto L_92e5ee;
L_92e5d1: /* 92e5d1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92e5d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 92e5d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92e5d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e5d9: call 0x92a720 */
  esp -= 4; W32(esp, 0x92e5deu); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 92e5de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92e5e2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92e5e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92e5e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92e5e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e5e9: call 0x92e690 */
  esp -= 4; W32(esp, 0x92e5eeu); SPILL(); f_92e690(); if (g_unwind) return; RELOAD();
L_92e5ee: /* 92e5ee: mov eax, esi */
  eax = esi;
/* 92e5f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e5f1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e600(void) {
  LOAD_REGS();
L_92e600: /* 92e600: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e604: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92e607: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92e610(void) {
  LOAD_REGS();
L_92e610: /* 92e610: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e614: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92e617: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92e619: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92e620(void) {
  LOAD_REGS();
L_92e620: /* 92e620: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e624: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92e627: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92e630(void) {
  LOAD_REGS();
L_92e630: /* 92e630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e634: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92e638: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92e63b: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92e63e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e640: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92e642: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92e646: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 92e64a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e64c: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e64e: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 92e651: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92e660(void) {
  LOAD_REGS();
L_92e660: /* 92e660: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92e664: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e668: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92e66e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e670: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 92e673: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92e676: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e678: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92e67a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92e67c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 92e67e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e680: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e682: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 92e684: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e686: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 92e689: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92e690(void) {
  LOAD_REGS();
L_92e690: /* 92e690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92e694: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92e698: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92e69b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e69f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92e6a5: fst dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0);
/* 92e6a8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e6aa: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92e6ac: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92e6b0: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 92e6b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e6b6: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e6b8: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 92e6bb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e6c0(void) {
  LOAD_REGS();
L_92e6c0: /* 92e6c0: jmp 0x92a770 */
  SPILL(); f_92a770(); return;
}

void f_92e6d0(void) {
  LOAD_REGS();
L_92e6d0: /* 92e6d0: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92e6d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e6d4: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 92e6d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92e6d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e6da: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92e6dfu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92e6df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92e6e0: mov edi, eax */
  edi = eax;
/* 92e6e2: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92e6e7u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92e6e7: mov ecx, eax */
  ecx = eax;
/* 92e6e9: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 92e6ec: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 92e6ef: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 92e6f3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92e6f7: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 92e6fa: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 92e6fe: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 92e702: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 92e706: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92e70c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92e710: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 92e714: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92e71a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92e71e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e722: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 92e726: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92e72c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92e730: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 92e736: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e738: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e73b: jne 0x92e745 */
  if (!zf) goto L_92e745;
L_92e73d: /* 92e73d: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e73f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 92e743: jmp 0x92e74f */
  goto L_92e74f;
L_92e745: /* 92e745: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e747: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_92e74f: /* 92e74f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e753: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92e759: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e75b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e75e: jne 0x92e76c */
  if (!zf) goto L_92e76c;
L_92e760: /* 92e760: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e764: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e766: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92e76a: jmp 0x92e774 */
  goto L_92e774;
L_92e76c: /* 92e76c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_92e774: /* 92e774: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92e778: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92e77e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e780: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e783: jne 0x92e78d */
  if (!zf) goto L_92e78d;
L_92e785: /* 92e785: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92e789: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e78b: jmp 0x92e793 */
  goto L_92e793;
L_92e78d: /* 92e78d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_92e793: /* 92e793: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92e797: fabs  */
  ST0 = fabs(ST0);
/* 92e799: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92e79c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92e7a0: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 92e7a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e7a5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92e7a9: fabs  */
  ST0 = fabs(ST0);
/* 92e7ab: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92e7ae: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e7b2: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 92e7b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e7b7: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92e7bb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e7bf: fabs  */
  ST0 = fabs(ST0);
/* 92e7c1: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92e7c4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92e7c6: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 92e7c9: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92e7cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e7cd: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 92e7d1: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 92e7d4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92e7d6: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92e7d9: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 92e7dc: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 92e7e0: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 92e7e3: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 92e7e6: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 92e7ea: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 92e7ed: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 92e7f0: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 92e7f3: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92e7f7: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 92e7fa: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 92e7fd: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92e801: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 92e804: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 92e808: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92e80a: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 92e80d: je 0x92e9d0 */
  if (zf) goto L_92e9d0;
L_92e813: /* 92e813: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 92e816: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 92e819: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 92e81d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92e821: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 92e824: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 92e828: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 92e82c: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 92e830: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92e836: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 92e83a: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 92e83e: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92e844: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 92e848: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e84c: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 92e850: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92e856: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92e85a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 92e860: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e862: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e865: jne 0x92e86f */
  if (!zf) goto L_92e86f;
L_92e867: /* 92e867: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e869: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92e86d: jmp 0x92e879 */
  goto L_92e879;
L_92e86f: /* 92e86f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e871: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_92e879: /* 92e879: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92e87d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92e883: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e885: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e888: jne 0x92e896 */
  if (!zf) goto L_92e896;
L_92e88a: /* 92e88a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92e88e: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e890: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 92e894: jmp 0x92e89e */
  goto L_92e89e;
L_92e896: /* 92e896: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_92e89e: /* 92e89e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92e8a2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92e8a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e8aa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e8ad: jne 0x92e8b7 */
  if (!zf) goto L_92e8b7;
L_92e8af: /* 92e8af: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92e8b3: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e8b5: jmp 0x92e8bd */
  goto L_92e8bd;
L_92e8b7: /* 92e8b7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_92e8bd: /* 92e8bd: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92e8c1: fabs  */
  ST0 = fabs(ST0);
/* 92e8c3: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92e8c6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92e8ca: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 92e8cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e8cf: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 92e8d3: fabs  */
  ST0 = fabs(ST0);
/* 92e8d5: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92e8d8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92e8dc: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 92e8df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92e8e1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92e8e5: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92e8e9: fabs  */
  ST0 = fabs(ST0);
/* 92e8eb: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 92e8ee: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92e8f0: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 92e8f3: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92e8f5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92e8f7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 92e8fb: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 92e8fe: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92e900: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92e904: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 92e907: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 92e90b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92e90f: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 92e912: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 92e916: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 92e91a: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 92e91d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92e921: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 92e924: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 92e928: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92e92c: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 92e92f: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92e933: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92e936: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 92e93a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e93c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e93f: jp 0x92e946 */
  if (pf) goto L_92e946;
L_92e941: /* 92e941: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92e944: jmp 0x92e94a */
  goto L_92e94a;
L_92e946: /* 92e946: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_92e94a: /* 92e94a: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92e94d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 92e950: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 92e954: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e956: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e959: jp 0x92e960 */
  if (pf) goto L_92e960;
L_92e95b: /* 92e95b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 92e95e: jmp 0x92e964 */
  goto L_92e964;
L_92e960: /* 92e960: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
L_92e964: /* 92e964: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 92e967: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92e96a: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 92e96e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e970: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e973: jp 0x92e97a */
  if (pf) goto L_92e97a;
L_92e975: /* 92e975: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92e978: jmp 0x92e97e */
  goto L_92e97e;
L_92e97a: /* 92e97a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_92e97e: /* 92e97e: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 92e981: fcom dword ptr [esi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x14u)));
/* 92e984: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e986: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92e989: jp 0x92e990 */
  if (pf) goto L_92e990;
L_92e98b: /* 92e98b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92e98d: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
L_92e990: /* 92e990: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 92e993: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92e996: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 92e99a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e99c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e99f: jne 0x92e9a6 */
  if (!zf) goto L_92e9a6;
L_92e9a1: /* 92e9a1: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92e9a4: jmp 0x92e9aa */
  goto L_92e9aa;
L_92e9a6: /* 92e9a6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
L_92e9aa: /* 92e9aa: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 92e9ad: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 92e9b0: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 92e9b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92e9b6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92e9b9: jne 0x92e9c9 */
  if (!zf) goto L_92e9c9;
L_92e9bb: /* 92e9bb: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 92e9be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92e9bf: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 92e9c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e9c3: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e9c6: ret 0xc */
  esp += 16; SPILL(); return;
L_92e9c9: /* 92e9c9: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92e9cd: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
L_92e9d0: /* 92e9d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92e9d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92e9d2: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92e9d5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92e9e0(void) {
  LOAD_REGS();
L_92e9e0: /* 92e9e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92e9e4: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92e9e7: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 92e9ea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92e9ec: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 92e9f0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92e9f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92e9f6: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92e9fc: fsqrt  */
  ST0 = sqrt(ST0);
/* 92e9fe: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 92ea01: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ea03: fabs  */
  ST0 = fabs(ST0);
/* 92ea05: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ea07: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ea09: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92ea0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ea0e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92ea12: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 92ea16: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 92ea1c: fsqrt  */
  ST0 = sqrt(ST0);
/* 92ea1e: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 92ea21: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92ea25: fabs  */
  ST0 = fabs(ST0);
/* 92ea27: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ea29: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ea2b: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92ea2e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92ea32: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ea34: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92ea37: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92ea39: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92ea3b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ea3d: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92ea40: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92ea43: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92ea46: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92ea48: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92ea4b: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92ea4e: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 92ea51: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ea60(void) {
  LOAD_REGS();
L_92ea60: /* 92ea60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92ea64: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92ea68: xor ecx, ecx */
  ecx = 0;
/* 92ea6a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92ea6d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92ea70: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92ea72: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ea76: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 92ea79: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 92ea7b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ea80(void) {
  LOAD_REGS();
L_92ea80: /* 92ea80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ea84: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92ea87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ea90(void) {
  LOAD_REGS();
L_92ea90: /* 92ea90: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92ea93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92ea94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ea95: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 92ea99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ea9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ea9b: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92eaa0u); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92eaa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92eaa1: mov ebx, eax */
  ebx = eax;
/* 92eaa3: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92eaa8u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92eaa8: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 92eaac: mov edi, eax */
  edi = eax;
/* 92eaae: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 92eab2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 92eab4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 92eab7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 92eaba: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92eabe: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 92eac2: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92eac6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92eaca: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 92eacd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 92eacf: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 92ead2: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 92ead5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 92ead8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 92eadb: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 92eade: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92eae2: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 92eae5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92eae7: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92eaeb: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 92eaee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92eaf0: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 92eaf4: fabs  */
  ST0 = fabs(ST0);
/* 92eaf6: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 92eafc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92eafe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92eb01: jne 0x92ebfb */
  if (!zf) goto L_92ebfb;
L_92eb07: /* 92eb07: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92eb0b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92eb0e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92eb14: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 92eb18: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 92eb1b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92eb1d: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 92eb20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92eb22: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 92eb26: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92eb29: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92eb2b: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 92eb2e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 92eb32: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 92eb35: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 92eb38: jne 0x92eb5a */
  if (!zf) goto L_92eb5a;
L_92eb3a: /* 92eb3a: call 0x92ec40 */
  esp -= 4; W32(esp, 0x92eb3fu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 92eb3f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92eb43: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 92eb45: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 92eb47: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 92eb4b: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 92eb4e: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 92eb51: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92eb55: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 92eb58: jmp 0x92eb78 */
  goto L_92eb78;
L_92eb5a: /* 92eb5a: call 0x92ec40 */
  esp -= 4; W32(esp, 0x92eb5fu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 92eb5f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 92eb61: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 92eb65: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 92eb67: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 92eb6a: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 92eb6e: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 92eb71: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92eb74: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
L_92eb78: /* 92eb78: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92eb7b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 92eb7f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92eb83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92eb84: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 92eb87: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 92eb8b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92eb8f: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 92eb92: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92eb96: fmul dword ptr [edi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28u)));
/* 92eb99: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 92eb9d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92eba1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92eba3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92eba7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92ebab: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92ebad: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92ebb1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92ebb3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92ebb5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92ebb9: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 92ebbd: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 92ebc1: call 0x92e280 */
  esp -= 4; W32(esp, 0x92ebc6u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 92ebc6: fcom dword ptr [0xa214d8] */
  fpu_com(ST0, F32((uint32_t)(0xa214d8u)));
/* 92ebcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92ebce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92ebd1: jne 0x92ebf9 */
  if (!zf) goto L_92ebf9;
L_92ebd3: /* 92ebd3: fsqrt  */
  ST0 = sqrt(ST0);
/* 92ebd5: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 92ebdb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92ebdf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92ebe1: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 92ebe5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92ebe9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92ebeb: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92ebef: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92ebf3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92ebf5: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_92ebf9: /* 92ebf9: fstp st(0) */
  STI(0) = ST0; FPOP();
L_92ebfb: /* 92ebfb: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 92ebfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ebff: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 92ec03: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92ec05: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92ec09: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92ec0b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 92ec0f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92ec13: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92ec15: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92ec19: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 92ec1b: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 92ec1d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92ec1f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92ec23: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 92ec26: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 92ec29: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 92ec2d: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 92ec30: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92ec33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ec34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92ec35: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92ec38: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ec40(void) {
  LOAD_REGS();
L_92ec40: /* 92ec40: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92ec44: mov eax, ecx */
  eax = ecx;
/* 92ec46: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92ec4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 92ec4c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92ec50: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 92ec53: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92ec56: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ec60(void) {
  LOAD_REGS();
L_92ec60: /* 92ec60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92ec64: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92ec66: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92ec6a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92ec6d: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 92ec71: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92ec74: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92ec76: fabs  */
  ST0 = fabs(ST0);
/* 92ec78: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 92ec7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92ec80: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92ec83: jne 0x92eccc */
  if (!zf) goto L_92eccc;
L_92ec85: /* 92ec85: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 92ec8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92ec8d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92ec90: jne 0x92ec9a */
  if (!zf) goto L_92ec9a;
L_92ec92: /* 92ec92: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 92ec95: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 92ec98: jmp 0x92eca0 */
  goto L_92eca0;
L_92ec9a: /* 92ec9a: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92ec9d: fsub dword ptr [edx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x14u)));
L_92eca0: /* 92eca0: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92eca3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92eca5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92eca7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92eca9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 92ecab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ecad: fcom dword ptr [0xa214d8] */
  fpu_com(ST0, F32((uint32_t)(0xa214d8u)));
/* 92ecb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92ecb5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92ecb8: jne 0x92eccc */
  if (!zf) goto L_92eccc;
L_92ecba: /* 92ecba: fsqrt  */
  ST0 = sqrt(ST0);
/* 92ecbc: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 92ecc2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92ecc4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92ecc6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92ecc8: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92ecca: jmp 0x92ecce */
  goto L_92ecce;
L_92eccc: /* 92eccc: fstp st(0) */
  STI(0) = ST0; FPOP();
L_92ecce: /* 92ecce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92ecd0: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 92ecd3: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 92ecd5: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92ecd7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 92ecda: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 92ecdd: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92ece0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92ecf0(void) {
  LOAD_REGS();
L_92ecf0: /* 92ecf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ecf4: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92ecf7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92ecfb: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92ecfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ecff: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92ed01: xor eax, eax */
  eax = 0;
/* 92ed03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92ed05: mov edi, edx */
  edi = edx;
/* 92ed07: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ed09: mov ecx, 9 */
  ecx = 0x9u;
/* 92ed0e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92ed10: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 92ed12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92ed14: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92ed18: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ed1a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 92ed1c: xor ecx, ecx */
  ecx = 0;
/* 92ed1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ed1f: fmul qword ptr [0xa211c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa211c8u)));
/* 92ed25: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92ed27: fmul qword ptr [0xa0b278] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b278u)));
/* 92ed2d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ed2f: fst dword ptr [edx] */
  WF32((uint32_t)(edx), ST0);
/* 92ed31: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 92ed34: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 92ed3a: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 92ed3d: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 92ed42: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 92ed44: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92ed46: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 92ed49: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 92ed4c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 92ed4f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92ed51: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 92ed54: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 92ed57: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 92ed5a: fmul dword ptr [0xa20f50] */
  ST0 = ST0 * (F32((uint32_t)(0xa20f50u)));
/* 92ed60: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 92ed63: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 92ed66: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 92ed69: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 92ed6c: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 92ed6f: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 92ed72: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 92ed75: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 92ed78: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 92ed7b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92ed7f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92ed81: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 92ed84: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92ed86: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92ed90(void) {
  LOAD_REGS();
L_92ed90: /* 92ed90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92ed94: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 92ed96: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92ed99: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 92ed9b: jne 0x92eebd */
  if (!zf) goto L_92eebd;
L_92eda1: /* 92eda1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92eda2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92eda3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92eda4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92eda5: call 0x92e600 */
  esp -= 4; W32(esp, 0x92edaau); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 92edaa: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92edae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92edaf: call 0x92e610 */
  esp -= 4; W32(esp, 0x92edb4u); SPILL(); f_92e610(); if (g_unwind) return; RELOAD();
/* 92edb4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92edba: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 92edbe: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 92edc2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92edc6: mov edi, 0xa21300 */
  edi = 0xa21300u;
/* 92edcb: nop  */
/* 92edcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_92edd0: /* 92edd0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92edd4: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 92edd7: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 92edda: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 92eddd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92ede1: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 92ede4: fmul dword ptr [edi - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffffcu)));
/* 92ede7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ede8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92edec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92eded: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 92edef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92edf0: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 92edf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92edf5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92edf7: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 92edfb: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92edfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92edff: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ee01: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92ee04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee06: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92ee08: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92ee0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee0c: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 92ee0f: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 92ee13: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ee15: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92ee18: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92ee1a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92ee1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee1f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ee21: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92ee24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee26: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 92ee29: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92ee2d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92ee2f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92ee32: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92ee34: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92ee37: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92ee39: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92ee3c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee3e: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 92ee41: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 92ee45: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92ee49: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 92ee4c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92ee50: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 92ee53: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92ee57: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 92ee5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92ee5c: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92ee5f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ee61: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92ee64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee66: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92ee68: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92ee6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee6c: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 92ee6f: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92ee73: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ee75: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92ee78: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92ee7a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92ee7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee7f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92ee81: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 92ee84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee86: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 92ee89: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 92ee8d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92ee8f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92ee92: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92ee94: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92ee97: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92ee99: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92ee9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92ee9e: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 92eea1: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 92eea5: call dword ptr [0xb022c8] */
  { uint32_t t = R32((uint32_t)(0xb022c8u)); esp -= 4; W32(esp, 0x92eeabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92eeab: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92eeae: cmp edi, 0xa214e0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa214e0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92eeb4: jl 0x92edd0 */
  if ((sf != of)) goto L_92edd0;
L_92eeba: /* 92eeba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92eebb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92eebc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_92eebd: /* 92eebd: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92eec0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92eed0(void) {
  LOAD_REGS();
L_92eed0: /* 92eed0: mov ax, 6 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x6u) & 0xffffu);
/* 92eed4: ret  */
  esp += 4; SPILL(); return;
}

void f_92eee0(void) {
  LOAD_REGS();
L_92eee0: /* 92eee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92eee4: push 0x92f4c0 */
  { uint32_t v = 0x92f4c0u; esp -= 4; W32(esp, v); }
/* 92eee9: push 0x92f470 */
  { uint32_t v = 0x92f470u; esp -= 4; W32(esp, v); }
/* 92eeee: push 0x92f440 */
  { uint32_t v = 0x92f440u; esp -= 4; W32(esp, v); }
/* 92eef3: push 0x92f3f0 */
  { uint32_t v = 0x92f3f0u; esp -= 4; W32(esp, v); }
/* 92eef8: push 0x92f0b0 */
  { uint32_t v = 0x92f0b0u; esp -= 4; W32(esp, v); }
/* 92eefd: push 0x92f090 */
  { uint32_t v = 0x92f090u; esp -= 4; W32(esp, v); }
/* 92ef02: push 0xaf3ef0 */
  { uint32_t v = 0xaf3ef0u; esp -= 4; W32(esp, v); }
/* 92ef07: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 92ef09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ef0a: call 0x929d50 */
  esp -= 4; W32(esp, 0x92ef0fu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 92ef0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92ef20(void) {
  LOAD_REGS();
L_92ef20: /* 92ef20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92ef21: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 92ef25: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92ef27: jne 0x92ef2f */
  if (!zf) goto L_92ef2f;
L_92ef29: /* 92ef29: xor eax, eax */
  eax = 0;
/* 92ef2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ef2c: ret 0x14 */
  esp += 24; SPILL(); return;
L_92ef2f: /* 92ef2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ef30: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 92ef32: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 92ef34: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x92ef3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92ef3a: mov esi, eax */
  esi = eax;
/* 92ef3c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92ef40: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 92ef42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92ef43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ef44: call 0x92a720 */
  esp -= 4; W32(esp, 0x92ef49u); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 92ef49: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92ef4d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92ef51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92ef52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92ef53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92ef54: call 0x92ef70 */
  esp -= 4; W32(esp, 0x92ef59u); SPILL(); f_92ef70(); if (g_unwind) return; RELOAD();
/* 92ef59: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92ef5d: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 92ef60: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 92ef63: mov eax, esi */
  eax = esi;
/* 92ef65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92ef66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92ef67: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_92ef70(void) {
  LOAD_REGS();
L_92ef70: /* 92ef70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92ef74: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92ef78: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 92ef7a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92ef7e: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 92ef80: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92ef83: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92ef86: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 92ef89: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 92ef8c: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 92ef8f: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 92ef92: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 92ef95: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92ef98: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92ef9e: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92efa1: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92efa4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92efaa: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 92efad: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92efb0: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92efb6: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 92efb9: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 92efbb: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 92efbd: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 92efc0: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 92efc3: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 92efc6: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 92efc9: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 92efcc: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 92efcf: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 92efd2: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 92efd5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92efdb: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 92efde: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92efe1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92efe7: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 92efea: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92efed: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92eff3: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 92eff6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92f000(void) {
  LOAD_REGS();
L_92f000: /* 92f000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92f004: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92f007: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92f00b: fadd dword ptr [eax + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x1cu)));
/* 92f00e: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92f010: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f013: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* 92f016: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92f019: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92f01c: fadd dword ptr [eax + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x24u)));
/* 92f01f: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92f022: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92f026: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92f029: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* 92f02c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92f02e: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f031: fsub dword ptr [eax + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x20u)));
/* 92f034: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92f037: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92f03a: fsub dword ptr [eax + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x24u)));
/* 92f03d: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92f040: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92f050(void) {
  LOAD_REGS();
L_92f050: /* 92f050: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92f054: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92f058: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 92f05b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92f060(void) {
  LOAD_REGS();
L_92f060: /* 92f060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92f064: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 92f067: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92f070(void) {
  LOAD_REGS();
L_92f070: /* 92f070: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92f074: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92f078: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 92f07b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92f080(void) {
  LOAD_REGS();
L_92f080: /* 92f080: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92f084: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 92f087: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92f090(void) {
  LOAD_REGS();
L_92f090: /* 92f090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92f094: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f096: je 0x92f0a1 */
  if (zf) goto L_92f0a1;
L_92f098: /* 92f098: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 92f09c: jmp 0x92a770 */
  SPILL(); f_92a770(); return;
L_92f0a1: /* 92f0a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92f0b0(void) {
  LOAD_REGS();
L_92f0b0: /* 92f0b0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92f0b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f0b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92f0b5: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 92f0b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92f0ba: call 0x92acc0 */
  esp -= 4; W32(esp, 0x92f0bfu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 92f0bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92f0c0: mov esi, eax */
  esi = eax;
/* 92f0c2: call 0x92ad70 */
  esp -= 4; W32(esp, 0x92f0c7u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 92f0c7: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92f0ca: fabs  */
  ST0 = fabs(ST0);
/* 92f0cc: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92f0cf: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92f0d2: fabs  */
  ST0 = fabs(ST0);
/* 92f0d4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f0d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f0d8: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92f0db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f0dd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92f0df: fabs  */
  ST0 = fabs(ST0);
/* 92f0e1: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 92f0e5: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 92f0e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f0ea: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f0ed: fabs  */
  ST0 = fabs(ST0);
/* 92f0ef: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92f0f2: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f0f5: fabs  */
  ST0 = fabs(ST0);
/* 92f0f7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f0f9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f0fb: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92f0fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f100: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92f103: fabs  */
  ST0 = fabs(ST0);
/* 92f105: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 92f109: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 92f10c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f10e: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92f111: fabs  */
  ST0 = fabs(ST0);
/* 92f113: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92f116: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92f119: fabs  */
  ST0 = fabs(ST0);
/* 92f11b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f11d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f11f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92f122: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f124: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92f127: fabs  */
  ST0 = fabs(ST0);
/* 92f129: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 92f12d: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 92f130: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f132: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92f136: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92f138: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92f13b: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92f13e: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 92f141: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f143: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92f146: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 92f149: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f14b: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92f14e: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f151: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92f154: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92f157: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92f15a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f15c: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92f15f: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 92f162: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f164: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92f167: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 92f16b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92f16e: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 92f171: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92f174: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 92f177: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f179: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92f17c: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 92f17f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f181: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92f184: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 92f188: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f18a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92f18e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92f190: fsub st(3) */
  ST0 = ST0 - STI(3);
/* 92f192: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 92f195: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92f199: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92f19b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 92f19e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92f1a2: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 92f1a6: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 92f1a9: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 92f1ab: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 92f1ae: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92f1b2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 92f1b4: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 92f1b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92f1b9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92f1bb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92f1bf: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 92f1c3: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 92f1c6: je 0x92f362 */
  if (zf) goto L_92f362;
L_92f1cc: /* 92f1cc: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92f1cf: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 92f1d2: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92f1d5: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92f1d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f1da: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92f1dd: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92f1df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f1e1: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92f1e4: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92f1e7: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92f1ea: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f1ed: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92f1f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f1f2: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92f1f5: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 92f1f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f1fa: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92f1fd: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92f200: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 92f203: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 92f206: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92f209: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f20b: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 92f20e: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 92f211: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f213: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92f216: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92f21a: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92f21d: fabs  */
  ST0 = fabs(ST0);
/* 92f21f: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92f222: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92f225: fabs  */
  ST0 = fabs(ST0);
/* 92f227: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f229: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f22b: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92f22e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f230: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92f232: fabs  */
  ST0 = fabs(ST0);
/* 92f234: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 92f238: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 92f23b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f23d: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f240: fabs  */
  ST0 = fabs(ST0);
/* 92f242: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92f245: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f248: fabs  */
  ST0 = fabs(ST0);
/* 92f24a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f24c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f24e: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92f251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f253: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92f256: fabs  */
  ST0 = fabs(ST0);
/* 92f258: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 92f25c: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 92f25f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f261: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 92f265: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92f268: fabs  */
  ST0 = fabs(ST0);
/* 92f26a: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 92f26d: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92f270: fabs  */
  ST0 = fabs(ST0);
/* 92f272: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f274: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f276: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 92f279: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f27b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92f27e: fabs  */
  ST0 = fabs(ST0);
/* 92f280: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 92f284: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 92f287: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f289: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92f28d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92f28f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92f291: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 92f295: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92f297: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 92f29b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 92f29f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92f2a3: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 92f2a7: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92f2ab: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92f2ad: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 92f2af: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92f2b3: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 92f2b5: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 92f2b9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92f2bd: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 92f2c1: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 92f2c5: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92f2c8: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 92f2cc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f2ce: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f2d1: jp 0x92f2d8 */
  if (pf) goto L_92f2d8;
L_92f2d3: /* 92f2d3: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92f2d6: jmp 0x92f2dc */
  goto L_92f2dc;
L_92f2d8: /* 92f2d8: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
L_92f2dc: /* 92f2dc: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 92f2df: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 92f2e2: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 92f2e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f2e8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f2eb: jp 0x92f2f2 */
  if (pf) goto L_92f2f2;
L_92f2ed: /* 92f2ed: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 92f2f0: jmp 0x92f2f6 */
  goto L_92f2f6;
L_92f2f2: /* 92f2f2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_92f2f6: /* 92f2f6: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 92f2f9: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92f2fc: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 92f300: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f302: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f305: jp 0x92f30c */
  if (pf) goto L_92f30c;
L_92f307: /* 92f307: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 92f30a: jmp 0x92f310 */
  goto L_92f310;
L_92f30c: /* 92f30c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_92f310: /* 92f310: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 92f313: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 92f316: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 92f31a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f31c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92f31f: jne 0x92f326 */
  if (!zf) goto L_92f326;
L_92f321: /* 92f321: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 92f324: jmp 0x92f32a */
  goto L_92f32a;
L_92f326: /* 92f326: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
L_92f32a: /* 92f32a: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 92f32d: fcom dword ptr [edi + 0x18] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x18u)));
/* 92f330: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f332: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f335: jp 0x92f33c */
  if (pf) goto L_92f33c;
L_92f337: /* 92f337: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92f339: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
L_92f33c: /* 92f33c: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 92f33f: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 92f342: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 92f346: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f348: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92f34b: jne 0x92f35b */
  if (!zf) goto L_92f35b;
L_92f34d: /* 92f34d: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 92f350: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 92f353: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92f354: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92f355: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92f358: ret 0xc */
  esp += 16; SPILL(); return;
L_92f35b: /* 92f35b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 92f35f: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
L_92f362: /* 92f362: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92f363: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92f364: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92f367: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92f370(void) {
  LOAD_REGS();
L_92f370: /* 92f370: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92f374: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92f377: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92f37b: fabs  */
  ST0 = fabs(ST0);
/* 92f37d: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 92f380: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92f383: fabs  */
  ST0 = fabs(ST0);
/* 92f385: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f387: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f389: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 92f38c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f38e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92f390: fabs  */
  ST0 = fabs(ST0);
/* 92f392: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 92f396: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 92f399: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f39b: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f39e: fabs  */
  ST0 = fabs(ST0);
/* 92f3a0: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 92f3a3: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f3a6: fabs  */
  ST0 = fabs(ST0);
/* 92f3a8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f3aa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f3ac: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 92f3af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f3b1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92f3b4: fabs  */
  ST0 = fabs(ST0);
/* 92f3b6: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 92f3ba: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 92f3bd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 92f3c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f3c3: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92f3c6: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92f3c8: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92f3ca: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f3cc: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92f3cf: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 92f3d2: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92f3d5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 92f3d7: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 92f3da: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92f3dd: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 92f3e0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92f3f0(void) {
  LOAD_REGS();
L_92f3f0: /* 92f3f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92f3f4: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 92f3f7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 92f3fb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 92f3fd: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 92f400: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92f403: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 92f406: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 92f409: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92f40c: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 92f40f: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f412: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 92f416: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92f418: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92f41a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92f41c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 92f41e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f420: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92f422: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92f424: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f426: fsqrt  */
  ST0 = sqrt(ST0);
/* 92f428: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 92f42a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92f42c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92f42e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92f430: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92f440(void) {
  LOAD_REGS();
L_92f440: /* 92f440: mov eax, dword ptr [0xaf3ee4] */
  eax = R32((uint32_t)(0xaf3ee4u));
/* 92f445: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f447: je 0x92f458 */
  if (zf) goto L_92f458;
L_92f449: /* 92f449: push 0xaf3f00 */
  { uint32_t v = 0xaf3f00u; esp -= 4; W32(esp, v); }
/* 92f44e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92f450: call 0x971e20 */
  esp -= 4; W32(esp, 0x92f455u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 92f455: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92f458: /* 92f458: mov dword ptr [0xaf3ee4], 0 */
  W32((uint32_t)(0xaf3ee4u), 0x0u);
/* 92f462: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92f470(void) {
  LOAD_REGS();
L_92f470: /* 92f470: mov eax, dword ptr [0xaf3ee8] */
  eax = R32((uint32_t)(0xaf3ee8u));
/* 92f475: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f477: je 0x92f488 */
  if (zf) goto L_92f488;
L_92f479: /* 92f479: push 0xaf3f48 */
  { uint32_t v = 0xaf3f48u; esp -= 4; W32(esp, v); }
/* 92f47e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92f480: call 0x971e20 */
  esp -= 4; W32(esp, 0x92f485u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 92f485: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92f488: /* 92f488: mov dword ptr [0xaf3ee8], 0 */
  W32((uint32_t)(0xaf3ee8u), 0x0u);
/* 92f492: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 92f495: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_92f4a0(void) {
  LOAD_REGS();
L_92f4a0: /* 92f4a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 92f4a4: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 92f4a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92f4b0(void) {
  LOAD_REGS();
L_92f4b0: /* 92f4b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 92f4b4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 92f4b8: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 92f4bb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_92f4c0(void) {
  LOAD_REGS();
L_92f4c0: /* 92f4c0: mov eax, dword ptr [0xaf3eec] */
  eax = R32((uint32_t)(0xaf3eecu));
/* 92f4c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f4c7: je 0x92f4d8 */
  if (zf) goto L_92f4d8;
L_92f4c9: /* 92f4c9: push 0xaf3f90 */
  { uint32_t v = 0xaf3f90u; esp -= 4; W32(esp, v); }
/* 92f4ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 92f4d0: call 0x971e20 */
  esp -= 4; W32(esp, 0x92f4d5u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 92f4d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_92f4d8: /* 92f4d8: mov dword ptr [0xaf3eec], 0 */
  W32((uint32_t)(0xaf3eecu), 0x0u);
/* 92f4e2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_92f4f0(void) {
  LOAD_REGS();
L_92f4f0: /* 92f4f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f4f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92f4f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f4f6: call 0x93f890 */
  esp -= 4; W32(esp, 0x92f4fbu); SPILL(); f_93f890(); if (g_unwind) return; RELOAD();
/* 92f4fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f4fc: call 0x93f850 */
  esp -= 4; W32(esp, 0x92f501u); SPILL(); f_93f850(); if (g_unwind) return; RELOAD();
/* 92f501: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f502: call 0x93f830 */
  esp -= 4; W32(esp, 0x92f507u); SPILL(); f_93f830(); if (g_unwind) return; RELOAD();
/* 92f507: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f508: call 0x93f870 */
  esp -= 4; W32(esp, 0x92f50du); SPILL(); f_93f870(); if (g_unwind) return; RELOAD();
/* 92f50d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f50e: call 0x93eee0 */
  esp -= 4; W32(esp, 0x92f513u); SPILL(); f_93eee0(); if (g_unwind) return; RELOAD();
/* 92f513: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f514: call 0x93cf60 */
  esp -= 4; W32(esp, 0x92f519u); SPILL(); f_93cf60(); if (g_unwind) return; RELOAD();
/* 92f519: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f51a: call 0x93c3b0 */
  esp -= 4; W32(esp, 0x92f51fu); SPILL(); f_93c3b0(); if (g_unwind) return; RELOAD();
/* 92f51f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f520: call 0x93bdc0 */
  esp -= 4; W32(esp, 0x92f525u); SPILL(); f_93bdc0(); if (g_unwind) return; RELOAD();
/* 92f525: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f526: call 0x937d80 */
  esp -= 4; W32(esp, 0x92f52bu); SPILL(); f_937d80(); if (g_unwind) return; RELOAD();
/* 92f52b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f52c: call 0x9377e0 */
  esp -= 4; W32(esp, 0x92f531u); SPILL(); f_9377e0(); if (g_unwind) return; RELOAD();
/* 92f531: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f532: call 0x936e30 */
  esp -= 4; W32(esp, 0x92f537u); SPILL(); f_936e30(); if (g_unwind) return; RELOAD();
/* 92f537: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f538: call 0x935550 */
  esp -= 4; W32(esp, 0x92f53du); SPILL(); f_935550(); if (g_unwind) return; RELOAD();
/* 92f53d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f53e: call 0x92fae0 */
  esp -= 4; W32(esp, 0x92f543u); SPILL(); f_92fae0(); if (g_unwind) return; RELOAD();
/* 92f543: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f544: call 0x92ff10 */
  esp -= 4; W32(esp, 0x92f549u); SPILL(); f_92ff10(); if (g_unwind) return; RELOAD();
/* 92f549: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f54a: call 0x9302f0 */
  esp -= 4; W32(esp, 0x92f54fu); SPILL(); f_9302f0(); if (g_unwind) return; RELOAD();
/* 92f54f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f550: call 0x930e90 */
  esp -= 4; W32(esp, 0x92f555u); SPILL(); f_930e90(); if (g_unwind) return; RELOAD();
/* 92f555: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f556: call 0x932030 */
  esp -= 4; W32(esp, 0x92f55bu); SPILL(); f_932030(); if (g_unwind) return; RELOAD();
/* 92f55b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f55c: call 0x933120 */
  esp -= 4; W32(esp, 0x92f561u); SPILL(); f_933120(); if (g_unwind) return; RELOAD();
/* 92f561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f562: call 0x9338a0 */
  esp -= 4; W32(esp, 0x92f567u); SPILL(); f_9338a0(); if (g_unwind) return; RELOAD();
/* 92f567: mov eax, 1 */
  eax = 0x1u;
/* 92f56c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92f56d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92f570(void) {
  LOAD_REGS();
L_92f570: /* 92f570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f571: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 92f575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f576: call 0x93f8c0 */
  esp -= 4; W32(esp, 0x92f57bu); SPILL(); f_93f8c0(); if (g_unwind) return; RELOAD();
/* 92f57b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f57c: call 0x92e580 */
  esp -= 4; W32(esp, 0x92f581u); SPILL(); f_92e580(); if (g_unwind) return; RELOAD();
/* 92f581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f582: call 0x92eee0 */
  esp -= 4; W32(esp, 0x92f587u); SPILL(); f_92eee0(); if (g_unwind) return; RELOAD();
/* 92f587: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f588: call 0x92d920 */
  esp -= 4; W32(esp, 0x92f58du); SPILL(); f_92d920(); if (g_unwind) return; RELOAD();
/* 92f58d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92f58e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_92f5a0(void) {
  LOAD_REGS();
L_92f5a0: /* 92f5a0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 92f5a4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92f5a8: xor eax, eax */
  eax = 0;
/* 92f5aa: mov ah, byte ptr [esp + 0x14] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu) << 8);
/* 92f5ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92f5b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f5b2: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 92f5b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92f5b7: mov dword ptr [ecx + 0x10], 1 */
  W32((uint32_t)(ecx + 0x10u), 0x1u);
/* 92f5be: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 92f5c0: mov edi, eax */
  edi = eax;
/* 92f5c2: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 92f5c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f5c8: je 0x92f612 */
  if (zf) goto L_92f612;
L_92f5ca: /* 92f5ca: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92f5cd: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 92f5d0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92f5d3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 92f5d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f5d8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92f5da: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92f5dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f5de: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f5e1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 92f5e4: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f5e7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 92f5ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f5ec: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92f5ef: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92f5f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f5f3: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 92f5f7: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92f5fa: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 92f5fd: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92f600: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 92f603: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f605: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92f608: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92f60a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f60c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92f610: jmp 0x92f622 */
  goto L_92f622;
L_92f612: /* 92f612: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 92f615: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 92f617: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 92f61a: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 92f61e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_92f622: /* 92f622: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92f624: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 92f627: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 92f62a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 92f62e: fadd dword ptr [ecx + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x18u)));
/* 92f631: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 92f634: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92f638: fadd dword ptr [ecx + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x1cu)));
/* 92f63b: fstp dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0); FPOP();
/* 92f63e: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 92f641: cmp edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92f644: jge 0x92f7a8 */
  if ((sf == of)) goto L_92f7a8;
L_92f64a: /* 92f64a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f64c: je 0x92f6ac */
  if (zf) goto L_92f6ac;
L_92f64e: /* 92f64e: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 92f651: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 92f654: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 92f657: lea esi, [esi + edx*8] */
  esi = (uint32_t)(esi + edx*8);
/* 92f65a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 92f65e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 92f661: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 92f664: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 92f667: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f669: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92f66b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92f66d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f66f: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 92f672: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 92f674: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 92f677: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 92f67a: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f67d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 92f680: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f682: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92f685: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92f687: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f689: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 92f68c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 92f68f: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 92f692: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 92f695: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 92f698: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 92f69b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f69d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92f6a0: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92f6a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f6a4: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 92f6a7: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 92f6aa: jmp 0x92f6c9 */
  goto L_92f6c9;
L_92f6ac: /* 92f6ac: lea eax, [edx + edx*4] */
  eax = (uint32_t)(edx + edx*4);
/* 92f6af: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92f6b2: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 92f6b5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 92f6b9: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 92f6bb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 92f6bd: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 92f6c0: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 92f6c3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 92f6c6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_92f6c9: /* 92f6c9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f6cc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92f6cf: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92f6d2: lea eax, [edx + eax*8 + 0xc] */
  eax = (uint32_t)(edx + eax*8 + 0xcu);
/* 92f6d6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 92f6da: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92f6dc: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92f6e0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 92f6e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92f6e7: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 92f6ea: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f6ed: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92f6f0: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92f6f3: fstp dword ptr [edx + eax*8 + 0x18] */
  WF32((uint32_t)(edx + eax*8 + 0x18u), ST0); FPOP();
/* 92f6f7: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f6fa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92f6fd: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92f701: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92f707: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92f70a: mov word ptr [edx + eax*8 + 0x1c], di */
  W16((uint32_t)(edx + eax*8 + 0x1cu), (edi & 0xffffu));
/* 92f70f: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f712: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92f713: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 92f716: mov esi, eax */
  esi = eax;
/* 92f718: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f71a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f71d: jnp 0x92f7aa */
  if (!pf) goto L_92f7aa;
L_92f723: /* 92f723: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 92f727: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92f729: je 0x92f7aa */
  if (zf) goto L_92f7aa;
L_92f72b: /* 92f72b: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92f72e: jge 0x92f7aa */
  if ((sf == of)) goto L_92f7aa;
L_92f730: /* 92f730: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92f734: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 92f737: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92f739: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 92f73c: lea eax, [esi + eax*8] */
  eax = (uint32_t)(esi + eax*8);
/* 92f73f: fadd dword ptr [eax - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd8u)));
/* 92f742: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92f744: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92f748: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 92f74b: fadd dword ptr [eax - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffdcu)));
/* 92f74e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92f751: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92f755: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 92f758: fadd dword ptr [eax - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe0u)));
/* 92f75b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 92f75e: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f761: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92f765: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 92f768: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 92f76b: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 92f76e: mov edx, dword ptr [eax - 0x1c] */
  edx = R32((uint32_t)(eax + 0xffffffe4u));
/* 92f771: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 92f774: mov edx, dword ptr [eax - 0x18] */
  edx = R32((uint32_t)(eax + 0xffffffe8u));
/* 92f777: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 92f77a: mov edx, dword ptr [eax - 0x14] */
  edx = R32((uint32_t)(eax + 0xffffffecu));
/* 92f77d: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 92f780: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f783: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92f786: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92f789: fstp dword ptr [edx + eax*8 + 0x18] */
  WF32((uint32_t)(edx + eax*8 + 0x18u), ST0); FPOP();
/* 92f78d: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f790: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 92f793: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 92f796: mov word ptr [edx + eax*8 + 0x1c], di */
  W16((uint32_t)(edx + eax*8 + 0x1cu), (edi & 0xffffu));
/* 92f79b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 92f79e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92f79f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92f7a0: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 92f7a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92f7a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92f7a7: ret  */
  esp += 4; SPILL(); return;
L_92f7a8: /* 92f7a8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_92f7aa: /* 92f7aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92f7ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92f7ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92f7af: ret  */
  esp += 4; SPILL(); return;
}

void f_92f7b0(void) {
  LOAD_REGS();
L_92f7b0: /* 92f7b0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92f7b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92f7b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 92f7b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f7b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92f7b7: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 92f7bb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 92f7bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92f7be: call 0x928730 */
  esp -= 4; W32(esp, 0x92f7c3u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92f7c3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 92f7c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92f7c7: mov ebp, eax */
  ebp = eax;
/* 92f7c9: call 0x928730 */
  esp -= 4; W32(esp, 0x92f7ceu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 92f7ce: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 92f7d0: mov esi, eax */
  esi = eax;
/* 92f7d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92f7d3: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 92f7d7: call 0x928610 */
  esp -= 4; W32(esp, 0x92f7dcu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 92f7dc: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 92f7e0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 92f7e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92f7e4: call 0x928610 */
  esp -= 4; W32(esp, 0x92f7e9u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 92f7e9: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 92f7ed: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 92f7ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92f7f0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 92f7f4: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92f7f9u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92f7f9: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 92f7fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92f7fd: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92f801: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92f806u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92f806: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 92f80a: xor ecx, ecx */
  ecx = 0;
/* 92f80c: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 92f80f: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 92f812: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 92f815: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 92f818: lea ebx, [ebp + 0x20] */
  ebx = (uint32_t)(ebp + 0x20u);
/* 92f81b: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 92f81e: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92f821: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92f824: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 92f828: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f82a: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 92f82c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92f82e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f830: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 92f834: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92f838: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 92f83e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f840: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f843: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 92f847: jp 0x92f877 */
  if (pf) goto L_92f877;
L_92f849: /* 92f849: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 92f84c: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 92f850: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92f854: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 92f856: fadd dword ptr [ebp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x30u)));
/* 92f859: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92f85d: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 92f860: fadd dword ptr [ebp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x34u)));
/* 92f863: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92f867: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92f86b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 92f86e: fadd dword ptr [ebp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x38u)));
/* 92f871: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92f875: jmp 0x92f8bf */
  goto L_92f8bf;
L_92f877: /* 92f877: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 92f87a: fchs  */
  ST0 = -ST0;
/* 92f87c: fst dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0);
/* 92f880: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 92f882: fadd dword ptr [ebp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x30u)));
/* 92f885: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92f889: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 92f88c: fadd dword ptr [ebp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x34u)));
/* 92f88f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 92f893: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92f897: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 92f89a: fadd dword ptr [ebp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x38u)));
/* 92f89d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92f8a1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92f8a5: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 92f8ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f8ad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f8b0: jp 0x92f8bf */
  if (pf) goto L_92f8bf;
L_92f8b2: /* 92f8b2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92f8b6: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 92f8b9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92f8bb: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_92f8bf: /* 92f8bf: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 92f8c3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92f8c5: fsub dword ptr [eax + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x30u)));
/* 92f8c8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92f8cc: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92f8d0: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* 92f8d3: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92f8d7: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* 92f8da: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92f8dd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f8df: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92f8e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f8e4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92f8e6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92f8e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f8ea: fsub dword ptr [edx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x10u)));
/* 92f8ed: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 92f8f1: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 92f8f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f8f7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f8fa: jp 0x92fac4 */
  if (pf) goto L_92fac4;
L_92f900: /* 92f900: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 92f903: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 92f907: fchs  */
  ST0 = -ST0;
/* 92f909: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92f90a: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 92f90e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92f90f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92f910: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92f911: fst dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0);
/* 92f915: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 92f917: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92f919: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 92f91b: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 92f91f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 92f921: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 92f925: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92f927: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 92f92b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92f92e: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 92f932: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 92f936: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 92f93a: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92f93d: mov dword ptr [edi + 0x14], ecx */
  W32((uint32_t)(edi + 0x14u), ecx);
/* 92f940: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* 92f943: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 92f946: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92f94a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92f94b: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 92f94f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92f950: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92f951: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 92f955: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x92f95au); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 92f95a: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92f95e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92f961: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92f967: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f969: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f96c: jp 0x92fac6 */
  if (pf) goto L_92fac6;
L_92f972: /* 92f972: fld dword ptr [ebp + 0x38] */
  { double v = F32((uint32_t)(ebp + 0x38u)); FPUSH(v); }
/* 92f975: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 92f979: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92f97c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92f980: fld dword ptr [ebp + 0x34] */
  { double v = F32((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* 92f983: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92f986: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f988: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 92f98b: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92f98d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f98f: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 92f992: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92f995: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 92f998: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92f99b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f99d: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 92f9a0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92f9a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92f9a4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92f9a6: fsubr dword ptr [ecx + 0x10] */
  ST0 = (F32((uint32_t)(ecx + 0x10u))) - ST0;
/* 92f9a9: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 92f9ad: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92f9b1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92f9b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f9b9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92f9bc: jne 0x92f9c9 */
  if (!zf) goto L_92f9c9;
L_92f9be: /* 92f9be: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 92f9c1: fchs  */
  ST0 = -ST0;
/* 92f9c3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92f9c7: jmp 0x92f9d0 */
  goto L_92f9d0;
L_92f9c9: /* 92f9c9: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 92f9cc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_92f9d0: /* 92f9d0: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92f9d4: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 92f9da: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92f9de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f9e0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92f9e3: jne 0x92f9ea */
  if (!zf) goto L_92f9ea;
L_92f9e5: /* 92f9e5: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92f9e8: jmp 0x92fa00 */
  goto L_92fa00;
L_92f9ea: /* 92f9ea: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 92f9f0: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92f9f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92f9f6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92f9f9: jp 0x92fa3e */
  if (pf) goto L_92fa3e;
L_92f9fb: /* 92f9fb: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 92f9fe: fchs  */
  ST0 = -ST0;
L_92fa00: /* 92fa00: fcomp dword ptr [esp + 0x44] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x44u)));
  FPOP();
/* 92fa04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fa06: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92fa09: jp 0x92fa10 */
  if (pf) goto L_92fa10;
L_92fa0b: /* 92fa0b: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 92fa0e: jmp 0x92fa3e */
  goto L_92fa3e;
L_92fa10: /* 92fa10: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92fa14: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 92fa18: fsubr dword ptr [esp + 0x44] */
  ST0 = (F32((uint32_t)(esp + 0x44u))) - ST0;
/* 92fa1c: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92fa20: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 92fa23: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 92fa27: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 92fa29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fa2b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92fa2e: jne 0x92fa36 */
  if (!zf) goto L_92fa36;
L_92fa30: /* 92fa30: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 92fa34: jmp 0x92fa3e */
  goto L_92fa3e;
L_92fa36: /* 92fa36: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92fa3a: fdiv dword ptr [esp + 0x40] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x40u)));
L_92fa3e: /* 92fa3e: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 92fa42: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92fa44: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 92fa47: jnp 0x92fac4 */
  if (!pf) goto L_92fac4;
L_92fa49: /* 92fa49: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 92fa4c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92fa50: fchs  */
  ST0 = -ST0;
/* 92fa52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92fa53: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fa55: xor eax, eax */
  eax = 0;
/* 92fa57: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 92fa59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fa5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fa5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92fa5c: fadd dword ptr [ebp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x30u)));
/* 92fa5f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92fa61: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 92fa63: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 92fa66: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 92fa68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92fa69: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 92fa6d: fadd dword ptr [ebp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x34u)));
/* 92fa70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92fa71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92fa72: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 92fa76: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 92fa78: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 92fa7b: fadd dword ptr [ebp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x38u)));
/* 92fa7e: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 92fa82: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92fa84: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 92fa86: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 92fa88: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 92fa8c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92fa8e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92fa90: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 92fa93: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 92fa97: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 92fa9b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 92fa9e: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 92faa1: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 92faa4: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 92faa7: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 92faab: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 92faaf: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x92fab4u); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 92fab4: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 92fab7: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92faba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92fabb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92fabc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92fabd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92fabe: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92fac1: ret 8 */
  esp += 12; SPILL(); return;
L_92fac4: /* 92fac4: fstp st(0) */
  STI(0) = ST0; FPOP();
L_92fac6: /* 92fac6: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 92fac9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92faca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92facb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92facc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92facd: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92fad0: ret 8 */
  esp += 12; SPILL(); return;
}
