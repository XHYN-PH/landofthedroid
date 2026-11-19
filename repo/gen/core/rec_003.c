#include "recomp.h"
#include "rec_mod.h"

void f_4f8470(void) {
  LOAD_REGS();
L_4f8470: /* 4f8470: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f8471: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f8474: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f8477: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f847b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f847d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f847f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8482: jne 0x4f848a */
  if (!zf) goto L_4f848a;
L_4f8484: /* 4f8484: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8486: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f848a: /* 4f848a: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f848d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f8490: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f8494: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8496: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8498: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f849b: jne 0x4f84a3 */
  if (!zf) goto L_4f84a3;
L_4f849d: /* 4f849d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f849f: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f84a3: /* 4f84a3: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f84a6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f84a8: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f84ac: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f84ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f84b0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f84b3: jne 0x4f84bb */
  if (!zf) goto L_4f84bb;
L_4f84b5: /* 4f84b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f84b7: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f84bb: /* 4f84bb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f84bf: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f84c1: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f84c4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f84c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f84c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f84f0(void) {
  LOAD_REGS();
L_4f84f0: /* 4f84f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f84f1: mov esi, ecx */
  esi = ecx;
/* 4f84f3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f84f5: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f84fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f84fd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8500: je 0x4f8504 */
  if (zf) goto L_4f8504;
L_4f8502: /* 4f8502: fchs  */
  ST0 = -ST0;
L_4f8504: /* 4f8504: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f850a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f850c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f850f: jp 0x4f854f */
  if (pf) goto L_4f854f;
L_4f8511: /* 4f8511: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8514: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f851a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f851c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f851f: je 0x4f8523 */
  if (zf) goto L_4f8523;
L_4f8521: /* 4f8521: fchs  */
  ST0 = -ST0;
L_4f8523: /* 4f8523: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f8529: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f852b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f852e: jp 0x4f854f */
  if (pf) goto L_4f854f;
L_4f8530: /* 4f8530: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 4f8533: call 0x4e37e2 */
  esp -= 4; W32(esp, 0x4f8538u); SPILL(); f_4e37e2(); if (g_unwind) return; RELOAD();
/* 4f8538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f853a: je 0x4f854f */
  if (zf) goto L_4f854f;
L_4f853c: /* 4f853c: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 4f853f: call 0x4e37e2 */
  esp -= 4; W32(esp, 0x4f8544u); SPILL(); f_4e37e2(); if (g_unwind) return; RELOAD();
/* 4f8544: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8546: je 0x4f854f */
  if (zf) goto L_4f854f;
L_4f8548: /* 4f8548: mov eax, 1 */
  eax = 0x1u;
/* 4f854d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f854e: ret  */
  esp += 4; SPILL(); return;
L_4f854f: /* 4f854f: xor eax, eax */
  eax = 0;
/* 4f8551: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8552: ret  */
  esp += 4; SPILL(); return;
}

void f_4f8580(void) {
  LOAD_REGS();
L_4f8580: /* 4f8580: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8583: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f8584: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f8585: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8587: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 4f858b: mov esi, ecx */
  esi = ecx;
/* 4f858d: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 4f8590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8591: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 4f8595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f8596: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 4f8599: call 0x4e1b0e */
  esp -= 4; W32(esp, 0x4f859eu); SPILL(); f_4e1b0e(); if (g_unwind) return; RELOAD();
/* 4f859e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 4f85a0: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 4f85a3: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 4f85a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f85a7: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 4f85ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f85ac: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 4f85af: call 0x4e1b0e */
  esp -= 4; W32(esp, 0x4f85b4u); SPILL(); f_4e1b0e(); if (g_unwind) return; RELOAD();
/* 4f85b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4f85b6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f85b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f85ba: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 4f85be: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 4f85c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f85c3: mov ecx, esi */
  ecx = esi;
/* 4f85c5: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 4f85c9: call 0x4e1b0e */
  esp -= 4; W32(esp, 0x4f85ceu); SPILL(); f_4e1b0e(); if (g_unwind) return; RELOAD();
/* 4f85ce: mov ecx, eax */
  ecx = eax;
/* 4f85d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f85d2: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4f85d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f85d7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f85d9: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4f85dc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f85e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f85e1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f85e4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f85e8: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 4f85eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f85ec: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 4f85ef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4f85f2: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4f85f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f85f6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f85f9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8620(void) {
  LOAD_REGS();
L_4f8620: /* 4f8620: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8623: mov eax, ecx */
  eax = ecx;
/* 4f8625: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8626: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8627: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f862a: mov edi, ecx */
  edi = ecx;
/* 4f862c: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4f8634: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f8638: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 4f863a: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 4f8642: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f8646: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 4f8649: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4f8651: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4f8655: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 4f8658: mov edi, eax */
  edi = eax;
/* 4f865a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 4f865c: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 4f865f: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 4f8662: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8663: mov byte ptr [eax + 0x18], 0 */
  W8((uint32_t)(eax + 0x18u), 0x0u);
/* 4f8667: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8668: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f866b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f8690(void) {
  LOAD_REGS();
L_4f8690: /* 4f8690: mov al, byte ptr [ecx + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x18u))) & 0xffu);
/* 4f8693: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8695: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f8699: je 0x4f8748 */
  if (zf) goto L_4f8748;
L_4f869f: /* 4f869f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4f86a1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f86a3: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f86a7: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f86a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f86ab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f86ae: jp 0x4f86b6 */
  if (pf) goto L_4f86b6;
L_4f86b0: /* 4f86b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f86b2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_4f86b6: /* 4f86b6: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f86b8: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4f86bb: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f86be: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f86c2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f86c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f86c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f86c9: jp 0x4f86d1 */
  if (pf) goto L_4f86d1;
L_4f86cb: /* 4f86cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f86cd: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_4f86d1: /* 4f86d1: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f86d4: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4f86d7: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f86da: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f86de: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f86e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f86e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f86e5: jp 0x4f86ed */
  if (pf) goto L_4f86ed;
L_4f86e7: /* 4f86e7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f86e9: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_4f86ed: /* 4f86ed: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4f86f0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4f86f2: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f86f5: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f86f9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f86fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f86fd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8700: jne 0x4f8708 */
  if (!zf) goto L_4f8708;
L_4f8702: /* 4f8702: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8704: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_4f8708: /* 4f8708: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4f870b: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4f870e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f8711: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f8715: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8717: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8719: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f871c: jne 0x4f8724 */
  if (!zf) goto L_4f8724;
L_4f871e: /* 4f871e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8720: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_4f8724: /* 4f8724: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 4f8727: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4f872a: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f872d: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f8731: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8733: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8735: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8738: jne 0x4f8740 */
  if (!zf) goto L_4f8740;
L_4f873a: /* 4f873a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f873c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_4f8740: /* 4f8740: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 4f8743: mov eax, ecx */
  eax = ecx;
/* 4f8745: ret 4 */
  esp += 8; SPILL(); return;
L_4f8748: /* 4f8748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8749: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 4f874c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f874d: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4f874f: mov esi, eax */
  esi = eax;
/* 4f8751: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4f8753: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4f8756: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4f8759: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4f875c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4f875f: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4f8761: mov edx, ecx */
  edx = ecx;
/* 4f8763: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 4f8765: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 4f8768: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 4f876b: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 4f876e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f876f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 4f8772: mov byte ptr [ecx + 0x18], 1 */
  W8((uint32_t)(ecx + 0x18u), 0x1u);
/* 4f8776: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8777: mov eax, ecx */
  eax = ecx;
/* 4f8779: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f87c0(void) {
  LOAD_REGS();
L_4f87c0: /* 4f87c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f87c4: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f87c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f87c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f87c9: mov esi, ecx */
  esi = ecx;
/* 4f87cb: mov ecx, 7 */
  ecx = 0x7u;
/* 4f87d0: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f87d4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f87d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f87d7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f87db: call 0x4e1b09 */
  esp -= 4; W32(esp, 0x4f87e0u); SPILL(); f_4e1b09(); if (g_unwind) return; RELOAD();
/* 4f87e0: mov esi, eax */
  esi = eax;
/* 4f87e2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 4f87e6: mov ecx, 7 */
  ecx = 0x7u;
/* 4f87eb: mov edi, eax */
  edi = eax;
/* 4f87ed: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f87ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f87f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f87f1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f87f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8810(void) {
  LOAD_REGS();
L_4f8810: /* 4f8810: mov edx, ecx */
  edx = ecx;
/* 4f8812: mov al, byte ptr [edx + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x18u))) & 0xffu);
/* 4f8815: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8817: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8818: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4f881c: je 0x4f88d8 */
  if (zf) goto L_4f88d8;
L_4f8822: /* 4f8822: mov al, byte ptr [esi + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x18u))) & 0xffu);
/* 4f8825: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8827: je 0x4f88d8 */
  if (zf) goto L_4f88d8;
L_4f882d: /* 4f882d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f882f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4f8831: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f8835: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8837: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8839: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f883c: jp 0x4f8844 */
  if (pf) goto L_4f8844;
L_4f883e: /* 4f883e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8840: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f8844: /* 4f8844: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 4f8846: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8849: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4f884c: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f8850: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8852: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8854: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f8857: jp 0x4f885f */
  if (pf) goto L_4f885f;
L_4f8859: /* 4f8859: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f885b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f885f: /* 4f885f: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 4f8862: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f8865: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4f8868: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f886c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f886e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8870: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f8873: jp 0x4f887b */
  if (pf) goto L_4f887b;
L_4f8875: /* 4f8875: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8877: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f887b: /* 4f887b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 4f887e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f8881: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 4f8884: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f8888: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f888a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f888c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f888f: jne 0x4f8897 */
  if (!zf) goto L_4f8897;
L_4f8891: /* 4f8891: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8893: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f8897: /* 4f8897: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 4f889a: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 4f889d: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 4f88a0: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f88a4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f88a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f88a8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f88ab: jne 0x4f88b3 */
  if (!zf) goto L_4f88b3;
L_4f88ad: /* 4f88ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f88af: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f88b3: /* 4f88b3: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 4f88b6: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4f88b9: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 4f88bc: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f88c0: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f88c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f88c4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f88c7: jne 0x4f88cf */
  if (!zf) goto L_4f88cf;
L_4f88c9: /* 4f88c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f88cb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f88cf: /* 4f88cf: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* 4f88d2: mov eax, edx */
  eax = edx;
/* 4f88d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f88d5: ret 4 */
  esp += 8; SPILL(); return;
L_4f88d8: /* 4f88d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f88d9: mov ecx, 7 */
  ecx = 0x7u;
/* 4f88de: mov edi, edx */
  edi = edx;
/* 4f88e0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f88e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f88e3: mov eax, edx */
  eax = edx;
/* 4f88e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f88e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f8930(void) {
  LOAD_REGS();
L_4f8930: /* 4f8930: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f8934: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8938: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8939: mov esi, ecx */
  esi = ecx;
/* 4f893b: mov ecx, 7 */
  ecx = 0x7u;
/* 4f8940: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 4f8944: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f8946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8947: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f894b: call 0x4e2ed2 */
  esp -= 4; W32(esp, 0x4f8950u); SPILL(); f_4e2ed2(); if (g_unwind) return; RELOAD();
/* 4f8950: mov esi, eax */
  esi = eax;
/* 4f8952: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 4f8956: mov ecx, 7 */
  ecx = 0x7u;
/* 4f895b: mov edi, eax */
  edi = eax;
/* 4f895d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f895f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8960: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8961: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8964: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8980(void) {
  LOAD_REGS();
L_4f8980: /* 4f8980: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8983: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f8984: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f8985: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4f898d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f8991: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f8999: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f899d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f899e: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 4f89a6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 4f89aa: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 4f89ae: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 4f89b2: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 4f89b6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 4f89ba: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 4f89be: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 4f89c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f89c3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 4f89c7: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 4f89cb: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 4f89cf: mov byte ptr [esp + 0x5c], 0 */
  W8((uint32_t)(esp + 0x5cu), 0x0u);
/* 4f89d4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4f89d8: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 4f89dc: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f89e4: mov ebp, 4 */
  ebp = 0x4u;
/* 4f89e9: xor ebx, ebx */
  ebx = 0;
/* 4f89eb: jmp 0x4f8a10 */
  goto L_4f8a10;
L_4f89ed: /* 4f89ed: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f89f1: mov ebp, 4 */
  ebp = 0x4u;
/* 4f89f6: xor ebx, ebx */
  ebx = 0;
/* 4f89f8: jmp 0x4f8a10 */
  goto L_4f8a10;
L_4f89fa: /* 4f89fa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f89fe: xor ebx, ebx */
  ebx = 0;
/* 4f8a00: jmp 0x4f8a10 */
  goto L_4f8a10;
L_4f8a02: /* 4f8a02: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f8a06: jmp 0x4f8a10 */
  goto L_4f8a10;
L_4f8a10: /* 4f8a10: fld dword ptr [ebx + ecx + 8] */
  { double v = F32((uint32_t)(ebx + ecx + 0x8u)); FPUSH(v); }
/* 4f8a14: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f8a18: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 4f8a1b: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 4f8a1e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f8a22: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f8a26: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f8a2a: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 4f8a2e: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 4f8a32: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f8a36: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f8a38: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8a3b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f8a3e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a40: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 4f8a42: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a44: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 4f8a47: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a49: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 4f8a4c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a4e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f8a50: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f8a53: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8a55: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f8a58: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a5a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f8a5d: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 4f8a5f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f8a61: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f8a64: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8a66: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f8a69: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a6b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f8a6e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a70: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 4f8a72: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 4f8a74: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 4f8a76: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f8a7a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f8a7d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8a7f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f8a82: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a84: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f8a87: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a89: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8a8b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8a8d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f8a8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a91: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f8a93: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f8a96: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f8a99: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 4f8a9d: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 4f8aa1: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4f8aa5: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 4f8aa9: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 4f8aad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f8aae: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 4f8ab2: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 4f8ab6: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 4f8aba: call 0x4e1b09 */
  esp -= 4; W32(esp, 0x4f8abfu); SPILL(); f_4e1b09(); if (g_unwind) return; RELOAD();
/* 4f8abf: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4f8ac2: cmp ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8ac5: jl 0x4f8a02 */
  if ((sf != of)) goto L_4f8a02;
L_4f8acb: /* 4f8acb: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4f8ace: cmp ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8ad1: jl 0x4f89fa */
  if ((sf != of)) goto L_4f89fa;
L_4f8ad7: /* 4f8ad7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f8adb: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f8ade: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8ae1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f8ae5: jl 0x4f89ed */
  if ((sf != of)) goto L_4f89ed;
L_4f8aeb: /* 4f8aeb: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 4f8aef: mov ecx, 7 */
  ecx = 0x7u;
/* 4f8af4: lea esi, [esp + 0x44] */
  esi = (uint32_t)(esp + 0x44u);
/* 4f8af8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f8afa: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 4f8afe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8aff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8b00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f8b01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f8b02: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8b05: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8a08(void) {
  LOAD_REGS();
  goto L_4f8a08;
L_4f89ed: /* 4f89ed: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f89f1: mov ebp, 4 */
  ebp = 0x4u;
/* 4f89f6: xor ebx, ebx */
  ebx = 0;
/* 4f89f8: jmp 0x4f8a10 */
  goto L_4f8a10;
L_4f89fa: /* 4f89fa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f89fe: xor ebx, ebx */
  ebx = 0;
/* 4f8a00: jmp 0x4f8a10 */
  goto L_4f8a10;
L_4f8a02: /* 4f8a02: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f8a06: jmp 0x4f8a10 */
  goto L_4f8a10;
L_4f8a08: /* 4f8a08: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 4f8a0f: nop  */
L_4f8a10: /* 4f8a10: fld dword ptr [ebx + ecx + 8] */
  { double v = F32((uint32_t)(ebx + ecx + 0x8u)); FPUSH(v); }
/* 4f8a14: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f8a18: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 4f8a1b: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 4f8a1e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f8a22: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f8a26: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f8a2a: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 4f8a2e: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 4f8a32: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f8a36: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f8a38: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8a3b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f8a3e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a40: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 4f8a42: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a44: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 4f8a47: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a49: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 4f8a4c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a4e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f8a50: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f8a53: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8a55: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f8a58: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a5a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f8a5d: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 4f8a5f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f8a61: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f8a64: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8a66: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f8a69: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a6b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f8a6e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a70: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 4f8a72: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 4f8a74: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 4f8a76: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f8a7a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f8a7d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8a7f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f8a82: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f8a84: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f8a87: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a89: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8a8b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8a8d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f8a8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8a91: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f8a93: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f8a96: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f8a99: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 4f8a9d: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 4f8aa1: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4f8aa5: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 4f8aa9: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 4f8aad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f8aae: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 4f8ab2: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 4f8ab6: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 4f8aba: call 0x4e1b09 */
  esp -= 4; W32(esp, 0x4f8abfu); SPILL(); f_4e1b09(); if (g_unwind) return; RELOAD();
/* 4f8abf: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4f8ac2: cmp ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8ac5: jl 0x4f8a02 */
  if ((sf != of)) goto L_4f8a02;
L_4f8acb: /* 4f8acb: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4f8ace: cmp ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8ad1: jl 0x4f89fa */
  if ((sf != of)) goto L_4f89fa;
L_4f8ad7: /* 4f8ad7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f8adb: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f8ade: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8ae1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f8ae5: jl 0x4f89ed */
  if ((sf != of)) goto L_4f89ed;
L_4f8aeb: /* 4f8aeb: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 4f8aef: mov ecx, 7 */
  ecx = 0x7u;
/* 4f8af4: lea esi, [esp + 0x44] */
  esi = (uint32_t)(esp + 0x44u);
/* 4f8af8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f8afa: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 4f8afe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8aff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8b00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f8b01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f8b02: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8b05: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8b80(void) {
  LOAD_REGS();
L_4f8b80: /* 4f8b80: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8b83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f8b84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f8b85: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f8b8d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f8b91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8b92: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f8b9a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4f8b9e: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 4f8ba6: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 4f8baa: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 4f8bae: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 4f8bb2: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 4f8bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8bb7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 4f8bbb: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 4f8bbf: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 4f8bc3: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 4f8bc7: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 4f8bcb: mov byte ptr [esp + 0x60], 0 */
  W8((uint32_t)(esp + 0x60u), 0x0u);
/* 4f8bd0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4f8bd4: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f8bdc: mov ebp, 4 */
  ebp = 0x4u;
/* 4f8be1: xor ebx, ebx */
  ebx = 0;
/* 4f8be3: jmp 0x4f8c00 */
  goto L_4f8c00;
L_4f8be5: /* 4f8be5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f8be9: mov ebp, 4 */
  ebp = 0x4u;
/* 4f8bee: xor ebx, ebx */
  ebx = 0;
/* 4f8bf0: jmp 0x4f8c00 */
  goto L_4f8c00;
L_4f8bf2: /* 4f8bf2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f8bf6: xor ebx, ebx */
  ebx = 0;
/* 4f8bf8: jmp 0x4f8c00 */
  goto L_4f8c00;
L_4f8bfa: /* 4f8bfa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f8bfe: mov edi, edi */
  edi = edi;
L_4f8c00: /* 4f8c00: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f8c04: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 4f8c07: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 4f8c0f: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 4f8c12: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8c14: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f8c18: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f8c1c: fld dword ptr [ebx + ecx + 8] */
  { double v = F32((uint32_t)(ebx + ecx + 0x8u)); FPUSH(v); }
/* 4f8c20: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f8c24: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 4f8c28: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 4f8c2c: lea edi, [esp + 0x38] */
  edi = (uint32_t)(esp + 0x38u);
/* 4f8c30: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f8c32: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f8c34: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f8c36: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f8c39: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f8c3b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f8c3e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f8c40: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f8c43: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8c46: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f8c49: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8c4c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f8c4f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8c52: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f8c55: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f8c58: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f8c5b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f8c5d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f8c5f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8c61: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8c63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f8c65: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f8c68: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f8c6b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f8c6e: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f8c71: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f8c74: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f8c77: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f8c7a: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f8c7d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f8c7f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f8c81: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8c83: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8c85: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f8c87: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f8c8a: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f8c8d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f8c90: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f8c93: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f8c96: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f8c99: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f8c9c: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f8c9f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f8ca1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f8ca3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8ca5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f8ca7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f8ca9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f8cab: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f8cad: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f8caf: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f8cb2: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f8cb5: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f8cb8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 4f8cbc: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 4f8cc0: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 4f8cc4: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 4f8cc8: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 4f8ccc: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 4f8cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8cd1: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 4f8cd5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 4f8cd9: call 0x4e1b09 */
  esp -= 4; W32(esp, 0x4f8cdeu); SPILL(); f_4e1b09(); if (g_unwind) return; RELOAD();
/* 4f8cde: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4f8ce1: cmp ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8ce4: jl 0x4f8bfa */
  if ((sf != of)) goto L_4f8bfa;
L_4f8cea: /* 4f8cea: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4f8ced: cmp ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8cf0: jl 0x4f8bf2 */
  if ((sf != of)) goto L_4f8bf2;
L_4f8cf6: /* 4f8cf6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f8cfa: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f8cfd: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8d00: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f8d04: jl 0x4f8be5 */
  if ((sf != of)) goto L_4f8be5;
L_4f8d0a: /* 4f8d0a: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 4f8d0e: mov ecx, 7 */
  ecx = 0x7u;
/* 4f8d13: lea esi, [esp + 0x48] */
  esi = (uint32_t)(esp + 0x48u);
/* 4f8d17: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f8d19: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 4f8d1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8d1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8d1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f8d20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f8d21: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8d24: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8da0(void) {
  LOAD_REGS();
L_4f8da0: /* 4f8da0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8da3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8da4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8da5: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 4f8da9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 4f8dad: mov esi, ecx */
  esi = ecx;
/* 4f8daf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8db0: mov ecx, edi */
  ecx = edi;
/* 4f8db2: call 0x4e1e9c */
  esp -= 4; W32(esp, 0x4f8db7u); SPILL(); f_4e1e9c(); if (g_unwind) return; RELOAD();
/* 4f8db7: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 4f8dbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f8dbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8dbd: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 4f8dc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8dc2: mov ecx, esi */
  ecx = esi;
/* 4f8dc4: call 0x4e2ea0 */
  esp -= 4; W32(esp, 0x4f8dc9u); SPILL(); f_4e2ea0(); if (g_unwind) return; RELOAD();
/* 4f8dc9: mov eax, edi */
  eax = edi;
/* 4f8dcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8dcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8dcd: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8dd0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8df0(void) {
  LOAD_REGS();
L_4f8df0: /* 4f8df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f8df4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f8df6: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f8df8: jne 0x4f8e12 */
  if (!zf) goto L_4f8e12;
L_4f8dfa: /* 4f8dfa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f8dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8dfe: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f8e01: call 0x4e3b43 */
  esp -= 4; W32(esp, 0x4f8e06u); SPILL(); f_4e3b43(); if (g_unwind) return; RELOAD();
/* 4f8e06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8e08: je 0x4f8e12 */
  if (zf) goto L_4f8e12;
L_4f8e0a: /* 4f8e0a: mov eax, 1 */
  eax = 0x1u;
/* 4f8e0f: ret 4 */
  esp += 8; SPILL(); return;
L_4f8e12: /* 4f8e12: xor eax, eax */
  eax = 0;
/* 4f8e14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f8e30(void) {
  LOAD_REGS();
L_4f8e30: /* 4f8e30: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f8e36: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f8e38: push 0x555548 */
  { uint32_t v = 0x555548u; esp -= 4; W32(esp, v); }
/* 4f8e3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8e3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f8e45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8e46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8e47: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f8e4b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f8e4e: mov esi, ecx */
  esi = ecx;
/* 4f8e50: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f8e52: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f8e58: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f8e5b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f8e5e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f8e63u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f8e63: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f8e66: xor eax, eax */
  eax = 0;
/* 4f8e68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f8e6a: jle 0x4f8e84 */
  if ((zf || sf != of)) goto L_4f8e84;
L_4f8e6c: /* 4f8e6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4f8e70: /* 4f8e70: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4f8e72: mov cx, word ptr [ecx + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*2))) & 0xffffu);
/* 4f8e76: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f8e78: mov word ptr [edx + eax*2], cx */
  W16((uint32_t)(edx + eax*2), (ecx & 0xffffu));
/* 4f8e7c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f8e7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f8e80: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8e82: jl 0x4f8e70 */
  if ((sf != of)) goto L_4f8e70;
L_4f8e84: /* 4f8e84: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f8e88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8e89: mov eax, esi */
  eax = esi;
/* 4f8e8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f8e92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8e93: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8e96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f8ec0(void) {
  LOAD_REGS();
L_4f8ec0: /* 4f8ec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f8ec2: push 0x555568 */
  { uint32_t v = 0x555568u; esp -= 4; W32(esp, v); }
/* 4f8ec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f8ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8ece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f8ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f8ed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8ed7: mov esi, ecx */
  esi = ecx;
/* 4f8ed9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8eda: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 4f8ede: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f8ee1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f8ee3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f8eeb: jge 0x4f8f04 */
  if ((sf == of)) goto L_4f8f04;
L_4f8eed: /* 4f8eed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f8ef2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f8ef7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f8efc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f8f01u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f8f01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f8f04: /* 4f8f04: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8f07: jle 0x4f8f20 */
  if ((zf || sf != of)) goto L_4f8f20;
L_4f8f09: /* 4f8f09: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f8f0e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f8f13: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f8f18: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f8f1du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f8f1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f8f20: /* 4f8f20: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f8f22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8f23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f8f25: mov ecx, esi */
  ecx = esi;
/* 4f8f27: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f8f2cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f8f2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f8f2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8f30: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 4f8f38: je 0x4f8f46 */
  if (zf) goto L_4f8f46;
L_4f8f3a: /* 4f8f3a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f8f40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f8f42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f8f43: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4f8f46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f8f46: /* 4f8f46: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f8f4a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f8f50: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 4f8f57: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 4f8f5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8f60: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f8f67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8f6a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f8fa0(void) {
  LOAD_REGS();
L_4f8fa0: /* 4f8fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f8fa1: mov esi, ecx */
  esi = ecx;
/* 4f8fa3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f8fa6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f8fa7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f8faa: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f8fad: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f8faf: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f8fb2: jle 0x4f8fd0 */
  if ((zf || sf != of)) goto L_4f8fd0;
L_4f8fb4: /* 4f8fb4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f8fb7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f8fb8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f8fbb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f8fbd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f8fc0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f8fc4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f8fc6: mov ecx, esi */
  ecx = esi;
/* 4f8fc8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f8fcb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f8fd0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f8fd0: /* 4f8fd0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f8fd4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f8fd6: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 4f8fd9: mov word ptr [ecx + edi*2], ax */
  W16((uint32_t)(ecx + edi*2), (eax & 0xffffu));
/* 4f8fdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f8fde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f8fdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9010(void) {
  LOAD_REGS();
L_4f9010: /* 4f9010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9011: mov esi, ecx */
  esi = ecx;
/* 4f9013: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f9016: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f9018: jg 0x4f9031 */
  if ((!zf && sf == of)) goto L_4f9031;
L_4f901a: /* 4f901a: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 4f901f: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f9024: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 4f9029: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f902eu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f902e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9031: /* 4f9031: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f9034: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9036: lea eax, [ecx + eax*2 - 2] */
  eax = (uint32_t)(ecx + eax*2 + 0xfffffffeu);
/* 4f903a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f903b: ret  */
  esp += 4; SPILL(); return;
}

