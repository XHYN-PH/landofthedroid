#include "recomp.h"
#include "rec_mod.h"

void f_9713e0(void) {
  LOAD_REGS();
L_9713e0: /* 9713e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9713e4: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9713e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9713e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9713e9: jne 0x971445 */
  if (!zf) goto L_971445;
L_9713eb: /* 9713eb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9713ef: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9713f2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9713f4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9713f7: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 9713fa: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 9713fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971400: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971402: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 971404: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 971406: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 971409: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 97140b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 97140f: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 971411: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971412: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 971414: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 971417: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971418: call 0x970b20 */
  esp -= 4; W32(esp, 0x97141du); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 97141d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 971421: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 971424: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 971428: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 97142b: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 97142f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 971431: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971434: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 971436: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 971437: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971438: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97143a: fchs  */
  ST0 = -ST0;
/* 97143c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 97143e: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 971444: ret  */
  esp += 4; SPILL(); return;
L_971445: /* 971445: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971448: jne 0x9715a1 */
  if (!zf) goto L_9715a1;
L_97144e: /* 97144e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 971452: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 971454: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 971457: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 97145a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 97145d: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 971460: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 971464: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971466: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971468: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 97146b: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 97146e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 971470: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 971473: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 971476: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 971479: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 97147c: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 97147e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 971480: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 971482: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 971485: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 971487: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 97148a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 97148d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 971490: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 971492: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 971494: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 971496: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 971499: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 97149c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 97149e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9714a0: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9714a2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9714a4: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 9714a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9714a9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9714ac: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9714af: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9714b2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9714b5: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9714b7: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9714b9: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9714bb: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9714be: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9714c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9714c3: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9714c5: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9714c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9714ca: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9714cc: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9714ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9714cf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9714d1: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 9714d4: call 0x970b20 */
  esp -= 4; W32(esp, 0x9714d9u); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 9714d9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9714dd: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9714e0: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9714e4: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9714e7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9714ea: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9714ed: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9714f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9714f2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9714f4: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9714f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9714f8: fchs  */
  ST0 = -ST0;
/* 9714fa: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 9714fe: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 971500: mov eax, dword ptr [0xcf8a14] */
  eax = R32((uint32_t)(0xcf8a14u));
/* 971505: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 971509: mov edx, 3 */
  edx = 0x3u;
/* 97150e: mov edi, edi */
  edi = edi;
L_971510: /* 971510: mov eax, dword ptr [esi + edx*4 - 4] */
  eax = R32((uint32_t)(esi + edx*4 + 0xfffffffcu));
/* 971514: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 971515: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971517: je 0x97154d */
  if (zf) goto L_97154d;
L_971519: /* 971519: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 97151c: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 97151f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 971522: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 971525: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 971527: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 971529: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 97152b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97152d: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 971531: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 971535: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 971537: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97153a: je 0x971593 */
  if (zf) goto L_971593;
L_97153c: /* 97153c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 971540: fchs  */
  ST0 = -ST0;
/* 971542: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 971544: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 971546: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 971548: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97154b: jnp 0x971595 */
  if (!pf) goto L_971595;
L_97154d: /* 97154d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97154f: jne 0x971510 */
  if (!zf) goto L_971510;
L_971551: /* 971551: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 971555: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971558: je 0x971590 */
  if (zf) goto L_971590;
L_97155a: /* 97155a: mov ecx, dword ptr [0xcf7994] */
  ecx = R32((uint32_t)(0xcf7994u));
/* 971560: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 971565: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 971566: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971568: mov dword ptr [0xcf7994], ecx */
  W32((uint32_t)(0xcf7994u), ecx);
/* 97156e: je 0x97158a */
  if (zf) goto L_97158a;
L_971570: /* 971570: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 971576: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 97157b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97157c: push 0xb02010 */
  { uint32_t v = 0xb02010u; esp -= 4; W32(esp, v); }
/* 971581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971582: call 0x953470 */
  esp -= 4; W32(esp, 0x971587u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 971587: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97158a: /* 97158a: inc dword ptr [0xcf799c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf799cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf799cu), r);
  }
L_971590: /* 971590: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 971591: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971592: ret  */
  esp += 4; SPILL(); return;
L_971593: /* 971593: fstp st(0) */
  STI(0) = ST0; FPOP();
L_971595: /* 971595: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 971599: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 97159f: jmp 0x97155a */
  goto L_97155a;
L_9715a1: /* 9715a1: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9715a4: jne 0x971551 */
  if (!zf) goto L_971551;
L_9715a6: /* 9715a6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9715aa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9715ac: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9715af: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9715b2: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9715b5: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 9715b8: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 9715bb: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9715be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9715bf: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 9715c2: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 9715c5: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 9715c8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9715cb: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 9715ce: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 9715d1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 9715d4: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 9715d7: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 9715da: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9715de: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 9715e0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9715e2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9715e4: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9715e6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9715e8: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 9715eb: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9715ef: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9715f2: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9715f4: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 9715f6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9715f8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9715fc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9715fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 971600: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 971603: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 971606: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 971608: fsubp st(5) */
  STI(5) = STI(5) - ST0;
  FPOP();
/* 97160a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 97160c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 97160e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 971612: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 971614: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 971616: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 971619: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 97161c: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 97161e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 971620: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 971622: fchs  */
  ST0 = -ST0;
/* 971624: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 971626: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 971628: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97162b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 97162e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 971630: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 971633: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 971635: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 971637: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 97163a: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 97163d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 971640: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 971643: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 971646: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 971649: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 97164c: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 97164f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 971652: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 971655: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 971658: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 97165b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 97165f: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 971661: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 971663: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 971665: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 971667: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 971669: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 97166b: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 97166d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 97166f: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 971671: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 971673: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 971677: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 971679: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97167b: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 97167d: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 97167f: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 971681: fsubp st(5) */
  STI(5) = STI(5) - ST0;
  FPOP();
/* 971683: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 971685: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 971687: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97168b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 97168d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97168f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 971691: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 971693: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 971695: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 971697: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 971699: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 97169c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97169e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9716a0: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9716a3: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 9716a5: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9716a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9716aa: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 9716ad: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9716b0: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 9716b3: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9716b6: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9716b9: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 9716bc: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 9716bf: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9716c2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9716c5: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 9716c8: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9716cb: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 9716ce: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 9716d1: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9716d5: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 9716d7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9716d9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9716db: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9716dd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9716df: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 9716e1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9716e3: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9716e5: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 9716e7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9716e9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9716eb: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9716ef: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9716f1: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9716f3: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9716f5: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 9716f7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9716f9: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* 9716fb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9716fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9716ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971701: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 971705: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971707: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 971709: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97170b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 97170d: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 97170f: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 971711: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 971713: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 971715: fchs  */
  ST0 = -ST0;
/* 971717: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 97171a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97171c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97171f: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 971721: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 971724: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 971726: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 971729: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 97172c: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 97172f: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 971732: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 971735: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 971738: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 97173b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 97173e: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 971741: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 971744: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 971747: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 97174a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 97174d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 971751: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 971753: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 971755: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 971757: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 971759: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97175b: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 97175d: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 97175f: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 971761: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 971763: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 971765: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 971767: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 97176b: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 97176d: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 97176f: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 971773: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 971775: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971776: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 971778: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 97177a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 97177c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97177d: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* 97177f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 971781: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 971785: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 971787: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 971789: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 97178b: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 97178d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 97178f: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 971791: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 971793: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 971796: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 971798: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97179a: call 0x970b20 */
  esp -= 4; W32(esp, 0x97179fu); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 97179f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9717a2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9717a6: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9717a9: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 9717ac: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9717af: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9717b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9717b4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9717b7: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9717ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9717bc: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9717be: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9717c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9717c2: fchs  */
  ST0 = -ST0;
/* 9717c4: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 9717c8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9717cc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9717ce: mov edx, dword ptr [0xcf8a14] */
  edx = R32((uint32_t)(0xcf8a14u));
/* 9717d4: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9717d8: mov edx, 4 */
  edx = 0x4u;
/* 9717dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9717de: mov edi, edi */
  edi = edi;
L_9717e0: /* 9717e0: mov eax, dword ptr [esi + edx*4 - 4] */
  eax = R32((uint32_t)(esi + edx*4 + 0xfffffffcu));
/* 9717e4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 9717e5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9717e7: je 0x971825 */
  if (zf) goto L_971825;
L_9717e9: /* 9717e9: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 9717ec: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 9717ef: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9717f2: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9717f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9717f7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9717fa: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9717fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9717ff: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 971801: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 971803: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 971805: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 971809: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 97180d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97180f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 971812: je 0x97182e */
  if (zf) goto L_97182e;
L_971814: /* 971814: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 971818: fchs  */
  ST0 = -ST0;
/* 97181a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 97181c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 97181e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 971820: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 971823: jnp 0x971830 */
  if (!pf) goto L_971830;
L_971825: /* 971825: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971827: jne 0x9717e0 */
  if (!zf) goto L_9717e0;
L_971829: /* 971829: jmp 0x971551 */
  goto L_971551;
L_97182e: /* 97182e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_971830: /* 971830: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 971834: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 97183a: jmp 0x97155a */
  goto L_97155a;
}

void f_971840(void) {
  LOAD_REGS();
L_971840: /* 971840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971841: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 971845: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 971846: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 97184a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97184b: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 97184f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971850: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 971854: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971855: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971856: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 97185a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97185b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97185c: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 97185f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 971861: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 971865: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 97186d: call 0x970600 */
  esp -= 4; W32(esp, 0x971872u); SPILL(); f_970600(); if (g_unwind) return; RELOAD();
/* 971872: mov ecx, edi */
  ecx = edi;
/* 971874: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971877: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971879: je 0x97189f */
  if (zf) goto L_97189f;
L_97187b: /* 97187b: nop  */
/* 97187c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_971880: /* 971880: mov edx, dword ptr [ebp + ecx*4 - 4] */
  edx = R32((uint32_t)(ebp + ecx*4 + 0xfffffffcu));
/* 971884: fld dword ptr [edx + ecx*4 - 4] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 971888: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 971889: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 97188f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 971891: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 971894: jp 0x97189b */
  if (pf) goto L_97189b;
L_971896: /* 971896: xor dword ptr [esp + 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(esp + 0x24u), r);
  }
L_97189b: /* 97189b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97189d: jne 0x971880 */
  if (!zf) goto L_971880;
L_97189f: /* 97189f: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9718a2: je 0x9718f0 */
  if (zf) goto L_9718f0;
L_9718a4: /* 9718a4: mov ecx, dword ptr [0xcf799c] */
  ecx = R32((uint32_t)(0xcf799cu));
/* 9718aa: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9718af: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9718b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9718b2: mov dword ptr [0xcf799c], ecx */
  W32((uint32_t)(0xcf799cu), ecx);
/* 9718b8: je 0x9718d4 */
  if (zf) goto L_9718d4;
L_9718ba: /* 9718ba: mov eax, dword ptr [0xcf8bac] */
  eax = R32((uint32_t)(0xcf8bacu));
/* 9718bf: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9718c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9718c6: push 0xb020a8 */
  { uint32_t v = 0xb020a8u; esp -= 4; W32(esp, v); }
/* 9718cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9718cc: call 0x953470 */
  esp -= 4; W32(esp, 0x9718d1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9718d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9718d4: /* 9718d4: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9718d8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9718dc: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9718e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9718e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9718e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9718e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9718e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9718e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9718e6: call 0x96f8e0 */
  esp -= 4; W32(esp, 0x9718ebu); SPILL(); f_96f8e0(); if (g_unwind) return; RELOAD();
/* 9718eb: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9718ee: jmp 0x971942 */
  goto L_971942;
L_9718f0: /* 9718f0: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9718f4: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9718f8: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9718fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9718fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9718fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9718ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 971900: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971901: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 971902: call 0x96f8e0 */
  esp -= 4; W32(esp, 0x971907u); SPILL(); f_96f8e0(); if (g_unwind) return; RELOAD();
/* 971907: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 97190b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97190e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971910: je 0x971954 */
  if (zf) goto L_971954;
L_971912: /* 971912: mov ecx, dword ptr [0xcf799c] */
  ecx = R32((uint32_t)(0xcf799cu));
/* 971918: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 97191d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 97191e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971920: mov dword ptr [0xcf799c], ecx */
  W32((uint32_t)(0xcf799cu), ecx);
/* 971926: je 0x971942 */
  if (zf) goto L_971942;
L_971928: /* 971928: mov eax, dword ptr [0xcf8bac] */
  eax = R32((uint32_t)(0xcf8bacu));
/* 97192d: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 971933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971934: push 0xb02048 */
  { uint32_t v = 0xb02048u; esp -= 4; W32(esp, v); }
/* 971939: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97193a: call 0x953470 */
  esp -= 4; W32(esp, 0x97193fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 97193f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_971942: /* 971942: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 971946: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971948: je 0x971954 */
  if (zf) goto L_971954;
L_97194a: /* 97194a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 97194e: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_971954: /* 971954: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971956: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971958: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97195a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97195b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97195c: call 0x970b20 */
  esp -= 4; W32(esp, 0x971961u); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 971961: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 971965: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 971967: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 97196b: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 97196d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971970: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 971973: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971975: fchs  */
  ST0 = -ST0;
/* 971977: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 971979: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 97197c: je 0x971990 */
  if (zf) goto L_971990;
L_97197e: /* 97197e: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_971980: /* 971980: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* 971983: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 971986: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 971987: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 97198a: fsubr dword ptr [ecx] */
  ST0 = (F32((uint32_t)(ecx))) - ST0;
/* 97198c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 97198e: jne 0x971980 */
  if (!zf) goto L_971980;
L_971990: /* 971990: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 971991: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971992: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 971993: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 971994: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 971995: ret  */
  esp += 4; SPILL(); return;
}

void f_9719a0(void) {
  LOAD_REGS();
L_9719a0: /* 9719a0: mov eax, dword ptr [0xcfb090] */
  eax = R32((uint32_t)(0xcfb090u));
/* 9719a5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9719a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9719aa: mov esi, dword ptr [0xcfb0d4] */
  esi = R32((uint32_t)(0xcfb0d4u));
/* 9719b0: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9719b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9719b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9719b5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9719b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9719b7: mov edx, dword ptr [0xcfb090] */
  edx = R32((uint32_t)(0xcfb090u));
/* 9719bd: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9719c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9719c1: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9719c6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9719c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9719c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9719cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9719cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9719d0(void) {
  LOAD_REGS();
L_9719d0: /* 9719d0: mov eax, dword ptr [0xcfb090] */
  eax = R32((uint32_t)(0xcfb090u));
/* 9719d5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9719d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9719da: mov esi, dword ptr [0xcfb0d4] */
  esi = R32((uint32_t)(0xcfb0d4u));
/* 9719e0: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9719e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9719e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9719e5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9719e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9719e7: mov edx, dword ptr [0xcfb090] */
  edx = R32((uint32_t)(0xcfb090u));
/* 9719ed: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9719f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9719f1: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9719f6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x9719f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9719f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9719fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9719fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_971a00(void) {
  LOAD_REGS();
L_971a00: /* 971a00: ret 8 */
  esp += 12; SPILL(); return;
}

void f_971a10(void) {
  LOAD_REGS();
L_971a10: /* 971a10: ret 8 */
  esp += 12; SPILL(); return;
}

void f_971a20(void) {
  LOAD_REGS();
L_971a20: /* 971a20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 971a24: push 0x12030 */
  { uint32_t v = 0x12030u; esp -= 4; W32(esp, v); }
/* 971a29: push 0xb02124 */
  { uint32_t v = 0xb02124u; esp -= 4; W32(esp, v); }
/* 971a2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971a2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971a31: call dword ptr [0xcfb1c4] */
  esp -= 4; W32(esp, 0x971a37u); SPILL(); call_ind(R32(0xcfb1c4u)); if (g_unwind) return; /* USER32!MessageBoxA */ RELOAD();
/* 971a37: ret 8 */
  esp += 12; SPILL(); return;
}

void f_971a40(void) {
  LOAD_REGS();
L_971a40: /* 971a40: mov eax, 0x2710 */
  eax = 0x2710u;
/* 971a45: call 0x99cc00 */
  esp -= 4; W32(esp, 0x971a4au); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 971a4a: mov eax, dword ptr [0xcf2f80] */
  eax = R32((uint32_t)(0xcf2f80u));
/* 971a4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971a50: mov esi, dword ptr [esp + 0x2718] */
  esi = R32((uint32_t)(esp + 0x2718u));
/* 971a57: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 971a59: jg 0x971aab */
  if ((!zf && sf == of)) goto L_971aab;
L_971a5b: /* 971a5b: mov eax, dword ptr [esp + 0x271c] */
  eax = R32((uint32_t)(esp + 0x271cu));
/* 971a62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971a63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971a64: push 0xb02138 */
  { uint32_t v = 0xb02138u; esp -= 4; W32(esp, v); }
/* 971a69: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 971a6d: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971a72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971a73: call dword ptr [0xcfb0e0] */
  esp -= 4; W32(esp, 0x971a79u); SPILL(); f_42b6a5(); if (g_unwind) return; /* MSVCR70!_snprintf */ RELOAD();
/* 971a79: mov edx, dword ptr [esp + 0x2734] */
  edx = R32((uint32_t)(esp + 0x2734u));
/* 971a80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971a81: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 971a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971a86: lea ecx, [esp + 0x13a8] */
  ecx = (uint32_t)(esp + 0x13a8u);
/* 971a8d: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971a92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971a93: call dword ptr [0xcfb0dc] */
  esp -= 4; W32(esp, 0x971a99u); SPILL(); f_42ba9c(); if (g_unwind) return; /* MSVCR70!_vsnprintf */ RELOAD();
/* 971a99: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971a9c: lea edx, [esp + 0x138c] */
  edx = (uint32_t)(esp + 0x138cu);
/* 971aa3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971aa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971aa5: call dword ptr [0xb020fc] */
  { uint32_t t = R32((uint32_t)(0xb020fcu)); esp -= 4; W32(esp, 0x971aabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_971aab: /* 971aab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971aac: add esp, 0x2710 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2710u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971ab2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_971ac0(void) {
  LOAD_REGS();
L_971ac0: /* 971ac0: mov eax, 0x2710 */
  eax = 0x2710u;
/* 971ac5: call 0x99cc00 */
  esp -= 4; W32(esp, 0x971acau); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 971aca: mov eax, dword ptr [0xcf2f80] */
  eax = R32((uint32_t)(0xcf2f80u));
/* 971acf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971ad0: mov esi, dword ptr [esp + 0x2718] */
  esi = R32((uint32_t)(esp + 0x2718u));
/* 971ad7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 971ad9: jg 0x971b2b */
  if ((!zf && sf == of)) goto L_971b2b;
L_971adb: /* 971adb: mov eax, dword ptr [esp + 0x271c] */
  eax = R32((uint32_t)(esp + 0x271cu));
/* 971ae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971ae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971ae4: push 0xb02148 */
  { uint32_t v = 0xb02148u; esp -= 4; W32(esp, v); }
/* 971ae9: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 971aed: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971af2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971af3: call dword ptr [0xcfb0e0] */
  esp -= 4; W32(esp, 0x971af9u); SPILL(); f_42b6a5(); if (g_unwind) return; /* MSVCR70!_snprintf */ RELOAD();
/* 971af9: mov edx, dword ptr [esp + 0x2734] */
  edx = R32((uint32_t)(esp + 0x2734u));
/* 971b00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971b01: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 971b05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971b06: lea ecx, [esp + 0x13a8] */
  ecx = (uint32_t)(esp + 0x13a8u);
/* 971b0d: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971b12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971b13: call dword ptr [0xcfb0dc] */
  esp -= 4; W32(esp, 0x971b19u); SPILL(); f_42ba9c(); if (g_unwind) return; /* MSVCR70!_vsnprintf */ RELOAD();
/* 971b19: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971b1c: lea edx, [esp + 0x138c] */
  edx = (uint32_t)(esp + 0x138cu);
/* 971b23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971b24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971b25: call dword ptr [0xb02104] */
  { uint32_t t = R32((uint32_t)(0xb02104u)); esp -= 4; W32(esp, 0x971b2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_971b2b: /* 971b2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971b2c: add esp, 0x2710 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2710u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971b32: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_971b40(void) {
  LOAD_REGS();
L_971b40: /* 971b40: mov eax, 0x2710 */
  eax = 0x2710u;
/* 971b45: call 0x99cc00 */
  esp -= 4; W32(esp, 0x971b4au); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 971b4a: mov eax, dword ptr [0xcf2f84] */
  eax = R32((uint32_t)(0xcf2f84u));
/* 971b4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971b50: mov esi, dword ptr [esp + 0x2718] */
  esi = R32((uint32_t)(esp + 0x2718u));
/* 971b57: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 971b59: jg 0x971bab */
  if ((!zf && sf == of)) goto L_971bab;
L_971b5b: /* 971b5b: mov eax, dword ptr [esp + 0x271c] */
  eax = R32((uint32_t)(esp + 0x271cu));
/* 971b62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971b63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971b64: push 0xb02158 */
  { uint32_t v = 0xb02158u; esp -= 4; W32(esp, v); }
/* 971b69: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 971b6d: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971b72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971b73: call dword ptr [0xcfb0e0] */
  esp -= 4; W32(esp, 0x971b79u); SPILL(); f_42b6a5(); if (g_unwind) return; /* MSVCR70!_snprintf */ RELOAD();
/* 971b79: mov edx, dword ptr [esp + 0x2734] */
  edx = R32((uint32_t)(esp + 0x2734u));
/* 971b80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971b81: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 971b85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971b86: lea ecx, [esp + 0x13a8] */
  ecx = (uint32_t)(esp + 0x13a8u);
/* 971b8d: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971b92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971b93: call dword ptr [0xcfb0dc] */
  esp -= 4; W32(esp, 0x971b99u); SPILL(); f_42ba9c(); if (g_unwind) return; /* MSVCR70!_vsnprintf */ RELOAD();
/* 971b99: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971b9c: lea edx, [esp + 0x138c] */
  edx = (uint32_t)(esp + 0x138cu);
/* 971ba3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971ba4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971ba5: call dword ptr [0xb02100] */
  { uint32_t t = R32((uint32_t)(0xb02100u)); esp -= 4; W32(esp, 0x971babu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_971bab: /* 971bab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971bac: add esp, 0x2710 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2710u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971bb2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_971bc0(void) {
  LOAD_REGS();
L_971bc0: /* 971bc0: mov eax, 0x2710 */
  eax = 0x2710u;
/* 971bc5: call 0x99cc00 */
  esp -= 4; W32(esp, 0x971bcau); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 971bca: mov eax, dword ptr [esp + 0x2718] */
  eax = R32((uint32_t)(esp + 0x2718u));
/* 971bd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971bd2: mov esi, dword ptr [esp + 0x2718] */
  esi = R32((uint32_t)(esp + 0x2718u));
/* 971bd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971bda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971bdb: push 0xb0216c */
  { uint32_t v = 0xb0216cu; esp -= 4; W32(esp, v); }
/* 971be0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 971be4: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971be9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971bea: call dword ptr [0xcfb0e0] */
  esp -= 4; W32(esp, 0x971bf0u); SPILL(); f_42b6a5(); if (g_unwind) return; /* MSVCR70!_snprintf */ RELOAD();
/* 971bf0: mov edx, dword ptr [esp + 0x2734] */
  edx = R32((uint32_t)(esp + 0x2734u));
/* 971bf7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971bf8: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 971bfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971bfd: lea ecx, [esp + 0x13a8] */
  ecx = (uint32_t)(esp + 0x13a8u);
/* 971c04: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971c09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971c0a: call dword ptr [0xcfb0dc] */
  esp -= 4; W32(esp, 0x971c10u); SPILL(); f_42ba9c(); if (g_unwind) return; /* MSVCR70!_vsnprintf */ RELOAD();
/* 971c10: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971c13: lea edx, [esp + 0x138c] */
  edx = (uint32_t)(esp + 0x138cu);
/* 971c1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971c1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971c1c: call dword ptr [0xb02108] */
  { uint32_t t = R32((uint32_t)(0xb02108u)); esp -= 4; W32(esp, 0x971c22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971c22: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 971c24: call dword ptr [0xcfb094] */
  esp -= 4; W32(esp, 0x971c2au); SPILL(); f_404360(); if (g_unwind) return; /* MSVCR70!exit */ RELOAD();
/* 971c2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971c2b: nop  */
/* 971c2c: nop  */
/* 971c2d: nop  */
/* 971c2e: nop  */
/* 971c2f: nop  */
  SPILL(); f_971c30(); return;
}

void f_971c30(void) {
  LOAD_REGS();
L_971c30: /* 971c30: mov eax, 0x2710 */
  eax = 0x2710u;
/* 971c35: call 0x99cc00 */
  esp -= 4; W32(esp, 0x971c3au); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 971c3a: mov eax, dword ptr [0xcf2f8c] */
  eax = R32((uint32_t)(0xcf2f8cu));
/* 971c3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971c40: mov esi, dword ptr [esp + 0x2718] */
  esi = R32((uint32_t)(esp + 0x2718u));
/* 971c47: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 971c49: jg 0x971c96 */
  if ((!zf && sf == of)) goto L_971c96;
L_971c4b: /* 971c4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971c4c: mov edi, dword ptr [esp + 0x2720] */
  edi = R32((uint32_t)(esp + 0x2720u));
/* 971c53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971c54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971c55: push 0xb02184 */
  { uint32_t v = 0xb02184u; esp -= 4; W32(esp, v); }
/* 971c5a: lea eax, [esp + 0x139c] */
  eax = (uint32_t)(esp + 0x139cu);
/* 971c61: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971c66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971c67: call dword ptr [0xcfb0e0] */
  esp -= 4; W32(esp, 0x971c6du); SPILL(); f_42b6a5(); if (g_unwind) return; /* MSVCR70!_snprintf */ RELOAD();
/* 971c6d: mov ecx, dword ptr [esp + 0x2738] */
  ecx = R32((uint32_t)(esp + 0x2738u));
/* 971c74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971c75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971c76: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 971c7a: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 971c7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971c80: call dword ptr [0xcfb0dc] */
  esp -= 4; W32(esp, 0x971c86u); SPILL(); f_42ba9c(); if (g_unwind) return; /* MSVCR70!_vsnprintf */ RELOAD();
/* 971c86: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971c89: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 971c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971c8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971c8f: call dword ptr [0xb0210c] */
  { uint32_t t = R32((uint32_t)(0xb0210cu)); esp -= 4; W32(esp, 0x971c95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971c95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_971c96: /* 971c96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971c97: add esp, 0x2710 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2710u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971c9d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_971ca0(void) {
  LOAD_REGS();
L_971ca0: /* 971ca0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971ca4: mov eax, dword ptr [0xb020fc] */
  eax = R32((uint32_t)(0xb020fcu));
/* 971ca9: mov dword ptr [0xb020fc], ecx */
  W32((uint32_t)(0xb020fcu), ecx);
/* 971caf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971cc0(void) {
  LOAD_REGS();
L_971cc0: /* 971cc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971cc4: mov eax, dword ptr [0xb02104] */
  eax = R32((uint32_t)(0xb02104u));
/* 971cc9: mov dword ptr [0xb02104], ecx */
  W32((uint32_t)(0xb02104u), ecx);
/* 971ccf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971ce0(void) {
  LOAD_REGS();
L_971ce0: /* 971ce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971ce4: mov eax, dword ptr [0xb02100] */
  eax = R32((uint32_t)(0xb02100u));
/* 971ce9: mov dword ptr [0xb02100], ecx */
  W32((uint32_t)(0xb02100u), ecx);
/* 971cef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971d00(void) {
  LOAD_REGS();
L_971d00: /* 971d00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971d04: mov eax, dword ptr [0xb02108] */
  eax = R32((uint32_t)(0xb02108u));
/* 971d09: mov dword ptr [0xb02108], ecx */
  W32((uint32_t)(0xb02108u), ecx);
/* 971d0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971d20(void) {
  LOAD_REGS();
L_971d20: /* 971d20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971d24: mov eax, dword ptr [0xb0210c] */
  eax = R32((uint32_t)(0xb0210cu));
/* 971d29: mov dword ptr [0xb0210c], ecx */
  W32((uint32_t)(0xb0210cu), ecx);
/* 971d2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971d40(void) {
  LOAD_REGS();
L_971d40: /* 971d40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971d44: mov eax, dword ptr [0xb02110] */
  eax = R32((uint32_t)(0xb02110u));
/* 971d49: mov dword ptr [0xb02110], ecx */
  W32((uint32_t)(0xb02110u), ecx);
/* 971d4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971d60(void) {
  LOAD_REGS();
L_971d60: /* 971d60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971d64: mov eax, dword ptr [0xb02114] */
  eax = R32((uint32_t)(0xb02114u));
/* 971d69: mov dword ptr [0xb02114], ecx */
  W32((uint32_t)(0xb02114u), ecx);
/* 971d6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971d80(void) {
  LOAD_REGS();
L_971d80: /* 971d80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971d84: mov eax, dword ptr [0xb02118] */
  eax = R32((uint32_t)(0xb02118u));
/* 971d89: mov dword ptr [0xb02118], ecx */
  W32((uint32_t)(0xb02118u), ecx);
/* 971d8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971da0(void) {
  LOAD_REGS();
L_971da0: /* 971da0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971da4: mov eax, dword ptr [0xb0211c] */
  eax = R32((uint32_t)(0xb0211cu));
/* 971da9: mov dword ptr [0xb0211c], ecx */
  W32((uint32_t)(0xb0211cu), ecx);
/* 971daf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971dc0(void) {
  LOAD_REGS();
L_971dc0: /* 971dc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 971dc4: mov eax, dword ptr [0xb02120] */
  eax = R32((uint32_t)(0xb02120u));
/* 971dc9: mov dword ptr [0xb02120], ecx */
  W32((uint32_t)(0xb02120u), ecx);
/* 971dcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971de0(void) {
  LOAD_REGS();
L_971de0: /* 971de0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 971de4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 971de8: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 971dec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971ded: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971dee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971def: call dword ptr [0xb02110] */
  { uint32_t t = R32((uint32_t)(0xb02110u)); esp -= 4; W32(esp, 0x971df5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971df5: ret  */
  esp += 4; SPILL(); return;
}

void f_971e00(void) {
  LOAD_REGS();
L_971e00: /* 971e00: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 971e04: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 971e08: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 971e0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971e0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971e0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971e0f: call dword ptr [0xb02114] */
  { uint32_t t = R32((uint32_t)(0xb02114u)); esp -= 4; W32(esp, 0x971e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971e15: ret  */
  esp += 4; SPILL(); return;
}

void f_971e20(void) {
  LOAD_REGS();
L_971e20: /* 971e20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 971e24: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 971e28: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 971e2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971e2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971e2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971e2f: call dword ptr [0xb02118] */
  { uint32_t t = R32((uint32_t)(0xb02118u)); esp -= 4; W32(esp, 0x971e35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971e35: ret  */
  esp += 4; SPILL(); return;
}

void f_971e40(void) {
  LOAD_REGS();
L_971e40: /* 971e40: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 971e44: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 971e48: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 971e4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971e4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971e4f: call dword ptr [0xb0211c] */
  { uint32_t t = R32((uint32_t)(0xb0211cu)); esp -= 4; W32(esp, 0x971e55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971e55: ret  */
  esp += 4; SPILL(); return;
}

void f_971e60(void) {
  LOAD_REGS();
L_971e60: /* 971e60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 971e64: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 971e68: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 971e6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971e6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971e6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971e6f: call dword ptr [0xb02120] */
  { uint32_t t = R32((uint32_t)(0xb02120u)); esp -= 4; W32(esp, 0x971e75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971e75: ret  */
  esp += 4; SPILL(); return;
}

void f_971e80(void) {
  LOAD_REGS();
L_971e80: /* 971e80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 971e84: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 971e88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971e89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971e8a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 971e8c: call dword ptr [0xb02120] */
  { uint32_t t = R32((uint32_t)(0xb02120u)); esp -= 4; W32(esp, 0x971e92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971e92: ret  */
  esp += 4; SPILL(); return;
}

void f_971ea0(void) {
  LOAD_REGS();
L_971ea0: /* 971ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971ea1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 971ea5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971ea6: mov edi, dword ptr [0xcfb0e4] */
  edi = R32((uint32_t)(0xcfb0e4u));
/* 971eac: jmp 0x971eb3 */
  goto L_971eb3;
L_971eb0: /* 971eb0: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_971eb3: /* 971eb3: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 971eb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971eb6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x971eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971eb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971ebb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971ebd: jne 0x971eb0 */
  if (!zf) goto L_971eb0;
L_971ebf: /* 971ebf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 971ec0: mov eax, esi */
  eax = esi;
/* 971ec2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971ec3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971eae(void) {
  LOAD_REGS();
L_971eae: /* 971eae: mov edi, edi */
  edi = edi;
L_971eb0: /* 971eb0: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 971eb3: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 971eb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971eb6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x971eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971eb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971ebb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971ebd: jne 0x971eb0 */
  if (!zf) goto L_971eb0;
L_971ebf: /* 971ebf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 971ec0: mov eax, esi */
  eax = esi;
/* 971ec2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971ec3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_971ed0(void) {
  LOAD_REGS();
L_971ed0: /* 971ed0: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 971ed2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x971ed8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971ed8: xor ecx, ecx */
  ecx = 0;
/* 971eda: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971edc: je 0x971f12 */
  if (zf) goto L_971f12;
L_971ede: /* 971ede: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 971ee2: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 971ee5: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 971ee9: mov dword ptr [eax + 0x24], 0x9728a0 */
  W32((uint32_t)(eax + 0x24u), 0x9728a0u);
/* 971ef0: mov dword ptr [eax + 0x28], 0x9728b0 */
  W32((uint32_t)(eax + 0x28u), 0x9728b0u);
/* 971ef7: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 971efa: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 971efd: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 971f00: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 971f02: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 971f05: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* 971f08: mov dword ptr [eax + 0xc], 1 */
  W32((uint32_t)(eax + 0xcu), 0x1u);
/* 971f0f: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
L_971f12: /* 971f12: ret  */
  esp += 4; SPILL(); return;
}

void f_971f20(void) {
  LOAD_REGS();
L_971f20: /* 971f20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 971f24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971f26: jne 0x971f2d */
  if (!zf) goto L_971f2d;
L_971f28: /* 971f28: mov ecx, 0x9728a0 */
  ecx = 0x9728a0u;
L_971f2d: /* 971f2d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 971f31: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 971f34: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 971f38: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971f3a: je 0x971f47 */
  if (zf) goto L_971f47;
L_971f3c: /* 971f3c: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 971f3f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 971f43: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 971f46: ret  */
  esp += 4; SPILL(); return;
L_971f47: /* 971f47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 971f4b: mov ecx, 0x9728b0 */
  ecx = 0x9728b0u;
/* 971f50: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 971f53: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 971f56: ret  */
  esp += 4; SPILL(); return;
}

void f_971f60(void) {
  LOAD_REGS();
L_971f60: /* 971f60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 971f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971f65: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x971f6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971f6b: ret  */
  esp += 4; SPILL(); return;
}

void f_971f70(void) {
  LOAD_REGS();
L_971f70: /* 971f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971f71: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 971f75: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 971f77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971f78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971f79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971f7a: call 0x971f90 */
  esp -= 4; W32(esp, 0x971f7fu); SPILL(); f_971f90(); if (g_unwind) return; RELOAD();
/* 971f7f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971f82: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 971f89: mov dword ptr [esi], esi */
  W32((uint32_t)(esi), esi);
/* 971f8b: mov dword ptr [esi + 4], esi */
  W32((uint32_t)(esi + 0x4u), esi);
/* 971f8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 971f8f: ret  */
  esp += 4; SPILL(); return;
}

void f_971f90(void) {
  LOAD_REGS();
L_971f90: /* 971f90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 971f91: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 971f95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971f96: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 971f9a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971f9c: je 0x971fc4 */
  if (zf) goto L_971fc4;
L_971f9e: /* 971f9e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 971fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971fa1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 971fa5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 971fa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971fa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971fa8: call 0x971f90 */
  esp -= 4; W32(esp, 0x971fadu); SPILL(); f_971f90(); if (g_unwind) return; RELOAD();
/* 971fad: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 971fb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 971fb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971fb2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971fb3: call 0x971f90 */
  esp -= 4; W32(esp, 0x971fb8u); SPILL(); f_971f90(); if (g_unwind) return; RELOAD();
/* 971fb8: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 971fbb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971fbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 971fbd: call dword ptr [esi + 0x28] */
  { uint32_t t = R32((uint32_t)(esi + 0x28u)); esp -= 4; W32(esp, 0x971fc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 971fc0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971fc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_971fc4: /* 971fc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 971fc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 971fc6: ret  */
  esp += 4; SPILL(); return;
}

void f_971fd0(void) {
  LOAD_REGS();
L_971fd0: /* 971fd0: jmp 0x971f70 */
  SPILL(); f_971f70(); return;
}

void f_971fe0(void) {
  LOAD_REGS();
L_971fe0: /* 971fe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 971fe4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 971fe8: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 971fec: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 971fef: xor ecx, ecx */
  ecx = 0;
/* 971ff1: mov dword ptr [eax + 0x24], 0x9728a0 */
  W32((uint32_t)(eax + 0x24u), 0x9728a0u);
/* 971ff8: mov dword ptr [eax + 0x28], 0x9728b0 */
  W32((uint32_t)(eax + 0x28u), 0x9728b0u);
/* 971fff: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 972002: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 972005: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 972008: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 97200a: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 97200d: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* 972010: mov dword ptr [eax + 0xc], 1 */
  W32((uint32_t)(eax + 0xcu), 0x1u);
/* 972017: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 97201a: ret  */
  esp += 4; SPILL(); return;
}

void f_972020(void) {
  LOAD_REGS();
L_972020: /* 972020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972024: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 972028: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 97202b: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 97202e: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 972031: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 972034: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 972037: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 97203a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 97203d: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 972040: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
/* 972047: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 97204a: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 97204d: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 97204f: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 972052: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* 972055: mov dword ptr [eax + 0xc], 1 */
  W32((uint32_t)(eax + 0xcu), 0x1u);
/* 97205c: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 97205f: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 972062: ret  */
  esp += 4; SPILL(); return;
}

void f_972070(void) {
  LOAD_REGS();
L_972070: /* 972070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972071: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 972075: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972076: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 972078: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 97207b: mov eax, 1 */
  eax = 0x1u;
/* 972080: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972082: je 0x972089 */
  if (zf) goto L_972089;
L_972084: /* 972084: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972085: xor eax, eax */
  eax = 0;
/* 972087: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972088: ret  */
  esp += 4; SPILL(); return;
L_972089: /* 972089: cmp dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97208c: je 0x972093 */
  if (zf) goto L_972093;
L_97208e: /* 97208e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97208f: xor eax, eax */
  eax = 0;
/* 972091: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972092: ret  */
  esp += 4; SPILL(); return;
L_972093: /* 972093: cmp dword ptr [esi + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972096: je 0x97209d */
  if (zf) goto L_97209d;
L_972098: /* 972098: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972099: xor eax, eax */
  eax = 0;
/* 97209b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97209c: ret  */
  esp += 4; SPILL(); return;
L_97209d: /* 97209d: cmp dword ptr [edi + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9720a0: je 0x9720a7 */
  if (zf) goto L_9720a7;
L_9720a2: /* 9720a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9720a3: xor eax, eax */
  eax = 0;
/* 9720a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9720a6: ret  */
  esp += 4; SPILL(); return;
L_9720a7: /* 9720a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9720a8: call 0x9720e0 */
  esp -= 4; W32(esp, 0x9720adu); SPILL(); f_9720e0(); if (g_unwind) return; RELOAD();
/* 9720ad: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9720b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9720b2: jne 0x9720b7 */
  if (!zf) goto L_9720b7;
L_9720b4: /* 9720b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9720b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9720b6: ret  */
  esp += 4; SPILL(); return;
L_9720b7: /* 9720b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9720b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9720b9: call 0x972170 */
  esp -= 4; W32(esp, 0x9720beu); SPILL(); f_972170(); if (g_unwind) return; RELOAD();
/* 9720be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9720c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9720c3: jne 0x9720c8 */
  if (!zf) goto L_9720c8;
L_9720c5: /* 9720c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9720c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9720c7: ret  */
  esp += 4; SPILL(); return;
L_9720c8: /* 9720c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9720c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9720ca: call 0x972200 */
  esp -= 4; W32(esp, 0x9720cfu); SPILL(); f_972200(); if (g_unwind) return; RELOAD();
/* 9720cf: sub eax, dword ptr [esi + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9720d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9720d5: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 9720d7: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 9720d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9720da: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9720db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9720dc: ret  */
  esp += 4; SPILL(); return;
}

void f_9720e0(void) {
  LOAD_REGS();
L_9720e0: /* 9720e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9720e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9720e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9720e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9720e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9720e8: call 0x972710 */
  esp -= 4; W32(esp, 0x9720edu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 9720ed: mov esi, eax */
  esi = eax;
/* 9720ef: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 9720f2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9720f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9720f7: je 0x972126 */
  if (zf) goto L_972126;
L_9720f9: /* 9720f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9720fb: je 0x97215c */
  if (zf) goto L_97215c;
L_9720fd: /* 9720fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_972100: /* 972100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972101: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972102: call 0x972770 */
  esp -= 4; W32(esp, 0x972107u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 972107: mov ebx, eax */
  ebx = eax;
/* 972109: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97210c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97210e: je 0x97215c */
  if (zf) goto L_97215c;
L_972110: /* 972110: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 972113: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 972116: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 972118: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x97211bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97211b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97211e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 972120: jg 0x972156 */
  if ((!zf && sf == of)) goto L_972156;
L_972122: /* 972122: mov esi, ebx */
  esi = ebx;
/* 972124: jmp 0x972100 */
  goto L_972100;
L_972126: /* 972126: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972128: je 0x97215c */
  if (zf) goto L_97215c;
L_97212a: /* 97212a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_972130: /* 972130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972132: call 0x972770 */
  esp -= 4; W32(esp, 0x972137u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 972137: mov ebx, eax */
  ebx = eax;
/* 972139: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97213c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97213e: je 0x97215c */
  if (zf) goto L_97215c;
L_972140: /* 972140: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 972143: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 972146: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 972147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972148: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x97214bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97214b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97214e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 972150: jge 0x972156 */
  if ((sf == of)) goto L_972156;
L_972152: /* 972152: mov esi, ebx */
  esi = ebx;
/* 972154: jmp 0x972130 */
  goto L_972130;
L_972156: /* 972156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972157: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972158: xor eax, eax */
  eax = 0;
/* 97215a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97215b: ret  */
  esp += 4; SPILL(); return;
L_97215c: /* 97215c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97215d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97215e: mov eax, 1 */
  eax = 0x1u;
/* 972163: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972164: ret  */
  esp += 4; SPILL(); return;
}

void f_972170(void) {
  LOAD_REGS();
L_972170: /* 972170: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972171: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 972175: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972177: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 97217b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97217d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97217e: je 0x9721f5 */
  if (zf) goto L_9721f5;
L_972180: /* 972180: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 972182: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972183: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972184: call 0x972170 */
  esp -= 4; W32(esp, 0x972189u); SPILL(); f_972170(); if (g_unwind) return; RELOAD();
/* 972189: mov edi, eax */
  edi = eax;
/* 97218b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97218e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97218f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972190: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 972194: call 0x972170 */
  esp -= 4; W32(esp, 0x972199u); SPILL(); f_972170(); if (g_unwind) return; RELOAD();
/* 972199: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97219c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97219e: je 0x9721e6 */
  if (zf) goto L_9721e6;
L_9721a0: /* 9721a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9721a2: je 0x9721e6 */
  if (zf) goto L_9721e6;
L_9721a4: /* 9721a4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9721a6: je 0x9721af */
  if (zf) goto L_9721af;
L_9721a8: /* 9721a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9721a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9721aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9721ab: xor eax, eax */
  eax = 0;
/* 9721ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9721ae: ret  */
  esp += 4; SPILL(); return;
L_9721af: /* 9721af: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 9721b2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9721b4: jne 0x9721e1 */
  if (!zf) goto L_9721e1;
L_9721b6: /* 9721b6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9721b9: mov eax, 1 */
  eax = 0x1u;
/* 9721be: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9721c0: je 0x9721c9 */
  if (zf) goto L_9721c9;
L_9721c2: /* 9721c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9721c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9721c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9721c5: xor eax, eax */
  eax = 0;
/* 9721c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9721c8: ret  */
  esp += 4; SPILL(); return;
L_9721c9: /* 9721c9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9721cd: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* 9721d0: xor ecx, ecx */
  ecx = 0;
/* 9721d2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9721d4: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9721d7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9721d8: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9721da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9721db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9721dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9721dd: mov eax, ecx */
  eax = ecx;
/* 9721df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9721e0: ret  */
  esp += 4; SPILL(); return;
L_9721e1: /* 9721e1: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9721e4: je 0x9721ed */
  if (zf) goto L_9721ed;
L_9721e6: /* 9721e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9721e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9721e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9721e9: xor eax, eax */
  eax = 0;
/* 9721eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9721ec: ret  */
  esp += 4; SPILL(); return;
L_9721ed: /* 9721ed: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 9721f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9721f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9721f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9721f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9721f4: ret  */
  esp += 4; SPILL(); return;
L_9721f5: /* 9721f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9721f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9721f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9721f8: mov eax, 1 */
  eax = 0x1u;
/* 9721fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9721fe: ret  */
  esp += 4; SPILL(); return;
}

void f_972200(void) {
  LOAD_REGS();
L_972200: /* 972200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972201: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 972205: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972206: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97220a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97220c: jne 0x972213 */
  if (!zf) goto L_972213;
L_97220e: /* 97220e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97220f: xor eax, eax */
  eax = 0;
/* 972211: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972212: ret  */
  esp += 4; SPILL(); return;
L_972213: /* 972213: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 972216: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972217: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972218: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972219: call 0x972200 */
  esp -= 4; W32(esp, 0x97221eu); SPILL(); f_972200(); if (g_unwind) return; RELOAD();
/* 97221e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 972220: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 972221: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972222: mov ebx, eax */
  ebx = eax;
/* 972224: call 0x972200 */
  esp -= 4; W32(esp, 0x972229u); SPILL(); f_972200(); if (g_unwind) return; RELOAD();
/* 972229: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97222c: lea eax, [ebx + eax + 1] */
  eax = (uint32_t)(ebx + eax + 0x1u);
/* 972230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972231: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972232: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972233: ret  */
  esp += 4; SPILL(); return;
}

void f_972240(void) {
  LOAD_REGS();
L_972240: /* 972240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972244: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 972248: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 97224b: cmp edx, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97224e: je 0x972253 */
  if (zf) goto L_972253;
L_972250: /* 972250: xor eax, eax */
  eax = 0;
/* 972252: ret  */
  esp += 4; SPILL(); return;
L_972253: /* 972253: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 972256: cmp edx, dword ptr [ecx + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972259: je 0x97225e */
  if (zf) goto L_97225e;
L_97225b: /* 97225b: xor eax, eax */
  eax = 0;
/* 97225d: ret  */
  esp += 4; SPILL(); return;
L_97225e: /* 97225e: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 972261: cmp edx, dword ptr [ecx + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972264: je 0x972269 */
  if (zf) goto L_972269;
L_972266: /* 972266: xor eax, eax */
  eax = 0;
/* 972268: ret  */
  esp += 4; SPILL(); return;
L_972269: /* 972269: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 97226c: cmp edx, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97226f: je 0x972274 */
  if (zf) goto L_972274;
L_972271: /* 972271: xor eax, eax */
  eax = 0;
/* 972273: ret  */
  esp += 4; SPILL(); return;
L_972274: /* 972274: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 972277: sub eax, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 97227a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 97227c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97227e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97227f: ret  */
  esp += 4; SPILL(); return;
}

void f_972280(void) {
  LOAD_REGS();
L_972280: /* 972280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972283: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 972287: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 972289: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97228b: je 0x9722ad */
  if (zf) goto L_9722ad;
L_97228d: /* 97228d: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_972291: /* 972291: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 972294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972296: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x972299u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 972299: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97229c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97229e: jge 0x9722a4 */
  if ((sf == of)) goto L_9722a4;
L_9722a0: /* 9722a0: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9722a2: jmp 0x9722a9 */
  goto L_9722a9;
L_9722a4: /* 9722a4: jle 0x9722b3 */
  if ((zf || sf != of)) goto L_9722b3;
L_9722a6: /* 9722a6: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
L_9722a9: /* 9722a9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9722ab: jne 0x972291 */
  if (!zf) goto L_972291;
L_9722ad: /* 9722ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9722ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9722af: xor eax, eax */
  eax = 0;
/* 9722b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9722b2: ret  */
  esp += 4; SPILL(); return;
L_9722b3: /* 9722b3: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 9722b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9722b8: jne 0x9722c0 */
  if (!zf) goto L_9722c0;
L_9722ba: /* 9722ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9722bb: mov eax, esi */
  eax = esi;
/* 9722bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9722be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9722bf: ret  */
  esp += 4; SPILL(); return;
L_9722c0: /* 9722c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_9722c1: /* 9722c1: mov ebp, esi */
  ebp = esi;
/* 9722c3: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9722c5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9722c7: je 0x9722f1 */
  if (zf) goto L_9722f1;
L_9722c9: /* 9722c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9722d0: /* 9722d0: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9722d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9722d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9722d5: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x9722d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9722d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9722db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9722dd: je 0x9722ed */
  if (zf) goto L_9722ed;
L_9722df: /* 9722df: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 9722e2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9722e4: jne 0x9722d0 */
  if (!zf) goto L_9722d0;
L_9722e6: /* 9722e6: mov eax, ebp */
  eax = ebp;
/* 9722e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9722e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9722ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9722eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9722ec: ret  */
  esp += 4; SPILL(); return;
L_9722ed: /* 9722ed: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9722ef: jne 0x9722c1 */
  if (!zf) goto L_9722c1;
L_9722f1: /* 9722f1: mov eax, ebp */
  eax = ebp;
/* 9722f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9722f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9722f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9722f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9722f7: ret  */
  esp += 4; SPILL(); return;
}

void f_972300(void) {
  LOAD_REGS();
L_972300: /* 972300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972301: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972302: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972304: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 972308: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 97230a: xor ebx, ebx */
  ebx = 0;
/* 97230c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97230e: je 0x972339 */
  if (zf) goto L_972339;
L_972310: /* 972310: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_972314: /* 972314: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 972317: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972318: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972319: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x97231cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97231c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97231f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 972321: jle 0x972328 */
  if ((zf || sf != of)) goto L_972328;
L_972323: /* 972323: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 972326: jmp 0x972335 */
  goto L_972335;
L_972328: /* 972328: jl 0x972331 */
  if ((sf != of)) goto L_972331;
L_97232a: /* 97232a: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 97232d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97232f: je 0x972340 */
  if (zf) goto L_972340;
L_972331: /* 972331: mov ebx, esi */
  ebx = esi;
/* 972333: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_972335: /* 972335: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972337: jne 0x972314 */
  if (!zf) goto L_972314;
L_972339: /* 972339: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97233a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97233b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97233c: mov eax, ebx */
  eax = ebx;
/* 97233e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97233f: ret  */
  esp += 4; SPILL(); return;
L_972340: /* 972340: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972341: mov eax, esi */
  eax = esi;
/* 972343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972344: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 972345: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972346: ret  */
  esp += 4; SPILL(); return;
}

void f_972350(void) {
  LOAD_REGS();
L_972350: /* 972350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972351: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972352: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972353: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972354: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 972358: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 97235a: xor ebx, ebx */
  ebx = 0;
/* 97235c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97235e: je 0x972389 */
  if (zf) goto L_972389;
L_972360: /* 972360: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_972364: /* 972364: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 972367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972368: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972369: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x97236cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97236c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97236f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 972371: jge 0x972377 */
  if ((sf == of)) goto L_972377;
L_972373: /* 972373: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 972375: jmp 0x972385 */
  goto L_972385;
L_972377: /* 972377: jg 0x972380 */
  if ((!zf && sf == of)) goto L_972380;
L_972379: /* 972379: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 97237c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97237e: je 0x972390 */
  if (zf) goto L_972390;
L_972380: /* 972380: mov ebx, esi */
  ebx = esi;
/* 972382: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
L_972385: /* 972385: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972387: jne 0x972364 */
  if (!zf) goto L_972364;
L_972389: /* 972389: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97238a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97238b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97238c: mov eax, ebx */
  eax = ebx;
/* 97238e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97238f: ret  */
  esp += 4; SPILL(); return;
L_972390: /* 972390: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972391: mov eax, esi */
  eax = esi;
/* 972393: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972394: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 972395: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972396: ret  */
  esp += 4; SPILL(); return;
}

void f_9723a0(void) {
  LOAD_REGS();
L_9723a0: /* 9723a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9723a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9723a5: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 9723a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9723aa: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 9723ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9723af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9723b0: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 9723b3: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9723b5: mov esi, ebp */
  esi = ebp;
/* 9723b7: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 9723ba: je 0x972413 */
  if (zf) goto L_972413;
L_9723bc: /* 9723bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9723c0: /* 9723c0: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 9723c3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9723c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9723c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9723c9: mov esi, edi */
  esi = edi;
/* 9723cb: call dword ptr [ebp + 0x20] */
  { uint32_t t = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, 0x9723ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9723ce: xor edx, edx */
  edx = 0;
/* 9723d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9723d3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9723d5: jge 0x9723db */
  if ((sf == of)) goto L_9723db;
L_9723d7: /* 9723d7: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 9723d9: jmp 0x9723de */
  goto L_9723de;
L_9723db: /* 9723db: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
L_9723de: /* 9723de: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9723e0: jne 0x9723c0 */
  if (!zf) goto L_9723c0;
L_9723e2: /* 9723e2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9723e4: jl 0x972415 */
  if ((sf != of)) goto L_972415;
L_9723e6: /* 9723e6: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
L_9723e9: /* 9723e9: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 9723ec: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 9723ee: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 9723f1: inc dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x18u), r);
  }
/* 9723f4: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 9723f7: cmp dword ptr [esi + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9723fa: jne 0x972436 */
  if (!zf) goto L_972436;
L_9723fc: /* 9723fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_972400: /* 972400: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 972403: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 972405: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972407: jne 0x972419 */
  if (!zf) goto L_972419;
L_972409: /* 972409: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97240c: cmp dword ptr [eax + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97240f: jne 0x972445 */
  if (!zf) goto L_972445;
L_972411: /* 972411: jmp 0x97241e */
  goto L_97241e;
L_972413: /* 972413: xor edx, edx */
  edx = 0;
L_972415: /* 972415: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 972417: jmp 0x9723e9 */
  goto L_9723e9;
L_972419: /* 972419: cmp dword ptr [eax + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97241c: jne 0x972476 */
  if (!zf) goto L_972476;
L_97241e: /* 97241e: mov ecx, 1 */
  ecx = 0x1u;
/* 972423: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 972426: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 972429: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 97242c: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 97242f: cmp dword ptr [esi + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972432: mov ebx, edi */
  ebx = edi;
/* 972434: je 0x972400 */
  if (zf) goto L_972400;
L_972436: /* 972436: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 972439: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97243a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97243b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97243c: mov dword ptr [eax + 0xc], 1 */
  W32((uint32_t)(eax + 0xcu), 0x1u);
/* 972443: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972444: ret  */
  esp += 4; SPILL(); return;
L_972445: /* 972445: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972448: jne 0x972457 */
  if (!zf) goto L_972457;
L_97244a: /* 97244a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97244b: call 0x9724b0 */
  esp -= 4; W32(esp, 0x972450u); SPILL(); f_9724b0(); if (g_unwind) return; RELOAD();
/* 972450: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972453: mov esi, ebx */
  esi = ebx;
/* 972455: xor edx, edx */
  edx = 0;
L_972457: /* 972457: mov ebx, 1 */
  ebx = 0x1u;
/* 97245c: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 97245f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972460: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 972463: call 0x9724e0 */
  esp -= 4; W32(esp, 0x972468u); SPILL(); f_9724e0(); if (g_unwind) return; RELOAD();
/* 972468: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 97246b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97246e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97246f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972470: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 972471: mov dword ptr [ecx + 0xc], ebx */
  W32((uint32_t)(ecx + 0xcu), ebx);
/* 972474: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972475: ret  */
  esp += 4; SPILL(); return;
L_972476: /* 972476: cmp ebx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972478: jne 0x972487 */
  if (!zf) goto L_972487;
L_97247a: /* 97247a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97247b: call 0x9724e0 */
  esp -= 4; W32(esp, 0x972480u); SPILL(); f_9724e0(); if (g_unwind) return; RELOAD();
/* 972480: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972483: mov esi, ebx */
  esi = ebx;
/* 972485: xor edx, edx */
  edx = 0;
L_972487: /* 972487: mov ebx, 1 */
  ebx = 0x1u;
/* 97248c: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 97248f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972490: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 972493: call 0x9724b0 */
  esp -= 4; W32(esp, 0x972498u); SPILL(); f_9724b0(); if (g_unwind) return; RELOAD();
/* 972498: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 97249b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97249e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97249f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9724a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9724a1: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 9724a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9724a5: ret  */
  esp += 4; SPILL(); return;
}

void f_9724b0(void) {
  LOAD_REGS();
L_9724b0: /* 9724b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9724b4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9724b7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9724b9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9724bc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9724bf: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9724c2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9724c5: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9724c7: jne 0x9724d1 */
  if (!zf) goto L_9724d1;
L_9724c9: /* 9724c9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 9724cb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9724cd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9724d0: ret  */
  esp += 4; SPILL(); return;
L_9724d1: /* 9724d1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9724d4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9724d6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9724d9: ret  */
  esp += 4; SPILL(); return;
}

void f_9724e0(void) {
  LOAD_REGS();
L_9724e0: /* 9724e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9724e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9724e6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9724e9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9724eb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 9724ee: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9724f1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9724f4: cmp eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9724f7: jne 0x972503 */
  if (!zf) goto L_972503;
L_9724f9: /* 9724f9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9724fc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 9724ff: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 972502: ret  */
  esp += 4; SPILL(); return;
L_972503: /* 972503: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 972505: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 972508: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97250b: ret  */
  esp += 4; SPILL(); return;
}

void f_972510(void) {
  LOAD_REGS();
L_972510: /* 972510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972514: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972515: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 972519: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97251a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97251b: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 97251e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97251f: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 972521: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972523: je 0x97257b */
  if (zf) goto L_97257b;
L_972525: /* 972525: cmp dword ptr [ebx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972528: je 0x97257e */
  if (zf) goto L_97257e;
L_97252a: /* 97252a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97252b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97252c: call 0x972770 */
  esp -= 4; W32(esp, 0x972531u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 972531: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 972534: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 972537: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 97253a: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 97253d: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 97253f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972542: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972544: jne 0x97254a */
  if (!zf) goto L_97254a;
L_972546: /* 972546: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 972548: jmp 0x97254d */
  goto L_97254d;
L_97254a: /* 97254a: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
L_97254d: /* 97254d: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 972550: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 972552: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 972554: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 972557: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97255a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97255c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97255f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 972562: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 972565: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 972568: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 97256b: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 97256e: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972570: jne 0x972576 */
  if (!zf) goto L_972576;
L_972572: /* 972572: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 972574: jmp 0x97258c */
  goto L_97258c;
L_972576: /* 972576: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 972579: jmp 0x97258c */
  goto L_97258c;
L_97257b: /* 97257b: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
L_97257e: /* 97257e: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 972581: cmp ebx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972583: jne 0x972589 */
  if (!zf) goto L_972589;
L_972585: /* 972585: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 972587: jmp 0x97258c */
  goto L_97258c;
L_972589: /* 972589: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
L_97258c: /* 97258c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 972590: xor ebp, ebp */
  ebp = 0;
/* 972592: mov dword ptr [ebx + 8], ebp */
  W32((uint32_t)(ebx + 0x8u), ebp);
/* 972595: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 972598: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 97259a: dec dword ptr [eax + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x18u), r);
  }
/* 97259d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9725a1: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9725a4: mov ebx, 1 */
  ebx = 0x1u;
/* 9725a9: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9725ab: jne 0x97269f */
  if (!zf) goto L_97269f;
L_9725b1: /* 9725b1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9725b5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9725b7: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 9725ba: cmp dword ptr [edi + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9725bd: jne 0x97268f */
  if (!zf) goto L_97268f;
L_9725c3: /* 9725c3: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 9725c6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9725c8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9725ca: jne 0x972628 */
  if (!zf) goto L_972628;
L_9725cc: /* 9725cc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9725cf: cmp dword ptr [eax + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9725d2: jne 0x9725e6 */
  if (!zf) goto L_9725e6;
L_9725d4: /* 9725d4: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 9725d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9725d8: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 9725db: call 0x9724b0 */
  esp -= 4; W32(esp, 0x9725e0u); SPILL(); f_9724b0(); if (g_unwind) return; RELOAD();
/* 9725e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9725e3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9725e6: /* 9725e6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9725e8: cmp dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9725eb: jne 0x9725f5 */
  if (!zf) goto L_9725f5;
L_9725ed: /* 9725ed: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9725f0: cmp dword ptr [edx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9725f3: je 0x97264d */
  if (zf) goto L_97264d;
L_9725f5: /* 9725f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9725f8: cmp dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9725fb: jne 0x972611 */
  if (!zf) goto L_972611;
L_9725fd: /* 9725fd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9725ff: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 972602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972603: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 972606: call 0x9724e0 */
  esp -= 4; W32(esp, 0x97260bu); SPILL(); f_9724e0(); if (g_unwind) return; RELOAD();
/* 97260b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97260e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_972611: /* 972611: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 972614: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 972617: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 97261a: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 97261d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97261e: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 972621: call 0x9724b0 */
  esp -= 4; W32(esp, 0x972626u); SPILL(); f_9724b0(); if (g_unwind) return; RELOAD();
/* 972626: jmp 0x97268c */
  goto L_97268c;
L_972628: /* 972628: cmp dword ptr [eax + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97262b: jne 0x97263e */
  if (!zf) goto L_97263e;
L_97262d: /* 97262d: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 972630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972631: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 972634: call 0x9724e0 */
  esp -= 4; W32(esp, 0x972639u); SPILL(); f_9724e0(); if (g_unwind) return; RELOAD();
/* 972639: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97263b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97263e: /* 97263e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 972641: cmp dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972644: jne 0x97265d */
  if (!zf) goto L_97265d;
L_972646: /* 972646: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 972648: cmp dword ptr [edx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97264b: jne 0x97265d */
  if (!zf) goto L_97265d;
L_97264d: /* 97264d: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 972650: cmp dword ptr [esi + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972653: mov edi, esi */
  edi = esi;
/* 972655: je 0x9725c3 */
  if (zf) goto L_9725c3;
L_97265b: /* 97265b: jmp 0x97268f */
  goto L_97268f;
L_97265d: /* 97265d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97265f: cmp dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972662: jne 0x972678 */
  if (!zf) goto L_972678;
L_972664: /* 972664: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 972667: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 97266a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97266b: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 97266e: call 0x9724b0 */
  esp -= 4; W32(esp, 0x972673u); SPILL(); f_9724b0(); if (g_unwind) return; RELOAD();
/* 972673: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 972675: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_972678: /* 972678: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97267b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97267d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 972680: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 972683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972684: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 972687: call 0x9724e0 */
  esp -= 4; W32(esp, 0x97268cu); SPILL(); f_9724e0(); if (g_unwind) return; RELOAD();
L_97268c: /* 97268c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97268f: /* 97268f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 972693: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 972696: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 972698: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 97269c: mov dword ptr [ecx + 0xc], ebx */
  W32((uint32_t)(ecx + 0xcu), ebx);
L_97269f: /* 97269f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9726a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9726a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9726a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9726a3: ret  */
  esp += 4; SPILL(); return;
}

void f_9726b0(void) {
  LOAD_REGS();
L_9726b0: /* 9726b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9726b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9726b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9726b6: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 9726b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9726ba: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x9726bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9726bd: mov esi, eax */
  esi = eax;
/* 9726bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9726c2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9726c4: je 0x9726e8 */
  if (zf) goto L_9726e8;
L_9726c6: /* 9726c6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9726ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9726cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9726cc: call 0x9728e0 */
  esp -= 4; W32(esp, 0x9726d1u); SPILL(); f_9728e0(); if (g_unwind) return; RELOAD();
/* 9726d1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9726d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9726d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9726d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9726d8: call 0x9723a0 */
  esp -= 4; W32(esp, 0x9726ddu); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 9726dd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9726e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9726e1: mov eax, 1 */
  eax = 0x1u;
/* 9726e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9726e7: ret  */
  esp += 4; SPILL(); return;
L_9726e8: /* 9726e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9726e9: xor eax, eax */
  eax = 0;
/* 9726eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9726ec: ret  */
  esp += 4; SPILL(); return;
}

void f_9726f0(void) {
  LOAD_REGS();
L_9726f0: /* 9726f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9726f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9726f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9726f6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9726fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9726fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9726fc: call 0x972510 */
  esp -= 4; W32(esp, 0x972701u); SPILL(); f_972510(); if (g_unwind) return; RELOAD();
/* 972701: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 972704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972705: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972706: call dword ptr [esi + 0x28] */
  { uint32_t t = R32((uint32_t)(esi + 0x28u)); esp -= 4; W32(esp, 0x972709u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 972709: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97270c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97270d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97270e: ret  */
  esp += 4; SPILL(); return;
}

void f_972710(void) {
  LOAD_REGS();
L_972710: /* 972710: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 972714: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 972716: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972718: je 0x972728 */
  if (zf) goto L_972728;
L_97271a: /* 97271a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 97271c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97271e: je 0x972728 */
  if (zf) goto L_972728;
L_972720: /* 972720: mov ecx, eax */
  ecx = eax;
/* 972722: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 972724: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972726: jne 0x972720 */
  if (!zf) goto L_972720;
L_972728: /* 972728: xor eax, eax */
  eax = 0;
/* 97272a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97272c: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 97272f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 972730: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 972732: ret  */
  esp += 4; SPILL(); return;
}

void f_972740(void) {
  LOAD_REGS();
L_972740: /* 972740: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 972744: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 972746: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972748: je 0x97275a */
  if (zf) goto L_97275a;
L_97274a: /* 97274a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97274d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97274f: je 0x97275a */
  if (zf) goto L_97275a;
L_972751: /* 972751: mov ecx, eax */
  ecx = eax;
/* 972753: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 972756: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972758: jne 0x972751 */
  if (!zf) goto L_972751;
L_97275a: /* 97275a: xor eax, eax */
  eax = 0;
/* 97275c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97275e: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 972761: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 972762: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 972764: ret  */
  esp += 4; SPILL(); return;
}

void f_972770(void) {
  LOAD_REGS();
L_972770: /* 972770: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 972774: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 972777: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97277b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97277d: je 0x97278e */
  if (zf) goto L_97278e;
L_97277f: /* 97277f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 972781: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972783: je 0x9727ad */
  if (zf) goto L_9727ad;
L_972785: /* 972785: mov eax, ecx */
  eax = ecx;
/* 972787: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 972789: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97278b: jne 0x972785 */
  if (!zf) goto L_972785;
L_97278d: /* 97278d: ret  */
  esp += 4; SPILL(); return;
L_97278e: /* 97278e: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 972791: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972793: je 0x9727a3 */
  if (zf) goto L_9727a3;
L_972795: /* 972795: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972798: jne 0x9727a3 */
  if (!zf) goto L_9727a3;
L_97279a: /* 97279a: mov ecx, eax */
  ecx = eax;
/* 97279c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97279f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727a1: jne 0x972795 */
  if (!zf) goto L_972795;
L_9727a3: /* 9727a3: xor ecx, ecx */
  ecx = 0;
/* 9727a5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727a7: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9727aa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9727ab: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9727ad: /* 9727ad: ret  */
  esp += 4; SPILL(); return;
}

void f_9727b0(void) {
  LOAD_REGS();
L_9727b0: /* 9727b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9727b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9727b6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9727ba: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727bc: je 0x9727cf */
  if (zf) goto L_9727cf;
L_9727be: /* 9727be: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9727c1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727c3: je 0x9727ed */
  if (zf) goto L_9727ed;
L_9727c5: /* 9727c5: mov eax, ecx */
  eax = ecx;
/* 9727c7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 9727ca: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727cc: jne 0x9727c5 */
  if (!zf) goto L_9727c5;
L_9727ce: /* 9727ce: ret  */
  esp += 4; SPILL(); return;
L_9727cf: /* 9727cf: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9727d2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727d4: je 0x9727e3 */
  if (zf) goto L_9727e3;
L_9727d6: /* 9727d6: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727d8: jne 0x9727e3 */
  if (!zf) goto L_9727e3;
L_9727da: /* 9727da: mov ecx, eax */
  ecx = eax;
/* 9727dc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9727df: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727e1: jne 0x9727d6 */
  if (!zf) goto L_9727d6;
L_9727e3: /* 9727e3: xor ecx, ecx */
  ecx = 0;
/* 9727e5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9727e7: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9727ea: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9727eb: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9727ed: /* 9727ed: ret  */
  esp += 4; SPILL(); return;
}

void f_9727f0(void) {
  LOAD_REGS();
L_9727f0: /* 9727f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9727f4: mov dword ptr [eax + 0x30], 1 */
  W32((uint32_t)(eax + 0x30u), 0x1u);
/* 9727fb: ret  */
  esp += 4; SPILL(); return;
}

void f_972800(void) {
  LOAD_REGS();
L_972800: /* 972800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972804: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 972807: ret  */
  esp += 4; SPILL(); return;
}

void f_972810(void) {
  LOAD_REGS();
L_972810: /* 972810: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 972814: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 972817: xor eax, eax */
  eax = 0;
/* 972819: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97281b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 97281e: ret  */
  esp += 4; SPILL(); return;
}

void f_972820(void) {
  LOAD_REGS();
L_972820: /* 972820: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 972824: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 972827: sub eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 97282a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 97282c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97282e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97282f: ret  */
  esp += 4; SPILL(); return;
}

void f_972830(void) {
  LOAD_REGS();
L_972830: /* 972830: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 972834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972835: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 972839: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97283b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97283c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97283d: call 0x972850 */
  esp -= 4; W32(esp, 0x972842u); SPILL(); f_972850(); if (g_unwind) return; RELOAD();
/* 972842: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972845: ret  */
  esp += 4; SPILL(); return;
}

void f_972850(void) {
  LOAD_REGS();
L_972850: /* 972850: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972851: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 972855: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972856: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97285a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97285c: je 0x972897 */
  if (zf) goto L_972897;
L_97285e: /* 97285e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97285f: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 972863: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972865: je 0x97288e */
  if (zf) goto L_97288e;
L_972867: /* 972867: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 972869: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97286a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97286b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97286c: call 0x972850 */
  esp -= 4; W32(esp, 0x972871u); SPILL(); f_972850(); if (g_unwind) return; RELOAD();
/* 972871: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972874: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972876: jne 0x97288e */
  if (!zf) goto L_97288e;
L_972878: /* 972878: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 97287b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97287c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97287d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97287e: call 0x972850 */
  esp -= 4; W32(esp, 0x972883u); SPILL(); f_972850(); if (g_unwind) return; RELOAD();
/* 972883: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972886: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972888: jne 0x97288e */
  if (!zf) goto L_97288e;
L_97288a: /* 97288a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97288b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97288c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97288d: ret  */
  esp += 4; SPILL(); return;
L_97288e: /* 97288e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97288f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972890: mov eax, 1 */
  eax = 0x1u;
/* 972895: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972896: ret  */
  esp += 4; SPILL(); return;
L_972897: /* 972897: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972898: xor eax, eax */
  eax = 0;
/* 97289a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97289b: ret  */
  esp += 4; SPILL(); return;
}

void f_9728a0(void) {
  LOAD_REGS();
L_9728a0: /* 9728a0: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 9728a2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9728a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9728a8: ret  */
  esp += 4; SPILL(); return;
}

void f_9728b0(void) {
  LOAD_REGS();
L_9728b0: /* 9728b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9728b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9728b5: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9728bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9728bb: ret  */
  esp += 4; SPILL(); return;
}

void f_9728c0(void) {
  LOAD_REGS();
L_9728c0: /* 9728c0: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 9728c2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9728c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9728c8: xor ecx, ecx */
  ecx = 0;
/* 9728ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9728cc: je 0x9728dd */
  if (zf) goto L_9728dd;
L_9728ce: /* 9728ce: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9728d2: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 9728d5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9728d8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9728da: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_9728dd: /* 9728dd: ret  */
  esp += 4; SPILL(); return;
}

void f_9728e0(void) {
  LOAD_REGS();
L_9728e0: /* 9728e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9728e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9728e8: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 9728eb: xor ecx, ecx */
  ecx = 0;
/* 9728ed: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9728f0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9728f2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9728f5: ret  */
  esp += 4; SPILL(); return;
}

void f_972900(void) {
  LOAD_REGS();
L_972900: /* 972900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972905: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97290bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97290b: ret  */
  esp += 4; SPILL(); return;
}

void f_972910(void) {
  LOAD_REGS();
L_972910: /* 972910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972914: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 972917: ret  */
  esp += 4; SPILL(); return;
}

void f_972920(void) {
  LOAD_REGS();
L_972920: /* 972920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972924: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 972927: ret  */
  esp += 4; SPILL(); return;
}

void f_972930(void) {
  LOAD_REGS();
L_972930: /* 972930: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 972934: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 972938: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 97293b: ret  */
  esp += 4; SPILL(); return;
}

void f_972940(void) {
  LOAD_REGS();
L_972940: /* 972940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972944: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 972947: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972949: je 0x97295d */
  if (zf) goto L_97295d;
L_97294b: /* 97294b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97294e: je 0x97295d */
  if (zf) goto L_97295d;
L_972950: /* 972950: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 972953: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972955: je 0x97295d */
  if (zf) goto L_97295d;
L_972957: /* 972957: mov eax, 1 */
  eax = 0x1u;
/* 97295c: ret  */
  esp += 4; SPILL(); return;
L_97295d: /* 97295d: xor eax, eax */
  eax = 0;
/* 97295f: ret  */
  esp += 4; SPILL(); return;
}

void f_972960(void) {
  LOAD_REGS();
L_972960: /* 972960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972961: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 972965: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972966: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972967: call 0x972710 */
  esp -= 4; W32(esp, 0x97296cu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 97296c: mov esi, eax */
  esi = eax;
/* 97296e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972971: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972973: je 0x97299d */
  if (zf) goto L_97299d;
L_972975: /* 972975: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972976: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 97297a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97297b: nop  */
/* 97297c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_972980: /* 972980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972981: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972982: call 0x972770 */
  esp -= 4; W32(esp, 0x972987u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 972987: mov edi, eax */
  edi = eax;
/* 972989: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 97298d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97298e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97298f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972990: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x972992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 972992: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972995: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972997: mov esi, edi */
  esi = edi;
/* 972999: jne 0x972980 */
  if (!zf) goto L_972980;
L_97299b: /* 97299b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97299c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_97299d: /* 97299d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97299e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97299f: ret  */
  esp += 4; SPILL(); return;
}

void f_9729a0(void) {
  LOAD_REGS();
L_9729a0: /* 9729a0: jmp 0x9729b0 */
  SPILL(); f_9729b0(); return;
}

void f_9729b0(void) {
  LOAD_REGS();
L_9729b0: /* 9729b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9729b4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9729b8: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9729ba: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 9729bd: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 9729bf: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 9729c2: ret  */
  esp += 4; SPILL(); return;
}

void f_9729d0(void) {
  LOAD_REGS();
L_9729d0: /* 9729d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9729d4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9729d6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9729da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9729db: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9729df: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9729e2: mov dword ptr [ecx + 0x10], esi */
  W32((uint32_t)(ecx + 0x10u), esi);
/* 9729e5: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9729e8: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 9729ea: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9729ed: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9729ef: inc dword ptr [edx + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + 0x18u), r);
  }
/* 9729f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9729f3: ret  */
  esp += 4; SPILL(); return;
}

void f_972a00(void) {
  LOAD_REGS();
L_972a00: /* 972a00: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 972a06: mov edx, dword ptr [esp + 0x114] */
  edx = R32((uint32_t)(esp + 0x114u));
/* 972a0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972a0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972a0f: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 972a11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972a12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972a13: xor eax, eax */
  eax = 0;
/* 972a15: mov ecx, 0x3f */
  ecx = 0x3fu;
/* 972a1a: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 972a1e: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 972a26: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 972a28: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 972a2b: lea ebx, [edx + 4] */
  ebx = (uint32_t)(edx + 0x4u);
/* 972a2e: xor edx, edx */
  edx = 0;
/* 972a30: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 972a33: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 972a36: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 972a3a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 972a3e: ja 0x972a4a */
  if ((!cf && !zf)) goto L_972a4a;
L_972a40: /* 972a40: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972a42: je 0x972a4a */
  if (zf) goto L_972a4a;
L_972a44: /* 972a44: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 972a46: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 972a48: jae 0x972a40 */
  if (!cf) goto L_972a40;
L_972a4a: /* 972a4a: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 972a4c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 972a4e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972a50: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 972a54: je 0x972b31 */
  if (zf) goto L_972b31;
L_972a5a: /* 972a5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_972a60: /* 972a60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972a62: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 972a64: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 972a68: jne 0x972b0b */
  if (!zf) goto L_972b0b;
L_972a6e: /* 972a6e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 972a72: mov ecx, eax */
  ecx = eax;
/* 972a74: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 972a75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972a77: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 972a7b: jne 0x972ad6 */
  if (!zf) goto L_972ad6;
L_972a7d: /* 972a7d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 972a81: mov ecx, eax */
  ecx = eax;
/* 972a83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972a85: mov edx, 1 */
  edx = 0x1u;
/* 972a8a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 972a8e: je 0x972ad6 */
  if (zf) goto L_972ad6;
L_972a90: /* 972a90: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 972a94: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972a96: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 972a9e: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 972aa1: je 0x972ad2 */
  if (zf) goto L_972ad2;
L_972aa3: /* 972aa3: lea ebx, [esp + 0x24] */
  ebx = (uint32_t)(esp + 0x24u);
/* 972aa7: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 972aab: nop  */
/* 972aac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_972ab0: /* 972ab0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 972ab3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 972ab6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 972ab9: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 972abf: mov eax, ecx */
  eax = ecx;
/* 972ac1: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 972ac3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 972ac4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972ac6: mov ebx, edi */
  ebx = edi;
/* 972ac8: jne 0x972ab0 */
  if (!zf) goto L_972ab0;
L_972aca: /* 972aca: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 972ace: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
L_972ad2: /* 972ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972ad4: jne 0x972b0b */
  if (!zf) goto L_972b0b;
L_972ad6: /* 972ad6: mov ecx, dword ptr [esp + edx*4 + 0x20] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x20u));
/* 972ada: mov eax, edx */
  eax = edx;
/* 972adc: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 972adf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972ae1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 972ae4: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 972ae6: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 972ae9: mov eax, esi */
  eax = esi;
/* 972aeb: lea esi, [esp + edx*4 + 0x20] */
  esi = (uint32_t)(esp + edx*4 + 0x20u);
/* 972aef: je 0x972b23 */
  if (zf) goto L_972b23;
L_972af1: /* 972af1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 972af4: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 972afa: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 972afd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 972b00: mov eax, ecx */
  eax = ecx;
/* 972b02: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 972b04: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 972b05: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972b07: jne 0x972af1 */
  if (!zf) goto L_972af1;
L_972b09: /* 972b09: jmp 0x972b23 */
  goto L_972b23;
L_972b0b: /* 972b0b: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 972b0e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 972b11: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 972b13: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 972b16: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 972b19: mov dword ptr [esp + edx*4 + 0x20], esi */
  W32((uint32_t)(esp + edx*4 + 0x20u), esi);
/* 972b1d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 972b21: xor eax, eax */
  eax = 0;
L_972b23: /* 972b23: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972b25: mov esi, edi */
  esi = edi;
/* 972b27: jne 0x972a60 */
  if (!zf) goto L_972a60;
L_972b2d: /* 972b2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972b2f: jne 0x972b33 */
  if (!zf) goto L_972b33;
L_972b31: /* 972b31: mov eax, ebp */
  eax = ebp;
L_972b33: /* 972b33: xor edx, edx */
  edx = 0;
L_972b35: /* 972b35: mov ecx, dword ptr [esp + edx*4 + 0x20] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x20u));
/* 972b39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972b3b: je 0x972b45 */
  if (zf) goto L_972b45;
L_972b3d: /* 972b3d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 972b40: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 972b43: mov eax, ecx */
  eax = ecx;
L_972b45: /* 972b45: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 972b46: cmp edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 972b49: jb 0x972b35 */
  if (cf) goto L_972b35;
L_972b4b: /* 972b4b: mov ecx, 1 */
  ecx = 0x1u;
/* 972b50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972b51: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 972b54: mov dword ptr [ebp + 4], ebp */
  W32((uint32_t)(ebp + 0x4u), ebp);
/* 972b57: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 972b5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972b5b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 972b5e: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 972b61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 972b62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972b63: add esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972b69: ret  */
  esp += 4; SPILL(); return;
}

void f_972b70(void) {
  LOAD_REGS();
L_972b70: /* 972b70: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 972b73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972b74: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 972b78: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972b79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972b7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972b7c: call 0x972710 */
  esp -= 4; W32(esp, 0x972b81u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 972b81: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 972b85: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 972b86: mov edi, eax */
  edi = eax;
/* 972b88: call 0x972710 */
  esp -= 4; W32(esp, 0x972b8du); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 972b8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972b90: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 972b92: mov esi, eax */
  esi = eax;
/* 972b94: je 0x972c27 */
  if (zf) goto L_972c27;
L_972b9a: /* 972b9a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 972b9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972b9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972ba0: mov dword ptr [ebx + 0x18], 0 */
  W32((uint32_t)(ebx + 0x18u), 0x0u);
/* 972ba7: call 0x9729b0 */
  esp -= 4; W32(esp, 0x972bacu); SPILL(); f_9729b0(); if (g_unwind) return; RELOAD();
/* 972bac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972baf: nop  */
L_972bb0: /* 972bb0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972bb2: je 0x972be9 */
  if (zf) goto L_972be9;
L_972bb4: /* 972bb4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972bb6: je 0x972bca */
  if (zf) goto L_972bca;
L_972bb8: /* 972bb8: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 972bbb: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 972bbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 972bbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 972bc0: call dword ptr [ebx + 0x20] */
  { uint32_t t = R32((uint32_t)(ebx + 0x20u)); esp -= 4; W32(esp, 0x972bc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 972bc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972bc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 972bc8: jge 0x972bed */
  if ((sf == of)) goto L_972bed;
L_972bca: /* 972bca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972bcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972bcc: call 0x972770 */
  esp -= 4; W32(esp, 0x972bd1u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 972bd1: mov ebp, eax */
  ebp = eax;
/* 972bd3: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 972bd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972bd7: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 972bdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 972bdd: call 0x9729d0 */
  esp -= 4; W32(esp, 0x972be2u); SPILL(); f_9729d0(); if (g_unwind) return; RELOAD();
/* 972be2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972be5: mov edi, ebp */
  edi = ebp;
/* 972be7: jmp 0x972bb0 */
  goto L_972bb0;
L_972be9: /* 972be9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 972beb: je 0x972c10 */
  if (zf) goto L_972c10;
L_972bed: /* 972bed: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 972bf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972bf2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 972bf3: call 0x972770 */
  esp -= 4; W32(esp, 0x972bf8u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 972bf8: mov ebp, eax */
  ebp = eax;
/* 972bfa: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 972bfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972bfe: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 972c02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972c03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 972c04: call 0x9729d0 */
  esp -= 4; W32(esp, 0x972c09u); SPILL(); f_9729d0(); if (g_unwind) return; RELOAD();
/* 972c09: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972c0c: mov esi, ebp */
  esi = ebp;
/* 972c0e: jmp 0x972bb0 */
  goto L_972bb0;
L_972c10: /* 972c10: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 972c14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 972c15: call 0x972c30 */
  esp -= 4; W32(esp, 0x972c1au); SPILL(); f_972c30(); if (g_unwind) return; RELOAD();
/* 972c1a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 972c1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 972c1f: call 0x972a00 */
  esp -= 4; W32(esp, 0x972c24u); SPILL(); f_972a00(); if (g_unwind) return; RELOAD();
/* 972c24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_972c27: /* 972c27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972c28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972c29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 972c2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972c2b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972c2e: ret  */
  esp += 4; SPILL(); return;
}

void f_972c30(void) {
  LOAD_REGS();
L_972c30: /* 972c30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 972c34: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
/* 972c3b: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 972c3d: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 972c40: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* 972c43: ret  */
  esp += 4; SPILL(); return;
}

void f_972c50(void) {
  LOAD_REGS();
L_972c50: /* 972c50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 972c54: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 972c57: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 972c5b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 972c5d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 972c60: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 972c63: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 972c65: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 972c68: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 972c6c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 972c6e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 972c70: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 972c73: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 972c76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972c78: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 972c7b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 972c7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972c80: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 972c84: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 972c86: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972c88: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 972c8a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 972c8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972c8e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 972c92: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 972c96: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972c98: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 972c9a: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 972c9c: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* 972c9e: fmul st(7) */
  ST0 = ST0 * STI(7);
/* 972ca0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972ca2: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 972ca4: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 972ca6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972ca8: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 972caa: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 972cae: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 972cb2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 972cb4: fsqrt  */
  ST0 = sqrt(ST0);
/* 972cb6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 972cba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972cbc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972cbe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972cc0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972cc2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972cc4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 972cc8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 972cce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_972ce0(void) {
  LOAD_REGS();
L_972ce0: /* 972ce0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 972ce3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 972ce7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 972cea: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 972cec: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 972cef: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 972cf3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 972cf7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 972cf9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 972cfb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 972cfd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 972d00: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 972d03: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 972d06: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 972d09: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 972d0b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 972d0f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 972d12: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 972d15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972d18: ret 8 */
  esp += 12; SPILL(); return;
}

void f_972d20(void) {
  LOAD_REGS();
L_972d20: /* 972d20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 972d24: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 972d27: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 972d2a: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 972d2d: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 972d2f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 972d35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972d37: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 972d3a: jne 0x972d81 */
  if (!zf) goto L_972d81;
L_972d3c: /* 972d3c: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 972d42: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 972d46: fsqrt  */
  ST0 = sqrt(ST0);
/* 972d48: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 972d4e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972d50: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 972d52: fdivr dword ptr [0x9f7194] */
  ST0 = (F32((uint32_t)(0x9f7194u))) / ST0;
/* 972d58: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 972d5b: fsub dword ptr [ecx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x24u)));
/* 972d5e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972d60: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 972d63: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 972d66: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 972d69: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972d6b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 972d6e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 972d71: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 972d74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972d76: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 972d79: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972d7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972d7e: ret 8 */
  esp += 12; SPILL(); return;
L_972d81: /* 972d81: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972d83: xor edx, edx */
  edx = 0;
/* 972d85: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 972d88: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 972d8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972d8c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 972d8f: jne 0x972d96 */
  if (!zf) goto L_972d96;
L_972d91: /* 972d91: mov edx, 1 */
  edx = 0x1u;
L_972d96: /* 972d96: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 972d99: lea eax, [edx + edx*4] */
  eax = (uint32_t)(edx + edx*4);
/* 972d9c: fcomp dword ptr [ecx + eax*4] */
  fpu_com(ST0, F32((uint32_t)(ecx + eax*4)));
  FPOP();
/* 972d9f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972da1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 972da4: jne 0x972dab */
  if (!zf) goto L_972dab;
L_972da6: /* 972da6: mov edx, 2 */
  edx = 0x2u;
L_972dab: /* 972dab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 972dac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 972dad: mov esi, dword ptr [edx*4 + 0xa21758] */
  esi = R32((uint32_t)(edx*4 + 0xa21758u));
/* 972db4: lea eax, [edx + edx*4] */
  eax = (uint32_t)(edx + edx*4);
/* 972db7: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 972dba: lea ebx, [esi + esi*4] */
  ebx = (uint32_t)(esi + esi*4);
/* 972dbd: fsub dword ptr [ecx + ebx*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + ebx*4)));
/* 972dc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 972dc1: mov edi, dword ptr [esi*4 + 0xa21758] */
  edi = R32((uint32_t)(esi*4 + 0xa21758u));
/* 972dc8: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 972dcb: fsub dword ptr [ecx + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + eax*4)));
/* 972dce: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 972dd4: fsqrt  */
  ST0 = sqrt(ST0);
/* 972dd6: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 972ddc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972dde: fstp dword ptr [esp + edx*4 + 0xc] */
  WF32((uint32_t)(esp + edx*4 + 0xcu), ST0); FPOP();
/* 972de2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 972de8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972dea: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 972ded: jnp 0x972df5 */
  if (!pf) goto L_972df5;
L_972def: /* 972def: fdivr dword ptr [0x9f7194] */
  ST0 = (F32((uint32_t)(0x9f7194u))) / ST0;
L_972df5: /* 972df5: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* 972df8: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 972dfb: lea ebx, [esi + edi*4] */
  ebx = (uint32_t)(esi + edi*4);
/* 972dfe: fsub dword ptr [ecx + ebx*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + ebx*4)));
/* 972e01: lea eax, [edx + esi*4] */
  eax = (uint32_t)(edx + esi*4);
/* 972e04: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 972e07: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972e09: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 972e0d: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 972e10: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 972e13: fadd dword ptr [ecx + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + ebx*4)));
/* 972e16: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 972e19: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972e1b: fstp dword ptr [esp + esi*4 + 0xc] */
  WF32((uint32_t)(esp + esi*4 + 0xcu), ST0); FPOP();
/* 972e1f: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 972e22: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 972e26: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 972e29: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 972e2b: fstp dword ptr [esp + edi*4 + 0xc] */
  WF32((uint32_t)(esp + edi*4 + 0xcu), ST0); FPOP();
/* 972e2f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 972e33: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 972e37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 972e38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972e3a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 972e3e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 972e41: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 972e45: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 972e48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 972e49: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 972e4c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 972e4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 972e4f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972e52: ret 8 */
  esp += 12; SPILL(); return;
}

void f_972e60(void) {
  LOAD_REGS();
L_972e60: /* 972e60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 972e64: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 972e67: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 972e6a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 972e6c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 972e6f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 972e71: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 972e73: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 972e75: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 972e77: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972e79: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 972e7b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 972e7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972e7f: fsqrt  */
  ST0 = sqrt(ST0);
/* 972e81: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 972e83: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972e85: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972e87: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 972e89: fabs  */
  ST0 = fabs(ST0);
/* 972e8b: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 972e91: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972e93: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 972e96: jnp 0x972f6d */
  if (!pf) goto L_972f6d;
L_972e9c: /* 972e9c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 972ea2: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 972ea6: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 972ea8: lea eax, [edx + 4] */
  eax = (uint32_t)(edx + 0x4u);
/* 972eab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 972ead: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 972eaf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 972eb3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 972eb5: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 972eb8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 972ebc: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 972ebf: xor ecx, ecx */
  ecx = 0;
/* 972ec1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 972ec5: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 972ec9: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 972ecf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 972ed1: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 972ed3: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 972ed7: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 972ed9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 972edd: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 972ee1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 972ee3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 972ee7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 972eea: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 972eee: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 972ef1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972ef3: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 972ef7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 972ef9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972efb: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 972eff: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 972f01: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 972f05: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 972f08: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 972f0c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 972f0f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 972f11: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 972f15: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 972f19: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 972f1b: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 972f1f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 972f22: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 972f24: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 972f28: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 972f2c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 972f2f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 972f33: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 972f35: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 972f37: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 972f3b: nop  */
/* 972f3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_972f40: /* 972f40: fld dword ptr [esp + ecx] */
  { double v = F32((uint32_t)(esp + ecx)); FPUSH(v); }
/* 972f44: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 972f47: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 972f49: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 972f4c: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 972f4f: fadd dword ptr [esp + ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + ecx + 0x8u)));
/* 972f53: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 972f57: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 972f5b: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 972f5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972f60: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 972f63: jl 0x972f40 */
  if ((sf != of)) goto L_972f40;
L_972f65: /* 972f65: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 972f67: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972f6a: ret 0xc */
  esp += 16; SPILL(); return;
L_972f6d: /* 972f6d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 972f6f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 972f72: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_972f80(void) {
  LOAD_REGS();
L_972f80: /* 972f80: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 972f83: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 972f87: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 972f8b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 972f8e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 972f91: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 972f93: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 972f95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972f97: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 972f9a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 972f9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 972f9f: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 972fa3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 972fa9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 972fad: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 972fb3: fabs  */
  ST0 = fabs(ST0);
/* 972fb5: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 972fbb: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 972fc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972fc3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 972fc6: jp 0x972fce */
  if (pf) goto L_972fce;
L_972fc8: /* 972fc8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 972fcc: jmp 0x972fd4 */
  goto L_972fd4;
L_972fce: /* 972fce: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 972fd2: fsub st(1) */
  ST0 = ST0 - STI(1);
L_972fd4: /* 972fd4: fabs  */
  ST0 = fabs(ST0);
/* 972fd6: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 972fdc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972fde: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 972fe1: jnp 0x9730b9 */
  if (!pf) goto L_9730b9;
L_972fe7: /* 972fe7: fld qword ptr [0xa14ed8] */
  { double v = F64((uint32_t)(0xa14ed8u)); FPUSH(v); }
/* 972fed: fabs  */
  ST0 = fabs(ST0);
/* 972fef: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 972ff5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 972ff7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 972ffa: jp 0x973002 */
  if (pf) goto L_973002;
L_972ffc: /* 972ffc: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973000: jmp 0x973012 */
  goto L_973012;
L_973002: /* 973002: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973006: fsub dword ptr [0xa08220] */
  ST0 = ST0 - (F32((uint32_t)(0xa08220u)));
/* 97300c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
L_973012: /* 973012: fabs  */
  ST0 = fabs(ST0);
/* 973014: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 97301a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97301c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97301f: jnp 0x9730b9 */
  if (!pf) goto L_9730b9;
L_973025: /* 973025: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 973028: xor eax, eax */
  eax = 0;
/* 97302a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 97302d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 973030: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 973033: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973035: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 973039: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 97303b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 97303e: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 973041: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 973043: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973045: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 973049: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 97304b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 97304e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 973051: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 973053: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973055: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 973059: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 97305f: nop  */
L_973060: /* 973060: fld dword ptr [esp + eax*4] */
  { double v = F32((uint32_t)(esp + eax*4)); FPUSH(v); }
/* 973064: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 973065: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 973068: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97306a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 97306c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 97306e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973070: jl 0x973060 */
  if ((sf != of)) goto L_973060;
L_973072: /* 973072: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 973078: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97307a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97307d: jne 0x9730a0 */
  if (!zf) goto L_9730a0;
L_97307f: /* 97307f: fsqrt  */
  ST0 = sqrt(ST0);
/* 973081: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 973083: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 973087: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 973089: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 97308d: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 973091: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 973093: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 973097: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 97309b: jmp 0x973182 */
  goto L_973182;
L_9730a0: /* 9730a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9730a2: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 9730aa: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9730ae: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9730b4: jmp 0x973182 */
  goto L_973182;
L_9730b9: /* 9730b9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9730bb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9730c1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9730c4: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 9730c8: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9730cb: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 9730cf: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 9730d3: xor eax, eax */
  eax = 0;
L_9730d5: /* 9730d5: fld dword ptr [esp + eax*4] */
  { double v = F32((uint32_t)(esp + eax*4)); FPUSH(v); }
/* 9730d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9730da: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9730dd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9730df: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9730e1: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9730e3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9730e5: jl 0x9730d5 */
  if ((sf != of)) goto L_9730d5;
L_9730e7: /* 9730e7: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9730ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9730ef: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9730f2: jne 0x973150 */
  if (!zf) goto L_973150;
L_9730f4: /* 9730f4: fsqrt  */
  ST0 = sqrt(ST0);
/* 9730f6: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 9730f8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9730fc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9730fe: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973102: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 973106: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97310a: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 97310e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973112: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 973116: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97311a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97311e: fcomp dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
  FPOP();
/* 973124: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973126: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973129: jp 0x97315a */
  if (pf) goto L_97315a;
L_97312b: /* 97312b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97312f: fcomp dword ptr [0xa07ebc] */
  fpu_com(ST0, F32((uint32_t)(0xa07ebcu)));
  FPOP();
/* 973135: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973137: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97313a: jne 0x97315a */
  if (!zf) goto L_97315a;
L_97313c: /* 97313c: fchs  */
  ST0 = -ST0;
/* 97313e: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 973146: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 97314a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 97314e: jmp 0x973172 */
  goto L_973172;
L_973150: /* 973150: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973152: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 973158: jmp 0x97313c */
  goto L_97313c;
L_97315a: /* 97315a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97315c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 973164: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973168: fchs  */
  ST0 = -ST0;
/* 97316a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 97316e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_973172: /* 973172: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 973176: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 973177: call 0x9731e0 */
  esp -= 4; W32(esp, 0x97317cu); SPILL(); f_9731e0(); if (g_unwind) return; RELOAD();
/* 97317c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97317e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_973182: /* 973182: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 973188: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 97318c: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 973190: fsqrt  */
  ST0 = sqrt(ST0);
/* 973192: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 973196: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 97319a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97319e: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 9731a2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9731a6: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9731a8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9731ac: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9731b0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9731b4: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9731b7: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 9731bd: fsqrt  */
  ST0 = sqrt(ST0);
/* 9731bf: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9731c1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9731c3: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9731c6: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9731c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9731cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9731ce: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9731e0(void) {
  LOAD_REGS();
L_9731e0: /* 9731e0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9731e6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9731ea: xor edx, edx */
  edx = 0;
/* 9731ec: xor eax, eax */
  eax = 0;
/* 9731ee: mov edi, edi */
  edi = edi;
L_9731f0: /* 9731f0: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 9731f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9731f4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9731f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9731f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9731fb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9731fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9731ff: jl 0x9731f0 */
  if ((sf != of)) goto L_9731f0;
L_973201: /* 973201: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 973207: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973209: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97320c: jne 0x97322f */
  if (!zf) goto L_97322f;
L_97320e: /* 97320e: fsqrt  */
  ST0 = sqrt(ST0);
/* 973210: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 973216: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 973218: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97321a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 97321c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 97321e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 973220: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 973223: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 973226: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 973229: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 97322c: ret 4 */
  esp += 8; SPILL(); return;
L_97322f: /* 97322f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973231: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 973237: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 97323d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 973240: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 973243: ret 4 */
  esp += 8; SPILL(); return;
}

void f_973250(void) {
  LOAD_REGS();
L_973250: /* 973250: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 973253: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 973257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 973258: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 97325c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 97325e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 973260: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 973262: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 973265: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 973268: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97326c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 97326f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 973272: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 973276: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 973279: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97327b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 97327f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 973282: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 973286: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 973289: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97328b: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 97328e: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 973291: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973293: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 973297: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97329b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9732a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9732a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9732a6: jp 0x9732ea */
  if (pf) goto L_9732ea;
L_9732a8: /* 9732a8: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9732ac: fchs  */
  ST0 = -ST0;
/* 9732ae: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9732b2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9732b6: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9732bc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9732c0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9732c4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9732ca: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9732ce: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9732d2: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9732d8: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9732dc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9732e0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9732e6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_9732ea: /* 9732ea: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9732f0: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 9732f4: fcomp qword ptr [0xa21548] */
  fpu_com(ST0, F64((uint32_t)(0xa21548u)));
  FPOP();
/* 9732fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9732fc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9732ff: jne 0x973342 */
  if (!zf) goto L_973342;
L_973301: /* 973301: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 973305: call 0x99cc96 */
  esp -= 4; W32(esp, 0x97330au); SPILL(); hle_CIacos(); RELOAD();
/* 97330a: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 97330e: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973310: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 973316: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 973318: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 97331c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97331e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 973324: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 973328: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 97332c: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 97332e: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 973332: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 973336: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 97333a: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 97333c: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 973340: jmp 0x973350 */
  goto L_973350;
L_973342: /* 973342: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 973348: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 97334c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_973350: /* 973350: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 973354: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973356: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 973359: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97335d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 97335f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973361: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 973364: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973366: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 973369: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97336d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 97336f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973371: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 973374: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 973378: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 97337a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 97337c: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 97337f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973381: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 973384: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 973386: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 973388: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 973389: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 97338d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 97338f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973391: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 973393: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973395: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973398: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9733a0(void) {
  LOAD_REGS();
L_9733a0: /* 9733a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9733a1: mov ebp, esp */
  ebp = esp;
/* 9733a3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9733a6: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9733a9: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9733ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9733ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9733ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9733af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9733b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9733b2: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9733b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9733b7: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9733bdu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9733bd: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9733c0: xor eax, eax */
  eax = 0;
/* 9733c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 9733c5: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* 9733c9: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9733cb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9733ce: not ecx */
  ecx = ~ecx;
/* 9733d0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9733d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9733d3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9733d7: jle 0x973485 */
  if ((zf || sf != of)) goto L_973485;
L_9733dd: /* 9733dd: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9733e0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9733e3: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 9733e7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9733eb: nop  */
/* 9733ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9733f0: /* 9733f0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9733f3: xor ebx, ebx */
  ebx = 0;
/* 9733f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9733f7: jle 0x97345c */
  if ((zf || sf != of)) goto L_97345c;
L_9733f9: /* 9733f9: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9733fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_973400: /* 973400: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 973402: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 973408: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97340a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97340d: jp 0x97341d */
  if (pf) goto L_97341d;
L_97340f: /* 97340f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 973413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 973415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 973416: push 0xb02194 */
  { uint32_t v = 0xb02194u; esp -= 4; W32(esp, v); }
/* 97341b: jmp 0x973429 */
  goto L_973429;
L_97341d: /* 97341d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 97341f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 973422: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 973425: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 973428: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_973429: /* 973429: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97342a: call dword ptr [0xcfb0e8] */
  esp -= 4; W32(esp, 0x973430u); SPILL(); f_4139a4(); if (g_unwind) return; /* MSVCR70!fprintf */ RELOAD();
/* 973430: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 973433: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 973436: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973439: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97343b: jge 0x97344c */
  if ((sf == of)) goto L_97344c;
L_97343d: /* 97343d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97343e: push 0xaf45a8 */
  { uint32_t v = 0xaf45a8u; esp -= 4; W32(esp, v); }
/* 973443: call dword ptr [0xcfb0d4] */
  esp -= 4; W32(esp, 0x973449u); SPILL(); f_42c86c(); if (g_unwind) return; /* MSVCR70!fputs */ RELOAD();
/* 973449: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97344c: /* 97344c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97344f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 973452: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 973454: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 973457: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 973458: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97345a: jl 0x973400 */
  if ((sf != of)) goto L_973400;
L_97345c: /* 97345c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97345d: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 973462: call dword ptr [0xcfb0d4] */
  esp -= 4; W32(esp, 0x973468u); SPILL(); f_42c86c(); if (g_unwind) return; /* MSVCR70!fputs */ RELOAD();
/* 973468: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 97346c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 973470: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 973473: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973476: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 973477: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 97347b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 97347f: jne 0x9733f0 */
  if (!zf) goto L_9733f0;
L_973485: /* 973485: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 973486: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 973487: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 973488: mov esp, ebp */
  esp = ebp;
/* 97348a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97348b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_973490(void) {
  LOAD_REGS();
L_973490: /* 973490: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 973494: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 973498: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97349c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97349d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9734a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9734a2: mov ecx, dword ptr [0xcfb090] */
  ecx = R32((uint32_t)(0xcfb090u));
/* 9734a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9734a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9734aa: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9734ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9734ae: call 0x9733a0 */
  esp -= 4; W32(esp, 0x9734b3u); SPILL(); f_9733a0(); if (g_unwind) return; RELOAD();
/* 9734b3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9734c0(void) {
  LOAD_REGS();
L_9734c0: /* 9734c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9734c4: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9734c7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9734ca: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 9734cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9734cf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9734d2: jp 0x973544 */
  if (pf) goto L_973544;
L_9734d4: /* 9734d4: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 9734d7: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 9734da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9734dc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9734df: jp 0x973544 */
  if (pf) goto L_973544;
L_9734e1: /* 9734e1: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 9734e4: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 9734e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9734e9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9734ec: jp 0x973544 */
  if (pf) goto L_973544;
L_9734ee: /* 9734ee: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 9734f1: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 9734f4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9734f8: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 9734fb: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 9734fe: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 973501: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 973504: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973506: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 973509: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 97350c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 973510: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 973513: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 973515: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 973517: fsubr dword ptr [esp] */
  ST0 = (F32((uint32_t)(esp))) - ST0;
/* 97351b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 97351d: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 973520: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 973523: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 973527: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 97352a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97352c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 97352e: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 973531: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973533: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 973539: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97353b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97353e: jp 0x97354c */
  if (pf) goto L_97354c;
L_973540: /* 973540: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973542: fstp st(0) */
  STI(0) = ST0; FPOP();
L_973544: /* 973544: xor eax, eax */
  eax = 0;
/* 973546: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973549: ret 4 */
  esp += 8; SPILL(); return;
L_97354c: /* 97354c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 973552: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 973554: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 973558: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97355a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 97355e: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 973561: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 973564: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 973566: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973568: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 97356a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97356c: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 973570: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 973572: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 973575: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 973578: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 97357b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 97357d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 97357f: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 973583: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 973587: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 97358a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97358e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 973591: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 973593: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973595: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 973597: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973599: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 97359d: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 97359f: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 9735a2: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 9735a5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 9735a8: fsubr dword ptr [esp] */
  ST0 = (F32((uint32_t)(esp))) - ST0;
/* 9735ac: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9735b0: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9735b2: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 9735b5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 9735b8: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 9735bb: mov eax, 1 */
  eax = 0x1u;
/* 9735c0: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 9735c4: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9735c8: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 9735cb: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 9735ce: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9735d0: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 9735d3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 9735d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9735d8: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 9735db: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 9735de: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 9735e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9735e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9735f0(void) {
  LOAD_REGS();
L_9735f0: /* 9735f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9735f3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9735f7: xor eax, eax */
  eax = 0;
/* 9735f9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 9735fd: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 973601: xor edx, edx */
  edx = 0;
/* 973603: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 973607: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97360a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_973610: /* 973610: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 973613: mov dword ptr [esp + edx*4], 0x3f800000 */
  W32((uint32_t)(esp + edx*4), 0x3f800000u);
/* 97361b: fabs  */
  ST0 = fabs(ST0);
/* 97361d: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 973621: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973623: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973626: jp 0x97362e */
  if (pf) goto L_97362e;
L_973628: /* 973628: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 97362c: jmp 0x973638 */
  goto L_973638;
L_97362e: /* 97362e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 973631: fsubr dword ptr [esp] */
  ST0 = (F32((uint32_t)(esp))) - ST0;
/* 973635: fdiv dword ptr [ecx - 8] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0xfffffff8u)));
L_973638: /* 973638: fabs  */
  ST0 = fabs(ST0);
/* 97363a: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 97363e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973640: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973643: jp 0x9736bc */
  if (pf) goto L_9736bc;
L_973645: /* 973645: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 973648: fabs  */
  ST0 = fabs(ST0);
/* 97364a: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 97364e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973650: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973653: jp 0x97365b */
  if (pf) goto L_97365b;
L_973655: /* 973655: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 973659: jmp 0x973665 */
  goto L_973665;
L_97365b: /* 97365b: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 97365e: fsubr dword ptr [esp + 4] */
  ST0 = (F32((uint32_t)(esp + 0x4u))) - ST0;
/* 973662: fdiv dword ptr [ecx - 4] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0xfffffffcu)));
L_973665: /* 973665: fabs  */
  ST0 = fabs(ST0);
/* 973667: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 97366b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97366d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973670: jp 0x9736bc */
  if (pf) goto L_9736bc;
L_973672: /* 973672: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 973674: fabs  */
  ST0 = fabs(ST0);
/* 973676: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 97367a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97367c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97367f: jp 0x973687 */
  if (pf) goto L_973687;
L_973681: /* 973681: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973685: jmp 0x97368f */
  goto L_97368f;
L_973687: /* 973687: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 973689: fsubr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) - ST0;
/* 97368d: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
L_97368f: /* 97368f: fabs  */
  ST0 = fabs(ST0);
/* 973691: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 973695: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973697: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97369a: jp 0x9736bc */
  if (pf) goto L_9736bc;
L_97369c: /* 97369c: mov dword ptr [esp + edx*4], 0 */
  W32((uint32_t)(esp + edx*4), 0x0u);
/* 9736a4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9736a5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9736a8: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9736ab: jb 0x973610 */
  if (cf) goto L_973610;
L_9736b1: /* 9736b1: mov eax, 1 */
  eax = 0x1u;
/* 9736b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9736b9: ret 8 */
  esp += 12; SPILL(); return;
L_9736bc: /* 9736bc: xor eax, eax */
  eax = 0;
/* 9736be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9736c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9736d0(void) {
  LOAD_REGS();
L_9736d0: /* 9736d0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9736d3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9736d7: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9736db: xor edx, edx */
  edx = 0;
/* 9736dd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9736df: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9736e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9736e2: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 9736e6: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 9736ea: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 9736ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9736ee: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 9736f2: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9736f6: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9736f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9736fa: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 9736fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9736ff: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 973703: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 973706: lea edi, [ecx + 8] */
  edi = (uint32_t)(ecx + 0x8u);
/* 973709: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 97370d: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 973710: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 973714: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 973717: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 97371b: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 97371e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 973722: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 973725: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 973729: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 97372c: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 97372f: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 973732: mov dword ptr [ebx + 0x14], edx */
  W32((uint32_t)(ebx + 0x14u), edx);
/* 973735: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 973739: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 97373c: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 97373f: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
L_973742: /* 973742: fld dword ptr [edi - 8] */
  { double v = F32((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 973745: fabs  */
  ST0 = fabs(ST0);
/* 973747: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 97374a: fabs  */
  ST0 = fabs(ST0);
/* 97374c: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 973750: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 973753: fcom dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
/* 973757: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973759: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97375c: je 0x973764 */
  if (zf) goto L_973764;
L_97375e: /* 97375e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973760: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
L_973764: /* 973764: fst dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0);
/* 973767: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 973769: fabs  */
  ST0 = fabs(ST0);
/* 97376b: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 97376f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 973771: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973773: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 973776: jne 0x97377e */
  if (!zf) goto L_97377e;
L_973778: /* 973778: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97377a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
L_97377e: /* 97377e: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 973781: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 973782: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 973785: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 973788: jb 0x973742 */
  if (cf) goto L_973742;
L_97378a: /* 97378a: xor edx, edx */
  edx = 0;
/* 97378c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_973790: /* 973790: fld dword ptr [esi + edx*4] */
  { double v = F32((uint32_t)(esi + edx*4)); FPUSH(v); }
/* 973793: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 973799: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97379b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97379e: jnp 0x9737ac */
  if (!pf) goto L_9737ac;
L_9737a0: /* 9737a0: fld dword ptr [esi + edx*4] */
  { double v = F32((uint32_t)(esi + edx*4)); FPUSH(v); }
/* 9737a3: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9737a9: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
L_9737ac: /* 9737ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9737ad: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9737b0: jb 0x973790 */
  if (cf) goto L_973790;
L_9737b2: /* 9737b2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9737b4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9737b6: fabs  */
  ST0 = fabs(ST0);
/* 9737b8: fcomp dword ptr [0xa21764] */
  fpu_com(ST0, F32((uint32_t)(0xa21764u)));
  FPOP();
/* 9737be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9737c0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9737c3: jp 0x973837 */
  if (pf) goto L_973837;
L_9737c5: /* 9737c5: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9737c8: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9737cb: fabs  */
  ST0 = fabs(ST0);
/* 9737cd: fcomp dword ptr [0xa21764] */
  fpu_com(ST0, F32((uint32_t)(0xa21764u)));
  FPOP();
/* 9737d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9737d5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9737d8: jnp 0x9737ff */
  if (!pf) goto L_9737ff;
L_9737da: /* 9737da: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 9737de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9737df: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9737e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9737e4: call 0x972ce0 */
  esp -= 4; W32(esp, 0x9737e9u); SPILL(); f_972ce0(); if (g_unwind) return; RELOAD();
/* 9737e9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9737eb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9737ee: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 9737f2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9737f4: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 9737f7: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 9737fd: jmp 0x973837 */
  goto L_973837;
L_9737ff: /* 9737ff: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 973802: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 973805: fabs  */
  ST0 = fabs(ST0);
/* 973807: fcomp dword ptr [0xa21764] */
  fpu_com(ST0, F32((uint32_t)(0xa21764u)));
  FPOP();
/* 97380d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97380f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973812: jnp 0x973837 */
  if (!pf) goto L_973837;
L_973814: /* 973814: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 973818: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 973819: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97381d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97381e: call 0x972ce0 */
  esp -= 4; W32(esp, 0x973823u); SPILL(); f_972ce0(); if (g_unwind) return; RELOAD();
/* 973823: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 973825: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 973828: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 97382c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 97382e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 973831: mov dword ptr [edx], 2 */
  W32((uint32_t)(edx), 0x2u);
L_973837: /* 973837: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 973839: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 97383f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973841: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973844: jnp 0x97389e */
  if (!pf) goto L_97389e;
L_973846: /* 973846: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 973849: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 97384f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973851: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973854: jnp 0x97389e */
  if (!pf) goto L_97389e;
L_973856: /* 973856: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 97385a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 97385e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 973862: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 973866: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973868: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 97386b: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 97386d: fabs  */
  ST0 = fabs(ST0);
/* 97386f: fcomp dword ptr [0xa21764] */
  fpu_com(ST0, F32((uint32_t)(0xa21764u)));
  FPOP();
/* 973875: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973877: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97387a: jp 0x97389e */
  if (pf) goto L_97389e;
L_97387c: /* 97387c: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 973880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 973881: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 973885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 973886: call 0x972ce0 */
  esp -= 4; W32(esp, 0x97388bu); SPILL(); f_972ce0(); if (g_unwind) return; RELOAD();
/* 97388b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 97388e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 973891: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 973895: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 973898: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 97389b: add dword ptr [eax], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
L_97389e: /* 97389e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9738a2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9738a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9738aa: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9738ad: jp 0x9738b7 */
  if (pf) goto L_9738b7;
L_9738af: /* 9738af: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9738b5: jmp 0x9738c1 */
  goto L_9738c1;
L_9738b7: /* 9738b7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9738bd: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
L_9738c1: /* 9738c1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9738c5: mov dword ptr [ebx], 0x3f800000 */
  W32((uint32_t)(ebx), 0x3f800000u);
/* 9738cb: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 9738ce: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 9738d2: lea edx, [ebx + 0x10] */
  edx = (uint32_t)(ebx + 0x10u);
/* 9738d5: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 9738d8: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9738da: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 9738dd: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 9738e1: lea ebx, [esp + 0x10] */
  ebx = (uint32_t)(esp + 0x10u);
/* 9738e5: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9738e7: mov dword ptr [esp + 0x44], 2 */
  W32((uint32_t)(esp + 0x44u), 0x2u);
/* 9738ef: nop  */
L_9738f0: /* 9738f0: mov ebp, dword ptr [ebx + ecx] */
  ebp = R32((uint32_t)(ebx + ecx));
/* 9738f3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9738f5: fmul dword ptr [edi + eax] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax)));
/* 9738f8: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9738fb: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9738fe: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 973901: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 973904: mov dword ptr [edx - 0x10], 0x3f800000 */
  W32((uint32_t)(edx + 0xfffffff0u), 0x3f800000u);
/* 97390b: mov dword ptr [ecx - 4], ebp */
  W32((uint32_t)(ecx + 0xfffffffcu), ebp);
/* 97390e: dec dword ptr [esp + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 973912: jne 0x9738f0 */
  if (!zf) goto L_9738f0;
L_973914: /* 973914: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 973918: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97391a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97391e: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 973922: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 973925: fsubr dword ptr [esp + 0x20] */
  ST0 = (F32((uint32_t)(esp + 0x20u))) - ST0;
/* 973929: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 97392c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 973930: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 973933: fsubr dword ptr [esp + 0x24] */
  ST0 = (F32((uint32_t)(esp + 0x24u))) - ST0;
/* 973937: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 97393a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 97393d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 973943: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973945: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973948: jnp 0x97397a */
  if (!pf) goto L_97397a;
L_97394a: /* 97394a: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 97394d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 973950: fabs  */
  ST0 = fabs(ST0);
/* 973952: fcomp dword ptr [0xa21764] */
  fpu_com(ST0, F32((uint32_t)(0xa21764u)));
  FPOP();
/* 973958: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97395a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97395d: jnp 0x97397a */
  if (!pf) goto L_97397a;
L_97395f: /* 97395f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973963: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 973966: fsubr dword ptr [esp + 0x2c] */
  ST0 = (F32((uint32_t)(esp + 0x2cu))) - ST0;
/* 97396a: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 97396d: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 973973: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 973975: fstp dword ptr [edx + 0x1c] */
  WF32((uint32_t)(edx + 0x1cu), ST0); FPOP();
/* 973978: jmp 0x973981 */
  goto L_973981;
L_97397a: /* 97397a: mov dword ptr [edx + 0x1c], 0 */
  W32((uint32_t)(edx + 0x1cu), 0x0u);
L_973981: /* 973981: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 973985: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 973986: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 973989: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97398a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97398b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97398c: fsubr dword ptr [esp + 0x20] */
  ST0 = (F32((uint32_t)(esp + 0x20u))) - ST0;
/* 973990: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 973993: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 973996: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973998: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 97399b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97399e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_9739b0(void) {
  LOAD_REGS();
L_9739b0: /* 9739b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9739b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9739b8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9739bc: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 9739bf: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 9739c2: mov edx, 3 */
  edx = 0x3u;
/* 9739c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_9739c8: /* 9739c8: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 9739ca: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9739cc: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 9739ce: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9739d0: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9739d3: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9739d6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9739d7: jne 0x9739c8 */
  if (!zf) goto L_9739c8;
L_9739d9: /* 9739d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9739da: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9739e0(void) {
  LOAD_REGS();
L_9739e0: /* 9739e0: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9739e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9739e4: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 9739e8: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 9739ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9739ed: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 9739f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9739f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9739f3: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9739f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9739f8: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 9739fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9739fd: call 0x9736d0 */
  esp -= 4; W32(esp, 0x973a02u); SPILL(); f_9736d0(); if (g_unwind) return; RELOAD();
/* 973a02: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 973a06: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 973a0a: xor edx, edx */
  edx = 0;
/* 973a0c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 973a10: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 973a14: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 973a18: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973a1a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 973a1e: mov edi, edi */
  edi = edi;
L_973a20: /* 973a20: fld dword ptr [esp + edx*4 + 4] */
  { double v = F32((uint32_t)(esp + edx*4 + 0x4u)); FPUSH(v); }
/* 973a24: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 973a26: fabs  */
  ST0 = fabs(ST0);
/* 973a28: fcomp dword ptr [0xa21764] */
  fpu_com(ST0, F32((uint32_t)(0xa21764u)));
  FPOP();
/* 973a2e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973a30: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973a33: jnp 0x973bf8 */
  if (!pf) goto L_973bf8;
L_973a39: /* 973a39: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 973a3b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 973a3c: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 973a42: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 973a45: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 973a48: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 973a4b: jb 0x973a20 */
  if (cf) goto L_973a20;
L_973a4d: /* 973a4d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 973a51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 973a52: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 973a56: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 973a5a: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 973a5d: fchs  */
  ST0 = -ST0;
/* 973a5f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 973a63: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 973a67: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 973a6b: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 973a6f: fchs  */
  ST0 = -ST0;
/* 973a71: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 973a75: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 973a79: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 973a7d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 973a81: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 973a85: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 973a89: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 973a8d: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 973a91: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 973a95: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 973a99: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 973a9d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 973aa1: fchs  */
  ST0 = -ST0;
/* 973aa3: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 973aa7: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 973aab: fchs  */
  ST0 = -ST0;
/* 973aad: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 973ab1: jb 0x973ac4 */
  if (cf) goto L_973ac4;
L_973ab3: /* 973ab3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 973ab5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 973ab7: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 973abb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 973abc: call 0x9739b0 */
  esp -= 4; W32(esp, 0x973ac1u); SPILL(); f_9739b0(); if (g_unwind) return; RELOAD();
/* 973ac1: sub esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_973ac4: /* 973ac4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 973ac6: je 0x973ad5 */
  if (zf) goto L_973ad5;
L_973ac8: /* 973ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 973ac9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 973acb: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 973acf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 973ad0: call 0x9739b0 */
  esp -= 4; W32(esp, 0x973ad5u); SPILL(); f_9739b0(); if (g_unwind) return; RELOAD();
L_973ad5: /* 973ad5: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 973ad9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 973add: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 973ae1: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 973ae5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973ae7: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 973aeb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 973aef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973af1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 973af3: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 973af7: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 973afb: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 973aff: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 973b03: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b05: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 973b09: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 973b0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b0f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 973b12: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 973b16: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 973b1a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 973b1e: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 973b22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b24: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 973b28: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 973b2c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b2e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 973b31: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 973b35: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 973b39: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 973b3d: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 973b41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b43: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 973b47: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 973b4b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b4d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 973b50: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 973b54: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 973b58: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 973b5c: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 973b60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b62: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 973b66: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 973b6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b6c: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 973b6f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 973b73: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 973b77: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 973b7b: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 973b7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b81: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 973b85: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 973b89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973b8b: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 973b8e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 973b92: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 973b96: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 973b9a: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 973b9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973ba0: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 973ba4: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 973ba8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973baa: fstp dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0); FPOP();
/* 973bad: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 973bb1: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 973bb5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 973bb9: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 973bbd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973bbf: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 973bc3: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 973bc7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973bc9: fstp dword ptr [edi + 0x1c] */
  WF32((uint32_t)(edi + 0x1cu), ST0); FPOP();
/* 973bcc: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 973bd0: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 973bd4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 973bd8: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 973bdc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973bde: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 973be2: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 973be6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973be8: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
/* 973beb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 973bec: mov eax, 1 */
  eax = 0x1u;
/* 973bf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 973bf2: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973bf5: ret 4 */
  esp += 8; SPILL(); return;
L_973bf8: /* 973bf8: xor eax, eax */
  eax = 0;
/* 973bfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 973bfb: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973bfe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_973c10(void) {
  LOAD_REGS();
L_973c10: /* 973c10: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973c14: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 973c18: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973c1a: xor ecx, ecx */
  ecx = 0;
/* 973c1c: mov dword ptr [eax], 0x3f800000 */
  W32((uint32_t)(eax), 0x3f800000u);
/* 973c22: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 973c25: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 973c28: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 973c2b: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 973c2e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973c32: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973c34: fst dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0);
/* 973c37: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973c39: fchs  */
  ST0 = -ST0;
/* 973c3b: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 973c3e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 973c40: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 973c43: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 973c46: ret 8 */
  esp += 12; SPILL(); return;
}

void f_973c50(void) {
  LOAD_REGS();
L_973c50: /* 973c50: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973c54: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 973c58: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973c5a: xor ecx, ecx */
  ecx = 0;
/* 973c5c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 973c5f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 973c62: mov dword ptr [eax + 0x10], 0x3f800000 */
  W32((uint32_t)(eax + 0x10u), 0x3f800000u);
/* 973c69: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 973c6c: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 973c6f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973c73: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973c75: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 973c77: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 973c79: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973c7b: fchs  */
  ST0 = -ST0;
/* 973c7d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 973c80: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 973c82: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 973c85: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 973c88: ret 8 */
  esp += 12; SPILL(); return;
}

void f_973c90(void) {
  LOAD_REGS();
L_973c90: /* 973c90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 973c94: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 973c97: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* 973c9a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 973c9c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_973ca0(void) {
  LOAD_REGS();
L_973ca0: /* 973ca0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973ca4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 973ca8: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973caa: xor ecx, ecx */
  ecx = 0;
/* 973cac: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 973caf: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 973cb2: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 973cb5: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 973cb8: mov dword ptr [eax + 0x20], 0x3f800000 */
  W32((uint32_t)(eax + 0x20u), 0x3f800000u);
/* 973cbf: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 973cc3: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973cc5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 973cc7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 973cc9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973ccb: fchs  */
  ST0 = -ST0;
/* 973ccd: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 973cd0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 973cd2: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 973cd5: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 973cd8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_973ce0(void) {
  LOAD_REGS();
L_973ce0: /* 973ce0: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 973ce3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 973ce4: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 973ce8: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 973ceb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 973ced: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 973cf0: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 973cf4: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 973cf7: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 973cfb: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 973cfe: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 973d02: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 973d05: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 973d09: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 973d0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 973d0d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 973d11: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 973d14: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 973d18: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 973d1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 973d1c: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 973d20: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 973d24: mov ecx, 9 */
  ecx = 0x9u;
/* 973d29: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* 973d2d: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 973d31: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 973d35: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 973d37: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 973d3b: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 973d3e: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 973d42: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 973d45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973d47: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973d4b: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 973d4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973d4f: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 973d53: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 973d57: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 973d5a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 973d5e: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 973d60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973d62: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 973d66: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 973d69: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973d6b: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 973d6f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 973d73: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 973d76: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 973d7a: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 973d7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973d7f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 973d83: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 973d85: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973d87: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 973d8b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 973d8f: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 973d92: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 973d96: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 973d99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973d9b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973d9f: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 973da2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973da4: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 973da8: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 973dac: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 973daf: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 973db3: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 973db6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973db8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 973dbc: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 973dbf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973dc1: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 973dc5: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 973dc9: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 973dcc: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 973dd0: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 973dd3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973dd5: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 973dd9: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 973ddc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973dde: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 973de2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 973de6: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 973de9: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 973df0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973df4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 973df5: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 973df8: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 973dfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 973dfd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973dff: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 973e03: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 973e06: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973e08: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 973e0c: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 973e10: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 973e13: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 973e17: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 973e1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973e1c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 973e20: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 973e23: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973e25: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 973e29: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 973e2d: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 973e30: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 973e34: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 973e37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973e39: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 973e3d: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 973e40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973e42: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 973e46: call 0x9735f0 */
  esp -= 4; W32(esp, 0x973e4bu); SPILL(); f_9735f0(); if (g_unwind) return; RELOAD();
/* 973e4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 973e4d: je 0x973ea9 */
  if (zf) goto L_973ea9;
L_973e4f: /* 973e4f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 973e52: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 973e55: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 973e58: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 973e5b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973e5d: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 973e60: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 973e63: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 973e66: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 973e69: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 973e6c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973e6e: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 973e70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973e72: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 973e75: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 973e78: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 973e7b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 973e7e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973e80: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 973e83: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973e85: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 973e8b: fsub dword ptr [esp + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x80u)));
/* 973e92: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 973e94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 973e96: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 973e99: jp 0x973ea9 */
  if (pf) goto L_973ea9;
L_973e9b: /* 973e9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 973e9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 973e9d: mov eax, 1 */
  eax = 0x1u;
/* 973ea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 973ea3: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973ea6: ret 8 */
  esp += 12; SPILL(); return;
L_973ea9: /* 973ea9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 973eaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 973eab: xor eax, eax */
  eax = 0;
/* 973ead: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 973eae: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 973eb1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_973ec0(void) {
  LOAD_REGS();
L_973ec0: /* 973ec0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 973ec1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973ec5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 973ec9: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973ecb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973ecf: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973ed1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 973ed5: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973ed7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 973edb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 973edf: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973ee1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973ee5: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973ee7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 973eeb: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973eef: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973ef1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973ef5: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 973ef9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 973efb: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 973eff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 973f01: fchs  */
  ST0 = -ST0;
/* 973f03: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 973f06: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973f08: fchs  */
  ST0 = -ST0;
/* 973f0a: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 973f0d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973f11: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 973f13: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973f15: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 973f17: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973f19: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 973f1b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973f1d: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 973f20: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973f22: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 973f24: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 973f28: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 973f2a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973f2e: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 973f30: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973f32: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 973f35: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 973f39: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 973f3b: fchs  */
  ST0 = -ST0;
/* 973f3d: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 973f40: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 973f42: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 973f44: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 973f46: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 973f48: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 973f4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973f4d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973f51: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 973f53: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 973f57: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 973f59: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973f5b: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 973f5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973f60: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 973f64: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 973f66: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 973f69: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 973f6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 973f6c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_973f70(void) {
  LOAD_REGS();
L_973f70: /* 973f70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 973f71: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973f75: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 973f79: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973f7b: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 973f7f: xor ecx, ecx */
  ecx = 0;
/* 973f81: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 973f84: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 973f87: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 973f8a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 973f8e: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 973f91: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 973f95: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 973f98: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 973f9b: mov dword ptr [eax + 0x3c], 0x3f800000 */
  W32((uint32_t)(eax + 0x3cu), 0x3f800000u);
/* 973fa2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973fa6: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973fa8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 973fac: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973fae: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 973fb2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 973fb6: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973fb8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973fbc: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 973fbe: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 973fc2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 973fc6: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 973fc8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973fcc: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 973fd0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 973fd2: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 973fd6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 973fd8: fchs  */
  ST0 = -ST0;
/* 973fda: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 973fdd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973fdf: fchs  */
  ST0 = -ST0;
/* 973fe1: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 973fe4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 973fe8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 973fea: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973fec: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 973fee: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973ff0: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 973ff2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 973ff4: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 973ff7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 973ff9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 973ffb: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 973fff: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 974001: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 974005: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 974007: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974009: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 97400c: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 974010: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 974012: fchs  */
  ST0 = -ST0;
/* 974014: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 974017: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 974019: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 97401b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 97401d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97401f: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 974022: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974024: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 974028: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 97402a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 97402e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 974030: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 974032: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 974035: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974037: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 97403b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 97403d: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 974040: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974042: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 974043: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_974050(void) {
  LOAD_REGS();
L_974050: /* 974050: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 974053: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 974057: xor eax, eax */
  eax = 0;
/* 974059: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 97405d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 974061: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 974065: xor edx, edx */
  edx = 0;
/* 974067: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 97406b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97406e: mov edi, edi */
  edi = edi;
L_974070: /* 974070: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 974073: mov dword ptr [esp + edx*4], 0x3f800000 */
  W32((uint32_t)(esp + edx*4), 0x3f800000u);
/* 97407b: fabs  */
  ST0 = fabs(ST0);
/* 97407d: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 974081: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 974083: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 974086: jp 0x97408e */
  if (pf) goto L_97408e;
L_974088: /* 974088: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 97408c: jmp 0x974098 */
  goto L_974098;
L_97408e: /* 97408e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 974091: fsubr dword ptr [esp] */
  ST0 = (F32((uint32_t)(esp))) - ST0;
/* 974095: fdiv dword ptr [ecx - 8] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0xfffffff8u)));
L_974098: /* 974098: fabs  */
  ST0 = fabs(ST0);
/* 97409a: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 97409e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9740a0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9740a3: jp 0x97414d */
  if (pf) goto L_97414d;
L_9740a9: /* 9740a9: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 9740ac: fabs  */
  ST0 = fabs(ST0);
/* 9740ae: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9740b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9740b4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9740b7: jp 0x9740bf */
  if (pf) goto L_9740bf;
L_9740b9: /* 9740b9: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9740bd: jmp 0x9740c9 */
  goto L_9740c9;
L_9740bf: /* 9740bf: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 9740c2: fsubr dword ptr [esp + 4] */
  ST0 = (F32((uint32_t)(esp + 0x4u))) - ST0;
/* 9740c6: fdiv dword ptr [ecx - 4] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0xfffffffcu)));
L_9740c9: /* 9740c9: fabs  */
  ST0 = fabs(ST0);
/* 9740cb: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9740cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9740d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9740d4: jp 0x97414d */
  if (pf) goto L_97414d;
L_9740d6: /* 9740d6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9740d8: fabs  */
  ST0 = fabs(ST0);
/* 9740da: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9740de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9740e0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9740e3: jp 0x9740eb */
  if (pf) goto L_9740eb;
L_9740e5: /* 9740e5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9740e9: jmp 0x9740f3 */
  goto L_9740f3;
L_9740eb: /* 9740eb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9740ed: fsubr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) - ST0;
/* 9740f1: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
L_9740f3: /* 9740f3: fabs  */
  ST0 = fabs(ST0);
/* 9740f5: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9740f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9740fb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9740fe: jp 0x97414d */
  if (pf) goto L_97414d;
L_974100: /* 974100: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 974103: fabs  */
  ST0 = fabs(ST0);
/* 974105: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 974109: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97410b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97410e: jp 0x974116 */
  if (pf) goto L_974116;
L_974110: /* 974110: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 974114: jmp 0x974120 */
  goto L_974120;
L_974116: /* 974116: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 974119: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 97411d: fdiv dword ptr [ecx + 4] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x4u)));
L_974120: /* 974120: fabs  */
  ST0 = fabs(ST0);
/* 974122: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 974126: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 974128: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97412b: jp 0x97414d */
  if (pf) goto L_97414d;
L_97412d: /* 97412d: mov dword ptr [esp + edx*4], 0 */
  W32((uint32_t)(esp + edx*4), 0x0u);
/* 974135: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 974136: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 974139: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 97413c: jb 0x974070 */
  if (cf) goto L_974070;
L_974142: /* 974142: mov eax, 1 */
  eax = 0x1u;
/* 974147: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97414a: ret 8 */
  esp += 12; SPILL(); return;
L_97414d: /* 97414d: xor eax, eax */
  eax = 0;
/* 97414f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974152: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974160(void) {
  LOAD_REGS();
L_974160: /* 974160: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 974166: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 974169: fabs  */
  ST0 = fabs(ST0);
/* 97416b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97416c: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 974170: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 974174: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 974177: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 974179: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97417c: jnp 0x974184 */
  if (!pf) goto L_974184;
L_97417e: /* 97417e: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
L_974184: /* 974184: fabs  */
  ST0 = fabs(ST0);
/* 974186: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 97418a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97418c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97418f: jp 0x974198 */
  if (pf) goto L_974198;
L_974191: /* 974191: mov eax, 1 */
  eax = 0x1u;
/* 974196: jmp 0x97419a */
  goto L_97419a;
L_974198: /* 974198: xor eax, eax */
  eax = 0;
L_97419a: /* 97419a: xor ecx, ecx */
  ecx = 0;
/* 97419c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97419e: je 0x97421c */
  if (zf) goto L_97421c;
L_9741a0: /* 9741a0: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
L_9741a3: /* 9741a3: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9741a6: jae 0x9741cb */
  if (!cf) goto L_9741cb;
L_9741a8: /* 9741a8: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9741aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9741ab: fabs  */
  ST0 = fabs(ST0);
/* 9741ad: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 9741b1: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9741b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9741b6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9741b9: jp 0x9741c2 */
  if (pf) goto L_9741c2;
L_9741bb: /* 9741bb: mov eax, 1 */
  eax = 0x1u;
/* 9741c0: jmp 0x9741a3 */
  goto L_9741a3;
L_9741c2: /* 9741c2: xor eax, eax */
  eax = 0;
/* 9741c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9741c5: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9741c8: ret 8 */
  esp += 12; SPILL(); return;
L_9741cb: /* 9741cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9741cd: je 0x97421c */
  if (zf) goto L_97421c;
L_9741cf: /* 9741cf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9741d1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9741d4: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9741d7: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 9741db: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9741de: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 9741e2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9741e5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9741e9: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9741ec: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9741f0: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 9741f3: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 9741f7: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 9741fa: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9741fe: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 974202: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 974206: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 97420a: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 97420d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97420e: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 974212: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 974213: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 974217: call 0x973ce0 */
  esp -= 4; W32(esp, 0x97421cu); SPILL(); f_973ce0(); if (g_unwind) return; RELOAD();
L_97421c: /* 97421c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97421d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974220: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974230(void) {
  LOAD_REGS();
L_974230: /* 974230: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 974236: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97423a: xor edx, edx */
  edx = 0;
/* 97423c: xor eax, eax */
  eax = 0;
/* 97423e: mov edi, edi */
  edi = edi;
L_974240: /* 974240: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 974243: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 974244: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 974247: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 974249: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 97424b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 97424d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97424f: jl 0x974240 */
  if ((sf != of)) goto L_974240;
L_974251: /* 974251: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 974257: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 974259: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97425c: jne 0x97427c */
  if (!zf) goto L_97427c;
L_97425e: /* 97425e: fsqrt  */
  ST0 = sqrt(ST0);
/* 974260: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 974266: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 974268: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 97426a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 97426c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97426e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 974271: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 974274: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 974277: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 97427a: jmp 0x97428a */
  goto L_97428a;
L_97427c: /* 97427c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97427e: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 974284: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 974287: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_97428a: /* 97428a: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 97428d: xor eax, eax */
  eax = 0;
/* 97428f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 974292: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 974295: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 974298: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97429a: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 97429d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 97429f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9742a1: fchs  */
  ST0 = -ST0;
/* 9742a3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9742a5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9742a7: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 9742aa: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 9742ad: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9742af: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9742b2: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 9742b5: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 9742b8: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9742bb: fadd dword ptr [ecx + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x18u)));
/* 9742be: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 9742c1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9742c7: /* 9742c7: fld dword ptr [ecx + eax*4 + 0x10] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x10u)); FPUSH(v); }
/* 9742cb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9742cc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9742cf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9742d1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9742d3: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9742d5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9742d7: jl 0x9742c7 */
  if ((sf != of)) goto L_9742c7;
L_9742d9: /* 9742d9: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9742df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9742e1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9742e4: jne 0x974306 */
  if (!zf) goto L_974306;
L_9742e6: /* 9742e6: fsqrt  */
  ST0 = sqrt(ST0);
/* 9742e8: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9742ee: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9742f0: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9742f3: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 9742f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9742f8: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 9742fb: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 9742fe: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 974301: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 974304: jmp 0x974315 */
  goto L_974315;
L_974306: /* 974306: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974308: mov dword ptr [ecx + 0x10], 0x3f800000 */
  W32((uint32_t)(ecx + 0x10u), 0x3f800000u);
/* 97430f: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 974312: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
L_974315: /* 974315: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 974318: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 97431b: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 97431e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 974321: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 974323: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 974326: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 974329: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 97432c: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 97432f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 974331: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 974333: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 974336: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 974339: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 97433b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 97433e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 974341: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 974343: fstp dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 974346: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974350(void) {
  LOAD_REGS();
L_974350: /* 974350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974354: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 974357: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 97435a: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 97435d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97435f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 974362: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 974364: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 974367: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974369: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 97436b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 97436d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97436f: fchs  */
  ST0 = -ST0;
/* 974371: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 974374: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 974376: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 974379: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 97437b: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 97437e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974380: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 974382: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 974385: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974387: fchs  */
  ST0 = -ST0;
/* 974389: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 97438c: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 97438f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 974391: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 974394: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974396: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 974398: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 97439b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97439d: fchs  */
  ST0 = -ST0;
/* 97439f: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 9743a2: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 9743a5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9743a8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9743ab: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 9743ae: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 9743b1: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9743b4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9743b7: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 9743ba: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 9743bd: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 9743c0: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 9743c3: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 9743c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9743d0(void) {
  LOAD_REGS();
L_9743d0: /* 9743d0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9743d3: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9743d7: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9743da: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9743dd: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9743df: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9743e1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9743e3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9743e5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9743e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9743e9: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9743eb: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9743ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9743ef: fsqrt  */
  ST0 = sqrt(ST0);
/* 9743f1: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9743f5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9743f7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9743f9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9743fb: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9743ff: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 974403: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 974405: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 974408: jnp 0x974594 */
  if (!pf) goto L_974594;
L_97440e: /* 97440e: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 974412: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 974416: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 974418: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97441b: jnp 0x974594 */
  if (!pf) goto L_974594;
L_974421: /* 974421: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 974425: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 974429: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 97442d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97442e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97442f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974430: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 974434: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 974436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974437: fadd dword ptr [edx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x30u)));
/* 97443a: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 97443d: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 974441: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 974444: fadd dword ptr [edx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x34u)));
/* 974447: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 97444a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 97444e: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 974451: xor esi, esi */
  esi = 0;
/* 974453: fadd dword ptr [edx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x38u)));
/* 974456: mov dword ptr [eax + 0x3c], 0x3f800000 */
  W32((uint32_t)(eax + 0x3cu), 0x3f800000u);
/* 97445d: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 974460: mov dword ptr [eax + 0x1c], esi */
  W32((uint32_t)(eax + 0x1cu), esi);
/* 974463: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 974466: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 974469: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 97446d: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 974471: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 974477: fdiv dword ptr [esp + 0x48] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x48u)));
/* 97447b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 97447d: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 97447f: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 974485: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 974487: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 974489: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 97448b: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 97448f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 974491: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 974493: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 974495: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 974498: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97449a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 97449c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 97449f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9744a1: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9744a3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9744a5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9744a7: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9744ab: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 9744b1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9744b5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9744b7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9744b9: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9744bb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9744bd: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 9744bf: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9744c3: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 9744c9: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9744cd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9744cf: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9744d3: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 9744d9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9744dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9744df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9744e1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9744e5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9744e7: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9744ea: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9744ec: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9744ef: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9744f1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9744f3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9744f7: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9744f9: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9744fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9744ff: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 974503: lea ebx, [edx + 0x10] */
  ebx = (uint32_t)(edx + 0x10u);
/* 974506: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 974508: mov edi, eax */
  edi = eax;
/* 97450a: mov ebp, 3 */
  ebp = 0x3u;
/* 97450f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 974512: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 974514: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 974517: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 974519: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 97451b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 97451f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 974521: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 974523: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 974527: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974529: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 97452d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 974530: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 974533: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 974535: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 974537: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97453b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 97453d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 97453f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 974543: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 974545: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 974549: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97454b: nop  */
/* 97454c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_974550: /* 974550: mov edx, edi */
  edx = edi;
/* 974552: mov eax, ebx */
  eax = ebx;
/* 974554: mov esi, 3 */
  esi = 0x3u;
/* 974559: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_974560: /* 974560: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 974563: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 974566: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 974569: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97456c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 97456d: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 974570: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 974573: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974575: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 974577: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 97457a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97457c: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 97457f: jne 0x974560 */
  if (!zf) goto L_974560;
L_974581: /* 974581: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 974584: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 974587: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 974588: jne 0x974550 */
  if (!zf) goto L_974550;
L_97458a: /* 97458a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97458b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97458c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97458d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97458e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974591: ret 0x18 */
  esp += 28; SPILL(); return;
L_974594: /* 974594: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 974598: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97459c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97459e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9745a2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9745a4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9745a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 9745aa: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9745ad: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 9745b0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 9745b3: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 9745b6: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 9745b9: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 9745bc: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 9745bf: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 9745c2: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 9745c5: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 9745c8: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 9745cb: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 9745ce: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 9745d1: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 9745d4: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 9745d7: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 9745da: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 9745dd: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 9745e0: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 9745e3: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 9745e6: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 9745e9: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 9745ec: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 9745ef: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 9745f2: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 9745f5: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 9745f8: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 9745fb: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
/* 9745fe: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 974602: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 974604: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 974607: fstp dword ptr [ecx + 0x30] */
  WF32((uint32_t)(ecx + 0x30u), ST0); FPOP();
/* 97460a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97460e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 974611: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 974614: fstp dword ptr [ecx + 0x34] */
  WF32((uint32_t)(ecx + 0x34u), ST0); FPOP();
/* 974617: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97461b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 97461e: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 974621: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
/* 974624: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974627: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_974630(void) {
  LOAD_REGS();
L_974630: /* 974630: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 974633: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 974637: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 97463a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97463b: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 97463e: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 974642: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 974644: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 974647: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 974649: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 97464c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 97464e: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 974652: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 974654: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 974656: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 974658: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 97465c: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 974660: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974662: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 974664: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 974666: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974668: fsqrt  */
  ST0 = sqrt(ST0);
/* 97466a: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 97466c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97466e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974670: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 974674: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 974678: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 97467c: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 974680: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 974684: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974686: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 97468a: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 97468e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974690: fsqrt  */
  ST0 = sqrt(ST0);
/* 974692: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 974694: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 974696: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974698: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 97469c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9746a0: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 9746a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9746a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9746a9: jnp 0x974864 */
  if (!pf) goto L_974864;
L_9746af: /* 9746af: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9746b3: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 9746b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9746b9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9746bc: jnp 0x974864 */
  if (!pf) goto L_974864;
L_9746c2: /* 9746c2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9746c6: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 9746ca: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9746ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9746cf: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 9746d3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9746d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9746d5: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 9746d9: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9746db: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9746e1: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 9746e3: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 9746e7: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 9746ea: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 9746ed: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9746f1: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 9746f4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9746fa: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 9746fd: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 974701: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 974704: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 974707: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 97470b: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 97470e: xor edi, edi */
  edi = 0;
/* 974710: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 974716: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 974719: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 97471d: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 974720: mov dword ptr [eax + 0x3c], 0x3f800000 */
  W32((uint32_t)(eax + 0x3cu), 0x3f800000u);
/* 974727: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 97472a: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 97472d: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 974730: mov dword ptr [eax + 0x2c], edi */
  W32((uint32_t)(eax + 0x2cu), edi);
/* 974733: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 974737: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 97473b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 974741: fdiv dword ptr [esp + 0x54] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x54u)));
/* 974745: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 974747: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 974749: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 97474f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 974751: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 974753: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 974755: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 974759: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 97475b: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 97475d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 97475f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 974763: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 974765: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 974767: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 97476b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 97476e: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 974771: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 974775: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 974778: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 97477b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97477d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 97477f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 974781: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 974783: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 974785: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 974787: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 97478b: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 974791: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 974795: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 974797: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 974799: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97479b: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 97479d: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9747a1: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 9747a7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9747ab: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9747ad: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9747b1: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 9747b7: lea ebx, [ecx + 0x10] */
  ebx = (uint32_t)(ecx + 0x10u);
/* 9747ba: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 9747be: mov ebp, 3 */
  ebp = 0x3u;
/* 9747c3: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9747c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9747c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9747cb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9747cd: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9747cf: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9747d3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9747d5: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9747d7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9747d9: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9747db: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9747df: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9747e1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9747e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9747e7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9747e9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9747eb: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9747ef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9747f1: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9747f3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9747f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9747f7: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9747fb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9747fd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9747ff: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 974803: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974805: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 974807: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 97480b: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 97480f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 974811: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 974813: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 974817: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 974819: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 97481d: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 974821: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
L_974825: /* 974825: mov esi, eax */
  esi = eax;
/* 974827: mov ecx, ebx */
  ecx = ebx;
/* 974829: mov edi, 3 */
  edi = 0x3u;
/* 97482e: mov edi, edi */
  edi = edi;
L_974830: /* 974830: fld dword ptr [ecx - 0x10] */
  { double v = F32((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* 974833: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 974836: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 974839: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97483c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 97483d: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 974840: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 974843: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974845: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 974847: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 97484a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97484c: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 97484f: jne 0x974830 */
  if (!zf) goto L_974830;
L_974851: /* 974851: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 974854: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 974857: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 974858: jne 0x974825 */
  if (!zf) goto L_974825;
L_97485a: /* 97485a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97485b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97485c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97485d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97485e: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974861: ret 0x20 */
  esp += 36; SPILL(); return;
L_974864: /* 974864: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 974868: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 97486c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97486e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 974872: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 974874: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 974877: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97487a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 97487d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 974880: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 974883: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 974886: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 974889: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 97488c: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 97488f: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 974892: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 974895: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 974898: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 97489b: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 97489e: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 9748a1: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 9748a4: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 9748a7: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 9748aa: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 9748ad: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 9748b0: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 9748b3: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9748b7: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 9748ba: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 9748bd: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 9748c0: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 9748c3: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 9748c6: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 9748c9: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 9748cc: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 9748cf: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
/* 9748d2: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 9748d6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9748d8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9748de: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 9748e0: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9748e4: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 9748e7: fstp dword ptr [ecx + 0x30] */
  WF32((uint32_t)(ecx + 0x30u), ST0); FPOP();
/* 9748ea: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9748ee: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 9748f1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9748f7: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 9748fa: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9748fe: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 974901: fstp dword ptr [ecx + 0x34] */
  WF32((uint32_t)(ecx + 0x34u), ST0); FPOP();
/* 974904: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 974908: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 97490b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 974911: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 974914: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974915: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 974919: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 97491c: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
/* 97491f: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974922: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_974930(void) {
  LOAD_REGS();
L_974930: /* 974930: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 974934: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 974938: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 97493b: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 97493e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 974942: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 974944: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 974946: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974948: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 97494b: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 97494e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974950: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 974952: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 974955: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 974958: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 97495b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 97495d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97495f: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 974962: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 974965: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974967: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 97496a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 97496d: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 974970: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 974973: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 974975: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974977: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 97497a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 97497d: mov dword ptr [edx + 0xc], 0 */
  W32((uint32_t)(edx + 0xcu), 0x0u);
/* 974984: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974986: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 974989: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 97498c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 97498e: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 974991: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 974994: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974996: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 974999: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 97499c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97499e: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 9749a1: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 9749a4: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 9749a7: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 9749aa: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 9749ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9749af: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9749b2: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9749b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9749b7: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* 9749ba: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 9749bd: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 9749c0: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 9749c3: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 9749c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9749c8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9749cb: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9749ce: mov dword ptr [edx + 0x1c], 0 */
  W32((uint32_t)(edx + 0x1cu), 0x0u);
/* 9749d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9749d7: fstp dword ptr [edx + 0x18] */
  WF32((uint32_t)(edx + 0x18u), ST0); FPOP();
/* 9749da: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 9749dd: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9749df: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 9749e2: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 9749e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9749e7: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 9749ea: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 9749ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9749ef: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 9749f2: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 9749f5: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 9749f8: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 9749fb: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 9749fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a00: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 974a03: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 974a06: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a08: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
/* 974a0b: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 974a0e: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 974a11: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 974a14: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 974a17: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a19: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 974a1c: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 974a1f: mov dword ptr [edx + 0x2c], 0 */
  W32((uint32_t)(edx + 0x2cu), 0x0u);
/* 974a26: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a28: fstp dword ptr [edx + 0x28] */
  WF32((uint32_t)(edx + 0x28u), ST0); FPOP();
/* 974a2b: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 974a2e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 974a30: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 974a33: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 974a36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a38: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 974a3b: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 974a3e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a40: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 974a43: fstp dword ptr [edx + 0x30] */
  WF32((uint32_t)(edx + 0x30u), ST0); FPOP();
/* 974a46: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 974a49: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* 974a4c: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 974a4f: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 974a52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a54: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 974a57: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 974a5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a5c: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 974a5f: fstp dword ptr [edx + 0x34] */
  WF32((uint32_t)(edx + 0x34u), ST0); FPOP();
/* 974a62: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 974a65: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* 974a68: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 974a6b: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 974a6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a70: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 974a73: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 974a76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 974a78: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 974a7b: mov dword ptr [edx + 0x3c], 0x3f800000 */
  W32((uint32_t)(edx + 0x3cu), 0x3f800000u);
/* 974a82: fstp dword ptr [edx + 0x38] */
  WF32((uint32_t)(edx + 0x38u), ST0); FPOP();
/* 974a85: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_974a90(void) {
  LOAD_REGS();
L_974a90: /* 974a90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 974a94: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 974a97: jae 0x974a9e */
  if (!cf) goto L_974a9e;
L_974a99: /* 974a99: mov ecx, 4 */
  ecx = 0x4u;
L_974a9e: /* 974a9e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974aa2: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 974aa5: xor ecx, ecx */
  ecx = 0;
/* 974aa7: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 974aaa: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 974aad: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 974aaf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 974ab2: mov dword ptr [eax + 0x10], 1 */
  W32((uint32_t)(eax + 0x10u), 0x1u);
/* 974ab9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974ac0(void) {
  LOAD_REGS();
L_974ac0: /* 974ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974ac1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 974ac5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 974ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974ac9: je 0x974adf */
  if (zf) goto L_974adf;
L_974acb: /* 974acb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974acc: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x974ad2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974ad2: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 974ad8: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_974adf: /* 974adf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974ae0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974af0(void) {
  LOAD_REGS();
L_974af0: /* 974af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974af1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 974af5: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 974af8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974af9: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 974afd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974aff: je 0x974b1d */
  if (zf) goto L_974b1d;
L_974b01: /* 974b01: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 974b04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974b06: jne 0x974b1a */
  if (!zf) goto L_974b1a;
L_974b08: /* 974b08: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974b0b: jne 0x974b1a */
  if (!zf) goto L_974b1a;
L_974b0d: /* 974b0d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 974b0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974b11: je 0x974b1a */
  if (zf) goto L_974b1a;
L_974b13: /* 974b13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974b14: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x974b1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_974b1a: /* 974b1a: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
L_974b1d: /* 974b1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974b1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974b1f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974b30(void) {
  LOAD_REGS();
L_974b30: /* 974b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974b31: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 974b35: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 974b38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974b39: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 974b3d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 974b3f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 974b41: jle 0x974b81 */
  if ((zf || sf != of)) goto L_974b81;
L_974b43: /* 974b43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974b45: je 0x974b5b */
  if (zf) goto L_974b5b;
L_974b47: /* 974b47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974b48: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x974b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974b4e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 974b54: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_974b5b: /* 974b5b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 974b5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974b5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974b60: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x974b66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974b66: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 974b68: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 974b6b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 974b6d: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 974b70: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
/* 974b77: jle 0x974b88 */
  if ((zf || sf != of)) goto L_974b88;
L_974b79: /* 974b79: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 974b7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974b7e: ret 8 */
  esp += 12; SPILL(); return;
L_974b81: /* 974b81: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
L_974b88: /* 974b88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974b89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974b8a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974b90(void) {
  LOAD_REGS();
L_974b90: /* 974b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974b91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 974b95: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 974b98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974b9a: je 0x974bc1 */
  if (zf) goto L_974bc1;
L_974b9c: /* 974b9c: cmp dword ptr [esi + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974ba0: jne 0x974bba */
  if (!zf) goto L_974bba;
L_974ba2: /* 974ba2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 974ba6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974ba7: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x974badu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974bad: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 974bb3: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_974bba: /* 974bba: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
L_974bc1: /* 974bc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974bc2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974be0(void) {
  LOAD_REGS();
L_974be0: /* 974be0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974be4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 974be7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974bf0(void) {
  LOAD_REGS();
L_974bf0: /* 974bf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974bf4: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 974bf7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974c00(void) {
  LOAD_REGS();
L_974c00: /* 974c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974c04: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 974c07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974c10(void) {
  LOAD_REGS();
L_974c10: /* 974c10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974c14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974c15: call dword ptr [0xcfb0ec] */
  esp -= 4; W32(esp, 0x974c1bu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 974c1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974c1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974c30(void) {
  LOAD_REGS();
L_974c30: /* 974c30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974c34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974c35: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 974c37: call dword ptr [0xcfb0f0] */
  esp -= 4; W32(esp, 0x974c3du); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 974c3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974c40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974c50(void) {
  LOAD_REGS();
L_974c50: /* 974c50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974c55: call dword ptr [0xcfb0f4] */
  esp -= 4; W32(esp, 0x974c5bu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 974c5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 974c5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974c60(void) {
  LOAD_REGS();
L_974c60: /* 974c60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 974c64: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 974c68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974c69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 974c6a: call dword ptr [0xcfb0f8] */
  esp -= 4; W32(esp, 0x974c70u); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* 974c70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974c73: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974c80(void) {
  LOAD_REGS();
L_974c80: /* 974c80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974c84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974c85: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 974c89: lea ecx, [eax + ebx + 4] */
  ecx = (uint32_t)(eax + ebx + 0x4u);
/* 974c8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974c8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 974c8f: call dword ptr [0xcfb0ec] */
  esp -= 4; W32(esp, 0x974c95u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 974c95: mov edi, eax */
  edi = eax;
/* 974c97: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 974c9a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974c9c: jne 0x974ca3 */
  if (!zf) goto L_974ca3;
L_974c9e: /* 974c9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974c9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974ca0: ret 8 */
  esp += 12; SPILL(); return;
L_974ca3: /* 974ca3: xor edx, edx */
  edx = 0;
/* 974ca5: mov eax, edi */
  eax = edi;
/* 974ca7: div ebx */
  { uint32_t d = ebx; if (!d) d = guest_divzero(0x974ca7);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 974ca9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974caa: mov esi, ebx */
  esi = ebx;
/* 974cac: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 974cae: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974cb0: jne 0x974cb4 */
  if (!zf) goto L_974cb4;
L_974cb2: /* 974cb2: xor esi, esi */
  esi = 0;
L_974cb4: /* 974cb4: test bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 974cb7: je 0x974cc8 */
  if (zf) goto L_974cc8;
L_974cb9: /* 974cb9: push 0xb021b0 */
  { uint32_t v = 0xb021b0u; esp -= 4; W32(esp, v); }
/* 974cbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 974cc0: call 0x971e40 */
  esp -= 4; W32(esp, 0x974cc5u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 974cc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_974cc8: /* 974cc8: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 974ccb: jae 0x974cd7 */
  if (!cf) goto L_974cd7;
L_974ccd: /* 974ccd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_974cd0: /* 974cd0: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 974cd2: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 974cd5: jb 0x974cd0 */
  if (cf) goto L_974cd0;
L_974cd7: /* 974cd7: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 974cd9: mov dword ptr [edi - 4], esi */
  W32((uint32_t)(edi + 0xfffffffcu), esi);
/* 974cdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974cdd: mov eax, edi */
  eax = edi;
/* 974cdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974ce0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974ce1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974cf0(void) {
  LOAD_REGS();
L_974cf0: /* 974cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974cf4: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 974cf7: mov ecx, eax */
  ecx = eax;
/* 974cf9: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 974cfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 974cfc: call dword ptr [0xcfb0f4] */
  esp -= 4; W32(esp, 0x974d02u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 974d02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 974d03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974d10(void) {
  LOAD_REGS();
L_974d10: /* 974d10: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 974d14: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 974d16: xor eax, eax */
  eax = 0;
/* 974d18: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 974d1a: je 0x974d30 */
  if (zf) goto L_974d30;
L_974d1c: /* 974d1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_974d20: /* 974d20: imul eax, eax, 0x21 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x21u);
  eax = (uint32_t)r;
  }
/* 974d23: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 974d26: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 974d28: mov cl, byte ptr [edx + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 974d2b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 974d2c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 974d2e: jne 0x974d20 */
  if (!zf) goto L_974d20;
L_974d30: /* 974d30: xor edx, edx */
  edx = 0;
/* 974d32: div dword ptr [esp + 8] */
  { uint32_t d = R32((uint32_t)(esp + 0x8u)); if (!d) d = guest_divzero(0x974d32);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 974d36: mov eax, edx */
  eax = edx;
/* 974d38: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974d40(void) {
  LOAD_REGS();
L_974d40: /* 974d40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974d44: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 974d45: idiv dword ptr [esp + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x974d45);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 974d49: mov eax, edx */
  eax = edx;
/* 974d4b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974d50(void) {
  LOAD_REGS();
L_974d50: /* 974d50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 974d54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974d55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974d56: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 974d5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_974d60: /* 974d60: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 974d62: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 974d64: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 974d66: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 974d68: jne 0x974d8b */
  if (!zf) goto L_974d8b;
L_974d6a: /* 974d6a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 974d6c: je 0x974d84 */
  if (zf) goto L_974d84;
L_974d6e: /* 974d6e: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 974d71: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 974d74: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 974d76: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 974d78: jne 0x974d8b */
  if (!zf) goto L_974d8b;
L_974d7a: /* 974d7a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 974d7d: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 974d80: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 974d82: jne 0x974d60 */
  if (!zf) goto L_974d60;
L_974d84: /* 974d84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974d85: xor eax, eax */
  eax = 0;
/* 974d87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974d88: ret 8 */
  esp += 12; SPILL(); return;
L_974d8b: /* 974d8b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 974d8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974d8e: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 974d91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974d92: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974da0(void) {
  LOAD_REGS();
L_974da0: /* 974da0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 974da4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 974da8: xor eax, eax */
  eax = 0;
/* 974daa: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974dac: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 974daf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974dc0(void) {
  LOAD_REGS();
L_974dc0: /* 974dc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974dc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974dc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974dc3: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 974dc5: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x974dcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974dcb: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 974dcf: mov esi, eax */
  esi = eax;
/* 974dd1: xor ebx, ebx */
  ebx = 0;
/* 974dd3: cmp edi, 0x3fffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 974dd9: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 974ddc: mov dword ptr [esi + 8], 0x974d10 */
  W32((uint32_t)(esi + 0x8u), 0x974d10u);
/* 974de3: mov dword ptr [esi + 0xc], 0x974d50 */
  W32((uint32_t)(esi + 0xcu), 0x974d50u);
/* 974dea: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 974ded: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 974df0: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 974df3: ja 0x974e21 */
  if ((!cf && !zf)) goto L_974e21;
L_974df5: /* 974df5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974df7: je 0x974e21 */
  if (zf) goto L_974e21;
L_974df9: /* 974df9: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 974e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974e01: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x974e07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974e07: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974e09: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 974e0c: je 0x974e21 */
  if (zf) goto L_974e21;
L_974e0e: /* 974e0e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
L_974e10: /* 974e10: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 974e13: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 974e14: mov dword ptr [ecx + edi*4], ebx */
  W32((uint32_t)(ecx + edi*4), ebx);
/* 974e17: jne 0x974e10 */
  if (!zf) goto L_974e10;
L_974e19: /* 974e19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974e1a: mov eax, esi */
  eax = esi;
/* 974e1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974e1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974e1e: ret 4 */
  esp += 8; SPILL(); return;
L_974e21: /* 974e21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974e22: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 974e24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974e25: xor eax, eax */
  eax = 0;
/* 974e27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974e28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974e30(void) {
  LOAD_REGS();
L_974e30: /* 974e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974e31: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 974e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974e36: call 0x974e50 */
  esp -= 4; W32(esp, 0x974e3bu); SPILL(); f_974e50(); if (g_unwind) return; RELOAD();
/* 974e3b: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 974e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974e3f: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x974e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974e45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974e46: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x974e4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974e4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974e4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974e50(void) {
  LOAD_REGS();
L_974e50: /* 974e50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974e51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974e52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 974e56: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 974e58: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 974e59: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974e5c: je 0x974ea9 */
  if (zf) goto L_974ea9;
L_974e5e: /* 974e5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974e5f: nop  */
L_974e60: /* 974e60: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 974e63: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 974e66: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974e68: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 974e6b: je 0x974ea2 */
  if (zf) goto L_974ea2;
L_974e6d: /* 974e6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_974e70: /* 974e70: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 974e73: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 974e75: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 974e78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974e7a: je 0x974e82 */
  if (zf) goto L_974e82;
L_974e7c: /* 974e7c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 974e7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 974e80: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x974e82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_974e82: /* 974e82: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 974e85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974e87: je 0x974e8e */
  if (zf) goto L_974e8e;
L_974e89: /* 974e89: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 974e8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 974e8c: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x974e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_974e8e: /* 974e8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974e8f: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x974e95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974e95: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 974e98: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 974e9b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974e9d: lea eax, [edx + ebx*4] */
  eax = (uint32_t)(edx + ebx*4);
/* 974ea0: jne 0x974e70 */
  if (!zf) goto L_974e70;
L_974ea2: /* 974ea2: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 974ea3: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 974ea6: jne 0x974e60 */
  if (!zf) goto L_974e60;
L_974ea8: /* 974ea8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_974ea9: /* 974ea9: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 974eb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974eb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974eb2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_974ec0(void) {
  LOAD_REGS();
L_974ec0: /* 974ec0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 974ec4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 974ec8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 974ecb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974ed0(void) {
  LOAD_REGS();
L_974ed0: /* 974ed0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 974ed4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 974ed8: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 974edb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974ee0(void) {
  LOAD_REGS();
L_974ee0: /* 974ee0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 974ee4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 974ee8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 974eeb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974ef0(void) {
  LOAD_REGS();
L_974ef0: /* 974ef0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 974ef4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 974ef8: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 974efb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_974f00(void) {
  LOAD_REGS();
L_974f00: /* 974f00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974f01: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 974f05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 974f06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974f07: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 974f0b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 974f0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974f0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974f0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974f10: call dword ptr [esi + 8] */
  { uint32_t t = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, 0x974f13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974f13: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 974f16: mov ebp, eax */
  ebp = eax;
/* 974f18: mov edi, dword ptr [ecx + ebp*4] */
  edi = R32((uint32_t)(ecx + ebp*4));
/* 974f1b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974f1d: je 0x974f4f */
  if (zf) goto L_974f4f;
L_974f1f: /* 974f1f: nop  */
L_974f20: /* 974f20: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 974f22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 974f23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974f24: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0x974f27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974f27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974f29: je 0x974f62 */
  if (zf) goto L_974f62;
L_974f2b: /* 974f2b: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 974f2e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 974f2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 974f31: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 974f34: jl 0x974f6c */
  if ((sf != of)) goto L_974f6c;
L_974f36: /* 974f36: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 974f39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974f3b: je 0x974f84 */
  if (zf) goto L_974f84;
L_974f3d: /* 974f3d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 974f3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974f41: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0x974f44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974f44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 974f46: jl 0x974f84 */
  if ((sf != of)) goto L_974f84;
L_974f48: /* 974f48: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 974f4b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974f4d: jne 0x974f20 */
  if (!zf) goto L_974f20;
L_974f4f: /* 974f4f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 974f51: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x974f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974f57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974f59: jne 0x974fb9 */
  if (!zf) goto L_974fb9;
L_974f5b: /* 974f5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974f5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974f5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 974f5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974f5f: ret 0xc */
  esp += 16; SPILL(); return;
L_974f62: /* 974f62: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 974f65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974f66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974f67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 974f68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974f69: ret 0xc */
  esp += 16; SPILL(); return;
L_974f6c: /* 974f6c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 974f6e: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x974f74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974f74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974f76: jne 0x974f7f */
  if (!zf) goto L_974f7f;
L_974f78: /* 974f78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974f79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974f7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 974f7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974f7c: ret 0xc */
  esp += 16; SPILL(); return;
L_974f7f: /* 974f7f: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 974f82: jmp 0x974fc0 */
  goto L_974fc0;
L_974f84: /* 974f84: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 974f86: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x974f8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974f8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974f8e: jne 0x974f97 */
  if (!zf) goto L_974f97;
L_974f90: /* 974f90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974f91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974f92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 974f93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974f94: ret 0xc */
  esp += 16; SPILL(); return;
L_974f97: /* 974f97: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 974f9b: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 974f9d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 974fa0: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 974fa3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 974fa6: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 974fa9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 974fac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 974fad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974fae: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 974fb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974fb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 974fb3: mov eax, ecx */
  eax = ecx;
/* 974fb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974fb6: ret 0xc */
  esp += 16; SPILL(); return;
L_974fb9: /* 974fb9: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
L_974fc0: /* 974fc0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 974fc4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 974fc7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 974fc9: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 974fcc: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* 974fcf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 974fd2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 974fd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 974fd4: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 974fd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 974fd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 974fd9: mov eax, ecx */
  eax = ecx;
/* 974fdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 974fdc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_974fe0(void) {
  LOAD_REGS();
L_974fe0: /* 974fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974fe1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 974fe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 974fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 974fe7: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 974feb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 974fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 974fee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 974fef: call dword ptr [edi + 8] */
  { uint32_t t = R32((uint32_t)(edi + 0x8u)); esp -= 4; W32(esp, 0x974ff2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 974ff2: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 974ff5: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
L_974ff8: /* 974ff8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 974ffa: je 0x975017 */
  if (zf) goto L_975017;
L_974ffc: /* 974ffc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 974ffe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 974fff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975000: call dword ptr [edi + 0xc] */
  { uint32_t t = R32((uint32_t)(edi + 0xcu)); esp -= 4; W32(esp, 0x975003u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975003: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 975005: je 0x97500e */
  if (zf) goto L_97500e;
L_975007: /* 975007: jl 0x975017 */
  if ((sf != of)) goto L_975017;
L_975009: /* 975009: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 97500c: jmp 0x974ff8 */
  goto L_974ff8;
L_97500e: /* 97500e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 975011: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975012: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975013: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975014: ret 8 */
  esp += 12; SPILL(); return;
L_975017: /* 975017: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975018: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975019: xor eax, eax */
  eax = 0;
/* 97501b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97501c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_975020(void) {
  LOAD_REGS();
L_975020: /* 975020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975021: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975022: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 975026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975027: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975028: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 97502c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97502e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97502f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975030: call dword ptr [edi + 8] */
  { uint32_t t = R32((uint32_t)(edi + 0x8u)); esp -= 4; W32(esp, 0x975033u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975033: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 975036: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 975039: xor ebx, ebx */
  ebx = 0;
/* 97503b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97503d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 975041: je 0x975059 */
  if (zf) goto L_975059;
L_975043: /* 975043: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 975045: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975046: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975047: call dword ptr [edi + 0xc] */
  { uint32_t t = R32((uint32_t)(edi + 0xcu)); esp -= 4; W32(esp, 0x97504au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97504a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97504c: je 0x975062 */
  if (zf) goto L_975062;
L_97504e: /* 97504e: jl 0x975059 */
  if ((sf != of)) goto L_975059;
L_975050: /* 975050: mov ebx, esi */
  ebx = esi;
/* 975052: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 975055: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975057: jne 0x975043 */
  if (!zf) goto L_975043;
L_975059: /* 975059: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97505a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97505b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97505c: xor eax, eax */
  eax = 0;
/* 97505e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97505f: ret 8 */
  esp += 12; SPILL(); return;
L_975062: /* 975062: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975064: je 0x97506e */
  if (zf) goto L_97506e;
L_975066: /* 975066: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 975069: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 97506c: jmp 0x97507b */
  goto L_97507b;
L_97506e: /* 97506e: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 975071: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 975074: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 975078: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_97507b: /* 97507b: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 97507e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975080: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 975083: je 0x975088 */
  if (zf) goto L_975088;
L_975085: /* 975085: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975086: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x975088u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_975088: /* 975088: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 97508b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97508d: je 0x975094 */
  if (zf) goto L_975094;
L_97508f: /* 97508f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 975091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975092: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x975094u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_975094: /* 975094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975095: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97509bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97509b: dec dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi + 0x4u), r);
  }
/* 97509e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97509f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9750a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9750a1: mov eax, ebx */
  eax = ebx;
/* 9750a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9750a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9750c0(void) {
  LOAD_REGS();
L_9750c0: /* 9750c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9750c4: xor ecx, ecx */
  ecx = 0;
/* 9750c6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9750c8: je 0x9750d6 */
  if (zf) goto L_9750d6;
L_9750ca: /* 9750ca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9750cd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9750d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9750d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_9750d6: /* 9750d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9750e0(void) {
  LOAD_REGS();
L_9750e0: /* 9750e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9750e4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9750e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9750e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9750ea: je 0x975145 */
  if (zf) goto L_975145;
L_9750ec: /* 9750ec: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 9750ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9750f1: je 0x9750fd */
  if (zf) goto L_9750fd;
L_9750f3: /* 9750f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9750f4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9750f7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 9750fa: ret 4 */
  esp += 8; SPILL(); return;
L_9750fd: /* 9750fd: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 975100: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 975102: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 975103: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 975106: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975108: jge 0x975121 */
  if ((sf == of)) goto L_975121;
L_97510a: /* 97510a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_975110: /* 975110: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* 975113: cmp dword ptr [edi + ecx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + ecx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 975117: jne 0x975135 */
  if (!zf) goto L_975135;
L_975119: /* 975119: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 97511a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97511d: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97511f: jl 0x975110 */
  if ((sf != of)) goto L_975110;
L_975121: /* 975121: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975122: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 975129: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 975130: xor eax, eax */
  eax = 0;
/* 975132: ret 4 */
  esp += 8; SPILL(); return;
L_975135: /* 975135: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 975138: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 97513b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97513c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97513f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 975142: ret 4 */
  esp += 8; SPILL(); return;
L_975145: /* 975145: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 975147: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 97514e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975151: jle 0x975121 */
  if ((zf || sf != of)) goto L_975121;
L_975153: /* 975153: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 975156: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* 975159: cmp dword ptr [edi + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97515d: jne 0x975169 */
  if (!zf) goto L_975169;
L_97515f: /* 97515f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 975160: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 975163: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975165: jl 0x975153 */
  if ((sf != of)) goto L_975153;
L_975167: /* 975167: jmp 0x975121 */
  goto L_975121;
L_975169: /* 975169: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 97516c: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 97516f: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 975172: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975173: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 975176: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 975179: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975180(void) {
  LOAD_REGS();
L_975180: /* 975180: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 975184: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97518a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97518b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97518c: call 0x9751a0 */
  esp -= 4; W32(esp, 0x975191u); SPILL(); f_9751a0(); if (g_unwind) return; RELOAD();
/* 975191: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975194: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9751a0(void) {
  LOAD_REGS();
L_9751a0: /* 9751a0: sub esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9751a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9751a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9751a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9751a9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 9751ab: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9751b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9751b1: mov ebx, eax */
  ebx = eax;
/* 9751b3: mov eax, dword ptr [esp + 0x128] */
  eax = R32((uint32_t)(esp + 0x128u));
/* 9751ba: xor edi, edi */
  edi = 0;
/* 9751bc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9751bf: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9751c3: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 9751c6: ja 0x9751f5 */
  if ((!cf && !zf)) goto L_9751f5;
L_9751c8: /* 9751c8: jmp dword ptr [eax*4 + 0x975340] */
  switch (R32((uint32_t)(eax*4 + 0x975340u))) {
    case 0x9751cfu: goto L_9751cf;
    case 0x9751d9u: goto L_9751d9;
    case 0x9751e3u: goto L_9751e3;
    case 0x9751edu: goto L_9751ed;
    default: guest_badjump(0x9751c8, R32((uint32_t)(eax*4 + 0x975340u))); return;
  }
L_9751cf: /* 9751cf: mov dword ptr [esp + 0xc], 0xb02204 */
  W32((uint32_t)(esp + 0xcu), 0xb02204u);
/* 9751d7: jmp 0x9751f5 */
  goto L_9751f5;
L_9751d9: /* 9751d9: mov dword ptr [esp + 0xc], 0xaf2dd8 */
  W32((uint32_t)(esp + 0xcu), 0xaf2dd8u);
/* 9751e1: jmp 0x9751f5 */
  goto L_9751f5;
L_9751e3: /* 9751e3: mov dword ptr [esp + 0xc], 0xb02200 */
  W32((uint32_t)(esp + 0xcu), 0xb02200u);
/* 9751eb: jmp 0x9751f5 */
  goto L_9751f5;
L_9751ed: /* 9751ed: mov dword ptr [esp + 0xc], 0xb021fc */
  W32((uint32_t)(esp + 0xcu), 0xb021fcu);
L_9751f5: /* 9751f5: mov eax, dword ptr [0xa21768] */
  eax = R32((uint32_t)(0xa21768u));
/* 9751fa: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9751fc: je 0x975231 */
  if (zf) goto L_975231;
L_9751fe: /* 9751fe: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 975201: je 0x975231 */
  if (zf) goto L_975231;
L_975203: /* 975203: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 975208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975209: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 97520d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97520e: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x975214u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 975214: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 975217: xor eax, eax */
  eax = 0;
/* 975219: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 97521c: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 975220: mov byte ptr [esp + 0x11f], 0 */
  W8((uint32_t)(esp + 0x11fu), 0x0u);
/* 975228: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97522a: not ecx */
  ecx = ~ecx;
/* 97522c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97522d: mov edi, ecx */
  edi = ecx;
/* 97522f: jmp 0x975236 */
  goto L_975236;
L_975231: /* 975231: mov byte ptr [esp + 0x1c], 0 */
  W8((uint32_t)(esp + 0x1cu), 0x0u);
L_975236: /* 975236: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975237: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 975239: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 975241: call 0x975cf0 */
  esp -= 4; W32(esp, 0x975246u); SPILL(); f_975cf0(); if (g_unwind) return; RELOAD();
/* 975246: mov ebp, dword ptr [esp + 0x128] */
  ebp = R32((uint32_t)(esp + 0x128u));
/* 97524d: mov esi, eax */
  esi = eax;
/* 97524f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975251: je 0x975315 */
  if (zf) goto L_975315;
L_975257: /* 975257: mov ebx, dword ptr [0xcfb0b4] */
  ebx = R32((uint32_t)(0xcfb0b4u));
/* 97525d: lea ecx, [esp + edi + 0x20] */
  ecx = (uint32_t)(esp + edi + 0x20u);
/* 975261: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_975265: /* 975265: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 975269: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97526c: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97526e: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 975271: mov edi, esi */
  edi = esi;
/* 975273: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 975275: not ecx */
  ecx = ~ecx;
/* 975277: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 975278: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975279: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97527a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97527b: call dword ptr [0xcfb080] */
  esp -= 4; W32(esp, 0x975281u); SPILL(); f_401a52(); if (g_unwind) return; /* MSVCR70!strncmp */ RELOAD();
/* 975281: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975284: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975286: je 0x9752a9 */
  if (zf) goto L_9752a9;
L_975288: /* 975288: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97528b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97528d: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 975291: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 975293: not ecx */
  ecx = ~ecx;
/* 975295: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 975296: mov eax, 0x104 */
  eax = 0x104u;
/* 97529b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 97529d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97529e: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9752a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9752a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9752a4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9752a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9752a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9752a9: /* 9752a9: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9752ac: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9752ae: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 9752b2: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9752b4: not ecx */
  ecx = ~ecx;
/* 9752b6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9752b7: mov edx, 0x104 */
  edx = 0x104u;
/* 9752bc: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9752be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9752bf: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9752c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9752c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9752c5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x9752c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9752c7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9752cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9752cc: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 9752d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9752d1: mov byte ptr [esp + 0x137], 0 */
  W8((uint32_t)(esp + 0x137u), 0x0u);
/* 9752d9: call dword ptr [0xcfb060] */
  esp -= 4; W32(esp, 0x9752dfu); SPILL(); f_42ae09(); if (g_unwind) return; /* MSVCR70!fopen */ RELOAD();
/* 9752df: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9752e3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9752e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9752e8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 9752eb: jne 0x975311 */
  if (!zf) goto L_975311;
L_9752ed: /* 9752ed: mov eax, dword ptr [esp + 0x130] */
  eax = R32((uint32_t)(esp + 0x130u));
/* 9752f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9752f6: je 0x975311 */
  if (zf) goto L_975311;
L_9752f8: /* 9752f8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9752fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9752fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9752fe: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 975302: call 0x975cf0 */
  esp -= 4; W32(esp, 0x975307u); SPILL(); f_975cf0(); if (g_unwind) return; RELOAD();
/* 975307: mov esi, eax */
  esi = eax;
/* 975309: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97530b: jne 0x975265 */
  if (!zf) goto L_975265;
L_975311: /* 975311: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_975315: /* 975315: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 975318: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97531a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97531b: jne 0x975330 */
  if (!zf) goto L_975330;
L_97531d: /* 97531d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97531e: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975324u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975324: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975325: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 975326: xor eax, eax */
  eax = 0;
/* 975328: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975329: add esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97532f: ret  */
  esp += 4; SPILL(); return;
L_975330: /* 975330: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975331: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 975333: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 975334: mov eax, ebx */
  eax = ebx;
/* 975336: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975337: add esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97533d: ret  */
  esp += 4; SPILL(); return;
}

void f_975350(void) {
  LOAD_REGS();
L_975350: /* 975350: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 975354: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975358: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97535a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97535b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97535c: call 0x9751a0 */
  esp -= 4; W32(esp, 0x975361u); SPILL(); f_9751a0(); if (g_unwind) return; RELOAD();
/* 975361: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975364: ret 8 */
  esp += 12; SPILL(); return;
}

void f_975370(void) {
  LOAD_REGS();
L_975370: /* 975370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975371: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 975373: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x975379u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975379: mov esi, eax */
  esi = eax;
/* 97537b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97537d: jne 0x975383 */
  if (!zf) goto L_975383;
L_97537f: /* 97537f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975380: ret 4 */
  esp += 8; SPILL(); return;
L_975383: /* 975383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975384: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 975388: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 975389: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 97538f: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 975396: mov dword ptr [esi + 4], 1 */
  W32((uint32_t)(esi + 0x4u), 0x1u);
/* 97539d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9753a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9753a3: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 9753a6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 9753a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9753aa: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 9753b1: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 9753b8: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* 9753bf: mov eax, esi */
  eax = esi;
/* 9753c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9753c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9753d0(void) {
  LOAD_REGS();
L_9753d0: /* 9753d0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 9753d2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9753d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9753d8: xor edx, edx */
  edx = 0;
/* 9753da: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9753dc: jne 0x9753e3 */
  if (!zf) goto L_9753e3;
L_9753de: /* 9753de: xor eax, eax */
  eax = 0;
/* 9753e0: ret 0xc */
  esp += 16; SPILL(); return;
L_9753e3: /* 9753e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9753e4: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9753e8: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 9753eb: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9753ef: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 9753f2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9753f6: mov ecx, 1 */
  ecx = 0x1u;
/* 9753fb: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 9753fe: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 975400: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 975403: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 975406: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 975409: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 97540c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97540d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_975410(void) {
  LOAD_REGS();
L_975410: /* 975410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975411: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 975415: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975417: je 0x975463 */
  if (zf) goto L_975463;
L_975419: /* 975419: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 97541c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97541e: je 0x975463 */
  if (zf) goto L_975463;
L_975420: /* 975420: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 975423: cmp eax, dword ptr [ebx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 975426: je 0x975463 */
  if (zf) goto L_975463;
L_975428: /* 975428: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 975429: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97542a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97542b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97542c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x975432u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975432: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 975435: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 975438: mov ebp, eax */
  ebp = eax;
/* 97543a: mov eax, ecx */
  eax = ecx;
/* 97543c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97543f: mov edi, ebp */
  edi = ebp;
/* 975441: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 975443: mov ecx, eax */
  ecx = eax;
/* 975445: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 975448: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 97544a: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 97544d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97544e: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975454u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975454: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 975457: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975459: mov dword ptr [ebx + 0xc], ebp */
  W32((uint32_t)(ebx + 0xcu), ebp);
/* 97545c: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 97545f: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 975462: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_975463: /* 975463: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975464: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975470(void) {
  LOAD_REGS();
L_975470: /* 975470: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 975474: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975476: je 0x97548d */
  if (zf) goto L_97548d;
L_975478: /* 975478: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 97547b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97547d: je 0x97548d */
  if (zf) goto L_97548d;
L_97547f: /* 97547f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 975483: xor ecx, ecx */
  ecx = 0;
/* 975485: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975487: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 97548a: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_97548d: /* 97548d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_975490(void) {
  LOAD_REGS();
L_975490: /* 975490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975491: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 975495: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975497: je 0x9754cd */
  if (zf) goto L_9754cd;
L_975499: /* 975499: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97549c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97549e: jne 0x9754b8 */
  if (!zf) goto L_9754b8;
L_9754a0: /* 9754a0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9754a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9754a4: call dword ptr [0xcfb0fc] */
  esp -= 4; W32(esp, 0x9754aau); SPILL(); f_41441f(); if (g_unwind) return; /* MSVCR70!fclose */ RELOAD();
/* 9754aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9754ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9754ae: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9754b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9754b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9754b5: ret 4 */
  esp += 8; SPILL(); return;
L_9754b8: /* 9754b8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9754bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9754bd: je 0x9754c6 */
  if (zf) goto L_9754c6;
L_9754bf: /* 9754bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9754c0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9754c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9754c6: /* 9754c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9754c7: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9754cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9754cd: /* 9754cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9754ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9754e0(void) {
  LOAD_REGS();
L_9754e0: /* 9754e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9754e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9754e4: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 9754e8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9754ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9754eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9754ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9754ed: jne 0x9754fb */
  if (!zf) goto L_9754fb;
L_9754ef: /* 9754ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9754f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9754f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9754f2: xor eax, eax */
  eax = 0;
/* 9754f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9754f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9754f8: ret 0x10 */
  esp += 20; SPILL(); return;
L_9754fb: /* 9754fb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9754fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975500: jne 0x975528 */
  if (!zf) goto L_975528;
L_975502: /* 975502: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 975505: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 975509: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 97550d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97550e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 975512: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975513: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975515: call dword ptr [0xcfb100] */
  esp -= 4; W32(esp, 0x97551bu); SPILL(); f_42ca7e(); if (g_unwind) return; /* MSVCR70!fread */ RELOAD();
/* 97551b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97551e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97551f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975520: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 975521: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975525: ret 0x10 */
  esp += 20; SPILL(); return;
L_975528: /* 975528: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 97552c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 975530: mov edi, dword ptr [ebx + 0x1c] */
  edi = R32((uint32_t)(ebx + 0x1cu));
/* 975533: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 975536: mov edx, esi */
  edx = esi;
/* 975538: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 97553b: lea ebp, [edi + edx] */
  ebp = (uint32_t)(edi + edx);
/* 97553e: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 975540: jb 0x97557a */
  if (cf) goto L_97557a;
L_975542: /* 975542: xor eax, eax */
  eax = 0;
/* 975544: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 975546: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 97554a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 97554e: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 975552: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 975556: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 97555a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97555d: fidiv dword ptr [esp + 0x18] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x18u)));
/* 975561: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 975564: call dword ptr [0xcfb0cc] */
  esp -= 4; W32(esp, 0x97556au); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 97556a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97556d: call 0x99ceac */
  esp -= 4; W32(esp, 0x975572u); SPILL(); hle_ftol(); RELOAD();
/* 975572: mov edi, dword ptr [ebx + 0x1c] */
  edi = R32((uint32_t)(ebx + 0x1cu));
/* 975575: mov edx, eax */
  edx = eax;
/* 975577: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
L_97557a: /* 97557a: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 97557d: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97557f: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 975583: mov ecx, edx */
  ecx = edx;
/* 975585: mov ebp, ecx */
  ebp = ecx;
/* 975587: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97558a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 97558c: mov ecx, ebp */
  ecx = ebp;
/* 97558e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 975591: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 975593: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 975596: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975597: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975598: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97559a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97559b: mov dword ptr [ebx + 0x1c], ecx */
  W32((uint32_t)(ebx + 0x1cu), ecx);
/* 97559e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97559f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9755a2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9755b0(void) {
  LOAD_REGS();
L_9755b0: /* 9755b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9755b1: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9755b5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9755b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9755ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9755bb: jne 0x9755d9 */
  if (!zf) goto L_9755d9;
L_9755bd: /* 9755bd: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9755c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9755c4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9755c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9755c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9755ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9755cb: call dword ptr [0xcfb0d8] */
  esp -= 4; W32(esp, 0x9755d1u); SPILL(); f_42c5d6(); if (g_unwind) return; /* MSVCR70!fgets */ RELOAD();
/* 9755d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9755d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9755d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9755d6: ret 0xc */
  esp += 16; SPILL(); return;
L_9755d9: /* 9755d9: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 9755dc: mov edi, dword ptr [ebx + 0x1c] */
  edi = R32((uint32_t)(ebx + 0x1cu));
/* 9755df: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 9755e2: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9755e4: jb 0x9755ed */
  if (cf) goto L_9755ed;
L_9755e6: /* 9755e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9755e7: xor eax, eax */
  eax = 0;
/* 9755e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9755ea: ret 0xc */
  esp += 16; SPILL(); return;
L_9755ed: /* 9755ed: mov edx, edi */
  edx = edi;
/* 9755ef: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9755f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9755f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9755f3: je 0x975617 */
  if (zf) goto L_975617;
L_9755f5: /* 9755f5: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 9755f8: mov eax, edx */
  eax = edx;
/* 9755fa: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9755fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_975600: /* 975600: cmp byte ptr [esi + edx], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 975604: je 0x975617 */
  if (zf) goto L_975617;
L_975606: /* 975606: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 97560a: add ebp, -2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 97560d: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97560f: je 0x975617 */
  if (zf) goto L_975617;
L_975611: /* 975611: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 975612: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 975613: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 975615: jne 0x975600 */
  if (!zf) goto L_975600;
L_975617: /* 975617: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 97561a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97561e: mov ecx, edx */
  ecx = edx;
/* 975620: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 975622: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 975623: mov ebp, ecx */
  ebp = ecx;
/* 975625: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 975627: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97562a: mov edi, eax */
  edi = eax;
/* 97562c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 97562e: mov ecx, ebp */
  ecx = ebp;
/* 975630: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 975633: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 975635: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 975638: mov ecx, edx */
  ecx = edx;
/* 97563a: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 97563c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97563d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97563e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 97563f: mov byte ptr [ecx + eax + 1], 0 */
  W8((uint32_t)(ecx + eax + 0x1u), 0x0u);
/* 975644: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975645: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 975648: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975649: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_975650(void) {
  LOAD_REGS();
L_975650: /* 975650: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 975651: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 975655: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975657: jne 0x97565f */
  if (!zf) goto L_97565f;
L_975659: /* 975659: xor eax, eax */
  eax = 0;
/* 97565b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97565c: ret 0x10 */
  esp += 20; SPILL(); return;
L_97565f: /* 97565f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 975662: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975664: jne 0x975686 */
  if (!zf) goto L_975686;
L_975666: /* 975666: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 975669: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97566d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 975671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975672: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 975676: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975677: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 975678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975679: call dword ptr [0xcfb104] */
  esp -= 4; W32(esp, 0x97567fu); SPILL(); f_42cf72(); if (g_unwind) return; /* MSVCR70!fwrite */ RELOAD();
/* 97567f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975682: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975683: ret 0x10 */
  esp += 20; SPILL(); return;
L_975686: /* 975686: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 975689: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 97568c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97568d: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 975691: imul ebp, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  ebp = (uint32_t)r;
  }
/* 975696: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 975698: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97569a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97569b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97569c: jbe 0x9756f5 */
  if ((cf | zf)) goto L_9756f5;
L_97569e: /* 97569e: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 9756a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9756a3: je 0x9756b2 */
  if (zf) goto L_9756b2;
L_9756a5: /* 9756a5: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9756a7: jbe 0x9756b2 */
  if ((cf | zf)) goto L_9756b2;
L_9756a9: /* 9756a9: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 9756ac: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9756b0: jmp 0x9756b8 */
  goto L_9756b8;
L_9756b2: /* 9756b2: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9756b4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_9756b8: /* 9756b8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9756bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9756bd: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9756c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9756c3: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 9756c6: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 9756c9: mov edx, ecx */
  edx = ecx;
/* 9756cb: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9756ce: mov edi, eax */
  edi = eax;
/* 9756d0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9756d2: mov ecx, edx */
  ecx = edx;
/* 9756d4: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9756d7: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9756db: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9756dd: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 9756e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9756e1: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9756e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9756e7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9756eb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9756ef: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 9756f2: mov dword ptr [ebx + 0x14], edx */
  W32((uint32_t)(ebx + 0x14u), edx);
L_9756f5: /* 9756f5: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 9756f8: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 9756fb: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 9756ff: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 975701: mov ecx, ebp */
  ecx = ebp;
/* 975703: mov eax, ecx */
  eax = ecx;
/* 975705: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 975708: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 97570a: mov ecx, eax */
  ecx = eax;
/* 97570c: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 97570f: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 975711: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 975714: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 975717: mov eax, ecx */
  eax = ecx;
/* 975719: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 97571b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97571c: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97571e: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 975720: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 975723: jb 0x97572e */
  if (cf) goto L_97572e;
L_975725: /* 975725: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 975727: lea ecx, [ecx + ebp + 1] */
  ecx = (uint32_t)(ecx + ebp + 0x1u);
/* 97572b: mov dword ptr [ebx + 0x18], ecx */
  W32((uint32_t)(ebx + 0x18u), ecx);
L_97572e: /* 97572e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 975732: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 975733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975734: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 975735: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975736: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_975740(void) {
  LOAD_REGS();
L_975740: /* 975740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 975744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975746: je 0x97576a */
  if (zf) goto L_97576a;
L_975748: /* 975748: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 97574b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97574d: jne 0x975763 */
  if (!zf) goto L_975763;
L_97574f: /* 97574f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 975752: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 975754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 975756: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975757: call dword ptr [0xcfb108] */
  esp -= 4; W32(esp, 0x97575du); SPILL(); f_42cc09(); if (g_unwind) return; /* MSVCR70!fseek */ RELOAD();
/* 97575d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 975760: ret 4 */
  esp += 8; SPILL(); return;
L_975763: /* 975763: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
L_97576a: /* 97576a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975770(void) {
  LOAD_REGS();
L_975770: /* 975770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 975774: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 975777: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975778: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 97577b: xor edx, edx */
  edx = 0;
/* 97577d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97577f: jle 0x975792 */
  if ((zf || sf != of)) goto L_975792;
L_975781: /* 975781: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 975784: mov dword ptr [esi + edx*4], ecx */
  W32((uint32_t)(esi + edx*4), ecx);
/* 975787: add ecx, dword ptr [eax + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97578a: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 97578d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 97578e: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 975790: jl 0x975781 */
  if ((sf != of)) goto L_975781;
L_975792: /* 975792: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975793: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9757a0(void) {
  LOAD_REGS();
L_9757a0: /* 9757a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9757a1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 9757a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9757a6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9757aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9757ab: xor edi, edi */
  edi = 0;
/* 9757ad: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9757af: jle 0x975807 */
  if ((zf || sf != of)) goto L_975807;
L_9757b1: /* 9757b1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9757b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9757b7: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9757bb: jne 0x9757d2 */
  if (!zf) goto L_9757d2;
L_9757bd: /* 9757bd: mov eax, ebx */
  eax = ebx;
/* 9757bf: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 9757c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9757c3: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9757c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9757c9: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 9757d0: jmp 0x9757f3 */
  goto L_9757f3;
L_9757d2: /* 9757d2: mov eax, edi */
  eax = edi;
/* 9757d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9757d5: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x9757d5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 9757d7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9757d9: je 0x9757df */
  if (zf) goto L_9757df;
L_9757db: /* 9757db: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9757dd: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_9757df: /* 9757df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9757e0: mov ecx, edi */
  ecx = edi;
/* 9757e2: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 9757e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9757e6: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x9757ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9757ec: mov dword ptr [esi + 0x18], 1 */
  W32((uint32_t)(esi + 0x18u), 0x1u);
L_9757f3: /* 9757f3: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 9757fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9757fb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9757fe: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x975804u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975804: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_975807: /* 975807: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 97580a: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 97580d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97580e: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
/* 975814: call 0x975770 */
  esp -= 4; W32(esp, 0x975819u); SPILL(); f_975770(); if (g_unwind) return; RELOAD();
/* 975819: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97581a: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 975821: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975822: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 975823: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_975830(void) {
  LOAD_REGS();
L_975830: /* 975830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975831: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 975835: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 975838: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97583a: jle 0x975867 */
  if ((zf || sf != of)) goto L_975867;
L_97583c: /* 97583c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 97583f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975841: je 0x97584f */
  if (zf) goto L_97584f;
L_975843: /* 975843: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 975846: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 975847: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x97584du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97584d: jmp 0x975859 */
  goto L_975859;
L_97584f: /* 97584f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 975852: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 975853: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x975859u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_975859: /* 975859: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97585c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97585d: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 975861: jmp dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); SPILL(); call_ind(t); return; }
L_975867: /* 975867: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975868: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975870(void) {
  LOAD_REGS();
L_975870: /* 975870: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975874: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 975877: cmp edx, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97587a: jge 0x975889 */
  if ((sf == of)) goto L_975889;
L_97587c: /* 97587c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 97587f: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 975882: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 975883: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 975886: ret 4 */
  esp += 8; SPILL(); return;
L_975889: /* 975889: xor eax, eax */
  eax = 0;
/* 97588b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975890(void) {
  LOAD_REGS();
L_975890: /* 975890: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 975894: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 975897: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 975899: jle 0x9758a9 */
  if ((zf || sf != of)) goto L_9758a9;
L_97589b: /* 97589b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97589f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9758a0: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 9758a3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 9758a6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_9758a9: /* 9758a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9758b0(void) {
  LOAD_REGS();
L_9758b0: /* 9758b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9758b4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9758b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9758c0(void) {
  LOAD_REGS();
L_9758c0: /* 9758c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9758c4: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 9758c7: sub eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9758ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9758d0(void) {
  LOAD_REGS();
L_9758d0: /* 9758d0: push 0xb0225c */
  { uint32_t v = 0xb0225cu; esp -= 4; W32(esp, v); }
/* 9758d5: push 0xaf2ab8 */
  { uint32_t v = 0xaf2ab8u; esp -= 4; W32(esp, v); }
/* 9758da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9758dc: call 0x971e20 */
  esp -= 4; W32(esp, 0x9758e1u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 9758e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9758e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9758f0(void) {
  LOAD_REGS();
L_9758f0: /* 9758f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9758f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9758f8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9758fc: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* 975902: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 975905: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 975909: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 975910: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 975913: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 975916: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_975920(void) {
  LOAD_REGS();
L_975920: /* 975920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 975924: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 975927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975929: je 0x97593b */
  if (zf) goto L_97593b;
L_97592b: /* 97592b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97592c: push 0xb02280 */
  { uint32_t v = 0xb02280u; esp -= 4; W32(esp, v); }
/* 975931: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 975933: call 0x971e40 */
  esp -= 4; W32(esp, 0x975938u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 975938: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97593b: /* 97593b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975940(void) {
  LOAD_REGS();
L_975940: /* 975940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975941: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 975945: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 975948: cmp eax, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97594b: jl 0x975953 */
  if ((sf != of)) goto L_975953;
L_97594d: /* 97594d: xor eax, eax */
  eax = 0;
/* 97594f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975950: ret 4 */
  esp += 8; SPILL(); return;
L_975953: /* 975953: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 975956: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975958: jne 0x975966 */
  if (!zf) goto L_975966;
L_97595a: /* 97595a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97595d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97595e: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x975964u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 975964: jmp 0x975971 */
  goto L_975971;
L_975966: /* 975966: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 975969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97596a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97596b: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x975971u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_975971: /* 975971: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975973: jne 0x975979 */
  if (!zf) goto L_975979;
L_975975: /* 975975: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 975976: ret 4 */
  esp += 8; SPILL(); return;
L_975979: /* 975979: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 97597c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97597d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_975980(void) {
  LOAD_REGS();
L_975980: /* 975980: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 975984: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975986: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 975987: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97598b: je 0x9759ac */
  if (zf) goto L_9759ac;
L_97598d: /* 97598d: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 975990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 975992: mov eax, dword ptr [0xb021a4] */
  eax = R32((uint32_t)(0xb021a4u));
/* 975997: je 0x97599e */
  if (zf) goto L_97599e;
L_975999: /* 975999: mov eax, dword ptr [0xb021a8] */
  eax = R32((uint32_t)(0xb021a8u));
L_97599e: /* 97599e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97599f: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9759a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9759a1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9759a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9759a6: jle 0x9759ac */
  if ((zf || sf != of)) goto L_9759ac;
L_9759a8: /* 9759a8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9759a9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_9759ac: /* 9759ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9759ad: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9759b0(void) {
  LOAD_REGS();
L_9759b0: /* 9759b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9759b4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 9759b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9759c0(void) {
  LOAD_REGS();
L_9759c0: /* 9759c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9759c4: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 9759c7: sub eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9759ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9759d0(void) {
  LOAD_REGS();
L_9759d0: /* 9759d0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9759d4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9759d8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9759db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9759df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9759e1: jne 0x9759e8 */
  if (!zf) goto L_9759e8;
L_9759e3: /* 9759e3: mov ecx, 0x975a00 */
  ecx = 0x975a00u;
L_9759e8: /* 9759e8: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9759ec: add edx, -4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9759ef: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9759f2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9759f4: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 9759fb: ret  */
  esp += 4; SPILL(); return;
}
