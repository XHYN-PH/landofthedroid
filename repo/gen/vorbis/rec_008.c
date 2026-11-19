#include "recomp.h"
#include "rec_mod.h"

void f_10053c8(void) {
  LOAD_REGS();
  goto L_10053c8;
L_10053c2: /* 10053c2: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 10053c6: jmp 0x10053d0 */
  goto L_10053d0;
L_10053c8: /* 10053c8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 10053cf: nop  */
L_10053d0: /* 10053d0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 10053d4: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 10053d8: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 10053dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10053e0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10053e4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10053e6: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 10053ea: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053ee: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053f2: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10053f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10053f6: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10053f8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10053fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1005400: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1005404: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005408: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 100540c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1005410: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 1005414: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005418: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100541c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100541e: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1005422: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 1005426: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100542a: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100542e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005430: xor ecx, ecx */
  ecx = 0;
/* 1005432: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005435: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005439: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100543d: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 1005441: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005445: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005449: jl 0x1005540 */
  if ((sf != of)) goto L_1005540;
L_100544f: /* 100544f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005456: mov eax, edx */
  eax = edx;
/* 1005458: lea edx, [ecx + edi*4 + 8] */
  edx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100545c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1005460: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005464: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1005467: lea ecx, [ecx + ebp*4 + 8] */
  ecx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 100546b: mov dword ptr [esp + 0x50], 3 */
  W32((uint32_t)(esp + 0x50u), 0x3u);
/* 1005473: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_1005477: /* 1005477: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 100547b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100547f: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005482: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005486: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005489: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100548c: fadd dword ptr [edx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffe8u)));
/* 100548f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005492: fstp dword ptr [edi - 0x18] */
  WF32((uint32_t)(edi + 0xffffffe8u), ST0); FPOP();
/* 1005495: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 1005499: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100549c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054a0: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 10054a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054a7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054aa: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ae: fadd dword ptr [edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffecu)));
/* 10054b1: fstp dword ptr [edi - 0x14] */
  WF32((uint32_t)(edi + 0xffffffecu), ST0); FPOP();
/* 10054b4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054b8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054bb: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054bf: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10054c2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054c6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054c8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054cc: fadd dword ptr [edx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff0u)));
/* 10054cf: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 10054d2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054d8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054dc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10054df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054e6: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ea: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 10054ed: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 10054f0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054f4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054f7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10054fb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10054fe: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005502: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005506: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1005509: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100550c: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005510: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1005515: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100551a: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 100551f: add dword ptr [esp + 0x40], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005524: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1005529: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 100552e: cmp dword ptr [esp + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005532: jl 0x1005477 */
  if ((sf != of)) goto L_1005477;
L_1005538: /* 1005538: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 100553c: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1005540: /* 1005540: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005542: jge 0x10055d9 */
  if ((sf == of)) goto L_10055d9;
L_1005548: /* 1005548: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 100554c: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005553: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005556: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 100555a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 100555e: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 1005565: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005568: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 100556c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005570: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005577: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 100557a: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1005581: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005585: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1005589: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 100558c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1005590: /* 1005590: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1005594: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 100559b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 100559d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10055a0: fadd dword ptr [edi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4)));
/* 10055a3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055a7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055a9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055ad: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10055b1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 10055b3: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 10055b7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055b9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055c0: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10055c4: add dword ptr [esp + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 10055c9: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055cd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10055d1: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055d3: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 10055d7: jl 0x1005590 */
  if ((sf != of)) goto L_1005590;
L_10055d9: /* 10055d9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10055dd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10055e1: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 10055e5: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10055e9: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055ee: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10055f2: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10055f6: jle 0x1005829 */
  if ((zf || sf != of)) goto L_1005829;
L_10055fc: /* 10055fc: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005603: lea edx, [ecx + ebp*4 + 8] */
  edx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 1005607: lea ecx, [ecx + edi*4 + 8] */
  ecx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100560b: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 100560f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005613: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005616: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 100561a: jmp 0x1005630 */
  goto L_1005630;
L_100561c: /* 100561c: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 1005620: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 1005627: jmp 0x1005630 */
  goto L_1005630;
L_1005630: /* 1005630: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 1005634: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1005638: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 100563c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100563e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005642: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005646: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 100564a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 100564e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005650: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005654: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1005656: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005658: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100565a: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100565d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 1005661: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 1005668: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100566c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1005670: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 1005674: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1005678: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 100567c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1005680: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1005684: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1005688: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 100568c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005690: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005692: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1005696: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100569a: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 100569e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10056a2: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 10056a6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10056ae: jl 0x100579a */
  if ((sf != of)) goto L_100579a;
L_10056b4: /* 10056b4: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 10056b8: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10056bc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10056c0: mov dword ptr [esp + 0x40], 3 */
  W32((uint32_t)(esp + 0x40u), 0x3u);
L_10056c8: /* 10056c8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10056cc: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 10056d0: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 10056d3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056d6: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10056da: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 10056de: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10056e1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056e4: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 10056e8: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10056ec: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10056ef: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10056f6: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 10056fa: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 10056fd: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005701: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005704: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005708: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100570b: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 100570f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005712: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 1005716: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 1005719: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 100571d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005721: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005724: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005727: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 100572b: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 100572f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005732: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1005735: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005738: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100573b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100573e: cmp ebp, dword ptr [esp + 0x94] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005745: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1005748: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100574c: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 100574f: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1005752: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1005755: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005759: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 100575c: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 100575f: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1005762: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005766: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1005769: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 100576c: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 100576f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005773: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 1005776: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005779: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 100577c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005780: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1005783: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1005786: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1005789: jl 0x10056c8 */
  if ((sf != of)) goto L_10056c8;
L_100578f: /* 100578f: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005796: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100579a: /* 100579a: cmp dword ptr [esp + 0x30], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100579e: jge 0x100581f */
  if ((sf == of)) goto L_100581f;
L_10057a0: /* 10057a0: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 10057a7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10057ab: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 10057b2: lea ecx, [edi + edx*4] */
  ecx = (uint32_t)(edi + edx*4);
/* 10057b5: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057b9: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 10057bc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10057c4: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 10057c7: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057cb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 10057ce: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10057d2: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 10057d6: mov eax, ebp */
  eax = ebp;
/* 10057d8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10057da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10057e0: /* 10057e0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057e4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10057e8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 10057ea: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057ee: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10057f1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057f5: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 10057f7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10057fa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10057fd: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 1005800: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005804: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005807: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 100580b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100580e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100580f: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005812: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1005816: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1005819: jne 0x10057e0 */
  if (!zf) goto L_10057e0;
L_100581b: /* 100581b: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100581f: /* 100581f: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005823: jne 0x100561c */
  if (!zf) goto L_100561c;
L_1005829: /* 1005829: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 100582d: jne 0x10053c2 */
  if (!zf) goto L_10053c2;
L_1005833: /* 1005833: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005837: xor edx, edx */
  edx = 0;
/* 1005839: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100583c: jle 0x100591f */
  if ((zf || sf != of)) goto L_100591f;
L_1005842: /* 1005842: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005849: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100584d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005850: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1005851: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 1005855: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 100585c: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1005860: jmp 0x1005870 */
  goto L_1005870;
L_1005862: /* 1005862: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005866: jmp 0x1005870 */
  goto L_1005870;
L_1005870: /* 1005870: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005874: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005876: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 100587d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005881: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005883: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1005887: xor edx, edx */
  edx = 0;
/* 1005889: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100588c: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005890: jl 0x10058f2 */
  if ((sf != of)) goto L_10058f2;
L_1005892: /* 1005892: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1005896: mov edi, 3 */
  edi = 0x3u;
/* 100589b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_100589e: /* 100589e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 10058a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058a4: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10058a7: mov dword ptr [esp + 0x80], edi */
  W32((uint32_t)(esp + 0x80u), edi);
/* 10058ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10058b2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058b5: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10058b8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10058bc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10058bf: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 10058c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10058c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10058cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10058cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10058d2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10058d7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10058da: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10058dd: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10058e0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 10058e3: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10058e6: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10058e9: jl 0x100589e */
  if ((sf != of)) goto L_100589e;
L_10058eb: /* 10058eb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_10058f2: /* 10058f2: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058f4: jge 0x1005915 */
  if ((sf == of)) goto L_1005915;
L_10058f6: /* 10058f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 10058fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1005901: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
L_1005904: /* 1005904: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1005906: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005909: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100590c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100590d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100590f: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005913: jl 0x1005904 */
  if ((sf != of)) goto L_1005904;
L_1005915: /* 1005915: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 1005919: jne 0x1005862 */
  if (!zf) goto L_1005862;
L_100591f: /* 100591f: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005926: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005928: jge 0x1005987 */
  if ((sf == of)) goto L_1005987;
L_100592a: /* 100592a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100592c: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_1005932: /* 1005932: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005939: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100593b: mov edx, esi */
  edx = esi;
/* 100593d: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005944: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
L_1005948: /* 1005948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100594a: jle 0x1005977 */
  if ((zf || sf != of)) goto L_1005977;
L_100594c: /* 100594c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100594e: mov eax, edx */
  eax = edx;
L_1005950: /* 1005950: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 1005952: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 1005954: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100595b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100595d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005961: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005964: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005966: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005967: jne 0x1005950 */
  if (!zf) goto L_1005950;
L_1005969: /* 1005969: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005970: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
L_1005977: /* 1005977: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100597b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100597e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100597f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005983: jne 0x1005948 */
  if (!zf) goto L_1005948;
L_1005985: /* 1005985: jmp 0x10059f2 */
  goto L_10059f2;
L_1005987: /* 1005987: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005989: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_100598b: /* 100598b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100598f: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005996: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 100599d: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 10059a4: mov ebp, esi */
  ebp = esi;
/* 10059a6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059aa: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10059ae: mov edi, edi */
  edi = edi;
L_10059b0: /* 10059b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10059b2: jle 0x10059cd */
  if ((zf || sf != of)) goto L_10059cd;
L_10059b4: /* 10059b4: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059b8: mov eax, ebp */
  eax = ebp;
/* 10059ba: mov edx, ebx */
  edx = ebx;
/* 10059bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10059c0: /* 10059c0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10059c2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 10059c4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10059c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10059cb: jne 0x10059c0 */
  if (!zf) goto L_10059c0;
L_10059cd: /* 10059cd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059d1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10059d8: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10059df: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10059e1: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 10059e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10059e8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059ec: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10059f0: jne 0x10059b0 */
  if (!zf) goto L_10059b0;
L_10059f2: /* 10059f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10059f6: imul ebp, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  ebp = (uint32_t)r;
  }
/* 10059fe: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005a03: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005a06: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1005a0a: jle 0x1005aa7 */
  if ((zf || sf != of)) goto L_1005aa7;
L_1005a10: /* 1005a10: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1005a14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005a17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1005a18: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005a1f: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 1005a26: lea edx, [esi + ebp*4] */
  edx = (uint32_t)(esi + ebp*4);
/* 1005a29: mov ecx, esi */
  ecx = esi;
/* 1005a2b: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 1005a2f: nop  */
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_1005629(void) {
  LOAD_REGS();
  goto L_1005629;
L_10053c2: /* 10053c2: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 10053c6: jmp 0x10053d0 */
  goto L_10053d0;
L_10053d0: /* 10053d0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 10053d4: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 10053d8: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 10053dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10053e0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10053e4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10053e6: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 10053ea: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053ee: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053f2: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10053f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10053f6: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10053f8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10053fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1005400: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1005404: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005408: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 100540c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1005410: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 1005414: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005418: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100541c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100541e: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1005422: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 1005426: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100542a: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100542e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005430: xor ecx, ecx */
  ecx = 0;
/* 1005432: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005435: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005439: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100543d: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 1005441: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005445: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005449: jl 0x1005540 */
  if ((sf != of)) goto L_1005540;
L_100544f: /* 100544f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005456: mov eax, edx */
  eax = edx;
/* 1005458: lea edx, [ecx + edi*4 + 8] */
  edx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100545c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1005460: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005464: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1005467: lea ecx, [ecx + ebp*4 + 8] */
  ecx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 100546b: mov dword ptr [esp + 0x50], 3 */
  W32((uint32_t)(esp + 0x50u), 0x3u);
/* 1005473: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_1005477: /* 1005477: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 100547b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100547f: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005482: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005486: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005489: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100548c: fadd dword ptr [edx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffe8u)));
/* 100548f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005492: fstp dword ptr [edi - 0x18] */
  WF32((uint32_t)(edi + 0xffffffe8u), ST0); FPOP();
/* 1005495: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 1005499: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100549c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054a0: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 10054a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054a7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054aa: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ae: fadd dword ptr [edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffecu)));
/* 10054b1: fstp dword ptr [edi - 0x14] */
  WF32((uint32_t)(edi + 0xffffffecu), ST0); FPOP();
/* 10054b4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054b8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054bb: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054bf: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10054c2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054c6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054c8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054cc: fadd dword ptr [edx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff0u)));
/* 10054cf: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 10054d2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054d8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054dc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10054df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054e6: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ea: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 10054ed: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 10054f0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054f4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054f7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10054fb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10054fe: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005502: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005506: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1005509: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100550c: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005510: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1005515: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100551a: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 100551f: add dword ptr [esp + 0x40], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005524: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1005529: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 100552e: cmp dword ptr [esp + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005532: jl 0x1005477 */
  if ((sf != of)) goto L_1005477;
L_1005538: /* 1005538: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 100553c: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1005540: /* 1005540: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005542: jge 0x10055d9 */
  if ((sf == of)) goto L_10055d9;
L_1005548: /* 1005548: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 100554c: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005553: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005556: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 100555a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 100555e: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 1005565: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005568: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 100556c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005570: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005577: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 100557a: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1005581: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005585: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1005589: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 100558c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1005590: /* 1005590: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1005594: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 100559b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 100559d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10055a0: fadd dword ptr [edi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4)));
/* 10055a3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055a7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055a9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055ad: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10055b1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 10055b3: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 10055b7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055b9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055c0: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10055c4: add dword ptr [esp + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 10055c9: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055cd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10055d1: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055d3: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 10055d7: jl 0x1005590 */
  if ((sf != of)) goto L_1005590;
L_10055d9: /* 10055d9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10055dd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10055e1: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 10055e5: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10055e9: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055ee: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10055f2: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10055f6: jle 0x1005829 */
  if ((zf || sf != of)) goto L_1005829;
L_10055fc: /* 10055fc: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005603: lea edx, [ecx + ebp*4 + 8] */
  edx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 1005607: lea ecx, [ecx + edi*4 + 8] */
  ecx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100560b: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 100560f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005613: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005616: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 100561a: jmp 0x1005630 */
  goto L_1005630;
L_100561c: /* 100561c: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 1005620: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 1005627: jmp 0x1005630 */
  goto L_1005630;
L_1005629: /* 1005629: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1005630: /* 1005630: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 1005634: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1005638: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 100563c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100563e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005642: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005646: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 100564a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 100564e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005650: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005654: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1005656: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005658: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100565a: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100565d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 1005661: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 1005668: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100566c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1005670: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 1005674: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1005678: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 100567c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1005680: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1005684: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1005688: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 100568c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005690: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005692: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1005696: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100569a: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 100569e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10056a2: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 10056a6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10056ae: jl 0x100579a */
  if ((sf != of)) goto L_100579a;
L_10056b4: /* 10056b4: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 10056b8: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10056bc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10056c0: mov dword ptr [esp + 0x40], 3 */
  W32((uint32_t)(esp + 0x40u), 0x3u);
L_10056c8: /* 10056c8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10056cc: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 10056d0: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 10056d3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056d6: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10056da: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 10056de: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10056e1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056e4: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 10056e8: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10056ec: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10056ef: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10056f6: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 10056fa: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 10056fd: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005701: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005704: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005708: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100570b: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 100570f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005712: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 1005716: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 1005719: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 100571d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005721: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005724: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005727: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 100572b: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 100572f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005732: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1005735: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005738: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100573b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100573e: cmp ebp, dword ptr [esp + 0x94] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005745: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1005748: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100574c: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 100574f: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1005752: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1005755: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005759: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 100575c: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 100575f: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1005762: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005766: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1005769: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 100576c: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 100576f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005773: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 1005776: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005779: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 100577c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005780: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1005783: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1005786: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1005789: jl 0x10056c8 */
  if ((sf != of)) goto L_10056c8;
L_100578f: /* 100578f: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005796: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100579a: /* 100579a: cmp dword ptr [esp + 0x30], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100579e: jge 0x100581f */
  if ((sf == of)) goto L_100581f;
L_10057a0: /* 10057a0: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 10057a7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10057ab: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 10057b2: lea ecx, [edi + edx*4] */
  ecx = (uint32_t)(edi + edx*4);
/* 10057b5: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057b9: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 10057bc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10057c4: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 10057c7: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057cb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 10057ce: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10057d2: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 10057d6: mov eax, ebp */
  eax = ebp;
/* 10057d8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10057da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10057e0: /* 10057e0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057e4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10057e8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 10057ea: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057ee: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10057f1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057f5: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 10057f7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10057fa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10057fd: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 1005800: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005804: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005807: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 100580b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100580e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100580f: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005812: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1005816: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1005819: jne 0x10057e0 */
  if (!zf) goto L_10057e0;
L_100581b: /* 100581b: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100581f: /* 100581f: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005823: jne 0x100561c */
  if (!zf) goto L_100561c;
L_1005829: /* 1005829: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 100582d: jne 0x10053c2 */
  if (!zf) goto L_10053c2;
L_1005833: /* 1005833: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005837: xor edx, edx */
  edx = 0;
/* 1005839: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100583c: jle 0x100591f */
  if ((zf || sf != of)) goto L_100591f;
L_1005842: /* 1005842: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005849: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100584d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005850: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1005851: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 1005855: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 100585c: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1005860: jmp 0x1005870 */
  goto L_1005870;
L_1005862: /* 1005862: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005866: jmp 0x1005870 */
  goto L_1005870;
L_1005870: /* 1005870: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005874: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005876: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 100587d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005881: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005883: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1005887: xor edx, edx */
  edx = 0;
/* 1005889: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100588c: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005890: jl 0x10058f2 */
  if ((sf != of)) goto L_10058f2;
L_1005892: /* 1005892: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1005896: mov edi, 3 */
  edi = 0x3u;
/* 100589b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_100589e: /* 100589e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 10058a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058a4: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10058a7: mov dword ptr [esp + 0x80], edi */
  W32((uint32_t)(esp + 0x80u), edi);
/* 10058ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10058b2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058b5: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10058b8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10058bc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10058bf: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 10058c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10058c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10058cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10058cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10058d2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10058d7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10058da: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10058dd: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10058e0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 10058e3: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10058e6: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10058e9: jl 0x100589e */
  if ((sf != of)) goto L_100589e;
L_10058eb: /* 10058eb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_10058f2: /* 10058f2: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058f4: jge 0x1005915 */
  if ((sf == of)) goto L_1005915;
L_10058f6: /* 10058f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 10058fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1005901: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
L_1005904: /* 1005904: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1005906: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005909: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100590c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100590d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100590f: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005913: jl 0x1005904 */
  if ((sf != of)) goto L_1005904;
L_1005915: /* 1005915: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 1005919: jne 0x1005862 */
  if (!zf) goto L_1005862;
L_100591f: /* 100591f: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005926: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005928: jge 0x1005987 */
  if ((sf == of)) goto L_1005987;
L_100592a: /* 100592a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100592c: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_1005932: /* 1005932: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005939: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100593b: mov edx, esi */
  edx = esi;
/* 100593d: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005944: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
L_1005948: /* 1005948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100594a: jle 0x1005977 */
  if ((zf || sf != of)) goto L_1005977;
L_100594c: /* 100594c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100594e: mov eax, edx */
  eax = edx;
L_1005950: /* 1005950: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 1005952: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 1005954: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100595b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100595d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005961: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005964: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005966: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005967: jne 0x1005950 */
  if (!zf) goto L_1005950;
L_1005969: /* 1005969: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005970: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
L_1005977: /* 1005977: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100597b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100597e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100597f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005983: jne 0x1005948 */
  if (!zf) goto L_1005948;
L_1005985: /* 1005985: jmp 0x10059f2 */
  goto L_10059f2;
L_1005987: /* 1005987: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005989: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_100598b: /* 100598b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100598f: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005996: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 100599d: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 10059a4: mov ebp, esi */
  ebp = esi;
/* 10059a6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059aa: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10059ae: mov edi, edi */
  edi = edi;
L_10059b0: /* 10059b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10059b2: jle 0x10059cd */
  if ((zf || sf != of)) goto L_10059cd;
L_10059b4: /* 10059b4: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059b8: mov eax, ebp */
  eax = ebp;
/* 10059ba: mov edx, ebx */
  edx = ebx;
/* 10059bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10059c0: /* 10059c0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10059c2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 10059c4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10059c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10059cb: jne 0x10059c0 */
  if (!zf) goto L_10059c0;
L_10059cd: /* 10059cd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059d1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10059d8: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10059df: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10059e1: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 10059e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10059e8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059ec: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10059f0: jne 0x10059b0 */
  if (!zf) goto L_10059b0;
L_10059f2: /* 10059f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10059f6: imul ebp, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  ebp = (uint32_t)r;
  }
/* 10059fe: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005a03: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005a06: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1005a0a: jle 0x1005aa7 */
  if ((zf || sf != of)) goto L_1005aa7;
L_1005a10: /* 1005a10: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1005a14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005a17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1005a18: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005a1f: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 1005a26: lea edx, [esi + ebp*4] */
  edx = (uint32_t)(esi + ebp*4);
/* 1005a29: mov ecx, esi */
  ecx = esi;
/* 1005a2b: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 1005a2f: nop  */
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_1005868(void) {
  LOAD_REGS();
  goto L_1005868;
L_1005862: /* 1005862: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005866: jmp 0x1005870 */
  goto L_1005870;
L_1005868: /* 1005868: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 100586f: nop  */
L_1005870: /* 1005870: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005874: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005876: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 100587d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005881: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005883: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1005887: xor edx, edx */
  edx = 0;
/* 1005889: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100588c: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005890: jl 0x10058f2 */
  if ((sf != of)) goto L_10058f2;
L_1005892: /* 1005892: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1005896: mov edi, 3 */
  edi = 0x3u;
/* 100589b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_100589e: /* 100589e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 10058a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058a4: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10058a7: mov dword ptr [esp + 0x80], edi */
  W32((uint32_t)(esp + 0x80u), edi);
/* 10058ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10058b2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058b5: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10058b8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10058bc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10058bf: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 10058c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10058c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10058cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10058cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10058d2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10058d7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10058da: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10058dd: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10058e0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 10058e3: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10058e6: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10058e9: jl 0x100589e */
  if ((sf != of)) goto L_100589e;
L_10058eb: /* 10058eb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_10058f2: /* 10058f2: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058f4: jge 0x1005915 */
  if ((sf == of)) goto L_1005915;
L_10058f6: /* 10058f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 10058fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1005901: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
L_1005904: /* 1005904: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1005906: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005909: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100590c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100590d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100590f: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005913: jl 0x1005904 */
  if ((sf != of)) goto L_1005904;
L_1005915: /* 1005915: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 1005919: jne 0x1005862 */
  if (!zf) goto L_1005862;
L_100591f: /* 100591f: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005926: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005928: jge 0x1005987 */
  if ((sf == of)) goto L_1005987;
L_100592a: /* 100592a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100592c: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_1005932: /* 1005932: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005939: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100593b: mov edx, esi */
  edx = esi;
/* 100593d: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005944: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
L_1005948: /* 1005948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100594a: jle 0x1005977 */
  if ((zf || sf != of)) goto L_1005977;
L_100594c: /* 100594c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100594e: mov eax, edx */
  eax = edx;
L_1005950: /* 1005950: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 1005952: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 1005954: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100595b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100595d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005961: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005964: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005966: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005967: jne 0x1005950 */
  if (!zf) goto L_1005950;
L_1005969: /* 1005969: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005970: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
L_1005977: /* 1005977: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100597b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100597e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100597f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005983: jne 0x1005948 */
  if (!zf) goto L_1005948;
L_1005985: /* 1005985: jmp 0x10059f2 */
  goto L_10059f2;
L_1005987: /* 1005987: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005989: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_100598b: /* 100598b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100598f: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005996: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 100599d: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 10059a4: mov ebp, esi */
  ebp = esi;
/* 10059a6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059aa: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10059ae: mov edi, edi */
  edi = edi;
L_10059b0: /* 10059b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10059b2: jle 0x10059cd */
  if ((zf || sf != of)) goto L_10059cd;
L_10059b4: /* 10059b4: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059b8: mov eax, ebp */
  eax = ebp;
/* 10059ba: mov edx, ebx */
  edx = ebx;
/* 10059bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10059c0: /* 10059c0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10059c2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 10059c4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10059c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10059cb: jne 0x10059c0 */
  if (!zf) goto L_10059c0;
L_10059cd: /* 10059cd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059d1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10059d8: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10059df: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10059e1: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 10059e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10059e8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059ec: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10059f0: jne 0x10059b0 */
  if (!zf) goto L_10059b0;
L_10059f2: /* 10059f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10059f6: imul ebp, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  ebp = (uint32_t)r;
  }
/* 10059fe: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005a03: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005a06: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1005a0a: jle 0x1005aa7 */
  if ((zf || sf != of)) goto L_1005aa7;
L_1005a10: /* 1005a10: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1005a14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005a17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1005a18: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005a1f: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 1005a26: lea edx, [esi + ebp*4] */
  edx = (uint32_t)(esi + ebp*4);
/* 1005a29: mov ecx, esi */
  ecx = esi;
/* 1005a2b: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 1005a2f: nop  */
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_1005a6d(void) {
  LOAD_REGS();
  goto L_1005a6d;
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a6d: /* 1005a6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_1005ec0(void) {
  LOAD_REGS();
L_1005ec0: /* 1005ec0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1005ec3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1005ec4: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 1005ec8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1005ec9: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1005ecd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1005ece: mov edi, eax */
  edi = eax;
/* 1005ed0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1005ed3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005ed5: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* 1005edd: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 1005ee1: jle 0x100605e */
  if ((zf || sf != of)) goto L_100605e;
L_1005ee7: /* 1005ee7: lea ecx, [ecx + eax*4 + 4] */
  ecx = (uint32_t)(ecx + eax*4 + 0x4u);
/* 1005eeb: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1005eef: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1005ef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_1005ef4: /* 1005ef4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1005ef8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1005efa: mov eax, ebx */
  eax = ebx;
/* 1005efc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1005efd: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x1005efd);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1005eff: mov esi, eax */
  esi = eax;
/* 1005f01: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1005f05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1005f06: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x1005f06);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1005f08: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005f0c: mov ebx, eax */
  ebx = eax;
/* 1005f0e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 1005f11: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1005f15: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 1005f18: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 1005f1b: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005f1d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005f21: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005f25: mov eax, 1 */
  eax = 0x1u;
/* 1005f2a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1005f2c: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005f2f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1005f33: je 0x1005fe8 */
  if (zf) goto L_1005fe8;
L_1005f39: /* 1005f39: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005f3c: je 0x1005fac */
  if (zf) goto L_1005fac;
L_1005f3e: /* 1005f3e: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005f41: jne 0x1005f4d */
  if (!zf) goto L_1005f4d;
L_1005f43: /* 1005f43: mov edx, ebx */
  edx = ebx;
/* 1005f45: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005f47: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1005f4b: mov eax, edx */
  eax = edx;
L_1005f4d: /* 1005f4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1005f4f: je 0x1005f81 */
  if (zf) goto L_1005f81;
L_1005f51: /* 1005f51: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1005f55: lea edx, [ebp + eax*4 - 4] */
  edx = (uint32_t)(ebp + eax*4 + 0xfffffffcu);
/* 1005f59: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1005f5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1005f5e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1005f62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1005f63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1005f64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1005f65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1005f66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1005f67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1005f68: mov eax, edi */
  eax = edi;
/* 1005f6a: mov ecx, edx */
  ecx = edx;
/* 1005f6c: call 0x1004a40 */
  esp -= 4; W32(esp, 0x1005f71u); SPILL(); f_1004a40(); if (g_unwind) return; RELOAD();
/* 1005f71: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005f74: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1005f7c: jmp 0x1006021 */
  goto L_1006021;
L_1005f81: /* 1005f81: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005f85: lea eax, [ebp + edx*4 - 4] */
  eax = (uint32_t)(ebp + edx*4 + 0xfffffffcu);
/* 1005f89: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1005f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1005f8e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1005f92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1005f93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1005f94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1005f95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1005f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1005f97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1005f98: mov ecx, edi */
  ecx = edi;
/* 1005f9a: call 0x1004a40 */
  esp -= 4; W32(esp, 0x1005f9fu); SPILL(); f_1004a40(); if (g_unwind) return; RELOAD();
/* 1005f9f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005fa2: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 1005faa: jmp 0x1006021 */
  goto L_1006021;
L_1005fac: /* 1005fac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1005fae: je 0x1005fcb */
  if (zf) goto L_1005fcb;
L_1005fb0: /* 1005fb0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1005fb4: lea ecx, [ebp + eax*4 - 4] */
  ecx = (uint32_t)(ebp + eax*4 + 0xfffffffcu);
/* 1005fb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1005fb9: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 1005fbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1005fbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1005fbf: mov eax, ebx */
  eax = ebx;
/* 1005fc1: call 0x1003df0 */
  esp -= 4; W32(esp, 0x1005fc6u); SPILL(); f_1003df0(); if (g_unwind) return; RELOAD();
/* 1005fc6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005fc9: jmp 0x1006021 */
  goto L_1006021;
L_1005fcb: /* 1005fcb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005fcf: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1005fd3: lea eax, [ebp + edx*4 - 4] */
  eax = (uint32_t)(ebp + edx*4 + 0xfffffffcu);
/* 1005fd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1005fd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1005fd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1005fda: mov ecx, edi */
  ecx = edi;
/* 1005fdc: mov eax, ebx */
  eax = ebx;
/* 1005fde: call 0x1003df0 */
  esp -= 4; W32(esp, 0x1005fe3u); SPILL(); f_1003df0(); if (g_unwind) return; RELOAD();
/* 1005fe3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005fe6: jmp 0x1006021 */
  goto L_1006021;
L_1005fe8: /* 1005fe8: cmp dword ptr [esp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005fed: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005ff1: lea eax, [ebx + edx] */
  eax = (uint32_t)(ebx + edx);
/* 1005ff4: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 1005ff7: lea ecx, [ebp + ecx*4 - 4] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffffcu);
/* 1005ffb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1005ffc: lea eax, [ebp + eax*4 - 4] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffffcu);
/* 1006000: lea ecx, [ebp + edx*4 - 4] */
  ecx = (uint32_t)(ebp + edx*4 + 0xfffffffcu);
/* 1006004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1006005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1006006: mov ecx, ebx */
  ecx = ebx;
/* 1006008: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1006009: je 0x1006013 */
  if (zf) goto L_1006013;
L_100600b: /* 100600b: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 100600f: mov edx, edi */
  edx = edi;
/* 1006011: jmp 0x1006019 */
  goto L_1006019;
L_1006013: /* 1006013: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1006017: mov eax, edi */
  eax = edi;
L_1006019: /* 1006019: call 0x1004090 */
  esp -= 4; W32(esp, 0x100601eu); SPILL(); f_1004090(); if (g_unwind) return; RELOAD();
/* 100601e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1006021: /* 1006021: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1006025: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1006029: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100602c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100602d: mov ebx, esi */
  ebx = esi;
/* 100602f: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1006033: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1006037: jne 0x1005ef4 */
  if (!zf) goto L_1005ef4;
L_100603d: /* 100603d: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1006042: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1006043: je 0x100605e */
  if (zf) goto L_100605e;
L_1006045: /* 1006045: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1006049: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100604b: jle 0x100605e */
  if ((zf || sf != of)) goto L_100605e;
L_100604d: /* 100604d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1006051: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_1006053: /* 1006053: mov edx, dword ptr [eax + edi] */
  edx = R32((uint32_t)(eax + edi));
/* 1006056: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 1006058: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100605b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 100605c: jne 0x1006053 */
  if (!zf) goto L_1006053;
L_100605e: /* 100605e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100605f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1006060: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1006061: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1006064: ret  */
  esp += 4; SPILL(); return;
}

void f_1006070(void) {
  LOAD_REGS();
L_1006070: /* 1006070: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1006073: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1006074: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1006075: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 1006079: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100607a: mov esi, edx */
  esi = edx;
/* 100607c: imul esi, dword ptr [esp + 0x38] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x38u)));
  esi = (uint32_t)r;
  }
/* 1006081: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1006082: mov ebx, ecx */
  ebx = ecx;
/* 1006084: xor edi, edi */
  edi = 0;
/* 1006086: xor ecx, ecx */
  ecx = 0;
/* 1006088: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100608b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 100608f: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 1006093: jl 0x100617b */
  if ((sf != of)) goto L_100617b;
L_1006099: /* 1006099: mov dword ptr [esp + 0x1c], 3 */
  W32((uint32_t)(esp + 0x1cu), 0x3u);
/* 10060a1: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
L_10060a4: /* 10060a4: lea ebp, [edi + edx*2 - 1] */
  ebp = (uint32_t)(edi + edx*2 + 0xffffffffu);
/* 10060a8: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 10060ab: lea ebp, [eax + ebp*4] */
  ebp = (uint32_t)(eax + ebp*4);
/* 10060ae: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 10060b1: fstp dword ptr [ebx + ecx*4] */
  WF32((uint32_t)(ebx + ecx*4), ST0); FPOP();
/* 10060b4: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10060b6: fld dword ptr [eax + edi*4] */
  { double v = F32((uint32_t)(eax + edi*4)); FPUSH(v); }
/* 10060b9: lea edi, [edx*4] */
  edi = (uint32_t)(edx*4);
/* 10060c0: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 10060c3: lea ebp, [ecx + ecx] */
  ebp = (uint32_t)(ecx + ecx);
/* 10060c6: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 10060ca: lea ebp, [ebp + edx*2 - 1] */
  ebp = (uint32_t)(ebp + edx*2 + 0xffffffffu);
/* 10060ce: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 10060d0: lea ebp, [eax + ebp*4] */
  ebp = (uint32_t)(eax + ebp*4);
/* 10060d3: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 10060d6: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 10060da: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 10060de: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 10060e1: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10060e3: fstp dword ptr [ebx + ecx*4] */
  WF32((uint32_t)(ebx + ecx*4), ST0); FPOP();
/* 10060e6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10060e8: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 10060eb: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10060ef: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 10060f2: lea ebp, [ecx + ecx] */
  ebp = (uint32_t)(ecx + ecx);
/* 10060f5: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 10060f9: lea ebp, [ebp + edx*2 - 1] */
  ebp = (uint32_t)(ebp + edx*2 + 0xffffffffu);
/* 10060fd: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 10060ff: lea ebp, [eax + ebp*4] */
  ebp = (uint32_t)(eax + ebp*4);
/* 1006102: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 1006105: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1006109: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 100610d: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 1006110: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006112: fstp dword ptr [ebx + ecx*4] */
  WF32((uint32_t)(ebx + ecx*4), ST0); FPOP();
/* 1006115: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006117: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 100611a: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100611e: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 1006121: lea ebp, [ecx + ecx] */
  ebp = (uint32_t)(ecx + ecx);
/* 1006124: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 1006128: lea ebp, [ebp + edx*2 - 1] */
  ebp = (uint32_t)(ebp + edx*2 + 0xffffffffu);
/* 100612c: lea ebp, [eax + ebp*4] */
  ebp = (uint32_t)(eax + ebp*4);
/* 100612f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1006131: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 1006134: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1006138: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 100613c: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 100613f: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006141: fstp dword ptr [ebx + ecx*4] */
  WF32((uint32_t)(ebx + ecx*4), ST0); FPOP();
/* 1006144: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006146: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 1006149: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100614d: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 1006150: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006154: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006157: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100615b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 100615f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1006161: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006164: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006166: cmp ebp, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100616a: lea edi, [ecx + ecx] */
  edi = (uint32_t)(ecx + ecx);
/* 100616d: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 1006171: jl 0x10060a4 */
  if ((sf != of)) goto L_10060a4;
L_1006177: /* 1006177: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
L_100617b: /* 100617b: cmp dword ptr [esp + 0x18], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100617f: jge 0x10061c6 */
  if ((sf == of)) goto L_10061c6;
L_1006181: /* 1006181: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 1006185: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006187: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 100618a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 100618e: sub ebp, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_1006192: /* 1006192: lea esi, [edi + edx*2 - 1] */
  esi = (uint32_t)(edi + edx*2 + 0xffffffffu);
/* 1006196: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1006199: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 100619c: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 100619f: fstp dword ptr [ebx + ecx*4] */
  WF32((uint32_t)(ebx + ecx*4), ST0); FPOP();
/* 10061a2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10061a4: fld dword ptr [eax + edi*4] */
  { double v = F32((uint32_t)(eax + edi*4)); FPUSH(v); }
/* 10061a7: lea edi, [edx*4] */
  edi = (uint32_t)(edx*4);
/* 10061ae: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 10061b0: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 10061b4: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 10061b6: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10061b8: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 10061b9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 10061bd: lea edi, [ecx + ecx] */
  edi = (uint32_t)(ecx + ecx);
/* 10061c0: jne 0x1006192 */
  if (!zf) goto L_1006192;
L_10061c2: /* 10061c2: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
L_10061c6: /* 10061c6: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10061c9: jl 0x1006348 */
  if ((sf != of)) goto L_1006348;
L_10061cf: /* 10061cf: je 0x10062fc */
  if (zf) goto L_10062fc;
L_10061d5: /* 10061d5: xor ecx, ecx */
  ecx = 0;
/* 10061d7: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10061d9: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10061dd: jle 0x10062e8 */
  if ((zf || sf != of)) goto L_10062e8;
L_10061e3: /* 10061e3: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10061e7: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 10061ea: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10061ee: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 10061f2: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 10061f6: jmp 0x1006200 */
  goto L_1006200;
L_1006200: /* 1006200: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006203: lea esi, [ecx + edx*2] */
  esi = (uint32_t)(ecx + edx*2);
/* 1006206: jle 0x10062b1 */
  if ((zf || sf != of)) goto L_10062b1;
L_100620c: /* 100620c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 1006210: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1006214: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1006218: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 100621c: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 1006220: lea ebp, [edx - 3] */
  ebp = (uint32_t)(edx + 0xfffffffdu);
/* 1006223: shr ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 1006225: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1006228: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1006229: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 100622c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 100622f: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
L_1006233: /* 1006233: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006237: fld dword ptr [esi - 0xc] */
  { double v = F32((uint32_t)(esi + 0xfffffff4u)); FPUSH(v); }
/* 100623a: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 100623d: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006240: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1006244: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006248: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 100624b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100624e: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006251: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1006255: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006259: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100625c: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100625f: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1006262: fsub dword ptr [esi - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xfffffffcu)));
/* 1006265: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1006269: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100626b: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 100626d: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006270: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006274: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1006276: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006278: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 100627c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1006280: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1006283: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1006287: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 100628a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 100628c: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100628f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1006293: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1006296: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 100629a: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 100629d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 100629f: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10062a2: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10062a6: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 10062a7: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10062ab: jne 0x1006233 */
  if (!zf) goto L_1006233;
L_10062ad: /* 10062ad: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
L_10062b1: /* 10062b1: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10062b5: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 10062b9: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 10062c0: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10062c2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10062c4: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10062c8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10062cc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10062ce: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 10062d2: lea ecx, [esi + esi] */
  ecx = (uint32_t)(esi + esi);
/* 10062d5: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 10062d9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10062da: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10062de: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 10062e2: jne 0x1006200 */
  if (!zf) goto L_1006200;
L_10062e8: /* 10062e8: mov ecx, edx */
  ecx = edx;
/* 10062ea: and ecx, 0x80000001 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 10062f0: jns 0x10062f7 */
  if (!sf) goto L_10062f7;
L_10062f2: /* 10062f2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10062f3: or ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 10062f6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_10062f7: /* 10062f7: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10062fa: je 0x1006348 */
  if (zf) goto L_1006348;
L_10062fc: /* 10062fc: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10062fe: jle 0x1006348 */
  if ((zf || sf != of)) goto L_1006348;
L_1006300: /* 1006300: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 1006304: lea ecx, [edx*8] */
  ecx = (uint32_t)(edx*8);
/* 100630b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100630f: lea ecx, [ebx + edx*4 - 4] */
  ecx = (uint32_t)(ebx + edx*4 + 0xfffffffcu);
/* 1006313: lea esi, [edx*4] */
  esi = (uint32_t)(edx*4);
/* 100631a: lea eax, [eax + edx*4 - 4] */
  eax = (uint32_t)(eax + edx*4 + 0xfffffffcu);
/* 100631e: lea edx, [edx + edi - 1] */
  edx = (uint32_t)(edx + edi + 0xffffffffu);
/* 1006322: lea ebx, [ebx + edx*4] */
  ebx = (uint32_t)(ebx + edx*4);
/* 1006325: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1006329: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1006330: /* 1006330: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1006332: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006334: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 1006336: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006338: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 100633b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100633d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 100633f: fchs  */
  ST0 = -ST0;
/* 1006341: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1006343: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006345: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1006346: jne 0x1006330 */
  if (!zf) goto L_1006330;
L_1006348: /* 1006348: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1006349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100634a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100634b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100634c: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100634f: ret  */
  esp += 4; SPILL(); return;
}

void f_10061f8(void) {
  LOAD_REGS();
L_10061f8: /* 10061f8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 10061ff: nop  */
L_1006200: /* 1006200: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006203: lea esi, [ecx + edx*2] */
  esi = (uint32_t)(ecx + edx*2);
/* 1006206: jle 0x10062b1 */
  if ((zf || sf != of)) goto L_10062b1;
L_100620c: /* 100620c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 1006210: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1006214: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1006218: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 100621c: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 1006220: lea ebp, [edx - 3] */
  ebp = (uint32_t)(edx + 0xfffffffdu);
/* 1006223: shr ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 1006225: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1006228: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1006229: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 100622c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 100622f: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
L_1006233: /* 1006233: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006237: fld dword ptr [esi - 0xc] */
  { double v = F32((uint32_t)(esi + 0xfffffff4u)); FPUSH(v); }
/* 100623a: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 100623d: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006240: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1006244: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006248: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 100624b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100624e: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006251: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1006255: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006259: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100625c: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100625f: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1006262: fsub dword ptr [esi - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xfffffffcu)));
/* 1006265: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1006269: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100626b: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 100626d: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006270: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006274: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1006276: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006278: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 100627c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1006280: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1006283: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1006287: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 100628a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 100628c: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100628f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1006293: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1006296: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 100629a: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 100629d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 100629f: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10062a2: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10062a6: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 10062a7: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10062ab: jne 0x1006233 */
  if (!zf) goto L_1006233;
L_10062ad: /* 10062ad: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
L_10062b1: /* 10062b1: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10062b5: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 10062b9: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 10062c0: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10062c2: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10062c4: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10062c8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10062cc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10062ce: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 10062d2: lea ecx, [esi + esi] */
  ecx = (uint32_t)(esi + esi);
/* 10062d5: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 10062d9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10062da: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10062de: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 10062e2: jne 0x1006200 */
  if (!zf) goto L_1006200;
L_10062e8: /* 10062e8: mov ecx, edx */
  ecx = edx;
/* 10062ea: and ecx, 0x80000001 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 10062f0: jns 0x10062f7 */
  if (!sf) goto L_10062f7;
L_10062f2: /* 10062f2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10062f3: or ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 10062f6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_10062f7: /* 10062f7: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10062fa: je 0x1006348 */
  if (zf) goto L_1006348;
L_10062fc: /* 10062fc: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10062fe: jle 0x1006348 */
  if ((zf || sf != of)) goto L_1006348;
L_1006300: /* 1006300: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 1006304: lea ecx, [edx*8] */
  ecx = (uint32_t)(edx*8);
/* 100630b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100630f: lea ecx, [ebx + edx*4 - 4] */
  ecx = (uint32_t)(ebx + edx*4 + 0xfffffffcu);
/* 1006313: lea esi, [edx*4] */
  esi = (uint32_t)(edx*4);
/* 100631a: lea eax, [eax + edx*4 - 4] */
  eax = (uint32_t)(eax + edx*4 + 0xfffffffcu);
/* 100631e: lea edx, [edx + edi - 1] */
  edx = (uint32_t)(edx + edi + 0xffffffffu);
/* 1006322: lea ebx, [ebx + edx*4] */
  ebx = (uint32_t)(ebx + edx*4);
/* 1006325: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1006329: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1006330: /* 1006330: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1006332: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006334: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 1006336: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006338: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 100633b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100633d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 100633f: fchs  */
  ST0 = -ST0;
/* 1006341: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1006343: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006345: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1006346: jne 0x1006330 */
  if (!zf) goto L_1006330;
L_1006348: /* 1006348: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1006349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100634a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100634b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100634c: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100634f: ret  */
  esp += 4; SPILL(); return;
}

void f_1006350(void) {
  LOAD_REGS();
L_1006350: /* 1006350: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1006353: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1006354: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 1006358: mov ecx, edi */
  ecx = edi;
/* 100635a: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 100635d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 100635e: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1006362: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006364: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1006365: xor edx, edx */
  edx = 0;
/* 1006367: xor esi, esi */
  esi = 0;
/* 1006369: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100636c: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1006370: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* 1006373: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 1006377: jl 0x1006578 */
  if ((sf != of)) goto L_1006578;
L_100637d: /* 100637d: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 1006381: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1006385: lea ebp, [ebx + ebp*4] */
  ebp = (uint32_t)(ebx + ebp*4);
/* 1006388: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 100638c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 1006390: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 1006398: lea ebp, [ebx + ebp*4] */
  ebp = (uint32_t)(ebx + ebp*4);
/* 100639b: jmp 0x10063a5 */
  goto L_10063a5;
L_100639d: /* 100639d: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10063a1: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
L_10063a5: /* 10063a5: fld dword ptr [eax + ecx*4 - 4] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10063a9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10063ab: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10063af: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 10063b5: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 10063b9: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 10063bc: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10063c0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10063c4: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 10063c7: fstp dword ptr [ebx + esi*4] */
  WF32((uint32_t)(ebx + esi*4), ST0); FPOP();
/* 10063ca: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 10063ce: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 10063d1: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10063d3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10063d5: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 10063db: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10063df: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10063e3: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 10063e7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10063ea: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10063ee: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 10063f2: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 10063f4: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 10063fb: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10063fd: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1006401: add dword ptr [esp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1006405: lea ebp, [edi + edi*2] */
  ebp = (uint32_t)(edi + edi*2);
/* 1006408: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100640a: fld dword ptr [eax + ecx*4 - 4] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100640e: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006410: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006412: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 1006416: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100641a: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 1006420: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1006424: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1006427: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100642b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100642f: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1006432: fstp dword ptr [ebp + esi*4] */
  WF32((uint32_t)(ebp + esi*4), ST0); FPOP();
/* 1006436: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 100643a: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 100643d: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100643f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006441: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 1006447: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100644b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100644f: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 1006453: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006456: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100645a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100645e: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1006462: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006465: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006469: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100646b: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100646f: add dword ptr [esp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1006473: lea ebp, [edi + edi*2] */
  ebp = (uint32_t)(edi + edi*2);
/* 1006476: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006478: fld dword ptr [eax + ecx*4 - 4] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100647c: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100647e: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 1006482: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006484: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 1006488: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 100648e: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1006492: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1006495: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006499: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100649d: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 10064a0: fstp dword ptr [ebp + esi*4] */
  WF32((uint32_t)(ebp + esi*4), ST0); FPOP();
/* 10064a4: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 10064a7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10064a9: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10064ad: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10064af: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 10064b5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10064b9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10064bd: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 10064c1: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10064c4: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10064c8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10064cc: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 10064d0: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10064d3: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10064d7: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10064d9: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10064dd: add dword ptr [esp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 10064e1: lea ebp, [edi + edi*2] */
  ebp = (uint32_t)(edi + edi*2);
/* 10064e4: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10064e6: fld dword ptr [eax + ecx*4 - 4] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10064ea: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10064ec: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10064ee: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 10064f2: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10064f6: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 10064fc: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1006500: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1006503: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006507: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100650b: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100650e: fstp dword ptr [ebp + esi*4] */
  WF32((uint32_t)(ebp + esi*4), ST0); FPOP();
/* 1006512: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006516: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 1006519: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100651b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 100651d: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 1006523: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 1006527: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100652b: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 100652f: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006532: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006536: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100653a: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 100653e: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006541: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006545: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006547: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100654b: add dword ptr [esp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 100654f: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006553: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006556: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 1006559: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 100655d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006561: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006563: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006565: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 1006569: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100656c: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100656e: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1006572: jl 0x100639d */
  if ((sf != of)) goto L_100639d;
L_1006578: /* 1006578: cmp dword ptr [esp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100657c: jge 0x100664e */
  if ((sf == of)) goto L_100664e;
L_1006582: /* 1006582: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 1006585: lea ebp, [edi + edi*2] */
  ebp = (uint32_t)(edi + edi*2);
/* 1006588: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 100658b: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 100658f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 1006593: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1006597: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100659b: lea ebp, [ebp + esi*4] */
  ebp = (uint32_t)(ebp + esi*4);
/* 100659f: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10065a1: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10065a5: lea ebp, [edx + esi] */
  ebp = (uint32_t)(edx + esi);
/* 10065a8: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10065ac: lea ebp, [edx + ebp*4] */
  ebp = (uint32_t)(edx + ebp*4);
/* 10065af: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10065b3: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10065b7: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10065b9: lea edx, [edx + esi*4] */
  edx = (uint32_t)(edx + esi*4);
/* 10065bc: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 10065c0: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10065c4: mov esi, ebx */
  esi = ebx;
/* 10065c6: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10065c8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10065cc: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 10065cf: nop  */
L_10065d0: /* 10065d0: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10065d3: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10065d7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10065d9: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10065dd: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 10065e3: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 10065e7: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 10065e9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10065ed: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10065f1: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 10065f3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 10065f7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10065fa: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10065fc: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10065fe: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 1006604: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 1006608: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100660c: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 1006610: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1006612: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1006616: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100661a: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 100661e: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1006620: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 1006627: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006629: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 100662d: add dword ptr [esp + 0x54], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1006631: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006635: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006637: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 100663b: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100663f: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1006643: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006645: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1006647: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 1006648: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 100664c: jne 0x10065d0 */
  if (!zf) goto L_10065d0;
L_100664e: /* 100664e: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1006651: je 0x1006890 */
  if (zf) goto L_1006890;
L_1006657: /* 1006657: xor ecx, ecx */
  ecx = 0;
/* 1006659: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100665b: jle 0x1006890 */
  if ((zf || sf != of)) goto L_1006890;
L_1006661: /* 1006661: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 1006665: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 1006668: mov esi, eax */
  esi = eax;
/* 100666a: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 100666d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1006671: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1006675: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1006679: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 100667c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 100667f: lea edx, [ebp + edx*8] */
  edx = (uint32_t)(ebp + edx*8);
/* 1006683: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1006687: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 100668b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 100668f: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 1006693: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
L_1006697: /* 1006697: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100669a: jle 0x1006846 */
  if ((zf || sf != of)) goto L_1006846;
L_10066a0: /* 10066a0: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10066a4: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 10066a8: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10066ac: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10066ae: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 10066b2: lea ebp, [ebp + ebx*4] */
  ebp = (uint32_t)(ebp + ebx*4);
/* 10066b6: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10066ba: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10066be: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10066c0: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 10066c4: lea ebx, [ebp + ebx*4] */
  ebx = (uint32_t)(ebp + ebx*4);
/* 10066c8: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 10066cc: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 10066d0: mov ebx, dword ptr [esp + 0x60] */
  ebx = R32((uint32_t)(esp + 0x60u));
/* 10066d4: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10066d6: mov edx, eax */
  edx = eax;
/* 10066d8: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10066dc: mov ecx, eax */
  ecx = eax;
/* 10066de: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 10066e2: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 10066e6: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10066ea: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 10066ee: lea ebx, [edi - 3] */
  ebx = (uint32_t)(edi + 0xfffffffdu);
/* 10066f1: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 10066f3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10066f6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10066f7: jmp 0x1006700 */
  goto L_1006700;
L_1006700: /* 1006700: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1006703: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006707: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 100670a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100670d: sub edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1006710: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006713: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 1006717: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100671b: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 1006721: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006725: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1006729: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100672c: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100672f: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1006733: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1006737: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 100673a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100673d: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 1006741: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006745: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006749: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100674d: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 1006750: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1006753: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1006755: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 1006757: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100675b: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 1006761: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1006765: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006767: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 100676b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100676f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006771: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006774: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006778: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 100677b: fsub dword ptr [edx - 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffffcu)));
/* 100677e: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 1006784: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1006788: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 100678a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 100678c: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 1006792: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 1006796: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100679a: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 100679e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 10067a2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10067a6: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 10067aa: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10067ae: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10067b2: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 10067b6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10067ba: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 10067be: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 10067c2: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10067c6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 10067ca: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10067cd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10067d1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10067d3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10067d5: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10067d8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10067dc: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10067df: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 10067e3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10067e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10067e7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10067ea: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10067ee: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10067f2: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 10067f5: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10067f9: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10067fd: fmul dword ptr [eax + ebp] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebp)));
/* 1006800: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1006804: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1006806: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1006809: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100680d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1006811: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 1006814: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1006818: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100681c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100681f: fmul dword ptr [eax + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebp + 0xfffffff8u)));
/* 1006823: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1006827: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1006829: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100682c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006830: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006833: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1006834: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1006838: jne 0x1006700 */
  if (!zf) goto L_1006700;
L_100683e: /* 100683e: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 1006842: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
L_1006846: /* 1006846: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 100684a: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 100684e: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 1006855: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006857: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 100685a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100685c: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 1006860: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 1006864: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 1006867: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 100686b: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 100686f: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006871: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1006875: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1006877: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006879: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100687a: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 100687e: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 1006882: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 1006886: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 100688a: jne 0x1006697 */
  if (!zf) goto L_1006697;
L_1006890: /* 1006890: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1006891: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1006892: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1006893: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1006896: ret  */
  esp += 4; SPILL(); return;
}

void f_10066f9(void) {
  LOAD_REGS();
  goto L_10066f9;
L_1006697: /* 1006697: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100669a: jle 0x1006846 */
  if ((zf || sf != of)) goto L_1006846;
L_10066a0: /* 10066a0: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10066a4: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 10066a8: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10066ac: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10066ae: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 10066b2: lea ebp, [ebp + ebx*4] */
  ebp = (uint32_t)(ebp + ebx*4);
/* 10066b6: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10066ba: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10066be: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10066c0: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 10066c4: lea ebx, [ebp + ebx*4] */
  ebx = (uint32_t)(ebp + ebx*4);
/* 10066c8: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 10066cc: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 10066d0: mov ebx, dword ptr [esp + 0x60] */
  ebx = R32((uint32_t)(esp + 0x60u));
/* 10066d4: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10066d6: mov edx, eax */
  edx = eax;
/* 10066d8: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10066dc: mov ecx, eax */
  ecx = eax;
/* 10066de: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 10066e2: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 10066e6: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10066ea: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 10066ee: lea ebx, [edi - 3] */
  ebx = (uint32_t)(edi + 0xfffffffdu);
/* 10066f1: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 10066f3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10066f6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10066f7: jmp 0x1006700 */
  goto L_1006700;
L_10066f9: /* 10066f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1006700: /* 1006700: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1006703: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006707: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 100670a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100670d: sub edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1006710: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006713: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 1006717: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100671b: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 1006721: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006725: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1006729: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100672c: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100672f: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1006733: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1006737: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 100673a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100673d: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 1006741: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006745: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006749: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100674d: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 1006750: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1006753: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1006755: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 1006757: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100675b: fld dword ptr [0x100d194] */
  { double v = F32((uint32_t)(0x100d194u)); FPUSH(v); }
/* 1006761: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1006765: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006767: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 100676b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100676f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006771: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006774: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1006778: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 100677b: fsub dword ptr [edx - 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffffcu)));
/* 100677e: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 1006784: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1006788: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 100678a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 100678c: fmul dword ptr [0x100d198] */
  ST0 = ST0 * (F32((uint32_t)(0x100d198u)));
/* 1006792: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 1006796: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100679a: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 100679e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 10067a2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10067a6: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 10067aa: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 10067ae: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10067b2: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 10067b6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10067ba: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 10067be: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 10067c2: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10067c6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 10067ca: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10067cd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10067d1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10067d3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10067d5: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10067d8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10067dc: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10067df: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 10067e3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10067e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10067e7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10067ea: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10067ee: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10067f2: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 10067f5: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 10067f9: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10067fd: fmul dword ptr [eax + ebp] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebp)));
/* 1006800: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1006804: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1006806: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1006809: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100680d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1006811: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 1006814: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1006818: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100681c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100681f: fmul dword ptr [eax + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebp + 0xfffffff8u)));
/* 1006823: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1006827: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1006829: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100682c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006830: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006833: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1006834: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1006838: jne 0x1006700 */
  if (!zf) goto L_1006700;
L_100683e: /* 100683e: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 1006842: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
L_1006846: /* 1006846: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 100684a: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 100684e: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 1006855: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006857: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 100685a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100685c: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 1006860: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 1006864: lea edx, [edi + edi] */
  edx = (uint32_t)(edi + edi);
/* 1006867: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 100686b: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 100686f: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006871: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1006875: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1006877: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006879: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100687a: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 100687e: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 1006882: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 1006886: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 100688a: jne 0x1006697 */
  if (!zf) goto L_1006697;
L_1006890: /* 1006890: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1006891: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1006892: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1006893: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1006896: ret  */
  esp += 4; SPILL(); return;
}

void f_10068a0(void) {
  LOAD_REGS();
L_10068a0: /* 10068a0: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10068a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10068a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10068a5: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
/* 10068a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10068aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10068ab: mov edi, edx */
  edi = edx;
/* 10068ad: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 10068b0: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 10068b4: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 10068bb: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10068bf: xor edx, edx */
  edx = 0;
/* 10068c1: xor ebx, ebx */
  ebx = 0;
/* 10068c3: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10068c6: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 10068ca: jl 0x1006ba4 */
  if ((sf != of)) goto L_1006ba4;
L_10068d0: /* 10068d0: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10068d4: lea esi, [ecx + ebp*4] */
  esi = (uint32_t)(ecx + ebp*4);
/* 10068d7: lea ebp, [ecx + ebp*8] */
  ebp = (uint32_t)(ecx + ebp*8);
/* 10068da: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10068de: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10068e2: lea ebp, [ebp + ebp*2] */
  ebp = (uint32_t)(ebp + ebp*2);
/* 10068e6: lea ebp, [ecx + ebp*4] */
  ebp = (uint32_t)(ecx + ebp*4);
/* 10068e9: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10068ed: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10068f1: lea ebp, [edi + edi] */
  ebp = (uint32_t)(edi + edi);
/* 10068f4: lea esi, [edi + edi] */
  esi = (uint32_t)(edi + edi);
/* 10068f7: lea ebp, [eax + ebp*8 - 4] */
  ebp = (uint32_t)(eax + ebp*8 + 0xfffffffcu);
/* 10068fb: mov dword ptr [esp + 0x50], 3 */
  W32((uint32_t)(esp + 0x50u), 0x3u);
/* 1006903: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 1006906: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 100690a: jmp 0x1006910 */
  goto L_1006910;
L_100690c: /* 100690c: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
L_1006910: /* 1006910: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 1006913: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006915: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1006919: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 100691b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 100691d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 1006921: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 1006924: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 1006927: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100692b: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 100692e: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006932: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1006935: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1006939: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 100693d: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 1006941: fstp dword ptr [ecx + ebx*4] */
  WF32((uint32_t)(ecx + ebx*4), ST0); FPOP();
/* 1006944: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006946: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100694a: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 100694e: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 1006952: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 1006959: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100695c: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1006960: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006964: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1006968: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100696b: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 100696f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006973: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 1006977: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100697a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100697e: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006980: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1006984: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1006988: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 100698c: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100698e: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1006992: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1006996: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100699d: fld dword ptr [esi + ebp - 4] */
  { double v = F32((uint32_t)(esi + ebp + 0xfffffffcu)); FPUSH(v); }
/* 10069a1: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10069a3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10069a5: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10069a7: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 10069ab: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10069ad: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10069b1: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10069b5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 10069b7: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 10069bb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10069bd: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 10069c1: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 10069c4: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 10069c6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10069ca: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 10069cc: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 10069d0: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 10069d3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 10069d7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 10069db: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 10069df: fstp dword ptr [ecx + ebx*4] */
  WF32((uint32_t)(ecx + ebx*4), ST0); FPOP();
/* 10069e2: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10069e4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10069e8: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 10069ec: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 10069f0: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 10069f7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10069fa: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 10069fe: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006a02: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1006a06: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006a09: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006a0d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006a11: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 1006a15: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006a18: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006a1c: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006a1e: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1006a22: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1006a26: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006a2a: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006a2c: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1006a30: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1006a34: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 1006a3b: fld dword ptr [esi + ebp - 4] */
  { double v = F32((uint32_t)(esi + ebp + 0xfffffffcu)); FPUSH(v); }
/* 1006a3f: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006a41: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006a43: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006a45: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 1006a49: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006a4b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1006a4f: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006a53: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1006a55: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 1006a59: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006a5b: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 1006a5f: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 1006a62: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 1006a64: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006a68: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1006a6a: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1006a6e: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1006a71: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1006a75: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006a79: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 1006a7d: fstp dword ptr [ecx + ebx*4] */
  WF32((uint32_t)(ecx + ebx*4), ST0); FPOP();
/* 1006a80: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006a82: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006a86: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 1006a8a: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 1006a8e: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 1006a95: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006a98: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1006a9c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006aa0: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1006aa4: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006aa7: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006aab: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006aaf: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 1006ab3: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006ab6: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006aba: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006abc: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1006ac0: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1006ac4: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006ac8: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006aca: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1006ace: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1006ad2: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 1006ad9: fld dword ptr [esi + ebp - 4] */
  { double v = F32((uint32_t)(esi + ebp + 0xfffffffcu)); FPUSH(v); }
/* 1006add: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006adf: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006ae1: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006ae3: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 1006ae7: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006ae9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1006aed: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006af1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1006af3: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 1006af7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006af9: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 1006afd: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 1006b00: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 1006b02: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006b06: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1006b08: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1006b0c: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1006b0f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1006b13: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006b17: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 1006b1b: fstp dword ptr [ecx + ebx*4] */
  WF32((uint32_t)(ecx + ebx*4), ST0); FPOP();
/* 1006b1e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006b22: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 1006b26: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006b29: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006b2d: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1006b31: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1006b35: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006b38: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006b3c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006b40: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006b42: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 1006b46: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 1006b4a: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 1006b51: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006b54: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1006b58: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006b5a: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1006b5e: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1006b62: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006b66: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006b68: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1006b6c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006b6e: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1006b71: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1006b75: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 1006b79: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006b7b: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006b7d: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 1006b82: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 1006b86: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006b89: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 1006b8d: mov ebp, dword ptr [esp + 0x80] */
  ebp = R32((uint32_t)(esp + 0x80u));
/* 1006b94: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 1006b98: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006b9a: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1006b9e: jl 0x100690c */
  if ((sf != of)) goto L_100690c;
L_1006ba4: /* 1006ba4: cmp dword ptr [esp + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006ba8: jge 0x1006cb5 */
  if ((sf == of)) goto L_1006cb5;
L_1006bae: /* 1006bae: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 1006bb2: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1006bb5: mov dword ptr [esp + 0x74], esi */
  W32((uint32_t)(esp + 0x74u), esi);
/* 1006bb9: lea esi, [ecx + ebx*4] */
  esi = (uint32_t)(ecx + ebx*4);
/* 1006bbc: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 1006bc0: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 1006bc3: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 1006bc7: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 1006bcb: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006bcd: lea esi, [ecx + esi*4] */
  esi = (uint32_t)(ecx + esi*4);
/* 1006bd0: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 1006bd4: lea esi, [edx + edi*2] */
  esi = (uint32_t)(edx + edi*2);
/* 1006bd7: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 1006bda: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 1006bde: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 1006be2: lea esi, [ebx + esi*2] */
  esi = (uint32_t)(ebx + esi*2);
/* 1006be5: lea esi, [ecx + esi*4] */
  esi = (uint32_t)(ecx + esi*4);
/* 1006be8: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 1006bec: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 1006bf0: lea ebx, [ebx + esi*2] */
  ebx = (uint32_t)(ebx + esi*2);
/* 1006bf3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006bf5: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 1006bf9: lea esi, [ecx + esi*4] */
  esi = (uint32_t)(ecx + esi*4);
/* 1006bfc: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 1006c00: lea esi, [edi + edi] */
  esi = (uint32_t)(edi + edi);
/* 1006c03: lea edx, [edx + esi*2] */
  edx = (uint32_t)(edx + esi*2);
/* 1006c06: lea esi, [eax + edx*4 - 4] */
  esi = (uint32_t)(eax + edx*4 + 0xfffffffcu);
/* 1006c0a: mov edx, ebp */
  edx = ebp;
/* 1006c0c: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1006c0e: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1006c12: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
L_1006c16: /* 1006c16: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1006c1a: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1006c1d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006c1f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1006c23: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 1006c25: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1006c29: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1006c2b: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 1006c2f: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1006c31: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 1006c33: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006c37: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1006c39: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 1006c3d: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006c3f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1006c43: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006c47: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 1006c4b: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1006c4d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006c51: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 1006c55: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1006c57: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1006c5b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006c5f: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1006c63: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1006c65: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1006c69: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006c6d: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 1006c71: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1006c73: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 1006c7a: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006c7c: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 1006c80: add dword ptr [esp + 0x40], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1006c84: add dword ptr [esp + 0x2c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1006c88: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 1006c8c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006c8e: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 1006c92: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 1006c96: add dword ptr [esp + 0x30], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1006c9a: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1006c9e: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006ca0: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006ca2: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 1006ca6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1006ca7: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 1006cab: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 1006caf: jne 0x1006c16 */
  if (!zf) goto L_1006c16;
L_1006cb5: /* 1006cb5: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006cb8: jl 0x100736e */
  if ((sf != of)) goto L_100736e;
L_1006cbe: /* 1006cbe: je 0x1006fb8 */
  if (zf) goto L_1006fb8;
L_1006cc4: /* 1006cc4: xor edx, edx */
  edx = 0;
/* 1006cc6: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006cc8: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 1006ccc: jle 0x1006fa0 */
  if ((zf || sf != of)) goto L_1006fa0;
L_1006cd2: /* 1006cd2: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1006cd6: mov edx, edi */
  edx = edi;
/* 1006cd8: imul edx, edx, -3 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xfffffffdu);
  edx = (uint32_t)r;
  }
/* 1006cdb: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1006cdf: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1006ce3: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 1006ce6: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1006cea: mov dword ptr [esp + 0x74], ebp */
  W32((uint32_t)(esp + 0x74u), ebp);
/* 1006cee: mov edi, edi */
  edi = edi;
L_1006cf0: /* 1006cf0: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1006cf4: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1006cf7: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006cfa: lea esi, [ebx + edi*2] */
  esi = (uint32_t)(ebx + edi*2);
/* 1006cfd: lea edx, [esi + edi*2] */
  edx = (uint32_t)(esi + edi*2);
/* 1006d00: jle 0x1006f6c */
  if ((zf || sf != of)) goto L_1006f6c;
L_1006d06: /* 1006d06: lea ebp, [eax + ebx*4] */
  ebp = (uint32_t)(eax + ebx*4);
/* 1006d09: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 1006d0d: sub ebx, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1006d11: lea ebp, [ecx + ebx*4] */
  ebp = (uint32_t)(ecx + ebx*4);
/* 1006d14: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 1006d18: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 1006d1c: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006d1e: lea ebx, [ecx + ebx*4] */
  ebx = (uint32_t)(ecx + ebx*4);
/* 1006d21: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 1006d25: lea ebx, [ebp + ebp] */
  ebx = (uint32_t)(ebp + ebp);
/* 1006d29: mov ebp, ebx */
  ebp = ebx;
/* 1006d2b: sub ebp, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1006d2f: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1006d33: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1006d36: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006d38: lea ebp, [ecx + ebp*4] */
  ebp = (uint32_t)(ecx + ebp*4);
/* 1006d3b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1006d3f: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 1006d43: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006d45: lea ebx, [ecx + ebp*4] */
  ebx = (uint32_t)(ecx + ebp*4);
/* 1006d48: mov ebp, dword ptr [esp + 0x84] */
  ebp = R32((uint32_t)(esp + 0x84u));
/* 1006d4f: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 1006d53: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 1006d5a: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1006d5c: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* 1006d60: mov ebx, dword ptr [esp + 0x8c] */
  ebx = R32((uint32_t)(esp + 0x8cu));
/* 1006d67: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1006d69: mov ebp, dword ptr [esp + 0x8c] */
  ebp = R32((uint32_t)(esp + 0x8cu));
/* 1006d70: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 1006d74: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 1006d7b: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 1006d7e: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1006d80: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1006d84: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 1006d8b: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 1006d8f: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1006d93: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 1006d9a: lea ebx, [edi - 3] */
  ebx = (uint32_t)(edi + 0xfffffffdu);
/* 1006d9d: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 1006d9f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006da2: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 1006da5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1006da6: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 1006daa: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 1006dae: mov edi, edi */
  edi = edi;
L_1006db0: /* 1006db0: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1006db4: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006db7: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 1006dbb: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 1006dbf: add dword ptr [esp + 0x4c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x4cu), r);
  }
/* 1006dc4: add dword ptr [esp + 0x2c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1006dc9: add dword ptr [esp + 0x28], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1006dce: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1006dd2: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006dd5: sub ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1006dd8: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 1006ddc: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1006de0: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 1006de3: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006de6: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1006de8: sub ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1006deb: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1006def: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 1006df3: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 1006df7: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1006df9: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 1006dfc: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1006e00: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 1006e04: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1006e06: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 1006e09: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 1006e0d: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 1006e10: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1006e14: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 1006e16: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 1006e1a: fld dword ptr [ebx - 4] */
  { double v = F32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 1006e1d: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 1006e20: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1006e24: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 1006e27: fadd dword ptr [ebx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xfffffffcu)));
/* 1006e2a: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 1006e2e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1006e32: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 1006e35: fsub dword ptr [ebx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xfffffffcu)));
/* 1006e38: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 1006e3c: fld dword ptr [ebx - 4] */
  { double v = F32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 1006e3f: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 1006e43: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 1006e46: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1006e4a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006e4e: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 1006e52: fstp dword ptr [ebx - 4] */
  WF32((uint32_t)(ebx + 0xfffffffcu), ST0); FPOP();
/* 1006e55: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006e59: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1006e5d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1006e61: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 1006e65: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 1006e69: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1006e6b: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 1006e6f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 1006e73: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 1006e77: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1006e7b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006e7f: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 1006e83: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 1006e87: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1006e8b: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 1006e8f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 1006e93: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 1006e97: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 1006e9b: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 1006e9f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 1006ea3: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 1006ea7: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 1006eab: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 1006eaf: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1006eb2: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 1006eb6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1006eb8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1006eba: fstp dword ptr [ebx - 4] */
  WF32((uint32_t)(ebx + 0xfffffffcu), ST0); FPOP();
/* 1006ebd: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 1006ec1: mov ebp, dword ptr [esp + 0x64] */
  ebp = R32((uint32_t)(esp + 0x64u));
/* 1006ec5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1006ec7: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006eca: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 1006ece: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 1006ed1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1006ed3: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1006ed5: mov ebx, dword ptr [esp + 0x6c] */
  ebx = R32((uint32_t)(esp + 0x6cu));
/* 1006ed9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1006edd: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006ee0: fmul dword ptr [ebx + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ebp + 0xfffffff8u)));
/* 1006ee4: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1006ee8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006eec: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* 1006ef0: fmul dword ptr [edx + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + ebp + 0xfffffff8u)));
/* 1006ef4: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006ef8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1006efa: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1006efd: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1006f01: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1006f05: fmul dword ptr [edx + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + ebp + 0xfffffff8u)));
/* 1006f09: mov ebp, dword ptr [esp + 0x64] */
  ebp = R32((uint32_t)(esp + 0x64u));
/* 1006f0d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1006f11: fmul dword ptr [ebx + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ebp + 0xfffffff8u)));
/* 1006f15: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1006f19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1006f1b: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006f1e: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 1006f22: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1006f26: fmul dword ptr [ebx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xfffffff8u)));
/* 1006f29: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 1006f2d: fmul dword ptr [edx + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + ebp + 0xfffffff8u)));
/* 1006f31: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1006f35: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1006f37: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1006f3a: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 1006f3e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1006f42: fmul dword ptr [edx + ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + ebp + 0xfffffff8u)));
/* 1006f46: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1006f4a: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 1006f4e: fmul dword ptr [ebx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xfffffff8u)));
/* 1006f51: mov ebx, dword ptr [esp + 0x70] */
  ebx = R32((uint32_t)(esp + 0x70u));
/* 1006f55: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1006f56: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 1006f5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1006f5c: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1006f5f: jne 0x1006db0 */
  if (!zf) goto L_1006db0;
L_1006f65: /* 1006f65: mov ebp, dword ptr [esp + 0x80] */
  ebp = R32((uint32_t)(esp + 0x80u));
L_1006f6c: /* 1006f6c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1006f70: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 1006f74: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 1006f78: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1006f7a: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 1006f7e: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 1006f81: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006f83: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 1006f87: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1006f89: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 1006f8d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1006f8e: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 1006f92: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 1006f96: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1006f9a: jne 0x1006cf0 */
  if (!zf) goto L_1006cf0;
L_1006fa0: /* 1006fa0: mov edx, edi */
  edx = edi;
/* 1006fa2: and edx, 0x80000001 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 1006fa8: jns 0x1006faf */
  if (!sf) goto L_1006faf;
L_1006faa: /* 1006faa: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1006fab: or edx, 0xfffffffe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1006fae: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_1006faf: /* 1006faf: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1006fb2: je 0x100736e */
  if (zf) goto L_100736e;
L_1006fb8: /* 1006fb8: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1006fbb: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
/* 1006fbe: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 1006fc2: mov edx, edi */
  edx = edi;
/* 1006fc4: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 1006fc7: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 1006fcf: jl 0x1007276 */
  if ((sf != of)) goto L_1007276;
L_1006fd5: /* 1006fd5: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 1006fd9: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006fdd: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1006fdf: lea ebp, [ecx + ebp*4] */
  ebp = (uint32_t)(ecx + ebp*4);
/* 1006fe2: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1006fe6: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006fea: lea ebp, [ebp + ebx*2] */
  ebp = (uint32_t)(ebp + ebx*2);
/* 1006fee: lea ebp, [ecx + ebp*4] */
  ebp = (uint32_t)(ecx + ebp*4);
/* 1006ff1: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 1006ff5: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1006ff9: lea ebp, [ebp + ebx*2] */
  ebp = (uint32_t)(ebp + ebx*2);
/* 1006ffd: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1006fff: lea ebx, [ecx + ebx*4] */
  ebx = (uint32_t)(ecx + ebx*4);
/* 1007002: mov dword ptr [esp + 0x74], 3 */
  W32((uint32_t)(esp + 0x74u), 0x3u);
/* 100700a: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
L_100700e: /* 100700e: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1007011: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 1007015: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1007018: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 100701c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 1007020: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1007023: fsub dword ptr [eax + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edx*4)));
/* 1007026: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 100702a: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100702e: fsub dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 1007032: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1007036: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100703a: fadd dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 100703e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1007042: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1007046: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1007048: fstp dword ptr [ecx + ebx*4] */
  WF32((uint32_t)(ecx + ebx*4), ST0); FPOP();
/* 100704b: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100704d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1007051: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 1007055: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 1007059: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 1007060: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 1007066: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1007069: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 100706d: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 1007071: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1007073: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1007076: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 100707a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 100707e: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1007082: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 1007088: fchs  */
  ST0 = -ST0;
/* 100708a: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100708d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1007091: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1007093: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1007097: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 100709b: add dword ptr [esp + 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 100709f: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10070a3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10070a5: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10070a7: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10070aa: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10070ae: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 10070b1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 10070b5: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10070b8: fsub dword ptr [eax + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edx*4)));
/* 10070bb: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 10070bf: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10070c3: fsub dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 10070c7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10070cb: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10070cf: fadd dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 10070d3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 10070d7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 10070db: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10070dd: fstp dword ptr [ecx + ebp*4] */
  WF32((uint32_t)(ecx + ebp*4), ST0); FPOP();
/* 10070e0: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 10070e4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10070e8: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 10070ec: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 10070f2: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10070f5: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 10070f9: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 10070fd: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10070ff: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1007102: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 1007106: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 100710a: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 100710e: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 1007114: fchs  */
  ST0 = -ST0;
/* 1007116: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1007119: add dword ptr [esp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 100711d: add dword ptr [esp + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1007121: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1007125: add dword ptr [esp + 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1007129: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 100712d: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100712f: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1007132: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007134: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 1007137: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 100713b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 100713f: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1007142: fsub dword ptr [eax + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edx*4)));
/* 1007145: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 1007149: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100714d: fsub dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 1007151: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1007155: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1007159: fadd dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 100715d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1007161: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1007165: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1007167: fstp dword ptr [ecx + ebp*4] */
  WF32((uint32_t)(ecx + ebp*4), ST0); FPOP();
/* 100716a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 100716e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1007172: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 1007176: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 100717c: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100717f: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1007183: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 1007187: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1007189: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100718c: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 1007190: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 1007194: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1007198: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 100719e: fchs  */
  ST0 = -ST0;
/* 10071a0: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10071a3: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10071a7: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10071a9: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 10071ad: add dword ptr [esp + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10071b1: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 10071b5: add dword ptr [esp + 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10071b9: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 10071bd: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10071bf: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10071c1: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10071c4: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10071c8: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 10071cb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 10071cf: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10071d2: fsub dword ptr [eax + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edx*4)));
/* 10071d5: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 10071d9: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10071dd: fsub dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 10071e1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10071e5: fld dword ptr [eax + edx*4 - 4] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10071e9: fadd dword ptr [eax + esi*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4 + 0xfffffffcu)));
/* 10071ed: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 10071f1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 10071f5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10071f7: fstp dword ptr [ecx + ebp*4] */
  WF32((uint32_t)(ecx + ebp*4), ST0); FPOP();
/* 10071fa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10071fe: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 1007202: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1007206: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 100720c: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100720f: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1007213: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 1007217: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1007219: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100721c: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 1007220: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 1007224: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1007228: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 100722e: fchs  */
  ST0 = -ST0;
/* 1007230: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1007233: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1007237: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1007239: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100723d: add dword ptr [esp + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1007241: add dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1007245: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 1007249: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100724b: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 100724f: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007251: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1007253: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 1007258: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 100725c: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 1007260: mov ebp, dword ptr [esp + 0x80] */
  ebp = R32((uint32_t)(esp + 0x80u));
/* 1007267: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100726a: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100726c: mov dword ptr [esp + 0x74], ebx */
  W32((uint32_t)(esp + 0x74u), ebx);
/* 1007270: jl 0x100700e */
  if ((sf != of)) goto L_100700e;
L_1007276: /* 1007276: cmp dword ptr [esp + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100727a: jge 0x100736e */
  if ((sf == of)) goto L_100736e;
L_1007280: /* 1007280: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1007284: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1007287: mov dword ptr [esp + 0x74], ebx */
  W32((uint32_t)(esp + 0x74u), ebx);
/* 100728b: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 100728f: lea ebx, [ecx + ebx*4] */
  ebx = (uint32_t)(ecx + ebx*4);
/* 1007292: mov dword ptr [esp + 0x78], ebx */
  W32((uint32_t)(esp + 0x78u), ebx);
/* 1007296: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 100729a: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 100729d: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 10072a0: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 10072a4: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10072a6: lea ebx, [ecx + ebx*4] */
  ebx = (uint32_t)(ecx + ebx*4);
/* 10072a9: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* 10072b0: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 10072b4: lea ebx, [ebx + esi*2] */
  ebx = (uint32_t)(ebx + esi*2);
/* 10072b7: lea ebx, [ecx + ebx*4] */
  ebx = (uint32_t)(ecx + ebx*4);
/* 10072ba: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 10072be: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 10072c2: lea ebx, [ebx + esi*2] */
  ebx = (uint32_t)(ebx + esi*2);
/* 10072c5: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10072c7: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 10072ca: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 10072ce: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 10072d1: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10072d3: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* 10072d7: jmp 0x10072e0 */
  goto L_10072e0;
L_10072e0: /* 10072e0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 10072e2: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 10072e9: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10072eb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 10072ef: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10072f1: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 10072f3: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 10072f7: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 10072fa: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10072fd: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1007301: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1007304: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1007307: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 100730b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 100730f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1007311: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1007313: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1007315: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1007319: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 100731d: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 1007323: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1007325: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 1007329: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 100732d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 100732f: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1007331: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 1007338: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 100733c: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100733e: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1007342: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* 1007349: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 100734d: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100734f: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 1007355: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 1007359: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 100735d: fchs  */
  ST0 = -ST0;
/* 100735f: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007361: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 1007363: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007365: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007367: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1007368: jne 0x10072e0 */
  if (!zf) goto L_10072e0;
L_100736e: /* 100736e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100736f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1007370: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1007371: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1007372: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1007375: ret  */
  esp += 4; SPILL(); return;
}

void f_10072d9(void) {
  LOAD_REGS();
L_10072d9: /* 10072d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10072e0: /* 10072e0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 10072e2: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 10072e9: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10072eb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 10072ef: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10072f1: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 10072f3: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 10072f7: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 10072fa: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10072fd: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1007301: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1007304: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1007307: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 100730b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 100730f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 1007311: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1007313: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1007315: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1007319: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 100731d: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 1007323: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1007325: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 1007329: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 100732d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 100732f: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1007331: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 1007338: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 100733c: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100733e: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1007342: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* 1007349: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 100734d: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100734f: fmul dword ptr [0x100d19c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d19cu)));
/* 1007355: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 1007359: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 100735d: fchs  */
  ST0 = -ST0;
/* 100735f: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007361: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 1007363: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007365: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007367: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1007368: jne 0x10072e0 */
  if (!zf) goto L_10072e0;
L_100736e: /* 100736e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100736f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1007370: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1007371: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1007372: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1007375: ret  */
  esp += 4; SPILL(); return;
}

void f_1007380(void) {
  LOAD_REGS();
L_1007380: /* 1007380: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1007386: fild dword ptr [esp + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 100738d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 100738e: mov ebp, dword ptr [esp + 0x8c] */
  ebp = R32((uint32_t)(esp + 0x8cu));
/* 1007395: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1007396: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 100739a: mov edi, eax */
  edi = eax;
/* 100739c: fld dword ptr [0x100d1a0] */
  { double v = F32((uint32_t)(0x100d1a0u)); FPUSH(v); }
/* 10073a2: mov eax, ebp */
  eax = ebp;
/* 10073a4: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 10073a8: imul eax, dword ptr [esp + 0x94] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x94u)));
  eax = (uint32_t)r;
  }
/* 10073b0: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 10073b4: mov eax, ebp */
  eax = ebp;
/* 10073b6: imul eax, dword ptr [esp + 0x98] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x98u)));
  eax = (uint32_t)r;
  }
/* 10073be: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 10073c2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 10073c6: fstp qword ptr [esp + 0x7c] */
  WF64((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 10073ca: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 10073ce: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 10073d2: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 10073d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10073da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10073db: call 0x1009244 */
  esp -= 4; W32(esp, 0x10073e0u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* 10073e0: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 10073e7: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 10073ee: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 10073f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10073f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10073f4: call 0x100923e */
  esp -= 4; W32(esp, 0x10073f9u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 10073f9: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 1007400: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 1007407: lea eax, [ebp - 1] */
  eax = (uint32_t)(ebp + 0xffffffffu);
/* 100740a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 100740c: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1007413: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 100741a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100741d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 100741e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1007420: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007422: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 1007426: jge 0x1007498 */
  if ((sf == of)) goto L_1007498;
L_1007428: /* 1007428: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100742a: jle 0x1007518 */
  if ((zf || sf != of)) goto L_1007518;
L_1007430: /* 1007430: mov edx, esi */
  edx = esi;
/* 1007432: mov ecx, edi */
  ecx = edi;
/* 1007434: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1007436: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 100743a: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 100743e: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
L_1007442: /* 1007442: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007449: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100744b: jle 0x1007481 */
  if ((zf || sf != of)) goto L_1007481;
L_100744d: /* 100744d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 1007451: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1007454: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 1007458: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 100745c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100745e: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_1007462: /* 1007462: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1007464: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1007466: lea edx, [ebp*4] */
  edx = (uint32_t)(ebp*4);
/* 100746d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100746f: add ecx, dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007473: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1007477: jne 0x1007462 */
  if (!zf) goto L_1007462;
L_1007479: /* 1007479: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100747d: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1007481: /* 1007481: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1007485: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007488: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1007489: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 100748d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1007491: jne 0x1007442 */
  if (!zf) goto L_1007442;
L_1007493: /* 1007493: jmp 0x1007518 */
  goto L_1007518;
L_1007498: /* 1007498: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 100749f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10074a1: jle 0x1007518 */
  if ((zf || sf != of)) goto L_1007518;
L_10074a3: /* 10074a3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10074a7: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 10074ae: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 10074b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10074b9: mov edx, edi */
  edx = edi;
/* 10074bb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 10074bf: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10074c3: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_10074c7: /* 10074c7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10074c9: jle 0x10074ee */
  if ((zf || sf != of)) goto L_10074ee;
L_10074cb: /* 10074cb: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10074cf: mov eax, edx */
  eax = edx;
/* 10074d1: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
L_10074d5: /* 10074d5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 10074d7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 10074d9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10074dd: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10074e0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10074e3: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10074e4: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 10074e8: jne 0x10074d5 */
  if (!zf) goto L_10074d5;
L_10074ea: /* 10074ea: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_10074ee: /* 10074ee: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10074f2: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 10074f9: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10074fb: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10074ff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1007503: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1007507: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007509: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 100750d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 100750e: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1007512: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1007516: jne 0x10074c7 */
  if (!zf) goto L_10074c7;
L_1007518: /* 1007518: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 100751c: imul ecx, dword ptr [esp + 0x94] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x94u)));
  ecx = (uint32_t)r;
  }
/* 1007524: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007527: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 100752e: lea edx, [ebp + ebp] */
  edx = (uint32_t)(ebp + ebp);
/* 1007532: jle 0x100760d */
  if ((zf || sf != of)) goto L_100760d;
L_1007538: /* 1007538: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 100753b: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 100753f: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007541: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1007544: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1007545: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 1007549: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007550: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 1007554: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 1007558: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 100755c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1007560: /* 1007560: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1007564: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007568: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 100756b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100756d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1007571: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007575: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007577: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1007579: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 100757d: jle 0x10075e8 */
  if ((zf || sf != of)) goto L_10075e8;
L_100757f: /* 100757f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007583: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1007587: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100758b: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 100758f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1007593: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007597: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 100759b: jmp 0x10075a0 */
  goto L_10075a0;
L_10075a0: /* 10075a0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 10075a3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10075a7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10075a9: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 10075ab: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10075ad: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10075b1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10075b3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 10075b5: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10075bc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10075be: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 10075c2: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 10075c6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10075c8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10075cc: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 10075d0: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10075d4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10075d7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10075d9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10075dd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 10075de: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10075e2: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10075e6: jne 0x10075a0 */
  if (!zf) goto L_10075a0;
L_10075e8: /* 10075e8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10075ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10075f0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10075f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10075f6: dec dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x4cu), r);
  }
/* 10075fa: jne 0x1007560 */
  if (!zf) goto L_1007560;
L_1007600: /* 1007600: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 1007607: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 100760b: jmp 0x1007614 */
  goto L_1007614;
L_100760d: /* 100760d: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1007614: /* 1007614: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1007617: je 0x1007a35 */
  if (zf) goto L_1007a35;
L_100761d: /* 100761d: cmp dword ptr [esp + 0x70], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007621: jge 0x1007916 */
  if ((sf == of)) goto L_1007916;
L_1007627: /* 1007627: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 100762b: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 100762f: xor eax, eax */
  eax = 0;
/* 1007631: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007634: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1007638: jle 0x1007a31 */
  if ((zf || sf != of)) goto L_1007a31;
L_100763e: /* 100763e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 100763f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
L_1007643: /* 1007643: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1007647: add dword ptr [esp + 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100764b: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 100764f: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1007651: lea ecx, [ebp + ebp] */
  ecx = (uint32_t)(ebp + ebp);
/* 1007655: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007657: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100765a: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 100765e: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 1007662: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1007666: jle 0x1007900 */
  if ((zf || sf != of)) goto L_1007900;
L_100766c: /* 100766c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007670: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007672: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007676: mov ecx, edx */
  ecx = edx;
/* 1007678: lea edx, [ebp - 3] */
  edx = (uint32_t)(ebp + 0xfffffffdu);
/* 100767b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100767d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 100767f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1007680: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 1007684: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1007688: jmp 0x1007692 */
  goto L_1007692;
L_100768a: /* 100768a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 100768e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
L_1007692: /* 1007692: sub dword ptr [esp + 0x28], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1007697: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 100769b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100769e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10076a0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10076a2: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 10076a6: cmp dword ptr [esp + 0x98], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x98u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10076ae: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10076b2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10076b6: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10076ba: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 10076c2: jl 0x100783e */
  if ((sf != of)) goto L_100783e;
L_10076c8: /* 10076c8: mov dword ptr [esp + 0xc], 3 */
  W32((uint32_t)(esp + 0xcu), 0x3u);
/* 10076d0: jmp 0x10076d9 */
  goto L_10076d9;
L_10076d2: /* 10076d2: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
L_10076d9: /* 10076d9: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10076dd: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10076e1: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 10076e5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10076e9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10076ed: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10076f1: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 10076f5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10076f9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10076fd: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 1007700: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 1007703: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007706: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100770a: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 100770d: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 1007710: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007713: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007717: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007719: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 100771d: add dword ptr [esp + 0x20], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1007721: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1007725: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007727: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100772b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100772d: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1007731: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007735: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007739: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100773d: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1007741: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 1007745: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007749: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 100774d: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 1007750: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 1007753: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007756: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100775a: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 100775d: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 1007760: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007763: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007767: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007769: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 100776d: add dword ptr [esp + 0x20], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1007771: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1007775: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007777: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100777b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100777d: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1007781: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007785: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007789: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100778d: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1007791: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 1007795: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007799: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 100779d: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 10077a0: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 10077a3: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 10077a6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10077aa: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 10077ad: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 10077b0: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 10077b3: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10077b7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10077b9: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 10077bd: add dword ptr [esp + 0x20], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 10077c1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10077c5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10077c7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10077c9: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10077cd: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10077d1: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 10077d5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10077d9: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10077dd: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 10077e1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10077e5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10077e9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10077ed: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 10077f0: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 10077f3: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 10077f6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10077fa: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 10077fd: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 1007800: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007803: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007807: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007809: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 100780d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1007811: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007813: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 100781a: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 100781e: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1007822: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007824: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007826: add dword ptr [esp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 100782b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100782f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007832: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007834: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 1007838: jl 0x10076d2 */
  if ((sf != of)) goto L_10076d2;
L_100783e: /* 100783e: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1007842: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007849: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100784b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1007852: jge 0x10078f2 */
  if ((sf == of)) goto L_10078f2;
L_1007858: /* 1007858: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 100785c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 100785f: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1007863: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1007867: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 100786a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 100786e: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007872: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 1007875: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1007879: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007880: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1007884: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1007887: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 100788a: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100788e: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_1007892: /* 1007892: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1007895: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1007899: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 100789c: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 100789f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10078a3: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 10078a6: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10078a9: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 10078ac: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10078b0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10078b2: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10078b4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10078b6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10078b8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10078bc: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10078be: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 10078c0: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 10078c7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10078c9: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10078cd: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10078d1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10078d3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10078d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10078db: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10078df: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10078e1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10078e3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10078e7: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10078e8: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 10078ec: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 10078f0: jne 0x1007892 */
  if (!zf) goto L_1007892;
L_10078f2: /* 10078f2: dec dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 10078f6: jne 0x100768a */
  if (!zf) goto L_100768a;
L_10078fc: /* 10078fc: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
L_1007900: /* 1007900: dec dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x4cu), r);
  }
/* 1007904: jne 0x1007643 */
  if (!zf) goto L_1007643;
L_100790a: /* 100790a: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007911: jmp 0x1007a31 */
  goto L_1007a31;
L_1007916: /* 1007916: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007919: jle 0x1007a35 */
  if ((zf || sf != of)) goto L_1007a35;
L_100791f: /* 100791f: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1007922: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1007923: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 1007927: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 100792b: mov edi, esi */
  edi = esi;
/* 100792d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_1007931: /* 1007931: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1007935: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007939: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 100793c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100793e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1007940: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 1007944: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007948: lea eax, [ebp*8] */
  eax = (uint32_t)(ebp*8);
/* 100794f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007951: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1007953: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1007957: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 100795b: jle 0x1007a27 */
  if ((zf || sf != of)) goto L_1007a27;
L_1007961: /* 1007961: mov eax, ecx */
  eax = ecx;
/* 1007963: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007967: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 100796b: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 100796f: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007973: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_1007977: /* 1007977: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100797a: jle 0x10079ec */
  if ((zf || sf != of)) goto L_10079ec;
L_100797c: /* 100797c: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1007980: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1007983: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007987: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 100798b: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 100798d: mov ecx, eax */
  ecx = eax;
/* 100798f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 1007993: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1007994: /* 1007994: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007998: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 100799b: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 100799e: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10079a1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10079a5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10079a9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10079ac: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10079af: sub ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10079b2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10079b3: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 10079b7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10079bb: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 10079be: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10079c2: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 10079c5: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10079c8: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 10079cb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10079cf: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10079d1: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10079d3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10079d5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10079d9: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10079db: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10079dd: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10079df: jne 0x1007994 */
  if (!zf) goto L_1007994;
L_10079e1: /* 10079e1: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 10079e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_10079ec: /* 10079ec: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10079f0: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 10079f7: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10079f9: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10079fd: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 1007a01: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1007a03: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1007a07: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1007a0a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007a0c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1007a10: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1007a11: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 1007a15: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 1007a19: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1007a1d: jne 0x1007977 */
  if (!zf) goto L_1007977;
L_1007a23: /* 1007a23: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
L_1007a27: /* 1007a27: dec dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 1007a2b: jne 0x1007931 */
  if (!zf) goto L_1007931;
L_1007a31: /* 1007a31: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1007a35: /* 1007a35: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1007a3c: xor ecx, ecx */
  ecx = 0;
/* 1007a3e: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 1007a42: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1007a46: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1007a4d: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 1007a50: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1007a54: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1007a5b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1007a5c: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 1007a5f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007a62: mov dword ptr [esp + 0x84], 0x3f800000 */
  W32((uint32_t)(esp + 0x84u), 0x3f800000u);
/* 1007a6d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1007a71: jle 0x1007fb9 */
  if ((zf || sf != of)) goto L_1007fb9;
L_1007a77: /* 1007a77: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007a7e: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1007a82: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1007a85: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1007a89: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1007a8d: lea ecx, [ecx + edx*4 + 8] */
  ecx = (uint32_t)(ecx + edx*4 + 0x8u);
/* 1007a91: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 1007a95: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1007a97: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1007a98: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1007a9c: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 1007aa3: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 1007aa7: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007aae: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 1007ab2: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007ab6: jmp 0x1007ac0 */
  goto L_1007ac0;
L_1007ac0: /* 1007ac0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007ac4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 1007acb: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 1007acf: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ad1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007ad5: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1007ad9: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 1007add: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007ae1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ae3: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 1007ae7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007aeb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1007aed: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007aef: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1007af3: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1007af7: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 1007afb: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 1007b02: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007b04: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007b07: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 1007b0b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007b0f: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007b13: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 1007b17: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 1007b1b: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 1007b22: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007b26: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1007b2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1007b2c: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007b30: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1007b34: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007b38: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1007b3c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 1007b44: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 1007b48: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007b4c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1007b54: jl 0x1007c71 */
  if ((sf != of)) goto L_1007c71;
L_1007b5a: /* 1007b5a: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007b61: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 1007b65: lea ecx, [edx + ecx*4 + 8] */
  ecx = (uint32_t)(edx + ecx*4 + 0x8u);
/* 1007b69: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007b6c: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007b70: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007b77: lea edx, [edx + edi*4 + 8] */
  edx = (uint32_t)(edx + edi*4 + 0x8u);
/* 1007b7b: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1007b7f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007b83: mov dword ptr [esp + 0x54], 3 */
  W32((uint32_t)(esp + 0x54u), 0x3u);
/* 1007b8b: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_1007b8f: /* 1007b8f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007b93: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007b97: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007b9a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007b9e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ba1: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007ba4: fadd dword ptr [edx - 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007ba7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bab: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* 1007bae: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bb2: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007bb5: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bb9: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 1007bbc: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007bc0: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bc3: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007bc7: fadd dword ptr [edx - 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bca: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bce: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1007bd1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bd5: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bd8: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bdc: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1007bdf: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007be3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007be5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007be9: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007beb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bef: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 1007bf2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bf6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007bf8: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bfc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1007bff: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007c03: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007c06: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007c0a: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 1007c0d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007c11: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1007c14: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007c18: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007c1b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007c1f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007c22: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1007c26: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1007c2a: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1007c2d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007c30: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 1007c34: add dword ptr [esp + 0x58], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1007c39: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1007c3e: add dword ptr [esp + 0x68], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x68u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x68u), r);
  }
/* 1007c43: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 1007c48: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1007c4d: add dword ptr [esp + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007c52: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 1007c57: add dword ptr [esp + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1007c5c: cmp dword ptr [esp + 0x54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007c60: jl 0x1007b8f */
  if ((sf != of)) goto L_1007b8f;
L_1007c66: /* 1007c66: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007c6d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_1007c71: /* 1007c71: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007c75: jge 0x1007d2b */
  if ((sf == of)) goto L_1007d2b;
L_1007c7b: /* 1007c7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007c7f: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007c86: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007c89: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007c90: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1007c94: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 1007c98: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 1007c9b: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007ca2: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007ca6: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007caa: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007cad: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1007cb1: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 1007cb5: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1007cbc: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 1007cbf: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 1007cc3: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1007cc7: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007cca: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007cce: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1007cd2: mov ecx, edi */
  ecx = edi;
/* 1007cd4: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_1007cd6: /* 1007cd6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007cda: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007cde: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007ce0: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1007ce4: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007ce6: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007cea: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007cec: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007cf0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007cf4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007cf6: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007cfa: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007cfc: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007d00: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007d03: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007d07: add dword ptr [esp + 0x54], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1007d0c: add dword ptr [esp + 0x18], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1007d11: add dword ptr [esp + 0x30], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007d16: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007d1a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007d1d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1007d1e: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1007d22: jne 0x1007cd6 */
  if (!zf) goto L_1007cd6;
L_1007d24: /* 1007d24: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1007d2b: /* 1007d2b: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 1007d2f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1007d33: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1007d37: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1007d3b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1007d3f: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 1007d43: cmp dword ptr [esp + 0x60], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007d48: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1007d4c: jle 0x1007fab */
  if ((zf || sf != of)) goto L_1007fab;
L_1007d52: /* 1007d52: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007d59: lea ecx, [edx + edi*4 + 8] */
  ecx = (uint32_t)(edx + edi*4 + 0x8u);
/* 1007d5d: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1007d61: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007d65: lea edx, [edx + ecx*4 + 8] */
  edx = (uint32_t)(edx + ecx*4 + 0x8u);
/* 1007d69: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1007d6d: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007d70: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007d74: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007d7b: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1007d7f: nop  */
L_1007d80: /* 1007d80: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1007d84: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 1007d88: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1007d8c: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007d8e: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007d92: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1007d96: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1007d9a: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 1007d9e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007da0: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1007da4: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007da8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1007daa: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007dac: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 1007db0: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 1007db4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1007db8: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007dbc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007dbe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007dc1: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1007dc5: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 1007dc9: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007dcd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1007dd1: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1007dd5: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1007dd9: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007ddd: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1007de1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1007de3: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007de7: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1007deb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1007def: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 1007df3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1007df7: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007dfb: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1007dff: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1007e07: jl 0x1007ef7 */
  if ((sf != of)) goto L_1007ef7;
L_1007e0d: /* 1007e0d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007e11: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1007e15: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 1007e19: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 1007e1d: mov dword ptr [esp + 0x44], 3 */
  W32((uint32_t)(esp + 0x44u), 0x3u);
/* 1007e25: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007e29: jmp 0x1007e2f */
  goto L_1007e2f;
L_1007e2b: /* 1007e2b: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
L_1007e2f: /* 1007e2f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e33: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007e36: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 1007e39: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007e3c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1007e3f: fadd dword ptr [eax - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe8u)));
/* 1007e42: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 1007e45: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e49: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007e4c: fadd dword ptr [ecx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffe8u)));
/* 1007e4f: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* 1007e52: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e56: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 1007e59: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1007e5c: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1007e5f: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e63: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007e66: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1007e69: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1007e6c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e70: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1007e73: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 1007e76: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1007e79: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e7d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007e7f: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 1007e82: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 1007e85: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e89: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1007e8c: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1007e8f: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1007e92: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e96: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007e99: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007e9d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007ea0: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1007ea4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007ea8: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1007eab: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007eae: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1007eb2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007eb6: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1007eb9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007ebc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 1007ec0: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1007ec5: add dword ptr [esp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1007eca: add dword ptr [esp + 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 1007ecf: add dword ptr [esp + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007ed4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007ed8: cmp edx, dword ptr [esp + 0x9c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007edf: jl 0x1007e2b */
  if ((sf != of)) goto L_1007e2b;
L_1007ee5: /* 1007ee5: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1007eec: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1007ef0: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1007ef7: /* 1007ef7: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007efb: jge 0x1007fa1 */
  if ((sf == of)) goto L_1007fa1;
L_1007f01: /* 1007f01: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1007f08: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1007f0c: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007f13: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 1007f16: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1007f1a: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1007f1d: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1007f24: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007f28: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007f2c: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 1007f2f: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007f36: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1007f3a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1007f3e: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1007f41: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1007f45: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007f49: mov eax, edi */
  eax = edi;
/* 1007f4b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1007f4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1007f50: /* 1007f50: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1007f54: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007f58: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007f5a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1007f5e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007f61: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007f63: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007f65: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007f69: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007f6d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f70: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007f73: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007f77: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1007f7b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f7e: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1007f81: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1007f85: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1007f89: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f8c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1007f8d: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1007f90: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1007f94: jne 0x1007f50 */
  if (!zf) goto L_1007f50;
L_1007f96: /* 1007f96: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007f9d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_1007fa1: /* 1007fa1: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1007fa5: jne 0x1007d80 */
  if (!zf) goto L_1007d80;
L_1007fab: /* 1007fab: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 1007faf: jne 0x1007ac0 */
  if (!zf) goto L_1007ac0;
L_1007fb5: /* 1007fb5: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1007fb9: /* 1007fb9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007fbc: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 1007fc4: jle 0x10080cc */
  if ((zf || sf != of)) goto L_10080cc;
L_1007fca: /* 1007fca: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1007fd1: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007fd4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1007fd5: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 1007fd9: jmp 0x1007fe0 */
  goto L_1007fe0;
L_1007fdb: /* 1007fdb: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1007fdf: nop  */
L_1007fe0: /* 1007fe0: add dword ptr [esp + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 1007fe4: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 1007feb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007fed: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007ff0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1007ff4: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1007ff8: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1007ffc: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008004: jl 0x1008070 */
  if ((sf != of)) goto L_1008070;
L_1008006: /* 1008006: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 100800d: mov dword ptr [esp + 0xc], 3 */
  W32((uint32_t)(esp + 0xcu), 0x3u);
/* 1008015: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1008018: /* 1008018: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 100801b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 100801f: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 1008022: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008025: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008029: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100802d: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 1008030: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008033: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008036: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 100803a: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 100803d: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1008041: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008044: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1008048: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100804c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 100804f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1008051: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008054: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 1008056: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008059: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100805b: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 100805e: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1008061: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1008064: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1008067: jl 0x1008018 */
  if ((sf != of)) goto L_1008018;
L_1008069: /* 1008069: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1008070: /* 1008070: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008074: jge 0x10080be */
  if ((sf == of)) goto L_10080be;
L_1008076: /* 1008076: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 100807a: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1008081: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 1008084: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1008088: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100808c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008090: /* 1008090: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1008097: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 100809a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 100809e: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 10080a0: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 10080a7: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 10080aa: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10080ae: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10080b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10080b2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080b4: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 10080b8: jl 0x1008090 */
  if ((sf != of)) goto L_1008090;
L_10080ba: /* 10080ba: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_10080be: /* 10080be: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10080c2: jne 0x1007fdb */
  if (!zf) goto L_1007fdb;
L_10080c8: /* 10080c8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_10080cc: /* 10080cc: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080cf: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 10080d6: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 10080de: jle 0x10081e6 */
  if ((zf || sf != of)) goto L_10081e6;
L_10080e4: /* 10080e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10080e5: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10080e9: jmp 0x10080ef */
  goto L_10080ef;
L_10080eb: /* 10080eb: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
L_10080ef: /* 10080ef: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 10080f3: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 10080f7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10080f9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10080fb: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080fe: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1008102: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1008106: mov eax, edi */
  eax = edi;
/* 1008108: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008110: jl 0x1008190 */
  if ((sf != of)) goto L_1008190;
L_1008116: /* 1008116: mov dword ptr [esp + 8], 3 */
  W32((uint32_t)(esp + 0x8u), 0x3u);
L_100811e: /* 100811e: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008121: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1008125: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008128: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100812b: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 100812f: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 1008133: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008136: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1008139: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100813c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100813e: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008141: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008145: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 1008148: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100814a: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100814d: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008150: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008153: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008156: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008158: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 100815b: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100815e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008160: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008163: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008166: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008169: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100816c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100816e: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008171: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 1008174: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008176: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008179: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 100817c: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 100817f: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008182: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008184: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008187: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100818a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100818c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100818e: jl 0x100811e */
  if ((sf != of)) goto L_100811e;
L_1008190: /* 1008190: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008194: jge 0x10081d1 */
  if ((sf == of)) goto L_10081d1;
L_1008196: /* 1008196: mov edi, esi */
  edi = esi;
/* 1008198: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 100819a: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 100819e: mov edi, edx */
  edi = edx;
/* 10081a0: sub edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10081a4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 10081a7: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 10081aa: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
L_10081ae: /* 10081ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10081b0: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 10081b4: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10081b6: fstp dword ptr [edi + eax] */
  WF32((uint32_t)(edi + eax), ST0); FPOP();
/* 10081b9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10081bb: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 10081bd: fstp dword ptr [edi + ecx] */
  WF32((uint32_t)(edi + ecx), ST0); FPOP();
/* 10081c0: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 10081c7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10081c9: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10081cb: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10081cf: jne 0x10081ae */
  if (!zf) goto L_10081ae;
L_10081d1: /* 10081d1: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10081d5: jne 0x10080eb */
  if (!zf) goto L_10080eb;
L_10081db: /* 10081db: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 10081e2: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_10081e6: /* 10081e6: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10081e9: je 0x10088be */
  if (zf) goto L_10088be;
L_10081ef: /* 10081ef: cmp dword ptr [esp + 0x70], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10081f3: jge 0x10083ff */
  if ((sf == of)) goto L_10083ff;
L_10081f9: /* 10081f9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10081fc: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 1008203: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 100820b: jle 0x100855b */
  if ((zf || sf != of)) goto L_100855b;
L_1008211: /* 1008211: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1008212: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 1008216: jmp 0x1008220 */
  goto L_1008220;
L_1008220: /* 1008220: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1008224: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008228: sub ecx, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100822c: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100822f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008233: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1008237: jle 0x10083f0 */
  if ((zf || sf != of)) goto L_10083f0;
L_100823d: /* 100823d: mov edi, eax */
  edi = eax;
/* 100823f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008241: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008244: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008246: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008247: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100824b: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 100824f: jmp 0x1008260 */
  goto L_1008260;
L_1008251: /* 1008251: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008255: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1008259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008260: /* 1008260: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008263: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008265: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008268: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 100826c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008274: jl 0x1008354 */
  if ((sf != of)) goto L_1008354;
L_100827a: /* 100827a: mov edi, 3 */
  edi = 0x3u;
L_100827f: /* 100827f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008283: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008287: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 100828a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100828d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008291: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1008298: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 100829c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100829f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082a3: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082a6: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082aa: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082ad: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082b1: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082b4: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082b7: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082b9: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082bd: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082c0: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082c2: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082c6: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082c9: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082cd: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082d1: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082d4: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082d8: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082db: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082df: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082e2: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082e5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082e7: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082eb: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082ee: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082f0: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082f4: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082f7: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082fb: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082ff: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008302: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008306: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008309: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100830d: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008310: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008313: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008315: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008319: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100831c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100831e: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008322: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008325: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008329: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 100832d: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008330: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008334: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008337: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100833b: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 100833e: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008341: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008343: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008347: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100834a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100834c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100834e: jl 0x100827f */
  if ((sf != of)) goto L_100827f;
L_1008354: /* 1008354: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008358: jge 0x10083db */
  if ((sf == of)) goto L_10083db;
L_100835e: /* 100835e: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 1008361: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1008365: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 1008368: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 100836c: mov edx, esi */
  edx = esi;
/* 100836e: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008370: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 1008374: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100837b: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100837f: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008386: lea ecx, [ebx + ecx*4 - 4] */
  ecx = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* 100838a: lea eax, [ebx + eax*4 - 4] */
  eax = (uint32_t)(ebx + eax*4 + 0xfffffffcu);
/* 100838e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008392: /* 1008392: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1008394: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1008398: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 100839b: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 100839e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10083a0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10083a3: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 10083a6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083aa: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10083ac: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 10083af: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083b1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10083b5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10083b8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10083ba: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10083bc: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10083be: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083c0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083c4: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10083c6: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 10083ca: add dword ptr [esp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 10083ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10083d2: jne 0x1008392 */
  if (!zf) goto L_1008392;
L_10083d4: /* 10083d4: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10083db: /* 10083db: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10083df: jne 0x1008251 */
  if (!zf) goto L_1008251;
L_10083e5: /* 10083e5: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10083e9: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
L_10083f0: /* 10083f0: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10083f4: jne 0x1008220 */
  if (!zf) goto L_1008220;
L_10083fa: /* 10083fa: jmp 0x100855b */
  goto L_100855b;
L_10083ff: /* 10083ff: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008402: jle 0x100855b */
  if ((zf || sf != of)) goto L_100855b;
L_1008408: /* 1008408: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 100840f: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1008412: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1008416: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 100841d: lea ecx, [ebx + ecx*4 - 4] */
  ecx = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* 1008421: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1008425: lea ecx, [ebx - 4] */
  ecx = (uint32_t)(ebx + 0xfffffffcu);
/* 1008428: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1008429: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 100842d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008431: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
L_1008435: /* 1008435: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1008439: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 100843d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1008440: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008442: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1008446: add dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 100844a: sub dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 100844e: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1008452: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008454: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008456: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 100845a: jle 0x1008551 */
  if ((zf || sf != of)) goto L_1008551;
L_1008460: /* 1008460: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1008464: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1008468: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 100846f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1008473: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1008477: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 100847b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 100847f: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1008483: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
L_1008487: /* 1008487: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100848a: jle 0x1008519 */
  if ((zf || sf != of)) goto L_1008519;
L_1008490: /* 1008490: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 1008497: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 100849b: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 100849f: mov edx, esi */
  edx = esi;
/* 10084a1: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10084a3: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10084a7: lea edx, [ebp - 3] */
  edx = (uint32_t)(ebp + 0xfffffffdu);
/* 10084aa: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10084ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10084ad: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 10084b1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10084b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10084b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10084c0: /* 10084c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10084c4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 10084c7: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 10084ca: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10084cd: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 10084d1: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 10084d5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10084d8: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10084db: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10084de: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 10084e2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10084e6: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 10084e9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10084eb: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10084ee: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 10084f1: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10084f5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10084f7: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 10084fa: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10084fc: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1008500: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1008503: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 1008505: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1008507: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 100850b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100850c: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 1008510: jne 0x10084c0 */
  if (!zf) goto L_10084c0;
L_1008512: /* 1008512: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1008519: /* 1008519: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 1008520: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 1008527: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008529: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 1008530: add dword ptr [esp + 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1008534: add dword ptr [esp + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1008538: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 100853c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100853e: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 1008542: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1008543: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1008547: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 100854b: jne 0x1008487 */
  if (!zf) goto L_1008487;
L_1008551: /* 1008551: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 1008555: jne 0x1008435 */
  if (!zf) goto L_1008435;
L_100855b: /* 100855b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100855d: jle 0x1008586 */
  if ((zf || sf != of)) goto L_1008586;
L_100855f: /* 100855f: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1008566: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 100856d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100856f: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
L_1008573: /* 1008573: mov edi, dword ptr [ecx + eax] */
  edi = R32((uint32_t)(ecx + eax));
/* 1008576: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 1008578: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100857c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100857f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1008580: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008584: jne 0x1008573 */
  if (!zf) goto L_1008573;
L_1008586: /* 1008586: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 100858d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008590: jle 0x10085e5 */
  if ((zf || sf != of)) goto L_10085e5;
L_1008592: /* 1008592: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008593: mov eax, ebx */
  eax = ebx;
/* 1008595: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 1008599: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085a0: /* 10085a0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 10085a4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10085a7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085a9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10085ab: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10085af: jle 0x10085d8 */
  if ((zf || sf != of)) goto L_10085d8;
L_10085b1: /* 10085b1: mov ecx, esi */
  ecx = esi;
/* 10085b3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10085b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085c0: /* 10085c0: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* 10085c3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 10085c5: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 10085cc: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10085d2: jne 0x10085c0 */
  if (!zf) goto L_10085c0;
L_10085d4: /* 10085d4: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
L_10085d8: /* 10085d8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10085dc: jne 0x10085a0 */
  if (!zf) goto L_10085a0;
L_10085de: /* 10085de: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
L_10085e5: /* 10085e5: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 10085e9: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 10085ec: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085ee: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f0: jle 0x100870b */
  if ((zf || sf != of)) goto L_100870b;
L_10085f6: /* 10085f6: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f9: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_10085ff: /* 10085ff: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1008603: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1008606: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 100860a: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 1008611: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008614: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008618: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* 100861b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100861f: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1008626: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1008627: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 100862e: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 1008632: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
L_1008636: /* 1008636: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100863a: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100863e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008640: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008644: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008648: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100864a: mov dword ptr [esp + 0x70], edi */
  W32((uint32_t)(esp + 0x70u), edi);
/* 100864e: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 1008652: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1008654: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008656: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 100865a: jle 0x10086f8 */
  if ((zf || sf != of)) goto L_10086f8;
L_1008660: /* 1008660: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 1008664: mov ecx, edi */
  ecx = edi;
/* 1008666: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 100866a: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 100866e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008672: /* 1008672: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008675: jle 0x10086ce */
  if ((zf || sf != of)) goto L_10086ce;
L_1008677: /* 1008677: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100867b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100867f: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1008683: mov edi, ebx */
  edi = ebx;
/* 1008685: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008687: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100868b: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 100868e: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008690: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1008691: /* 1008691: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1008694: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008697: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 100869a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100869d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100869f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10086a2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10086a3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 10086a6: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 10086aa: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10086ae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10086b0: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 10086b3: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10086b7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10086b9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10086bb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10086be: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10086c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10086c3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10086c5: jne 0x1008691 */
  if (!zf) goto L_1008691;
L_10086c7: /* 10086c7: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10086ce: /* 10086ce: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10086d2: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 10086d6: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10086dd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10086df: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10086e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10086e7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10086e9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 10086ea: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 10086ee: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 10086f2: jne 0x1008672 */
  if (!zf) goto L_1008672;
L_10086f8: /* 10086f8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10086fc: jne 0x1008636 */
  if (!zf) goto L_1008636;
L_1008702: /* 1008702: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008703: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008704: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100870a: ret  */
  esp += 4; SPILL(); return;
L_100870b: /* 100870b: xor eax, eax */
  eax = 0;
/* 100870d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008710: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_1008716: /* 1008716: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 100871d: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008720: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 1008727: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008728: mov dword ptr [esp + 0x74], edi */
  W32((uint32_t)(esp + 0x74u), edi);
/* 100872c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008730: /* 1008730: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008737: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008739: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100873d: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008740: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1008744: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008748: jle 0x10088b4 */
  if ((zf || sf != of)) goto L_10088b4;
L_100874e: /* 100874e: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008751: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008753: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008754: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1008758: jmp 0x1008760 */
  goto L_1008760;
L_100875a: /* 100875a: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100875e: mov edi, edi */
  edi = edi;
L_1008760: /* 1008760: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008763: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008766: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008769: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100876d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008775: jl 0x1008831 */
  if ((sf != of)) goto L_1008831;
L_100877b: /* 100877b: mov edi, 3 */
  edi = 0x3u;
L_1008780: /* 1008780: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008783: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008787: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100878b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100878e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008790: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008794: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008797: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100879e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10087a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087a3: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087a7: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087aa: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087ad: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087af: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087b5: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087b8: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087ba: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087bd: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087c3: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087c8: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087cc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087cf: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087d2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087d4: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087da: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087dd: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087df: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087e2: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087e6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087e8: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087eb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087ed: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087f1: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087f4: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087f7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087f9: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087ff: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008802: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008804: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008807: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100880b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100880d: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008810: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008812: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008816: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008819: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 100881c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100881e: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1008822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008824: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008827: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008829: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100882b: jl 0x1008780 */
  if ((sf != of)) goto L_1008780;
L_1008831: /* 1008831: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008835: jge 0x10088a2 */
  if ((sf == of)) goto L_10088a2;
L_1008837: /* 1008837: lea edi, [ebx + eax*4] */
  edi = (uint32_t)(ebx + eax*4);
/* 100883a: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 100883e: mov edi, ebx */
  edi = ebx;
/* 1008840: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008842: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008846: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 100884a: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100884e: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008852: jmp 0x1008860 */
  goto L_1008860;
L_1008854: /* 1008854: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 1008858: jmp 0x1008860 */
  goto L_1008860;
L_1008860: /* 1008860: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008863: lea edx, [ebp*4] */
  edx = (uint32_t)(ebp*4);
/* 100886a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 100886c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100886e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008871: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008873: fstp dword ptr [eax + edi] */
  WF32((uint32_t)(eax + edi), ST0); FPOP();
/* 1008876: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100887a: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 100887d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008880: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008882: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 1008884: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008888: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 100888a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100888c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1008890: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1008891: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008895: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008899: jne 0x1008854 */
  if (!zf) goto L_1008854;
L_100889b: /* 100889b: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10088a2: /* 10088a2: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10088a6: jne 0x100875a */
  if (!zf) goto L_100875a;
L_10088ac: /* 10088ac: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 10088b0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_10088b4: /* 10088b4: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 10088b8: jne 0x1008730 */
  if (!zf) goto L_1008730;
L_10088be: /* 10088be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10088bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10088c0: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10088c6: ret  */
  esp += 4; SPILL(); return;
}

void f_100759d(void) {
  LOAD_REGS();
  goto L_100759d;
L_1007560: /* 1007560: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1007564: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007568: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 100756b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100756d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1007571: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007575: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007577: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1007579: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 100757d: jle 0x10075e8 */
  if ((zf || sf != of)) goto L_10075e8;
L_100757f: /* 100757f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007583: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1007587: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100758b: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 100758f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1007593: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007597: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 100759b: jmp 0x10075a0 */
  goto L_10075a0;
L_100759d: /* 100759d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10075a0: /* 10075a0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 10075a3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10075a7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10075a9: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 10075ab: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10075ad: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10075b1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 10075b3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 10075b5: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10075bc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10075be: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 10075c2: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 10075c6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10075c8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10075cc: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 10075d0: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10075d4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10075d7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10075d9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10075dd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 10075de: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10075e2: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10075e6: jne 0x10075a0 */
  if (!zf) goto L_10075a0;
L_10075e8: /* 10075e8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10075ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10075f0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10075f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10075f6: dec dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x4cu), r);
  }
/* 10075fa: jne 0x1007560 */
  if (!zf) goto L_1007560;
L_1007600: /* 1007600: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 1007607: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 100760b: jmp 0x1007614 */
  goto L_1007614;
L_1007614: /* 1007614: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1007617: je 0x1007a35 */
  if (zf) goto L_1007a35;
L_100761d: /* 100761d: cmp dword ptr [esp + 0x70], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007621: jge 0x1007916 */
  if ((sf == of)) goto L_1007916;
L_1007627: /* 1007627: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 100762b: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 100762f: xor eax, eax */
  eax = 0;
/* 1007631: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007634: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1007638: jle 0x1007a31 */
  if ((zf || sf != of)) goto L_1007a31;
L_100763e: /* 100763e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 100763f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
L_1007643: /* 1007643: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1007647: add dword ptr [esp + 0x3c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100764b: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 100764f: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1007651: lea ecx, [ebp + ebp] */
  ecx = (uint32_t)(ebp + ebp);
/* 1007655: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007657: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100765a: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 100765e: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 1007662: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1007666: jle 0x1007900 */
  if ((zf || sf != of)) goto L_1007900;
L_100766c: /* 100766c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007670: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007672: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007676: mov ecx, edx */
  ecx = edx;
/* 1007678: lea edx, [ebp - 3] */
  edx = (uint32_t)(ebp + 0xfffffffdu);
/* 100767b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100767d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 100767f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1007680: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 1007684: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1007688: jmp 0x1007692 */
  goto L_1007692;
L_100768a: /* 100768a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 100768e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
L_1007692: /* 1007692: sub dword ptr [esp + 0x28], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1007697: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 100769b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100769e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10076a0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10076a2: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 10076a6: cmp dword ptr [esp + 0x98], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x98u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10076ae: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10076b2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10076b6: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10076ba: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 10076c2: jl 0x100783e */
  if ((sf != of)) goto L_100783e;
L_10076c8: /* 10076c8: mov dword ptr [esp + 0xc], 3 */
  W32((uint32_t)(esp + 0xcu), 0x3u);
/* 10076d0: jmp 0x10076d9 */
  goto L_10076d9;
L_10076d2: /* 10076d2: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
L_10076d9: /* 10076d9: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10076dd: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10076e1: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 10076e5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10076e9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10076ed: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10076f1: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 10076f5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10076f9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10076fd: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 1007700: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 1007703: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007706: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100770a: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 100770d: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 1007710: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007713: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007717: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007719: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 100771d: add dword ptr [esp + 0x20], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1007721: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1007725: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007727: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100772b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100772d: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1007731: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007735: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007739: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100773d: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1007741: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 1007745: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007749: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 100774d: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 1007750: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 1007753: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007756: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100775a: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 100775d: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 1007760: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007763: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007767: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007769: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 100776d: add dword ptr [esp + 0x20], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1007771: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1007775: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007777: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 100777b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100777d: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1007781: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007785: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007789: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 100778d: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1007791: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 1007795: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1007799: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 100779d: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 10077a0: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 10077a3: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 10077a6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10077aa: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 10077ad: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 10077b0: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 10077b3: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10077b7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10077b9: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 10077bd: add dword ptr [esp + 0x20], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 10077c1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10077c5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10077c7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10077c9: fld dword ptr [edi + ecx*4 - 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 10077cd: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10077d1: fadd dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 10077d5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10077d9: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10077dd: fsub dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* 10077e1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10077e5: fstp dword ptr [esi + edx*4 - 4] */
  WF32((uint32_t)(esi + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 10077e9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10077ed: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 10077f0: fsub dword ptr [edi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*4)));
/* 10077f3: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 10077f6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10077fa: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* 10077fd: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 1007800: fstp dword ptr [esi + edx*4] */
  WF32((uint32_t)(esi + edx*4), ST0); FPOP();
/* 1007803: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007807: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007809: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 100780d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1007811: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007813: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 100781a: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 100781e: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1007822: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007824: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007826: add dword ptr [esp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 100782b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100782f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007832: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007834: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 1007838: jl 0x10076d2 */
  if ((sf != of)) goto L_10076d2;
L_100783e: /* 100783e: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1007842: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007849: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100784b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1007852: jge 0x10078f2 */
  if ((sf == of)) goto L_10078f2;
L_1007858: /* 1007858: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 100785c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 100785f: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1007863: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1007867: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 100786a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 100786e: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007872: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 1007875: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1007879: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007880: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1007884: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1007887: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 100788a: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100788e: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_1007892: /* 1007892: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1007895: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1007899: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 100789c: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 100789f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10078a3: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 10078a6: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10078a9: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 10078ac: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10078b0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10078b2: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10078b4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10078b6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10078b8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10078bc: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10078be: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 10078c0: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 10078c7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10078c9: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10078cd: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10078d1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10078d3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10078d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10078db: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10078df: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10078e1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10078e3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10078e7: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10078e8: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 10078ec: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 10078f0: jne 0x1007892 */
  if (!zf) goto L_1007892;
L_10078f2: /* 10078f2: dec dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 10078f6: jne 0x100768a */
  if (!zf) goto L_100768a;
L_10078fc: /* 10078fc: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
L_1007900: /* 1007900: dec dword ptr [esp + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x4cu), r);
  }
/* 1007904: jne 0x1007643 */
  if (!zf) goto L_1007643;
L_100790a: /* 100790a: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007911: jmp 0x1007a31 */
  goto L_1007a31;
L_1007916: /* 1007916: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007919: jle 0x1007a35 */
  if ((zf || sf != of)) goto L_1007a35;
L_100791f: /* 100791f: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1007922: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1007923: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 1007927: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 100792b: mov edi, esi */
  edi = esi;
/* 100792d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_1007931: /* 1007931: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1007935: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007939: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 100793c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100793e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1007940: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 1007944: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007948: lea eax, [ebp*8] */
  eax = (uint32_t)(ebp*8);
/* 100794f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007951: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1007953: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1007957: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 100795b: jle 0x1007a27 */
  if ((zf || sf != of)) goto L_1007a27;
L_1007961: /* 1007961: mov eax, ecx */
  eax = ecx;
/* 1007963: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007967: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 100796b: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 100796f: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007973: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_1007977: /* 1007977: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100797a: jle 0x10079ec */
  if ((zf || sf != of)) goto L_10079ec;
L_100797c: /* 100797c: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1007980: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1007983: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007987: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 100798b: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 100798d: mov ecx, eax */
  ecx = eax;
/* 100798f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 1007993: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1007994: /* 1007994: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007998: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 100799b: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 100799e: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10079a1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10079a5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10079a9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10079ac: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10079af: sub ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10079b2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10079b3: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 10079b7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10079bb: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 10079be: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10079c2: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 10079c5: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10079c8: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 10079cb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10079cf: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10079d1: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10079d3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10079d5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10079d9: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10079db: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10079dd: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10079df: jne 0x1007994 */
  if (!zf) goto L_1007994;
L_10079e1: /* 10079e1: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 10079e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_10079ec: /* 10079ec: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10079f0: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 10079f7: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10079f9: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10079fd: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 1007a01: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1007a03: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1007a07: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1007a0a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007a0c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1007a10: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1007a11: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 1007a15: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 1007a19: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1007a1d: jne 0x1007977 */
  if (!zf) goto L_1007977;
L_1007a23: /* 1007a23: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
L_1007a27: /* 1007a27: dec dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 1007a2b: jne 0x1007931 */
  if (!zf) goto L_1007931;
L_1007a31: /* 1007a31: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1007a35: /* 1007a35: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1007a3c: xor ecx, ecx */
  ecx = 0;
/* 1007a3e: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 1007a42: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1007a46: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1007a4d: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 1007a50: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1007a54: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1007a5b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1007a5c: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 1007a5f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007a62: mov dword ptr [esp + 0x84], 0x3f800000 */
  W32((uint32_t)(esp + 0x84u), 0x3f800000u);
/* 1007a6d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1007a71: jle 0x1007fb9 */
  if ((zf || sf != of)) goto L_1007fb9;
L_1007a77: /* 1007a77: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007a7e: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1007a82: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1007a85: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1007a89: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1007a8d: lea ecx, [ecx + edx*4 + 8] */
  ecx = (uint32_t)(ecx + edx*4 + 0x8u);
/* 1007a91: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 1007a95: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1007a97: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1007a98: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1007a9c: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 1007aa3: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 1007aa7: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007aae: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 1007ab2: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007ab6: jmp 0x1007ac0 */
  goto L_1007ac0;
L_1007ac0: /* 1007ac0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007ac4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 1007acb: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 1007acf: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ad1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007ad5: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1007ad9: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 1007add: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007ae1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ae3: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 1007ae7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007aeb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1007aed: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007aef: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1007af3: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1007af7: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 1007afb: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 1007b02: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007b04: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007b07: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 1007b0b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007b0f: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1007b13: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 1007b17: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 1007b1b: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 1007b22: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007b26: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1007b2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1007b2c: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007b30: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1007b34: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1007b38: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1007b3c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 1007b44: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 1007b48: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007b4c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1007b54: jl 0x1007c71 */
  if ((sf != of)) goto L_1007c71;
L_1007b5a: /* 1007b5a: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007b61: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 1007b65: lea ecx, [edx + ecx*4 + 8] */
  ecx = (uint32_t)(edx + ecx*4 + 0x8u);
/* 1007b69: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007b6c: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007b70: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007b77: lea edx, [edx + edi*4 + 8] */
  edx = (uint32_t)(edx + edi*4 + 0x8u);
/* 1007b7b: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1007b7f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1007b83: mov dword ptr [esp + 0x54], 3 */
  W32((uint32_t)(esp + 0x54u), 0x3u);
/* 1007b8b: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_1007b8f: /* 1007b8f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007b93: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007b97: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007b9a: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007b9e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007ba1: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007ba4: fadd dword ptr [edx - 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007ba7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bab: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* 1007bae: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bb2: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007bb5: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bb9: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 1007bbc: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007bc0: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bc3: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007bc7: fadd dword ptr [edx - 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bca: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bce: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1007bd1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bd5: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007bd8: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bdc: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1007bdf: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007be3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007be5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007be9: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007beb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007bef: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 1007bf2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007bf6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007bf8: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007bfc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1007bff: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007c03: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007c06: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007c0a: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 1007c0d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007c11: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1007c14: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007c18: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007c1b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007c1f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007c22: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1007c26: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1007c2a: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1007c2d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007c30: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 1007c34: add dword ptr [esp + 0x58], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1007c39: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1007c3e: add dword ptr [esp + 0x68], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x68u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x68u), r);
  }
/* 1007c43: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 1007c48: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1007c4d: add dword ptr [esp + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007c52: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 1007c57: add dword ptr [esp + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1007c5c: cmp dword ptr [esp + 0x54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007c60: jl 0x1007b8f */
  if ((sf != of)) goto L_1007b8f;
L_1007c66: /* 1007c66: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007c6d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_1007c71: /* 1007c71: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007c75: jge 0x1007d2b */
  if ((sf == of)) goto L_1007d2b;
L_1007c7b: /* 1007c7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1007c7f: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007c86: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007c89: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007c90: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1007c94: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 1007c98: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 1007c9b: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 1007ca2: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007ca6: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007caa: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007cad: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1007cb1: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 1007cb5: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1007cbc: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 1007cbf: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 1007cc3: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1007cc7: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 1007cca: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007cce: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1007cd2: mov ecx, edi */
  ecx = edi;
/* 1007cd4: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_1007cd6: /* 1007cd6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1007cda: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 1007cde: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007ce0: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1007ce4: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007ce6: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007cea: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007cec: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007cf0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1007cf4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007cf6: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007cfa: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007cfc: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007d00: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007d03: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007d07: add dword ptr [esp + 0x54], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1007d0c: add dword ptr [esp + 0x18], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1007d11: add dword ptr [esp + 0x30], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007d16: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007d1a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007d1d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1007d1e: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1007d22: jne 0x1007cd6 */
  if (!zf) goto L_1007cd6;
L_1007d24: /* 1007d24: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1007d2b: /* 1007d2b: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 1007d2f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1007d33: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1007d37: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1007d3b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1007d3f: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 1007d43: cmp dword ptr [esp + 0x60], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007d48: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1007d4c: jle 0x1007fab */
  if ((zf || sf != of)) goto L_1007fab;
L_1007d52: /* 1007d52: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007d59: lea ecx, [edx + edi*4 + 8] */
  ecx = (uint32_t)(edx + edi*4 + 0x8u);
/* 1007d5d: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1007d61: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007d65: lea edx, [edx + ecx*4 + 8] */
  edx = (uint32_t)(edx + ecx*4 + 0x8u);
/* 1007d69: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1007d6d: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007d70: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1007d74: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007d7b: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1007d7f: nop  */
L_1007d80: /* 1007d80: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1007d84: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 1007d88: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1007d8c: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007d8e: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007d92: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1007d96: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1007d9a: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 1007d9e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007da0: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1007da4: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007da8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1007daa: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007dac: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 1007db0: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 1007db4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1007db8: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007dbc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1007dbe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007dc1: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1007dc5: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 1007dc9: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1007dcd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1007dd1: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1007dd5: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1007dd9: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1007ddd: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1007de1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1007de3: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1007de7: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1007deb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 1007def: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 1007df3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1007df7: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 1007dfb: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1007dff: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1007e07: jl 0x1007ef7 */
  if ((sf != of)) goto L_1007ef7;
L_1007e0d: /* 1007e0d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1007e11: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1007e15: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 1007e19: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 1007e1d: mov dword ptr [esp + 0x44], 3 */
  W32((uint32_t)(esp + 0x44u), 0x3u);
/* 1007e25: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007e29: jmp 0x1007e2f */
  goto L_1007e2f;
L_1007e2b: /* 1007e2b: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
L_1007e2f: /* 1007e2f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e33: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1007e36: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 1007e39: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007e3c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1007e3f: fadd dword ptr [eax - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe8u)));
/* 1007e42: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 1007e45: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e49: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 1007e4c: fadd dword ptr [ecx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffe8u)));
/* 1007e4f: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* 1007e52: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e56: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 1007e59: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1007e5c: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1007e5f: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e63: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007e66: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1007e69: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1007e6c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e70: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1007e73: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 1007e76: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1007e79: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e7d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007e7f: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 1007e82: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 1007e85: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007e89: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1007e8c: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1007e8f: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1007e92: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007e96: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 1007e99: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007e9d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007ea0: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1007ea4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007ea8: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1007eab: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007eae: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1007eb2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007eb6: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1007eb9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007ebc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 1007ec0: add dword ptr [esp + 0x24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1007ec5: add dword ptr [esp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1007eca: add dword ptr [esp + 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 1007ecf: add dword ptr [esp + 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* 1007ed4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1007ed8: cmp edx, dword ptr [esp + 0x9c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007edf: jl 0x1007e2b */
  if ((sf != of)) goto L_1007e2b;
L_1007ee5: /* 1007ee5: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1007eec: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1007ef0: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1007ef7: /* 1007ef7: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007efb: jge 0x1007fa1 */
  if ((sf == of)) goto L_1007fa1;
L_1007f01: /* 1007f01: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1007f08: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1007f0c: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007f13: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 1007f16: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1007f1a: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1007f1d: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1007f24: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007f28: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1007f2c: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 1007f2f: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1007f36: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1007f3a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1007f3e: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1007f41: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1007f45: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1007f49: mov eax, edi */
  eax = edi;
/* 1007f4b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1007f4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1007f50: /* 1007f50: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1007f54: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1007f58: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 1007f5a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1007f5e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007f61: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1007f63: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1007f65: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1007f69: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 1007f6d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f70: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1007f73: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1007f77: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1007f7b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f7e: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1007f81: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1007f85: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1007f89: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1007f8c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1007f8d: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1007f90: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1007f94: jne 0x1007f50 */
  if (!zf) goto L_1007f50;
L_1007f96: /* 1007f96: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1007f9d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_1007fa1: /* 1007fa1: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1007fa5: jne 0x1007d80 */
  if (!zf) goto L_1007d80;
L_1007fab: /* 1007fab: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 1007faf: jne 0x1007ac0 */
  if (!zf) goto L_1007ac0;
L_1007fb5: /* 1007fb5: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1007fb9: /* 1007fb9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007fbc: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 1007fc4: jle 0x10080cc */
  if ((zf || sf != of)) goto L_10080cc;
L_1007fca: /* 1007fca: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1007fd1: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007fd4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1007fd5: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 1007fd9: jmp 0x1007fe0 */
  goto L_1007fe0;
L_1007fdb: /* 1007fdb: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1007fdf: nop  */
L_1007fe0: /* 1007fe0: add dword ptr [esp + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 1007fe4: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 1007feb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1007fed: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1007ff0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1007ff4: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1007ff8: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1007ffc: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008004: jl 0x1008070 */
  if ((sf != of)) goto L_1008070;
L_1008006: /* 1008006: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 100800d: mov dword ptr [esp + 0xc], 3 */
  W32((uint32_t)(esp + 0xcu), 0x3u);
/* 1008015: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1008018: /* 1008018: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 100801b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 100801f: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 1008022: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008025: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008029: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100802d: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 1008030: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008033: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008036: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 100803a: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 100803d: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1008041: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1008044: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1008048: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100804c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 100804f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1008051: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008054: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 1008056: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008059: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100805b: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 100805e: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1008061: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1008064: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1008067: jl 0x1008018 */
  if ((sf != of)) goto L_1008018;
L_1008069: /* 1008069: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1008070: /* 1008070: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008074: jge 0x10080be */
  if ((sf == of)) goto L_10080be;
L_1008076: /* 1008076: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 100807a: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1008081: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 1008084: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1008088: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100808c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008090: /* 1008090: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 1008097: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 100809a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 100809e: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 10080a0: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 10080a7: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 10080aa: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10080ae: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10080b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10080b2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080b4: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 10080b8: jl 0x1008090 */
  if ((sf != of)) goto L_1008090;
L_10080ba: /* 10080ba: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_10080be: /* 10080be: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10080c2: jne 0x1007fdb */
  if (!zf) goto L_1007fdb;
L_10080c8: /* 10080c8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_10080cc: /* 10080cc: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080cf: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 10080d6: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 10080de: jle 0x10081e6 */
  if ((zf || sf != of)) goto L_10081e6;
L_10080e4: /* 10080e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10080e5: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10080e9: jmp 0x10080ef */
  goto L_10080ef;
L_10080eb: /* 10080eb: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
L_10080ef: /* 10080ef: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 10080f3: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 10080f7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10080f9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10080fb: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10080fe: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1008102: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1008106: mov eax, edi */
  eax = edi;
/* 1008108: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008110: jl 0x1008190 */
  if ((sf != of)) goto L_1008190;
L_1008116: /* 1008116: mov dword ptr [esp + 8], 3 */
  W32((uint32_t)(esp + 0x8u), 0x3u);
L_100811e: /* 100811e: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008121: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1008125: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008128: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100812b: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 100812f: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 1008133: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008136: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1008139: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100813c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100813e: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008141: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008145: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 1008148: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100814a: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100814d: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008150: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008153: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008156: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008158: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 100815b: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100815e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008160: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008163: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008166: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008169: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 100816c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100816e: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008171: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 1008174: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008176: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008179: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 100817c: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 100817f: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008182: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008184: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008187: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100818a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100818c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100818e: jl 0x100811e */
  if ((sf != of)) goto L_100811e;
L_1008190: /* 1008190: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008194: jge 0x10081d1 */
  if ((sf == of)) goto L_10081d1;
L_1008196: /* 1008196: mov edi, esi */
  edi = esi;
/* 1008198: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 100819a: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 100819e: mov edi, edx */
  edi = edx;
/* 10081a0: sub edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10081a4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 10081a7: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 10081aa: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
L_10081ae: /* 10081ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10081b0: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 10081b4: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10081b6: fstp dword ptr [edi + eax] */
  WF32((uint32_t)(edi + eax), ST0); FPOP();
/* 10081b9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10081bb: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 10081bd: fstp dword ptr [edi + ecx] */
  WF32((uint32_t)(edi + ecx), ST0); FPOP();
/* 10081c0: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 10081c7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10081c9: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10081cb: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10081cf: jne 0x10081ae */
  if (!zf) goto L_10081ae;
L_10081d1: /* 10081d1: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10081d5: jne 0x10080eb */
  if (!zf) goto L_10080eb;
L_10081db: /* 10081db: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 10081e2: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_10081e6: /* 10081e6: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10081e9: je 0x10088be */
  if (zf) goto L_10088be;
L_10081ef: /* 10081ef: cmp dword ptr [esp + 0x70], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10081f3: jge 0x10083ff */
  if ((sf == of)) goto L_10083ff;
L_10081f9: /* 10081f9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10081fc: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 1008203: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 100820b: jle 0x100855b */
  if ((zf || sf != of)) goto L_100855b;
L_1008211: /* 1008211: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1008212: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 1008216: jmp 0x1008220 */
  goto L_1008220;
L_1008220: /* 1008220: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1008224: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008228: sub ecx, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100822c: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100822f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008233: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1008237: jle 0x10083f0 */
  if ((zf || sf != of)) goto L_10083f0;
L_100823d: /* 100823d: mov edi, eax */
  edi = eax;
/* 100823f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008241: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008244: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008246: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008247: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100824b: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 100824f: jmp 0x1008260 */
  goto L_1008260;
L_1008251: /* 1008251: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008255: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1008259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008260: /* 1008260: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008263: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008265: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008268: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 100826c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008274: jl 0x1008354 */
  if ((sf != of)) goto L_1008354;
L_100827a: /* 100827a: mov edi, 3 */
  edi = 0x3u;
L_100827f: /* 100827f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008283: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008287: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 100828a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100828d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008291: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 1008298: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 100829c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100829f: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082a3: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082a6: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082aa: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082ad: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082b1: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082b4: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082b7: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082b9: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082bd: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082c0: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082c2: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082c6: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082c9: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082cd: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082d1: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 10082d4: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 10082d8: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082db: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082df: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 10082e2: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 10082e5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10082e7: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 10082eb: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 10082ee: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10082f0: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082f4: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 10082f7: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10082fb: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 10082ff: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008302: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008306: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008309: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100830d: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1008310: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008313: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008315: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008319: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100831c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100831e: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1008322: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1008325: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008329: fld dword ptr [ebx + eax*4 - 4] */
  { double v = F32((uint32_t)(ebx + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 100832d: fadd dword ptr [ebx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4)));
/* 1008330: fstp dword ptr [esi + ecx*4 - 4] */
  WF32((uint32_t)(esi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1008334: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008337: fadd dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 100833b: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 100833e: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 1008341: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008343: fsub dword ptr [ebx + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4 + 0xfffffffcu)));
/* 1008347: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
/* 100834a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100834c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100834e: jl 0x100827f */
  if ((sf != of)) goto L_100827f;
L_1008354: /* 1008354: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008358: jge 0x10083db */
  if ((sf == of)) goto L_10083db;
L_100835e: /* 100835e: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 1008361: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1008365: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 1008368: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 100836c: mov edx, esi */
  edx = esi;
/* 100836e: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008370: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 1008374: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100837b: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100837f: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008386: lea ecx, [ebx + ecx*4 - 4] */
  ecx = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* 100838a: lea eax, [ebx + eax*4 - 4] */
  eax = (uint32_t)(ebx + eax*4 + 0xfffffffcu);
/* 100838e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008392: /* 1008392: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1008394: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 1008398: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 100839b: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 100839e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10083a0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10083a3: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 10083a6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083aa: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10083ac: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 10083af: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083b1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10083b5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10083b8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10083ba: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 10083bc: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10083be: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10083c0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10083c4: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10083c6: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 10083ca: add dword ptr [esp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 10083ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10083d2: jne 0x1008392 */
  if (!zf) goto L_1008392;
L_10083d4: /* 10083d4: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10083db: /* 10083db: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10083df: jne 0x1008251 */
  if (!zf) goto L_1008251;
L_10083e5: /* 10083e5: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10083e9: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
L_10083f0: /* 10083f0: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10083f4: jne 0x1008220 */
  if (!zf) goto L_1008220;
L_10083fa: /* 10083fa: jmp 0x100855b */
  goto L_100855b;
L_10083ff: /* 10083ff: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008402: jle 0x100855b */
  if ((zf || sf != of)) goto L_100855b;
L_1008408: /* 1008408: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 100840f: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1008412: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1008416: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 100841d: lea ecx, [ebx + ecx*4 - 4] */
  ecx = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* 1008421: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1008425: lea ecx, [ebx - 4] */
  ecx = (uint32_t)(ebx + 0xfffffffcu);
/* 1008428: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1008429: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 100842d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008431: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
L_1008435: /* 1008435: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 1008439: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 100843d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1008440: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008442: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1008446: add dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 100844a: sub dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 100844e: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1008452: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1008454: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008456: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 100845a: jle 0x1008551 */
  if ((zf || sf != of)) goto L_1008551;
L_1008460: /* 1008460: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1008464: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1008468: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 100846f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1008473: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1008477: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 100847b: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 100847f: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1008483: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
L_1008487: /* 1008487: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100848a: jle 0x1008519 */
  if ((zf || sf != of)) goto L_1008519;
L_1008490: /* 1008490: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 1008497: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 100849b: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 100849f: mov edx, esi */
  edx = esi;
/* 10084a1: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10084a3: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10084a7: lea edx, [ebp - 3] */
  edx = (uint32_t)(ebp + 0xfffffffdu);
/* 10084aa: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10084ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10084ad: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 10084b1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10084b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10084b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10084c0: /* 10084c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10084c4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 10084c7: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 10084ca: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10084cd: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 10084d1: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 10084d5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10084d8: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10084db: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10084de: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 10084e2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10084e6: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 10084e9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10084eb: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10084ee: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* 10084f1: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10084f5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10084f7: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 10084fa: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10084fc: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 1008500: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1008503: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 1008505: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1008507: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 100850b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100850c: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 1008510: jne 0x10084c0 */
  if (!zf) goto L_10084c0;
L_1008512: /* 1008512: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_1008519: /* 1008519: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 1008520: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 1008527: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008529: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 1008530: add dword ptr [esp + 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1008534: add dword ptr [esp + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1008538: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 100853c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100853e: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 1008542: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1008543: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1008547: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 100854b: jne 0x1008487 */
  if (!zf) goto L_1008487;
L_1008551: /* 1008551: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 1008555: jne 0x1008435 */
  if (!zf) goto L_1008435;
L_100855b: /* 100855b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100855d: jle 0x1008586 */
  if ((zf || sf != of)) goto L_1008586;
L_100855f: /* 100855f: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1008566: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 100856d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100856f: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
L_1008573: /* 1008573: mov edi, dword ptr [ecx + eax] */
  edi = R32((uint32_t)(ecx + eax));
/* 1008576: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 1008578: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100857c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100857f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1008580: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008584: jne 0x1008573 */
  if (!zf) goto L_1008573;
L_1008586: /* 1008586: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 100858d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008590: jle 0x10085e5 */
  if ((zf || sf != of)) goto L_10085e5;
L_1008592: /* 1008592: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008593: mov eax, ebx */
  eax = ebx;
/* 1008595: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 1008599: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085a0: /* 10085a0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 10085a4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10085a7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085a9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10085ab: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10085af: jle 0x10085d8 */
  if ((zf || sf != of)) goto L_10085d8;
L_10085b1: /* 10085b1: mov ecx, esi */
  ecx = esi;
/* 10085b3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085b5: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 10085b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10085c0: /* 10085c0: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* 10085c3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 10085c5: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 10085cc: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10085ce: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 10085d2: jne 0x10085c0 */
  if (!zf) goto L_10085c0;
L_10085d4: /* 10085d4: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
L_10085d8: /* 10085d8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10085dc: jne 0x10085a0 */
  if (!zf) goto L_10085a0;
L_10085de: /* 10085de: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
L_10085e5: /* 10085e5: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 10085e9: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 10085ec: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10085ee: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f0: jle 0x100870b */
  if ((zf || sf != of)) goto L_100870b;
L_10085f6: /* 10085f6: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10085f9: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_10085ff: /* 10085ff: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1008603: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1008606: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 100860a: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 1008611: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008614: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008618: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* 100861b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 100861f: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 1008626: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1008627: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 100862e: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 1008632: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
L_1008636: /* 1008636: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100863a: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100863e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008640: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1008644: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 1008648: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100864a: mov dword ptr [esp + 0x70], edi */
  W32((uint32_t)(esp + 0x70u), edi);
/* 100864e: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 1008652: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1008654: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1008656: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 100865a: jle 0x10086f8 */
  if ((zf || sf != of)) goto L_10086f8;
L_1008660: /* 1008660: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 1008664: mov ecx, edi */
  ecx = edi;
/* 1008666: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 100866a: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 100866e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_1008672: /* 1008672: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008675: jle 0x10086ce */
  if ((zf || sf != of)) goto L_10086ce;
L_1008677: /* 1008677: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100867b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100867f: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1008683: mov edi, ebx */
  edi = ebx;
/* 1008685: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008687: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100868b: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 100868e: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008690: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1008691: /* 1008691: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1008694: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008697: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 100869a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100869d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100869f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10086a2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10086a3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 10086a6: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 10086aa: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10086ae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10086b0: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 10086b3: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10086b7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10086b9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 10086bb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10086be: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10086c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10086c3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10086c5: jne 0x1008691 */
  if (!zf) goto L_1008691;
L_10086c7: /* 10086c7: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10086ce: /* 10086ce: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10086d2: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 10086d6: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10086dd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10086df: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10086e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10086e7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10086e9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 10086ea: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 10086ee: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 10086f2: jne 0x1008672 */
  if (!zf) goto L_1008672;
L_10086f8: /* 10086f8: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 10086fc: jne 0x1008636 */
  if (!zf) goto L_1008636;
L_1008702: /* 1008702: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1008703: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1008704: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100870a: ret  */
  esp += 4; SPILL(); return;
L_100870b: /* 100870b: xor eax, eax */
  eax = 0;
/* 100870d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008710: jle 0x10088be */
  if ((zf || sf != of)) goto L_10088be;
L_1008716: /* 1008716: mov edi, dword ptr [esp + 0xa8] */
  edi = R32((uint32_t)(esp + 0xa8u));
/* 100871d: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 1008720: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 1008727: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1008728: mov dword ptr [esp + 0x74], edi */
  W32((uint32_t)(esp + 0x74u), edi);
/* 100872c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1008730: /* 1008730: lea edi, [ebp*4] */
  edi = (uint32_t)(ebp*4);
/* 1008737: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008739: add eax, dword ptr [esp + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x64u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100873d: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008740: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1008744: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1008748: jle 0x10088b4 */
  if ((zf || sf != of)) goto L_10088b4;
L_100874e: /* 100874e: lea edi, [ebp - 3] */
  edi = (uint32_t)(ebp + 0xfffffffdu);
/* 1008751: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1008753: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1008754: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1008758: jmp 0x1008760 */
  goto L_1008760;
L_100875a: /* 100875a: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100875e: mov edi, edi */
  edi = edi;
L_1008760: /* 1008760: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008763: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1008766: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008769: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100876d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1008775: jl 0x1008831 */
  if ((sf != of)) goto L_1008831;
L_100877b: /* 100877b: mov edi, 3 */
  edi = 0x3u;
L_1008780: /* 1008780: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008783: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1008787: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100878b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100878e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008790: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1008794: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008797: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 100879e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10087a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087a3: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087a7: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087aa: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087ad: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087af: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087b5: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087b8: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087ba: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087bd: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087c3: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087c6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087c8: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087cc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087cf: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087d2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087d4: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087da: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 10087dd: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10087df: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087e2: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087e6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087e8: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087eb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10087ed: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 10087f1: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10087f4: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 10087f7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10087f9: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 10087fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10087ff: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008802: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008804: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008807: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 100880b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100880d: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 1008810: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008812: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1008816: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008819: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 100881c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100881e: fmul dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1008822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008824: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 1008827: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008829: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100882b: jl 0x1008780 */
  if ((sf != of)) goto L_1008780;
L_1008831: /* 1008831: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1008835: jge 0x10088a2 */
  if ((sf == of)) goto L_10088a2;
L_1008837: /* 1008837: lea edi, [ebx + eax*4] */
  edi = (uint32_t)(ebx + eax*4);
/* 100883a: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 100883e: mov edi, ebx */
  edi = ebx;
/* 1008840: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1008842: sub edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1008846: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 100884a: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 100884e: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008852: jmp 0x1008860 */
  goto L_1008860;
L_1008854: /* 1008854: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 1008858: jmp 0x1008860 */
  goto L_1008860;
L_1008860: /* 1008860: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1008863: lea edx, [ebp*4] */
  edx = (uint32_t)(ebp*4);
/* 100886a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 100886c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100886e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008871: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1008873: fstp dword ptr [eax + edi] */
  WF32((uint32_t)(eax + edi), ST0); FPOP();
/* 1008876: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 100887a: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 100887d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1008880: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1008882: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 1008884: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1008886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1008888: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 100888a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100888c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1008890: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1008891: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 1008895: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1008899: jne 0x1008854 */
  if (!zf) goto L_1008854;
L_100889b: /* 100889b: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
L_10088a2: /* 10088a2: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10088a6: jne 0x100875a */
  if (!zf) goto L_100875a;
L_10088ac: /* 10088ac: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 10088b0: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_10088b4: /* 10088b4: dec dword ptr [esp + 0x74] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x74u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x74u), r);
  }
/* 10088b8: jne 0x1008730 */
  if (!zf) goto L_1008730;
L_10088be: /* 10088be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10088bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10088c0: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10088c6: ret  */
  esp += 4; SPILL(); return;
}