void f_4f9050(void) {
  LOAD_REGS();
L_4f9050: /* 4f9050: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f9053: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f9055: lea eax, [ecx + eax*2 - 2] */
  eax = (uint32_t)(ecx + eax*2 + 0xfffffffeu);
/* 4f9059: ret  */
  esp += 4; SPILL(); return;
}

void f_4f9070(void) {
  LOAD_REGS();
L_4f9070: /* 4f9070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9071: mov esi, ecx */
  esi = ecx;
/* 4f9073: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f9076: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f9078: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9079: jg 0x4f9092 */
  if ((!zf && sf == of)) goto L_4f9092;
L_4f907b: /* 4f907b: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* 4f9080: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f9085: push 0x5a3b64 */
  { uint32_t v = 0x5a3b64u; esp -= 4; W32(esp, v); }
/* 4f908a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f908fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f908f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9092: /* 4f9092: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f9095: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9097: mov di, word ptr [ecx + eax*2 - 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*2 + 0xfffffffeu))) & 0xffffu);
/* 4f909c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f909e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4f909f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f90a0: mov ecx, esi */
  ecx = esi;
/* 4f90a2: call 0x4e2748 */
  esp -= 4; W32(esp, 0x4f90a7u); SPILL(); f_4e2748(); if (g_unwind) return; RELOAD();
/* 4f90a7: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 4f90aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f90ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f90ac: ret  */
  esp += 4; SPILL(); return;
}

void f_4f90c0(void) {
  LOAD_REGS();
L_4f90c0: /* 4f90c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f90c4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f90c8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f90ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f90cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f90cc: call 0x4e2f09 */
  esp -= 4; W32(esp, 0x4f90d1u); SPILL(); f_4e2f09(); if (g_unwind) return; RELOAD();
/* 4f90d1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f90f0(void) {
  LOAD_REGS();
L_4f90f0: /* 4f90f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f90f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f90f2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 4f90f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f90f7: mov esi, ecx */
  esi = ecx;
/* 4f90f9: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f90fb: je 0x4f914f */
  if (zf) goto L_4f914f;
L_4f90fd: /* 4f90fd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4f9100: xor ebx, ebx */
  ebx = 0;
/* 4f9102: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f9104: jle 0x4f914f */
  if ((zf || sf != of)) goto L_4f914f;
L_4f9106: /* 4f9106: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f9107: /* 4f9107: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f910a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f910d: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f9110: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9112: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f9115: jle 0x4f9133 */
  if ((zf || sf != of)) goto L_4f9133;
L_4f9117: /* 4f9117: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f911a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f911b: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f911e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f9120: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9123: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9127: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f9129: mov ecx, esi */
  ecx = esi;
/* 4f912b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f912e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9133u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9133: /* 4f9133: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9135: lea eax, [ecx + edi*2] */
  eax = (uint32_t)(ecx + edi*2);
/* 4f9138: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f913a: je 0x4f9146 */
  if (zf) goto L_4f9146;
L_4f913c: /* 4f913c: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 4f913f: mov cx, word ptr [edx + ebx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ebx*2))) & 0xffffu);
/* 4f9143: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
L_4f9146: /* 4f9146: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4f9149: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4f914a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f914c: jl 0x4f9107 */
  if ((sf != of)) goto L_4f9107;
L_4f914e: /* 4f914e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f914f: /* 4f914f: mov eax, esi */
  eax = esi;
/* 4f9151: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9152: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9153: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9154: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9180(void) {
  LOAD_REGS();
L_4f9180: /* 4f9180: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9181: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4f9185: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9187: mov esi, ecx */
  esi = ecx;
/* 4f9189: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f918b: je 0x4f91ec */
  if (zf) goto L_4f91ec;
L_4f918d: /* 4f918d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9190: xor ebp, ebp */
  ebp = 0;
/* 4f9192: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f9194: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f9197: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f919a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f919fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f919f: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f91a2: jle 0x4f91ec */
  if ((zf || sf != of)) goto L_4f91ec;
L_4f91a4: /* 4f91a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f91a5: /* 4f91a5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f91a8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f91ab: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f91ae: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f91b0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f91b3: jle 0x4f91d1 */
  if ((zf || sf != of)) goto L_4f91d1;
L_4f91b5: /* 4f91b5: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f91b8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f91b9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f91bc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f91be: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f91c1: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f91c5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f91c7: mov ecx, esi */
  ecx = esi;
/* 4f91c9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f91cc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f91d1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f91d1: /* 4f91d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f91d3: lea eax, [ecx + edi*2] */
  eax = (uint32_t)(ecx + edi*2);
/* 4f91d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f91d8: je 0x4f91e3 */
  if (zf) goto L_4f91e3;
L_4f91da: /* 4f91da: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4f91dc: mov cx, word ptr [edx + ebp*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ebp*2))) & 0xffffu);
/* 4f91e0: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
L_4f91e3: /* 4f91e3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f91e6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f91e7: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f91e9: jl 0x4f91a5 */
  if ((sf != of)) goto L_4f91a5;
L_4f91eb: /* 4f91eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f91ec: /* 4f91ec: mov eax, esi */
  eax = esi;
/* 4f91ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f91ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f91f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f91f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9220(void) {
  LOAD_REGS();
L_4f9220: /* 4f9220: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9222: push 0x555588 */
  { uint32_t v = 0x555588u; esp -= 4; W32(esp, v); }
/* 4f9227: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f922d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f922e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9235: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9236: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9237: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9238: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4f923c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f923f: mov esi, ecx */
  esi = ecx;
/* 4f9241: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f9243: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4f9247: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f924d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9250: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9253: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9258u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9258: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f925b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4f925d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f925f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9261: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f9262: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 4f926a: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4f926fu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4f926f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4f9273: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9276: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f9277: mov eax, esi */
  eax = esi;
/* 4f9279: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f927a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9281: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9284: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f92b0(void) {
  LOAD_REGS();
L_4f92b0: /* 4f92b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f92b2: push 0x5555a8 */
  { uint32_t v = 0x5555a8u; esp -= 4; W32(esp, v); }
/* 4f92b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f92bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f92be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f92c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f92c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f92c7: mov esi, ecx */
  esi = ecx;
/* 4f92c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f92ca: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 4f92ce: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f92d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f92d3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f92db: jge 0x4f92f4 */
  if ((sf == of)) goto L_4f92f4;
L_4f92dd: /* 4f92dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f92e2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f92e7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f92ec: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f92f1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f92f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f92f4: /* 4f92f4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f92f7: jle 0x4f9310 */
  if ((zf || sf != of)) goto L_4f9310;
L_4f92f9: /* 4f92f9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f92fe: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f9303: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f9308: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f930du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f930d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9310: /* 4f9310: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f9312: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9313: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f9315: mov ecx, esi */
  ecx = esi;
/* 4f9317: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f931cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f931c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f931e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9320: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 4f9328: je 0x4f9336 */
  if (zf) goto L_4f9336;
L_4f932a: /* 4f932a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f9330: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9333: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4f9336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f9336: /* 4f9336: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f933a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f9340: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 4f9347: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 4f934e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f934f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9350: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9357: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f935a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f9390(void) {
  LOAD_REGS();
L_4f9390: /* 4f9390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9391: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4f9395: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9397: mov esi, ecx */
  esi = ecx;
/* 4f9399: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f939b: je 0x4f93f7 */
  if (zf) goto L_4f93f7;
L_4f939d: /* 4f939d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f93a0: xor ebp, ebp */
  ebp = 0;
/* 4f93a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f93a4: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f93a7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f93aa: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f93afu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f93af: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f93b2: jle 0x4f93f7 */
  if ((zf || sf != of)) goto L_4f93f7;
L_4f93b4: /* 4f93b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f93b5: /* 4f93b5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f93b8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f93bb: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f93be: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f93c0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f93c3: jle 0x4f93e1 */
  if ((zf || sf != of)) goto L_4f93e1;
L_4f93c5: /* 4f93c5: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f93c8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f93c9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f93cc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f93ce: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f93d1: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f93d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f93d7: mov ecx, esi */
  ecx = esi;
/* 4f93d9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f93dc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f93e1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f93e1: /* 4f93e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f93e3: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 4f93e5: je 0x4f93ee */
  if (zf) goto L_4f93ee;
L_4f93e7: /* 4f93e7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4f93e9: mov dl, byte ptr [ecx + ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebp))) & 0xffu);
/* 4f93ec: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
L_4f93ee: /* 4f93ee: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f93f1: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f93f2: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f93f4: jl 0x4f93b5 */
  if ((sf != of)) goto L_4f93b5;
L_4f93f6: /* 4f93f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f93f7: /* 4f93f7: mov eax, esi */
  eax = esi;
/* 4f93f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f93fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f93fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f93fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9420(void) {
  LOAD_REGS();
L_4f9420: /* 4f9420: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f9426: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9428: push 0x5555c8 */
  { uint32_t v = 0x5555c8u; esp -= 4; W32(esp, v); }
/* 4f942d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f942e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9437: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f943b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f943e: mov esi, ecx */
  esi = ecx;
/* 4f9440: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9442: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f9448: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f944b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f944e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9453u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9453: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f9456: xor eax, eax */
  eax = 0;
/* 4f9458: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f945a: jle 0x4f9472 */
  if ((zf || sf != of)) goto L_4f9472;
L_4f945c: /* 4f945c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4f9460: /* 4f9460: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4f9462: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 4f9465: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f9467: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 4f946a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f946d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f946e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9470: jl 0x4f9460 */
  if ((sf != of)) goto L_4f9460;
L_4f9472: /* 4f9472: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f9476: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f9477: mov eax, esi */
  eax = esi;
/* 4f9479: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9480: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9481: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9484: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f94b0(void) {
  LOAD_REGS();
L_4f94b0: /* 4f94b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f94b2: push 0x5555e8 */
  { uint32_t v = 0x5555e8u; esp -= 4; W32(esp, v); }
/* 4f94b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f94bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f94be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f94c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f94c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f94c7: mov esi, ecx */
  esi = ecx;
/* 4f94c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f94ca: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 4f94ce: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f94d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f94d3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f94db: jge 0x4f94f4 */
  if ((sf == of)) goto L_4f94f4;
L_4f94dd: /* 4f94dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f94e2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f94e7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f94ec: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f94f1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f94f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f94f4: /* 4f94f4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f94f7: jle 0x4f9510 */
  if ((zf || sf != of)) goto L_4f9510;
L_4f94f9: /* 4f94f9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f94fe: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f9503: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f9508: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f950du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f950d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9510: /* 4f9510: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9512: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9513: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f9515: mov ecx, esi */
  ecx = esi;
/* 4f9517: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f951cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f951c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f951e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9520: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 4f9528: je 0x4f9536 */
  if (zf) goto L_4f9536;
L_4f952a: /* 4f952a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f9530: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9532: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9533: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4f9536u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f9536: /* 4f9536: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f953a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f9540: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 4f9547: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 4f954e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f954f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9550: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9557: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f955a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f9590(void) {
  LOAD_REGS();
L_4f9590: /* 4f9590: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9591: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4f9595: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9597: mov esi, ecx */
  esi = ecx;
/* 4f9599: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f959b: je 0x4f95fa */
  if (zf) goto L_4f95fa;
L_4f959d: /* 4f959d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f95a0: xor ebp, ebp */
  ebp = 0;
/* 4f95a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f95a4: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f95a7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f95aa: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f95afu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f95af: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f95b2: jle 0x4f95fa */
  if ((zf || sf != of)) goto L_4f95fa;
L_4f95b4: /* 4f95b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f95b5: /* 4f95b5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f95b8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f95bb: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f95be: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f95c0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f95c3: jle 0x4f95e1 */
  if ((zf || sf != of)) goto L_4f95e1;
L_4f95c5: /* 4f95c5: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f95c8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f95c9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f95cc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f95ce: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f95d1: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f95d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f95d7: mov ecx, esi */
  ecx = esi;
/* 4f95d9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f95dc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f95e1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f95e1: /* 4f95e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f95e3: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f95e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f95e8: je 0x4f95f1 */
  if (zf) goto L_4f95f1;
L_4f95ea: /* 4f95ea: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4f95ec: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 4f95ef: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4f95f1: /* 4f95f1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f95f4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f95f5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f95f7: jl 0x4f95b5 */
  if ((sf != of)) goto L_4f95b5;
L_4f95f9: /* 4f95f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f95fa: /* 4f95fa: mov eax, esi */
  eax = esi;
/* 4f95fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f95fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f95fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f95ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9630(void) {
  LOAD_REGS();
L_4f9630: /* 4f9630: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f9636: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9638: push 0x555608 */
  { uint32_t v = 0x555608u; esp -= 4; W32(esp, v); }
/* 4f963d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f963e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9645: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9646: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9647: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f964b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f964e: mov esi, ecx */
  esi = ecx;
/* 4f9650: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9652: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f9658: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f965b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f965e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9663u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9663: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f9666: xor eax, eax */
  eax = 0;
/* 4f9668: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f966a: jle 0x4f9682 */
  if ((zf || sf != of)) goto L_4f9682;
L_4f966c: /* 4f966c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4f9670: /* 4f9670: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4f9672: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 4f9675: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f9677: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 4f967a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f967d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f967e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9680: jl 0x4f9670 */
  if ((sf != of)) goto L_4f9670;
L_4f9682: /* 4f9682: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f9686: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f9687: mov eax, esi */
  eax = esi;
/* 4f9689: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9690: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9691: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9694: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f96c0(void) {
  LOAD_REGS();
L_4f96c0: /* 4f96c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f96c2: push 0x555628 */
  { uint32_t v = 0x555628u; esp -= 4; W32(esp, v); }
/* 4f96c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f96cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f96ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f96d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f96d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f96d7: mov esi, ecx */
  esi = ecx;
/* 4f96d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f96da: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 4f96de: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f96e1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f96e3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f96eb: jge 0x4f9704 */
  if ((sf == of)) goto L_4f9704;
L_4f96ed: /* 4f96ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f96f2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f96f7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f96fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f9701u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f9701: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9704: /* 4f9704: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9707: jle 0x4f9720 */
  if ((zf || sf != of)) goto L_4f9720;
L_4f9709: /* 4f9709: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f970e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f9713: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f9718: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f971du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f971d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9720: /* 4f9720: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9722: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9723: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f9725: mov ecx, esi */
  ecx = esi;
/* 4f9727: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f972cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f972c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f972e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9730: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 4f9738: je 0x4f9746 */
  if (zf) goto L_4f9746;
L_4f973a: /* 4f973a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f9740: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9743: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4f9746u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f9746: /* 4f9746: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f974a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f9750: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 4f9757: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 4f975e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f975f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9760: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9767: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f976a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f97a0(void) {
  LOAD_REGS();
L_4f97a0: /* 4f97a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f97a2: push 0x555648 */
  { uint32_t v = 0x555648u; esp -= 4; W32(esp, v); }
/* 4f97a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f97ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f97ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f97b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f97b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f97b7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4f97bb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f97be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f97bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f97c0: mov esi, ecx */
  esi = ecx;
/* 4f97c2: xor ebp, ebp */
  ebp = 0;
/* 4f97c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f97c6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4f97ca: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4f97cc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f97cf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f97d2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f97d7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f97d7: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f97da: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f97dd: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4f97e1: jle 0x4f9829 */
  if ((zf || sf != of)) goto L_4f9829;
L_4f97e3: /* 4f97e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f97e4: /* 4f97e4: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f97e7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f97ea: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f97ed: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f97ef: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f97f2: jle 0x4f9810 */
  if ((zf || sf != of)) goto L_4f9810;
L_4f97f4: /* 4f97f4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f97f7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f97f8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f97fb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f97fd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9800: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9804: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9806: mov ecx, esi */
  ecx = esi;
/* 4f9808: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f980b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9810u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9810: /* 4f9810: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9812: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f9815: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9817: je 0x4f9820 */
  if (zf) goto L_4f9820;
L_4f9819: /* 4f9819: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4f981b: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 4f981e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4f9820: /* 4f9820: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9823: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9824: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9826: jl 0x4f97e4 */
  if ((sf != of)) goto L_4f97e4;
L_4f9828: /* 4f9828: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f9829: /* 4f9829: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f982d: mov eax, esi */
  eax = esi;
/* 4f982f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9830: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9831: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9832: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9839: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f983c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9870(void) {
  LOAD_REGS();
L_4f9870: /* 4f9870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9872: push 0x555668 */
  { uint32_t v = 0x555668u; esp -= 4; W32(esp, v); }
/* 4f9877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f987d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f987e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9886: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9887: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4f988b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f988e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f988f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9890: mov esi, ecx */
  esi = ecx;
/* 4f9892: xor ebp, ebp */
  ebp = 0;
/* 4f9894: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f9896: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4f989a: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4f989c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f989f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f98a2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f98a7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f98a7: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f98aa: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f98ad: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4f98b1: jle 0x4f9922 */
  if ((zf || sf != of)) goto L_4f9922;
L_4f98b3: /* 4f98b3: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 4f98b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f98b8: jmp 0x4f98c0 */
  goto L_4f98c0;
L_4f98c0: /* 4f98c0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f98c3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f98c6: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f98c9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f98cb: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f98ce: jle 0x4f98ec */
  if ((zf || sf != of)) goto L_4f98ec;
L_4f98d0: /* 4f98d0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f98d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f98d4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f98d7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f98d9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f98dc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f98e0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f98e2: mov ecx, esi */
  ecx = esi;
/* 4f98e4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f98e7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f98ecu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f98ec: /* 4f98ec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f98ee: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f98f1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f98f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f98f6: je 0x4f990e */
  if (zf) goto L_4f990e;
L_4f98f8: /* 4f98f8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4f98fa: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f98fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9900: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f9902: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f9905: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f9908: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4f990b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4f990e: /* 4f990e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f9912: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9915: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9916: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f9919: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f991b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4f991f: jl 0x4f98c0 */
  if ((sf != of)) goto L_4f98c0;
L_4f9921: /* 4f9921: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f9922: /* 4f9922: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f9926: mov eax, esi */
  eax = esi;
/* 4f9928: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9929: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f992a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f992b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9932: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9935: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f98ba(void) {
  LOAD_REGS();
L_4f98ba: /* 4f98ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_4f98c0: /* 4f98c0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f98c3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f98c6: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f98c9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f98cb: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f98ce: jle 0x4f98ec */
  if ((zf || sf != of)) goto L_4f98ec;
L_4f98d0: /* 4f98d0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f98d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f98d4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f98d7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f98d9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f98dc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f98e0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f98e2: mov ecx, esi */
  ecx = esi;
/* 4f98e4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f98e7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f98ecu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f98ec: /* 4f98ec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f98ee: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f98f1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f98f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f98f6: je 0x4f990e */
  if (zf) goto L_4f990e;
L_4f98f8: /* 4f98f8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4f98fa: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f98fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9900: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f9902: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f9905: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f9908: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4f990b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4f990e: /* 4f990e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f9912: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9915: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9916: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f9919: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f991b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4f991f: jl 0x4f98c0 */
  if ((sf != of)) goto L_4f98c0;
L_4f9921: /* 4f9921: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f9922: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f9926: mov eax, esi */
  eax = esi;
/* 4f9928: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9929: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f992a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f992b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9932: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9935: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9980(void) {
  LOAD_REGS();
L_4f9980: /* 4f9980: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f9984: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9985: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4f9987: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9989: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f998a: je 0x4f9991 */
  if (zf) goto L_4f9991;
L_4f998c: /* 4f998c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f998f: jmp 0x4f9993 */
  goto L_4f9993;
L_4f9991: /* 4f9991: xor eax, eax */
  eax = 0;
L_4f9993: /* 4f9993: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 4f9996: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 4f9997: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f9999: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 4f999c: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 4f999f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f99a2: je 0x4f99bb */
  if (zf) goto L_4f99bb;
L_4f99a4: /* 4f99a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_4f99a6: /* 4f99a6: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 4f99a9: mov edi, dword ptr [edx + ecx*4 + 4] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 4f99ad: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f99af: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 4f99b2: je 0x4f99c2 */
  if (zf) goto L_4f99c2;
L_4f99b4: /* 4f99b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f99b6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f99b9: jne 0x4f99a6 */
  if (!zf) goto L_4f99a6;
L_4f99bb: /* 4f99bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f99bc: xor eax, eax */
  eax = 0;
/* 4f99be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f99bf: ret 4 */
  esp += 8; SPILL(); return;
L_4f99c2: /* 4f99c2: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f99c5: mov eax, dword ptr [edx + eax*4 + 8] */
  eax = R32((uint32_t)(edx + eax*4 + 0x8u));
/* 4f99c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f99ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f99cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f99f0(void) {
  LOAD_REGS();
L_4f99f0: /* 4f99f0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f99f6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f99f8: push 0x555688 */
  { uint32_t v = 0x555688u; esp -= 4; W32(esp, v); }
/* 4f99fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f99fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9a05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9a06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9a07: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f9a0b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f9a0e: mov esi, ecx */
  esi = ecx;
/* 4f9a10: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9a12: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f9a18: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9a1b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9a1e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9a23u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9a23: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f9a26: xor eax, eax */
  eax = 0;
/* 4f9a28: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f9a2a: jle 0x4f9a42 */
  if ((zf || sf != of)) goto L_4f9a42;
L_4f9a2c: /* 4f9a2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4f9a30: /* 4f9a30: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4f9a32: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 4f9a35: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f9a37: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 4f9a3a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f9a3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f9a3e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9a40: jl 0x4f9a30 */
  if ((sf != of)) goto L_4f9a30;
L_4f9a42: /* 4f9a42: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f9a46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f9a47: mov eax, esi */
  eax = esi;
/* 4f9a49: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9a50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9a51: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9a54: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9a80(void) {
  LOAD_REGS();
L_4f9a80: /* 4f9a80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9a82: push 0x5556a8 */
  { uint32_t v = 0x5556a8u; esp -= 4; W32(esp, v); }
/* 4f9a87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f9a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9a8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9a97: mov esi, ecx */
  esi = ecx;
/* 4f9a99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9a9a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 4f9a9e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f9aa1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f9aa3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f9aab: jge 0x4f9ac4 */
  if ((sf == of)) goto L_4f9ac4;
L_4f9aad: /* 4f9aad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f9ab2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f9ab7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f9abc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f9ac1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f9ac1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9ac4: /* 4f9ac4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9ac7: jle 0x4f9ae0 */
  if ((zf || sf != of)) goto L_4f9ae0;
L_4f9ac9: /* 4f9ac9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f9ace: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f9ad3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f9ad8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f9addu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f9add: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f9ae0: /* 4f9ae0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9ae2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9ae3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f9ae5: mov ecx, esi */
  ecx = esi;
/* 4f9ae7: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f9aecu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f9aec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f9aee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9af0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 4f9af8: je 0x4f9b06 */
  if (zf) goto L_4f9b06;
L_4f9afa: /* 4f9afa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f9b00: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9b02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9b03: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4f9b06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f9b06: /* 4f9b06: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f9b0a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f9b10: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 4f9b17: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 4f9b1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f9b1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9b20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9b27: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9b2a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f9b60(void) {
  LOAD_REGS();
L_4f9b60: /* 4f9b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9b61: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4f9b65: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9b66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9b67: mov esi, ecx */
  esi = ecx;
/* 4f9b69: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f9b6b: je 0x4f9bca */
  if (zf) goto L_4f9bca;
L_4f9b6d: /* 4f9b6d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9b70: xor ebp, ebp */
  ebp = 0;
/* 4f9b72: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9b74: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f9b77: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9b7a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9b7fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9b7f: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9b82: jle 0x4f9bca */
  if ((zf || sf != of)) goto L_4f9bca;
L_4f9b84: /* 4f9b84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f9b85: /* 4f9b85: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f9b88: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f9b8b: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f9b8e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9b90: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f9b93: jle 0x4f9bb1 */
  if ((zf || sf != of)) goto L_4f9bb1;
L_4f9b95: /* 4f9b95: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f9b98: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f9b99: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f9b9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f9b9e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9ba1: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9ba5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9ba7: mov ecx, esi */
  ecx = esi;
/* 4f9ba9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9bac: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9bb1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9bb1: /* 4f9bb1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9bb3: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f9bb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9bb8: je 0x4f9bc1 */
  if (zf) goto L_4f9bc1;
L_4f9bba: /* 4f9bba: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4f9bbc: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 4f9bbf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4f9bc1: /* 4f9bc1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9bc4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9bc5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9bc7: jl 0x4f9b85 */
  if ((sf != of)) goto L_4f9b85;
L_4f9bc9: /* 4f9bc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f9bca: /* 4f9bca: mov eax, esi */
  eax = esi;
/* 4f9bcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9bcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9bce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9bcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9c00(void) {
  LOAD_REGS();
L_4f9c00: /* 4f9c00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9c02: push 0x5556c8 */
  { uint32_t v = 0x5556c8u; esp -= 4; W32(esp, v); }
/* 4f9c07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f9c0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9c0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9c15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9c16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9c17: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9c18: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 4f9c1c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4f9c1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9c20: mov esi, ecx */
  esi = ecx;
/* 4f9c22: xor ebx, ebx */
  ebx = 0;
/* 4f9c24: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4f9c26: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4f9c2a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 4f9c2c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9c2f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9c32: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9c37u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9c37: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4f9c3a: cmp dword ptr [ebp + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9c3d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4f9c41: jle 0x4f9c91 */
  if ((zf || sf != of)) goto L_4f9c91;
L_4f9c43: /* 4f9c43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f9c44: /* 4f9c44: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f9c47: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f9c4a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f9c4d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9c4f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f9c52: jle 0x4f9c70 */
  if ((zf || sf != of)) goto L_4f9c70;
L_4f9c54: /* 4f9c54: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f9c57: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f9c58: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f9c5b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f9c5d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9c60: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9c64: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4f9c66: mov ecx, esi */
  ecx = esi;
/* 4f9c68: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9c6b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9c70u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9c70: /* 4f9c70: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9c72: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 4f9c75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9c77: je 0x4f9c88 */
  if (zf) goto L_4f9c88;
L_4f9c79: /* 4f9c79: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 4f9c7c: mov ecx, dword ptr [edx + ebx*8] */
  ecx = R32((uint32_t)(edx + ebx*8));
/* 4f9c7f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f9c81: mov edx, dword ptr [edx + ebx*8 + 4] */
  edx = R32((uint32_t)(edx + ebx*8 + 0x4u));
/* 4f9c85: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_4f9c88: /* 4f9c88: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4f9c8b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4f9c8c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9c8e: jl 0x4f9c44 */
  if ((sf != of)) goto L_4f9c44;
L_4f9c90: /* 4f9c90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f9c91: /* 4f9c91: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f9c95: mov eax, esi */
  eax = esi;
/* 4f9c97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9c98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9c99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9c9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9ca1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9ca4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9ce0(void) {
  LOAD_REGS();
L_4f9ce0: /* 4f9ce0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9ce2: push 0x5556e8 */
  { uint32_t v = 0x5556e8u; esp -= 4; W32(esp, v); }
/* 4f9ce7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f9ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9cee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9cf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9cf6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9cf7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4f9cfb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9cfe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9cff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9d00: mov esi, ecx */
  esi = ecx;
/* 4f9d02: xor ebp, ebp */
  ebp = 0;
/* 4f9d04: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9d06: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4f9d0a: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4f9d0c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9d0f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9d12: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9d17u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9d17: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f9d1a: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9d1d: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4f9d21: jle 0x4f9d69 */
  if ((zf || sf != of)) goto L_4f9d69;
L_4f9d23: /* 4f9d23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f9d24: /* 4f9d24: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f9d27: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f9d2a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f9d2d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9d2f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f9d32: jle 0x4f9d50 */
  if ((zf || sf != of)) goto L_4f9d50;
L_4f9d34: /* 4f9d34: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f9d37: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f9d38: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f9d3b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f9d3d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9d40: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9d44: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9d46: mov ecx, esi */
  ecx = esi;
/* 4f9d48: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9d4b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9d50u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9d50: /* 4f9d50: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9d52: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f9d55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9d57: je 0x4f9d60 */
  if (zf) goto L_4f9d60;
L_4f9d59: /* 4f9d59: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4f9d5b: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 4f9d5e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4f9d60: /* 4f9d60: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9d63: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9d64: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9d66: jl 0x4f9d24 */
  if ((sf != of)) goto L_4f9d24;
L_4f9d68: /* 4f9d68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f9d69: /* 4f9d69: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f9d6d: mov eax, esi */
  eax = esi;
/* 4f9d6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9d70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9d71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9d72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9d79: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9d7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9db0(void) {
  LOAD_REGS();
L_4f9db0: /* 4f9db0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9db2: push 0x555708 */
  { uint32_t v = 0x555708u; esp -= 4; W32(esp, v); }
/* 4f9db7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f9dbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9dbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9dc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9dc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9dc7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4f9dcb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9dce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9dcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9dd0: mov esi, ecx */
  esi = ecx;
/* 4f9dd2: xor ebp, ebp */
  ebp = 0;
/* 4f9dd4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f9dd6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4f9dda: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4f9ddc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9ddf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9de2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9de7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9de7: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f9dea: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9ded: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4f9df1: jle 0x4f9e62 */
  if ((zf || sf != of)) goto L_4f9e62;
L_4f9df3: /* 4f9df3: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 4f9df7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f9df8: jmp 0x4f9e00 */
  goto L_4f9e00;
L_4f9e00: /* 4f9e00: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f9e03: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f9e06: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f9e09: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9e0b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f9e0e: jle 0x4f9e2c */
  if ((zf || sf != of)) goto L_4f9e2c;
L_4f9e10: /* 4f9e10: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f9e13: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f9e14: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f9e17: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f9e19: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9e1c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9e20: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f9e22: mov ecx, esi */
  ecx = esi;
/* 4f9e24: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9e27: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9e2cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9e2c: /* 4f9e2c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f9e2e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f9e31: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f9e34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9e36: je 0x4f9e4e */
  if (zf) goto L_4f9e4e;
L_4f9e38: /* 4f9e38: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4f9e3a: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f9e3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9e40: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f9e42: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f9e45: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f9e48: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4f9e4b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4f9e4e: /* 4f9e4e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f9e52: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9e55: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9e56: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f9e59: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9e5b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4f9e5f: jl 0x4f9e00 */
  if ((sf != of)) goto L_4f9e00;
L_4f9e61: /* 4f9e61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f9e62: /* 4f9e62: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f9e66: mov eax, esi */
  eax = esi;
/* 4f9e68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9e69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9e6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9e6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9e72: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9e75: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9dfa(void) {
  LOAD_REGS();
L_4f9dfa: /* 4f9dfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_4f9e00: /* 4f9e00: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f9e03: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f9e06: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f9e09: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9e0b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f9e0e: jle 0x4f9e2c */
  if ((zf || sf != of)) goto L_4f9e2c;
L_4f9e10: /* 4f9e10: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f9e13: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f9e14: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f9e17: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f9e19: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9e1c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9e20: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f9e22: mov ecx, esi */
  ecx = esi;
/* 4f9e24: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9e27: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9e2cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9e2c: /* 4f9e2c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f9e2e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f9e31: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f9e34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9e36: je 0x4f9e4e */
  if (zf) goto L_4f9e4e;
L_4f9e38: /* 4f9e38: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4f9e3a: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f9e3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f9e40: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f9e42: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f9e45: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f9e48: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4f9e4b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4f9e4e: /* 4f9e4e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f9e52: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9e55: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9e56: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f9e59: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9e5b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4f9e5f: jl 0x4f9e00 */
  if ((sf != of)) goto L_4f9e00;
L_4f9e61: /* 4f9e61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f9e62: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f9e66: mov eax, esi */
  eax = esi;
/* 4f9e68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9e69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9e6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9e6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9e72: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9e75: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9ec0(void) {
  LOAD_REGS();
L_4f9ec0: /* 4f9ec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f9ec2: push 0x555728 */
  { uint32_t v = 0x555728u; esp -= 4; W32(esp, v); }
/* 4f9ec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f9ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f9ece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f9ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f9ed6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f9ed7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4f9edb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9ede: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f9edf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9ee0: mov esi, ecx */
  esi = ecx;
/* 4f9ee2: xor ebp, ebp */
  ebp = 0;
/* 4f9ee4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9ee6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4f9eea: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4f9eec: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9eef: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9ef2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9ef7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f9ef7: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4f9efa: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9efd: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4f9f01: jle 0x4f9f49 */
  if ((zf || sf != of)) goto L_4f9f49;
L_4f9f03: /* 4f9f03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4f9f04: /* 4f9f04: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f9f07: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f9f0a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f9f0d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9f0f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f9f12: jle 0x4f9f30 */
  if ((zf || sf != of)) goto L_4f9f30;
L_4f9f14: /* 4f9f14: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f9f17: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f9f18: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f9f1b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f9f1d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f9f20: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f9f24: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f9f26: mov ecx, esi */
  ecx = esi;
/* 4f9f28: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f9f2b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f9f30u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f9f30: /* 4f9f30: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f9f32: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f9f35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9f37: je 0x4f9f40 */
  if (zf) goto L_4f9f40;
L_4f9f39: /* 4f9f39: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4f9f3b: mov ecx, dword ptr [edx + ebp*4] */
  ecx = R32((uint32_t)(edx + ebp*4));
/* 4f9f3e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4f9f40: /* 4f9f40: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4f9f43: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4f9f44: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f9f46: jl 0x4f9f04 */
  if ((sf != of)) goto L_4f9f04;
L_4f9f48: /* 4f9f48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f9f49: /* 4f9f49: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f9f4d: mov eax, esi */
  eax = esi;
/* 4f9f4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9f50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f9f51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f9f52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f9f59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f9f5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9f90(void) {
  LOAD_REGS();
L_4f9f90: /* 4f9f90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f9f94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9f97: mov esi, ecx */
  esi = ecx;
/* 4f9f99: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4f9f9b: je 0x4f9fae */
  if (zf) goto L_4f9fae;
L_4f9f9d: /* 4f9f9d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 4f9fa0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9fa3: call 0x4e439f */
  esp -= 4; W32(esp, 0x4f9fa8u); SPILL(); f_4e439f(); if (g_unwind) return; RELOAD();
/* 4f9fa8: mov eax, esi */
  eax = esi;
/* 4f9faa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9fab: ret 4 */
  esp += 8; SPILL(); return;
L_4f9fae: /* 4f9fae: xor eax, eax */
  eax = 0;
/* 4f9fb0: mov ecx, esi */
  ecx = esi;
/* 4f9fb2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f9fb5: call 0x4e439f */
  esp -= 4; W32(esp, 0x4f9fbau); SPILL(); f_4e439f(); if (g_unwind) return; RELOAD();
/* 4f9fba: mov eax, esi */
  eax = esi;
/* 4f9fbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f9fbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f9fd0(void) {
  LOAD_REGS();
L_4f9fd0: /* 4f9fd0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f9fd3: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 4f9fd6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f9fd9: jmp 0x4e439f */
  SPILL(); f_4e439f(); return;
}

void f_4f9ff0(void) {
  LOAD_REGS();
L_4f9ff0: /* 4f9ff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f9ff4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f9ff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f9ff7: mov esi, ecx */
  esi = ecx;
/* 4f9ff9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4f9ffb: je 0x4fa00e */
  if (zf) goto L_4fa00e;
L_4f9ffd: /* 4f9ffd: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 4fa000: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fa003: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x4fa008u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 4fa008: mov eax, esi */
  eax = esi;
/* 4fa00a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa00b: ret 4 */
  esp += 8; SPILL(); return;
L_4fa00e: /* 4fa00e: xor eax, eax */
  eax = 0;
/* 4fa010: mov ecx, esi */
  ecx = esi;
/* 4fa012: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fa015: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x4fa01au); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 4fa01a: mov eax, esi */
  eax = esi;
/* 4fa01c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa01d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa030(void) {
  LOAD_REGS();
L_4fa030: /* 4fa030: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4fa033: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 4fa036: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4fa039: jmp 0x4e2f63 */
  SPILL(); f_4e2f63(); return;
}

void f_4fa050(void) {
  LOAD_REGS();
L_4fa050: /* 4fa050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fa052: push 0x555748 */
  { uint32_t v = 0x555748u; esp -= 4; W32(esp, v); }
/* 4fa057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fa05d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa05e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fa065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fa066: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa067: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa068: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 4fa06c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fa06f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa070: mov esi, ecx */
  esi = ecx;
/* 4fa072: xor ebx, ebx */
  ebx = 0;
/* 4fa074: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4fa076: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4fa07a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 4fa07c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fa07f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa082: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa087u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fa087: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4fa08a: cmp dword ptr [ebp + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa08d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fa091: jle 0x4fa0e1 */
  if ((zf || sf != of)) goto L_4fa0e1;
L_4fa093: /* 4fa093: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4fa094: /* 4fa094: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fa097: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fa09a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fa09d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa09f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fa0a2: jle 0x4fa0c0 */
  if ((zf || sf != of)) goto L_4fa0c0;
L_4fa0a4: /* 4fa0a4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa0a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa0a8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa0ab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa0ad: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa0b0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa0b4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4fa0b6: mov ecx, esi */
  ecx = esi;
/* 4fa0b8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa0bb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa0c0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa0c0: /* 4fa0c0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fa0c2: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 4fa0c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa0c7: je 0x4fa0d8 */
  if (zf) goto L_4fa0d8;
L_4fa0c9: /* 4fa0c9: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 4fa0cc: mov ecx, dword ptr [edx + ebx*8] */
  ecx = R32((uint32_t)(edx + ebx*8));
/* 4fa0cf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fa0d1: mov edx, dword ptr [edx + ebx*8 + 4] */
  edx = R32((uint32_t)(edx + ebx*8 + 0x4u));
/* 4fa0d5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_4fa0d8: /* 4fa0d8: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fa0db: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4fa0dc: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa0de: jl 0x4fa094 */
  if ((sf != of)) goto L_4fa094;
L_4fa0e0: /* 4fa0e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fa0e1: /* 4fa0e1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fa0e5: mov eax, esi */
  eax = esi;
/* 4fa0e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa0e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa0e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa0ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa0f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa0f4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa130(void) {
  LOAD_REGS();
L_4fa130: /* 4fa130: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fa132: push 0x555768 */
  { uint32_t v = 0x555768u; esp -= 4; W32(esp, v); }
/* 4fa137: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fa13d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa13e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fa145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fa146: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa147: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa148: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 4fa14c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fa14f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa150: mov esi, ecx */
  esi = ecx;
/* 4fa152: xor ebx, ebx */
  ebx = 0;
/* 4fa154: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4fa156: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4fa15a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 4fa15c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fa15f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa162: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa167u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fa167: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4fa16a: cmp dword ptr [ebp + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa16d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fa171: jle 0x4fa1c1 */
  if ((zf || sf != of)) goto L_4fa1c1;
L_4fa173: /* 4fa173: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4fa174: /* 4fa174: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fa177: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fa17a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fa17d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa17f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fa182: jle 0x4fa1a0 */
  if ((zf || sf != of)) goto L_4fa1a0;
L_4fa184: /* 4fa184: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa187: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa188: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa18b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa18d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa190: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa194: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4fa196: mov ecx, esi */
  ecx = esi;
/* 4fa198: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa19b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa1a0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa1a0: /* 4fa1a0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fa1a2: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 4fa1a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa1a7: je 0x4fa1b8 */
  if (zf) goto L_4fa1b8;
L_4fa1a9: /* 4fa1a9: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 4fa1ac: mov ecx, dword ptr [edx + ebx*8] */
  ecx = R32((uint32_t)(edx + ebx*8));
/* 4fa1af: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fa1b1: mov edx, dword ptr [edx + ebx*8 + 4] */
  edx = R32((uint32_t)(edx + ebx*8 + 0x4u));
/* 4fa1b5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_4fa1b8: /* 4fa1b8: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fa1bb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4fa1bc: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa1be: jl 0x4fa174 */
  if ((sf != of)) goto L_4fa174;
L_4fa1c0: /* 4fa1c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fa1c1: /* 4fa1c1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fa1c5: mov eax, esi */
  eax = esi;
/* 4fa1c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa1c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa1c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa1ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa1d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa1d4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa210(void) {
  LOAD_REGS();
L_4fa210: /* 4fa210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fa212: push 0x555788 */
  { uint32_t v = 0x555788u; esp -= 4; W32(esp, v); }
/* 4fa217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fa21d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa21e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fa225: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fa228: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa229: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa22a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 4fa22e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fa231: mov ebx, ecx */
  ebx = ecx;
/* 4fa233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa234: xor esi, esi */
  esi = 0;
/* 4fa236: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 4fa238: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fa23c: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 4fa23e: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 4fa241: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 4fa244: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa249u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fa249: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 4fa24c: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa24f: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 4fa253: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fa257: jle 0x4fa2c1 */
  if ((zf || sf != of)) goto L_4fa2c1;
L_4fa259: /* 4fa259: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 4fa25d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa25e: mov edi, edi */
  edi = edi;
L_4fa260: /* 4fa260: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 4fa263: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 4fa266: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 4fa269: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa26b: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 4fa26e: jle 0x4fa28c */
  if ((zf || sf != of)) goto L_4fa28c;
L_4fa270: /* 4fa270: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa273: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa274: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa277: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa279: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa27c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa280: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 4fa282: mov ecx, ebx */
  ecx = ebx;
/* 4fa284: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 4fa287: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa28cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa28c: /* 4fa28c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4fa28e: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 4fa291: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 4fa293: mov edi, esi */
  edi = esi;
/* 4fa295: je 0x4fa2a5 */
  if (zf) goto L_4fa2a5;
L_4fa297: /* 4fa297: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 4fa29a: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4fa29e: mov ecx, 7 */
  ecx = 0x7u;
/* 4fa2a3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_4fa2a5: /* 4fa2a5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fa2a9: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4fa2ad: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fa2b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fa2b1: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4fa2b4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa2b6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4fa2ba: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 4fa2be: jl 0x4fa260 */
  if ((sf != of)) goto L_4fa260;
L_4fa2c0: /* 4fa2c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fa2c1: /* 4fa2c1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4fa2c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa2c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa2c7: mov eax, ebx */
  eax = ebx;
/* 4fa2c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa2ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa2d1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa2d4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa320(void) {
  LOAD_REGS();
L_4fa320: /* 4fa320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fa322: push 0x5557a8 */
  { uint32_t v = 0x5557a8u; esp -= 4; W32(esp, v); }
/* 4fa327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fa32d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa32e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fa335: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fa338: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa339: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa33a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 4fa33e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fa341: mov ebx, ecx */
  ebx = ecx;
/* 4fa343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa344: xor esi, esi */
  esi = 0;
/* 4fa346: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 4fa348: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fa34c: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 4fa34e: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 4fa351: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 4fa354: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa359u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fa359: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 4fa35c: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa35f: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 4fa363: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fa367: jle 0x4fa3d2 */
  if ((zf || sf != of)) goto L_4fa3d2;
L_4fa369: /* 4fa369: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 4fa36d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa36e: mov edi, edi */
  edi = edi;
L_4fa370: /* 4fa370: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 4fa373: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 4fa376: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 4fa379: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa37b: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 4fa37e: jle 0x4fa39c */
  if ((zf || sf != of)) goto L_4fa39c;
L_4fa380: /* 4fa380: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa383: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa384: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa387: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa389: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa38c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa390: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 4fa392: mov ecx, ebx */
  ecx = ebx;
/* 4fa394: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 4fa397: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa39cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa39c: /* 4fa39c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4fa39e: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 4fa3a1: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 4fa3a4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa3a6: je 0x4fa3b6 */
  if (zf) goto L_4fa3b6;
L_4fa3a8: /* 4fa3a8: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 4fa3ab: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4fa3af: mov ecx, 9 */
  ecx = 0x9u;
/* 4fa3b4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_4fa3b6: /* 4fa3b6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fa3ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4fa3be: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fa3c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fa3c2: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4fa3c5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa3c7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4fa3cb: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 4fa3cf: jl 0x4fa370 */
  if ((sf != of)) goto L_4fa370;
L_4fa3d1: /* 4fa3d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fa3d2: /* 4fa3d2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4fa3d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa3d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa3d8: mov eax, ebx */
  eax = ebx;
/* 4fa3da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa3db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa3e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa3e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa430(void) {
  LOAD_REGS();
L_4fa430: /* 4fa430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa433: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fa437: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa439: mov esi, ecx */
  esi = ecx;
/* 4fa43b: jge 0x4fa454 */
  if ((sf == of)) goto L_4fa454;
L_4fa43d: /* 4fa43d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fa442: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fa447: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fa44c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fa451u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fa451: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fa454: /* 4fa454: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa457: jle 0x4fa470 */
  if ((zf || sf != of)) goto L_4fa470;
L_4fa459: /* 4fa459: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fa45e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fa463: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fa468: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fa46du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fa46d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fa470: /* 4fa470: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fa474: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fa477: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fa47a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa47c: jle 0x4fa495 */
  if ((zf || sf != of)) goto L_4fa495;
L_4fa47e: /* 4fa47e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fa483: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fa488: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fa48d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fa492u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fa492: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fa495: /* 4fa495: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4fa497: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa499: mov ecx, esi */
  ecx = esi;
/* 4fa49b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fa4a0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fa4a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fa4a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa4a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa4a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fa4d0(void) {
  LOAD_REGS();
L_4fa4d0: /* 4fa4d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fa4d4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fa4db: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fa4de: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 4fa4e6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fa500(void) {
  LOAD_REGS();
L_4fa500: /* 4fa500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa501: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa502: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa503: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fa507: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa509: mov esi, ecx */
  esi = ecx;
/* 4fa50b: jge 0x4fa524 */
  if ((sf == of)) goto L_4fa524;
L_4fa50d: /* 4fa50d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fa512: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fa517: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fa51c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fa521u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fa521: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fa524: /* 4fa524: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa527: jle 0x4fa540 */
  if ((zf || sf != of)) goto L_4fa540;
L_4fa529: /* 4fa529: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fa52e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fa533: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fa538: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fa53du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fa53d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fa540: /* 4fa540: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fa544: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fa547: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fa54a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa54c: jle 0x4fa565 */
  if ((zf || sf != of)) goto L_4fa565;
L_4fa54e: /* 4fa54e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fa553: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fa558: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fa55d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fa562u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fa562: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fa565: /* 4fa565: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fa567: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa568: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa569: mov ecx, esi */
  ecx = esi;
/* 4fa56b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fa570u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fa570: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fa571: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa572: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa573: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fa5a0(void) {
  LOAD_REGS();
L_4fa5a0: /* 4fa5a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fa5a4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fa5ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fa5ae: mov dword ptr [esp + 4], 0xc */
  W32((uint32_t)(esp + 0x4u), 0xcu);
/* 4fa5b6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fa5d0(void) {
  LOAD_REGS();
L_4fa5d0: /* 4fa5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa5d1: mov esi, ecx */
  esi = ecx;
/* 4fa5d3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4fa5d6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fa5dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa5de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa5df: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4fa5e2: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 4fa5e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa5e8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x4fa5eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4fa5ea: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4fa5ed: mov edi, eax */
  edi = eax;
/* 4fa5ef: xor eax, eax */
  eax = 0;
/* 4fa5f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa5f3: jle 0x4fa604 */
  if ((zf || sf != of)) goto L_4fa604;
L_4fa5f5: /* 4fa5f5: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 4fa5fc: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4fa5ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fa600: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa602: jl 0x4fa5f5 */
  if ((sf != of)) goto L_4fa5f5;
L_4fa604: /* 4fa604: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fa607: xor edx, edx */
  edx = 0;
/* 4fa609: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa60b: jle 0x4fa63f */
  if ((zf || sf != of)) goto L_4fa63f;
L_4fa60d: /* 4fa60d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa60e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa60f: xor ebp, ebp */
  ebp = 0;
L_4fa611: /* 4fa611: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fa613: mov eax, dword ptr [ecx + ebp + 4] */
  eax = R32((uint32_t)(ecx + ebp + 0x4u));
/* 4fa617: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa619: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa61b: je 0x4fa622 */
  if (zf) goto L_4fa622;
L_4fa61d: /* 4fa61d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 4fa620: jmp 0x4fa624 */
  goto L_4fa624;
L_4fa622: /* 4fa622: xor ebx, ebx */
  ebx = 0;
L_4fa624: /* 4fa624: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4fa627: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4fa628: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fa62a: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 4fa62d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 4fa62f: mov dword ptr [edi + eax*4], edx */
  W32((uint32_t)(edi + eax*4), edx);
/* 4fa632: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fa635: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4fa636: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4fa639: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa63b: jl 0x4fa611 */
  if ((sf != of)) goto L_4fa611;
L_4fa63d: /* 4fa63d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa63e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4fa63f: /* 4fa63f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4fa642: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa644: je 0x4fa652 */
  if (zf) goto L_4fa652;
L_4fa646: /* 4fa646: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fa64c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa64e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa64f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fa652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fa652: /* 4fa652: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 4fa655: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fa656: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa657: ret  */
  esp += 4; SPILL(); return;
}

void f_4fa690(void) {
  LOAD_REGS();
L_4fa690: /* 4fa690: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fa692: push 0x5557c8 */
  { uint32_t v = 0x5557c8u; esp -= 4; W32(esp, v); }
/* 4fa697: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fa69d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa69e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fa6a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fa6a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa6a7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4fa6ab: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fa6ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa6af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa6b0: mov esi, ecx */
  esi = ecx;
/* 4fa6b2: xor ebp, ebp */
  ebp = 0;
/* 4fa6b4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fa6b6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4fa6ba: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4fa6bc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fa6bf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa6c2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa6c7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fa6c7: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4fa6ca: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa6cd: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4fa6d1: jle 0x4fa742 */
  if ((zf || sf != of)) goto L_4fa742;
L_4fa6d3: /* 4fa6d3: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 4fa6d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa6d8: jmp 0x4fa6e0 */
  goto L_4fa6e0;
L_4fa6e0: /* 4fa6e0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fa6e3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fa6e6: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fa6e9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa6eb: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fa6ee: jle 0x4fa70c */
  if ((zf || sf != of)) goto L_4fa70c;
L_4fa6f0: /* 4fa6f0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa6f3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa6f4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa6f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa6f9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa6fc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa700: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fa702: mov ecx, esi */
  ecx = esi;
/* 4fa704: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa707: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa70cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa70c: /* 4fa70c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fa70e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4fa711: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4fa714: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa716: je 0x4fa72e */
  if (zf) goto L_4fa72e;
L_4fa718: /* 4fa718: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4fa71a: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa71e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa720: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fa722: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4fa725: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4fa728: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4fa72b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4fa72e: /* 4fa72e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4fa732: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fa735: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4fa736: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa739: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa73b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4fa73f: jl 0x4fa6e0 */
  if ((sf != of)) goto L_4fa6e0;
L_4fa741: /* 4fa741: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fa742: /* 4fa742: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fa746: mov eax, esi */
  eax = esi;
/* 4fa748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa749: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa74a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa74b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa752: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa755: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa6da(void) {
  LOAD_REGS();
L_4fa6da: /* 4fa6da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_4fa6e0: /* 4fa6e0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fa6e3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fa6e6: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fa6e9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa6eb: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fa6ee: jle 0x4fa70c */
  if ((zf || sf != of)) goto L_4fa70c;
L_4fa6f0: /* 4fa6f0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa6f3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa6f4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa6f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa6f9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa6fc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa700: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fa702: mov ecx, esi */
  ecx = esi;
/* 4fa704: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa707: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa70cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa70c: /* 4fa70c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fa70e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4fa711: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4fa714: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa716: je 0x4fa72e */
  if (zf) goto L_4fa72e;
L_4fa718: /* 4fa718: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4fa71a: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa71e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa720: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fa722: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4fa725: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4fa728: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4fa72b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4fa72e: /* 4fa72e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4fa732: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fa735: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4fa736: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa739: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa73b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4fa73f: jl 0x4fa6e0 */
  if ((sf != of)) goto L_4fa6e0;
L_4fa741: /* 4fa741: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fa742: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fa746: mov eax, esi */
  eax = esi;
/* 4fa748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa749: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa74a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa74b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa752: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa755: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa7a0(void) {
  LOAD_REGS();
L_4fa7a0: /* 4fa7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa7a1: mov esi, ecx */
  esi = ecx;
/* 4fa7a3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4fa7a6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fa7ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa7ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa7af: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4fa7b2: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 4fa7b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa7b8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x4fa7bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4fa7ba: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4fa7bd: mov edi, eax */
  edi = eax;
/* 4fa7bf: xor eax, eax */
  eax = 0;
/* 4fa7c1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa7c3: jle 0x4fa7d4 */
  if ((zf || sf != of)) goto L_4fa7d4;
L_4fa7c5: /* 4fa7c5: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 4fa7cc: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4fa7cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fa7d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa7d2: jl 0x4fa7c5 */
  if ((sf != of)) goto L_4fa7c5;
L_4fa7d4: /* 4fa7d4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fa7d7: xor edx, edx */
  edx = 0;
/* 4fa7d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa7db: jle 0x4fa80f */
  if ((zf || sf != of)) goto L_4fa80f;
L_4fa7dd: /* 4fa7dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa7de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa7df: xor ebp, ebp */
  ebp = 0;
L_4fa7e1: /* 4fa7e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fa7e3: mov eax, dword ptr [ecx + ebp + 4] */
  eax = R32((uint32_t)(ecx + ebp + 0x4u));
/* 4fa7e7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa7e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa7eb: je 0x4fa7f2 */
  if (zf) goto L_4fa7f2;
L_4fa7ed: /* 4fa7ed: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 4fa7f0: jmp 0x4fa7f4 */
  goto L_4fa7f4;
L_4fa7f2: /* 4fa7f2: xor ebx, ebx */
  ebx = 0;
L_4fa7f4: /* 4fa7f4: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4fa7f7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4fa7f8: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fa7fa: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 4fa7fd: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 4fa7ff: mov dword ptr [edi + eax*4], edx */
  W32((uint32_t)(edi + eax*4), edx);
/* 4fa802: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fa805: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4fa806: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4fa809: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa80b: jl 0x4fa7e1 */
  if ((sf != of)) goto L_4fa7e1;
L_4fa80d: /* 4fa80d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa80e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4fa80f: /* 4fa80f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4fa812: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa814: je 0x4fa822 */
  if (zf) goto L_4fa822;
L_4fa816: /* 4fa816: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fa81c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa81f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fa822u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fa822: /* 4fa822: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 4fa825: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fa826: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa827: ret  */
  esp += 4; SPILL(); return;
}

void f_4fa860(void) {
  LOAD_REGS();
L_4fa860: /* 4fa860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fa862: push 0x5557e8 */
  { uint32_t v = 0x5557e8u; esp -= 4; W32(esp, v); }
/* 4fa867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fa86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa86e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fa875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fa876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa877: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4fa87b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fa87e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa87f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa880: mov esi, ecx */
  esi = ecx;
/* 4fa882: xor ebp, ebp */
  ebp = 0;
/* 4fa884: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fa886: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4fa88a: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4fa88c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fa88f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa892: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa897u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fa897: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4fa89a: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa89d: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4fa8a1: jle 0x4fa912 */
  if ((zf || sf != of)) goto L_4fa912;
L_4fa8a3: /* 4fa8a3: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 4fa8a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa8a8: jmp 0x4fa8b0 */
  goto L_4fa8b0;
L_4fa8b0: /* 4fa8b0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fa8b3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fa8b6: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fa8b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa8bb: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fa8be: jle 0x4fa8dc */
  if ((zf || sf != of)) goto L_4fa8dc;
L_4fa8c0: /* 4fa8c0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa8c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa8c4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa8c7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa8c9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa8cc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa8d0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fa8d2: mov ecx, esi */
  ecx = esi;
/* 4fa8d4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa8d7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa8dcu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa8dc: /* 4fa8dc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fa8de: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4fa8e1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4fa8e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa8e6: je 0x4fa8fe */
  if (zf) goto L_4fa8fe;
L_4fa8e8: /* 4fa8e8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4fa8ea: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa8ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa8f0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fa8f2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4fa8f5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4fa8f8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4fa8fb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4fa8fe: /* 4fa8fe: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4fa902: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fa905: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4fa906: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa909: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa90b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4fa90f: jl 0x4fa8b0 */
  if ((sf != of)) goto L_4fa8b0;
L_4fa911: /* 4fa911: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fa912: /* 4fa912: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fa916: mov eax, esi */
  eax = esi;
/* 4fa918: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa919: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa91a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa91b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa922: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa925: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa8aa(void) {
  LOAD_REGS();
L_4fa8aa: /* 4fa8aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_4fa8b0: /* 4fa8b0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fa8b3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fa8b6: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fa8b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa8bb: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fa8be: jle 0x4fa8dc */
  if ((zf || sf != of)) goto L_4fa8dc;
L_4fa8c0: /* 4fa8c0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fa8c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fa8c4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fa8c7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fa8c9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fa8cc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fa8d0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fa8d2: mov ecx, esi */
  ecx = esi;
/* 4fa8d4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fa8d7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fa8dcu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fa8dc: /* 4fa8dc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fa8de: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4fa8e1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4fa8e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa8e6: je 0x4fa8fe */
  if (zf) goto L_4fa8fe;
L_4fa8e8: /* 4fa8e8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4fa8ea: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa8ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa8f0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fa8f2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4fa8f5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4fa8f8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4fa8fb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4fa8fe: /* 4fa8fe: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4fa902: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fa905: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4fa906: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa909: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa90b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4fa90f: jl 0x4fa8b0 */
  if ((sf != of)) goto L_4fa8b0;
L_4fa911: /* 4fa911: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fa912: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fa916: mov eax, esi */
  eax = esi;
/* 4fa918: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa919: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa91a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fa91b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fa922: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fa925: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fa970(void) {
  LOAD_REGS();
L_4fa970: /* 4fa970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fa971: mov esi, ecx */
  esi = ecx;
/* 4fa973: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4fa976: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fa97c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa97e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fa97f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4fa982: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 4fa987: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa988: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x4fa98au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4fa98a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4fa98d: mov edi, eax */
  edi = eax;
/* 4fa98f: xor eax, eax */
  eax = 0;
/* 4fa991: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa993: jle 0x4fa9a4 */
  if ((zf || sf != of)) goto L_4fa9a4;
L_4fa995: /* 4fa995: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 4fa99c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4fa99f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fa9a0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa9a2: jl 0x4fa995 */
  if ((sf != of)) goto L_4fa995;
L_4fa9a4: /* 4fa9a4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fa9a7: xor edx, edx */
  edx = 0;
/* 4fa9a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fa9ab: jle 0x4fa9df */
  if ((zf || sf != of)) goto L_4fa9df;
L_4fa9ad: /* 4fa9ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fa9ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fa9af: xor ebp, ebp */
  ebp = 0;
L_4fa9b1: /* 4fa9b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fa9b3: mov eax, dword ptr [ecx + ebp + 4] */
  eax = R32((uint32_t)(ecx + ebp + 0x4u));
/* 4fa9b7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fa9b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa9bb: je 0x4fa9c2 */
  if (zf) goto L_4fa9c2;
L_4fa9bd: /* 4fa9bd: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 4fa9c0: jmp 0x4fa9c4 */
  goto L_4fa9c4;
L_4fa9c2: /* 4fa9c2: xor ebx, ebx */
  ebx = 0;
L_4fa9c4: /* 4fa9c4: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4fa9c7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4fa9c8: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fa9ca: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 4fa9cd: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 4fa9cf: mov dword ptr [edi + eax*4], edx */
  W32((uint32_t)(edi + eax*4), edx);
/* 4fa9d2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fa9d5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4fa9d6: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4fa9d9: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fa9db: jl 0x4fa9b1 */
  if ((sf != of)) goto L_4fa9b1;
L_4fa9dd: /* 4fa9dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fa9de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4fa9df: /* 4fa9df: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4fa9e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fa9e4: je 0x4fa9f2 */
  if (zf) goto L_4fa9f2;
L_4fa9e6: /* 4fa9e6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fa9ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fa9ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fa9ef: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fa9f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fa9f2: /* 4fa9f2: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 4fa9f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fa9f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fa9f7: ret  */
  esp += 4; SPILL(); return;
}

void f_4faa30(void) {
  LOAD_REGS();
L_4faa30: /* 4faa30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4faa32: push 0x555808 */
  { uint32_t v = 0x555808u; esp -= 4; W32(esp, v); }
/* 4faa37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4faa3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4faa3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4faa45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4faa46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4faa47: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 4faa4b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4faa4e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4faa4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4faa50: mov esi, ecx */
  esi = ecx;
/* 4faa52: xor ebp, ebp */
  ebp = 0;
/* 4faa54: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4faa56: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 4faa5a: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 4faa5c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4faa5f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4faa62: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4faa67u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4faa67: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4faa6a: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faa6d: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 4faa71: jle 0x4faae2 */
  if ((zf || sf != of)) goto L_4faae2;
L_4faa73: /* 4faa73: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 4faa77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4faa78: jmp 0x4faa80 */
  goto L_4faa80;
L_4faa80: /* 4faa80: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4faa83: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4faa86: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4faa89: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faa8b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4faa8e: jle 0x4faaac */
  if ((zf || sf != of)) goto L_4faaac;
L_4faa90: /* 4faa90: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4faa93: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4faa94: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4faa97: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4faa99: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4faa9c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4faaa0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4faaa2: mov ecx, esi */
  ecx = esi;
/* 4faaa4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4faaa7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4faaacu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4faaac: /* 4faaac: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4faaae: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4faab1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4faab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4faab6: je 0x4faace */
  if (zf) goto L_4faace;
L_4faab8: /* 4faab8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4faaba: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4faabe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4faac0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4faac2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4faac5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4faac8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4faacb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4faace: /* 4faace: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4faad2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4faad5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4faad6: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4faad9: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faadb: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4faadf: jl 0x4faa80 */
  if ((sf != of)) goto L_4faa80;
L_4faae1: /* 4faae1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4faae2: /* 4faae2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4faae6: mov eax, esi */
  eax = esi;
/* 4faae8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4faae9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4faaea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4faaeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4faaf2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4faaf5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4faa7a(void) {
  LOAD_REGS();
L_4faa7a: /* 4faa7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_4faa80: /* 4faa80: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4faa83: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4faa86: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4faa89: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faa8b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4faa8e: jle 0x4faaac */
  if ((zf || sf != of)) goto L_4faaac;
L_4faa90: /* 4faa90: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4faa93: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4faa94: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4faa97: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4faa99: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4faa9c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4faaa0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4faaa2: mov ecx, esi */
  ecx = esi;
/* 4faaa4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4faaa7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4faaacu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4faaac: /* 4faaac: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4faaae: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4faab1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4faab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4faab6: je 0x4faace */
  if (zf) goto L_4faace;
L_4faab8: /* 4faab8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4faaba: add ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4faabe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4faac0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4faac2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4faac5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4faac8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4faacb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4faace: /* 4faace: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4faad2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4faad5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4faad6: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4faad9: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faadb: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4faadf: jl 0x4faa80 */
  if ((sf != of)) goto L_4faa80;
L_4faae1: /* 4faae1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4faae2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4faae6: mov eax, esi */
  eax = esi;
/* 4faae8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4faae9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4faaea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4faaeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4faaf2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4faaf5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fab40(void) {
  LOAD_REGS();
L_4fab40: /* 4fab40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fab41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fab42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fab43: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fab47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fab49: mov esi, ecx */
  esi = ecx;
/* 4fab4b: jge 0x4fab64 */
  if ((sf == of)) goto L_4fab64;
L_4fab4d: /* 4fab4d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fab52: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fab57: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fab5c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fab61u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fab61: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fab64: /* 4fab64: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fab67: jle 0x4fab80 */
  if ((zf || sf != of)) goto L_4fab80;
L_4fab69: /* 4fab69: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fab6e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fab73: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fab78: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fab7du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fab7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fab80: /* 4fab80: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fab84: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fab87: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fab8a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fab8c: jle 0x4faba5 */
  if ((zf || sf != of)) goto L_4faba5;
L_4fab8e: /* 4fab8e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fab93: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fab98: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fab9d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4faba2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4faba2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4faba5: /* 4faba5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4faba7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4faba8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4faba9: mov ecx, esi */
  ecx = esi;
/* 4fabab: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fabb0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fabb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fabb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fabb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fabb3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fabe0(void) {
  LOAD_REGS();
L_4fabe0: /* 4fabe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fabe4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fabeb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fabee: mov dword ptr [esp + 4], 8 */
  W32((uint32_t)(esp + 0x4u), 0x8u);
/* 4fabf6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fac10(void) {
  LOAD_REGS();
L_4fac10: /* 4fac10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fac11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fac12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fac13: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fac17: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fac19: mov esi, ecx */
  esi = ecx;
/* 4fac1b: jge 0x4fac34 */
  if ((sf == of)) goto L_4fac34;
L_4fac1d: /* 4fac1d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fac22: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fac27: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fac2c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fac31u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fac31: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fac34: /* 4fac34: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fac37: jle 0x4fac50 */
  if ((zf || sf != of)) goto L_4fac50;
L_4fac39: /* 4fac39: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fac3e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fac43: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fac48: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fac4du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fac4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fac50: /* 4fac50: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fac54: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fac57: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fac5a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fac5c: jle 0x4fac75 */
  if ((zf || sf != of)) goto L_4fac75;
L_4fac5e: /* 4fac5e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fac63: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fac68: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fac6d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fac72u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fac72: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fac75: /* 4fac75: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4fac77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fac78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fac79: mov ecx, esi */
  ecx = esi;
/* 4fac7b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fac80u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fac80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fac81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fac82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fac83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4facb0(void) {
  LOAD_REGS();
L_4facb0: /* 4facb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4facb4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4facbb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4facbe: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 4facc6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4face0(void) {
  LOAD_REGS();
L_4face0: /* 4face0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4face1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4face2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4face3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4face7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4face9: mov esi, ecx */
  esi = ecx;
/* 4faceb: jge 0x4fad04 */
  if ((sf == of)) goto L_4fad04;
L_4faced: /* 4faced: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4facf2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4facf7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4facfc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fad01u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fad01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fad04: /* 4fad04: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fad07: jle 0x4fad20 */
  if ((zf || sf != of)) goto L_4fad20;
L_4fad09: /* 4fad09: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fad0e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fad13: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fad18: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fad1du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fad1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fad20: /* 4fad20: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fad24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fad27: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fad2a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fad2c: jle 0x4fad45 */
  if ((zf || sf != of)) goto L_4fad45;
L_4fad2e: /* 4fad2e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fad33: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fad38: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fad3d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fad42u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fad42: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fad45: /* 4fad45: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fad47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fad48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fad49: mov ecx, esi */
  ecx = esi;
/* 4fad4b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fad50u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fad50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fad51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fad52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fad53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fad80(void) {
  LOAD_REGS();
L_4fad80: /* 4fad80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fad84: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fad8b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fad8e: mov dword ptr [esp + 4], 0xc */
  W32((uint32_t)(esp + 0x4u), 0xcu);
/* 4fad96: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fadb0(void) {
  LOAD_REGS();
L_4fadb0: /* 4fadb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fadb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fadb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fadb3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fadb7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fadb9: mov esi, ecx */
  esi = ecx;
/* 4fadbb: jge 0x4fadd4 */
  if ((sf == of)) goto L_4fadd4;
L_4fadbd: /* 4fadbd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fadc2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fadc7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fadcc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fadd1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fadd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fadd4: /* 4fadd4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fadd7: jle 0x4fadf0 */
  if ((zf || sf != of)) goto L_4fadf0;
L_4fadd9: /* 4fadd9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fadde: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fade3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fade8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fadedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4faded: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fadf0: /* 4fadf0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fadf4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fadf7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fadfa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fadfc: jle 0x4fae15 */
  if ((zf || sf != of)) goto L_4fae15;
L_4fadfe: /* 4fadfe: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fae03: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fae08: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fae0d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fae12u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fae12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fae15: /* 4fae15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4fae17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fae18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fae19: mov ecx, esi */
  ecx = esi;
/* 4fae1b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fae20u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fae20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fae21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fae22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fae23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fae50(void) {
  LOAD_REGS();
L_4fae50: /* 4fae50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fae54: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fae5b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fae5e: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 4fae66: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fae80(void) {
  LOAD_REGS();
L_4fae80: /* 4fae80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fae81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fae82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fae83: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fae87: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fae89: mov esi, ecx */
  esi = ecx;
/* 4fae8b: jge 0x4faea4 */
  if ((sf == of)) goto L_4faea4;
L_4fae8d: /* 4fae8d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fae92: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fae97: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fae9c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4faea1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4faea1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4faea4: /* 4faea4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faea7: jle 0x4faec0 */
  if ((zf || sf != of)) goto L_4faec0;
L_4faea9: /* 4faea9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4faeae: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4faeb3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4faeb8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4faebdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4faebd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4faec0: /* 4faec0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4faec4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4faec7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4faeca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faecc: jle 0x4faee5 */
  if ((zf || sf != of)) goto L_4faee5;
L_4faece: /* 4faece: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4faed3: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4faed8: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4faedd: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4faee2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4faee2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4faee5: /* 4faee5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4faee7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4faee8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4faee9: mov ecx, esi */
  ecx = esi;
/* 4faeeb: call 0x4e438b */
  esp -= 4; W32(esp, 0x4faef0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4faef0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4faef1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4faef2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4faef3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4faf20(void) {
  LOAD_REGS();
L_4faf20: /* 4faf20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4faf24: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4faf2b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4faf2e: mov dword ptr [esp + 4], 8 */
  W32((uint32_t)(esp + 0x4u), 0x8u);
/* 4faf36: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4faf50(void) {
  LOAD_REGS();
L_4faf50: /* 4faf50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4faf51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4faf52: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 4faf56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4faf57: mov esi, ecx */
  esi = ecx;
/* 4faf59: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4faf5b: je 0x4fafc2 */
  if (zf) goto L_4fafc2;
L_4faf5d: /* 4faf5d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4faf60: xor ebx, ebx */
  ebx = 0;
/* 4faf62: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4faf64: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4faf67: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4faf6a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4faf6fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4faf6f: cmp dword ptr [ebp + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faf72: jle 0x4fafc2 */
  if ((zf || sf != of)) goto L_4fafc2;
L_4faf74: /* 4faf74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4faf75: /* 4faf75: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4faf78: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4faf7b: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4faf7e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4faf80: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4faf83: jle 0x4fafa1 */
  if ((zf || sf != of)) goto L_4fafa1;
L_4faf85: /* 4faf85: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4faf88: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4faf89: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4faf8c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4faf8e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4faf91: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4faf95: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4faf97: mov ecx, esi */
  ecx = esi;
/* 4faf99: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4faf9c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fafa1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fafa1: /* 4fafa1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fafa3: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 4fafa6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fafa8: je 0x4fafb9 */
  if (zf) goto L_4fafb9;
L_4fafaa: /* 4fafaa: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 4fafad: mov ecx, dword ptr [edx + ebx*8] */
  ecx = R32((uint32_t)(edx + ebx*8));
/* 4fafb0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fafb2: mov edx, dword ptr [edx + ebx*8 + 4] */
  edx = R32((uint32_t)(edx + ebx*8 + 0x4u));
/* 4fafb6: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_4fafb9: /* 4fafb9: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fafbc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4fafbd: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fafbf: jl 0x4faf75 */
  if ((sf != of)) goto L_4faf75;
L_4fafc1: /* 4fafc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fafc2: /* 4fafc2: mov eax, esi */
  eax = esi;
/* 4fafc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fafc5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fafc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fafc7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4faff0(void) {
  LOAD_REGS();
L_4faff0: /* 4faff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4faff1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4faff2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4faff3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4faff7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4faff9: mov esi, ecx */
  esi = ecx;
/* 4faffb: jge 0x4fb014 */
  if ((sf == of)) goto L_4fb014;
L_4faffd: /* 4faffd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fb002: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb007: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fb00c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb011u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb011: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb014: /* 4fb014: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb017: jle 0x4fb030 */
  if ((zf || sf != of)) goto L_4fb030;
L_4fb019: /* 4fb019: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fb01e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb023: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fb028: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb02du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb02d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb030: /* 4fb030: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fb034: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fb037: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fb03a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb03c: jle 0x4fb055 */
  if ((zf || sf != of)) goto L_4fb055;
L_4fb03e: /* 4fb03e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fb043: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb048: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fb04d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb052u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb052: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb055: /* 4fb055: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4fb057: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb058: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb059: mov ecx, esi */
  ecx = esi;
/* 4fb05b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fb060u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fb060: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb062: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb063: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fb090(void) {
  LOAD_REGS();
L_4fb090: /* 4fb090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fb094: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fb09b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fb09e: mov dword ptr [esp + 4], 8 */
  W32((uint32_t)(esp + 0x4u), 0x8u);
/* 4fb0a6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fb0c0(void) {
  LOAD_REGS();
L_4fb0c0: /* 4fb0c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb0c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb0c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb0c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fb0c7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fb0c9: mov esi, ecx */
  esi = ecx;
/* 4fb0cb: jge 0x4fb0e4 */
  if ((sf == of)) goto L_4fb0e4;
L_4fb0cd: /* 4fb0cd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fb0d2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb0d7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fb0dc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb0e1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb0e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb0e4: /* 4fb0e4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb0e7: jle 0x4fb100 */
  if ((zf || sf != of)) goto L_4fb100;
L_4fb0e9: /* 4fb0e9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fb0ee: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb0f3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fb0f8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb0fdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb0fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb100: /* 4fb100: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fb104: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fb107: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fb10a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb10c: jle 0x4fb125 */
  if ((zf || sf != of)) goto L_4fb125;
L_4fb10e: /* 4fb10e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fb113: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb118: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fb11d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb122u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb122: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb125: /* 4fb125: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 4fb127: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb129: mov ecx, esi */
  ecx = esi;
/* 4fb12b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fb130u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fb130: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb131: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb132: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb133: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fb160(void) {
  LOAD_REGS();
L_4fb160: /* 4fb160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fb164: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fb16b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fb16e: mov dword ptr [esp + 4], 0x1c */
  W32((uint32_t)(esp + 0x4u), 0x1cu);
/* 4fb176: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fb190(void) {
  LOAD_REGS();
L_4fb190: /* 4fb190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb192: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb193: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fb197: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fb199: mov esi, ecx */
  esi = ecx;
/* 4fb19b: jge 0x4fb1b4 */
  if ((sf == of)) goto L_4fb1b4;
L_4fb19d: /* 4fb19d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fb1a2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb1a7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fb1ac: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb1b1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb1b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb1b4: /* 4fb1b4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb1b7: jle 0x4fb1d0 */
  if ((zf || sf != of)) goto L_4fb1d0;
L_4fb1b9: /* 4fb1b9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fb1be: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb1c3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fb1c8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb1cdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb1cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb1d0: /* 4fb1d0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fb1d4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fb1d7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fb1da: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb1dc: jle 0x4fb1f5 */
  if ((zf || sf != of)) goto L_4fb1f5;
L_4fb1de: /* 4fb1de: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fb1e3: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb1e8: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fb1ed: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb1f2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb1f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb1f5: /* 4fb1f5: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 4fb1f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb1f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb1f9: mov ecx, esi */
  ecx = esi;
/* 4fb1fb: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fb200u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fb200: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb201: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb202: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb203: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fb230(void) {
  LOAD_REGS();
L_4fb230: /* 4fb230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fb234: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4fb23b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4fb23e: mov dword ptr [esp + 4], 0x24 */
  W32((uint32_t)(esp + 0x4u), 0x24u);
/* 4fb246: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4fb260(void) {
  LOAD_REGS();
L_4fb260: /* 4fb260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb261: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb262: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb263: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fb267: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fb269: mov esi, ecx */
  esi = ecx;
/* 4fb26b: jge 0x4fb284 */
  if ((sf == of)) goto L_4fb284;
L_4fb26d: /* 4fb26d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fb272: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb277: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fb27c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb281u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb281: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb284: /* 4fb284: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb287: jle 0x4fb2a0 */
  if ((zf || sf != of)) goto L_4fb2a0;
L_4fb289: /* 4fb289: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fb28e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb293: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fb298: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb29du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb29d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb2a0: /* 4fb2a0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fb2a4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fb2a7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fb2aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb2ac: jle 0x4fb2c5 */
  if ((zf || sf != of)) goto L_4fb2c5;
L_4fb2ae: /* 4fb2ae: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fb2b3: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb2b8: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fb2bd: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb2c2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb2c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb2c5: /* 4fb2c5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb2c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb2c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb2c9: mov ecx, esi */
  ecx = esi;
/* 4fb2cb: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fb2d0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fb2d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb2d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb2d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb2d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fb300(void) {
  LOAD_REGS();
L_4fb300: /* 4fb300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb301: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4fb305: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fb306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb307: mov esi, ecx */
  esi = ecx;
/* 4fb309: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb30b: je 0x4fb392 */
  if (zf) goto L_4fb392;
L_4fb311: /* 4fb311: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fb314: xor ebp, ebp */
  ebp = 0;
/* 4fb316: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb318: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4fb31b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb31e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb323u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb323: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb326: jle 0x4fb392 */
  if ((zf || sf != of)) goto L_4fb392;
L_4fb328: /* 4fb328: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 4fb32c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb32d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4fb330: /* 4fb330: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fb333: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fb336: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fb339: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb33b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fb33e: jle 0x4fb35c */
  if ((zf || sf != of)) goto L_4fb35c;
L_4fb340: /* 4fb340: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fb343: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fb344: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fb347: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fb349: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fb34c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fb350: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb352: mov ecx, esi */
  ecx = esi;
/* 4fb354: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb357: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb35cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fb35c: /* 4fb35c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fb35e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4fb361: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4fb364: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb366: je 0x4fb37e */
  if (zf) goto L_4fb37e;
L_4fb368: /* 4fb368: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4fb36a: add ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fb36e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fb370: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fb372: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4fb375: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4fb378: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4fb37b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4fb37e: /* 4fb37e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4fb382: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fb385: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4fb386: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fb389: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb38b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 4fb38f: jl 0x4fb330 */
  if ((sf != of)) goto L_4fb330;
L_4fb391: /* 4fb391: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fb392: /* 4fb392: mov eax, esi */
  eax = esi;
/* 4fb394: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb395: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fb396: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb397: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb3d0(void) {
  LOAD_REGS();
L_4fb3d0: /* 4fb3d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb3d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb3d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb3d3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fb3d7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fb3d9: mov esi, ecx */
  esi = ecx;
/* 4fb3db: jge 0x4fb3f4 */
  if ((sf == of)) goto L_4fb3f4;
L_4fb3dd: /* 4fb3dd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fb3e2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb3e7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fb3ec: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb3f1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb3f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb3f4: /* 4fb3f4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb3f7: jle 0x4fb410 */
  if ((zf || sf != of)) goto L_4fb410;
L_4fb3f9: /* 4fb3f9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fb3fe: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb403: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fb408: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb40du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb40d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb410: /* 4fb410: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fb414: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fb417: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fb41a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb41c: jle 0x4fb435 */
  if ((zf || sf != of)) goto L_4fb435;
L_4fb41e: /* 4fb41e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fb423: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb428: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fb42d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb432u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb432: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb435: /* 4fb435: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb437: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb438: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb439: mov ecx, esi */
  ecx = esi;
/* 4fb43b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fb440u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fb440: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb441: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb442: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb443: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fb470(void) {
  LOAD_REGS();
L_4fb470: /* 4fb470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb471: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4fb475: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fb476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb477: mov esi, ecx */
  esi = ecx;
/* 4fb479: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb47b: je 0x4fb502 */
  if (zf) goto L_4fb502;
L_4fb481: /* 4fb481: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fb484: xor ebp, ebp */
  ebp = 0;
/* 4fb486: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb488: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4fb48b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb48e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb493u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb493: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb496: jle 0x4fb502 */
  if ((zf || sf != of)) goto L_4fb502;
L_4fb498: /* 4fb498: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 4fb49c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb49d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4fb4a0: /* 4fb4a0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fb4a3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fb4a6: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fb4a9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb4ab: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fb4ae: jle 0x4fb4cc */
  if ((zf || sf != of)) goto L_4fb4cc;
L_4fb4b0: /* 4fb4b0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fb4b3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fb4b4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fb4b7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fb4b9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fb4bc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fb4c0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb4c2: mov ecx, esi */
  ecx = esi;
/* 4fb4c4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb4c7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb4ccu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fb4cc: /* 4fb4cc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fb4ce: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4fb4d1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4fb4d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb4d6: je 0x4fb4ee */
  if (zf) goto L_4fb4ee;
L_4fb4d8: /* 4fb4d8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4fb4da: add ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fb4de: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fb4e0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fb4e2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4fb4e5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4fb4e8: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4fb4eb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4fb4ee: /* 4fb4ee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4fb4f2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fb4f5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4fb4f6: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fb4f9: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb4fb: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 4fb4ff: jl 0x4fb4a0 */
  if ((sf != of)) goto L_4fb4a0;
L_4fb501: /* 4fb501: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fb502: /* 4fb502: mov eax, esi */
  eax = esi;
/* 4fb504: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb505: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fb506: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb507: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb540(void) {
  LOAD_REGS();
L_4fb540: /* 4fb540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb543: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fb547: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fb549: mov esi, ecx */
  esi = ecx;
/* 4fb54b: jge 0x4fb564 */
  if ((sf == of)) goto L_4fb564;
L_4fb54d: /* 4fb54d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4fb552: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb557: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4fb55c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb561u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb561: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb564: /* 4fb564: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb567: jle 0x4fb580 */
  if ((zf || sf != of)) goto L_4fb580;
L_4fb569: /* 4fb569: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4fb56e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb573: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4fb578: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb57du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb57d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb580: /* 4fb580: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4fb584: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4fb587: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4fb58a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb58c: jle 0x4fb5a5 */
  if ((zf || sf != of)) goto L_4fb5a5;
L_4fb58e: /* 4fb58e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4fb593: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4fb598: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4fb59d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4fb5a2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4fb5a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb5a5: /* 4fb5a5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb5a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb5a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb5a9: mov ecx, esi */
  ecx = esi;
/* 4fb5ab: call 0x4e438b */
  esp -= 4; W32(esp, 0x4fb5b0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4fb5b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb5b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb5b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb5b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fb5e0(void) {
  LOAD_REGS();
L_4fb5e0: /* 4fb5e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb5e1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4fb5e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fb5e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb5e7: mov esi, ecx */
  esi = ecx;
/* 4fb5e9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb5eb: je 0x4fb672 */
  if (zf) goto L_4fb672;
L_4fb5f1: /* 4fb5f1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fb5f4: xor ebp, ebp */
  ebp = 0;
/* 4fb5f6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb5f8: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 4fb5fb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb5fe: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb603u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb603: cmp dword ptr [ebx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb606: jle 0x4fb672 */
  if ((zf || sf != of)) goto L_4fb672;
L_4fb608: /* 4fb608: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 4fb60c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb60d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4fb610: /* 4fb610: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4fb613: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4fb616: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4fb619: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb61b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4fb61e: jle 0x4fb63c */
  if ((zf || sf != of)) goto L_4fb63c;
L_4fb620: /* 4fb620: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4fb623: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4fb624: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fb627: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fb629: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4fb62c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4fb630: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fb632: mov ecx, esi */
  ecx = esi;
/* 4fb634: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb637: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb63cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4fb63c: /* 4fb63c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fb63e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4fb641: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4fb644: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb646: je 0x4fb65e */
  if (zf) goto L_4fb65e;
L_4fb648: /* 4fb648: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4fb64a: add ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fb64e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fb650: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fb652: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4fb655: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4fb658: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 4fb65b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_4fb65e: /* 4fb65e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4fb662: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fb665: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 4fb666: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4fb669: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fb66b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 4fb66f: jl 0x4fb610 */
  if ((sf != of)) goto L_4fb610;
L_4fb671: /* 4fb671: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4fb672: /* 4fb672: mov eax, esi */
  eax = esi;
/* 4fb674: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb675: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fb676: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb677: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb6b0(void) {
  LOAD_REGS();
L_4fb6b0: /* 4fb6b0: mov eax, ecx */
  eax = ecx;
/* 4fb6b2: xor ecx, ecx */
  ecx = 0;
/* 4fb6b4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fb6b6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4fb6b9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4fb6bc: ret  */
  esp += 4; SPILL(); return;
}

void f_4fb6d0(void) {
  LOAD_REGS();
L_4fb6d0: /* 4fb6d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fb6d2: push 0x555828 */
  { uint32_t v = 0x555828u; esp -= 4; W32(esp, v); }
/* 4fb6d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fb6dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb6de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fb6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb6e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb6e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb6e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fb6ec: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fb6ef: mov esi, ecx */
  esi = ecx;
/* 4fb6f1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fb6f3: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fb6f7: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4fb6fd: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fb700: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb703: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb708u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb708: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fb70b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb70d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4fb715: je 0x4fb728 */
  if (zf) goto L_4fb728;
L_4fb717: /* 4fb717: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4fb719: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fb71b: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fb71d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb71e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb71f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fb720: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fb725u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fb725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb728: /* 4fb728: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fb72c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb72d: mov eax, esi */
  eax = esi;
/* 4fb72f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb730: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fb737: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fb73a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb760(void) {
  LOAD_REGS();
L_4fb760: /* 4fb760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fb762: push 0x555848 */
  { uint32_t v = 0x555848u; esp -= 4; W32(esp, v); }
/* 4fb767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fb76d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb76e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fb775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb778: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fb77c: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb780: mov esi, ecx */
  esi = ecx;
/* 4fb782: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 4fb786: je 0x4fb794 */
  if (zf) goto L_4fb794;
L_4fb788: /* 4fb788: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb789: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x4fb78eu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 4fb78e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fb791: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fb792: jmp 0x4fb796 */
  goto L_4fb796;
L_4fb794: /* 4fb794: xor eax, eax */
  eax = 0;
L_4fb796: /* 4fb796: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fb798: mov ecx, esi */
  ecx = esi;
/* 4fb79a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4fb7a0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fb7a3: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb7a6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb7abu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb7ab: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fb7ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb7b0: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4fb7b8: je 0x4fb7c9 */
  if (zf) goto L_4fb7c9;
L_4fb7ba: /* 4fb7ba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fb7bc: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fb7be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb7bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb7c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb7c1: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fb7c6u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fb7c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb7c9: /* 4fb7c9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fb7cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb7ce: mov eax, esi */
  eax = esi;
/* 4fb7d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb7d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fb7d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fb7db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb800(void) {
  LOAD_REGS();
L_4fb800: /* 4fb800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fb801: mov ebp, esp */
  ebp = esp;
/* 4fb803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fb805: push 0x555868 */
  { uint32_t v = 0x555868u; esp -= 4; W32(esp, v); }
/* 4fb80a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fb810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fb818: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb819: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb81a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb81b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb81c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4fb81f: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4fb821: xor ebx, ebx */
  ebx = 0;
/* 4fb823: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb825: mov esi, ecx */
  esi = ecx;
/* 4fb827: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4fb82a: je 0x4fb83d */
  if (zf) goto L_4fb83d;
L_4fb82c: /* 4fb82c: mov eax, edi */
  eax = edi;
/* 4fb82e: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_4fb831: /* 4fb831: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4fb833: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fb834: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb836: jne 0x4fb831 */
  if (!zf) goto L_4fb831;
L_4fb838: /* 4fb838: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4fb83a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fb83b: jmp 0x4fb83f */
  goto L_4fb83f;
L_4fb83d: /* 4fb83d: xor eax, eax */
  eax = 0;
L_4fb83f: /* 4fb83f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fb841: mov ecx, esi */
  ecx = esi;
/* 4fb843: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 4fb845: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fb848: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb84b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb850u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb850: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb853: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4fb856: je 0x4fb8b0 */
  if (zf) goto L_4fb8b0;
L_4fb858: /* 4fb858: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb859: call 0x4e3c9c */
  esp -= 4; W32(esp, 0x4fb85eu); SPILL(); f_4e3c9c(); if (g_unwind) return; RELOAD();
/* 4fb85e: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4fb860: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fb863: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb865: jne 0x4fb86c */
  if (!zf) goto L_4fb86c;
L_4fb867: /* 4fb867: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 4fb86a: jmp 0x4fb88a */
  goto L_4fb88a;
L_4fb86c: /* 4fb86c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb86d: call 0x4e3c9c */
  esp -= 4; W32(esp, 0x4fb872u); SPILL(); f_4e3c9c(); if (g_unwind) return; RELOAD();
/* 4fb872: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* 4fb876: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fb879: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fb87c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fb87f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fb882: call 0x554f80 */
  esp -= 4; W32(esp, 0x4fb887u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 4fb887: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_4fb88a: /* 4fb88a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fb88d: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 4fb88f: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4fb891: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb892: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb893: call 0x4e3c9c */
  esp -= 4; W32(esp, 0x4fb898u); SPILL(); f_4e3c9c(); if (g_unwind) return; RELOAD();
/* 4fb898: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4fb89b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb89c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb89d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb89e: call 0x4e2a27 */
  esp -= 4; W32(esp, 0x4fb8a3u); SPILL(); f_4e2a27(); if (g_unwind) return; RELOAD();
/* 4fb8a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fb8a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb8a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fb8a8: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fb8adu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fb8ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb8b0: /* 4fb8b0: mov eax, esi */
  eax = esi;
/* 4fb8b2: lea esp, [ebp - 0x1c] */
  esp = (uint32_t)(ebp + 0xffffffe4u);
/* 4fb8b5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4fb8b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fb8bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb8c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb8c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fb8c2: mov esp, ebp */
  esp = ebp;
/* 4fb8c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fb8c5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb910(void) {
  LOAD_REGS();
L_4fb910: /* 4fb910: mov eax, ecx */
  eax = ecx;
/* 4fb912: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb930(void) {
  LOAD_REGS();
L_4fb930: /* 4fb930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb931: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb932: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fb936: mov esi, ecx */
  esi = ecx;
/* 4fb938: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fb93a: je 0x4fb972 */
  if (zf) goto L_4fb972;
L_4fb93c: /* 4fb93c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fb93f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fb941: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb944: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fb947: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb94cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb94c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fb94f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb951: je 0x4fb972 */
  if (zf) goto L_4fb972;
L_4fb953: /* 4fb953: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4fb956: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fb958: je 0x4fb95e */
  if (zf) goto L_4fb95e;
L_4fb95a: /* 4fb95a: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 4fb95c: jmp 0x4fb963 */
  goto L_4fb963;
L_4fb95e: /* 4fb95e: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_4fb963: /* 4fb963: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fb965: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fb967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb968: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fb969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb96a: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fb96fu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fb96f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fb972: /* 4fb972: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fb973: mov eax, esi */
  eax = esi;
/* 4fb975: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb976: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fb9a0(void) {
  LOAD_REGS();
L_4fb9a0: /* 4fb9a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fb9a2: push 0x555888 */
  { uint32_t v = 0x555888u; esp -= 4; W32(esp, v); }
/* 4fb9a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fb9ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fb9ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fb9b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fb9b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fb9b7: mov esi, ecx */
  esi = ecx;
/* 4fb9b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fb9bd: xor eax, eax */
  eax = 0;
/* 4fb9bf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fb9c1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4fb9c5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fb9c8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fb9cb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fb9d0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fb9d0: mov ecx, esi */
  ecx = esi;
/* 4fb9d2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fb9da: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x4fb9dfu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 4fb9df: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fb9e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fb9e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fb9eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fb9ee: ret  */
  esp += 4; SPILL(); return;
}

void f_4fba10(void) {
  LOAD_REGS();
L_4fba10: /* 4fba10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fba12: push 0x5558c7 */
  { uint32_t v = 0x5558c7u; esp -= 4; W32(esp, v); }
/* 4fba17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fba1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fba1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fba25: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fba28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fba29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fba2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fba2b: xor ebx, ebx */
  ebx = 0;
/* 4fba2d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fba31: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 4fba35: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fba3au); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fba3a: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 4fba3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fba3f: mov ecx, eax */
  ecx = eax;
/* 4fba41: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 4fba49: call 0x4e180c */
  esp -= 4; W32(esp, 0x4fba4eu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 4fba4e: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 4fba52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fba53: mov ecx, esi */
  ecx = esi;
/* 4fba55: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fba5au); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fba5a: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 4fba62: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fba64: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fba68: mov dword ptr [esp + 0x24], 2 */
  W32((uint32_t)(esp + 0x24u), 0x2u);
/* 4fba70: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fba74: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fba78: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fba7du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fba7d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4fba81: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 4fba85: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x4fba8au); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 4fba8a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4fba8e: mov eax, esi */
  eax = esi;
/* 4fba90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fba91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fba92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fba99: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fba9c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fbad0(void) {
  LOAD_REGS();
L_4fbad0: /* 4fbad0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fbad1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4fbad5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4fbad8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fbada: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 4fbae2: je 0x4fbaf9 */
  if (zf) goto L_4fbaf9;
L_4fbae4: /* 4fbae4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4fbae6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbae7: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fbaeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbaec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbaed: call 0x4e2149 */
  esp -= 4; W32(esp, 0x4fbaf2u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 4fbaf2: mov eax, esi */
  eax = esi;
/* 4fbaf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbaf5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4fbaf6: ret 8 */
  esp += 12; SPILL(); return;
L_4fbaf9: /* 4fbaf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbafa: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fbafe: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4fbb03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbb04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbb05: call 0x4e2149 */
  esp -= 4; W32(esp, 0x4fbb0au); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 4fbb0a: mov eax, esi */
  eax = esi;
/* 4fbb0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbb0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4fbb0e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fbb40(void) {
  LOAD_REGS();
L_4fbb40: /* 4fbb40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fbb42: push 0x555907 */
  { uint32_t v = 0x555907u; esp -= 4; W32(esp, v); }
/* 4fbb47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fbb4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbb4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fbb55: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fbb58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fbb59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbb5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fbb5b: xor ebx, ebx */
  ebx = 0;
/* 4fbb5d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbb61: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 4fbb65: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fbb6au); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fbb6a: mov esi, eax */
  esi = eax;
/* 4fbb6c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbb6f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbb72: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 4fbb7a: jle 0x4fbb98 */
  if ((zf || sf != of)) goto L_4fbb98;
L_4fbb7c: /* 4fbb7c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fbb7e: mov dx, word ptr [ecx + eax*2 - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*2 + 0xfffffffcu))) & 0xffffu);
/* 4fbb83: cmp dx, word ptr [0x5a3a58] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(0x5a3a58u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4fbb8a: je 0x4fbb98 */
  if (zf) goto L_4fbb98;
L_4fbb8c: /* 4fbb8c: push 0x5a3a58 */
  { uint32_t v = 0x5a3a58u; esp -= 4; W32(esp, v); }
/* 4fbb91: mov ecx, esi */
  ecx = esi;
/* 4fbb93: call 0x4e180c */
  esp -= 4; W32(esp, 0x4fbb98u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
L_4fbb98: /* 4fbb98: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 4fbb9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbb9d: mov ecx, esi */
  ecx = esi;
/* 4fbb9f: call 0x4e180c */
  esp -= 4; W32(esp, 0x4fbba4u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 4fbba4: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 4fbba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbba9: mov ecx, esi */
  ecx = esi;
/* 4fbbab: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fbbb0u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fbbb0: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 4fbbb8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fbbba: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbbbe: mov dword ptr [esp + 0x24], 2 */
  W32((uint32_t)(esp + 0x24u), 0x2u);
/* 4fbbc6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fbbca: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fbbce: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fbbd3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fbbd3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4fbbd7: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 4fbbdb: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x4fbbe0u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 4fbbe0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4fbbe4: mov eax, esi */
  eax = esi;
/* 4fbbe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbbe7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fbbe8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fbbef: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fbbf2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fbc30(void) {
  LOAD_REGS();
L_4fbc30: /* 4fbc30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fbc31: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4fbc35: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4fbc38: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fbc3a: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 4fbc42: je 0x4fbc59 */
  if (zf) goto L_4fbc59;
L_4fbc44: /* 4fbc44: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4fbc46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbc47: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fbc4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbc4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbc4d: call 0x4e2c48 */
  esp -= 4; W32(esp, 0x4fbc52u); SPILL(); f_4e2c48(); if (g_unwind) return; RELOAD();
/* 4fbc52: mov eax, esi */
  eax = esi;
/* 4fbc54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbc55: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4fbc56: ret 8 */
  esp += 12; SPILL(); return;
L_4fbc59: /* 4fbc59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbc5a: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fbc5e: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4fbc63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbc64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbc65: call 0x4e2c48 */
  esp -= 4; W32(esp, 0x4fbc6au); SPILL(); f_4e2c48(); if (g_unwind) return; RELOAD();
/* 4fbc6a: mov eax, esi */
  eax = esi;
/* 4fbc6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbc6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4fbc6e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fbca0(void) {
  LOAD_REGS();
L_4fbca0: /* 4fbca0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fbca1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4fbca4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fbca6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbca7: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 4fbcaf: je 0x4fbcb5 */
  if (zf) goto L_4fbcb5;
L_4fbcb1: /* 4fbcb1: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4fbcb3: jmp 0x4fbcba */
  goto L_4fbcba;
L_4fbcb5: /* 4fbcb5: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_4fbcba: /* 4fbcba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fbcbc: je 0x4fbcc3 */
  if (zf) goto L_4fbcc3;
L_4fbcbe: /* 4fbcbe: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 4fbcc1: jmp 0x4fbcc5 */
  goto L_4fbcc5;
L_4fbcc3: /* 4fbcc3: xor ecx, ecx */
  ecx = 0;
L_4fbcc5: /* 4fbcc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fbcc7: je 0x4fbccc */
  if (zf) goto L_4fbccc;
L_4fbcc9: /* 4fbcc9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4fbcca: jmp 0x4fbcce */
  goto L_4fbcce;
L_4fbccc: /* 4fbccc: xor eax, eax */
  eax = 0;
L_4fbcce: /* 4fbcce: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4fbcd2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4fbcd4: jge 0x4fbcda */
  if ((sf == of)) goto L_4fbcda;
L_4fbcd6: /* 4fbcd6: xor eax, eax */
  eax = 0;
/* 4fbcd8: jmp 0x4fbce0 */
  goto L_4fbce0;
L_4fbcda: /* 4fbcda: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbcdc: jge 0x4fbce0 */
  if ((sf == of)) goto L_4fbce0;
L_4fbcde: /* 4fbcde: mov eax, edx */
  eax = edx;
L_4fbce0: /* 4fbce0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4fbce2: lea eax, [esi + ecx*2] */
  eax = (uint32_t)(esi + ecx*2);
/* 4fbce5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fbce9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbcea: mov ecx, esi */
  ecx = esi;
/* 4fbcec: call 0x4e13de */
  esp -= 4; W32(esp, 0x4fbcf1u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 4fbcf1: mov eax, esi */
  eax = esi;
/* 4fbcf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbcf4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4fbcf5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fbd20(void) {
  LOAD_REGS();
L_4fbd20: /* 4fbd20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fbd22: push 0x555947 */
  { uint32_t v = 0x555947u; esp -= 4; W32(esp, v); }
/* 4fbd27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fbd2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbd2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fbd35: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fbd38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fbd39: xor ebx, ebx */
  ebx = 0;
/* 4fbd3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbd3c: mov esi, ecx */
  esi = ecx;
/* 4fbd3e: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 4fbd42: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fbd45: je 0x4fbd4b */
  if (zf) goto L_4fbd4b;
L_4fbd47: /* 4fbd47: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fbd49: jmp 0x4fbd50 */
  goto L_4fbd50;
L_4fbd4b: /* 4fbd4b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4fbd50: /* 4fbd50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbd51: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbd55: call 0x4e13de */
  esp -= 4; W32(esp, 0x4fbd5au); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 4fbd5a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbd5d: xor ecx, ecx */
  ecx = 0;
/* 4fbd5f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbd61: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 4fbd69: jle 0x4fbd9b */
  if ((zf || sf != of)) goto L_4fbd9b;
L_4fbd6b: /* 4fbd6b: jmp 0x4fbd70 */
  goto L_4fbd70;
L_4fbd70: /* 4fbd70: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4fbd74: mov ax, word ptr [edx + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ecx*2))) & 0xffffu);
/* 4fbd78: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4fbd7c: jb 0x4fbd8c */
  if (cf) goto L_4fbd8c;
L_4fbd7e: /* 4fbd7e: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4fbd82: ja 0x4fbd8c */
  if ((!cf && !zf)) goto L_4fbd8c;
L_4fbd84: /* 4fbd84: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 4fbd87: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4fbd8a: jmp 0x4fbd8f */
  goto L_4fbd8f;
L_4fbd8c: /* 4fbd8c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_4fbd8f: /* 4fbd8f: mov word ptr [edx + ecx*2], ax */
  W16((uint32_t)(edx + ecx*2), (eax & 0xffffu));
/* 4fbd93: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbd96: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4fbd97: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbd99: jl 0x4fbd70 */
  if ((sf != of)) goto L_4fbd70;
L_4fbd9b: /* 4fbd9b: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 4fbd9f: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4fbda3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbda4: mov ecx, esi */
  ecx = esi;
/* 4fbda6: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fbdabu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fbdab: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 4fbdb3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fbdb5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbdb9: mov dword ptr [esp + 0x24], 2 */
  W32((uint32_t)(esp + 0x24u), 0x2u);
/* 4fbdc1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fbdc5: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fbdc9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fbdceu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fbdce: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4fbdd2: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 4fbdd6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x4fbddbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 4fbddb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4fbddf: mov eax, esi */
  eax = esi;
/* 4fbde1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbde2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fbde3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fbdea: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fbded: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fbd6d(void) {
  LOAD_REGS();
L_4fbd6d: /* 4fbd6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4fbd70: /* 4fbd70: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4fbd74: mov ax, word ptr [edx + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ecx*2))) & 0xffffu);
/* 4fbd78: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4fbd7c: jb 0x4fbd8c */
  if (cf) goto L_4fbd8c;
L_4fbd7e: /* 4fbd7e: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4fbd82: ja 0x4fbd8c */
  if ((!cf && !zf)) goto L_4fbd8c;
L_4fbd84: /* 4fbd84: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 4fbd87: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4fbd8a: jmp 0x4fbd8f */
  goto L_4fbd8f;
L_4fbd8c: /* 4fbd8c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_4fbd8f: /* 4fbd8f: mov word ptr [edx + ecx*2], ax */
  W16((uint32_t)(edx + ecx*2), (eax & 0xffffu));
/* 4fbd93: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbd96: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4fbd97: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbd99: jl 0x4fbd70 */
  if ((sf != of)) goto L_4fbd70;
L_4fbd9b: /* 4fbd9b: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 4fbd9f: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4fbda3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbda4: mov ecx, esi */
  ecx = esi;
/* 4fbda6: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fbdabu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fbdab: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 4fbdb3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fbdb5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbdb9: mov dword ptr [esp + 0x24], 2 */
  W32((uint32_t)(esp + 0x24u), 0x2u);
/* 4fbdc1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fbdc5: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fbdc9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fbdceu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fbdce: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4fbdd2: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 4fbdd6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x4fbddbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 4fbddb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4fbddf: mov eax, esi */
  eax = esi;
/* 4fbde1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbde2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fbde3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fbdea: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fbded: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fbe30(void) {
  LOAD_REGS();
L_4fbe30: /* 4fbe30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fbe32: push 0x555987 */
  { uint32_t v = 0x555987u; esp -= 4; W32(esp, v); }
/* 4fbe37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fbe3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbe3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fbe45: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fbe48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fbe49: xor ebx, ebx */
  ebx = 0;
/* 4fbe4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbe4c: mov esi, ecx */
  esi = ecx;
/* 4fbe4e: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 4fbe52: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fbe55: je 0x4fbe5b */
  if (zf) goto L_4fbe5b;
L_4fbe57: /* 4fbe57: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fbe59: jmp 0x4fbe60 */
  goto L_4fbe60;
L_4fbe5b: /* 4fbe5b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4fbe60: /* 4fbe60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbe61: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbe65: call 0x4e13de */
  esp -= 4; W32(esp, 0x4fbe6au); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 4fbe6a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbe6d: xor ecx, ecx */
  ecx = 0;
/* 4fbe6f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbe71: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 4fbe79: jle 0x4fbeab */
  if ((zf || sf != of)) goto L_4fbeab;
L_4fbe7b: /* 4fbe7b: jmp 0x4fbe80 */
  goto L_4fbe80;
L_4fbe80: /* 4fbe80: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4fbe84: mov ax, word ptr [edx + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ecx*2))) & 0xffffu);
/* 4fbe88: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4fbe8c: jb 0x4fbe9c */
  if (cf) goto L_4fbe9c;
L_4fbe8e: /* 4fbe8e: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4fbe92: ja 0x4fbe9c */
  if ((!cf && !zf)) goto L_4fbe9c;
L_4fbe94: /* 4fbe94: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 4fbe97: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fbe9a: jmp 0x4fbe9f */
  goto L_4fbe9f;
L_4fbe9c: /* 4fbe9c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_4fbe9f: /* 4fbe9f: mov word ptr [edx + ecx*2], ax */
  W16((uint32_t)(edx + ecx*2), (eax & 0xffffu));
/* 4fbea3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbea6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4fbea7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbea9: jl 0x4fbe80 */
  if ((sf != of)) goto L_4fbe80;
L_4fbeab: /* 4fbeab: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 4fbeaf: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4fbeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbeb4: mov ecx, esi */
  ecx = esi;
/* 4fbeb6: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fbebbu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fbebb: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 4fbec3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fbec5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbec9: mov dword ptr [esp + 0x24], 2 */
  W32((uint32_t)(esp + 0x24u), 0x2u);
/* 4fbed1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fbed5: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fbed9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fbedeu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fbede: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4fbee2: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 4fbee6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x4fbeebu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 4fbeeb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4fbeef: mov eax, esi */
  eax = esi;
/* 4fbef1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbef2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fbef3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fbefa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fbefd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fbe7d(void) {
  LOAD_REGS();
L_4fbe7d: /* 4fbe7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4fbe80: /* 4fbe80: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4fbe84: mov ax, word ptr [edx + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ecx*2))) & 0xffffu);
/* 4fbe88: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4fbe8c: jb 0x4fbe9c */
  if (cf) goto L_4fbe9c;
L_4fbe8e: /* 4fbe8e: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4fbe92: ja 0x4fbe9c */
  if ((!cf && !zf)) goto L_4fbe9c;
L_4fbe94: /* 4fbe94: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 4fbe97: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fbe9a: jmp 0x4fbe9f */
  goto L_4fbe9f;
L_4fbe9c: /* 4fbe9c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_4fbe9f: /* 4fbe9f: mov word ptr [edx + ecx*2], ax */
  W16((uint32_t)(edx + ecx*2), (eax & 0xffffu));
/* 4fbea3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbea6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4fbea7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4fbea9: jl 0x4fbe80 */
  if ((sf != of)) goto L_4fbe80;
L_4fbeab: /* 4fbeab: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 4fbeaf: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4fbeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbeb4: mov ecx, esi */
  ecx = esi;
/* 4fbeb6: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fbebbu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fbebb: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 4fbec3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fbec5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4fbec9: mov dword ptr [esp + 0x24], 2 */
  W32((uint32_t)(esp + 0x24u), 0x2u);
/* 4fbed1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 4fbed5: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 4fbed9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fbedeu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fbede: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4fbee2: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 4fbee6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x4fbeebu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 4fbeeb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4fbeef: mov eax, esi */
  eax = esi;
/* 4fbef1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbef2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fbef3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fbefa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fbefd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fbf40(void) {
  LOAD_REGS();
L_4fbf40: /* 4fbf40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fbf42: push 0x5559a8 */
  { uint32_t v = 0x5559a8u; esp -= 4; W32(esp, v); }
/* 4fbf47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fbf4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbf4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fbf55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fbf56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fbf57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fbf58: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fbf5c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fbf5e: mov esi, ecx */
  esi = ecx;
/* 4fbf60: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 4fbf64: je 0x4fbf6b */
  if (zf) goto L_4fbf6b;
L_4fbf66: /* 4fbf66: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 4fbf69: jmp 0x4fbf6d */
  goto L_4fbf6d;
L_4fbf6b: /* 4fbf6b: xor eax, eax */
  eax = 0;
L_4fbf6d: /* 4fbf6d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fbf6f: mov ecx, esi */
  ecx = esi;
/* 4fbf71: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4fbf77: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fbf7a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fbf7d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fbf82u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fbf82: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fbf85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fbf87: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4fbf8f: je 0x4fbfa3 */
  if (zf) goto L_4fbfa3;
L_4fbf91: /* 4fbf91: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4fbf95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fbf97: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4fbf98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fbf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fbf9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fbf9b: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x4fbfa0u); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 4fbfa0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fbfa3: /* 4fbfa3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fbfa7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fbfa8: mov eax, esi */
  eax = esi;
/* 4fbfaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fbfab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fbfb2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fbfb5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4fbfe0(void) {
  LOAD_REGS();
L_4fbfe0: /* 4fbfe0: mov eax, ecx */
  eax = ecx;
/* 4fbfe2: ret  */
  esp += 4; SPILL(); return;
}

void f_4fc000(void) {
  LOAD_REGS();
L_4fc000: /* 4fc000: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_4fc020(void) {
  LOAD_REGS();
L_4fc020: /* 4fc020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4fc024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc026: mov esi, ecx */
  esi = ecx;
/* 4fc028: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc02du); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc02d: mov eax, esi */
  eax = esi;
/* 4fc02f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc030: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc050(void) {
  LOAD_REGS();
L_4fc050: /* 4fc050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc051: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc052: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fc056: mov esi, ecx */
  esi = ecx;
/* 4fc058: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc05a: je 0x4fc092 */
  if (zf) goto L_4fc092;
L_4fc05c: /* 4fc05c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fc05f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc061: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fc064: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fc067: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc06cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc06c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fc06f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc071: je 0x4fc092 */
  if (zf) goto L_4fc092;
L_4fc073: /* 4fc073: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4fc076: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc078: je 0x4fc07e */
  if (zf) goto L_4fc07e;
L_4fc07a: /* 4fc07a: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 4fc07c: jmp 0x4fc083 */
  goto L_4fc083;
L_4fc07e: /* 4fc07e: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_4fc083: /* 4fc083: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fc085: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fc087: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc088: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc08a: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc08fu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc08f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc092: /* 4fc092: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc093: mov eax, esi */
  eax = esi;
/* 4fc095: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc096: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc0c0(void) {
  LOAD_REGS();
L_4fc0c0: /* 4fc0c0: mov eax, ecx */
  eax = ecx;
/* 4fc0c2: xor ecx, ecx */
  ecx = 0;
/* 4fc0c4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fc0c6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4fc0c9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4fc0cc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4fc0cf: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4fc0d2: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 4fc0d5: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 4fc0d8: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 4fc0db: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 4fc0de: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 4fc0e1: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 4fc0e4: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 4fc0e7: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 4fc0ea: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 4fc0ed: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 4fc0f0: ret  */
  esp += 4; SPILL(); return;
}

void f_4fc110(void) {
  LOAD_REGS();
L_4fc110: /* 4fc110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fc112: push 0x5559e9 */
  { uint32_t v = 0x5559e9u; esp -= 4; W32(esp, v); }
/* 4fc117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fc11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc11e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fc125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc127: mov esi, ecx */
  esi = ecx;
/* 4fc129: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fc12d: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 4fc130: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 4fc138: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc13du); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc13d: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 4fc140: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 4fc145: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc14au); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc14a: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 4fc14d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 4fc152: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc157u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc157: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4fc15a: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fc15f: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc164u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc164: mov ecx, esi */
  ecx = esi;
/* 4fc166: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fc16e: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc173u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc173: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fc177: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc178: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fc17f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fc182: ret  */
  esp += 4; SPILL(); return;
}

void f_4fc1b0(void) {
  LOAD_REGS();
L_4fc1b0: /* 4fc1b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fc1b2: push 0x555a29 */
  { uint32_t v = 0x555a29u; esp -= 4; W32(esp, v); }
/* 4fc1b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fc1bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc1be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fc1c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc1c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc1c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc1c8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fc1cc: mov esi, ecx */
  esi = ecx;
/* 4fc1ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc1cf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fc1d3: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc1d8u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc1d8: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 4fc1db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc1dc: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4fc1df: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fc1e7: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc1ecu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc1ec: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 4fc1ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc1f0: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 4fc1f3: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 4fc1f8: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc1fdu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc1fd: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 4fc200: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fc201: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 4fc204: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 4fc209: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc20eu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc20e: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4fc211: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc212: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 4fc215: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 4fc21a: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc21fu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc21f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fc223: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc224: mov eax, esi */
  eax = esi;
/* 4fc226: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc227: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fc22e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fc231: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc270(void) {
  LOAD_REGS();
L_4fc270: /* 4fc270: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc271: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fc272: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 4fc276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc277: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc278: mov edi, ecx */
  edi = ecx;
/* 4fc27a: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc27c: je 0x4fc2b5 */
  if (zf) goto L_4fc2b5;
L_4fc27e: /* 4fc27e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fc281: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc283: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 4fc286: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 4fc289: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc28eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc28e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fc291: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc293: je 0x4fc2b5 */
  if (zf) goto L_4fc2b5;
L_4fc295: /* 4fc295: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fc298: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc29a: je 0x4fc2a1 */
  if (zf) goto L_4fc2a1;
L_4fc29c: /* 4fc29c: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 4fc29f: jmp 0x4fc2a6 */
  goto L_4fc2a6;
L_4fc2a1: /* 4fc2a1: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_4fc2a6: /* 4fc2a6: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fc2a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc2a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc2aa: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4fc2ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc2ad: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc2b2u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc2b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc2b5: /* 4fc2b5: lea ebx, [ebp + 0xc] */
  ebx = (uint32_t)(ebp + 0xcu);
/* 4fc2b8: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 4fc2bb: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc2bd: je 0x4fc2f8 */
  if (zf) goto L_4fc2f8;
L_4fc2bf: /* 4fc2bf: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fc2c2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc2c4: mov ecx, esi */
  ecx = esi;
/* 4fc2c6: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fc2c9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fc2cc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc2d1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc2d1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fc2d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc2d6: je 0x4fc2f8 */
  if (zf) goto L_4fc2f8;
L_4fc2d8: /* 4fc2d8: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fc2db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc2dd: je 0x4fc2e3 */
  if (zf) goto L_4fc2e3;
L_4fc2df: /* 4fc2df: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fc2e1: jmp 0x4fc2e8 */
  goto L_4fc2e8;
L_4fc2e3: /* 4fc2e3: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fc2e8: /* 4fc2e8: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 4fc2eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fc2ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fc2ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc2ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc2f0: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc2f5u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc2f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc2f8: /* 4fc2f8: lea ebx, [ebp + 0x18] */
  ebx = (uint32_t)(ebp + 0x18u);
/* 4fc2fb: lea esi, [edi + 0x18] */
  esi = (uint32_t)(edi + 0x18u);
/* 4fc2fe: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc300: je 0x4fc33b */
  if (zf) goto L_4fc33b;
L_4fc302: /* 4fc302: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fc305: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc307: mov ecx, esi */
  ecx = esi;
/* 4fc309: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fc30c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fc30f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc314u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc314: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fc317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc319: je 0x4fc33b */
  if (zf) goto L_4fc33b;
L_4fc31b: /* 4fc31b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fc31e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc320: je 0x4fc326 */
  if (zf) goto L_4fc326;
L_4fc322: /* 4fc322: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fc324: jmp 0x4fc32b */
  goto L_4fc32b;
L_4fc326: /* 4fc326: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fc32b: /* 4fc32b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fc32d: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 4fc330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc331: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc332: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fc333: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc338u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc338: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc33b: /* 4fc33b: lea ebx, [ebp + 0x24] */
  ebx = (uint32_t)(ebp + 0x24u);
/* 4fc33e: lea esi, [edi + 0x24] */
  esi = (uint32_t)(edi + 0x24u);
/* 4fc341: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc343: je 0x4fc37d */
  if (zf) goto L_4fc37d;
L_4fc345: /* 4fc345: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fc348: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc34a: mov ecx, esi */
  ecx = esi;
/* 4fc34c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fc34f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fc352: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc357u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc357: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fc35a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc35c: je 0x4fc37d */
  if (zf) goto L_4fc37d;
L_4fc35e: /* 4fc35e: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fc361: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc363: je 0x4fc369 */
  if (zf) goto L_4fc369;
L_4fc365: /* 4fc365: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fc367: jmp 0x4fc36e */
  goto L_4fc36e;
L_4fc369: /* 4fc369: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fc36e: /* 4fc36e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fc370: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fc372: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc373: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc374: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc375: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc37au); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc37a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc37d: /* 4fc37d: lea ebx, [ebp + 0x30] */
  ebx = (uint32_t)(ebp + 0x30u);
/* 4fc380: lea esi, [edi + 0x30] */
  esi = (uint32_t)(edi + 0x30u);
/* 4fc383: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc385: je 0x4fc3c0 */
  if (zf) goto L_4fc3c0;
L_4fc387: /* 4fc387: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fc38a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc38c: mov ecx, esi */
  ecx = esi;
/* 4fc38e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fc391: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fc394: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc399u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc399: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fc39c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc39e: je 0x4fc3c0 */
  if (zf) goto L_4fc3c0;
L_4fc3a0: /* 4fc3a0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fc3a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc3a5: je 0x4fc3ab */
  if (zf) goto L_4fc3ab;
L_4fc3a7: /* 4fc3a7: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fc3a9: jmp 0x4fc3b0 */
  goto L_4fc3b0;
L_4fc3ab: /* 4fc3ab: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fc3b0: /* 4fc3b0: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 4fc3b3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fc3b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fc3b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc3b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc3b8: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc3bdu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc3bd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc3c0: /* 4fc3c0: mov eax, edi */
  eax = edi;
/* 4fc3c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc3c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc3c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fc3c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fc3c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc430(void) {
  LOAD_REGS();
L_4fc430: /* 4fc430: mov eax, ecx */
  eax = ecx;
/* 4fc432: xor ecx, ecx */
  ecx = 0;
/* 4fc434: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fc436: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4fc439: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4fc43c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4fc43f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4fc442: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 4fc445: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 4fc448: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 4fc44b: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 4fc44e: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 4fc451: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 4fc454: ret  */
  esp += 4; SPILL(); return;
}

void f_4fc470(void) {
  LOAD_REGS();
L_4fc470: /* 4fc470: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fc472: push 0x555a53 */
  { uint32_t v = 0x555a53u; esp -= 4; W32(esp, v); }
/* 4fc477: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fc47d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc47e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fc485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc487: mov esi, ecx */
  esi = ecx;
/* 4fc489: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fc48d: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 4fc490: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 4fc498: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc49du); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc49d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4fc4a0: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fc4a5: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc4aau); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc4aa: mov ecx, esi */
  ecx = esi;
/* 4fc4ac: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fc4b4: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc4b9u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc4b9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fc4bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc4be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fc4c5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fc4c8: ret  */
  esp += 4; SPILL(); return;
}

void f_4fc4f0(void) {
  LOAD_REGS();
L_4fc4f0: /* 4fc4f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fc4f2: push 0x555a83 */
  { uint32_t v = 0x555a83u; esp -= 4; W32(esp, v); }
/* 4fc4f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fc4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc4fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fc505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc508: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fc50c: mov esi, ecx */
  esi = ecx;
/* 4fc50e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc50f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fc513: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc518u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc518: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 4fc51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc51c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 4fc51f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fc527: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc52cu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc52c: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 4fc52f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc530: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 4fc533: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 4fc538: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc53du); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc53d: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 4fc540: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fc544: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 4fc547: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fc54a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fc54d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc54e: mov eax, esi */
  eax = esi;
/* 4fc550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc551: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fc558: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fc55b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc580(void) {
  LOAD_REGS();
L_4fc580: /* 4fc580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc581: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fc582: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 4fc586: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc587: mov esi, ecx */
  esi = ecx;
/* 4fc589: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc58b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc58c: je 0x4fc5c5 */
  if (zf) goto L_4fc5c5;
L_4fc58e: /* 4fc58e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fc591: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc593: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fc596: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fc599: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc59eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc59e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fc5a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc5a3: je 0x4fc5c5 */
  if (zf) goto L_4fc5c5;
L_4fc5a5: /* 4fc5a5: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fc5a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc5aa: je 0x4fc5b1 */
  if (zf) goto L_4fc5b1;
L_4fc5ac: /* 4fc5ac: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 4fc5af: jmp 0x4fc5b6 */
  goto L_4fc5b6;
L_4fc5b1: /* 4fc5b1: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_4fc5b6: /* 4fc5b6: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fc5b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc5b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc5ba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fc5bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc5bd: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc5c2u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc5c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc5c5: /* 4fc5c5: lea ebx, [ebp + 0xc] */
  ebx = (uint32_t)(ebp + 0xcu);
/* 4fc5c8: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 4fc5cb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc5cd: je 0x4fc608 */
  if (zf) goto L_4fc608;
L_4fc5cf: /* 4fc5cf: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fc5d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc5d4: mov ecx, edi */
  ecx = edi;
/* 4fc5d6: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 4fc5d9: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 4fc5dc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc5e1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc5e1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fc5e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc5e6: je 0x4fc608 */
  if (zf) goto L_4fc608;
L_4fc5e8: /* 4fc5e8: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fc5eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc5ed: je 0x4fc5f3 */
  if (zf) goto L_4fc5f3;
L_4fc5ef: /* 4fc5ef: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fc5f1: jmp 0x4fc5f8 */
  goto L_4fc5f8;
L_4fc5f3: /* 4fc5f3: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fc5f8: /* 4fc5f8: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 4fc5fb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4fc5fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fc5fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc5ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc600: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc605u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc605: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc608: /* 4fc608: lea ebx, [ebp + 0x18] */
  ebx = (uint32_t)(ebp + 0x18u);
/* 4fc60b: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 4fc60e: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc610: je 0x4fc64b */
  if (zf) goto L_4fc64b;
L_4fc612: /* 4fc612: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fc615: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc617: mov ecx, edi */
  ecx = edi;
/* 4fc619: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 4fc61c: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 4fc61f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc624u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc624: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fc627: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc629: je 0x4fc64b */
  if (zf) goto L_4fc64b;
L_4fc62b: /* 4fc62b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fc62e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc630: je 0x4fc636 */
  if (zf) goto L_4fc636;
L_4fc632: /* 4fc632: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fc634: jmp 0x4fc63b */
  goto L_4fc63b;
L_4fc636: /* 4fc636: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fc63b: /* 4fc63b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 4fc63d: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 4fc640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc641: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc642: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fc643: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc648u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc648: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc64b: /* 4fc64b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 4fc64e: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 4fc651: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 4fc654: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc655: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 4fc658: mov eax, esi */
  eax = esi;
/* 4fc65a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc65b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fc65c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fc65d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc6a0(void) {
  LOAD_REGS();
L_4fc6a0: /* 4fc6a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc6a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc6a2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fc6a6: push 0x69ff60 */
  { uint32_t v = 0x69ff60u; esp -= 4; W32(esp, v); }
/* 4fc6ab: mov ecx, esi */
  ecx = esi;
/* 4fc6ad: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 4fc6b5: call 0x4e3ab7 */
  esp -= 4; W32(esp, 0x4fc6bau); SPILL(); f_4e3ab7(); if (g_unwind) return; RELOAD();
/* 4fc6ba: mov eax, esi */
  eax = esi;
/* 4fc6bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc6bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4fc6be: ret  */
  esp += 4; SPILL(); return;
}

void f_4fc6d0(void) {
  LOAD_REGS();
L_4fc6d0: /* 4fc6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fc6d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc6d2: xor eax, eax */
  eax = 0;
/* 4fc6d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc6d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc6d7: mov esi, ecx */
  esi = ecx;
/* 4fc6d9: je 0x4fc72b */
  if (zf) goto L_4fc72b;
L_4fc6db: /* 4fc6db: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4fc6df: nop  */
L_4fc6e0: /* 4fc6e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc6e2: je 0x4fc6e9 */
  if (zf) goto L_4fc6e9;
L_4fc6e4: /* 4fc6e4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fc6e7: jmp 0x4fc6eb */
  goto L_4fc6eb;
L_4fc6e9: /* 4fc6e9: xor eax, eax */
  eax = 0;
L_4fc6eb: /* 4fc6eb: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 4fc6ee: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 4fc6f1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4fc6f2: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4fc6f4: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 4fc6f7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc6fa: je 0x4fc715 */
  if (zf) goto L_4fc715;
L_4fc6fc: /* 4fc6fc: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 4fc6ff: nop  */
L_4fc700: /* 4fc700: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 4fc703: mov ebx, dword ptr [edx + ecx*4 + 4] */
  ebx = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 4fc707: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc709: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 4fc70c: je 0x4fc719 */
  if (zf) goto L_4fc719;
L_4fc70e: /* 4fc70e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4fc710: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc713: jne 0x4fc700 */
  if (!zf) goto L_4fc700;
L_4fc715: /* 4fc715: xor eax, eax */
  eax = 0;
/* 4fc717: jmp 0x4fc724 */
  goto L_4fc724;
L_4fc719: /* 4fc719: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4fc71c: mov eax, dword ptr [edx + eax*4 + 8] */
  eax = R32((uint32_t)(edx + eax*4 + 0x8u));
/* 4fc720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc722: jne 0x4fc72b */
  if (!zf) goto L_4fc72b;
L_4fc724: /* 4fc724: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 4fc727: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc729: jne 0x4fc6e0 */
  if (!zf) goto L_4fc6e0;
L_4fc72b: /* 4fc72b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc72c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc72d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fc72e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc760(void) {
  LOAD_REGS();
L_4fc760: /* 4fc760: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_4fc780(void) {
  LOAD_REGS();
L_4fc780: /* 4fc780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc781: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc782: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fc786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc787: mov esi, ecx */
  esi = ecx;
/* 4fc789: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fc78eu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fc78e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 4fc791: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 4fc794: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 4fc797: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 4fc79a: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* 4fc79d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 4fc79f: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 4fc7a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fc7a4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 4fc7a7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4fc7aa: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 4fc7ad: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4fc7b0: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 4fc7b3: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4fc7b6: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 4fc7b9: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 4fc7bc: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 4fc7bf: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 4fc7c2: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 4fc7c5: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 4fc7c8: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 4fc7cb: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 4fc7ce: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 4fc7d1: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 4fc7d4: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 4fc7d7: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 4fc7da: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 4fc7dd: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 4fc7e0: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 4fc7e3: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 4fc7e6: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 4fc7e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc7ea: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 4fc7ed: mov eax, esi */
  eax = esi;
/* 4fc7ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc7f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc820(void) {
  LOAD_REGS();
L_4fc820: /* 4fc820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc821: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fc822: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fc826: mov esi, ecx */
  esi = ecx;
/* 4fc828: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fc82a: je 0x4fc862 */
  if (zf) goto L_4fc862;
L_4fc82c: /* 4fc82c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fc82f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fc831: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fc834: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fc837: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fc83cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fc83c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fc83f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc841: je 0x4fc862 */
  if (zf) goto L_4fc862;
L_4fc843: /* 4fc843: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4fc846: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fc848: je 0x4fc84e */
  if (zf) goto L_4fc84e;
L_4fc84a: /* 4fc84a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4fc84c: jmp 0x4fc853 */
  goto L_4fc853;
L_4fc84e: /* 4fc84e: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_4fc853: /* 4fc853: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fc855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc856: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc857: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fc859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc85a: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fc85fu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fc85f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fc862: /* 4fc862: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 4fc865: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 4fc868: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 4fc86b: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 4fc86e: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 4fc871: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4fc873: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 4fc876: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4fc878: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4fc87b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 4fc87e: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4fc881: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 4fc884: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 4fc887: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 4fc88a: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 4fc88d: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 4fc890: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fc893: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fc896: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fc899: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fc89c: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fc89f: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fc8a2: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 4fc8a5: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4fc8a8: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 4fc8ab: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 4fc8ae: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 4fc8b1: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 4fc8b4: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 4fc8b7: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4fc8ba: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 4fc8bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fc8be: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 4fc8c1: mov eax, esi */
  eax = esi;
/* 4fc8c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc8c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fc900(void) {
  LOAD_REGS();
L_4fc900: /* 4fc900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fc902: push 0x555b02 */
  { uint32_t v = 0x555b02u; esp -= 4; W32(esp, v); }
/* 4fc907: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fc90d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc90e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fc915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fc917: mov esi, ecx */
  esi = ecx;
/* 4fc919: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fc91d: mov dword ptr [esi], 0x5696c0 */
  W32((uint32_t)(esi), 0x5696c0u);
/* 4fc923: mov dword ptr [esp + 0x10], 6 */
  W32((uint32_t)(esp + 0x10u), 0x6u);
/* 4fc92b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fc930u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fc930: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 4fc935: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4fc937: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fc939: lea eax, [esi + 0x118] */
  eax = (uint32_t)(esi + 0x118u);
/* 4fc93f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc940: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 4fc945: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fc94au); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fc94a: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 4fc94f: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4fc951: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fc953: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 4fc956: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fc957: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 4fc95c: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fc961u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fc961: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 4fc964: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 4fc969: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc96eu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc96e: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 4fc971: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 4fc976: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc97bu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc97b: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fc97e: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 4fc983: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc988u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc988: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 4fc98b: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fc990: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fc995u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fc995: mov ecx, esi */
  ecx = esi;
/* 4fc997: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fc99f: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x4fc9a4u); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 4fc9a4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fc9a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fc9a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fc9b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fc9b3: ret  */
  esp += 4; SPILL(); return;
}

void f_4fc9f0(void) {
  LOAD_REGS();
L_4fc9f0: /* 4fc9f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fc9f2: push 0x555b64 */
  { uint32_t v = 0x555b64u; esp -= 4; W32(esp, v); }
/* 4fc9f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fc9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fc9fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fca05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fca06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fca07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fca08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fca0c: mov esi, ecx */
  esi = ecx;
/* 4fca0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fca0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fca13: call 0x4e1078 */
  esp -= 4; W32(esp, 0x4fca18u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 4fca18: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 4fca1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fca1c: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 4fca1f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fca27: mov dword ptr [esi], 0x5696c0 */
  W32((uint32_t)(esi), 0x5696c0u);
/* 4fca2d: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fca32u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fca32: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 4fca35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fca36: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fca39: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 4fca3e: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fca43u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fca43: lea edx, [edi + 0x40] */
  edx = (uint32_t)(edi + 0x40u);
/* 4fca46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fca47: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 4fca4a: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 4fca4f: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fca54u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fca54: lea eax, [edi + 0x4c] */
  eax = (uint32_t)(edi + 0x4cu);
/* 4fca57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fca58: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 4fca5b: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 4fca60: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fca65u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fca65: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 4fca6a: push 0x4e3729 */
  { uint32_t v = 0x4e3729u; esp -= 4; W32(esp, v); }
/* 4fca6f: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4fca71: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fca73: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 4fca76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fca77: lea edx, [esi + 0x58] */
  edx = (uint32_t)(esi + 0x58u);
/* 4fca7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fca7b: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 4fca80: call 0x554fbd */
  esp -= 4; W32(esp, 0x4fca85u); SPILL(); f_554fbd(); if (g_unwind) return; RELOAD();
/* 4fca85: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 4fca8a: push 0x4e3729 */
  { uint32_t v = 0x4e3729u; esp -= 4; W32(esp, v); }
/* 4fca8f: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4fca91: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4fca93: lea eax, [edi + 0x118] */
  eax = (uint32_t)(edi + 0x118u);
/* 4fca99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fca9a: lea ecx, [esi + 0x118] */
  ecx = (uint32_t)(esi + 0x118u);
/* 4fcaa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fcaa1: call 0x554fbd */
  esp -= 4; W32(esp, 0x4fcaa6u); SPILL(); f_554fbd(); if (g_unwind) return; RELOAD();
/* 4fcaa6: mov eax, dword ptr [edi + 0x1d8] */
  eax = R32((uint32_t)(edi + 0x1d8u));
/* 4fcaac: mov edx, dword ptr [esi + 0x1d8] */
  edx = R32((uint32_t)(esi + 0x1d8u));
/* 4fcab2: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 4fcab4: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* 4fcaba: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fcabd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fcabf: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* 4fcac5: mov ecx, eax */
  ecx = eax;
/* 4fcac7: mov eax, dword ptr [edi + 0x1d8] */
  eax = R32((uint32_t)(edi + 0x1d8u));
/* 4fcacd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fcacf: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fcad2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fcad4: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* 4fcada: mov ecx, dword ptr [edi + 0x1d8] */
  ecx = R32((uint32_t)(edi + 0x1d8u));
/* 4fcae0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fcae2: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4fcae5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fcae7: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* 4fcaed: mov eax, dword ptr [edi + 0x1d8] */
  eax = R32((uint32_t)(edi + 0x1d8u));
/* 4fcaf3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fcaf5: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fcaf8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fcafa: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* 4fcb00: mov ecx, dword ptr [edi + 0x1d8] */
  ecx = R32((uint32_t)(edi + 0x1d8u));
/* 4fcb06: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fcb08: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4fcb0b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fcb0d: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* 4fcb13: mov eax, dword ptr [edi + 0x1d8] */
  eax = R32((uint32_t)(edi + 0x1d8u));
/* 4fcb19: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fcb1b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fcb1e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fcb20: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* 4fcb26: mov ecx, dword ptr [edi + 0x1d8] */
  ecx = R32((uint32_t)(edi + 0x1d8u));
/* 4fcb2c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fcb2e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4fcb31: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fcb33: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* 4fcb39: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fcb3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fcb3e: mov eax, esi */
  eax = esi;
/* 4fcb40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fcb41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fcb48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fcb4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fcbb0(void) {
  LOAD_REGS();
L_4fcbb0: /* 4fcbb0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4fcbb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fcbb4: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 4fcbb8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fcbb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fcbba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fcbbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fcbbc: mov edi, ecx */
  edi = ecx;
/* 4fcbbe: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x4fcbc3u); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 4fcbc3: lea ebp, [ebx + 0x28] */
  ebp = (uint32_t)(ebx + 0x28u);
/* 4fcbc6: lea esi, [edi + 0x28] */
  esi = (uint32_t)(edi + 0x28u);
/* 4fcbc9: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fcbcb: je 0x4fcc06 */
  if (zf) goto L_4fcc06;
L_4fcbcd: /* 4fcbcd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fcbd0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fcbd2: mov ecx, esi */
  ecx = esi;
/* 4fcbd4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fcbd7: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fcbda: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fcbdfu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fcbdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fcbe2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcbe4: je 0x4fcc06 */
  if (zf) goto L_4fcc06;
L_4fcbe6: /* 4fcbe6: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fcbe9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcbeb: je 0x4fcbf2 */
  if (zf) goto L_4fcbf2;
L_4fcbed: /* 4fcbed: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 4fcbf0: jmp 0x4fcbf7 */
  goto L_4fcbf7;
L_4fcbf2: /* 4fcbf2: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_4fcbf7: /* 4fcbf7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fcbf9: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fcbfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fcbfc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fcbfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fcbfe: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fcc03u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fcc03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fcc06: /* 4fcc06: lea ebp, [ebx + 0x34] */
  ebp = (uint32_t)(ebx + 0x34u);
/* 4fcc09: lea esi, [edi + 0x34] */
  esi = (uint32_t)(edi + 0x34u);
/* 4fcc0c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fcc0e: je 0x4fcc4a */
  if (zf) goto L_4fcc4a;
L_4fcc10: /* 4fcc10: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fcc13: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fcc15: mov ecx, esi */
  ecx = esi;
/* 4fcc17: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fcc1a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fcc1d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fcc22u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fcc22: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fcc25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcc27: je 0x4fcc4a */
  if (zf) goto L_4fcc4a;
L_4fcc29: /* 4fcc29: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fcc2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcc2e: je 0x4fcc35 */
  if (zf) goto L_4fcc35;
L_4fcc30: /* 4fcc30: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 4fcc33: jmp 0x4fcc3a */
  goto L_4fcc3a;
L_4fcc35: /* 4fcc35: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_4fcc3a: /* 4fcc3a: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 4fcc3d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fcc3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fcc40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fcc41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fcc42: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fcc47u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fcc47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fcc4a: /* 4fcc4a: lea ebp, [ebx + 0x40] */
  ebp = (uint32_t)(ebx + 0x40u);
/* 4fcc4d: lea esi, [edi + 0x40] */
  esi = (uint32_t)(edi + 0x40u);
/* 4fcc50: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fcc52: je 0x4fcc8e */
  if (zf) goto L_4fcc8e;
L_4fcc54: /* 4fcc54: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fcc57: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fcc59: mov ecx, esi */
  ecx = esi;
/* 4fcc5b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fcc5e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fcc61: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fcc66u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fcc66: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fcc69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcc6b: je 0x4fcc8e */
  if (zf) goto L_4fcc8e;
L_4fcc6d: /* 4fcc6d: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fcc70: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcc72: je 0x4fcc79 */
  if (zf) goto L_4fcc79;
L_4fcc74: /* 4fcc74: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 4fcc77: jmp 0x4fcc7e */
  goto L_4fcc7e;
L_4fcc79: /* 4fcc79: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_4fcc7e: /* 4fcc7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4fcc80: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 4fcc83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fcc84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fcc85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fcc86: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fcc8bu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fcc8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fcc8e: /* 4fcc8e: lea ebp, [ebx + 0x4c] */
  ebp = (uint32_t)(ebx + 0x4cu);
/* 4fcc91: lea esi, [edi + 0x4c] */
  esi = (uint32_t)(edi + 0x4cu);
/* 4fcc94: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fcc96: je 0x4fccd1 */
  if (zf) goto L_4fccd1;
L_4fcc98: /* 4fcc98: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4fcc9b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fcc9d: mov ecx, esi */
  ecx = esi;
/* 4fcc9f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fcca2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fcca5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fccaau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fccaa: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fccad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fccaf: je 0x4fccd1 */
  if (zf) goto L_4fccd1;
L_4fccb1: /* 4fccb1: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4fccb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fccb6: je 0x4fccbd */
  if (zf) goto L_4fccbd;
L_4fccb8: /* 4fccb8: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 4fccbb: jmp 0x4fccc2 */
  goto L_4fccc2;
L_4fccbd: /* 4fccbd: mov ebp, 0x5ed66c */
  ebp = 0x5ed66cu;
L_4fccc2: /* 4fccc2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4fccc4: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fccc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fccc7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4fccc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fccc9: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fccceu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fccce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fccd1: /* 4fccd1: mov eax, ebx */
  eax = ebx;
/* 4fccd3: lea edx, [ebx + 0x58] */
  edx = (uint32_t)(ebx + 0x58u);
/* 4fccd6: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4fccd8: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 4fccdc: lea esi, [edi + 0x5c] */
  esi = (uint32_t)(edi + 0x5cu);
/* 4fccdf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4fcce3: mov dword ptr [esp + 0x14], 0x10 */
  W32((uint32_t)(esp + 0x14u), 0x10u);
/* 4fcceb: jmp 0x4fccf1 */
  goto L_4fccf1;
L_4fcced: /* 4fcced: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_4fccf1: /* 4fccf1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4fccf5: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* 4fccf8: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fccfa: je 0x4fcd3e */
  if (zf) goto L_4fcd3e;
L_4fccfc: /* 4fccfc: mov eax, dword ptr [eax + esi] */
  eax = R32((uint32_t)(eax + esi));
/* 4fccff: lea ebp, [esi - 4] */
  ebp = (uint32_t)(esi + 0xfffffffcu);
/* 4fcd02: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fcd04: mov ecx, ebp */
  ecx = ebp;
/* 4fcd06: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fcd09: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4fcd0b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fcd10u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fcd10: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fcd12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcd14: je 0x4fcd3e */
  if (zf) goto L_4fcd3e;
L_4fcd16: /* 4fcd16: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4fcd1a: cmp dword ptr [edx + esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fcd1e: je 0x4fcd28 */
  if (zf) goto L_4fcd28;
L_4fcd20: /* 4fcd20: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4fcd24: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4fcd26: jmp 0x4fcd2d */
  goto L_4fcd2d;
L_4fcd28: /* 4fcd28: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_4fcd2d: /* 4fcd2d: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 4fcd30: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 4fcd33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fcd34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fcd35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fcd36: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fcd3bu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fcd3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fcd3e: /* 4fcd3e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4fcd42: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4fcd46: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4fcd49: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4fcd4c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4fcd4d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 4fcd51: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4fcd55: jne 0x4fcced */
  if (!zf) goto L_4fcced;
L_4fcd57: /* 4fcd57: lea ecx, [ebx + 0x118] */
  ecx = (uint32_t)(ebx + 0x118u);
/* 4fcd5d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 4fcd61: lea esi, [edi + 0x11c] */
  esi = (uint32_t)(edi + 0x11cu);
/* 4fcd67: mov dword ptr [esp + 0x14], 0x10 */
  W32((uint32_t)(esp + 0x14u), 0x10u);
/* 4fcd6f: nop  */
L_4fcd70: /* 4fcd70: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4fcd74: lea edx, [esi - 4] */
  edx = (uint32_t)(esi + 0xfffffffcu);
/* 4fcd77: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fcd79: je 0x4fcdc0 */
  if (zf) goto L_4fcdc0;
L_4fcd7b: /* 4fcd7b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4fcd7f: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 4fcd82: lea ebp, [esi - 4] */
  ebp = (uint32_t)(esi + 0xfffffffcu);
/* 4fcd85: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fcd87: mov ecx, ebp */
  ecx = ebp;
/* 4fcd89: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fcd8c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4fcd8e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fcd93u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fcd93: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fcd95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcd97: je 0x4fcdc0 */
  if (zf) goto L_4fcdc0;
L_4fcd99: /* 4fcd99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4fcd9d: cmp dword ptr [esi + ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fcda1: je 0x4fcdab */
  if (zf) goto L_4fcdab;
L_4fcda3: /* 4fcda3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4fcda7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 4fcda9: jmp 0x4fcdb0 */
  goto L_4fcdb0;
L_4fcdab: /* 4fcdab: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_4fcdb0: /* 4fcdb0: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fcdb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fcdb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fcdb4: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 4fcdb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fcdb8: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fcdbdu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fcdbd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fcdc0: /* 4fcdc0: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 4fcdc4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4fcdc8: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4fcdcb: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4fcdce: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4fcdcf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 4fcdd3: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4fcdd7: jne 0x4fcd70 */
  if (!zf) goto L_4fcd70;
L_4fcdd9: /* 4fcdd9: mov ecx, dword ptr [ebx + 0x1d8] */
  ecx = R32((uint32_t)(ebx + 0x1d8u));
/* 4fcddf: mov edx, dword ptr [edi + 0x1d8] */
  edx = R32((uint32_t)(edi + 0x1d8u));
/* 4fcde5: mov ebp, dword ptr [edi + 0x1d8] */
  ebp = R32((uint32_t)(edi + 0x1d8u));
/* 4fcdeb: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 4fcded: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4fcdf0: xor ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebp = r;
  }
/* 4fcdf2: mov dword ptr [edi + 0x1d8], ebp */
  W32((uint32_t)(edi + 0x1d8u), ebp);
/* 4fcdf8: mov eax, dword ptr [ebx + 0x1d8] */
  eax = R32((uint32_t)(ebx + 0x1d8u));
/* 4fcdfe: mov ecx, ebp */
  ecx = ebp;
/* 4fce00: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fce02: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fce05: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fce07: mov dword ptr [edi + 0x1d8], eax */
  W32((uint32_t)(edi + 0x1d8u), eax);
/* 4fce0d: mov ecx, dword ptr [ebx + 0x1d8] */
  ecx = R32((uint32_t)(ebx + 0x1d8u));
/* 4fce13: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fce15: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4fce18: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fce1a: mov dword ptr [edi + 0x1d8], ecx */
  W32((uint32_t)(edi + 0x1d8u), ecx);
/* 4fce20: mov eax, dword ptr [ebx + 0x1d8] */
  eax = R32((uint32_t)(ebx + 0x1d8u));
/* 4fce26: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fce28: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fce2b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fce2d: mov dword ptr [edi + 0x1d8], eax */
  W32((uint32_t)(edi + 0x1d8u), eax);
/* 4fce33: mov ecx, dword ptr [ebx + 0x1d8] */
  ecx = R32((uint32_t)(ebx + 0x1d8u));
/* 4fce39: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fce3b: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4fce3e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fce40: mov dword ptr [edi + 0x1d8], ecx */
  W32((uint32_t)(edi + 0x1d8u), ecx);
/* 4fce46: mov eax, dword ptr [ebx + 0x1d8] */
  eax = R32((uint32_t)(ebx + 0x1d8u));
/* 4fce4c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fce4e: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4fce51: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4fce53: mov dword ptr [edi + 0x1d8], eax */
  W32((uint32_t)(edi + 0x1d8u), eax);
/* 4fce59: mov ecx, dword ptr [ebx + 0x1d8] */
  ecx = R32((uint32_t)(ebx + 0x1d8u));
/* 4fce5f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fce61: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4fce64: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4fce66: mov dword ptr [edi + 0x1d8], ecx */
  W32((uint32_t)(edi + 0x1d8u), ecx);
/* 4fce6c: mov eax, edi */
  eax = edi;
/* 4fce6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fce6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fce70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4fce71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fce72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fce75: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fcf40(void) {
  LOAD_REGS();
L_4fcf40: /* 4fcf40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fcf41: mov esi, ecx */
  esi = ecx;
/* 4fcf43: call 0x4e189d */
  esp -= 4; W32(esp, 0x4fcf48u); SPILL(); f_4e189d(); if (g_unwind) return; RELOAD();
/* 4fcf48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcf4d: je 0x4fcf5d */
  if (zf) goto L_4fcf5d;
L_4fcf4f: /* 4fcf4f: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* 4fcf54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fcf55: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fcf5au); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fcf5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fcf5d: /* 4fcf5d: mov eax, esi */
  eax = esi;
/* 4fcf5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fcf60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fcf80(void) {
  LOAD_REGS();
L_4fcf80: /* 4fcf80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fcf81: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fcf85: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcf88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fcf89: mov esi, ecx */
  esi = ecx;
/* 4fcf8b: je 0x4fcfbe */
  if (zf) goto L_4fcfbe;
L_4fcf8d: /* 4fcf8d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fcf90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fcf91: push 0x4e189d */
  { uint32_t v = 0x4e189du; esp -= 4; W32(esp, v); }
/* 4fcf96: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fcf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fcf9a: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* 4fcf9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fcfa0: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fcfa5u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fcfa5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcfa8: je 0x4fcfb6 */
  if (zf) goto L_4fcfb6;
L_4fcfaa: /* 4fcfaa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fcfb0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fcfb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fcfb3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fcfb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fcfb6: /* 4fcfb6: mov eax, edi */
  eax = edi;
/* 4fcfb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fcfb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fcfba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fcfbb: ret 4 */
  esp += 8; SPILL(); return;
L_4fcfbe: /* 4fcfbe: mov ecx, esi */
  ecx = esi;
/* 4fcfc0: call 0x4e189d */
  esp -= 4; W32(esp, 0x4fcfc5u); SPILL(); f_4e189d(); if (g_unwind) return; RELOAD();
/* 4fcfc5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fcfc8: je 0x4fcfd8 */
  if (zf) goto L_4fcfd8;
L_4fcfca: /* 4fcfca: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* 4fcfcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fcfd0: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fcfd5u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fcfd5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fcfd8: /* 4fcfd8: mov eax, esi */
  eax = esi;
/* 4fcfda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fcfdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fcfdc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd000(void) {
  LOAD_REGS();
L_4fd000: /* 4fd000: mov eax, ecx */
  eax = ecx;
/* 4fd002: xor ecx, ecx */
  ecx = 0;
/* 4fd004: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4fd006: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4fd009: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4fd00c: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd020(void) {
  LOAD_REGS();
L_4fd020: /* 4fd020: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_4fd040(void) {
  LOAD_REGS();
L_4fd040: /* 4fd040: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fd042: push 0x555b93 */
  { uint32_t v = 0x555b93u; esp -= 4; W32(esp, v); }
/* 4fd047: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fd04d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd04e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fd055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fd056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd057: mov esi, ecx */
  esi = ecx;
/* 4fd059: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fd05d: mov dword ptr [esi], 0x569750 */
  W32((uint32_t)(esi), 0x569750u);
/* 4fd063: mov dword ptr [esi + 0x28], 0x569744 */
  W32((uint32_t)(esi + 0x28u), 0x569744u);
/* 4fd06a: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 4fd072: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fd077u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fd077: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fd07a: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fd07f: call 0x4e1217 */
  esp -= 4; W32(esp, 0x4fd084u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 4fd084: mov ecx, esi */
  ecx = esi;
/* 4fd086: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fd08e: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x4fd093u); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 4fd093: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fd097: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd098: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fd09f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fd0a2: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd0d0(void) {
  LOAD_REGS();
L_4fd0d0: /* 4fd0d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fd0d2: push 0x555bb8 */
  { uint32_t v = 0x555bb8u; esp -= 4; W32(esp, v); }
/* 4fd0d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fd0dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd0de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fd0e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fd0e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd0e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd0e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fd0ec: mov esi, ecx */
  esi = ecx;
/* 4fd0ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd0ef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fd0f3: call 0x4e1078 */
  esp -= 4; W32(esp, 0x4fd0f8u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 4fd0f8: mov dword ptr [esi + 0x28], 0x56901c */
  W32((uint32_t)(esi + 0x28u), 0x56901cu);
/* 4fd0ff: mov dword ptr [esi], 0x569750 */
  W32((uint32_t)(esi), 0x569750u);
/* 4fd105: mov dword ptr [esi + 0x28], 0x569744 */
  W32((uint32_t)(esi + 0x28u), 0x569744u);
/* 4fd10c: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 4fd10f: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 4fd112: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 4fd115: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4fd118: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 4fd11b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd11c: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fd11f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fd127: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x4fd12cu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 4fd12c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fd130: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd131: mov eax, esi */
  eax = esi;
/* 4fd133: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd134: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fd13b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fd13e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd170(void) {
  LOAD_REGS();
L_4fd170: /* 4fd170: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fd171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd172: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fd176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd177: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd178: mov edi, ecx */
  edi = ecx;
/* 4fd17a: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x4fd17fu); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 4fd17f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 4fd182: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
/* 4fd185: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 4fd188: lea ebx, [esi + 0x34] */
  ebx = (uint32_t)(esi + 0x34u);
/* 4fd18b: lea esi, [edi + 0x34] */
  esi = (uint32_t)(edi + 0x34u);
/* 4fd18e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4fd190: mov dword ptr [edi + 0x30], ecx */
  W32((uint32_t)(edi + 0x30u), ecx);
/* 4fd193: je 0x4fd1ce */
  if (zf) goto L_4fd1ce;
L_4fd195: /* 4fd195: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 4fd198: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4fd19a: mov ecx, esi */
  ecx = esi;
/* 4fd19c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4fd19f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4fd1a2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4fd1a7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4fd1a7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4fd1aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd1ac: je 0x4fd1ce */
  if (zf) goto L_4fd1ce;
L_4fd1ae: /* 4fd1ae: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4fd1b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd1b3: je 0x4fd1b9 */
  if (zf) goto L_4fd1b9;
L_4fd1b5: /* 4fd1b5: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 4fd1b7: jmp 0x4fd1be */
  goto L_4fd1be;
L_4fd1b9: /* 4fd1b9: mov ebx, 0x5ed66c */
  ebx = 0x5ed66cu;
L_4fd1be: /* 4fd1be: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 4fd1c1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4fd1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fd1c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fd1c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd1c6: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4fd1cbu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4fd1cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fd1ce: /* 4fd1ce: mov eax, edi */
  eax = edi;
/* 4fd1d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd1d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd1d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd1d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd200(void) {
  LOAD_REGS();
L_4fd200: /* 4fd200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd201: mov esi, ecx */
  esi = ecx;
/* 4fd203: call 0x4e2dbf */
  esp -= 4; W32(esp, 0x4fd208u); SPILL(); f_4e2dbf(); if (g_unwind) return; RELOAD();
/* 4fd208: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd20d: je 0x4fd21a */
  if (zf) goto L_4fd21a;
L_4fd20f: /* 4fd20f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fd211: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd212: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fd217u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fd217: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fd21a: /* 4fd21a: mov eax, esi */
  eax = esi;
/* 4fd21c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd21d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd230(void) {
  LOAD_REGS();
L_4fd230: /* 4fd230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fd231: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fd235: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd239: mov esi, ecx */
  esi = ecx;
/* 4fd23b: je 0x4fd26b */
  if (zf) goto L_4fd26b;
L_4fd23d: /* 4fd23d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fd240: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd241: push 0x4e2dbf */
  { uint32_t v = 0x4e2dbfu; esp -= 4; W32(esp, v); }
/* 4fd246: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fd249: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd24a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fd24c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd24d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fd252u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fd252: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd255: je 0x4fd263 */
  if (zf) goto L_4fd263;
L_4fd257: /* 4fd257: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fd25d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fd25f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd260: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fd263u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fd263: /* 4fd263: mov eax, edi */
  eax = edi;
/* 4fd265: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd266: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd267: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd268: ret 4 */
  esp += 8; SPILL(); return;
L_4fd26b: /* 4fd26b: mov ecx, esi */
  ecx = esi;
/* 4fd26d: call 0x4e2dbf */
  esp -= 4; W32(esp, 0x4fd272u); SPILL(); f_4e2dbf(); if (g_unwind) return; RELOAD();
/* 4fd272: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd275: je 0x4fd282 */
  if (zf) goto L_4fd282;
L_4fd277: /* 4fd277: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fd279: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd27a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fd27fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fd27f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fd282: /* 4fd282: mov eax, esi */
  eax = esi;
/* 4fd284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd286: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd2b0(void) {
  LOAD_REGS();
L_4fd2b0: /* 4fd2b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fd2b2: push 0x555be3 */
  { uint32_t v = 0x555be3u; esp -= 4; W32(esp, v); }
/* 4fd2b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fd2bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd2be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fd2c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fd2c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd2c7: mov esi, ecx */
  esi = ecx;
/* 4fd2c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fd2cd: mov dword ptr [esi], 0x5697d0 */
  W32((uint32_t)(esi), 0x5697d0u);
/* 4fd2d3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 4fd2db: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fd2e0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fd2e0: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 4fd2e3: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fd2e8: call 0x4e33c8 */
  esp -= 4; W32(esp, 0x4fd2edu); SPILL(); f_4e33c8(); if (g_unwind) return; RELOAD();
/* 4fd2ed: mov ecx, esi */
  ecx = esi;
/* 4fd2ef: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fd2f7: call 0x4e3a9e */
  esp -= 4; W32(esp, 0x4fd2fcu); SPILL(); f_4e3a9e(); if (g_unwind) return; RELOAD();
/* 4fd2fc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fd300: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd301: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fd308: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fd30b: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd330(void) {
  LOAD_REGS();
L_4fd330: /* 4fd330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd331: mov esi, ecx */
  esi = ecx;
/* 4fd333: call 0x4e245a */
  esp -= 4; W32(esp, 0x4fd338u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 4fd338: xor eax, eax */
  eax = 0;
/* 4fd33a: mov dword ptr [esi], 0x5697d0 */
  W32((uint32_t)(esi), 0x5697d0u);
/* 4fd340: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 4fd343: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 4fd346: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 4fd349: mov eax, esi */
  eax = esi;
/* 4fd34b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd34c: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd360(void) {
  LOAD_REGS();
L_4fd360: /* 4fd360: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fd362: push 0x555c08 */
  { uint32_t v = 0x555c08u; esp -= 4; W32(esp, v); }
/* 4fd367: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fd36d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd36e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fd375: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fd376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd377: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd378: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fd37c: mov esi, ecx */
  esi = ecx;
/* 4fd37e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd37f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fd383: call 0x4e1078 */
  esp -= 4; W32(esp, 0x4fd388u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 4fd388: mov dword ptr [esi], 0x5693d8 */
  W32((uint32_t)(esi), 0x5693d8u);
/* 4fd38e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fd391: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fd394: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fd397: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fd39a: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fd39d: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fd3a0: mov dword ptr [esi], 0x5697d0 */
  W32((uint32_t)(esi), 0x5697d0u);
/* 4fd3a6: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 4fd3a9: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4fd3ac: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 4fd3af: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 4fd3b2: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 4fd3b5: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 4fd3b8: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 4fd3bb: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4fd3be: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 4fd3c1: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 4fd3c4: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 4fd3c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fd3c8: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 4fd3cb: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fd3d3: call 0x4e1dd4 */
  esp -= 4; W32(esp, 0x4fd3d8u); SPILL(); f_4e1dd4(); if (g_unwind) return; RELOAD();
/* 4fd3d8: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 4fd3db: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 4fd3de: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 4fd3e1: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 4fd3e4: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 4fd3e7: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 4fd3ea: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 4fd3ed: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 4fd3f0: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 4fd3f3: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 4fd3f6: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 4fd3f9: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 4fd3fc: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4fd3ff: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fd402: add edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4fd405: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 4fd407: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 4fd40a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4fd40c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4fd40f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 4fd412: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 4fd415: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4fd418: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 4fd41b: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 4fd41e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fd422: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd423: mov eax, esi */
  eax = esi;
/* 4fd425: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd426: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fd42d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fd430: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd480(void) {
  LOAD_REGS();
L_4fd480: /* 4fd480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd481: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd482: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fd486: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd487: mov esi, ecx */
  esi = ecx;
/* 4fd489: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x4fd48eu); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 4fd48e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fd491: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fd494: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fd497: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fd49a: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fd49d: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fd4a0: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 4fd4a3: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4fd4a6: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 4fd4a9: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 4fd4ac: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 4fd4af: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 4fd4b2: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 4fd4b5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4fd4b8: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 4fd4bb: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 4fd4be: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 4fd4c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4fd4c2: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 4fd4c5: call 0x4e2185 */
  esp -= 4; W32(esp, 0x4fd4cau); SPILL(); f_4e2185(); if (g_unwind) return; RELOAD();
/* 4fd4ca: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 4fd4cd: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 4fd4d0: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 4fd4d3: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 4fd4d6: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 4fd4d9: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 4fd4dc: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 4fd4df: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 4fd4e2: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 4fd4e5: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 4fd4e8: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 4fd4eb: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 4fd4ee: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 4fd4f1: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 4fd4f4: lea eax, [esi + 0x70] */
  eax = (uint32_t)(esi + 0x70u);
/* 4fd4f7: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4fd4f9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4fd4fe: mov edi, edi */
  edi = edi;
L_4fd500: /* 4fd500: mov dl, byte ptr [edi + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 4fd503: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 4fd505: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4fd506: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4fd507: jne 0x4fd500 */
  if (!zf) goto L_4fd500;
L_4fd509: /* 4fd509: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd50a: mov eax, esi */
  eax = esi;
/* 4fd50c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd50d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd540(void) {
  LOAD_REGS();
L_4fd540: /* 4fd540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd541: mov esi, ecx */
  esi = ecx;
/* 4fd543: call 0x4e337d */
  esp -= 4; W32(esp, 0x4fd548u); SPILL(); f_4e337d(); if (g_unwind) return; RELOAD();
/* 4fd548: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd54d: je 0x4fd55d */
  if (zf) goto L_4fd55d;
L_4fd54f: /* 4fd54f: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 4fd554: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd555: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fd55au); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fd55a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fd55d: /* 4fd55d: mov eax, esi */
  eax = esi;
/* 4fd55f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd560: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd580(void) {
  LOAD_REGS();
L_4fd580: /* 4fd580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fd581: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fd585: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd589: mov esi, ecx */
  esi = ecx;
/* 4fd58b: je 0x4fd5be */
  if (zf) goto L_4fd5be;
L_4fd58d: /* 4fd58d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fd590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd591: push 0x4e337d */
  { uint32_t v = 0x4e337du; esp -= 4; W32(esp, v); }
/* 4fd596: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fd599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd59a: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 4fd59f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd5a0: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fd5a5u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fd5a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd5a8: je 0x4fd5b6 */
  if (zf) goto L_4fd5b6;
L_4fd5aa: /* 4fd5aa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fd5b0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fd5b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd5b3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fd5b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fd5b6: /* 4fd5b6: mov eax, edi */
  eax = edi;
/* 4fd5b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd5b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd5ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd5bb: ret 4 */
  esp += 8; SPILL(); return;
L_4fd5be: /* 4fd5be: mov ecx, esi */
  ecx = esi;
/* 4fd5c0: call 0x4e337d */
  esp -= 4; W32(esp, 0x4fd5c5u); SPILL(); f_4e337d(); if (g_unwind) return; RELOAD();
/* 4fd5c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd5c8: je 0x4fd5d8 */
  if (zf) goto L_4fd5d8;
L_4fd5ca: /* 4fd5ca: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 4fd5cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd5d0: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fd5d5u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fd5d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fd5d8: /* 4fd5d8: mov eax, esi */
  eax = esi;
/* 4fd5da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd5db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd5dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd600(void) {
  LOAD_REGS();
L_4fd600: /* 4fd600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fd602: push 0x555c28 */
  { uint32_t v = 0x555c28u; esp -= 4; W32(esp, v); }
/* 4fd607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fd60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd60e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fd615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fd616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd617: mov esi, ecx */
  esi = ecx;
/* 4fd619: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fd61d: mov dword ptr [esi], 0x569888 */
  W32((uint32_t)(esi), 0x569888u);
/* 4fd623: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4fd62b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fd630u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fd630: mov ecx, esi */
  ecx = esi;
/* 4fd632: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fd63a: call 0x4e337d */
  esp -= 4; W32(esp, 0x4fd63fu); SPILL(); f_4e337d(); if (g_unwind) return; RELOAD();
/* 4fd63f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fd643: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd644: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fd64b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fd64e: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd670(void) {
  LOAD_REGS();
L_4fd670: /* 4fd670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd671: mov esi, ecx */
  esi = ecx;
/* 4fd673: call 0x4e245a */
  esp -= 4; W32(esp, 0x4fd678u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 4fd678: xor eax, eax */
  eax = 0;
/* 4fd67a: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 4fd67d: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 4fd680: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 4fd683: mov dword ptr [esi], 0x569888 */
  W32((uint32_t)(esi), 0x569888u);
/* 4fd689: mov eax, esi */
  eax = esi;
/* 4fd68b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd68c: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd6a0(void) {
  LOAD_REGS();
L_4fd6a0: /* 4fd6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd6a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd6a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fd6a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd6a7: mov esi, ecx */
  esi = ecx;
/* 4fd6a9: call 0x4e1492 */
  esp -= 4; W32(esp, 0x4fd6aeu); SPILL(); f_4e1492(); if (g_unwind) return; RELOAD();
/* 4fd6ae: mov dword ptr [esi], 0x569888 */
  W32((uint32_t)(esi), 0x569888u);
/* 4fd6b4: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 4fd6ba: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 4fd6c0: mov cx, word ptr [edi + 0x84] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x84u))) & 0xffffu);
/* 4fd6c7: mov word ptr [esi + 0x84], cx */
  W16((uint32_t)(esi + 0x84u), (ecx & 0xffffu));
/* 4fd6ce: mov dx, word ptr [edi + 0x86] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x86u))) & 0xffffu);
/* 4fd6d5: mov word ptr [esi + 0x86], dx */
  W16((uint32_t)(esi + 0x86u), (edx & 0xffffu));
/* 4fd6dc: mov al, byte ptr [edi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x88u))) & 0xffu);
/* 4fd6e2: mov byte ptr [esi + 0x88], al */
  W8((uint32_t)(esi + 0x88u), (eax & 0xffu));
/* 4fd6e8: mov cl, byte ptr [edi + 0x89] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x89u))) & 0xffu);
/* 4fd6ee: mov byte ptr [esi + 0x89], cl */
  W8((uint32_t)(esi + 0x89u), (ecx & 0xffu));
/* 4fd6f4: mov dx, word ptr [edi + 0x8a] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x8au))) & 0xffffu);
/* 4fd6fb: mov word ptr [esi + 0x8a], dx */
  W16((uint32_t)(esi + 0x8au), (edx & 0xffffu));
/* 4fd702: mov ax, word ptr [edi + 0x8c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x8cu))) & 0xffffu);
/* 4fd709: mov word ptr [esi + 0x8c], ax */
  W16((uint32_t)(esi + 0x8cu), (eax & 0xffffu));
/* 4fd710: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 4fd716: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd717: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 4fd71d: mov eax, esi */
  eax = esi;
/* 4fd71f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd720: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd760(void) {
  LOAD_REGS();
L_4fd760: /* 4fd760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd761: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd762: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fd766: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd767: mov esi, ecx */
  esi = ecx;
/* 4fd769: call 0x4e1db1 */
  esp -= 4; W32(esp, 0x4fd76eu); SPILL(); f_4e1db1(); if (g_unwind) return; RELOAD();
/* 4fd76e: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 4fd774: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 4fd77a: mov cx, word ptr [edi + 0x84] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x84u))) & 0xffffu);
/* 4fd781: mov word ptr [esi + 0x84], cx */
  W16((uint32_t)(esi + 0x84u), (ecx & 0xffffu));
/* 4fd788: mov dx, word ptr [edi + 0x86] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x86u))) & 0xffffu);
/* 4fd78f: mov word ptr [esi + 0x86], dx */
  W16((uint32_t)(esi + 0x86u), (edx & 0xffffu));
/* 4fd796: mov al, byte ptr [edi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x88u))) & 0xffu);
/* 4fd79c: mov byte ptr [esi + 0x88], al */
  W8((uint32_t)(esi + 0x88u), (eax & 0xffu));
/* 4fd7a2: mov cl, byte ptr [edi + 0x89] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x89u))) & 0xffu);
/* 4fd7a8: mov byte ptr [esi + 0x89], cl */
  W8((uint32_t)(esi + 0x89u), (ecx & 0xffu));
/* 4fd7ae: mov dx, word ptr [edi + 0x8a] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x8au))) & 0xffffu);
/* 4fd7b5: mov word ptr [esi + 0x8a], dx */
  W16((uint32_t)(esi + 0x8au), (edx & 0xffffu));
/* 4fd7bc: mov ax, word ptr [edi + 0x8c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x8cu))) & 0xffffu);
/* 4fd7c3: mov word ptr [esi + 0x8c], ax */
  W16((uint32_t)(esi + 0x8cu), (eax & 0xffffu));
/* 4fd7ca: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 4fd7d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd7d1: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 4fd7d7: mov eax, esi */
  eax = esi;
/* 4fd7d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd7da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd800(void) {
  LOAD_REGS();
L_4fd800: /* 4fd800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd801: mov esi, ecx */
  esi = ecx;
/* 4fd803: call 0x4e28dd */
  esp -= 4; W32(esp, 0x4fd808u); SPILL(); f_4e28dd(); if (g_unwind) return; RELOAD();
/* 4fd808: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd80d: je 0x4fd81d */
  if (zf) goto L_4fd81d;
L_4fd80f: /* 4fd80f: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 4fd814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd815: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fd81au); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fd81a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fd81d: /* 4fd81d: mov eax, esi */
  eax = esi;
/* 4fd81f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd820: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd840(void) {
  LOAD_REGS();
L_4fd840: /* 4fd840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fd841: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fd845: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd848: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd849: mov esi, ecx */
  esi = ecx;
/* 4fd84b: je 0x4fd87e */
  if (zf) goto L_4fd87e;
L_4fd84d: /* 4fd84d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fd850: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd851: push 0x4e28dd */
  { uint32_t v = 0x4e28ddu; esp -= 4; W32(esp, v); }
/* 4fd856: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fd859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd85a: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 4fd85f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd860: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fd865u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fd865: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd868: je 0x4fd876 */
  if (zf) goto L_4fd876;
L_4fd86a: /* 4fd86a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fd870: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fd872: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd873: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fd876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fd876: /* 4fd876: mov eax, edi */
  eax = edi;
/* 4fd878: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd879: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd87a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd87b: ret 4 */
  esp += 8; SPILL(); return;
L_4fd87e: /* 4fd87e: mov ecx, esi */
  ecx = esi;
/* 4fd880: call 0x4e28dd */
  esp -= 4; W32(esp, 0x4fd885u); SPILL(); f_4e28dd(); if (g_unwind) return; RELOAD();
/* 4fd885: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fd888: je 0x4fd898 */
  if (zf) goto L_4fd898;
L_4fd88a: /* 4fd88a: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 4fd88f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd890: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fd895u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fd895: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fd898: /* 4fd898: mov eax, esi */
  eax = esi;
/* 4fd89a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd89b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd89c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fd8c0(void) {
  LOAD_REGS();
L_4fd8c0: /* 4fd8c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fd8c2: push 0x555c48 */
  { uint32_t v = 0x555c48u; esp -= 4; W32(esp, v); }
/* 4fd8c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fd8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fd8ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fd8d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fd8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd8d7: mov esi, ecx */
  esi = ecx;
/* 4fd8d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fd8dd: mov dword ptr [esi], 0x569940 */
  W32((uint32_t)(esi), 0x569940u);
/* 4fd8e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 4fd8eb: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fd8f0u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fd8f0: mov ecx, esi */
  ecx = esi;
/* 4fd8f2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fd8fa: call 0x4e337d */
  esp -= 4; W32(esp, 0x4fd8ffu); SPILL(); f_4e337d(); if (g_unwind) return; RELOAD();
/* 4fd8ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fd903: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd904: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fd90b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fd90e: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd930(void) {
  LOAD_REGS();
L_4fd930: /* 4fd930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd931: mov esi, ecx */
  esi = ecx;
/* 4fd933: call 0x4e245a */
  esp -= 4; W32(esp, 0x4fd938u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 4fd938: xor eax, eax */
  eax = 0;
/* 4fd93a: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 4fd93d: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 4fd940: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 4fd943: mov dword ptr [esi], 0x569940 */
  W32((uint32_t)(esi), 0x569940u);
/* 4fd949: mov eax, esi */
  eax = esi;
/* 4fd94b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd94c: ret  */
  esp += 4; SPILL(); return;
}

void f_4fd960(void) {
  LOAD_REGS();
L_4fd960: /* 4fd960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fd961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd962: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4fd966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fd967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fd968: mov ebx, ecx */
  ebx = ecx;
/* 4fd96a: call 0x4e1492 */
  esp -= 4; W32(esp, 0x4fd96fu); SPILL(); f_4e1492(); if (g_unwind) return; RELOAD();
/* 4fd96f: mov dword ptr [ebx], 0x569940 */
  W32((uint32_t)(ebx), 0x569940u);
/* 4fd975: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 4fd97b: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 4fd981: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 4fd987: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 4fd98d: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 4fd993: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 4fd999: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 4fd99f: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 4fd9a5: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 4fd9ab: mov dword ptr [ebx + 0x90], ecx */
  W32((uint32_t)(ebx + 0x90u), ecx);
/* 4fd9b1: mov dx, word ptr [esi + 0x94] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x94u))) & 0xffffu);
/* 4fd9b8: add esi, 0x98 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4fd9be: lea edi, [ebx + 0x98] */
  edi = (uint32_t)(ebx + 0x98u);
/* 4fd9c4: mov word ptr [ebx + 0x94], dx */
  W16((uint32_t)(ebx + 0x94u), (edx & 0xffffu));
/* 4fd9cb: mov ecx, 0x100 */
  ecx = 0x100u;
/* 4fd9d0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4fd9d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fd9d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fd9d4: mov eax, ebx */
  eax = ebx;
/* 4fd9d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fd9d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fda00(void) {
  LOAD_REGS();
L_4fda00: /* 4fda00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fda01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fda02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fda06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fda07: mov esi, ecx */
  esi = ecx;
/* 4fda09: call 0x4e1db1 */
  esp -= 4; W32(esp, 0x4fda0eu); SPILL(); f_4e1db1(); if (g_unwind) return; RELOAD();
/* 4fda0e: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 4fda14: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 4fda1a: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 4fda20: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 4fda26: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 4fda2c: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 4fda32: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 4fda38: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 4fda3e: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 4fda44: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 4fda4a: mov dx, word ptr [edi + 0x94] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x94u))) & 0xffffu);
/* 4fda51: mov word ptr [esi + 0x94], dx */
  W16((uint32_t)(esi + 0x94u), (edx & 0xffffu));
/* 4fda58: lea eax, [esi + 0x98] */
  eax = (uint32_t)(esi + 0x98u);
/* 4fda5e: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4fda60: mov ecx, 0x100 */
  ecx = 0x100u;
L_4fda65: /* 4fda65: mov edx, dword ptr [edi + eax] */
  edx = R32((uint32_t)(edi + eax));
/* 4fda68: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4fda6a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4fda6d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4fda6e: jne 0x4fda65 */
  if (!zf) goto L_4fda65;
L_4fda70: /* 4fda70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fda71: mov eax, esi */
  eax = esi;
/* 4fda73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fda74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fdaa0(void) {
  LOAD_REGS();
L_4fdaa0: /* 4fdaa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdaa1: mov esi, ecx */
  esi = ecx;
/* 4fdaa3: call 0x4e2cfc */
  esp -= 4; W32(esp, 0x4fdaa8u); SPILL(); f_4e2cfc(); if (g_unwind) return; RELOAD();
/* 4fdaa8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdaad: je 0x4fdabd */
  if (zf) goto L_4fdabd;
L_4fdaaf: /* 4fdaaf: push 0x498 */
  { uint32_t v = 0x498u; esp -= 4; W32(esp, v); }
/* 4fdab4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdab5: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fdabau); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fdaba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fdabd: /* 4fdabd: mov eax, esi */
  eax = esi;
/* 4fdabf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdac0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fdae0(void) {
  LOAD_REGS();
L_4fdae0: /* 4fdae0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fdae1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fdae5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdae8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdae9: mov esi, ecx */
  esi = ecx;
/* 4fdaeb: je 0x4fdb1e */
  if (zf) goto L_4fdb1e;
L_4fdaed: /* 4fdaed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fdaf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdaf1: push 0x4e2cfc */
  { uint32_t v = 0x4e2cfcu; esp -= 4; W32(esp, v); }
/* 4fdaf6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fdaf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fdafa: push 0x498 */
  { uint32_t v = 0x498u; esp -= 4; W32(esp, v); }
/* 4fdaff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdb00: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fdb05u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fdb05: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdb08: je 0x4fdb16 */
  if (zf) goto L_4fdb16;
L_4fdb0a: /* 4fdb0a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fdb10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fdb12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdb13: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fdb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fdb16: /* 4fdb16: mov eax, edi */
  eax = edi;
/* 4fdb18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fdb19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdb1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fdb1b: ret 4 */
  esp += 8; SPILL(); return;
L_4fdb1e: /* 4fdb1e: mov ecx, esi */
  ecx = esi;
/* 4fdb20: call 0x4e2cfc */
  esp -= 4; W32(esp, 0x4fdb25u); SPILL(); f_4e2cfc(); if (g_unwind) return; RELOAD();
/* 4fdb25: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdb28: je 0x4fdb38 */
  if (zf) goto L_4fdb38;
L_4fdb2a: /* 4fdb2a: push 0x498 */
  { uint32_t v = 0x498u; esp -= 4; W32(esp, v); }
/* 4fdb2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdb30: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fdb35u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fdb35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fdb38: /* 4fdb38: mov eax, esi */
  eax = esi;
/* 4fdb3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdb3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fdb3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fdb60(void) {
  LOAD_REGS();
L_4fdb60: /* 4fdb60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fdb62: push 0x555c73 */
  { uint32_t v = 0x555c73u; esp -= 4; W32(esp, v); }
/* 4fdb67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fdb6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fdb6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fdb75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fdb76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdb77: mov esi, ecx */
  esi = ecx;
/* 4fdb79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4fdb7d: mov dword ptr [esi], 0x5699f8 */
  W32((uint32_t)(esi), 0x5699f8u);
/* 4fdb83: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 4fdb8b: call 0x4e2559 */
  esp -= 4; W32(esp, 0x4fdb90u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 4fdb90: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fdb93: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 4fdb98: call 0x4e2892 */
  esp -= 4; W32(esp, 0x4fdb9du); SPILL(); f_4e2892(); if (g_unwind) return; RELOAD();
/* 4fdb9d: mov ecx, esi */
  ecx = esi;
/* 4fdb9f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 4fdba7: call 0x4e3a9e */
  esp -= 4; W32(esp, 0x4fdbacu); SPILL(); f_4e3a9e(); if (g_unwind) return; RELOAD();
/* 4fdbac: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4fdbb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdbb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fdbb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fdbbb: ret  */
  esp += 4; SPILL(); return;
}

void f_4fdbe0(void) {
  LOAD_REGS();
L_4fdbe0: /* 4fdbe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdbe1: mov esi, ecx */
  esi = ecx;
/* 4fdbe3: call 0x4e245a */
  esp -= 4; W32(esp, 0x4fdbe8u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 4fdbe8: xor eax, eax */
  eax = 0;
/* 4fdbea: mov dword ptr [esi], 0x5699f8 */
  W32((uint32_t)(esi), 0x5699f8u);
/* 4fdbf0: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4fdbf3: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 4fdbf6: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 4fdbf9: mov eax, esi */
  eax = esi;
/* 4fdbfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdbfc: ret  */
  esp += 4; SPILL(); return;
}

void f_4fdc10(void) {
  LOAD_REGS();
L_4fdc10: /* 4fdc10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4fdc12: push 0x555c98 */
  { uint32_t v = 0x555c98u; esp -= 4; W32(esp, v); }
/* 4fdc17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4fdc1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fdc1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4fdc25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4fdc26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdc27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdc28: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 4fdc2c: mov esi, ecx */
  esi = ecx;
/* 4fdc2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdc2f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 4fdc33: call 0x4e1078 */
  esp -= 4; W32(esp, 0x4fdc38u); SPILL(); f_4e1078(); if (g_unwind) return; RELOAD();
/* 4fdc38: mov dword ptr [esi], 0x5693d8 */
  W32((uint32_t)(esi), 0x5693d8u);
/* 4fdc3e: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fdc41: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fdc44: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fdc47: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fdc4a: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fdc4d: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fdc50: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4fdc53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdc54: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fdc57: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4fdc5f: mov dword ptr [esi], 0x5699f8 */
  W32((uint32_t)(esi), 0x5699f8u);
/* 4fdc65: call 0x4e3c3d */
  esp -= 4; W32(esp, 0x4fdc6au); SPILL(); f_4e3c3d(); if (g_unwind) return; RELOAD();
/* 4fdc6a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4fdc6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fdc6f: mov eax, esi */
  eax = esi;
/* 4fdc71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdc72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4fdc79: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4fdc7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fdca0(void) {
  LOAD_REGS();
L_4fdca0: /* 4fdca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdca1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdca2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4fdca6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdca7: mov esi, ecx */
  esi = ecx;
/* 4fdca9: call 0x4e1c67 */
  esp -= 4; W32(esp, 0x4fdcaeu); SPILL(); f_4e1c67(); if (g_unwind) return; RELOAD();
/* 4fdcae: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 4fdcb1: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4fdcb4: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 4fdcb7: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 4fdcba: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 4fdcbd: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4fdcc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdcc1: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 4fdcc4: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 4fdcc7: call 0x4e3062 */
  esp -= 4; W32(esp, 0x4fdcccu); SPILL(); f_4e3062(); if (g_unwind) return; RELOAD();
/* 4fdccc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fdccd: mov eax, esi */
  eax = esi;
/* 4fdccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdcd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fdcf0(void) {
  LOAD_REGS();
L_4fdcf0: /* 4fdcf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdcf1: mov esi, ecx */
  esi = ecx;
/* 4fdcf3: call 0x4e2e69 */
  esp -= 4; W32(esp, 0x4fdcf8u); SPILL(); f_4e2e69(); if (g_unwind) return; RELOAD();
/* 4fdcf8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdcfd: je 0x4fdd0a */
  if (zf) goto L_4fdd0a;
L_4fdcff: /* 4fdcff: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fdd01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdd02: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fdd07u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fdd07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fdd0a: /* 4fdd0a: mov eax, esi */
  eax = esi;
/* 4fdd0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdd0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4fdd20(void) {
  LOAD_REGS();
L_4fdd20: /* 4fdd20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4fdd21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4fdd25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdd28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdd29: mov esi, ecx */
  esi = ecx;
/* 4fdd2b: je 0x4fdd5b */
  if (zf) goto L_4fdd5b;
L_4fdd2d: /* 4fdd2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4fdd30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdd31: push 0x4e2e69 */
  { uint32_t v = 0x4e2e69u; esp -= 4; W32(esp, v); }
/* 4fdd36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4fdd39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4fdd3a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fdd3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdd3d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4fdd42u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4fdd42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdd45: je 0x4fdd53 */
  if (zf) goto L_4fdd53;
L_4fdd47: /* 4fdd47: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4fdd4d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4fdd4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4fdd50: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4fdd53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4fdd53: /* 4fdd53: mov eax, edi */
  eax = edi;
/* 4fdd55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4fdd56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdd57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fdd58: ret 4 */
  esp += 8; SPILL(); return;
L_4fdd5b: /* 4fdd5b: mov ecx, esi */
  ecx = esi;
/* 4fdd5d: call 0x4e2e69 */
  esp -= 4; W32(esp, 0x4fdd62u); SPILL(); f_4e2e69(); if (g_unwind) return; RELOAD();
/* 4fdd62: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4fdd65: je 0x4fdd72 */
  if (zf) goto L_4fdd72;
L_4fdd67: /* 4fdd67: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4fdd69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4fdd6a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x4fdd6fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 4fdd6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4fdd72: /* 4fdd72: mov eax, esi */
  eax = esi;
/* 4fdd74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4fdd75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4fdd76: ret 4 */
  esp += 8; SPILL(); return;
}
