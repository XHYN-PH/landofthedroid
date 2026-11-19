#include "recomp.h"
#include "rec_mod.h"

void f_99540d(void) {
  LOAD_REGS();
L_99540d: /* 99540d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_995410: /* 995410: mov eax, dword ptr [esp + esi + 0x18] */
  eax = R32((uint32_t)(esp + esi + 0x18u));
/* 995414: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995416: je 0x9954a0 */
  if (zf) goto L_9954a0;
L_99541c: /* 99541c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 995420: mov eax, dword ptr [esp + esi + 0x2c] */
  eax = R32((uint32_t)(esp + esi + 0x2cu));
/* 995424: mov ecx, dword ptr [esp + esi + 0x6c] */
  ecx = R32((uint32_t)(esp + esi + 0x6cu));
/* 995428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 995429: lea ebp, [esp + edi + 0x84] */
  ebp = (uint32_t)(esp + edi + 0x84u);
/* 995430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995431: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995432: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 995433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995434: call 0x9944a0 */
  esp -= 4; W32(esp, 0x995439u); SPILL(); f_9944a0(); if (g_unwind) return; RELOAD();
/* 995439: fstp qword ptr [edi + 0xcf7450] */
  WF64((uint32_t)(edi + 0xcf7450u), ST0); FPOP();
/* 99543f: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 995443: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 995446: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995448: mov ecx, 1 */
  ecx = 0x1u;
/* 99544d: mov dword ptr [esp + esi + 0x18], ecx */
  W32((uint32_t)(esp + esi + 0x18u), ecx);
/* 995451: je 0x995478 */
  if (zf) goto L_995478;
L_995453: /* 995453: mov eax, dword ptr [esp + esi + 0x44] */
  eax = R32((uint32_t)(esp + esi + 0x44u));
/* 995457: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995459: jne 0x995478 */
  if (!zf) goto L_995478;
L_99545b: /* 99545b: cmp dword ptr [ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99545f: je 0x995470 */
  if (zf) goto L_995470;
L_995461: /* 995461: mov eax, dword ptr [esp + edi + 0x84] */
  eax = R32((uint32_t)(esp + edi + 0x84u));
/* 995468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99546a: je 0x995470 */
  if (zf) goto L_995470;
L_99546c: /* 99546c: xor eax, eax */
  eax = 0;
/* 99546e: jmp 0x995472 */
  goto L_995472;
L_995470: /* 995470: mov eax, ecx */
  eax = ecx;
L_995472: /* 995472: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 995474: mov dword ptr [esp + esi + 0x18], eax */
  W32((uint32_t)(esp + esi + 0x18u), eax);
L_995478: /* 995478: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99547c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99547e: je 0x9954a0 */
  if (zf) goto L_9954a0;
L_995480: /* 995480: mov eax, dword ptr [esp + esi + 0x58] */
  eax = R32((uint32_t)(esp + esi + 0x58u));
/* 995484: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995486: jne 0x9954a0 */
  if (!zf) goto L_9954a0;
L_995488: /* 995488: cmp dword ptr [ebp], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99548b: je 0x99549a */
  if (zf) goto L_99549a;
L_99548d: /* 99548d: cmp dword ptr [esp + edi + 0x84], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + edi + 0x84u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 995494: je 0x99549a */
  if (zf) goto L_99549a;
L_995496: /* 995496: xor eax, eax */
  eax = 0;
/* 995498: jmp 0x99549c */
  goto L_99549c;
L_99549a: /* 99549a: mov eax, ecx */
  eax = ecx;
L_99549c: /* 99549c: and dword ptr [esp + esi + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + esi + 0x18u), r);
  }
L_9954a0: /* 9954a0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9954a4: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9954a7: add ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9954ad: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9954b0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9954b3: cmp ebx, 0xcf76f8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcf76f8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9954b9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9954bd: jl 0x995410 */
  if ((sf != of)) goto L_995410;
L_9954c3: /* 9954c3: xor ecx, ecx */
  ecx = 0;
L_9954c5: /* 9954c5: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 9954c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9954cb: jne 0x9954d3 */
  if (!zf) goto L_9954d3;
L_9954cd: /* 9954cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9954ce: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9954d1: jl 0x9954c5 */
  if ((sf != of)) goto L_9954c5;
L_9954d3: /* 9954d3: mov esi, ecx */
  esi = ecx;
/* 9954d5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9954d6: mov edx, 5 */
  edx = 0x5u;
/* 9954db: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9954dd: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9954e0: jl 0x9955b3 */
  if ((sf != of)) goto L_9955b3;
L_9954e6: /* 9954e6: mov ebp, 0x10 */
  ebp = 0x10u;
/* 9954eb: mov eax, 0x18 */
  eax = 0x18u;
/* 9954f0: sub ebp, 0xcf7458 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcf7458u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 9954f6: sub eax, 0xcf7458 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf7458u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9954fb: lea edx, [esi*8] */
  edx = (uint32_t)(esi*8);
/* 995502: lea ebx, [ecx*8 + 8] */
  ebx = (uint32_t)(ecx*8 + 0x8u);
/* 995509: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_99550d: /* 99550d: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 995511: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995513: je 0x995533 */
  if (zf) goto L_995533;
L_995515: /* 995515: lea edi, [ecx*8] */
  edi = (uint32_t)(ecx*8);
/* 99551c: fld qword ptr [edi + 0xcf7450] */
  { double v = F64((uint32_t)(edi + 0xcf7450u)); FPUSH(v); }
/* 995522: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 995528: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99552a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99552d: jp 0x995533 */
  if (pf) goto L_995533;
L_99552f: /* 99552f: mov esi, ecx */
  esi = ecx;
/* 995531: mov edx, edi */
  edx = edi;
L_995533: /* 995533: mov eax, dword ptr [esp + ecx*4 + 0x1c] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x1cu));
/* 995537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995539: je 0x995554 */
  if (zf) goto L_995554;
L_99553b: /* 99553b: fld qword ptr [ecx*8 + 0xcf7458] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf7458u)); FPUSH(v); }
/* 995542: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 995548: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99554a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99554d: jp 0x995554 */
  if (pf) goto L_995554;
L_99554f: /* 99554f: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 995552: mov edx, ebx */
  edx = ebx;
L_995554: /* 995554: mov eax, dword ptr [esp + ecx*4 + 0x20] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x20u));
/* 995558: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99555a: je 0x99557a */
  if (zf) goto L_99557a;
L_99555c: /* 99555c: fld qword ptr [ecx*8 + 0xcf7460] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf7460u)); FPUSH(v); }
/* 995563: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 995569: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99556b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99556e: jp 0x99557a */
  if (pf) goto L_99557a;
L_995570: /* 995570: lea esi, [ecx + 2] */
  esi = (uint32_t)(ecx + 0x2u);
/* 995573: lea edx, [ebp + ecx*8 + 0xcf7458] */
  edx = (uint32_t)(ebp + ecx*8 + 0xcf7458u);
L_99557a: /* 99557a: mov eax, dword ptr [esp + ecx*4 + 0x24] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x24u));
/* 99557e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995580: je 0x9955a4 */
  if (zf) goto L_9955a4;
L_995582: /* 995582: fld qword ptr [ecx*8 + 0xcf7468] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf7468u)); FPUSH(v); }
/* 995589: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 99558f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995591: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995594: jp 0x9955a4 */
  if (pf) goto L_9955a4;
L_995596: /* 995596: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99559a: lea esi, [ecx + 3] */
  esi = (uint32_t)(ecx + 0x3u);
/* 99559d: lea edx, [eax + ecx*8 + 0xcf7458] */
  edx = (uint32_t)(eax + ecx*8 + 0xcf7458u);
L_9955a4: /* 9955a4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9955a7: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9955aa: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9955ad: jl 0x99550d */
  if ((sf != of)) goto L_99550d;
L_9955b3: /* 9955b3: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9955b6: jge 0x9955ec */
  if ((sf == of)) goto L_9955ec;
L_9955b8: /* 9955b8: lea edi, [esi*8] */
  edi = (uint32_t)(esi*8);
/* 9955bf: nop  */
L_9955c0: /* 9955c0: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 9955c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9955c6: je 0x9955e6 */
  if (zf) goto L_9955e6;
L_9955c8: /* 9955c8: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 9955cf: fld qword ptr [edx + 0xcf7450] */
  { double v = F64((uint32_t)(edx + 0xcf7450u)); FPUSH(v); }
/* 9955d5: fcomp qword ptr [edi + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xcf7450u)));
  FPOP();
/* 9955db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9955dd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9955e0: jp 0x9955e6 */
  if (pf) goto L_9955e6;
L_9955e2: /* 9955e2: mov esi, ecx */
  esi = ecx;
/* 9955e4: mov edi, edx */
  edi = edx;
L_9955e6: /* 9955e6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9955e7: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9955ea: jl 0x9955c0 */
  if ((sf != of)) goto L_9955c0;
L_9955ec: /* 9955ec: mov ecx, dword ptr [esp + 0x1ec] */
  ecx = R32((uint32_t)(esp + 0x1ecu));
/* 9955f3: mov edx, dword ptr [esp + esi*4 + 0x6c] */
  edx = R32((uint32_t)(esp + esi*4 + 0x6cu));
/* 9955f7: mov eax, dword ptr [esp + esi*8 + 0x80] */
  eax = R32((uint32_t)(esp + esi*8 + 0x80u));
/* 9955fe: mov dword ptr [ecx + 0x4c], edx */
  W32((uint32_t)(ecx + 0x4cu), edx);
/* 995601: mov edx, dword ptr [esp + esi*8 + 0x84] */
  edx = R32((uint32_t)(esp + esi*8 + 0x84u));
/* 995608: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 99560b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 99560d: mov dword ptr [ecx + 0x54], edx */
  W32((uint32_t)(ecx + 0x54u), edx);
/* 995610: xor edi, edi */
  edi = 0;
/* 995612: xor edx, edx */
  edx = 0;
/* 995614: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995616: jle 0x995681 */
  if ((zf || sf != of)) goto L_995681;
L_995618: /* 995618: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99561b: jmp 0x995620 */
  goto L_995620;
L_995620: /* 995620: fld dword ptr [ecx - 0x54] */
  { double v = F32((uint32_t)(ecx + 0xffffffacu)); FPUSH(v); }
/* 995623: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 995629: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99562b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99562e: jp 0x995642 */
  if (pf) goto L_995642;
L_995630: /* 995630: mov eax, dword ptr [esp + esi*4 + 0x44] */
  eax = R32((uint32_t)(esp + esi*4 + 0x44u));
/* 995634: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995636: je 0x995642 */
  if (zf) goto L_995642;
L_995638: /* 995638: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99563a: mov dword ptr [ecx], 6 */
  W32((uint32_t)(ecx), 0x6u);
/* 995640: jmp 0x995670 */
  goto L_995670;
L_995642: /* 995642: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 995648: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99564a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99564d: jp 0x99565f */
  if (pf) goto L_99565f;
L_99564f: /* 99564f: mov eax, dword ptr [esp + esi*4 + 0x58] */
  eax = R32((uint32_t)(esp + esi*4 + 0x58u));
/* 995653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995655: je 0x99565f */
  if (zf) goto L_99565f;
L_995657: /* 995657: mov dword ptr [ecx], 7 */
  W32((uint32_t)(ecx), 0x7u);
/* 99565d: jmp 0x995670 */
  goto L_995670;
L_99565f: /* 99565f: mov eax, esi */
  eax = esi;
/* 995661: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 995664: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995666: mov eax, dword ptr [esp + eax*4 + 0xa8] */
  eax = R32((uint32_t)(esp + eax*4 + 0xa8u));
/* 99566d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 99566f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_995670: /* 995670: mov eax, dword ptr [esp + 0x1ec] */
  eax = R32((uint32_t)(esp + 0x1ecu));
/* 995677: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 995679: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99567a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99567d: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99567f: jl 0x995620 */
  if ((sf != of)) goto L_995620;
L_995681: /* 995681: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995683: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 995684: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995685: add esp, 0x1d8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99568b: ret  */
  esp += 4; SPILL(); return;
}

void f_99561d(void) {
  LOAD_REGS();
L_99561d: /* 99561d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_995620: /* 995620: fld dword ptr [ecx - 0x54] */
  { double v = F32((uint32_t)(ecx + 0xffffffacu)); FPUSH(v); }
/* 995623: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 995629: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99562b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99562e: jp 0x995642 */
  if (pf) goto L_995642;
L_995630: /* 995630: mov eax, dword ptr [esp + esi*4 + 0x44] */
  eax = R32((uint32_t)(esp + esi*4 + 0x44u));
/* 995634: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995636: je 0x995642 */
  if (zf) goto L_995642;
L_995638: /* 995638: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99563a: mov dword ptr [ecx], 6 */
  W32((uint32_t)(ecx), 0x6u);
/* 995640: jmp 0x995670 */
  goto L_995670;
L_995642: /* 995642: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 995648: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99564a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99564d: jp 0x99565f */
  if (pf) goto L_99565f;
L_99564f: /* 99564f: mov eax, dword ptr [esp + esi*4 + 0x58] */
  eax = R32((uint32_t)(esp + esi*4 + 0x58u));
/* 995653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995655: je 0x99565f */
  if (zf) goto L_99565f;
L_995657: /* 995657: mov dword ptr [ecx], 7 */
  W32((uint32_t)(ecx), 0x7u);
/* 99565d: jmp 0x995670 */
  goto L_995670;
L_99565f: /* 99565f: mov eax, esi */
  eax = esi;
/* 995661: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 995664: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995666: mov eax, dword ptr [esp + eax*4 + 0xa8] */
  eax = R32((uint32_t)(esp + eax*4 + 0xa8u));
/* 99566d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 99566f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_995670: /* 995670: mov eax, dword ptr [esp + 0x1ec] */
  eax = R32((uint32_t)(esp + 0x1ecu));
/* 995677: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 995679: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99567a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99567d: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99567f: jl 0x995620 */
  if ((sf != of)) goto L_995620;
L_995681: /* 995681: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995683: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 995684: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995685: add esp, 0x1d8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99568b: ret  */
  esp += 4; SPILL(); return;
}

void f_995690(void) {
  LOAD_REGS();
L_995690: /* 995690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 995694: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995695: mov esi, ecx */
  esi = ecx;
/* 995697: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 99569a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99569d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99569e: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x9956a3u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 9956a3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9956a6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9956a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9956ab: xor eax, eax */
  eax = 0;
/* 9956ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9956af: jle 0x9956c2 */
  if ((zf || sf != of)) goto L_9956c2;
L_9956b1: /* 9956b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9956b3: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 9956ba: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9956bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9956be: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9956c0: jl 0x9956b1 */
  if ((sf != of)) goto L_9956b1;
L_9956c2: /* 9956c2: mov eax, esi */
  eax = esi;
/* 9956c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9956c5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9956d0(void) {
  LOAD_REGS();
L_9956d0: /* 9956d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9956d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9956d3: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9956d8u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9956d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9956d9: ret  */
  esp += 4; SPILL(); return;
}

void f_9956e0(void) {
  LOAD_REGS();
L_9956e0: /* 9956e0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9956e3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9956e9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9956eb: jle 0x995724 */
  if ((zf || sf != of)) goto L_995724;
L_9956ed: /* 9956ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9956ef: nop  */
L_9956f0: /* 9956f0: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 9956f2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9956f5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9956f6: jne 0x9956f0 */
  if (!zf) goto L_9956f0;
L_9956f8: /* 9956f8: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9956fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995700: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995703: jnp 0x995724 */
  if (!pf) goto L_995724;
L_995705: /* 995705: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 99570b: xor eax, eax */
  eax = 0;
/* 99570d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_995710: /* 995710: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 995712: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 995714: fmul dword ptr [edx + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax*4)));
/* 995717: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 99571a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99571b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 99571d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 995720: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995722: jl 0x995710 */
  if ((sf != of)) goto L_995710;
L_995724: /* 995724: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995726: ret  */
  esp += 4; SPILL(); return;
}

void f_995730(void) {
  LOAD_REGS();
L_995730: /* 995730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 995734: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995735: mov esi, ecx */
  esi = ecx;
/* 995737: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99573b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 99573e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 995742: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 995745: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 995748: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 99574b: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 995752: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995753: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x995758u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 995758: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 99575a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99575d: mov eax, esi */
  eax = esi;
/* 99575f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995760: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_995770(void) {
  LOAD_REGS();
L_995770: /* 995770: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 995772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 995773: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x995778u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 995778: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 995779: ret  */
  esp += 4; SPILL(); return;
}

void f_995780(void) {
  LOAD_REGS();
L_995780: /* 995780: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 995786: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 995788: push 0x9da51c */
  { uint32_t v = 0x9da51cu; esp -= 4; W32(esp, v); }
/* 99578d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99578e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 995792: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 995799: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99579a: mov esi, ecx */
  esi = ecx;
/* 99579c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9957a0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9957a2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9957a4: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 9957a7: call 0x6c242d */
  esp -= 4; W32(esp, 0x9957acu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9957ac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9957af: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9957b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9957b5: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 9957bd: je 0x9957d0 */
  if (zf) goto L_9957d0;
L_9957bf: /* 9957bf: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9957c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9957c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9957c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9957c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9957c7: mov ecx, eax */
  ecx = eax;
/* 9957c9: call 0x995730 */
  esp -= 4; W32(esp, 0x9957ceu); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 9957ce: jmp 0x9957d2 */
  goto L_9957d2;
L_9957d0: /* 9957d0: xor eax, eax */
  eax = 0;
L_9957d2: /* 9957d2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9957d4: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 9957dc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 9957df: call 0x6c242d */
  esp -= 4; W32(esp, 0x9957e4u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9957e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9957e7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9957eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9957ed: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* 9957f5: je 0x995808 */
  if (zf) goto L_995808;
L_9957f7: /* 9957f7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9957fa: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9957fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9957fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9957fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9957ff: mov ecx, eax */
  ecx = eax;
/* 995801: call 0x995730 */
  esp -= 4; W32(esp, 0x995806u); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 995806: jmp 0x99580a */
  goto L_99580a;
L_995808: /* 995808: xor eax, eax */
  eax = 0;
L_99580a: /* 99580a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 99580c: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 995814: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 995817: call 0x6c242d */
  esp -= 4; W32(esp, 0x99581cu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 99581c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99581f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 995823: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995825: mov dword ptr [esp + 0xc], 2 */
  W32((uint32_t)(esp + 0xcu), 0x2u);
/* 99582d: je 0x995840 */
  if (zf) goto L_995840;
L_99582f: /* 99582f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 995832: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 995834: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 995835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995837: mov ecx, eax */
  ecx = eax;
/* 995839: call 0x995730 */
  esp -= 4; W32(esp, 0x99583eu); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 99583e: jmp 0x995842 */
  goto L_995842;
L_995840: /* 995840: xor eax, eax */
  eax = 0;
L_995842: /* 995842: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 995844: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 99584c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 99584f: call 0x6c242d */
  esp -= 4; W32(esp, 0x995854u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 995854: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 995857: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 99585b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99585d: mov dword ptr [esp + 0xc], 3 */
  W32((uint32_t)(esp + 0xcu), 0x3u);
/* 995865: je 0x995878 */
  if (zf) goto L_995878;
L_995867: /* 995867: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 99586a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 99586c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99586d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99586e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99586f: mov ecx, eax */
  ecx = eax;
/* 995871: call 0x995730 */
  esp -= 4; W32(esp, 0x995876u); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 995876: jmp 0x99587a */
  goto L_99587a;
L_995878: /* 995878: xor eax, eax */
  eax = 0;
L_99587a: /* 99587a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 99587e: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 995881: mov dword ptr [esi + 8], 4 */
  W32((uint32_t)(esi + 0x8u), 0x4u);
/* 995888: mov eax, esi */
  eax = esi;
/* 99588a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 995891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995892: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 995895: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9958a0(void) {
  LOAD_REGS();
L_9958a0: /* 9958a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9958a1: mov esi, ecx */
  esi = ecx;
/* 9958a3: call 0x995770 */
  esp -= 4; W32(esp, 0x9958a8u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9958a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9958ad: je 0x9958b8 */
  if (zf) goto L_9958b8;
L_9958af: /* 9958af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9958b0: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9958b5u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9958b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9958b8: /* 9958b8: mov eax, esi */
  eax = esi;
/* 9958ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9958bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9958c0(void) {
  LOAD_REGS();
L_9958c0: /* 9958c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9958c2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9958c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_9958c7: /* 9958c7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9958c9: jl 0x995903 */
  if ((sf != of)) goto L_995903;
L_9958cb: /* 9958cb: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 9958ce: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9958d0: jg 0x995905 */
  if ((!zf && sf == of)) goto L_995905;
L_9958d2: /* 9958d2: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 9958d5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9958d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9958da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9958e0: /* 9958e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9958e2: jl 0x995913 */
  if ((sf != of)) goto L_995913;
L_9958e4: /* 9958e4: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* 9958e7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9958e9: jg 0x995915 */
  if ((!zf && sf == of)) goto L_995915;
L_9958eb: /* 9958eb: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9958ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9958ee: jl 0x9958f3 */
  if ((sf != of)) goto L_9958f3;
L_9958f0: /* 9958f0: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_9958f3: /* 9958f3: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9958f5: jl 0x9958fa */
  if ((sf != of)) goto L_9958fa;
L_9958f7: /* 9958f7: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_9958fa: /* 9958fa: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 9958fd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9958ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995900: ret 8 */
  esp += 12; SPILL(); return;
L_995903: /* 995903: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_995905: /* 995905: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995907: jl 0x9958c7 */
  if ((sf != of)) goto L_9958c7;
L_995909: /* 995909: lea esi, [eax + eax] */
  esi = (uint32_t)(eax + eax);
/* 99590c: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 99590e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99590f: mov edx, esi */
  edx = esi;
/* 995911: jmp 0x9958c7 */
  goto L_9958c7;
L_995913: /* 995913: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_995915: /* 995915: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995917: jl 0x9958e0 */
  if ((sf != of)) goto L_9958e0;
L_995919: /* 995919: lea edi, [esi + esi] */
  edi = (uint32_t)(esi + esi);
/* 99591c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 99591e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 99591f: mov ecx, edi */
  ecx = edi;
/* 995921: jmp 0x9958e0 */
  goto L_9958e0;
}

void f_995930(void) {
  LOAD_REGS();
L_995930: /* 995930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 995934: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995936: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 99593a: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 99593d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99593e: mov esi, eax */
  esi = eax;
/* 995940: jge 0x995944 */
  if ((sf == of)) goto L_995944;
L_995942: /* 995942: xor esi, esi */
  esi = 0;
L_995944: /* 995944: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995946: jge 0x99594a */
  if ((sf == of)) goto L_99594a;
L_995948: /* 995948: xor edx, edx */
  edx = 0;
L_99594a: /* 99594a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 99594c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99594e: jl 0x995953 */
  if ((sf != of)) goto L_995953;
L_995950: /* 995950: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_995953: /* 995953: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 995956: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995958: jl 0x99595d */
  if ((sf != of)) goto L_99595d;
L_99595a: /* 99595a: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
L_99595d: /* 99595d: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 995960: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995962: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995963: ret 8 */
  esp += 12; SPILL(); return;
}

void f_995970(void) {
  LOAD_REGS();
L_995970: /* 995970: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 995973: jmp 0x9958c0 */
  SPILL(); f_9958c0(); return;
}

void f_995980(void) {
  LOAD_REGS();
L_995980: /* 995980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 995982: push 0x9da53b */
  { uint32_t v = 0x9da53bu; esp -= 4; W32(esp, v); }
/* 995987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 99598d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99598e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 995995: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 995998: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995999: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99599a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99599b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99599c: mov edi, ecx */
  edi = ecx;
/* 99599e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9959a0: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 9959a4: call 0x6c242d */
  esp -= 4; W32(esp, 0x9959a9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9959a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9959ac: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9959b0: xor ebp, ebp */
  ebp = 0;
/* 9959b2: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9959b4: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 9959b8: je 0x9959d3 */
  if (zf) goto L_9959d3;
L_9959ba: /* 9959ba: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9959bd: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 9959c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9959c1: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 9959c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9959c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9959c6: mov ecx, eax */
  ecx = eax;
/* 9959c8: call 0x995730 */
  esp -= 4; W32(esp, 0x9959cdu); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 9959cd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9959d1: jmp 0x9959d7 */
  goto L_9959d7;
L_9959d3: /* 9959d3: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
L_9959d7: /* 9959d7: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 9959db: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 9959de: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9959df: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9959e1: mov ecx, eax */
  ecx = eax;
/* 9959e3: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 9959e5: mov eax, 1 */
  eax = 0x1u;
/* 9959ea: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9959ec: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9959f0: cmp dword ptr [edi + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9959f3: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 9959f7: jle 0x995adb */
  if ((zf || sf != of)) goto L_995adb;
L_9959fd: /* 9959fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
L_995a00: /* 995a00: xor edx, edx */
  edx = 0;
/* 995a02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995a04: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 995a08: jle 0x995acb */
  if ((zf || sf != of)) goto L_995acb;
L_995a0e: /* 995a0e: mov edi, edi */
  edi = edi;
L_995a10: /* 995a10: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 995a14: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* 995a17: mov eax, edx */
  eax = edx;
/* 995a19: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 995a1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995a1d: mov esi, ebp */
  esi = ebp;
/* 995a1f: jge 0x995a23 */
  if ((sf == of)) goto L_995a23;
L_995a21: /* 995a21: xor eax, eax */
  eax = 0;
L_995a23: /* 995a23: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995a25: jge 0x995a29 */
  if ((sf == of)) goto L_995a29;
L_995a27: /* 995a27: xor esi, esi */
  esi = 0;
L_995a29: /* 995a29: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 995a2b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995a2d: jl 0x995a32 */
  if ((sf != of)) goto L_995a32;
L_995a2f: /* 995a2f: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_995a32: /* 995a32: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 995a35: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995a37: jl 0x995a3c */
  if ((sf != of)) goto L_995a3c;
L_995a39: /* 995a39: lea esi, [ebx - 1] */
  esi = (uint32_t)(ebx + 0xffffffffu);
L_995a3c: /* 995a3c: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 995a3f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 995a41: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 995a45: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 995a48: xor esi, esi */
  esi = 0;
/* 995a4a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995a4c: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 995a50: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 995a58: jle 0x995aa8 */
  if ((zf || sf != of)) goto L_995aa8;
L_995a5a: /* 995a5a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 995a5c: mov ebp, dword ptr [edi + 0xc] */
  ebp = R32((uint32_t)(edi + 0xcu));
/* 995a5f: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 995a61: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 995a65: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995a67: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 995a6b: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 995a6f: nop  */
L_995a70: /* 995a70: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 995a74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 995a78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995a79: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995a7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 995a7c: mov ecx, ebp */
  ecx = ebp;
/* 995a7e: call 0x9958c0 */
  esp -= 4; W32(esp, 0x995a83u); SPILL(); f_9958c0(); if (g_unwind) return; RELOAD();
/* 995a83: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 995a87: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 995a8a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 995a8b: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 995a8d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995a90: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995a92: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 995a96: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 995a9a: jl 0x995a70 */
  if ((sf != of)) goto L_995a70;
L_995a9c: /* 995a9c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 995aa0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 995aa4: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_995aa8: /* 995aa8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 995aac: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 995ab0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 995ab2: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 995ab6: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 995ab9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 995abc: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995abf: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995ac1: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 995ac5: jl 0x995a10 */
  if ((sf != of)) goto L_995a10;
L_995acb: /* 995acb: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 995ace: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 995acf: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995ad1: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 995ad5: jl 0x995a00 */
  if ((sf != of)) goto L_995a00;
L_995adb: /* 995adb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 995ade: xor ebp, ebp */
  ebp = 0;
/* 995ae0: test eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995ae5: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 995ae9: jle 0x995bdd */
  if ((zf || sf != of)) goto L_995bdd;
L_995aef: /* 995aef: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
L_995af2: /* 995af2: xor edx, edx */
  edx = 0;
/* 995af4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995af6: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 995afa: jle 0x995bcb */
  if ((zf || sf != of)) goto L_995bcb;
L_995b00: /* 995b00: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 995b04: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 995b07: mov ecx, edx */
  ecx = edx;
/* 995b09: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 995b0b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995b0d: mov esi, ebp */
  esi = ebp;
/* 995b0f: jge 0x995b13 */
  if ((sf == of)) goto L_995b13;
L_995b11: /* 995b11: xor esi, esi */
  esi = 0;
L_995b13: /* 995b13: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995b15: jge 0x995b19 */
  if ((sf == of)) goto L_995b19;
L_995b17: /* 995b17: xor ecx, ecx */
  ecx = 0;
L_995b19: /* 995b19: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 995b1b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995b1d: jl 0x995b22 */
  if ((sf != of)) goto L_995b22;
L_995b1f: /* 995b1f: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_995b22: /* 995b22: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 995b25: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995b27: jl 0x995b2c */
  if ((sf != of)) goto L_995b2c;
L_995b29: /* 995b29: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
L_995b2c: /* 995b2c: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 995b2f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 995b33: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 995b36: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995b38: xor esi, esi */
  esi = 0;
/* 995b3a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995b3c: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 995b40: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 995b48: jle 0x995ba8 */
  if ((zf || sf != of)) goto L_995ba8;
L_995b4a: /* 995b4a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 995b4e: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 995b51: mov ecx, eax */
  ecx = eax;
/* 995b53: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 995b55: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 995b59: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 995b5b: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 995b5f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 995b63: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995b65: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 995b69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_995b70: /* 995b70: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 995b74: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 995b78: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 995b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995b7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 995b7c: mov ecx, ebp */
  ecx = ebp;
/* 995b7e: call 0x9958c0 */
  esp -= 4; W32(esp, 0x995b83u); SPILL(); f_9958c0(); if (g_unwind) return; RELOAD();
/* 995b83: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 995b87: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 995b8a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 995b8b: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 995b8d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995b90: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995b92: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 995b96: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 995b9a: jl 0x995b70 */
  if ((sf != of)) goto L_995b70;
L_995b9c: /* 995b9c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 995ba0: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 995ba4: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_995ba8: /* 995ba8: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 995bac: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 995bb0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 995bb2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 995bb6: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 995bb9: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 995bbc: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995bbf: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995bc1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 995bc5: jl 0x995b00 */
  if ((sf != of)) goto L_995b00;
L_995bcb: /* 995bcb: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 995bce: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 995bcf: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 995bd1: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995bd3: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 995bd7: jl 0x995af2 */
  if ((sf != of)) goto L_995af2;
L_995bdd: /* 995bdd: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 995be1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995be3: je 0x995bf5 */
  if (zf) goto L_995bf5;
L_995be5: /* 995be5: mov ecx, esi */
  ecx = esi;
/* 995be7: call 0x995770 */
  esp -= 4; W32(esp, 0x995becu); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 995bec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995bed: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x995bf2u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 995bf2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_995bf5: /* 995bf5: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 995bf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995bfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995bfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 995bfc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995bfd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 995c04: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 995c07: ret 8 */
  esp += 12; SPILL(); return;
}

void f_995c10(void) {
  LOAD_REGS();
L_995c10: /* 995c10: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 995c13: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995c14: xor ebp, ebp */
  ebp = 0;
/* 995c16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995c18: jle 0x995c8f */
  if ((zf || sf != of)) goto L_995c8f;
L_995c1a: /* 995c1a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 995c1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995c1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995c1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_995c20: /* 995c20: xor edi, edi */
  edi = 0;
/* 995c22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995c24: jle 0x995c84 */
  if ((zf || sf != of)) goto L_995c84;
L_995c26: /* 995c26: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995c28: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* 995c2b: mov edx, ebp */
  edx = ebp;
/* 995c2d: mov esi, edi */
  esi = edi;
/* 995c2f: jge 0x995c33 */
  if ((sf == of)) goto L_995c33;
L_995c31: /* 995c31: xor esi, esi */
  esi = 0;
L_995c33: /* 995c33: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995c35: jge 0x995c39 */
  if ((sf == of)) goto L_995c39;
L_995c37: /* 995c37: xor edx, edx */
  edx = 0;
L_995c39: /* 995c39: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 995c3b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995c3d: jl 0x995c42 */
  if ((sf != of)) goto L_995c42;
L_995c3f: /* 995c3f: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_995c42: /* 995c42: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 995c45: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995c47: jl 0x995c4c */
  if ((sf != of)) goto L_995c4c;
L_995c49: /* 995c49: lea edx, [ebx - 1] */
  edx = (uint32_t)(ebx + 0xffffffffu);
L_995c4c: /* 995c4c: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 995c4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 995c51: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995c53: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 995c56: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 995c58: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 995c5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995c5e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995c61: jp 0x995c69 */
  if (pf) goto L_995c69;
L_995c63: /* 995c63: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995c65: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_995c69: /* 995c69: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 995c6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995c6f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 995c72: jne 0x995c7a */
  if (!zf) goto L_995c7a;
L_995c74: /* 995c74: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995c76: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_995c7a: /* 995c7a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 995c7c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 995c7f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 995c80: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995c82: jl 0x995c26 */
  if ((sf != of)) goto L_995c26;
L_995c84: /* 995c84: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 995c87: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 995c88: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995c8a: jl 0x995c20 */
  if ((sf != of)) goto L_995c20;
L_995c8c: /* 995c8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995c8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995c8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_995c8f: /* 995c8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 995c90: ret 8 */
  esp += 12; SPILL(); return;
}

void f_995ca0(void) {
  LOAD_REGS();
L_995ca0: /* 995ca0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995ca1: mov ebx, ecx */
  ebx = ecx;
/* 995ca3: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 995ca6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995ca7: xor ebp, ebp */
  ebp = 0;
/* 995ca9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995cab: jle 0x995d07 */
  if ((zf || sf != of)) goto L_995d07;
L_995cad: /* 995cad: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 995cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995cb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_995cb2: /* 995cb2: xor edi, edi */
  edi = 0;
/* 995cb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995cb6: jle 0x995cfd */
  if ((zf || sf != of)) goto L_995cfd;
L_995cb8: /* 995cb8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995cba: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 995cbd: mov ecx, ebp */
  ecx = ebp;
/* 995cbf: mov edx, edi */
  edx = edi;
/* 995cc1: jge 0x995cc5 */
  if ((sf == of)) goto L_995cc5;
L_995cc3: /* 995cc3: xor edx, edx */
  edx = 0;
L_995cc5: /* 995cc5: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995cc7: jge 0x995ccb */
  if ((sf == of)) goto L_995ccb;
L_995cc9: /* 995cc9: xor ecx, ecx */
  ecx = 0;
L_995ccb: /* 995ccb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 995ccd: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995ccf: jl 0x995cd4 */
  if ((sf != of)) goto L_995cd4;
L_995cd1: /* 995cd1: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_995cd4: /* 995cd4: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 995cd7: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995cd9: jl 0x995cde */
  if ((sf != of)) goto L_995cde;
L_995cdb: /* 995cdb: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_995cde: /* 995cde: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 995ce1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 995ce3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995ce5: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 995ce8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 995cea: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 995cee: call 0x99d032 */
  esp -= 4; W32(esp, 0x995cf3u); SPILL(); hle_CIpow(); RELOAD();
/* 995cf3: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 995cf5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 995cf8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 995cf9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995cfb: jl 0x995cb8 */
  if ((sf != of)) goto L_995cb8;
L_995cfd: /* 995cfd: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 995d00: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 995d01: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995d03: jl 0x995cb2 */
  if ((sf != of)) goto L_995cb2;
L_995d05: /* 995d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_995d07: /* 995d07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 995d08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995d09: ret 8 */
  esp += 12; SPILL(); return;
}

void f_995d10(void) {
  LOAD_REGS();
L_995d10: /* 995d10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995d11: mov ebx, ecx */
  ebx = ecx;
/* 995d13: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 995d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 995d17: xor edi, edi */
  edi = 0;
/* 995d19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995d1b: jle 0x995d45 */
  if ((zf || sf != of)) goto L_995d45;
L_995d1d: /* 995d1d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995d1e: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 995d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995d23: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 995d26: sub ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_995d28: /* 995d28: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 995d2c: mov ecx, dword ptr [esi + ebp] */
  ecx = R32((uint32_t)(esi + ebp));
/* 995d2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 995d30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995d31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 995d33: call 0x995980 */
  esp -= 4; W32(esp, 0x995d38u); SPILL(); f_995980(); if (g_unwind) return; RELOAD();
/* 995d38: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 995d3b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 995d3c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 995d3f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995d41: jl 0x995d28 */
  if ((sf != of)) goto L_995d28;
L_995d43: /* 995d43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995d44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_995d45: /* 995d45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995d46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995d47: ret 8 */
  esp += 12; SPILL(); return;
}

void f_995d50(void) {
  LOAD_REGS();
L_995d50: /* 995d50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995d51: mov ebx, ecx */
  ebx = ecx;
/* 995d53: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 995d56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995d57: xor esi, esi */
  esi = 0;
/* 995d59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995d5b: jle 0x995d80 */
  if ((zf || sf != of)) goto L_995d80;
L_995d5d: /* 995d5d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995d5e: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 995d62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 995d63: lea edi, [ebx + 0xc] */
  edi = (uint32_t)(ebx + 0xcu);
L_995d66: /* 995d66: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 995d6a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 995d6c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 995d6e: call 0x995c10 */
  esp -= 4; W32(esp, 0x995d73u); SPILL(); f_995c10(); if (g_unwind) return; RELOAD();
/* 995d73: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 995d76: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 995d77: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995d7a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995d7c: jl 0x995d66 */
  if ((sf != of)) goto L_995d66;
L_995d7e: /* 995d7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995d7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_995d80: /* 995d80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995d81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995d82: ret 8 */
  esp += 12; SPILL(); return;
}

void f_995d90(void) {
  LOAD_REGS();
L_995d90: /* 995d90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995d91: mov ebx, ecx */
  ebx = ecx;
/* 995d93: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 995d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995d97: xor esi, esi */
  esi = 0;
/* 995d99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995d9b: jle 0x995dbe */
  if ((zf || sf != of)) goto L_995dbe;
L_995d9d: /* 995d9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 995d9e: lea edi, [ebx + 0xc] */
  edi = (uint32_t)(ebx + 0xcu);
L_995da1: /* 995da1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 995da5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 995da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 995daa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995dab: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 995dad: call 0x995ca0 */
  esp -= 4; W32(esp, 0x995db2u); SPILL(); f_995ca0(); if (g_unwind) return; RELOAD();
/* 995db2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 995db5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 995db6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995db9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995dbb: jl 0x995da1 */
  if ((sf != of)) goto L_995da1;
L_995dbd: /* 995dbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_995dbe: /* 995dbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995dbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995dc0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_995dd0(void) {
  LOAD_REGS();
L_995dd0: /* 995dd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 995dd2: push 0x9da55b */
  { uint32_t v = 0x9da55bu; esp -= 4; W32(esp, v); }
/* 995dd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 995ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 995dde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 995de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995de6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995de7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995de8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 995de9: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 995deb: mov esi, ecx */
  esi = ecx;
/* 995ded: call 0x6c242d */
  esp -= 4; W32(esp, 0x995df2u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 995df2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 995df5: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 995df9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995dfb: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 995e03: je 0x995e15 */
  if (zf) goto L_995e15;
L_995e05: /* 995e05: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 995e08: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 995e0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995e0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 995e0c: mov ecx, eax */
  ecx = eax;
/* 995e0e: call 0x995780 */
  esp -= 4; W32(esp, 0x995e13u); SPILL(); f_995780(); if (g_unwind) return; RELOAD();
/* 995e13: jmp 0x995e17 */
  goto L_995e17;
L_995e15: /* 995e15: xor eax, eax */
  eax = 0;
L_995e17: /* 995e17: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 995e1a: imul edx, dword ptr [esi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi)));
  edx = (uint32_t)r;
  }
/* 995e1d: xor ecx, ecx */
  ecx = 0;
/* 995e1f: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995e22: jl 0x995f69 */
  if ((sf != of)) goto L_995f69;
L_995e28: /* 995e28: mov edi, 3 */
  edi = 0x3u;
/* 995e2d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_995e2e: /* 995e2e: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 995e31: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995e33: mov ebx, dword ptr [ebx + ecx*4] */
  ebx = R32((uint32_t)(ebx + ecx*4));
/* 995e36: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 995e39: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995e3c: mov dword ptr [ebp + ecx*4], ebx */
  W32((uint32_t)(ebp + ecx*4), ebx);
/* 995e40: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 995e43: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995e45: mov ebx, dword ptr [ebx + ecx*4] */
  ebx = R32((uint32_t)(ebx + ecx*4));
/* 995e48: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 995e4b: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995e4e: mov dword ptr [ebp + ecx*4], ebx */
  W32((uint32_t)(ebp + ecx*4), ebx);
/* 995e52: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 995e55: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995e57: mov ebx, dword ptr [ebx + ecx*4] */
  ebx = R32((uint32_t)(ebx + ecx*4));
/* 995e5a: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 995e5d: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995e60: mov dword ptr [ebp + ecx*4], ebx */
  W32((uint32_t)(ebp + ecx*4), ebx);
/* 995e64: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 995e67: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995e69: mov ebx, dword ptr [ebx + ecx*4] */
  ebx = R32((uint32_t)(ebx + ecx*4));
/* 995e6c: mov ebp, dword ptr [eax + 0x18] */
  ebp = R32((uint32_t)(eax + 0x18u));
/* 995e6f: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995e72: mov dword ptr [ebp + ecx*4], ebx */
  W32((uint32_t)(ebp + ecx*4), ebx);
/* 995e76: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 995e79: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995e7b: mov ebx, dword ptr [ebx + ecx*4 + 4] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x4u));
/* 995e7f: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 995e82: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995e85: mov dword ptr [ebp + ecx*4 + 4], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x4u), ebx);
/* 995e89: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 995e8c: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995e8e: mov ebx, dword ptr [ebx + ecx*4 + 4] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x4u));
/* 995e92: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 995e95: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995e98: mov dword ptr [ebp + ecx*4 + 4], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x4u), ebx);
/* 995e9c: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 995e9f: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995ea1: mov ebx, dword ptr [ebx + ecx*4 + 4] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x4u));
/* 995ea5: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 995ea8: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995eab: mov dword ptr [ebp + ecx*4 + 4], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x4u), ebx);
/* 995eaf: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 995eb2: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995eb4: mov ebx, dword ptr [ebx + ecx*4 + 4] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x4u));
/* 995eb8: mov ebp, dword ptr [eax + 0x18] */
  ebp = R32((uint32_t)(eax + 0x18u));
/* 995ebb: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995ebe: mov dword ptr [ebp + ecx*4 + 4], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x4u), ebx);
/* 995ec2: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 995ec5: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995ec7: mov ebx, dword ptr [ebx + ecx*4 + 8] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x8u));
/* 995ecb: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 995ece: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995ed1: mov dword ptr [ebp + ecx*4 + 8], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x8u), ebx);
/* 995ed5: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 995ed8: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995eda: mov ebx, dword ptr [ebx + ecx*4 + 8] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x8u));
/* 995ede: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 995ee1: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995ee4: mov dword ptr [ebp + ecx*4 + 8], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x8u), ebx);
/* 995ee8: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 995eeb: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995eed: mov ebx, dword ptr [ebx + ecx*4 + 8] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x8u));
/* 995ef1: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 995ef4: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995ef7: mov dword ptr [ebp + ecx*4 + 8], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x8u), ebx);
/* 995efb: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 995efe: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f00: mov ebx, dword ptr [ebx + ecx*4 + 8] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x8u));
/* 995f04: mov ebp, dword ptr [eax + 0x18] */
  ebp = R32((uint32_t)(eax + 0x18u));
/* 995f07: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995f0a: mov dword ptr [ebp + ecx*4 + 8], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0x8u), ebx);
/* 995f0e: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 995f11: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f13: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 995f16: mov ebx, dword ptr [ebx + ecx*4 + 0xc] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0xcu));
/* 995f1a: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995f1d: mov dword ptr [ebp + ecx*4 + 0xc], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0xcu), ebx);
/* 995f21: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 995f24: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f26: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 995f29: mov ebx, dword ptr [ebx + ecx*4 + 0xc] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0xcu));
/* 995f2d: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995f30: mov dword ptr [ebp + ecx*4 + 0xc], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0xcu), ebx);
/* 995f34: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 995f37: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f39: mov ebx, dword ptr [ebx + ecx*4 + 0xc] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0xcu));
/* 995f3d: mov ebp, dword ptr [eax + 0x14] */
  ebp = R32((uint32_t)(eax + 0x14u));
/* 995f40: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995f43: mov dword ptr [ebp + ecx*4 + 0xc], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0xcu), ebx);
/* 995f47: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 995f4a: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f4c: mov ebp, dword ptr [eax + 0x18] */
  ebp = R32((uint32_t)(eax + 0x18u));
/* 995f4f: mov ebx, dword ptr [ebx + ecx*4 + 0xc] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0xcu));
/* 995f53: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 995f56: mov dword ptr [ebp + ecx*4 + 0xc], ebx */
  W32((uint32_t)(ebp + ecx*4 + 0xcu), ebx);
/* 995f5a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995f5d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 995f60: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995f62: jl 0x995e2e */
  if ((sf != of)) goto L_995e2e;
L_995f68: /* 995f68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_995f69: /* 995f69: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995f6b: jge 0x995fb5 */
  if ((sf == of)) goto L_995fb5;
L_995f6d: /* 995f6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_995f70: /* 995f70: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 995f73: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 995f75: mov edi, dword ptr [edi + ecx*4] */
  edi = R32((uint32_t)(edi + ecx*4));
/* 995f78: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 995f7b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f7d: mov dword ptr [ebx + ecx*4], edi */
  W32((uint32_t)(ebx + ecx*4), edi);
/* 995f80: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* 995f83: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 995f85: mov edi, dword ptr [edi + ecx*4] */
  edi = R32((uint32_t)(edi + ecx*4));
/* 995f88: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 995f8b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f8d: mov dword ptr [ebx + ecx*4], edi */
  W32((uint32_t)(ebx + ecx*4), edi);
/* 995f90: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 995f93: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 995f95: mov edi, dword ptr [edi + ecx*4] */
  edi = R32((uint32_t)(edi + ecx*4));
/* 995f98: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 995f9b: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995f9d: mov dword ptr [ebx + ecx*4], edi */
  W32((uint32_t)(ebx + ecx*4), edi);
/* 995fa0: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 995fa3: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 995fa5: mov ebx, dword ptr [eax + 0x18] */
  ebx = R32((uint32_t)(eax + 0x18u));
/* 995fa8: mov edi, dword ptr [edi + ecx*4] */
  edi = R32((uint32_t)(edi + ecx*4));
/* 995fab: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 995fad: mov dword ptr [ebx + ecx*4], edi */
  W32((uint32_t)(ebx + ecx*4), edi);
/* 995fb0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 995fb1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995fb3: jl 0x995f70 */
  if ((sf != of)) goto L_995f70;
L_995fb5: /* 995fb5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 995fb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995fbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995fbc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 995fc3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 995fc6: ret  */
  esp += 4; SPILL(); return;
}

void f_995fd0(void) {
  LOAD_REGS();
L_995fd0: /* 995fd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995fd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995fd2: mov ebp, ecx */
  ebp = ecx;
/* 995fd4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 995fd7: xor ebx, ebx */
  ebx = 0;
/* 995fd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995fdb: jle 0x996005 */
  if ((zf || sf != of)) goto L_996005;
L_995fdd: /* 995fdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995fde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 995fdf: lea edi, [ebp + 0xc] */
  edi = (uint32_t)(ebp + 0xcu);
L_995fe2: /* 995fe2: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 995fe4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995fe6: je 0x995ff8 */
  if (zf) goto L_995ff8;
L_995fe8: /* 995fe8: mov ecx, esi */
  ecx = esi;
/* 995fea: call 0x995770 */
  esp -= 4; W32(esp, 0x995fefu); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 995fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995ff0: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x995ff5u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 995ff5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_995ff8: /* 995ff8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 995ffb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 995ffc: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995fff: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996001: jl 0x995fe2 */
  if ((sf != of)) goto L_995fe2;
L_996003: /* 996003: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996004: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_996005: /* 996005: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 996006: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996007: ret  */
  esp += 4; SPILL(); return;
}

void f_996010(void) {
  LOAD_REGS();
L_996010: /* 996010: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 996012: push 0x9da59c */
  { uint32_t v = 0x9da59cu; esp -= 4; W32(esp, v); }
/* 996017: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 99601d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99601e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 996025: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 996028: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996029: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99602a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99602b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99602c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 99602e: mov ebx, ecx */
  ebx = ecx;
/* 996030: call 0x6c242d */
  esp -= 4; W32(esp, 0x996035u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 996035: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996038: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 99603c: xor edi, edi */
  edi = 0;
/* 99603e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996040: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 996044: je 0x99605d */
  if (zf) goto L_99605d;
L_996046: /* 996046: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 996049: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 99604c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99604d: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 996050: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996051: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996052: mov ecx, eax */
  ecx = eax;
/* 996054: call 0x995730 */
  esp -= 4; W32(esp, 0x996059u); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 996059: mov ebp, eax */
  ebp = eax;
/* 99605b: jmp 0x99605f */
  goto L_99605f;
L_99605d: /* 99605d: xor ebp, ebp */
  ebp = 0;
L_99605f: /* 99605f: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 996062: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 996064: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 996068: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 99606c: call 0x6c242d */
  esp -= 4; W32(esp, 0x996071u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 996071: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996074: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 996078: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99607a: mov dword ptr [esp + 0x4c], 1 */
  W32((uint32_t)(esp + 0x4cu), 0x1u);
/* 996082: je 0x99609d */
  if (zf) goto L_99609d;
L_996084: /* 996084: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 996087: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 99608a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99608b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 99608e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99608f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996090: mov ecx, eax */
  ecx = eax;
/* 996092: call 0x995730 */
  esp -= 4; W32(esp, 0x996097u); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 996097: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 99609b: jmp 0x9960a1 */
  goto L_9960a1;
L_99609d: /* 99609d: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
L_9960a1: /* 9960a1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9960a3: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 9960a7: call 0x6c242d */
  esp -= 4; W32(esp, 0x9960acu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9960ac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9960af: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9960b3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9960b5: mov dword ptr [esp + 0x4c], 2 */
  W32((uint32_t)(esp + 0x4cu), 0x2u);
/* 9960bd: je 0x9960d8 */
  if (zf) goto L_9960d8;
L_9960bf: /* 9960bf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9960c2: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 9960c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9960c6: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9960c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9960ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9960cb: mov ecx, eax */
  ecx = eax;
/* 9960cd: call 0x995730 */
  esp -= 4; W32(esp, 0x9960d2u); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 9960d2: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9960d6: jmp 0x9960dc */
  goto L_9960dc;
L_9960d8: /* 9960d8: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
L_9960dc: /* 9960dc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9960de: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 9960e2: call 0x6c242d */
  esp -= 4; W32(esp, 0x9960e7u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9960e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9960ea: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9960ee: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9960f0: mov dword ptr [esp + 0x4c], 3 */
  W32((uint32_t)(esp + 0x4cu), 0x3u);
/* 9960f8: je 0x996113 */
  if (zf) goto L_996113;
L_9960fa: /* 9960fa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9960fd: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 996100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996101: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 996104: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996105: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996106: mov ecx, eax */
  ecx = eax;
/* 996108: call 0x995730 */
  esp -= 4; W32(esp, 0x99610du); SPILL(); f_995730(); if (g_unwind) return; RELOAD();
/* 99610d: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 996111: jmp 0x996117 */
  goto L_996117;
L_996113: /* 996113: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
L_996117: /* 996117: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 99611a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99611d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99611f: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 996123: jle 0x996127 */
  if ((zf || sf != of)) goto L_996127;
L_996125: /* 996125: mov eax, ecx */
  eax = ecx;
L_996127: /* 996127: lea esi, [eax*4] */
  esi = (uint32_t)(eax*4);
/* 99612e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99612f: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x996134u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 996134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996135: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 996139: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x99613eu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 99613e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99613f: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 996143: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x996148u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 996148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996149: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 99614d: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x996152u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 996152: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 996156: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 996159: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99615c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99615e: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 996162: jle 0x996275 */
  if ((zf || sf != of)) goto L_996275;
L_996168: /* 996168: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 99616b: jmp 0x996170 */
  goto L_996170;
L_996170: /* 996170: xor ecx, ecx */
  ecx = 0;
/* 996172: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996174: jle 0x9961d3 */
  if ((zf || sf != of)) goto L_9961d3;
L_996176: /* 996176: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 99617a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99617e: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996180: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_996184: /* 996184: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996186: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99618a: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 99618d: mov esi, ecx */
  esi = ecx;
/* 99618f: jge 0x996193 */
  if ((sf == of)) goto L_996193;
L_996191: /* 996191: xor esi, esi */
  esi = 0;
L_996193: /* 996193: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996195: jge 0x996199 */
  if ((sf == of)) goto L_996199;
L_996197: /* 996197: xor edx, edx */
  edx = 0;
L_996199: /* 996199: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 99619c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99619e: jl 0x9961a3 */
  if ((sf != of)) goto L_9961a3;
L_9961a0: /* 9961a0: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_9961a3: /* 9961a3: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9961a6: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9961a8: jl 0x9961ad */
  if ((sf != of)) goto L_9961ad;
L_9961aa: /* 9961aa: lea edx, [ebp - 1] */
  edx = (uint32_t)(ebp + 0xffffffffu);
L_9961ad: /* 9961ad: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9961b1: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 9961b4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9961b6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9961b8: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 9961bb: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9961bf: mov dword ptr [edx + edi], eax */
  W32((uint32_t)(edx + edi), eax);
/* 9961c2: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 9961c8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9961cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9961cc: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9961cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9961d1: jl 0x996184 */
  if ((sf != of)) goto L_996184;
L_9961d3: /* 9961d3: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9961d7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9961db: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9961df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9961e0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9961e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9961e5: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9961e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9961e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9961ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9961ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9961ed: call 0x9991e0 */
  esp -= 4; W32(esp, 0x9961f2u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 9961f2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9961f5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9961f8: xor ecx, ecx */
  ecx = 0;
/* 9961fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9961fc: jle 0x996261 */
  if ((zf || sf != of)) goto L_996261;
L_9961fe: /* 9961fe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 996202: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 996206: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996208: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_99620c: /* 99620c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99620e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 996212: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 996215: mov edi, ecx */
  edi = ecx;
/* 996217: jge 0x99621b */
  if ((sf == of)) goto L_99621b;
L_996219: /* 996219: xor edi, edi */
  edi = 0;
L_99621b: /* 99621b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99621d: jge 0x996221 */
  if ((sf == of)) goto L_996221;
L_99621f: /* 99621f: xor esi, esi */
  esi = 0;
L_996221: /* 996221: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 996224: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996226: jl 0x99622b */
  if ((sf != of)) goto L_99622b;
L_996228: /* 996228: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_99622b: /* 99622b: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 99622e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996230: jl 0x996235 */
  if ((sf != of)) goto L_996235;
L_996232: /* 996232: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_996235: /* 996235: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 996239: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 99623c: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 99623f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996241: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 996245: mov edi, dword ptr [edi + edx] */
  edi = R32((uint32_t)(edi + edx));
/* 996248: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 99624b: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 99624f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 996251: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996253: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 996256: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996259: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99625a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99625d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99625f: jl 0x99620c */
  if ((sf != of)) goto L_99620c;
L_996261: /* 996261: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996265: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 996268: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996269: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99626b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 99626f: jl 0x996170 */
  if ((sf != of)) goto L_996170;
L_996275: /* 996275: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996278: xor edi, edi */
  edi = 0;
/* 99627a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99627c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 996280: jle 0x99639f */
  if ((zf || sf != of)) goto L_99639f;
L_996286: /* 996286: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 996289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_996290: /* 996290: xor ecx, ecx */
  ecx = 0;
/* 996292: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996294: jle 0x9962f9 */
  if ((zf || sf != of)) goto L_9962f9;
L_996296: /* 996296: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99629a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99629e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9962a0: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9962a4: /* 9962a4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9962a6: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9962a9: mov esi, ecx */
  esi = ecx;
/* 9962ab: jge 0x9962af */
  if ((sf == of)) goto L_9962af;
L_9962ad: /* 9962ad: xor edi, edi */
  edi = 0;
L_9962af: /* 9962af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9962b1: jge 0x9962b5 */
  if ((sf == of)) goto L_9962b5;
L_9962b3: /* 9962b3: xor esi, esi */
  esi = 0;
L_9962b5: /* 9962b5: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9962b8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9962ba: jl 0x9962bf */
  if ((sf != of)) goto L_9962bf;
L_9962bc: /* 9962bc: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_9962bf: /* 9962bf: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9962c2: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9962c4: jl 0x9962c9 */
  if ((sf != of)) goto L_9962c9;
L_9962c6: /* 9962c6: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_9962c9: /* 9962c9: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9962cd: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 9962d0: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 9962d3: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9962d5: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 9962d8: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 9962dc: mov dword ptr [edx + edi], esi */
  W32((uint32_t)(edx + edi), esi);
/* 9962df: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9962e3: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9962e5: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 9962e8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9962ec: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9962ee: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9962f1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9962f2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9962f5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9962f7: jl 0x9962a4 */
  if ((sf != of)) goto L_9962a4;
L_9962f9: /* 9962f9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9962fd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 996301: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 996305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996306: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99630a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99630b: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99630e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99630f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996310: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 996312: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996313: call 0x9991e0 */
  esp -= 4; W32(esp, 0x996318u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 996318: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99631b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99631e: xor ecx, ecx */
  ecx = 0;
/* 996320: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996322: jle 0x99638f */
  if ((zf || sf != of)) goto L_99638f;
L_996324: /* 996324: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 996328: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 99632c: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 996330: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996332: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_996336: /* 996336: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996338: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 99633b: mov esi, ecx */
  esi = ecx;
/* 99633d: jge 0x996341 */
  if ((sf == of)) goto L_996341;
L_99633f: /* 99633f: xor edi, edi */
  edi = 0;
L_996341: /* 996341: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996343: jge 0x996347 */
  if ((sf == of)) goto L_996347;
L_996345: /* 996345: xor esi, esi */
  esi = 0;
L_996347: /* 996347: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 99634a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99634c: jl 0x996351 */
  if ((sf != of)) goto L_996351;
L_99634e: /* 99634e: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_996351: /* 996351: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 996354: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996356: jl 0x99635b */
  if ((sf != of)) goto L_99635b;
L_996358: /* 996358: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_99635b: /* 99635b: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 99635f: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996362: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 996365: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996367: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 99636b: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* 99636e: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 996371: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 996375: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 996377: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996379: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 99637c: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99637f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 996383: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996384: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996387: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996389: jl 0x996336 */
  if ((sf != of)) goto L_996336;
L_99638b: /* 99638b: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_99638f: /* 99638f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 996392: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 996393: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996395: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 996399: jl 0x996290 */
  if ((sf != of)) goto L_996290;
L_99639f: /* 99639f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9963a2: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 9963a5: mov eax, ecx */
  eax = ecx;
/* 9963a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963a8: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9963ab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963ad: mov esi, eax */
  esi = eax;
/* 9963af: mov eax, edi */
  eax = edi;
/* 9963b1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963b2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9963b5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963b7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9963ba: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9963be: mov eax, ecx */
  eax = ecx;
/* 9963c0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963c1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9963c3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9963c5: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 9963c8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963ca: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9963ce: mov eax, edi */
  eax = edi;
/* 9963d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963d1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9963d3: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9963d7: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9963d9: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 9963dd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963df: xor esi, esi */
  esi = 0;
/* 9963e1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9963e3: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9963e7: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9963eb: jle 0x996478 */
  if ((zf || sf != of)) goto L_996478;
L_9963f1: /* 9963f1: xor edx, edx */
  edx = 0;
/* 9963f3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9963f5: jle 0x996468 */
  if ((zf || sf != of)) goto L_996468;
L_9963f7: /* 9963f7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9963f9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9963fd: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 996400: mov eax, edx */
  eax = edx;
/* 996402: jge 0x996406 */
  if ((sf == of)) goto L_996406;
L_996404: /* 996404: xor eax, eax */
  eax = 0;
L_996406: /* 996406: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996408: jge 0x99640c */
  if ((sf == of)) goto L_99640c;
L_99640a: /* 99640a: xor esi, esi */
  esi = 0;
L_99640c: /* 99640c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 99640e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996410: jl 0x996415 */
  if ((sf != of)) goto L_996415;
L_996412: /* 996412: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_996415: /* 996415: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996418: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99641a: jl 0x99641f */
  if ((sf != of)) goto L_99641f;
L_99641c: /* 99641c: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
L_99641f: /* 99641f: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 996422: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996424: cmp edx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996428: jl 0x996430 */
  if ((sf != of)) goto L_996430;
L_99642a: /* 99642a: cmp edx, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99642e: jl 0x996442 */
  if ((sf != of)) goto L_996442;
L_996430: /* 996430: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 996434: cmp esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996438: jl 0x996460 */
  if ((sf != of)) goto L_996460;
L_99643a: /* 99643a: cmp esi, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99643e: jge 0x996460 */
  if ((sf == of)) goto L_996460;
L_996440: /* 996440: jmp 0x996446 */
  goto L_996446;
L_996442: /* 996442: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_996446: /* 996446: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99644a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99644c: mov dword ptr [eax + ecx*4], 0 */
  W32((uint32_t)(eax + ecx*4), 0x0u);
/* 996453: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 996457: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 996459: mov dword ptr [eax + ecx*4], 0 */
  W32((uint32_t)(eax + ecx*4), 0x0u);
L_996460: /* 996460: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 996463: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 996464: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996466: jl 0x9963f7 */
  if ((sf != of)) goto L_9963f7;
L_996468: /* 996468: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99646b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 99646c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99646e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 996472: jl 0x9963f1 */
  if ((sf != of)) goto L_9963f1;
L_996478: /* 996478: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 99647b: xor edi, edi */
  edi = 0;
/* 99647d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99647f: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 996483: jle 0x9965a5 */
  if ((zf || sf != of)) goto L_9965a5;
L_996489: /* 996489: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99648c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_996490: /* 996490: xor ecx, ecx */
  ecx = 0;
/* 996492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996494: jle 0x996501 */
  if ((zf || sf != of)) goto L_996501;
L_996496: /* 996496: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99649a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99649e: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9964a2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9964a4: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9964a8: /* 9964a8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9964aa: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9964ad: mov esi, ecx */
  esi = ecx;
/* 9964af: jge 0x9964b3 */
  if ((sf == of)) goto L_9964b3;
L_9964b1: /* 9964b1: xor edi, edi */
  edi = 0;
L_9964b3: /* 9964b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9964b5: jge 0x9964b9 */
  if ((sf == of)) goto L_9964b9;
L_9964b7: /* 9964b7: xor esi, esi */
  esi = 0;
L_9964b9: /* 9964b9: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9964bc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9964be: jl 0x9964c3 */
  if ((sf != of)) goto L_9964c3;
L_9964c0: /* 9964c0: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_9964c3: /* 9964c3: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9964c6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9964c8: jl 0x9964cd */
  if ((sf != of)) goto L_9964cd;
L_9964ca: /* 9964ca: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_9964cd: /* 9964cd: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9964d1: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 9964d4: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 9964d7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9964d9: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 9964dc: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 9964e0: mov dword ptr [edx + edi], esi */
  W32((uint32_t)(edx + edi), esi);
/* 9964e3: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9964e7: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9964e9: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 9964ec: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9964f0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9964f2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9964f5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9964f6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9964f9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9964fb: jl 0x9964a8 */
  if ((sf != of)) goto L_9964a8;
L_9964fd: /* 9964fd: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_996501: /* 996501: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 996505: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 996509: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99650d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99650e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 996512: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996513: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 996516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996518: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99651a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99651b: call 0x9991e0 */
  esp -= 4; W32(esp, 0x996520u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 996520: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 996523: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996526: xor ecx, ecx */
  ecx = 0;
/* 996528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99652a: jle 0x996595 */
  if ((zf || sf != of)) goto L_996595;
L_99652c: /* 99652c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 996530: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 996534: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996536: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 99653a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_996540: /* 996540: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996542: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 996545: mov esi, ecx */
  esi = ecx;
/* 996547: jge 0x99654b */
  if ((sf == of)) goto L_99654b;
L_996549: /* 996549: xor edi, edi */
  edi = 0;
L_99654b: /* 99654b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99654d: jge 0x996551 */
  if ((sf == of)) goto L_996551;
L_99654f: /* 99654f: xor esi, esi */
  esi = 0;
L_996551: /* 996551: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 996554: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996556: jl 0x99655b */
  if ((sf != of)) goto L_99655b;
L_996558: /* 996558: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_99655b: /* 99655b: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 99655e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996560: jl 0x996565 */
  if ((sf != of)) goto L_996565;
L_996562: /* 996562: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_996565: /* 996565: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 996569: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 99656c: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 99656f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996571: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 996575: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* 996578: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 99657b: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 99657f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 996581: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996583: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 996586: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 996589: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99658d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99658e: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996591: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996593: jl 0x996540 */
  if ((sf != of)) goto L_996540;
L_996595: /* 996595: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 996598: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 996599: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99659b: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 99659f: jl 0x996490 */
  if ((sf != of)) goto L_996490;
L_9965a5: /* 9965a5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9965a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965aa: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9965b2: jle 0x9966aa */
  if ((zf || sf != of)) goto L_9966aa;
L_9965b8: /* 9965b8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9965bb: jmp 0x9965c0 */
  goto L_9965c0;
L_9965c0: /* 9965c0: xor ecx, ecx */
  ecx = 0;
/* 9965c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965c4: jle 0x996629 */
  if ((zf || sf != of)) goto L_996629;
L_9965c6: /* 9965c6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9965ca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9965ce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9965d0: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9965d4: /* 9965d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965d6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9965da: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9965dd: mov edi, ecx */
  edi = ecx;
/* 9965df: jge 0x9965e3 */
  if ((sf == of)) goto L_9965e3;
L_9965e1: /* 9965e1: xor edi, edi */
  edi = 0;
L_9965e3: /* 9965e3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965e5: jge 0x9965e9 */
  if ((sf == of)) goto L_9965e9;
L_9965e7: /* 9965e7: xor esi, esi */
  esi = 0;
L_9965e9: /* 9965e9: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9965ec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9965ee: jl 0x9965f3 */
  if ((sf != of)) goto L_9965f3;
L_9965f0: /* 9965f0: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_9965f3: /* 9965f3: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9965f6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9965f8: jl 0x9965fd */
  if ((sf != of)) goto L_9965fd;
L_9965fa: /* 9965fa: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_9965fd: /* 9965fd: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 996601: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996604: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 996607: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996609: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 99660c: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 996610: mov dword ptr [edx + edi], esi */
  W32((uint32_t)(edx + edi), esi);
/* 996613: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 996617: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996619: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 99661c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 99661e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996621: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996622: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996625: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996627: jl 0x9965d4 */
  if ((sf != of)) goto L_9965d4;
L_996629: /* 996629: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 99662d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 996631: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 996635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996636: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99663a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99663b: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 99663e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99663f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996640: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 996642: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996643: call 0x9991e0 */
  esp -= 4; W32(esp, 0x996648u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 996648: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 99664b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99664e: xor ecx, ecx */
  ecx = 0;
/* 996650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996652: jle 0x996696 */
  if ((zf || sf != of)) goto L_996696;
L_996654: /* 996654: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996656: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99665a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 99665d: mov esi, ecx */
  esi = ecx;
/* 99665f: jge 0x996663 */
  if ((sf == of)) goto L_996663;
L_996661: /* 996661: xor esi, esi */
  esi = 0;
L_996663: /* 996663: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996665: jge 0x996669 */
  if ((sf == of)) goto L_996669;
L_996667: /* 996667: xor edx, edx */
  edx = 0;
L_996669: /* 996669: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 99666b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99666d: jl 0x996672 */
  if ((sf != of)) goto L_996672;
L_99666f: /* 99666f: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_996672: /* 996672: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996675: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996677: jl 0x99667c */
  if ((sf != of)) goto L_99667c;
L_996679: /* 996679: lea edx, [edi - 1] */
  edx = (uint32_t)(edi + 0xffffffffu);
L_99667c: /* 99667c: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 99667f: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 996682: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996684: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 996688: mov esi, dword ptr [esi + ecx*4] */
  esi = R32((uint32_t)(esi + ecx*4));
/* 99668b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99668e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996691: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996692: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996694: jl 0x996654 */
  if ((sf != of)) goto L_996654;
L_996696: /* 996696: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99669a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99669d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99669e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9966a0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9966a4: jl 0x9965c0 */
  if ((sf != of)) goto L_9965c0;
L_9966aa: /* 9966aa: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9966ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9966af: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966b4u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966b4: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9966b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9966b9: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966beu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966be: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9966c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9966c3: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966c8u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966c8: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9966cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9966cd: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966d2u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966d2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9966d5: xor ecx, ecx */
  ecx = 0;
/* 9966d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9966da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9966dc: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9966e0: jle 0x996799 */
  if ((zf || sf != of)) goto L_996799;
L_9966e6: /* 9966e6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9966e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9966f0: /* 9966f0: xor edx, edx */
  edx = 0;
/* 9966f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9966f4: jle 0x996787 */
  if ((zf || sf != of)) goto L_996787;
L_9966fa: /* 9966fa: mov eax, ecx */
  eax = ecx;
/* 9966fc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9966fe: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
L_996702: /* 996702: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996704: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 996707: mov esi, edx */
  esi = edx;
/* 996709: jge 0x99670d */
  if ((sf == of)) goto L_99670d;
L_99670b: /* 99670b: xor esi, esi */
  esi = 0;
L_99670d: /* 99670d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99670f: jge 0x996713 */
  if ((sf == of)) goto L_996713;
L_996711: /* 996711: xor ecx, ecx */
  ecx = 0;
L_996713: /* 996713: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 996715: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996717: jl 0x99671c */
  if ((sf != of)) goto L_99671c;
L_996719: /* 996719: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_99671c: /* 99671c: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 99671f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996721: jl 0x996726 */
  if ((sf != of)) goto L_996726;
L_996723: /* 996723: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_996726: /* 996726: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 996729: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99672b: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 99672f: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 996732: mov ecx, edx */
  ecx = edx;
/* 996734: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 996736: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996738: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 99673c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 996740: jge 0x996744 */
  if ((sf == of)) goto L_996744;
L_996742: /* 996742: xor ecx, ecx */
  ecx = 0;
L_996744: /* 996744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996746: jge 0x99674a */
  if ((sf == of)) goto L_99674a;
L_996748: /* 996748: xor eax, eax */
  eax = 0;
L_99674a: /* 99674a: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 99674c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99674e: jl 0x996753 */
  if ((sf != of)) goto L_996753;
L_996750: /* 996750: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_996753: /* 996753: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996756: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996758: jl 0x99675d */
  if ((sf != of)) goto L_99675d;
L_99675a: /* 99675a: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
L_99675d: /* 99675d: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 996760: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996763: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 996767: mov esi, dword ptr [edi + esi*4] */
  esi = R32((uint32_t)(edi + esi*4));
/* 99676a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99676c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 996770: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 996772: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 996775: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996778: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99677c: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99677f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996781: jl 0x996702 */
  if ((sf != of)) goto L_996702;
L_996787: /* 996787: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99678a: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99678d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99678f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 996793: jl 0x9966f0 */
  if ((sf != of)) goto L_9966f0;
L_996799: /* 996799: mov ecx, ebp */
  ecx = ebp;
/* 99679b: call 0x995770 */
  esp -= 4; W32(esp, 0x9967a0u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9967a1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967a6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967a6: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9967aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9967ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967af: je 0x9967c1 */
  if (zf) goto L_9967c1;
L_9967b1: /* 9967b1: mov ecx, esi */
  ecx = esi;
/* 9967b3: call 0x995770 */
  esp -= 4; W32(esp, 0x9967b8u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967b9: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967beu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967c1: /* 9967c1: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9967c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967c7: je 0x9967d9 */
  if (zf) goto L_9967d9;
L_9967c9: /* 9967c9: mov ecx, esi */
  ecx = esi;
/* 9967cb: call 0x995770 */
  esp -= 4; W32(esp, 0x9967d0u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967d1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967d6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967d6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967d9: /* 9967d9: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9967dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967df: je 0x9967f1 */
  if (zf) goto L_9967f1;
L_9967e1: /* 9967e1: mov ecx, esi */
  ecx = esi;
/* 9967e3: call 0x995770 */
  esp -= 4; W32(esp, 0x9967e8u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967e9: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967eeu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967f1: /* 9967f1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 9967f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9967f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9967f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9967f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9967f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 996800: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996803: ret 4 */
  esp += 8; SPILL(); return;
}

void f_99616d(void) {
  LOAD_REGS();
L_99616d: /* 99616d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_996170: /* 996170: xor ecx, ecx */
  ecx = 0;
/* 996172: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996174: jle 0x9961d3 */
  if ((zf || sf != of)) goto L_9961d3;
L_996176: /* 996176: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 99617a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99617e: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996180: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_996184: /* 996184: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996186: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99618a: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 99618d: mov esi, ecx */
  esi = ecx;
/* 99618f: jge 0x996193 */
  if ((sf == of)) goto L_996193;
L_996191: /* 996191: xor esi, esi */
  esi = 0;
L_996193: /* 996193: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996195: jge 0x996199 */
  if ((sf == of)) goto L_996199;
L_996197: /* 996197: xor edx, edx */
  edx = 0;
L_996199: /* 996199: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 99619c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99619e: jl 0x9961a3 */
  if ((sf != of)) goto L_9961a3;
L_9961a0: /* 9961a0: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_9961a3: /* 9961a3: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9961a6: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9961a8: jl 0x9961ad */
  if ((sf != of)) goto L_9961ad;
L_9961aa: /* 9961aa: lea edx, [ebp - 1] */
  edx = (uint32_t)(ebp + 0xffffffffu);
L_9961ad: /* 9961ad: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9961b1: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 9961b4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9961b6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9961b8: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 9961bb: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9961bf: mov dword ptr [edx + edi], eax */
  W32((uint32_t)(edx + edi), eax);
/* 9961c2: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 9961c8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9961cb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9961cc: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9961cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9961d1: jl 0x996184 */
  if ((sf != of)) goto L_996184;
L_9961d3: /* 9961d3: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9961d7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9961db: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9961df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9961e0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9961e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9961e5: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9961e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9961e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9961ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9961ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9961ed: call 0x9991e0 */
  esp -= 4; W32(esp, 0x9961f2u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 9961f2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9961f5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9961f8: xor ecx, ecx */
  ecx = 0;
/* 9961fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9961fc: jle 0x996261 */
  if ((zf || sf != of)) goto L_996261;
L_9961fe: /* 9961fe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 996202: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 996206: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996208: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_99620c: /* 99620c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99620e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 996212: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 996215: mov edi, ecx */
  edi = ecx;
/* 996217: jge 0x99621b */
  if ((sf == of)) goto L_99621b;
L_996219: /* 996219: xor edi, edi */
  edi = 0;
L_99621b: /* 99621b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99621d: jge 0x996221 */
  if ((sf == of)) goto L_996221;
L_99621f: /* 99621f: xor esi, esi */
  esi = 0;
L_996221: /* 996221: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 996224: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996226: jl 0x99622b */
  if ((sf != of)) goto L_99622b;
L_996228: /* 996228: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_99622b: /* 99622b: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 99622e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996230: jl 0x996235 */
  if ((sf != of)) goto L_996235;
L_996232: /* 996232: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_996235: /* 996235: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 996239: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 99623c: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 99623f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996241: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 996245: mov edi, dword ptr [edi + edx] */
  edi = R32((uint32_t)(edi + edx));
/* 996248: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 99624b: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 99624f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 996251: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996253: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 996256: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996259: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99625a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99625d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99625f: jl 0x99620c */
  if ((sf != of)) goto L_99620c;
L_996261: /* 996261: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996265: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 996268: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996269: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99626b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 99626f: jl 0x996170 */
  if ((sf != of)) goto L_996170;
L_996275: /* 996275: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996278: xor edi, edi */
  edi = 0;
/* 99627a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99627c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 996280: jle 0x99639f */
  if ((zf || sf != of)) goto L_99639f;
L_996286: /* 996286: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 996289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_996290: /* 996290: xor ecx, ecx */
  ecx = 0;
/* 996292: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996294: jle 0x9962f9 */
  if ((zf || sf != of)) goto L_9962f9;
L_996296: /* 996296: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99629a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99629e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9962a0: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9962a4: /* 9962a4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9962a6: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9962a9: mov esi, ecx */
  esi = ecx;
/* 9962ab: jge 0x9962af */
  if ((sf == of)) goto L_9962af;
L_9962ad: /* 9962ad: xor edi, edi */
  edi = 0;
L_9962af: /* 9962af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9962b1: jge 0x9962b5 */
  if ((sf == of)) goto L_9962b5;
L_9962b3: /* 9962b3: xor esi, esi */
  esi = 0;
L_9962b5: /* 9962b5: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9962b8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9962ba: jl 0x9962bf */
  if ((sf != of)) goto L_9962bf;
L_9962bc: /* 9962bc: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_9962bf: /* 9962bf: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9962c2: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9962c4: jl 0x9962c9 */
  if ((sf != of)) goto L_9962c9;
L_9962c6: /* 9962c6: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_9962c9: /* 9962c9: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9962cd: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 9962d0: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 9962d3: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9962d5: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 9962d8: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 9962dc: mov dword ptr [edx + edi], esi */
  W32((uint32_t)(edx + edi), esi);
/* 9962df: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9962e3: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9962e5: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 9962e8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9962ec: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9962ee: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9962f1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9962f2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9962f5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9962f7: jl 0x9962a4 */
  if ((sf != of)) goto L_9962a4;
L_9962f9: /* 9962f9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9962fd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 996301: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 996305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996306: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99630a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99630b: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99630e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99630f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996310: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 996312: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996313: call 0x9991e0 */
  esp -= 4; W32(esp, 0x996318u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 996318: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99631b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99631e: xor ecx, ecx */
  ecx = 0;
/* 996320: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996322: jle 0x99638f */
  if ((zf || sf != of)) goto L_99638f;
L_996324: /* 996324: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 996328: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 99632c: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 996330: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996332: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_996336: /* 996336: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996338: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 99633b: mov esi, ecx */
  esi = ecx;
/* 99633d: jge 0x996341 */
  if ((sf == of)) goto L_996341;
L_99633f: /* 99633f: xor edi, edi */
  edi = 0;
L_996341: /* 996341: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996343: jge 0x996347 */
  if ((sf == of)) goto L_996347;
L_996345: /* 996345: xor esi, esi */
  esi = 0;
L_996347: /* 996347: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 99634a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99634c: jl 0x996351 */
  if ((sf != of)) goto L_996351;
L_99634e: /* 99634e: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_996351: /* 996351: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 996354: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996356: jl 0x99635b */
  if ((sf != of)) goto L_99635b;
L_996358: /* 996358: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_99635b: /* 99635b: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 99635f: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996362: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 996365: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996367: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 99636b: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* 99636e: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 996371: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 996375: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 996377: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996379: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 99637c: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99637f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 996383: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996384: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996387: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996389: jl 0x996336 */
  if ((sf != of)) goto L_996336;
L_99638b: /* 99638b: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_99638f: /* 99638f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 996392: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 996393: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996395: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 996399: jl 0x996290 */
  if ((sf != of)) goto L_996290;
L_99639f: /* 99639f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9963a2: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 9963a5: mov eax, ecx */
  eax = ecx;
/* 9963a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963a8: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9963ab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963ad: mov esi, eax */
  esi = eax;
/* 9963af: mov eax, edi */
  eax = edi;
/* 9963b1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963b2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9963b5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963b7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9963ba: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9963be: mov eax, ecx */
  eax = ecx;
/* 9963c0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963c1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9963c3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9963c5: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 9963c8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963ca: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9963ce: mov eax, edi */
  eax = edi;
/* 9963d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9963d1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9963d3: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9963d7: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9963d9: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 9963dd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9963df: xor esi, esi */
  esi = 0;
/* 9963e1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9963e3: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9963e7: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9963eb: jle 0x996478 */
  if ((zf || sf != of)) goto L_996478;
L_9963f1: /* 9963f1: xor edx, edx */
  edx = 0;
/* 9963f3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9963f5: jle 0x996468 */
  if ((zf || sf != of)) goto L_996468;
L_9963f7: /* 9963f7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9963f9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9963fd: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 996400: mov eax, edx */
  eax = edx;
/* 996402: jge 0x996406 */
  if ((sf == of)) goto L_996406;
L_996404: /* 996404: xor eax, eax */
  eax = 0;
L_996406: /* 996406: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996408: jge 0x99640c */
  if ((sf == of)) goto L_99640c;
L_99640a: /* 99640a: xor esi, esi */
  esi = 0;
L_99640c: /* 99640c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 99640e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996410: jl 0x996415 */
  if ((sf != of)) goto L_996415;
L_996412: /* 996412: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_996415: /* 996415: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996418: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99641a: jl 0x99641f */
  if ((sf != of)) goto L_99641f;
L_99641c: /* 99641c: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
L_99641f: /* 99641f: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 996422: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996424: cmp edx, dword ptr [esp + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996428: jl 0x996430 */
  if ((sf != of)) goto L_996430;
L_99642a: /* 99642a: cmp edx, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99642e: jl 0x996442 */
  if ((sf != of)) goto L_996442;
L_996430: /* 996430: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 996434: cmp esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996438: jl 0x996460 */
  if ((sf != of)) goto L_996460;
L_99643a: /* 99643a: cmp esi, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99643e: jge 0x996460 */
  if ((sf == of)) goto L_996460;
L_996440: /* 996440: jmp 0x996446 */
  goto L_996446;
L_996442: /* 996442: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_996446: /* 996446: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99644a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99644c: mov dword ptr [eax + ecx*4], 0 */
  W32((uint32_t)(eax + ecx*4), 0x0u);
/* 996453: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 996457: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 996459: mov dword ptr [eax + ecx*4], 0 */
  W32((uint32_t)(eax + ecx*4), 0x0u);
L_996460: /* 996460: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 996463: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 996464: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996466: jl 0x9963f7 */
  if ((sf != of)) goto L_9963f7;
L_996468: /* 996468: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99646b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 99646c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99646e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 996472: jl 0x9963f1 */
  if ((sf != of)) goto L_9963f1;
L_996478: /* 996478: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 99647b: xor edi, edi */
  edi = 0;
/* 99647d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99647f: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 996483: jle 0x9965a5 */
  if ((zf || sf != of)) goto L_9965a5;
L_996489: /* 996489: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99648c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_996490: /* 996490: xor ecx, ecx */
  ecx = 0;
/* 996492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996494: jle 0x996501 */
  if ((zf || sf != of)) goto L_996501;
L_996496: /* 996496: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99649a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99649e: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9964a2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9964a4: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9964a8: /* 9964a8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9964aa: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9964ad: mov esi, ecx */
  esi = ecx;
/* 9964af: jge 0x9964b3 */
  if ((sf == of)) goto L_9964b3;
L_9964b1: /* 9964b1: xor edi, edi */
  edi = 0;
L_9964b3: /* 9964b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9964b5: jge 0x9964b9 */
  if ((sf == of)) goto L_9964b9;
L_9964b7: /* 9964b7: xor esi, esi */
  esi = 0;
L_9964b9: /* 9964b9: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9964bc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9964be: jl 0x9964c3 */
  if ((sf != of)) goto L_9964c3;
L_9964c0: /* 9964c0: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_9964c3: /* 9964c3: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9964c6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9964c8: jl 0x9964cd */
  if ((sf != of)) goto L_9964cd;
L_9964ca: /* 9964ca: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_9964cd: /* 9964cd: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9964d1: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 9964d4: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 9964d7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9964d9: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 9964dc: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 9964e0: mov dword ptr [edx + edi], esi */
  W32((uint32_t)(edx + edi), esi);
/* 9964e3: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9964e7: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9964e9: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 9964ec: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9964f0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9964f2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9964f5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9964f6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9964f9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9964fb: jl 0x9964a8 */
  if ((sf != of)) goto L_9964a8;
L_9964fd: /* 9964fd: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_996501: /* 996501: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 996505: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 996509: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99650d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99650e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 996512: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996513: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 996516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996518: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99651a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99651b: call 0x9991e0 */
  esp -= 4; W32(esp, 0x996520u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 996520: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 996523: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996526: xor ecx, ecx */
  ecx = 0;
/* 996528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99652a: jle 0x996595 */
  if ((zf || sf != of)) goto L_996595;
L_99652c: /* 99652c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 996530: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 996534: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996536: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 99653a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_996540: /* 996540: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996542: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 996545: mov esi, ecx */
  esi = ecx;
/* 996547: jge 0x99654b */
  if ((sf == of)) goto L_99654b;
L_996549: /* 996549: xor edi, edi */
  edi = 0;
L_99654b: /* 99654b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99654d: jge 0x996551 */
  if ((sf == of)) goto L_996551;
L_99654f: /* 99654f: xor esi, esi */
  esi = 0;
L_996551: /* 996551: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 996554: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996556: jl 0x99655b */
  if ((sf != of)) goto L_99655b;
L_996558: /* 996558: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_99655b: /* 99655b: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 99655e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996560: jl 0x996565 */
  if ((sf != of)) goto L_996565;
L_996562: /* 996562: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_996565: /* 996565: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 996569: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 99656c: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 99656f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996571: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 996575: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* 996578: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 99657b: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 99657f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 996581: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996583: mov dword ptr [esi + eax*4], edi */
  W32((uint32_t)(esi + eax*4), edi);
/* 996586: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 996589: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99658d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99658e: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996591: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996593: jl 0x996540 */
  if ((sf != of)) goto L_996540;
L_996595: /* 996595: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 996598: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 996599: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99659b: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 99659f: jl 0x996490 */
  if ((sf != of)) goto L_996490;
L_9965a5: /* 9965a5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9965a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965aa: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9965b2: jle 0x9966aa */
  if ((zf || sf != of)) goto L_9966aa;
L_9965b8: /* 9965b8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9965bb: jmp 0x9965c0 */
  goto L_9965c0;
L_9965c0: /* 9965c0: xor ecx, ecx */
  ecx = 0;
/* 9965c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965c4: jle 0x996629 */
  if ((zf || sf != of)) goto L_996629;
L_9965c6: /* 9965c6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9965ca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9965ce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9965d0: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9965d4: /* 9965d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965d6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9965da: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9965dd: mov edi, ecx */
  edi = ecx;
/* 9965df: jge 0x9965e3 */
  if ((sf == of)) goto L_9965e3;
L_9965e1: /* 9965e1: xor edi, edi */
  edi = 0;
L_9965e3: /* 9965e3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965e5: jge 0x9965e9 */
  if ((sf == of)) goto L_9965e9;
L_9965e7: /* 9965e7: xor esi, esi */
  esi = 0;
L_9965e9: /* 9965e9: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9965ec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9965ee: jl 0x9965f3 */
  if ((sf != of)) goto L_9965f3;
L_9965f0: /* 9965f0: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_9965f3: /* 9965f3: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9965f6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9965f8: jl 0x9965fd */
  if ((sf != of)) goto L_9965fd;
L_9965fa: /* 9965fa: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_9965fd: /* 9965fd: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 996601: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996604: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 996607: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996609: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 99660c: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 996610: mov dword ptr [edx + edi], esi */
  W32((uint32_t)(edx + edi), esi);
/* 996613: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 996617: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996619: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 99661c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 99661e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996621: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996622: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996625: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996627: jl 0x9965d4 */
  if ((sf != of)) goto L_9965d4;
L_996629: /* 996629: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 99662d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 996631: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 996635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996636: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99663a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99663b: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 99663e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99663f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996640: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 996642: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996643: call 0x9991e0 */
  esp -= 4; W32(esp, 0x996648u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 996648: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 99664b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99664e: xor ecx, ecx */
  ecx = 0;
/* 996650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996652: jle 0x996696 */
  if ((zf || sf != of)) goto L_996696;
L_996654: /* 996654: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996656: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99665a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 99665d: mov esi, ecx */
  esi = ecx;
/* 99665f: jge 0x996663 */
  if ((sf == of)) goto L_996663;
L_996661: /* 996661: xor esi, esi */
  esi = 0;
L_996663: /* 996663: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996665: jge 0x996669 */
  if ((sf == of)) goto L_996669;
L_996667: /* 996667: xor edx, edx */
  edx = 0;
L_996669: /* 996669: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 99666b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99666d: jl 0x996672 */
  if ((sf != of)) goto L_996672;
L_99666f: /* 99666f: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_996672: /* 996672: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996675: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996677: jl 0x99667c */
  if ((sf != of)) goto L_99667c;
L_996679: /* 996679: lea edx, [edi - 1] */
  edx = (uint32_t)(edi + 0xffffffffu);
L_99667c: /* 99667c: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 99667f: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 996682: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996684: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 996688: mov esi, dword ptr [esi + ecx*4] */
  esi = R32((uint32_t)(esi + ecx*4));
/* 99668b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99668e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996691: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996692: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996694: jl 0x996654 */
  if ((sf != of)) goto L_996654;
L_996696: /* 996696: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99669a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99669d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99669e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9966a0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9966a4: jl 0x9965c0 */
  if ((sf != of)) goto L_9965c0;
L_9966aa: /* 9966aa: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9966ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9966af: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966b4u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966b4: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9966b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9966b9: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966beu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966be: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9966c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9966c3: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966c8u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966c8: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9966cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9966cd: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966d2u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966d2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9966d5: xor ecx, ecx */
  ecx = 0;
/* 9966d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9966da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9966dc: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9966e0: jle 0x996799 */
  if ((zf || sf != of)) goto L_996799;
L_9966e6: /* 9966e6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9966e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9966f0: /* 9966f0: xor edx, edx */
  edx = 0;
/* 9966f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9966f4: jle 0x996787 */
  if ((zf || sf != of)) goto L_996787;
L_9966fa: /* 9966fa: mov eax, ecx */
  eax = ecx;
/* 9966fc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9966fe: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
L_996702: /* 996702: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996704: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 996707: mov esi, edx */
  esi = edx;
/* 996709: jge 0x99670d */
  if ((sf == of)) goto L_99670d;
L_99670b: /* 99670b: xor esi, esi */
  esi = 0;
L_99670d: /* 99670d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99670f: jge 0x996713 */
  if ((sf == of)) goto L_996713;
L_996711: /* 996711: xor ecx, ecx */
  ecx = 0;
L_996713: /* 996713: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 996715: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996717: jl 0x99671c */
  if ((sf != of)) goto L_99671c;
L_996719: /* 996719: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_99671c: /* 99671c: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 99671f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996721: jl 0x996726 */
  if ((sf != of)) goto L_996726;
L_996723: /* 996723: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_996726: /* 996726: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 996729: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99672b: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 99672f: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 996732: mov ecx, edx */
  ecx = edx;
/* 996734: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 996736: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996738: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 99673c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 996740: jge 0x996744 */
  if ((sf == of)) goto L_996744;
L_996742: /* 996742: xor ecx, ecx */
  ecx = 0;
L_996744: /* 996744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996746: jge 0x99674a */
  if ((sf == of)) goto L_99674a;
L_996748: /* 996748: xor eax, eax */
  eax = 0;
L_99674a: /* 99674a: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 99674c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99674e: jl 0x996753 */
  if ((sf != of)) goto L_996753;
L_996750: /* 996750: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_996753: /* 996753: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996756: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996758: jl 0x99675d */
  if ((sf != of)) goto L_99675d;
L_99675a: /* 99675a: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
L_99675d: /* 99675d: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 996760: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996763: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 996767: mov esi, dword ptr [edi + esi*4] */
  esi = R32((uint32_t)(edi + esi*4));
/* 99676a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99676c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 996770: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 996772: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 996775: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996778: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99677c: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99677f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996781: jl 0x996702 */
  if ((sf != of)) goto L_996702;
L_996787: /* 996787: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99678a: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99678d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99678f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 996793: jl 0x9966f0 */
  if ((sf != of)) goto L_9966f0;
L_996799: /* 996799: mov ecx, ebp */
  ecx = ebp;
/* 99679b: call 0x995770 */
  esp -= 4; W32(esp, 0x9967a0u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9967a1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967a6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967a6: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9967aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9967ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967af: je 0x9967c1 */
  if (zf) goto L_9967c1;
L_9967b1: /* 9967b1: mov ecx, esi */
  ecx = esi;
/* 9967b3: call 0x995770 */
  esp -= 4; W32(esp, 0x9967b8u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967b9: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967beu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967c1: /* 9967c1: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9967c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967c7: je 0x9967d9 */
  if (zf) goto L_9967d9;
L_9967c9: /* 9967c9: mov ecx, esi */
  ecx = esi;
/* 9967cb: call 0x995770 */
  esp -= 4; W32(esp, 0x9967d0u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967d1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967d6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967d6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967d9: /* 9967d9: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9967dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967df: je 0x9967f1 */
  if (zf) goto L_9967f1;
L_9967e1: /* 9967e1: mov ecx, esi */
  ecx = esi;
/* 9967e3: call 0x995770 */
  esp -= 4; W32(esp, 0x9967e8u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967e9: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967eeu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967f1: /* 9967f1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 9967f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9967f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9967f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9967f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9967f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 996800: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996803: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9965bd(void) {
  LOAD_REGS();
L_9965bd: /* 9965bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9965c0: /* 9965c0: xor ecx, ecx */
  ecx = 0;
/* 9965c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965c4: jle 0x996629 */
  if ((zf || sf != of)) goto L_996629;
L_9965c6: /* 9965c6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9965ca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9965ce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9965d0: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_9965d4: /* 9965d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965d6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9965da: mov ebp, dword ptr [ebp + 0xc] */
  ebp = R32((uint32_t)(ebp + 0xcu));
/* 9965dd: mov edi, ecx */
  edi = ecx;
/* 9965df: jge 0x9965e3 */
  if ((sf == of)) goto L_9965e3;
L_9965e1: /* 9965e1: xor edi, edi */
  edi = 0;
L_9965e3: /* 9965e3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9965e5: jge 0x9965e9 */
  if ((sf == of)) goto L_9965e9;
L_9965e7: /* 9965e7: xor esi, esi */
  esi = 0;
L_9965e9: /* 9965e9: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9965ec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9965ee: jl 0x9965f3 */
  if ((sf != of)) goto L_9965f3;
L_9965f0: /* 9965f0: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_9965f3: /* 9965f3: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 9965f6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9965f8: jl 0x9965fd */
  if ((sf != of)) goto L_9965fd;
L_9965fa: /* 9965fa: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
L_9965fd: /* 9965fd: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 996601: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996604: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 996607: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996609: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 99660c: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 996610: mov dword ptr [edx + edi], esi */
  W32((uint32_t)(edx + edi), esi);
/* 996613: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 996617: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 996619: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 99661c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 99661e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996621: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996622: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996625: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996627: jl 0x9965d4 */
  if ((sf != of)) goto L_9965d4;
L_996629: /* 996629: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 99662d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 996631: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 996635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996636: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99663a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99663b: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 99663e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99663f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996640: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 996642: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996643: call 0x9991e0 */
  esp -= 4; W32(esp, 0x996648u); SPILL(); f_9991e0(); if (g_unwind) return; RELOAD();
/* 996648: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 99664b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99664e: xor ecx, ecx */
  ecx = 0;
/* 996650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996652: jle 0x996696 */
  if ((zf || sf != of)) goto L_996696;
L_996654: /* 996654: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996656: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99665a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 99665d: mov esi, ecx */
  esi = ecx;
/* 99665f: jge 0x996663 */
  if ((sf == of)) goto L_996663;
L_996661: /* 996661: xor esi, esi */
  esi = 0;
L_996663: /* 996663: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996665: jge 0x996669 */
  if ((sf == of)) goto L_996669;
L_996667: /* 996667: xor edx, edx */
  edx = 0;
L_996669: /* 996669: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 99666b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99666d: jl 0x996672 */
  if ((sf != of)) goto L_996672;
L_99666f: /* 99666f: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_996672: /* 996672: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996675: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996677: jl 0x99667c */
  if ((sf != of)) goto L_99667c;
L_996679: /* 996679: lea edx, [edi - 1] */
  edx = (uint32_t)(edi + 0xffffffffu);
L_99667c: /* 99667c: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 99667f: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 996682: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996684: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 996688: mov esi, dword ptr [esi + ecx*4] */
  esi = R32((uint32_t)(esi + ecx*4));
/* 99668b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 99668e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996691: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996692: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996694: jl 0x996654 */
  if ((sf != of)) goto L_996654;
L_996696: /* 996696: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99669a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99669d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99669e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9966a0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9966a4: jl 0x9965c0 */
  if ((sf != of)) goto L_9965c0;
L_9966aa: /* 9966aa: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9966ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9966af: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966b4u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966b4: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9966b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9966b9: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966beu); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966be: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9966c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9966c3: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966c8u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966c8: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9966cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9966cd: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x9966d2u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 9966d2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9966d5: xor ecx, ecx */
  ecx = 0;
/* 9966d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9966da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9966dc: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9966e0: jle 0x996799 */
  if ((zf || sf != of)) goto L_996799;
L_9966e6: /* 9966e6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9966e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9966f0: /* 9966f0: xor edx, edx */
  edx = 0;
/* 9966f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9966f4: jle 0x996787 */
  if ((zf || sf != of)) goto L_996787;
L_9966fa: /* 9966fa: mov eax, ecx */
  eax = ecx;
/* 9966fc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9966fe: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
L_996702: /* 996702: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996704: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 996707: mov esi, edx */
  esi = edx;
/* 996709: jge 0x99670d */
  if ((sf == of)) goto L_99670d;
L_99670b: /* 99670b: xor esi, esi */
  esi = 0;
L_99670d: /* 99670d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99670f: jge 0x996713 */
  if ((sf == of)) goto L_996713;
L_996711: /* 996711: xor ecx, ecx */
  ecx = 0;
L_996713: /* 996713: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 996715: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996717: jl 0x99671c */
  if ((sf != of)) goto L_99671c;
L_996719: /* 996719: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_99671c: /* 99671c: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 99671f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996721: jl 0x996726 */
  if ((sf != of)) goto L_996726;
L_996723: /* 996723: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_996726: /* 996726: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 996729: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99672b: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 99672f: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 996732: mov ecx, edx */
  ecx = edx;
/* 996734: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 996736: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996738: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 99673c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 996740: jge 0x996744 */
  if ((sf == of)) goto L_996744;
L_996742: /* 996742: xor ecx, ecx */
  ecx = 0;
L_996744: /* 996744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996746: jge 0x99674a */
  if ((sf == of)) goto L_99674a;
L_996748: /* 996748: xor eax, eax */
  eax = 0;
L_99674a: /* 99674a: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 99674c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99674e: jl 0x996753 */
  if ((sf != of)) goto L_996753;
L_996750: /* 996750: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_996753: /* 996753: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 996756: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996758: jl 0x99675d */
  if ((sf != of)) goto L_99675d;
L_99675a: /* 99675a: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
L_99675d: /* 99675d: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 996760: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 996763: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 996767: mov esi, dword ptr [edi + esi*4] */
  esi = R32((uint32_t)(edi + esi*4));
/* 99676a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99676c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 996770: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 996772: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 996775: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 996778: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 99677c: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99677f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996781: jl 0x996702 */
  if ((sf != of)) goto L_996702;
L_996787: /* 996787: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 99678a: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99678d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99678f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 996793: jl 0x9966f0 */
  if ((sf != of)) goto L_9966f0;
L_996799: /* 996799: mov ecx, ebp */
  ecx = ebp;
/* 99679b: call 0x995770 */
  esp -= 4; W32(esp, 0x9967a0u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9967a1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967a6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967a6: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9967aa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9967ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967af: je 0x9967c1 */
  if (zf) goto L_9967c1;
L_9967b1: /* 9967b1: mov ecx, esi */
  ecx = esi;
/* 9967b3: call 0x995770 */
  esp -= 4; W32(esp, 0x9967b8u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967b9: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967beu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967c1: /* 9967c1: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9967c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967c7: je 0x9967d9 */
  if (zf) goto L_9967d9;
L_9967c9: /* 9967c9: mov ecx, esi */
  ecx = esi;
/* 9967cb: call 0x995770 */
  esp -= 4; W32(esp, 0x9967d0u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967d1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967d6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967d6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967d9: /* 9967d9: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 9967dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9967df: je 0x9967f1 */
  if (zf) goto L_9967f1;
L_9967e1: /* 9967e1: mov ecx, esi */
  ecx = esi;
/* 9967e3: call 0x995770 */
  esp -= 4; W32(esp, 0x9967e8u); SPILL(); f_995770(); if (g_unwind) return; RELOAD();
/* 9967e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9967e9: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9967eeu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9967ee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9967f1: /* 9967f1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 9967f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9967f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9967f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9967f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9967f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 996800: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996803: ret 4 */
  esp += 8; SPILL(); return;
}

void f_996810(void) {
  LOAD_REGS();
L_996810: /* 996810: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996811: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 996812: mov edi, ecx */
  edi = ecx;
/* 996814: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 996817: xor ebx, ebx */
  ebx = 0;
/* 996819: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99681b: jle 0x996840 */
  if ((zf || sf != of)) goto L_996840;
L_99681d: /* 99681d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99681e: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 996822: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996823: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 996826: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
L_996828: /* 996828: mov eax, dword ptr [esi + ebp] */
  eax = R32((uint32_t)(esi + ebp));
/* 99682b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 99682d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99682e: call 0x996010 */
  esp -= 4; W32(esp, 0x996833u); SPILL(); f_996010(); if (g_unwind) return; RELOAD();
/* 996833: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 996836: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 996837: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99683a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99683c: jl 0x996828 */
  if ((sf != of)) goto L_996828;
L_99683e: /* 99683e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99683f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_996840: /* 996840: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996841: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996842: ret 4 */
  esp += 8; SPILL(); return;
}

void f_996850(void) {
  LOAD_REGS();
L_996850: /* 996850: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996851: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996852: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996853: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 996857: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 996859: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 99685c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 99685f: mov dword ptr [0xcf7718], eax */
  W32((uint32_t)(0xcf7718u), eax);
/* 996864: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 996867: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 996868: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 99686b: mov dword ptr [0xcf7710], eax */
  W32((uint32_t)(0xcf7710u), eax);
/* 996870: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 996873: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 996876: mov ebx, eax */
  ebx = eax;
/* 996878: mov dword ptr [0xcf770c], ecx */
  W32((uint32_t)(0xcf770cu), ecx);
/* 99687e: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 996881: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996882: mov dword ptr [0xcf7714], edx */
  W32((uint32_t)(0xcf7714u), edx);
/* 996888: mov dword ptr [0xcf7708], edi */
  W32((uint32_t)(0xcf7708u), edi);
/* 99688e: call 0x99cf4e */
  esp -= 4; W32(esp, 0x996893u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 996893: mov edi, dword ptr [0xcf770c] */
  edi = R32((uint32_t)(0xcf770cu));
/* 996899: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99689c: xor ecx, ecx */
  ecx = 0;
/* 99689e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9968a0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9968a4: mov edx, eax */
  edx = eax;
/* 9968a6: je 0x9968df */
  if (zf) goto L_9968df;
L_9968a8: /* 9968a8: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 9968ac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9968ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9968b0: /* 9968b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9968b2: je 0x9968d8 */
  if (zf) goto L_9968d8;
L_9968b4: /* 9968b4: mov ebp, ebx */
  ebp = ebx;
/* 9968b6: jmp 0x9968c0 */
  goto L_9968c0;
L_9968c0: /* 9968c0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9968c3: lea edi, [ecx*4] */
  edi = (uint32_t)(ecx*4);
/* 9968ca: mov al, byte ptr [edi + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 9968cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9968ce: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 9968d0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9968d1: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 9968d2: jne 0x9968c0 */
  if (!zf) goto L_9968c0;
L_9968d4: /* 9968d4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_9968d8: /* 9968d8: dec dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 9968dc: jne 0x9968b0 */
  if (!zf) goto L_9968b0;
L_9968de: /* 9968de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_9968df: /* 9968df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9968e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9968e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9968e2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9968e3: ret  */
  esp += 4; SPILL(); return;
}

void f_9968b8(void) {
  LOAD_REGS();
  goto L_9968b8;
L_9968b0: /* 9968b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9968b2: je 0x9968d8 */
  if (zf) goto L_9968d8;
L_9968b4: /* 9968b4: mov ebp, ebx */
  ebp = ebx;
/* 9968b6: jmp 0x9968c0 */
  goto L_9968c0;
L_9968b8: /* 9968b8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 9968bf: nop  */
L_9968c0: /* 9968c0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9968c3: lea edi, [ecx*4] */
  edi = (uint32_t)(ecx*4);
/* 9968ca: mov al, byte ptr [edi + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 9968cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9968ce: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 9968d0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9968d1: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 9968d2: jne 0x9968c0 */
  if (!zf) goto L_9968c0;
L_9968d4: /* 9968d4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_9968d8: /* 9968d8: dec dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 9968dc: jne 0x9968b0 */
  if (!zf) goto L_9968b0;
L_9968de: /* 9968de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9968df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9968e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9968e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9968e2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9968e3: ret  */
  esp += 4; SPILL(); return;
}

void f_9968f0(void) {
  LOAD_REGS();
L_9968f0: /* 9968f0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9968f3: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9968f7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9968fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9968fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9968fd: mov dword ptr [0xcf7700], eax */
  W32((uint32_t)(0xcf7700u), eax);
/* 996902: mov dword ptr [0xcf7704], ecx */
  W32((uint32_t)(0xcf7704u), ecx);
/* 996908: call 0x996850 */
  esp -= 4; W32(esp, 0x99690du); SPILL(); f_996850(); if (g_unwind) return; RELOAD();
/* 99690d: mov ecx, dword ptr [0xcf7718] */
  ecx = R32((uint32_t)(0xcf7718u));
/* 996913: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 996917: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 99691b: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 99691e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 996921: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 996923: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996926: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996928: mov dword ptr [esp + 4], edi */
  W32((uint32_t)(esp + 0x4u), edi);
/* 99692c: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 996930: je 0x99693a */
  if (zf) goto L_99693a;
L_996932: /* 996932: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 996935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996936: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996939: ret  */
  esp += 4; SPILL(); return;
L_99693a: /* 99693a: mov ecx, dword ptr [0xcf7708] */
  ecx = R32((uint32_t)(0xcf7708u));
/* 996940: mov eax, dword ptr [0xcf7710] */
  eax = R32((uint32_t)(0xcf7710u));
/* 996945: mov edx, dword ptr [0xcf7714] */
  edx = R32((uint32_t)(0xcf7714u));
/* 99694b: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 99694e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99694f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 996950: mov ebp, ecx */
  ebp = ecx;
/* 996952: mov ecx, edx */
  ecx = edx;
/* 996954: imul ebp, edi */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(edi);
  ebp = (uint32_t)r;
  }
/* 996957: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 99695a: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 99695e: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 996965: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996966: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996967: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 99696b: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 99696f: call 0x99cf4e */
  esp -= 4; W32(esp, 0x996974u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 996974: mov ebx, eax */
  ebx = eax;
/* 996976: mov eax, dword ptr [0xcf7714] */
  eax = R32((uint32_t)(0xcf7714u));
/* 99697b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99697e: xor esi, esi */
  esi = 0;
/* 996980: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996982: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 996986: jle 0x9969af */
  if ((zf || sf != of)) goto L_9969af;
L_996988: /* 996988: jmp 0x996990 */
  goto L_996990;
L_996990: /* 996990: mov edx, dword ptr [0xcf7710] */
  edx = R32((uint32_t)(0xcf7710u));
/* 996996: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 996999: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99699a: call 0x99cf4e */
  esp -= 4; W32(esp, 0x99699fu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 99699f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9969a2: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 9969a5: mov eax, dword ptr [0xcf7714] */
  eax = R32((uint32_t)(0xcf7714u));
/* 9969aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9969ab: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9969ad: jl 0x996990 */
  if ((sf != of)) goto L_996990;
L_9969af: /* 9969af: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 9969b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9969b7: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9969bcu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9969bc: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
/* 9969c2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9969c6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9969ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9969cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9969cf: jle 0x996ad6 */
  if ((zf || sf != of)) goto L_996ad6;
L_9969d5: /* 9969d5: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 9969dd: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9969e1: jmp 0x9969f0 */
  goto L_9969f0;
L_9969e3: /* 9969e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9969e7: jmp 0x9969f0 */
  goto L_9969f0;
L_9969f0: /* 9969f0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9969f4: mov esi, dword ptr [edx + 0x10] */
  esi = R32((uint32_t)(edx + 0x10u));
/* 9969f7: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 9969fe: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 996a02: mov ecx, eax */
  ecx = eax;
/* 996a04: mov edx, ecx */
  edx = ecx;
/* 996a06: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 996a09: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 996a0b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 996a0f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 996a11: mov ecx, edx */
  ecx = edx;
/* 996a13: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 996a17: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 996a1a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996a1c: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 996a1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996a22: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 996a26: xor eax, eax */
  eax = 0;
/* 996a28: xor edx, edx */
  edx = 0;
/* 996a2a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a2c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 996a30: jle 0x996a8f */
  if ((zf || sf != of)) goto L_996a8f;
L_996a32: /* 996a32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 996a36: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 996a39: imul ecx, dword ptr [esp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x24u)));
  ecx = (uint32_t)r;
  }
/* 996a3e: add ecx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996a42: xor esi, esi */
  esi = 0;
/* 996a44: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a46: jle 0x996a7c */
  if ((zf || sf != of)) goto L_996a7c;
L_996a48: /* 996a48: mov edi, dword ptr [0xcf7710] */
  edi = R32((uint32_t)(0xcf7710u));
/* 996a4e: imul edi, dword ptr [0xcf7708] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(0xcf7708u)));
  edi = (uint32_t)r;
  }
L_996a55: /* 996a55: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 996a58: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996a5a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a5c: jle 0x996a73 */
  if ((zf || sf != of)) goto L_996a73;
L_996a5e: /* 996a5e: mov ebp, edi */
  ebp = edi;
L_996a60: /* 996a60: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 996a62: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 996a64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996a65: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996a66: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 996a67: jne 0x996a60 */
  if (!zf) goto L_996a60;
L_996a69: /* 996a69: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 996a6d: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
L_996a73: /* 996a73: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 996a74: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996a76: jl 0x996a55 */
  if ((sf != of)) goto L_996a55;
L_996a78: /* 996a78: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_996a7c: /* 996a7c: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 996a80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996a84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996a85: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996a87: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996a89: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 996a8d: jl 0x996a32 */
  if ((sf != of)) goto L_996a32;
L_996a8f: /* 996a8f: xor eax, eax */
  eax = 0;
/* 996a91: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a93: jle 0x996acc */
  if ((zf || sf != of)) goto L_996acc;
L_996a95: /* 996a95: mov edx, dword ptr [0xcf7710] */
  edx = R32((uint32_t)(0xcf7710u));
/* 996a9b: imul edx, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edx = (uint32_t)r;
  }
L_996aa0: /* 996aa0: mov esi, dword ptr [ebx + eax*4] */
  esi = R32((uint32_t)(ebx + eax*4));
/* 996aa3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 996aa7: mov ecx, edx */
  ecx = edx;
/* 996aa9: mov ebp, ecx */
  ebp = ecx;
/* 996aab: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 996aae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 996ab0: mov ecx, ebp */
  ecx = ebp;
/* 996ab2: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
/* 996ab8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 996abb: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 996abd: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 996ac1: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 996ac3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996ac4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996ac6: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 996aca: jl 0x996aa0 */
  if ((sf != of)) goto L_996aa0;
L_996acc: /* 996acc: dec dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 996ad0: jne 0x9969e3 */
  if (!zf) goto L_9969e3;
L_996ad6: /* 996ad6: xor esi, esi */
  esi = 0;
/* 996ad8: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996ada: jle 0x996af6 */
  if ((zf || sf != of)) goto L_996af6;
L_996adc: /* 996adc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_996ae0: /* 996ae0: mov edx, dword ptr [ebx + esi*4] */
  edx = R32((uint32_t)(ebx + esi*4));
/* 996ae3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996ae4: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996ae9u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996ae9: mov eax, dword ptr [0xcf7714] */
  eax = R32((uint32_t)(0xcf7714u));
/* 996aee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996af1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 996af2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996af4: jl 0x996ae0 */
  if ((sf != of)) goto L_996ae0;
L_996af6: /* 996af6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996af7: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996afcu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996afc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 996b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996b01: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996b06u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996b06: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 996b0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996b0b: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996b10u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996b10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996b13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 996b14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 996b15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996b16: xor eax, eax */
  eax = 0;
/* 996b18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996b19: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996b1c: ret  */
  esp += 4; SPILL(); return;
}

void f_99698a(void) {
  LOAD_REGS();
L_99698a: /* 99698a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_996990: /* 996990: mov edx, dword ptr [0xcf7710] */
  edx = R32((uint32_t)(0xcf7710u));
/* 996996: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 996999: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99699a: call 0x99cf4e */
  esp -= 4; W32(esp, 0x99699fu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 99699f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9969a2: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 9969a5: mov eax, dword ptr [0xcf7714] */
  eax = R32((uint32_t)(0xcf7714u));
/* 9969aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9969ab: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9969ad: jl 0x996990 */
  if ((sf != of)) goto L_996990;
L_9969af: /* 9969af: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 9969b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9969b7: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9969bcu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9969bc: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
/* 9969c2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9969c6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9969ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9969cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9969cf: jle 0x996ad6 */
  if ((zf || sf != of)) goto L_996ad6;
L_9969d5: /* 9969d5: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 9969dd: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9969e1: jmp 0x9969f0 */
  goto L_9969f0;
L_9969e3: /* 9969e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9969e7: jmp 0x9969f0 */
  goto L_9969f0;
L_9969f0: /* 9969f0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9969f4: mov esi, dword ptr [edx + 0x10] */
  esi = R32((uint32_t)(edx + 0x10u));
/* 9969f7: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 9969fe: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 996a02: mov ecx, eax */
  ecx = eax;
/* 996a04: mov edx, ecx */
  edx = ecx;
/* 996a06: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 996a09: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 996a0b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 996a0f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 996a11: mov ecx, edx */
  ecx = edx;
/* 996a13: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 996a17: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 996a1a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996a1c: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 996a1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996a22: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 996a26: xor eax, eax */
  eax = 0;
/* 996a28: xor edx, edx */
  edx = 0;
/* 996a2a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a2c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 996a30: jle 0x996a8f */
  if ((zf || sf != of)) goto L_996a8f;
L_996a32: /* 996a32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 996a36: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 996a39: imul ecx, dword ptr [esp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x24u)));
  ecx = (uint32_t)r;
  }
/* 996a3e: add ecx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996a42: xor esi, esi */
  esi = 0;
/* 996a44: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a46: jle 0x996a7c */
  if ((zf || sf != of)) goto L_996a7c;
L_996a48: /* 996a48: mov edi, dword ptr [0xcf7710] */
  edi = R32((uint32_t)(0xcf7710u));
/* 996a4e: imul edi, dword ptr [0xcf7708] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(0xcf7708u)));
  edi = (uint32_t)r;
  }
L_996a55: /* 996a55: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 996a58: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996a5a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a5c: jle 0x996a73 */
  if ((zf || sf != of)) goto L_996a73;
L_996a5e: /* 996a5e: mov ebp, edi */
  ebp = edi;
L_996a60: /* 996a60: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 996a62: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 996a64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996a65: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996a66: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 996a67: jne 0x996a60 */
  if (!zf) goto L_996a60;
L_996a69: /* 996a69: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 996a6d: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
L_996a73: /* 996a73: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 996a74: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996a76: jl 0x996a55 */
  if ((sf != of)) goto L_996a55;
L_996a78: /* 996a78: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_996a7c: /* 996a7c: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 996a80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996a84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996a85: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996a87: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996a89: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 996a8d: jl 0x996a32 */
  if ((sf != of)) goto L_996a32;
L_996a8f: /* 996a8f: xor eax, eax */
  eax = 0;
/* 996a91: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a93: jle 0x996acc */
  if ((zf || sf != of)) goto L_996acc;
L_996a95: /* 996a95: mov edx, dword ptr [0xcf7710] */
  edx = R32((uint32_t)(0xcf7710u));
/* 996a9b: imul edx, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edx = (uint32_t)r;
  }
L_996aa0: /* 996aa0: mov esi, dword ptr [ebx + eax*4] */
  esi = R32((uint32_t)(ebx + eax*4));
/* 996aa3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 996aa7: mov ecx, edx */
  ecx = edx;
/* 996aa9: mov ebp, ecx */
  ebp = ecx;
/* 996aab: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 996aae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 996ab0: mov ecx, ebp */
  ecx = ebp;
/* 996ab2: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
/* 996ab8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 996abb: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 996abd: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 996ac1: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 996ac3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996ac4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996ac6: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 996aca: jl 0x996aa0 */
  if ((sf != of)) goto L_996aa0;
L_996acc: /* 996acc: dec dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 996ad0: jne 0x9969e3 */
  if (!zf) goto L_9969e3;
L_996ad6: /* 996ad6: xor esi, esi */
  esi = 0;
/* 996ad8: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996ada: jle 0x996af6 */
  if ((zf || sf != of)) goto L_996af6;
L_996adc: /* 996adc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_996ae0: /* 996ae0: mov edx, dword ptr [ebx + esi*4] */
  edx = R32((uint32_t)(ebx + esi*4));
/* 996ae3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996ae4: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996ae9u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996ae9: mov eax, dword ptr [0xcf7714] */
  eax = R32((uint32_t)(0xcf7714u));
/* 996aee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996af1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 996af2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996af4: jl 0x996ae0 */
  if ((sf != of)) goto L_996ae0;
L_996af6: /* 996af6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996af7: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996afcu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996afc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 996b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996b01: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996b06u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996b06: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 996b0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996b0b: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996b10u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996b10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996b13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 996b14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 996b15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996b16: xor eax, eax */
  eax = 0;
/* 996b18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996b19: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996b1c: ret  */
  esp += 4; SPILL(); return;
}

void f_9969e9(void) {
  LOAD_REGS();
  goto L_9969e9;
L_9969e3: /* 9969e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9969e7: jmp 0x9969f0 */
  goto L_9969f0;
L_9969e9: /* 9969e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9969f0: /* 9969f0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9969f4: mov esi, dword ptr [edx + 0x10] */
  esi = R32((uint32_t)(edx + 0x10u));
/* 9969f7: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 9969fe: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 996a02: mov ecx, eax */
  ecx = eax;
/* 996a04: mov edx, ecx */
  edx = ecx;
/* 996a06: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 996a09: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 996a0b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 996a0f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 996a11: mov ecx, edx */
  ecx = edx;
/* 996a13: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 996a17: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 996a1a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996a1c: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 996a1e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996a22: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 996a26: xor eax, eax */
  eax = 0;
/* 996a28: xor edx, edx */
  edx = 0;
/* 996a2a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a2c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 996a30: jle 0x996a8f */
  if ((zf || sf != of)) goto L_996a8f;
L_996a32: /* 996a32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 996a36: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 996a39: imul ecx, dword ptr [esp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x24u)));
  ecx = (uint32_t)r;
  }
/* 996a3e: add ecx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996a42: xor esi, esi */
  esi = 0;
/* 996a44: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a46: jle 0x996a7c */
  if ((zf || sf != of)) goto L_996a7c;
L_996a48: /* 996a48: mov edi, dword ptr [0xcf7710] */
  edi = R32((uint32_t)(0xcf7710u));
/* 996a4e: imul edi, dword ptr [0xcf7708] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(0xcf7708u)));
  edi = (uint32_t)r;
  }
L_996a55: /* 996a55: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 996a58: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996a5a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a5c: jle 0x996a73 */
  if ((zf || sf != of)) goto L_996a73;
L_996a5e: /* 996a5e: mov ebp, edi */
  ebp = edi;
L_996a60: /* 996a60: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 996a62: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 996a64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996a65: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 996a66: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 996a67: jne 0x996a60 */
  if (!zf) goto L_996a60;
L_996a69: /* 996a69: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 996a6d: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
L_996a73: /* 996a73: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 996a74: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996a76: jl 0x996a55 */
  if ((sf != of)) goto L_996a55;
L_996a78: /* 996a78: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_996a7c: /* 996a7c: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 996a80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996a84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996a85: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 996a87: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996a89: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 996a8d: jl 0x996a32 */
  if ((sf != of)) goto L_996a32;
L_996a8f: /* 996a8f: xor eax, eax */
  eax = 0;
/* 996a91: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996a93: jle 0x996acc */
  if ((zf || sf != of)) goto L_996acc;
L_996a95: /* 996a95: mov edx, dword ptr [0xcf7710] */
  edx = R32((uint32_t)(0xcf7710u));
/* 996a9b: imul edx, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edx = (uint32_t)r;
  }
L_996aa0: /* 996aa0: mov esi, dword ptr [ebx + eax*4] */
  esi = R32((uint32_t)(ebx + eax*4));
/* 996aa3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 996aa7: mov ecx, edx */
  ecx = edx;
/* 996aa9: mov ebp, ecx */
  ebp = ecx;
/* 996aab: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 996aae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 996ab0: mov ecx, ebp */
  ecx = ebp;
/* 996ab2: mov ebp, dword ptr [0xcf7714] */
  ebp = R32((uint32_t)(0xcf7714u));
/* 996ab8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 996abb: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 996abd: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 996ac1: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 996ac3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996ac4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996ac6: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 996aca: jl 0x996aa0 */
  if ((sf != of)) goto L_996aa0;
L_996acc: /* 996acc: dec dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 996ad0: jne 0x9969e3 */
  if (!zf) goto L_9969e3;
L_996ad6: /* 996ad6: xor esi, esi */
  esi = 0;
/* 996ad8: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996ada: jle 0x996af6 */
  if ((zf || sf != of)) goto L_996af6;
L_996adc: /* 996adc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_996ae0: /* 996ae0: mov edx, dword ptr [ebx + esi*4] */
  edx = R32((uint32_t)(ebx + esi*4));
/* 996ae3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996ae4: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996ae9u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996ae9: mov eax, dword ptr [0xcf7714] */
  eax = R32((uint32_t)(0xcf7714u));
/* 996aee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996af1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 996af2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996af4: jl 0x996ae0 */
  if ((sf != of)) goto L_996ae0;
L_996af6: /* 996af6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996af7: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996afcu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996afc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 996b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996b01: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996b06u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996b06: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 996b0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996b0b: call 0x99cf5a */
  esp -= 4; W32(esp, 0x996b10u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 996b10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996b13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 996b14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 996b15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996b16: xor eax, eax */
  eax = 0;
/* 996b18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996b19: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996b1c: ret  */
  esp += 4; SPILL(); return;
}

void f_996b20(void) {
  LOAD_REGS();
L_996b20: /* 996b20: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 996b23: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996b25: jne 0x996b2a */
  if (!zf) goto L_996b2a;
L_996b27: /* 996b27: xor eax, eax */
  eax = 0;
/* 996b29: ret  */
  esp += 4; SPILL(); return;
L_996b2a: /* 996b2a: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 996b2d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996b2f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 996b32: ret  */
  esp += 4; SPILL(); return;
}

void f_996b40(void) {
  LOAD_REGS();
L_996b40: /* 996b40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 996b42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 996b46: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996b48: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 996b4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_996b50(void) {
  LOAD_REGS();
L_996b50: /* 996b50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 996b52: ret  */
  esp += 4; SPILL(); return;
}

void f_996b60(void) {
  LOAD_REGS();
L_996b60: /* 996b60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 996b64: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 996b66: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 996b6d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 996b71: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 996b73: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996b75: ret 8 */
  esp += 12; SPILL(); return;
}

void f_996b80(void) {
  LOAD_REGS();
L_996b80: /* 996b80: mov eax, ecx */
  eax = ecx;
/* 996b82: add dword ptr [eax], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 996b85: ret  */
  esp += 4; SPILL(); return;
}

void f_996b90(void) {
  LOAD_REGS();
L_996b90: /* 996b90: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 996b92: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 996b96: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996b98: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 996b9a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 996b9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996b9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_996ba0(void) {
  LOAD_REGS();
L_996ba0: /* 996ba0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996ba1: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 996ba5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 996ba6: ret  */
  esp += 4; SPILL(); return;
}

void f_996bb0(void) {
  LOAD_REGS();
L_996bb0: /* 996bb0: mov eax, ecx */
  eax = ecx;
/* 996bb2: add dword ptr [eax], -4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 996bb5: ret  */
  esp += 4; SPILL(); return;
}

void f_996bc0(void) {
  LOAD_REGS();
L_996bc0: /* 996bc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996bc1: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 996bc5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 996bc6: ret  */
  esp += 4; SPILL(); return;
}

void f_996bd0(void) {
  LOAD_REGS();
L_996bd0: /* 996bd0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 996bd3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 996bd7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996bd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_996be0(void) {
  LOAD_REGS();
L_996be0: /* 996be0: mov eax, ecx */
  eax = ecx;
/* 996be2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 996be6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 996be8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 996bea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_996bf0(void) {
  LOAD_REGS();
L_996bf0: /* 996bf0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 996bf2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 996bf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996bf7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 996bf9: xor ecx, ecx */
  ecx = 0;
/* 996bfb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996bfd: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 996c00: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 996c02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 996c03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_996c10(void) {
  LOAD_REGS();
L_996c10: /* 996c10: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 996c14: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 996c18: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996c1a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996c1e: je 0x996c31 */
  if (zf) goto L_996c31;
L_996c20: /* 996c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_996c21: /* 996c21: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 996c24: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996c27: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 996c2a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996c2c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 996c2e: jne 0x996c21 */
  if (!zf) goto L_996c21;
L_996c30: /* 996c30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_996c31: /* 996c31: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 996c35: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996c37: ret  */
  esp += 4; SPILL(); return;
}

void f_996c40(void) {
  LOAD_REGS();
L_996c40: /* 996c40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 996c44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996c46: je 0x996c50 */
  if (zf) goto L_996c50;
L_996c48: /* 996c48: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 996c4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 996c4e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_996c50: /* 996c50: ret 8 */
  esp += 12; SPILL(); return;
}

void f_996c60(void) {
  LOAD_REGS();
L_996c60: /* 996c60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 996c64: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 996c68: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996c6a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 996c6e: je 0x996c84 */
  if (zf) goto L_996c84;
L_996c70: /* 996c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_996c71: /* 996c71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996c73: je 0x996c79 */
  if (zf) goto L_996c79;
L_996c75: /* 996c75: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 996c77: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_996c79: /* 996c79: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996c7c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996c7f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996c81: jne 0x996c71 */
  if (!zf) goto L_996c71;
L_996c83: /* 996c83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_996c84: /* 996c84: ret  */
  esp += 4; SPILL(); return;
}

void f_996c90(void) {
  LOAD_REGS();
L_996c90: /* 996c90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 996c94: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 996c98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996c9a: je 0x996cad */
  if (zf) goto L_996cad;
L_996c9c: /* 996c9c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 996ca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_996ca1: /* 996ca1: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 996ca3: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 996ca5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996ca8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996caa: jne 0x996ca1 */
  if (!zf) goto L_996ca1;
L_996cac: /* 996cac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_996cad: /* 996cad: ret  */
  esp += 4; SPILL(); return;
}

void f_996cb0(void) {
  LOAD_REGS();
L_996cb0: /* 996cb0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 996cb4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 996cb8: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996cba: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996cbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996cbf: je 0x996cd0 */
  if (zf) goto L_996cd0;
L_996cc1: /* 996cc1: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 996cc4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996cc7: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 996cca: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 996ccc: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 996cce: jne 0x996cc1 */
  if (!zf) goto L_996cc1;
L_996cd0: /* 996cd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 996cd4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996cd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 996cd7: ret  */
  esp += 4; SPILL(); return;
}

void f_996ce0(void) {
  LOAD_REGS();
L_996ce0: /* 996ce0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 996ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 996ce6: jbe 0x996d02 */
  if ((cf | zf)) goto L_996d02;
L_996ce8: /* 996ce8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 996cec: mov ecx, eax */
  ecx = eax;
/* 996cee: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 996cf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_996cf3: /* 996cf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996cf5: je 0x996cfb */
  if (zf) goto L_996cfb;
L_996cf7: /* 996cf7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 996cf9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_996cfb: /* 996cfb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 996cfe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 996cff: jne 0x996cf3 */
  if (!zf) goto L_996cf3;
L_996d01: /* 996d01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_996d02: /* 996d02: ret  */
  esp += 4; SPILL(); return;
}

void f_996d10(void) {
  LOAD_REGS();
L_996d10: /* 996d10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 996d14: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996d18: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 996d1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996d1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996d1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996d1f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 996d23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996d24: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 996d28: mov eax, esp */
  eax = esp;
/* 996d2a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996d2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996d2d: mov eax, esp */
  eax = esp;
/* 996d2f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 996d31: call 0x996c60 */
  esp -= 4; W32(esp, 0x996d36u); SPILL(); f_996c60(); if (g_unwind) return; RELOAD();
/* 996d36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996d39: ret  */
  esp += 4; SPILL(); return;
}

void f_996d40(void) {
  LOAD_REGS();
L_996d40: /* 996d40: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 996d43: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 996d45: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 996d48: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 996d4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996d4c: mov dword ptr [0xcf772c], eax */
  W32((uint32_t)(0xcf772cu), eax);
/* 996d51: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 996d54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 996d55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 996d56: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 996d59: mov dword ptr [0xcf7744], eax */
  W32((uint32_t)(0xcf7744u), eax);
/* 996d5e: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 996d61: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 996d64: mov dword ptr [0xcf7724], edi */
  W32((uint32_t)(0xcf7724u), edi);
/* 996d6a: mov edi, ecx */
  edi = ecx;
/* 996d6c: mov dword ptr [0xcf7728], ecx */
  W32((uint32_t)(0xcf7728u), ecx);
/* 996d72: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 996d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996d76: mov dword ptr [0xcf7748], edx */
  W32((uint32_t)(0xcf7748u), edx);
/* 996d7c: mov dword ptr [0xcf7730], eax */
  W32((uint32_t)(0xcf7730u), eax);
/* 996d81: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 996d85: call 0x99cf4e */
  esp -= 4; W32(esp, 0x996d8au); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 996d8a: xor ebp, ebp */
  ebp = 0;
/* 996d8c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996d8f: mov edx, eax */
  edx = eax;
/* 996d91: xor ebx, ebx */
  ebx = 0;
/* 996d93: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996d95: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 996d99: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 996d9d: jle 0x996dff */
  if ((zf || sf != of)) goto L_996dff;
L_996d9f: /* 996d9f: lea edi, [edx + 4] */
  edi = (uint32_t)(edx + 0x4u);
L_996da2: /* 996da2: mov dword ptr [edi - 4], ebp */
  W32((uint32_t)(edi + 0xfffffffcu), ebp);
/* 996da5: mov edx, dword ptr [0xcf7730] */
  edx = R32((uint32_t)(0xcf7730u));
/* 996dab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996dac: call 0x99cf4e */
  esp -= 4; W32(esp, 0x996db1u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 996db1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 996db3: mov ecx, dword ptr [0xcf7730] */
  ecx = R32((uint32_t)(0xcf7730u));
/* 996db9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996dbc: xor eax, eax */
  eax = 0;
/* 996dbe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 996dc0: jle 0x996de4 */
  if ((zf || sf != of)) goto L_996de4;
L_996dc2: /* 996dc2: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 996dc5: mov cl, byte ptr [ecx + ebx*4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebx*4))) & 0xffu);
/* 996dc8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 996dca: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 996dd1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 996dd2: mov byte ptr [eax + edx], cl */
  W8((uint32_t)(eax + edx), (ecx & 0xffu));
/* 996dd5: mov ecx, dword ptr [0xcf7730] */
  ecx = R32((uint32_t)(0xcf7730u));
/* 996ddb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 996ddc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996dde: jl 0x996dc2 */
  if ((sf != of)) goto L_996dc2;
L_996de0: /* 996de0: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
L_996de4: /* 996de4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 996de8: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 996de9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 996dec: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 996dee: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 996df2: jl 0x996da2 */
  if ((sf != of)) goto L_996da2;
L_996df4: /* 996df4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 996df8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996df9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 996dfa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996dfb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996dfe: ret  */
  esp += 4; SPILL(); return;
L_996dff: /* 996dff: mov eax, edi */
  eax = edi;
/* 996e01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996e02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 996e03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996e04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996e07: ret  */
  esp += 4; SPILL(); return;
}

void f_996e10(void) {
  LOAD_REGS();
L_996e10: /* 996e10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e11: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 996e15: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 996e19: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 996e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996e1e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 996e22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e23: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 996e27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996e29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e2a: call 0x996ce0 */
  esp -= 4; W32(esp, 0x996e2fu); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 996e2f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996e32: ret  */
  esp += 4; SPILL(); return;
}

void f_996e40(void) {
  LOAD_REGS();
L_996e40: /* 996e40: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 996e44: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 996e48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996e49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e4a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 996e4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e50: mov eax, esp */
  eax = esp;
/* 996e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e53: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 996e57: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 996e59: mov eax, esp */
  eax = esp;
/* 996e5b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996e5d: call 0x996c60 */
  esp -= 4; W32(esp, 0x996e62u); SPILL(); f_996c60(); if (g_unwind) return; RELOAD();
/* 996e62: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996e65: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_996e70(void) {
  LOAD_REGS();
L_996e70: /* 996e70: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 996e74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996e75: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 996e79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 996e7a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 996e7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996e7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e80: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 996e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996e86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 996e87: call 0x996ce0 */
  esp -= 4; W32(esp, 0x996e8cu); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 996e8c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996e8f: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* 996e92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996e93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 996e94: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_996ea0(void) {
  LOAD_REGS();
L_996ea0: /* 996ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 996ea1: mov ebp, esp */
  ebp = esp;
/* 996ea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 996ea5: push 0x9da5b0 */
  { uint32_t v = 0x9da5b0u; esp -= 4; W32(esp, v); }
/* 996eaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 996eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996eb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 996eb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 996ebb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 996ebe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996ebf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996ec0: mov esi, ecx */
  esi = ecx;
/* 996ec2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 996ec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 996ec5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 996ec8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996eca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 996ecd: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 996ed0: jne 0x996ed6 */
  if (!zf) goto L_996ed6;
L_996ed2: /* 996ed2: xor eax, eax */
  eax = 0;
/* 996ed4: jmp 0x996ede */
  goto L_996ede;
L_996ed6: /* 996ed6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 996ed9: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996edb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_996ede: /* 996ede: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 996ee1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996ee3: je 0x99712a */
  if (zf) goto L_99712a;
L_996ee9: /* 996ee9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996eeb: jne 0x996ef1 */
  if (!zf) goto L_996ef1;
L_996eed: /* 996eed: xor ecx, ecx */
  ecx = 0;
/* 996eef: jmp 0x996ef9 */
  goto L_996ef9;
L_996ef1: /* 996ef1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 996ef4: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 996ef6: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_996ef9: /* 996ef9: mov ebx, 0x3fffffff */
  ebx = 0x3fffffffu;
/* 996efe: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 996f00: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 996f02: jae 0x996f1e */
  if (!cf) goto L_996f1e;
L_996f04: /* 996f04: mov ecx, esi */
  ecx = esi;
/* 996f06: call 0x989160 */
  esp -= 4; W32(esp, 0x996f0bu); SPILL(); f_989160(); if (g_unwind) return; RELOAD();
/* 996f0b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 996f0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 996f15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 996f16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 996f17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 996f18: mov esp, ebp */
  esp = ebp;
/* 996f1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 996f1b: ret 0xc */
  esp += 16; SPILL(); return;
L_996f1e: /* 996f1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996f20: jne 0x996f26 */
  if (!zf) goto L_996f26;
L_996f22: /* 996f22: xor ecx, ecx */
  ecx = 0;
/* 996f24: jmp 0x996f2e */
  goto L_996f2e;
L_996f26: /* 996f26: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 996f29: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 996f2b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_996f2e: /* 996f2e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996f30: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 996f32: jae 0x997048 */
  if (!cf) goto L_997048;
L_996f38: /* 996f38: mov ecx, eax */
  ecx = eax;
/* 996f3a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 996f3c: mov ebx, 0x3fffffff */
  ebx = 0x3fffffffu;
/* 996f41: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 996f43: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 996f45: jae 0x996f4b */
  if (!cf) goto L_996f4b;
L_996f47: /* 996f47: xor eax, eax */
  eax = 0;
/* 996f49: jmp 0x996f4d */
  goto L_996f4d;
L_996f4b: /* 996f4b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_996f4d: /* 996f4d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996f4f: jne 0x996f55 */
  if (!zf) goto L_996f55;
L_996f51: /* 996f51: xor ecx, ecx */
  ecx = 0;
/* 996f53: jmp 0x996f5d */
  goto L_996f5d;
L_996f55: /* 996f55: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 996f58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 996f5a: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_996f5d: /* 996f5d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 996f5f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 996f61: jae 0x996f75 */
  if (!cf) goto L_996f75;
L_996f63: /* 996f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996f65: jne 0x996f6b */
  if (!zf) goto L_996f6b;
L_996f67: /* 996f67: xor eax, eax */
  eax = 0;
/* 996f69: jmp 0x996f73 */
  goto L_996f73;
L_996f6b: /* 996f6b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 996f6e: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996f70: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_996f73: /* 996f73: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_996f75: /* 996f75: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 996f78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996f79: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 996f7c: call 0x6c242d */
  esp -= 4; W32(esp, 0x996f81u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 996f81: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 996f84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996f87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996f88: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 996f8b: mov ebx, eax */
  ebx = eax;
/* 996f8d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 996f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996f91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 996f92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996f93: mov ecx, esp */
  ecx = esp;
/* 996f95: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 996f97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996f98: mov ecx, esp */
  ecx = esp;
/* 996f9a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 996f9d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 996fa4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 996fa6: call 0x996c60 */
  esp -= 4; W32(esp, 0x996fabu); SPILL(); f_996c60(); if (g_unwind) return; RELOAD();
/* 996fab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 996fae: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996fb1: mov edi, eax */
  edi = eax;
/* 996fb3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 996fb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996fb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996fb8: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 996fbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996fbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996fbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 996fbe: call 0x996ce0 */
  esp -= 4; W32(esp, 0x996fc3u); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 996fc3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 996fc6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 996fc9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 996fcc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996fcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 996fd0: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 996fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 996fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 996fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996fd6: mov eax, esp */
  eax = esp;
/* 996fd8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996fda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 996fdb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 996fde: mov eax, esp */
  eax = esp;
/* 996fe0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 996fe2: call 0x996c60 */
  esp -= 4; W32(esp, 0x996fe7u); SPILL(); f_996c60(); if (g_unwind) return; RELOAD();
/* 996fe7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 996fea: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 996fed: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 996fef: jne 0x996ff5 */
  if (!zf) goto L_996ff5;
L_996ff1: /* 996ff1: xor eax, eax */
  eax = 0;
/* 996ff3: jmp 0x996ffd */
  goto L_996ffd;
L_996ff5: /* 996ff5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 996ff8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 996ffa: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_996ffd: /* 996ffd: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 997000: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 997002: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997004: je 0x99700f */
  if (zf) goto L_99700f;
L_997006: /* 997006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997007: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x99700cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 99700c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_99700f: /* 99700f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 997012: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 997014: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 997017: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 99701a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 99701d: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 997020: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 997023: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 99702a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99702b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99702c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99702d: mov esp, ebp */
  esp = ebp;
/* 99702f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997030: ret 0xc */
  esp += 16; SPILL(); return;
L_997048: /* 997048: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 99704b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 99704e: mov eax, ebx */
  eax = ebx;
/* 997050: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997052: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 997055: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 997057: jae 0x9970ba */
  if (!cf) goto L_9970ba;
L_997059: /* 997059: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 997060: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 997063: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 997065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997066: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997067: mov eax, esp */
  eax = esp;
/* 997069: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 99706c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99706d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 99706f: mov eax, esp */
  eax = esp;
/* 997071: mov ecx, esi */
  ecx = esi;
/* 997073: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 997076: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 997078: call 0x996e40 */
  esp -= 4; W32(esp, 0x99707du); SPILL(); f_996e40(); if (g_unwind) return; RELOAD();
/* 99707d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 997080: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 997083: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 997086: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997087: mov edx, ecx */
  edx = ecx;
/* 997089: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99708b: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 99708e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997092: mov ecx, esi */
  ecx = esi;
/* 997094: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 99709b: call 0x996e70 */
  esp -= 4; W32(esp, 0x9970a0u); SPILL(); f_996e70(); if (g_unwind) return; RELOAD();
/* 9970a0: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 9970a3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9970a6: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9970a8: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 9970ab: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 9970ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9970af: mov esi, ebx */
  esi = ebx;
/* 9970b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970b2: mov eax, esp */
  eax = esp;
/* 9970b4: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9970b6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 9970b8: jmp 0x997117 */
  goto L_997117;
L_9970ba: /* 9970ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9970bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970bc: mov eax, esp */
  eax = esp;
/* 9970be: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 9970c0: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 9970c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970c4: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9970c7: mov ecx, esp */
  ecx = esp;
/* 9970c9: mov eax, ebx */
  eax = ebx;
/* 9970cb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9970cd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9970cf: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 9970d2: mov ecx, esi */
  ecx = esi;
/* 9970d4: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 9970d7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 9970da: call 0x996e40 */
  esp -= 4; W32(esp, 0x9970dfu); SPILL(); f_996e40(); if (g_unwind) return; RELOAD();
/* 9970df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970e0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9970e3: mov eax, esp */
  eax = esp;
/* 9970e5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 9970e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970e9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9970ec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 9970ee: mov eax, esp */
  eax = esp;
/* 9970f0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 9970f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9970f6: mov eax, esp */
  eax = esp;
/* 9970f8: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 9970fb: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 9970fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9970ff: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 997101: call 0x996cb0 */
  esp -= 4; W32(esp, 0x997106u); SPILL(); f_996cb0(); if (g_unwind) return; RELOAD();
/* 997106: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997109: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 99710c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99710d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99710e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 997111: mov eax, esp */
  eax = esp;
/* 997113: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 997115: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_997117: /* 997117: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 99711a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99711b: mov eax, esp */
  eax = esp;
/* 99711d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 99711f: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 997122: call 0x996c90 */
  esp -= 4; W32(esp, 0x997127u); SPILL(); f_996c90(); if (g_unwind) return; RELOAD();
/* 997127: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_99712a: /* 99712a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 99712d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99712e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99712f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 997136: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997137: mov esp, ebp */
  esp = ebp;
/* 997139: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99713a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997033(void) {
  LOAD_REGS();
L_997033: /* 997033: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 997036: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997037: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x99703cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 99703c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
  SPILL(); f_99703f(); return;
}

void f_99703f(void) {
  LOAD_REGS();
L_99703f: /* 99703f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 997041: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 997043: call 0x99caf8 */
  esp -= 4; W32(esp, 0x997048u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 997048: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 99704b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 99704e: mov eax, ebx */
  eax = ebx;
/* 997050: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997052: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 997055: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 997057: jae 0x9970ba */
  if (!cf) goto L_9970ba;
L_997059: /* 997059: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 997060: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 997063: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 997065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997066: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997067: mov eax, esp */
  eax = esp;
/* 997069: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 99706c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99706d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 99706f: mov eax, esp */
  eax = esp;
/* 997071: mov ecx, esi */
  ecx = esi;
/* 997073: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 997076: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 997078: call 0x996e40 */
  esp -= 4; W32(esp, 0x99707du); SPILL(); f_996e40(); if (g_unwind) return; RELOAD();
/* 99707d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 997080: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 997083: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 997086: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997087: mov edx, ecx */
  edx = ecx;
/* 997089: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99708b: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 99708e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997092: mov ecx, esi */
  ecx = esi;
/* 997094: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 99709b: call 0x996e70 */
  esp -= 4; W32(esp, 0x9970a0u); SPILL(); f_996e70(); if (g_unwind) return; RELOAD();
/* 9970a0: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 9970a3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9970a6: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9970a8: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 9970ab: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 9970ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9970af: mov esi, ebx */
  esi = ebx;
/* 9970b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970b2: mov eax, esp */
  eax = esp;
/* 9970b4: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9970b6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 9970b8: jmp 0x997117 */
  goto L_997117;
L_9970ba: /* 9970ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9970bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970bc: mov eax, esp */
  eax = esp;
/* 9970be: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 9970c0: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 9970c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970c4: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9970c7: mov ecx, esp */
  ecx = esp;
/* 9970c9: mov eax, ebx */
  eax = ebx;
/* 9970cb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9970cd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9970cf: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 9970d2: mov ecx, esi */
  ecx = esi;
/* 9970d4: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 9970d7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 9970da: call 0x996e40 */
  esp -= 4; W32(esp, 0x9970dfu); SPILL(); f_996e40(); if (g_unwind) return; RELOAD();
/* 9970df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970e0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9970e3: mov eax, esp */
  eax = esp;
/* 9970e5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 9970e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970e9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9970ec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 9970ee: mov eax, esp */
  eax = esp;
/* 9970f0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 9970f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9970f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9970f6: mov eax, esp */
  eax = esp;
/* 9970f8: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 9970fb: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 9970fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9970ff: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 997101: call 0x996cb0 */
  esp -= 4; W32(esp, 0x997106u); SPILL(); f_996cb0(); if (g_unwind) return; RELOAD();
/* 997106: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997109: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 99710c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99710d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99710e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 997111: mov eax, esp */
  eax = esp;
/* 997113: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 997115: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_997117: /* 997117: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 99711a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99711b: mov eax, esp */
  eax = esp;
/* 99711d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 99711f: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 997122: call 0x996c90 */
  esp -= 4; W32(esp, 0x997127u); SPILL(); f_996c90(); if (g_unwind) return; RELOAD();
/* 997127: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99712a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 99712d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99712e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99712f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 997136: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997137: mov esp, ebp */
  esp = ebp;
/* 997139: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99713a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997140(void) {
  LOAD_REGS();
L_997140: /* 997140: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 997144: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997145: mov esi, ecx */
  esi = ecx;
/* 997147: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 99714a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99714c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99714d: je 0x99715b */
  if (zf) goto L_99715b;
L_99714f: /* 99714f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 997152: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997154: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 997157: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997159: jne 0x99715f */
  if (!zf) goto L_99715f;
L_99715b: /* 99715b: xor edi, edi */
  edi = 0;
/* 99715d: jmp 0x997166 */
  goto L_997166;
L_99715f: /* 99715f: mov edi, edx */
  edi = edx;
/* 997161: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 997163: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
L_997166: /* 997166: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99716a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99716b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99716d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99716e: mov eax, esp */
  eax = esp;
/* 997170: mov ecx, esi */
  ecx = esi;
/* 997172: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 997174: call 0x996ea0 */
  esp -= 4; W32(esp, 0x997179u); SPILL(); f_996ea0(); if (g_unwind) return; RELOAD();
/* 997179: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 99717c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 997180: lea edx, [ecx + edi*4] */
  edx = (uint32_t)(ecx + edi*4);
/* 997183: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997184: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 997186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997187: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997190(void) {
  LOAD_REGS();
L_997190: /* 997190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997191: mov esi, ecx */
  esi = ecx;
/* 997193: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 997196: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997198: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997199: jne 0x99719f */
  if (!zf) goto L_99719f;
L_99719b: /* 99719b: xor ecx, ecx */
  ecx = 0;
/* 99719d: jmp 0x9971a7 */
  goto L_9971a7;
L_99719f: /* 99719f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9971a2: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9971a4: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_9971a7: /* 9971a7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9971a9: je 0x9971db */
  if (zf) goto L_9971db;
L_9971ab: /* 9971ab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9971ae: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9971b0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9971b3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9971b5: jae 0x9971db */
  if (!cf) goto L_9971db;
L_9971b7: /* 9971b7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9971bb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9971bf: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 9971c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9971c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9971c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9971c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9971c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9971c8: call 0x996ce0 */
  esp -= 4; W32(esp, 0x9971cdu); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 9971cd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9971d0: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9971d3: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 9971d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9971d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9971d8: ret 4 */
  esp += 8; SPILL(); return;
L_9971db: /* 9971db: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9971df: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9971e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9971e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9971e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9971e6: mov ecx, esp */
  ecx = esp;
/* 9971e8: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9971ea: mov ecx, esi */
  ecx = esi;
/* 9971ec: call 0x996ea0 */
  esp -= 4; W32(esp, 0x9971f1u); SPILL(); f_996ea0(); if (g_unwind) return; RELOAD();
/* 9971f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9971f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9971f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997200(void) {
  LOAD_REGS();
L_997200: /* 997200: mov ecx, dword ptr [0xcf7748] */
  ecx = R32((uint32_t)(0xcf7748u));
/* 997206: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 997209: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99720a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99720b: mov eax, 1 */
  eax = 0x1u;
/* 997210: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 997212: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997213: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997214: jne 0x99739c */
  if (!zf) goto L_99739c;
L_99721a: /* 99721a: cmp dword ptr [0xcf7724], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7724u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 997220: jne 0x99739c */
  if (!zf) goto L_99739c;
L_997226: /* 997226: cmp dword ptr [0xcf7728], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7728u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997230: jg 0x99739c */
  if ((!zf && sf == of)) goto L_99739c;
L_997236: /* 997236: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 99723a: mov eax, dword ptr [0xcf774c] */
  eax = R32((uint32_t)(0xcf774cu));
/* 99723f: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 997241: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 997244: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 997247: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 99724a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 99724d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 99724f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 997252: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 997255: mov dword ptr [eax + 0xc], 1 */
  W32((uint32_t)(eax + 0xcu), 0x1u);
/* 99725c: mov dword ptr [eax + 0x10], ebp */
  W32((uint32_t)(eax + 0x10u), ebp);
/* 99725f: cmp dword ptr [0xcf7744], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7744u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 997265: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 997269: jne 0x99739c */
  if (!zf) goto L_99739c;
L_99726f: /* 99726f: mov eax, edi */
  eax = edi;
/* 997271: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 997274: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 997277: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997278: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 99727c: call 0x99cf4e */
  esp -= 4; W32(esp, 0x997281u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 997281: mov ebp, eax */
  ebp = eax;
/* 997283: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997284: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 997288: call 0x99cf4e */
  esp -= 4; W32(esp, 0x99728du); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 99728d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99728e: mov dword ptr [0xcf773c], eax */
  W32((uint32_t)(0xcf773cu), eax);
/* 997293: call 0x99cf4e */
  esp -= 4; W32(esp, 0x997298u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 997298: mov dword ptr [0xcf7740], eax */
  W32((uint32_t)(0xcf7740u), eax);
/* 99729d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9972a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9972a4: xor ebx, ebx */
  ebx = 0;
/* 9972a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9972a8: je 0x997372 */
  if (zf) goto L_997372;
L_9972ae: /* 9972ae: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_9972b2: /* 9972b2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9972b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9972b8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9972bc: je 0x997368 */
  if (zf) goto L_997368;
L_9972c2: /* 9972c2: xor eax, eax */
  eax = 0;
/* 9972c4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9972c6: jle 0x9972d7 */
  if ((zf || sf != of)) goto L_9972d7;
L_9972c8: /* 9972c8: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 9972cb: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 9972ce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9972cf: mov byte ptr [eax + ebp], cl */
  W8((uint32_t)(eax + ebp), (ecx & 0xffu));
/* 9972d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9972d3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9972d5: jl 0x9972c8 */
  if ((sf != of)) goto L_9972c8;
L_9972d7: /* 9972d7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9972db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9972dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9972dd: mov ecx, 0xcf7730 */
  ecx = 0xcf7730u;
/* 9972e2: call 0x999c80 */
  esp -= 4; W32(esp, 0x9972e7u); SPILL(); f_999c80(); if (g_unwind) return; RELOAD();
/* 9972e7: mov esi, dword ptr [0xcf774c] */
  esi = R32((uint32_t)(0xcf774cu));
/* 9972ed: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9972ef: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9972f2: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9972f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9972f7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9972fb: jne 0x997301 */
  if (!zf) goto L_997301;
L_9972fd: /* 9972fd: xor edx, edx */
  edx = 0;
/* 9972ff: jmp 0x997309 */
  goto L_997309;
L_997301: /* 997301: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 997304: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 997306: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_997309: /* 997309: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99730b: je 0x99733e */
  if (zf) goto L_99733e;
L_99730d: /* 99730d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 997310: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 997312: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 997315: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 997317: jae 0x99733e */
  if (!cf) goto L_99733e;
L_997319: /* 997319: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 99731d: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 997320: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997321: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997322: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 997326: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997327: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 997329: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99732a: call 0x996ce0 */
  esp -= 4; W32(esp, 0x99732fu); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 99732f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997332: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 997335: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 997338: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 99733c: jmp 0x997354 */
  goto L_997354;
L_99733e: /* 99733e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 997341: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 997345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997346: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 997348: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997349: mov ecx, esp */
  ecx = esp;
/* 99734b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 99734d: mov ecx, esi */
  ecx = esi;
/* 99734f: call 0x996ea0 */
  esp -= 4; W32(esp, 0x997354u); SPILL(); f_996ea0(); if (g_unwind) return; RELOAD();
L_997354: /* 997354: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 997358: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 99735c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 99735e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 997362: jne 0x9972c2 */
  if (!zf) goto L_9972c2;
L_997368: /* 997368: dec dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 99736c: jne 0x9972b2 */
  if (!zf) goto L_9972b2;
L_997372: /* 997372: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997373: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997378u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997378: mov edx, dword ptr [0xcf773c] */
  edx = R32((uint32_t)(0xcf773cu));
/* 99737e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99737f: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997384u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997384: mov eax, dword ptr [0xcf7740] */
  eax = R32((uint32_t)(0xcf7740u));
/* 997389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99738a: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99738fu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99738f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997392: xor eax, eax */
  eax = 0;
/* 997394: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997395: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997396: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997397: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997398: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99739b: ret  */
  esp += 4; SPILL(); return;
L_99739c: /* 99739c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99739d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99739e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99739f: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9973a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9973a3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9973a6: ret  */
  esp += 4; SPILL(); return;
}

void f_9973b0(void) {
  LOAD_REGS();
L_9973b0: /* 9973b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9973b4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9973b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9973b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9973ba: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9973be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9973bf: mov dword ptr [0xcf7720], esi */
  W32((uint32_t)(0xcf7720u), esi);
/* 9973c5: mov dword ptr [0xcf771c], eax */
  W32((uint32_t)(0xcf771cu), eax);
/* 9973ca: mov dword ptr [0xcf774c], ecx */
  W32((uint32_t)(0xcf774cu), ecx);
/* 9973d0: call 0x996d40 */
  esp -= 4; W32(esp, 0x9973d5u); SPILL(); f_996d40(); if (g_unwind) return; RELOAD();
/* 9973d5: mov edi, edx */
  edi = edx;
/* 9973d7: mov esi, eax */
  esi = eax;
/* 9973d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9973da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9973db: mov ecx, 0xcf7730 */
  ecx = 0xcf7730u;
/* 9973e0: call 0x999cd0 */
  esp -= 4; W32(esp, 0x9973e5u); SPILL(); f_999cd0(); if (g_unwind) return; RELOAD();
/* 9973e5: mov edx, dword ptr [0xcf771c] */
  edx = R32((uint32_t)(0xcf771cu));
/* 9973eb: mov ebp, eax */
  ebp = eax;
/* 9973ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9973ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9973ef: call 0x997200 */
  esp -= 4; W32(esp, 0x9973f4u); SPILL(); f_997200(); if (g_unwind) return; RELOAD();
/* 9973f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9973f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9973f9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9973fd: jle 0x997415 */
  if ((zf || sf != of)) goto L_997415;
L_9973ff: /* 9973ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997400: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
L_997403: /* 997403: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 997405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997406: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99740bu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99740b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99740e: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 997411: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 997412: jne 0x997403 */
  if (!zf) goto L_997403;
L_997414: /* 997414: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_997415: /* 997415: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997416: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99741bu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99741b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99741e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99741f: mov ecx, 0xcf7730 */
  ecx = 0xcf7730u;
/* 997424: call 0x9997c0 */
  esp -= 4; W32(esp, 0x997429u); SPILL(); f_9997c0(); if (g_unwind) return; RELOAD();
/* 997429: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99742d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99742e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99742f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997430: ret  */
  esp += 4; SPILL(); return;
}

void f_997440(void) {
  LOAD_REGS();
L_997440: /* 997440: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 997443: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997444: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997446: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 99744a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 99744c: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 99744f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 997452: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 997455: mov dword ptr [0xcf775c], eax */
  W32((uint32_t)(0xcf775cu), eax);
/* 99745a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 99745d: mov dword ptr [0xcf7774], eax */
  W32((uint32_t)(0xcf7774u), eax);
/* 997462: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 997465: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 997468: mov dword ptr [0xcf777c], ecx */
  W32((uint32_t)(0xcf777cu), ecx);
/* 99746e: lea ecx, [ebp*8] */
  ecx = (uint32_t)(ebp*8);
/* 997475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997476: mov dword ptr [0xcf7758], edx */
  W32((uint32_t)(0xcf7758u), edx);
/* 99747c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 997480: mov dword ptr [0xcf7760], eax */
  W32((uint32_t)(0xcf7760u), eax);
/* 997485: call 0x99cf4e */
  esp -= 4; W32(esp, 0x99748au); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 99748a: xor ebx, ebx */
  ebx = 0;
/* 99748c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99748f: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997491: mov edx, eax */
  edx = eax;
/* 997493: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 997497: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 99749b: jle 0x9974fb */
  if ((zf || sf != of)) goto L_9974fb;
L_99749d: /* 99749d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99749e: lea edi, [edx + 4] */
  edi = (uint32_t)(edx + 0x4u);
L_9974a1: /* 9974a1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9974a5: mov dword ptr [edi - 4], edx */
  W32((uint32_t)(edi + 0xfffffffcu), edx);
/* 9974a8: mov eax, dword ptr [0xcf7760] */
  eax = R32((uint32_t)(0xcf7760u));
/* 9974ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9974ae: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9974b3u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9974b3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9974b5: mov ecx, dword ptr [0xcf7760] */
  ecx = R32((uint32_t)(0xcf7760u));
/* 9974bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9974be: xor eax, eax */
  eax = 0;
/* 9974c0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9974c2: jle 0x9974e6 */
  if ((zf || sf != of)) goto L_9974e6;
L_9974c4: /* 9974c4: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 9974c7: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 9974c9: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 9974d0: mov cl, byte ptr [ecx + edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx))) & 0xffu);
/* 9974d3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9974d4: mov byte ptr [eax + ebp], cl */
  W8((uint32_t)(eax + ebp), (ecx & 0xffu));
/* 9974d7: mov ecx, dword ptr [0xcf7760] */
  ecx = R32((uint32_t)(0xcf7760u));
/* 9974dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9974de: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9974e0: jl 0x9974c4 */
  if ((sf != of)) goto L_9974c4;
L_9974e2: /* 9974e2: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_9974e6: /* 9974e6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9974ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9974eb: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9974ee: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9974f0: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9974f4: jl 0x9974a1 */
  if ((sf != of)) goto L_9974a1;
L_9974f6: /* 9974f6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9974fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_9974fb: /* 9974fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9974fc: mov eax, ebp */
  eax = ebp;
/* 9974fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9974ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997500: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997503: ret  */
  esp += 4; SPILL(); return;
}

void f_997510(void) {
  LOAD_REGS();
L_997510: /* 997510: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 997513: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 997517: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 99751b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 99751f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997522: mov dword ptr [0xcf7784], eax */
  W32((uint32_t)(0xcf7784u), eax);
/* 997527: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99752b: mov dword ptr [0xcf7778], ecx */
  W32((uint32_t)(0xcf7778u), ecx);
/* 997531: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 997535: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997537: mov dword ptr [0xcf7754], eax */
  W32((uint32_t)(0xcf7754u), eax);
/* 99753c: mov dword ptr [0xcf7750], edx */
  W32((uint32_t)(0xcf7750u), edx);
/* 997542: mov dword ptr [0xcf7780], ecx */
  W32((uint32_t)(0xcf7780u), ecx);
/* 997548: call 0x997440 */
  esp -= 4; W32(esp, 0x99754du); SPILL(); f_997440(); if (g_unwind) return; RELOAD();
/* 99754d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997550: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997552: mov ecx, 0xcf7760 */
  ecx = 0xcf7760u;
/* 997557: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 99755b: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 99755f: call 0x999cd0 */
  esp -= 4; W32(esp, 0x997564u); SPILL(); f_999cd0(); if (g_unwind) return; RELOAD();
/* 997564: mov esi, dword ptr [0xcf7784] */
  esi = R32((uint32_t)(0xcf7784u));
/* 99756a: mov edi, dword ptr [0xcf7758] */
  edi = R32((uint32_t)(0xcf7758u));
/* 997570: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 997574: mov eax, esi */
  eax = esi;
/* 997576: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 997577: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x997577);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 997579: mov ecx, dword ptr [0xcf7774] */
  ecx = R32((uint32_t)(0xcf7774u));
/* 99757f: mov ebp, ecx */
  ebp = ecx;
/* 997581: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 997584: imul ebp, esi */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(esi);
  ebp = (uint32_t)r;
  }
/* 997587: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 99758b: mov ecx, dword ptr [0xcf7780] */
  ecx = R32((uint32_t)(0xcf7780u));
/* 997591: mov ebx, eax */
  ebx = eax;
/* 997593: mov eax, dword ptr [0xcf7778] */
  eax = R32((uint32_t)(0xcf7778u));
/* 997598: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 997599: idiv dword ptr [0xcf777c] */
  { int32_t d = (int32_t)R32((uint32_t)(0xcf777cu)); if (!d) d = (int32_t)guest_divzero(0x997599);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99759f: mov edx, dword ptr [0xcf775c] */
  edx = R32((uint32_t)(0xcf775cu));
/* 9975a5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9975a7: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 9975aa: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 9975ae: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 9975b1: mov eax, dword ptr [0xcf7760] */
  eax = R32((uint32_t)(0xcf7760u));
/* 9975b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9975b7: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9975bcu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9975bc: mov ecx, dword ptr [0xcf7760] */
  ecx = R32((uint32_t)(0xcf7760u));
/* 9975c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9975c3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9975c7: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9975ccu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9975cc: mov edx, dword ptr [0xcf7760] */
  edx = R32((uint32_t)(0xcf7760u));
/* 9975d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9975d3: mov dword ptr [0xcf776c], eax */
  W32((uint32_t)(0xcf776cu), eax);
/* 9975d8: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9975ddu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9975dd: mov dword ptr [0xcf7770], eax */
  W32((uint32_t)(0xcf7770u), eax);
/* 9975e2: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9975e7: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 9975ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9975ef: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9975f4u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9975f4: mov edi, eax */
  edi = eax;
/* 9975f6: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9975fb: xor ebx, ebx */
  ebx = 0;
/* 9975fd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997600: xor esi, esi */
  esi = 0;
/* 997602: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997604: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 997608: jle 0x997626 */
  if ((zf || sf != of)) goto L_997626;
L_99760a: /* 99760a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_997610: /* 997610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997611: call 0x99cf4e */
  esp -= 4; W32(esp, 0x997616u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 997616: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997619: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
/* 99761c: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 997621: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997622: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997624: jl 0x997610 */
  if ((sf != of)) goto L_997610;
L_997626: /* 997626: cmp dword ptr [0xcf7778], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7778u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99762c: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 997630: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 997634: jle 0x9977ec */
  if ((zf || sf != of)) goto L_9977ec;
L_99763a: /* 99763a: mov ebp, dword ptr [0xcf7784] */
  ebp = R32((uint32_t)(0xcf7784u));
/* 997640: mov ebx, dword ptr [0xcf7750] */
  ebx = R32((uint32_t)(0xcf7750u));
/* 997646: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 99764b: jmp 0x997650 */
  goto L_997650;
L_997650: /* 997650: xor edx, edx */
  edx = 0;
/* 997652: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997654: jle 0x9976b8 */
  if ((zf || sf != of)) goto L_9976b8;
L_997656: /* 997656: jmp 0x997660 */
  goto L_997660;
L_997660: /* 997660: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 997664: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 997668: mov edi, dword ptr [edi + edx*4] */
  edi = R32((uint32_t)(edi + edx*4));
/* 99766b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99766d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 997671: jl 0x997685 */
  if ((sf != of)) goto L_997685;
L_997673: /* 997673: mov esi, ecx */
  esi = ecx;
/* 997675: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 997678: xor eax, eax */
  eax = 0;
/* 99767a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99767c: mov ecx, esi */
  ecx = esi;
/* 99767e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997681: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 997683: jmp 0x99769b */
  goto L_99769b;
L_997685: /* 997685: mov eax, ecx */
  eax = ecx;
/* 997687: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99768a: mov esi, ebx */
  esi = ebx;
/* 99768c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99768e: mov ecx, eax */
  ecx = eax;
/* 997690: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 997694: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997697: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 997699: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_99769b: /* 99769b: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 99769f: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9976a4: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 9976a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9976a9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9976aa: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9976ac: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 9976b0: jl 0x997660 */
  if ((sf != of)) goto L_997660;
L_9976b2: /* 9976b2: mov dword ptr [0xcf7750], ebx */
  W32((uint32_t)(0xcf7750u), ebx);
L_9976b8: /* 9976b8: xor eax, eax */
  eax = 0;
/* 9976ba: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9976bc: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9976c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9976c4: jle 0x9977cf */
  if ((zf || sf != of)) goto L_9977cf;
L_9976ca: /* 9976ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9976d0: /* 9976d0: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9976d5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9976d9: xor edi, edi */
  edi = 0;
/* 9976db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9976dd: jle 0x99771c */
  if ((zf || sf != of)) goto L_99771c;
L_9976df: /* 9976df: mov ebp, dword ptr [0xcf7774] */
  ebp = R32((uint32_t)(0xcf7774u));
L_9976e5: /* 9976e5: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 9976e9: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9976ed: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 9976f0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9976f2: mov esi, dword ptr [0xcf7758] */
  esi = R32((uint32_t)(0xcf7758u));
/* 9976f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9976fa: je 0x997712 */
  if (zf) goto L_997712;
L_9976fc: /* 9976fc: mov ebx, esi */
  ebx = esi;
/* 9976fe: mov edi, edi */
  edi = edi;
L_997700: /* 997700: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997702: je 0x99770f */
  if (zf) goto L_99770f;
L_997704: /* 997704: mov esi, ebp */
  esi = ebp;
L_997706: /* 997706: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 997708: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 99770a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99770b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99770c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 99770d: jne 0x997706 */
  if (!zf) goto L_997706;
L_99770f: /* 99770f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 997710: jne 0x997700 */
  if (!zf) goto L_997700;
L_997712: /* 997712: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 997717: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 997718: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99771a: jl 0x9976e5 */
  if ((sf != of)) goto L_9976e5;
L_99771c: /* 99771c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 997720: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 997724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997726: mov ecx, 0xcf7760 */
  ecx = 0xcf7760u;
/* 99772b: call 0x999c80 */
  esp -= 4; W32(esp, 0x997730u); SPILL(); f_999c80(); if (g_unwind) return; RELOAD();
/* 997730: mov esi, dword ptr [0xcf7780] */
  esi = R32((uint32_t)(0xcf7780u));
/* 997736: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997738: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 99773b: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99773e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997740: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 997744: jne 0x99774a */
  if (!zf) goto L_99774a;
L_997746: /* 997746: xor edx, edx */
  edx = 0;
/* 997748: jmp 0x997752 */
  goto L_997752;
L_99774a: /* 99774a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 99774d: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99774f: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_997752: /* 997752: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997754: je 0x997783 */
  if (zf) goto L_997783;
L_997756: /* 997756: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 997759: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99775b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 99775e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 997760: jae 0x997783 */
  if (!cf) goto L_997783;
L_997762: /* 997762: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 997766: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 997769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99776a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99776b: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 99776f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 997772: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997773: call 0x996ce0 */
  esp -= 4; W32(esp, 0x997778u); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 997778: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99777b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99777e: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 997781: jmp 0x997799 */
  goto L_997799;
L_997783: /* 997783: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 997786: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 99778a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99778b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99778d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99778e: mov ecx, esp */
  ecx = esp;
/* 997790: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 997792: mov ecx, esi */
  ecx = esi;
/* 997794: call 0x996ea0 */
  esp -= 4; W32(esp, 0x997799u); SPILL(); f_996ea0(); if (g_unwind) return; RELOAD();
L_997799: /* 997799: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99779d: mov esi, dword ptr [0xcf7758] */
  esi = R32((uint32_t)(0xcf7758u));
/* 9977a3: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9977a7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9977ab: mov ebp, dword ptr [0xcf7784] */
  ebp = R32((uint32_t)(0xcf7784u));
/* 9977b1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9977b3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9977b5: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9977b7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9977bb: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 9977bf: jl 0x9976d0 */
  if ((sf != of)) goto L_9976d0;
L_9977c5: /* 9977c5: mov ebx, dword ptr [0xcf7750] */
  ebx = R32((uint32_t)(0xcf7750u));
/* 9977cb: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
L_9977cf: /* 9977cf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9977d3: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9977d8: mov edx, dword ptr [0xcf7778] */
  edx = R32((uint32_t)(0xcf7778u));
/* 9977de: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9977e0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9977e2: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9977e6: jl 0x997650 */
  if ((sf != of)) goto L_997650;
L_9977ec: /* 9977ec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9977f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9977f1: mov ecx, 0xcf7760 */
  ecx = 0xcf7760u;
/* 9977f6: call 0x9997c0 */
  esp -= 4; W32(esp, 0x9977fbu); SPILL(); f_9997c0(); if (g_unwind) return; RELOAD();
/* 9977fb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9977ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997801: jle 0x997825 */
  if ((zf || sf != of)) goto L_997825;
L_997803: /* 997803: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 997807: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99780a: mov edi, eax */
  edi = eax;
/* 99780c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_997810: /* 997810: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 997812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997813: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997818u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997818: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99781b: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99781e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 99781f: jne 0x997810 */
  if (!zf) goto L_997810;
L_997821: /* 997821: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
L_997825: /* 997825: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 997829: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99782a: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99782fu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99782f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 997833: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997834: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997839u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997839: mov eax, dword ptr [0xcf776c] */
  eax = R32((uint32_t)(0xcf776cu));
/* 99783e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99783f: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997844u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997844: mov ecx, dword ptr [0xcf7770] */
  ecx = R32((uint32_t)(0xcf7770u));
/* 99784a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99784b: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997850u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997850: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 997855: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997858: xor esi, esi */
  esi = 0;
/* 99785a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99785c: jle 0x997876 */
  if ((zf || sf != of)) goto L_997876;
L_99785e: /* 99785e: mov edi, edi */
  edi = edi;
L_997860: /* 997860: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 997863: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997864: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997869u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997869: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 99786e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997871: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997872: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997874: jl 0x997860 */
  if ((sf != of)) goto L_997860;
L_997876: /* 997876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997877: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99787cu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99787c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99787f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997880: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997882: xor eax, eax */
  eax = 0;
/* 997884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997885: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997888: ret  */
  esp += 4; SPILL(); return;
}

void f_99764d(void) {
  LOAD_REGS();
L_99764d: /* 99764d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_997650: /* 997650: xor edx, edx */
  edx = 0;
/* 997652: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997654: jle 0x9976b8 */
  if ((zf || sf != of)) goto L_9976b8;
L_997656: /* 997656: jmp 0x997660 */
  goto L_997660;
L_997660: /* 997660: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 997664: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 997668: mov edi, dword ptr [edi + edx*4] */
  edi = R32((uint32_t)(edi + edx*4));
/* 99766b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99766d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 997671: jl 0x997685 */
  if ((sf != of)) goto L_997685;
L_997673: /* 997673: mov esi, ecx */
  esi = ecx;
/* 997675: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 997678: xor eax, eax */
  eax = 0;
/* 99767a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99767c: mov ecx, esi */
  ecx = esi;
/* 99767e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997681: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 997683: jmp 0x99769b */
  goto L_99769b;
L_997685: /* 997685: mov eax, ecx */
  eax = ecx;
/* 997687: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99768a: mov esi, ebx */
  esi = ebx;
/* 99768c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99768e: mov ecx, eax */
  ecx = eax;
/* 997690: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 997694: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997697: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 997699: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_99769b: /* 99769b: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 99769f: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9976a4: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 9976a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9976a9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9976aa: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9976ac: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 9976b0: jl 0x997660 */
  if ((sf != of)) goto L_997660;
L_9976b2: /* 9976b2: mov dword ptr [0xcf7750], ebx */
  W32((uint32_t)(0xcf7750u), ebx);
L_9976b8: /* 9976b8: xor eax, eax */
  eax = 0;
/* 9976ba: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9976bc: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9976c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9976c4: jle 0x9977cf */
  if ((zf || sf != of)) goto L_9977cf;
L_9976ca: /* 9976ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9976d0: /* 9976d0: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9976d5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9976d9: xor edi, edi */
  edi = 0;
/* 9976db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9976dd: jle 0x99771c */
  if ((zf || sf != of)) goto L_99771c;
L_9976df: /* 9976df: mov ebp, dword ptr [0xcf7774] */
  ebp = R32((uint32_t)(0xcf7774u));
L_9976e5: /* 9976e5: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 9976e9: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9976ed: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 9976f0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9976f2: mov esi, dword ptr [0xcf7758] */
  esi = R32((uint32_t)(0xcf7758u));
/* 9976f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9976fa: je 0x997712 */
  if (zf) goto L_997712;
L_9976fc: /* 9976fc: mov ebx, esi */
  ebx = esi;
/* 9976fe: mov edi, edi */
  edi = edi;
L_997700: /* 997700: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997702: je 0x99770f */
  if (zf) goto L_99770f;
L_997704: /* 997704: mov esi, ebp */
  esi = ebp;
L_997706: /* 997706: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 997708: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 99770a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99770b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99770c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 99770d: jne 0x997706 */
  if (!zf) goto L_997706;
L_99770f: /* 99770f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 997710: jne 0x997700 */
  if (!zf) goto L_997700;
L_997712: /* 997712: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 997717: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 997718: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99771a: jl 0x9976e5 */
  if ((sf != of)) goto L_9976e5;
L_99771c: /* 99771c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 997720: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 997724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997726: mov ecx, 0xcf7760 */
  ecx = 0xcf7760u;
/* 99772b: call 0x999c80 */
  esp -= 4; W32(esp, 0x997730u); SPILL(); f_999c80(); if (g_unwind) return; RELOAD();
/* 997730: mov esi, dword ptr [0xcf7780] */
  esi = R32((uint32_t)(0xcf7780u));
/* 997736: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997738: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 99773b: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99773e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997740: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 997744: jne 0x99774a */
  if (!zf) goto L_99774a;
L_997746: /* 997746: xor edx, edx */
  edx = 0;
/* 997748: jmp 0x997752 */
  goto L_997752;
L_99774a: /* 99774a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 99774d: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99774f: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_997752: /* 997752: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997754: je 0x997783 */
  if (zf) goto L_997783;
L_997756: /* 997756: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 997759: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99775b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 99775e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 997760: jae 0x997783 */
  if (!cf) goto L_997783;
L_997762: /* 997762: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 997766: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 997769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99776a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99776b: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 99776f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 997772: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997773: call 0x996ce0 */
  esp -= 4; W32(esp, 0x997778u); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 997778: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99777b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99777e: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 997781: jmp 0x997799 */
  goto L_997799;
L_997783: /* 997783: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 997786: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 99778a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99778b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99778d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99778e: mov ecx, esp */
  ecx = esp;
/* 997790: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 997792: mov ecx, esi */
  ecx = esi;
/* 997794: call 0x996ea0 */
  esp -= 4; W32(esp, 0x997799u); SPILL(); f_996ea0(); if (g_unwind) return; RELOAD();
L_997799: /* 997799: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99779d: mov esi, dword ptr [0xcf7758] */
  esi = R32((uint32_t)(0xcf7758u));
/* 9977a3: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9977a7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9977ab: mov ebp, dword ptr [0xcf7784] */
  ebp = R32((uint32_t)(0xcf7784u));
/* 9977b1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9977b3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9977b5: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9977b7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9977bb: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 9977bf: jl 0x9976d0 */
  if ((sf != of)) goto L_9976d0;
L_9977c5: /* 9977c5: mov ebx, dword ptr [0xcf7750] */
  ebx = R32((uint32_t)(0xcf7750u));
/* 9977cb: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
L_9977cf: /* 9977cf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9977d3: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9977d8: mov edx, dword ptr [0xcf7778] */
  edx = R32((uint32_t)(0xcf7778u));
/* 9977de: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9977e0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9977e2: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9977e6: jl 0x997650 */
  if ((sf != of)) goto L_997650;
L_9977ec: /* 9977ec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9977f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9977f1: mov ecx, 0xcf7760 */
  ecx = 0xcf7760u;
/* 9977f6: call 0x9997c0 */
  esp -= 4; W32(esp, 0x9977fbu); SPILL(); f_9997c0(); if (g_unwind) return; RELOAD();
/* 9977fb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9977ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997801: jle 0x997825 */
  if ((zf || sf != of)) goto L_997825;
L_997803: /* 997803: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 997807: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99780a: mov edi, eax */
  edi = eax;
/* 99780c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_997810: /* 997810: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 997812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997813: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997818u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997818: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99781b: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99781e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 99781f: jne 0x997810 */
  if (!zf) goto L_997810;
L_997821: /* 997821: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
L_997825: /* 997825: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 997829: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99782a: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99782fu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99782f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 997833: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997834: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997839u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997839: mov eax, dword ptr [0xcf776c] */
  eax = R32((uint32_t)(0xcf776cu));
/* 99783e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99783f: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997844u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997844: mov ecx, dword ptr [0xcf7770] */
  ecx = R32((uint32_t)(0xcf7770u));
/* 99784a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99784b: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997850u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997850: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 997855: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997858: xor esi, esi */
  esi = 0;
/* 99785a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99785c: jle 0x997876 */
  if ((zf || sf != of)) goto L_997876;
L_99785e: /* 99785e: mov edi, edi */
  edi = edi;
L_997860: /* 997860: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 997863: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997864: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997869u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997869: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 99786e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997871: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997872: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997874: jl 0x997860 */
  if ((sf != of)) goto L_997860;
L_997876: /* 997876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997877: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99787cu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99787c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99787f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997880: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997882: xor eax, eax */
  eax = 0;
/* 997884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997885: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997888: ret  */
  esp += 4; SPILL(); return;
}

void f_997658(void) {
  LOAD_REGS();
  goto L_997658;
L_997650: /* 997650: xor edx, edx */
  edx = 0;
/* 997652: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997654: jle 0x9976b8 */
  if ((zf || sf != of)) goto L_9976b8;
L_997656: /* 997656: jmp 0x997660 */
  goto L_997660;
L_997658: /* 997658: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 99765f: nop  */
L_997660: /* 997660: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 997664: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 997668: mov edi, dword ptr [edi + edx*4] */
  edi = R32((uint32_t)(edi + edx*4));
/* 99766b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99766d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 997671: jl 0x997685 */
  if ((sf != of)) goto L_997685;
L_997673: /* 997673: mov esi, ecx */
  esi = ecx;
/* 997675: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 997678: xor eax, eax */
  eax = 0;
/* 99767a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99767c: mov ecx, esi */
  ecx = esi;
/* 99767e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997681: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 997683: jmp 0x99769b */
  goto L_99769b;
L_997685: /* 997685: mov eax, ecx */
  eax = ecx;
/* 997687: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99768a: mov esi, ebx */
  esi = ebx;
/* 99768c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99768e: mov ecx, eax */
  ecx = eax;
/* 997690: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 997694: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997697: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 997699: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_99769b: /* 99769b: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 99769f: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9976a4: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 9976a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9976a9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9976aa: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9976ac: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 9976b0: jl 0x997660 */
  if ((sf != of)) goto L_997660;
L_9976b2: /* 9976b2: mov dword ptr [0xcf7750], ebx */
  W32((uint32_t)(0xcf7750u), ebx);
L_9976b8: /* 9976b8: xor eax, eax */
  eax = 0;
/* 9976ba: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9976bc: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9976c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9976c4: jle 0x9977cf */
  if ((zf || sf != of)) goto L_9977cf;
L_9976ca: /* 9976ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9976d0: /* 9976d0: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9976d5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9976d9: xor edi, edi */
  edi = 0;
/* 9976db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9976dd: jle 0x99771c */
  if ((zf || sf != of)) goto L_99771c;
L_9976df: /* 9976df: mov ebp, dword ptr [0xcf7774] */
  ebp = R32((uint32_t)(0xcf7774u));
L_9976e5: /* 9976e5: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 9976e9: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9976ed: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 9976f0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9976f2: mov esi, dword ptr [0xcf7758] */
  esi = R32((uint32_t)(0xcf7758u));
/* 9976f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9976fa: je 0x997712 */
  if (zf) goto L_997712;
L_9976fc: /* 9976fc: mov ebx, esi */
  ebx = esi;
/* 9976fe: mov edi, edi */
  edi = edi;
L_997700: /* 997700: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997702: je 0x99770f */
  if (zf) goto L_99770f;
L_997704: /* 997704: mov esi, ebp */
  esi = ebp;
L_997706: /* 997706: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 997708: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 99770a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99770b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99770c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 99770d: jne 0x997706 */
  if (!zf) goto L_997706;
L_99770f: /* 99770f: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 997710: jne 0x997700 */
  if (!zf) goto L_997700;
L_997712: /* 997712: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 997717: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 997718: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99771a: jl 0x9976e5 */
  if ((sf != of)) goto L_9976e5;
L_99771c: /* 99771c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 997720: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 997724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997726: mov ecx, 0xcf7760 */
  ecx = 0xcf7760u;
/* 99772b: call 0x999c80 */
  esp -= 4; W32(esp, 0x997730u); SPILL(); f_999c80(); if (g_unwind) return; RELOAD();
/* 997730: mov esi, dword ptr [0xcf7780] */
  esi = R32((uint32_t)(0xcf7780u));
/* 997736: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997738: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 99773b: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99773e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997740: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 997744: jne 0x99774a */
  if (!zf) goto L_99774a;
L_997746: /* 997746: xor edx, edx */
  edx = 0;
/* 997748: jmp 0x997752 */
  goto L_997752;
L_99774a: /* 99774a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 99774d: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99774f: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_997752: /* 997752: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997754: je 0x997783 */
  if (zf) goto L_997783;
L_997756: /* 997756: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 997759: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 99775b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 99775e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 997760: jae 0x997783 */
  if (!cf) goto L_997783;
L_997762: /* 997762: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 997766: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 997769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99776a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99776b: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 99776f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 997772: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997773: call 0x996ce0 */
  esp -= 4; W32(esp, 0x997778u); SPILL(); f_996ce0(); if (g_unwind) return; RELOAD();
/* 997778: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99777b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99777e: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 997781: jmp 0x997799 */
  goto L_997799;
L_997783: /* 997783: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 997786: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 99778a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99778b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 99778d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99778e: mov ecx, esp */
  ecx = esp;
/* 997790: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 997792: mov ecx, esi */
  ecx = esi;
/* 997794: call 0x996ea0 */
  esp -= 4; W32(esp, 0x997799u); SPILL(); f_996ea0(); if (g_unwind) return; RELOAD();
L_997799: /* 997799: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 99779d: mov esi, dword ptr [0xcf7758] */
  esi = R32((uint32_t)(0xcf7758u));
/* 9977a3: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9977a7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9977ab: mov ebp, dword ptr [0xcf7784] */
  ebp = R32((uint32_t)(0xcf7784u));
/* 9977b1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9977b3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9977b5: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9977b7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9977bb: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 9977bf: jl 0x9976d0 */
  if ((sf != of)) goto L_9976d0;
L_9977c5: /* 9977c5: mov ebx, dword ptr [0xcf7750] */
  ebx = R32((uint32_t)(0xcf7750u));
/* 9977cb: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
L_9977cf: /* 9977cf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9977d3: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 9977d8: mov edx, dword ptr [0xcf7778] */
  edx = R32((uint32_t)(0xcf7778u));
/* 9977de: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9977e0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9977e2: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9977e6: jl 0x997650 */
  if ((sf != of)) goto L_997650;
L_9977ec: /* 9977ec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9977f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9977f1: mov ecx, 0xcf7760 */
  ecx = 0xcf7760u;
/* 9977f6: call 0x9997c0 */
  esp -= 4; W32(esp, 0x9977fbu); SPILL(); f_9997c0(); if (g_unwind) return; RELOAD();
/* 9977fb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9977ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997801: jle 0x997825 */
  if ((zf || sf != of)) goto L_997825;
L_997803: /* 997803: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 997807: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99780a: mov edi, eax */
  edi = eax;
/* 99780c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_997810: /* 997810: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 997812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997813: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997818u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997818: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99781b: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99781e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 99781f: jne 0x997810 */
  if (!zf) goto L_997810;
L_997821: /* 997821: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
L_997825: /* 997825: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 997829: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99782a: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99782fu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99782f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 997833: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997834: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997839u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997839: mov eax, dword ptr [0xcf776c] */
  eax = R32((uint32_t)(0xcf776cu));
/* 99783e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99783f: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997844u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997844: mov ecx, dword ptr [0xcf7770] */
  ecx = R32((uint32_t)(0xcf7770u));
/* 99784a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99784b: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997850u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997850: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 997855: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997858: xor esi, esi */
  esi = 0;
/* 99785a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99785c: jle 0x997876 */
  if ((zf || sf != of)) goto L_997876;
L_99785e: /* 99785e: mov edi, edi */
  edi = edi;
L_997860: /* 997860: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 997863: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997864: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997869u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997869: mov eax, dword ptr [0xcf777c] */
  eax = R32((uint32_t)(0xcf777cu));
/* 99786e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997871: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997872: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997874: jl 0x997860 */
  if ((sf != of)) goto L_997860;
L_997876: /* 997876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997877: call 0x99cf5a */
  esp -= 4; W32(esp, 0x99787cu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 99787c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99787f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997880: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997881: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997882: xor eax, eax */
  eax = 0;
/* 997884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997885: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997888: ret  */
  esp += 4; SPILL(); return;
}

void f_997890(void) {
  LOAD_REGS();
L_997890: /* 997890: mov eax, ecx */
  eax = ecx;
/* 997892: mov ecx, 4 */
  ecx = 0x4u;
/* 997897: mov dword ptr [eax + 4], 0x1000 */
  W32((uint32_t)(eax + 0x4u), 0x1000u);
/* 99789e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9978a1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9978a4: mov dword ptr [eax + 0x24], 3 */
  W32((uint32_t)(eax + 0x24u), 0x3u);
/* 9978ab: ret  */
  esp += 4; SPILL(); return;
}

void f_9978b0(void) {
  LOAD_REGS();
L_9978b0: /* 9978b0: ret  */
  esp += 4; SPILL(); return;
}

void f_9978c0(void) {
  LOAD_REGS();
L_9978c0: /* 9978c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9978c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9978c2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 9978c4: mov edi, ecx */
  edi = ecx;
/* 9978c6: call 0x99cf4e */
  esp -= 4; W32(esp, 0x9978cbu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 9978cb: mov esi, eax */
  esi = eax;
/* 9978cd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9978d1: xor ecx, ecx */
  ecx = 0;
/* 9978d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9978d6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9978d8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 9978da: je 0x9978fa */
  if (zf) goto L_9978fa;
L_9978dc: /* 9978dc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9978dd: je 0x9978e6 */
  if (zf) goto L_9978e6;
L_9978df: /* 9978df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9978e0: xor eax, eax */
  eax = 0;
/* 9978e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9978e3: ret 4 */
  esp += 8; SPILL(); return;
L_9978e6: /* 9978e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9978e7: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 9978ee: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 9978f1: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 9978f4: mov eax, esi */
  eax = esi;
/* 9978f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9978f7: ret 4 */
  esp += 8; SPILL(); return;
L_9978fa: /* 9978fa: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 9978fd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9978ff: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 997902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997903: call 0x99cf4e */
  esp -= 4; W32(esp, 0x997908u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 997908: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 99790b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 99790d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 997910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997911: call 0x99cf4e */
  esp -= 4; W32(esp, 0x997916u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 997916: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 997918: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 99791b: call 0x99cf4e */
  esp -= 4; W32(esp, 0x997920u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 997920: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 997923: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 997926: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997929: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99792a: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 99792d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99792e: mov eax, esi */
  eax = esi;
/* 997930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997931: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997940(void) {
  LOAD_REGS();
L_997940: /* 997940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997941: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997942: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997943: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997944: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 997946: mov ebx, ecx */
  ebx = ecx;
/* 997948: call 0x99cf4e */
  esp -= 4; W32(esp, 0x99794du); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 99794d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 997951: mov ebp, eax */
  ebp = eax;
/* 997953: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 997957: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 99795a: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 99795d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 99795f: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 997962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997963: call 0x99cf4e */
  esp -= 4; W32(esp, 0x997968u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 997968: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 99796c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 99796f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 997971: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 997974: mov edi, eax */
  edi = eax;
/* 997976: mov eax, ecx */
  eax = ecx;
/* 997978: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 99797b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 99797d: mov ecx, eax */
  ecx = eax;
/* 99797f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997982: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997985: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 997987: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 99798a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99798b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99798c: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 99798f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997990: mov eax, ebp */
  eax = ebp;
/* 997992: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997993: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997994: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9979a0(void) {
  LOAD_REGS();
L_9979a0: /* 9979a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9979a1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9979a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9979a6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9979a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9979a8: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 9979ab: xor eax, eax */
  eax = 0;
/* 9979ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9979af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9979b0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9979b4: jle 0x9979f3 */
  if ((zf || sf != of)) goto L_9979f3;
L_9979b6: /* 9979b6: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 9979b8: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 9979bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9979c0: /* 9979c0: xor edx, edx */
  edx = 0;
/* 9979c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9979c4: jle 0x9979ea */
  if ((zf || sf != of)) goto L_9979ea;
L_9979c6: /* 9979c6: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 9979ca: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 9979cd: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 9979d0: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 9979d3: mov ecx, ebx */
  ecx = ebx;
/* 9979d5: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_9979d7: /* 9979d7: mov ebp, dword ptr [esi + ecx] */
  ebp = R32((uint32_t)(esi + ecx));
/* 9979da: cmp ebp, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9979dc: jne 0x9979e6 */
  if (!zf) goto L_9979e6;
L_9979de: /* 9979de: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9979df: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9979e2: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9979e4: jl 0x9979d7 */
  if ((sf != of)) goto L_9979d7;
L_9979e6: /* 9979e6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_9979ea: /* 9979ea: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9979ec: je 0x9979f6 */
  if (zf) goto L_9979f6;
L_9979ee: /* 9979ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9979ef: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9979f1: jl 0x9979c0 */
  if ((sf != of)) goto L_9979c0;
L_9979f3: /* 9979f3: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_9979f6: /* 9979f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9979f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9979f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9979f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9979fa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9979fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_997a00(void) {
  LOAD_REGS();
L_997a00: /* 997a00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 997a02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997a03: xor ebx, ebx */
  ebx = 0;
/* 997a05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997a07: jle 0x997a40 */
  if ((zf || sf != of)) goto L_997a40;
L_997a09: /* 997a09: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 997a0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997a0e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 997a12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997a13: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 997a17: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 997a19: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 997a1b: jmp 0x997a20 */
  goto L_997a20;
L_997a20: /* 997a20: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997a22: cmp edx, dword ptr [esi + eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997a25: jle 0x997a2c */
  if ((zf || sf != of)) goto L_997a2c;
L_997a27: /* 997a27: mov dword ptr [esi + eax], edx */
  W32((uint32_t)(esi + eax), edx);
/* 997a2a: jmp 0x997a34 */
  goto L_997a34;
L_997a2c: /* 997a2c: cmp edx, dword ptr [edi + eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997a2f: jge 0x997a34 */
  if ((sf == of)) goto L_997a34;
L_997a31: /* 997a31: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
L_997a34: /* 997a34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 997a36: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 997a37: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 997a3a: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997a3c: jl 0x997a20 */
  if ((sf != of)) goto L_997a20;
L_997a3e: /* 997a3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997a3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_997a40: /* 997a40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997a41: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997a1d(void) {
  LOAD_REGS();
L_997a1d: /* 997a1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_997a20: /* 997a20: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997a22: cmp edx, dword ptr [esi + eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997a25: jle 0x997a2c */
  if ((zf || sf != of)) goto L_997a2c;
L_997a27: /* 997a27: mov dword ptr [esi + eax], edx */
  W32((uint32_t)(esi + eax), edx);
/* 997a2a: jmp 0x997a34 */
  goto L_997a34;
L_997a2c: /* 997a2c: cmp edx, dword ptr [edi + eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997a2f: jge 0x997a34 */
  if ((sf == of)) goto L_997a34;
L_997a31: /* 997a31: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
L_997a34: /* 997a34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 997a36: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 997a37: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 997a3a: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997a3c: jl 0x997a20 */
  if ((sf != of)) goto L_997a20;
L_997a3e: /* 997a3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997a3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997a40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997a41: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997a50(void) {
  LOAD_REGS();
L_997a50: /* 997a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997a51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997a52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 997a56: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 997a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997a5a: mov esi, ecx */
  esi = ecx;
/* 997a5c: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997a61u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997a61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997a62: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997a67u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997a67: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 997a6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997a6d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 997a6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997a6f: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 997a72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997a73: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997a80(void) {
  LOAD_REGS();
L_997a80: /* 997a80: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 997a82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997a83: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 997a87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997a88: xor esi, esi */
  esi = 0;
/* 997a8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997a8c: jle 0x997ab6 */
  if ((zf || sf != of)) goto L_997ab6;
L_997a8e: /* 997a8e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 997a92: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 997a95: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 997a98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997a99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997a9a: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 997a9c: mov edi, eax */
  edi = eax;
/* 997a9e: mov edi, edi */
  edi = edi;
L_997aa0: /* 997aa0: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 997aa2: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* 997aa5: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997aa7: mov ebp, eax */
  ebp = eax;
/* 997aa9: imul ebp, eax */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(eax);
  ebp = (uint32_t)r;
  }
/* 997aac: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 997aae: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 997ab1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 997ab2: jne 0x997aa0 */
  if (!zf) goto L_997aa0;
L_997ab4: /* 997ab4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997ab5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_997ab6: /* 997ab6: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 997ab8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 997abc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 997abe: mov eax, edx */
  eax = edx;
/* 997ac0: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 997ac3: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 997ac6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 997ac8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 997ac9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997aca: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x997aca);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 997acc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997acd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_997ad0(void) {
  LOAD_REGS();
L_997ad0: /* 997ad0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 997ad4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 997ad8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 997adb: sub eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997ade: ret  */
  esp += 4; SPILL(); return;
}

void f_997ae0(void) {
  LOAD_REGS();
L_997ae0: /* 997ae0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 997ae3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997ae4: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 997ae8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 997aeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997aec: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 997aef: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997af1: mov eax, ecx */
  eax = ecx;
/* 997af3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 997af7: jle 0x997b89 */
  if ((zf || sf != of)) goto L_997b89;
L_997afd: /* 997afd: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997b00: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 997b03: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 997b06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997b07: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 997b0a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 997b0c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997b0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997b0f: add ecx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 997b11: xor edi, edi */
  edi = 0;
/* 997b13: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997b15: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 997b19: jle 0x997b50 */
  if ((zf || sf != of)) goto L_997b50;
L_997b1b: /* 997b1b: jmp 0x997b20 */
  goto L_997b20;
L_997b20: /* 997b20: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 997b23: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 997b26: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 997b29: imul eax, dword ptr [ebx] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebx)));
  eax = (uint32_t)r;
  }
/* 997b2c: lea ecx, [edx + edi*4] */
  ecx = (uint32_t)(edx + edi*4);
/* 997b2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 997b31: imul edx, dword ptr [ecx] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ecx)));
  edx = (uint32_t)r;
  }
/* 997b34: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 997b36: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 997b3a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 997b3e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 997b3f: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x997b3f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 997b41: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 997b45: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 997b46: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 997b48: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 997b4c: cmp edi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997b4e: jl 0x997b20 */
  if ((sf != of)) goto L_997b20;
L_997b50: /* 997b50: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 997b52: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 997b55: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 997b58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997b59: mov ecx, eax */
  ecx = eax;
/* 997b5b: call 0x997a50 */
  esp -= 4; W32(esp, 0x997b60u); SPILL(); f_997a50(); if (g_unwind) return; RELOAD();
/* 997b60: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 997b63: dec dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 997b66: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997b69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 997b6c: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997b6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997b70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997b71: jge 0x997b89 */
  if ((sf == of)) goto L_997b89;
L_997b73: /* 997b73: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 997b76: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 997b79: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 997b7c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 997b7e: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997b81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 997b84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 997b85: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997b87: jl 0x997b73 */
  if ((sf != of)) goto L_997b73;
L_997b89: /* 997b89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997b8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997b8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997b8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997b1d(void) {
  LOAD_REGS();
L_997b1d: /* 997b1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_997b20: /* 997b20: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 997b23: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 997b26: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 997b29: imul eax, dword ptr [ebx] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebx)));
  eax = (uint32_t)r;
  }
/* 997b2c: lea ecx, [edx + edi*4] */
  ecx = (uint32_t)(edx + edi*4);
/* 997b2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 997b31: imul edx, dword ptr [ecx] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ecx)));
  edx = (uint32_t)r;
  }
/* 997b34: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 997b36: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 997b3a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 997b3e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 997b3f: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x997b3f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 997b41: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 997b45: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 997b46: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 997b48: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 997b4c: cmp edi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997b4e: jl 0x997b20 */
  if ((sf != of)) goto L_997b20;
L_997b50: /* 997b50: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 997b52: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 997b55: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 997b58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997b59: mov ecx, eax */
  ecx = eax;
/* 997b5b: call 0x997a50 */
  esp -= 4; W32(esp, 0x997b60u); SPILL(); f_997a50(); if (g_unwind) return; RELOAD();
/* 997b60: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 997b63: dec dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 997b66: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997b69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 997b6c: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997b6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997b70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997b71: jge 0x997b89 */
  if ((sf == of)) goto L_997b89;
L_997b73: /* 997b73: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 997b76: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 997b79: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 997b7c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 997b7e: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997b81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 997b84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 997b85: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997b87: jl 0x997b73 */
  if ((sf != of)) goto L_997b73;
L_997b89: /* 997b89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997b8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997b8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997b8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997ba0(void) {
  LOAD_REGS();
L_997ba0: /* 997ba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997ba1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 997ba5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 997ba8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997baa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997bab: mov ebp, ecx */
  ebp = ecx;
/* 997bad: jle 0x997c23 */
  if ((zf || sf != of)) goto L_997c23;
L_997baf: /* 997baf: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997bb2: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 997bb5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997bb7: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 997bba: mov eax, ecx */
  eax = ecx;
/* 997bbc: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 997bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997bc0: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 997bc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997bc4: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 997bc7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 997bc9: mov ecx, eax */
  ecx = eax;
/* 997bcb: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997bce: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 997bd0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997bd3: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 997bd6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 997bd8: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 997bdb: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 997bde: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 997be1: mov edx, ecx */
  edx = ecx;
/* 997be3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 997be6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 997be8: mov ecx, edx */
  ecx = edx;
/* 997bea: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 997bed: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 997bef: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 997bf2: mov esi, 1 */
  esi = 0x1u;
/* 997bf7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997bf9: jle 0x997c21 */
  if ((zf || sf != of)) goto L_997c21;
L_997bfb: /* 997bfb: jmp 0x997c00 */
  goto L_997c00;
L_997c00: /* 997c00: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 997c03: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 997c06: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 997c09: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 997c0c: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 997c0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997c12: mov ecx, ebp */
  ecx = ebp;
/* 997c14: call 0x997a00 */
  esp -= 4; W32(esp, 0x997c19u); SPILL(); f_997a00(); if (g_unwind) return; RELOAD();
/* 997c19: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 997c1c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997c1d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997c1f: jl 0x997c00 */
  if ((sf != of)) goto L_997c00;
L_997c21: /* 997c21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997c22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_997c23: /* 997c23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997c24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997c25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997bfd(void) {
  LOAD_REGS();
L_997bfd: /* 997bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_997c00: /* 997c00: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 997c03: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 997c06: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 997c09: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 997c0c: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 997c0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997c12: mov ecx, ebp */
  ecx = ebp;
/* 997c14: call 0x997a00 */
  esp -= 4; W32(esp, 0x997c19u); SPILL(); f_997a00(); if (g_unwind) return; RELOAD();
/* 997c19: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 997c1c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997c1d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997c1f: jl 0x997c00 */
  if ((sf != of)) goto L_997c00;
L_997c21: /* 997c21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997c22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997c23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997c24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997c25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997c30(void) {
  LOAD_REGS();
L_997c30: /* 997c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997c31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997c32: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 997c36: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997c38: mov ebx, ecx */
  ebx = ecx;
/* 997c3a: je 0x997cc1 */
  if (zf) goto L_997cc1;
L_997c40: /* 997c40: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 997c42: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 997c45: je 0x997c6c */
  if (zf) goto L_997c6c;
L_997c47: /* 997c47: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 997c48: jne 0x997cc1 */
  if (!zf) goto L_997cc1;
L_997c4a: /* 997c4a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 997c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997c4e: call 0x997c30 */
  esp -= 4; W32(esp, 0x997c53u); SPILL(); f_997c30(); if (g_unwind) return; RELOAD();
/* 997c53: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 997c56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997c57: mov ecx, ebx */
  ecx = ebx;
/* 997c59: call 0x997c30 */
  esp -= 4; W32(esp, 0x997c5eu); SPILL(); f_997c30(); if (g_unwind) return; RELOAD();
/* 997c5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997c5f: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997c64u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997c64: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997c67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997c68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997c69: ret 4 */
  esp += 8; SPILL(); return;
L_997c6c: /* 997c6c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 997c6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997c70: xor edi, edi */
  edi = 0;
/* 997c72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997c74: jle 0x997c8c */
  if ((zf || sf != of)) goto L_997c8c;
L_997c76: /* 997c76: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 997c79: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 997c7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997c7d: mov ecx, ebx */
  ecx = ebx;
/* 997c7f: call 0x997a50 */
  esp -= 4; W32(esp, 0x997c84u); SPILL(); f_997a50(); if (g_unwind) return; RELOAD();
/* 997c84: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 997c87: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 997c88: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997c8a: jl 0x997c76 */
  if ((sf != of)) goto L_997c76;
L_997c8c: /* 997c8c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 997c8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997c90: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997c95u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997c95: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 997c98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997c99: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997c9eu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997c9e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 997ca1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997ca2: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997ca7u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997ca7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997ca8: call 0x99cf5a */
  esp -= 4; W32(esp, 0x997cadu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 997cad: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 997cb0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997cb3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 997cb4: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 997cb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997cb8: jns 0x997cc1 */
  if (!sf) goto L_997cc1;
L_997cba: /* 997cba: mov dword ptr [ebx + 0x10], 0 */
  W32((uint32_t)(ebx + 0x10u), 0x0u);
L_997cc1: /* 997cc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997cc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997cc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997cd0(void) {
  LOAD_REGS();
L_997cd0: /* 997cd0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 997cd3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 997cd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997cd8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997cd9: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 997cdc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 997cdf: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 997ce3: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 997ce6: xor ebx, ebx */
  ebx = 0;
/* 997ce8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 997cea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997ceb: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 997cef: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 997cf3: mov edi, 0x7fffffff */
  edi = 0x7fffffffu;
/* 997cf8: jle 0x997d51 */
  if ((zf || sf != of)) goto L_997d51;
L_997cfa: /* 997cfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997cfb: jmp 0x997d00 */
  goto L_997d00;
L_997d00: /* 997d00: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 997d03: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d05: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 997d09: jge 0x997d44 */
  if ((sf == of)) goto L_997d44;
L_997d0b: /* 997d0b: jmp 0x997d10 */
  goto L_997d10;
L_997d10: /* 997d10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 997d14: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 997d17: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 997d1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997d1b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 997d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997d20: call 0x997a80 */
  esp -= 4; W32(esp, 0x997d25u); SPILL(); f_997a80(); if (g_unwind) return; RELOAD();
/* 997d25: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d27: jge 0x997d37 */
  if ((sf == of)) goto L_997d37;
L_997d29: /* 997d29: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 997d2d: mov edi, eax */
  edi = eax;
/* 997d2f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 997d33: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 997d35: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_997d37: /* 997d37: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 997d3b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997d3c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d3e: jl 0x997d10 */
  if ((sf != of)) goto L_997d10;
L_997d40: /* 997d40: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_997d44: /* 997d44: mov ebx, esi */
  ebx = esi;
/* 997d46: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 997d49: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 997d4c: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d4e: jl 0x997d00 */
  if ((sf != of)) goto L_997d00;
L_997d50: /* 997d50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_997d51: /* 997d51: mov eax, edi */
  eax = edi;
/* 997d53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997d56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997d59: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997cfd(void) {
  LOAD_REGS();
L_997cfd: /* 997cfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_997d00: /* 997d00: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 997d03: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d05: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 997d09: jge 0x997d44 */
  if ((sf == of)) goto L_997d44;
L_997d0b: /* 997d0b: jmp 0x997d10 */
  goto L_997d10;
L_997d10: /* 997d10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 997d14: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 997d17: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 997d1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997d1b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 997d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997d20: call 0x997a80 */
  esp -= 4; W32(esp, 0x997d25u); SPILL(); f_997a80(); if (g_unwind) return; RELOAD();
/* 997d25: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d27: jge 0x997d37 */
  if ((sf == of)) goto L_997d37;
L_997d29: /* 997d29: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 997d2d: mov edi, eax */
  edi = eax;
/* 997d2f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 997d33: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 997d35: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_997d37: /* 997d37: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 997d3b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997d3c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d3e: jl 0x997d10 */
  if ((sf != of)) goto L_997d10;
L_997d40: /* 997d40: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_997d44: /* 997d44: mov ebx, esi */
  ebx = esi;
/* 997d46: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 997d49: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 997d4c: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d4e: jl 0x997d00 */
  if ((sf != of)) goto L_997d00;
L_997d50: /* 997d50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997d51: mov eax, edi */
  eax = edi;
/* 997d53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997d56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997d59: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997d0d(void) {
  LOAD_REGS();
  goto L_997d0d;
L_997d00: /* 997d00: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 997d03: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d05: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 997d09: jge 0x997d44 */
  if ((sf == of)) goto L_997d44;
L_997d0b: /* 997d0b: jmp 0x997d10 */
  goto L_997d10;
L_997d0d: /* 997d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_997d10: /* 997d10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 997d14: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 997d17: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 997d1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997d1b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 997d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997d20: call 0x997a80 */
  esp -= 4; W32(esp, 0x997d25u); SPILL(); f_997a80(); if (g_unwind) return; RELOAD();
/* 997d25: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d27: jge 0x997d37 */
  if ((sf == of)) goto L_997d37;
L_997d29: /* 997d29: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 997d2d: mov edi, eax */
  edi = eax;
/* 997d2f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 997d33: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 997d35: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_997d37: /* 997d37: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 997d3b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997d3c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d3e: jl 0x997d10 */
  if ((sf != of)) goto L_997d10;
L_997d40: /* 997d40: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_997d44: /* 997d44: mov ebx, esi */
  ebx = esi;
/* 997d46: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 997d49: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 997d4c: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d4e: jl 0x997d00 */
  if ((sf != of)) goto L_997d00;
L_997d50: /* 997d50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997d51: mov eax, edi */
  eax = edi;
/* 997d53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997d55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997d56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997d59: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_997d60(void) {
  LOAD_REGS();
L_997d60: /* 997d60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 997d63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997d64: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997d65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997d66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997d67: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 997d6b: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* 997d6e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 997d70: mov ebx, ecx */
  ebx = ecx;
/* 997d72: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 997d75: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 997d77: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997d79: xor ebp, ebp */
  ebp = 0;
/* 997d7b: mov edx, 1 */
  edx = 0x1u;
/* 997d80: cmp dword ptr [ebx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d82: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 997d86: jle 0x997dae */
  if ((zf || sf != of)) goto L_997dae;
L_997d88: /* 997d88: lea ebp, [ecx + 4] */
  ebp = (uint32_t)(ecx + 0x4u);
/* 997d8b: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 997d8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_997d90: /* 997d90: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 997d93: sub ecx, dword ptr [esi + ebp] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + ebp)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 997d96: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997d98: jle 0x997da0 */
  if ((zf || sf != of)) goto L_997da0;
L_997d9a: /* 997d9a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 997d9e: mov eax, ecx */
  eax = ecx;
L_997da0: /* 997da0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 997da2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 997da3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 997da6: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997da8: jl 0x997d90 */
  if ((sf != of)) goto L_997d90;
L_997daa: /* 997daa: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_997dae: /* 997dae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997db0: jne 0x997e08 */
  if (!zf) goto L_997e08;
L_997db2: /* 997db2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 997db5: mov esi, 1 */
  esi = 0x1u;
/* 997dba: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997dbc: jle 0x997df5 */
  if ((zf || sf != of)) goto L_997df5;
L_997dbe: /* 997dbe: mov edi, edi */
  edi = edi;
L_997dc0: /* 997dc0: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 997dc3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 997dc5: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 997dc8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997dca: add dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 997dcc: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 997dcf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 997dd1: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 997dd4: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
/* 997dd7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 997dda: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 997ddc: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 997ddf: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 997de2: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 997de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997de6: mov ecx, ebx */
  ecx = ebx;
/* 997de8: call 0x997a50 */
  esp -= 4; W32(esp, 0x997dedu); SPILL(); f_997a50(); if (g_unwind) return; RELOAD();
/* 997ded: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 997df0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 997df1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997df3: jl 0x997dc0 */
  if ((sf != of)) goto L_997dc0;
L_997df5: /* 997df5: mov dword ptr [edi + 4], 1 */
  W32((uint32_t)(edi + 0x4u), 0x1u);
/* 997dfc: mov eax, edi */
  eax = edi;
/* 997dfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997dff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997e00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997e01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997e02: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997e05: ret 4 */
  esp += 8; SPILL(); return;
L_997e08: /* 997e08: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 997e0b: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 997e0e: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 997e11: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 997e14: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 997e16: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 997e17: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 997e19: mov ebp, eax */
  ebp = eax;
/* 997e1b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 997e1d: mov ecx, ebx */
  ecx = ebx;
/* 997e1f: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 997e21: call 0x9978c0 */
  esp -= 4; W32(esp, 0x997e26u); SPILL(); f_9978c0(); if (g_unwind) return; RELOAD();
/* 997e26: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 997e2a: mov esi, eax */
  esi = eax;
/* 997e2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 997e2e: mov ecx, ebx */
  ecx = ebx;
/* 997e30: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 997e33: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 997e36: call 0x9978c0 */
  esp -= 4; W32(esp, 0x997e3bu); SPILL(); f_9978c0(); if (g_unwind) return; RELOAD();
/* 997e3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 997e3d: mov ecx, ebx */
  ecx = ebx;
/* 997e3f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 997e42: call 0x9978c0 */
  esp -= 4; W32(esp, 0x997e47u); SPILL(); f_9978c0(); if (g_unwind) return; RELOAD();
/* 997e47: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 997e4a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 997e4d: xor eax, eax */
  eax = 0;
/* 997e4f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997e51: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 997e55: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 997e59: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 997e5d: jle 0x997ebc */
  if ((zf || sf != of)) goto L_997ebc;
L_997e5f: /* 997e5f: nop  */
L_997e60: /* 997e60: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 997e63: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 997e66: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 997e69: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 997e6d: cmp dword ptr [ecx + edx*4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997e70: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 997e72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997e73: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 997e76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997e77: mov ecx, ebx */
  ecx = ebx;
/* 997e79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997e7a: jle 0x997e95 */
  if ((zf || sf != of)) goto L_997e95;
L_997e7c: /* 997e7c: call 0x997940 */
  esp -= 4; W32(esp, 0x997e81u); SPILL(); f_997940(); if (g_unwind) return; RELOAD();
/* 997e81: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 997e84: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 997e87: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 997e8b: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 997e8e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 997e8f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 997e93: jmp 0x997eac */
  goto L_997eac;
L_997e95: /* 997e95: call 0x997940 */
  esp -= 4; W32(esp, 0x997e9au); SPILL(); f_997940(); if (g_unwind) return; RELOAD();
/* 997e9a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 997e9d: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 997ea0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 997ea4: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 997ea7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 997ea8: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
L_997eac: /* 997eac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 997eb0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 997eb3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 997eb4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997eb6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 997eba: jl 0x997e60 */
  if ((sf != of)) goto L_997e60;
L_997ebc: /* 997ebc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 997ebf: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 997ec3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 997ec6: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 997ec9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 997ecd: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 997ed0: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 997ed3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997ed4: mov ecx, ebx */
  ecx = ebx;
/* 997ed6: call 0x997ba0 */
  esp -= 4; W32(esp, 0x997edbu); SPILL(); f_997ba0(); if (g_unwind) return; RELOAD();
/* 997edb: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 997ede: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997edf: mov ecx, ebx */
  ecx = ebx;
/* 997ee1: call 0x997ba0 */
  esp -= 4; W32(esp, 0x997ee6u); SPILL(); f_997ba0(); if (g_unwind) return; RELOAD();
/* 997ee6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997ee7: mov ecx, ebx */
  ecx = ebx;
/* 997ee9: call 0x997c30 */
  esp -= 4; W32(esp, 0x997eeeu); SPILL(); f_997c30(); if (g_unwind) return; RELOAD();
/* 997eee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997eef: mov eax, esi */
  eax = esi;
/* 997ef1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997ef2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997ef3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997ef4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 997ef7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_997f00(void) {
  LOAD_REGS();
L_997f00: /* 997f00: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 997f04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997f05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997f06: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 997f0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997f0b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 997f0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997f10: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 997f13: mov ebx, ecx */
  ebx = ecx;
/* 997f15: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 997f19: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997f1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997f1b: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 997f1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997f1f: mov ecx, ebx */
  ecx = ebx;
/* 997f21: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 997f24: call 0x997940 */
  esp -= 4; W32(esp, 0x997f29u); SPILL(); f_997940(); if (g_unwind) return; RELOAD();
/* 997f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997f2b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 997f2e: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 997f31: mov ecx, ebx */
  ecx = ebx;
/* 997f33: jne 0x997f42 */
  if (!zf) goto L_997f42;
L_997f35: /* 997f35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997f36: call 0x997ba0 */
  esp -= 4; W32(esp, 0x997f3bu); SPILL(); f_997ba0(); if (g_unwind) return; RELOAD();
/* 997f3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997f3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997f3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997f3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997f3f: ret 0x10 */
  esp += 20; SPILL(); return;
L_997f42: /* 997f42: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 997f45: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 997f48: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997f4b: call 0x997a00 */
  esp -= 4; W32(esp, 0x997f50u); SPILL(); f_997a00(); if (g_unwind) return; RELOAD();
/* 997f50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997f51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997f52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 997f53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997f54: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_997f60(void) {
  LOAD_REGS();
L_997f60: /* 997f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997f61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997f62: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 997f66: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997f68: mov ebx, ecx */
  ebx = ecx;
/* 997f6a: jne 0x997f73 */
  if (!zf) goto L_997f73;
L_997f6c: /* 997f6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997f6d: xor eax, eax */
  eax = 0;
/* 997f6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997f70: ret 8 */
  esp += 12; SPILL(); return;
L_997f73: /* 997f73: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 997f75: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 997f78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997f79: je 0x997faa */
  if (zf) goto L_997faa;
L_997f7b: /* 997f7b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 997f7c: je 0x997f86 */
  if (zf) goto L_997f86;
L_997f7e: /* 997f7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997f7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997f80: xor eax, eax */
  eax = 0;
/* 997f82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997f83: ret 8 */
  esp += 12; SPILL(); return;
L_997f86: /* 997f86: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 997f8a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 997f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997f8f: mov ecx, ebx */
  ecx = ebx;
/* 997f91: call 0x997f60 */
  esp -= 4; W32(esp, 0x997f96u); SPILL(); f_997f60(); if (g_unwind) return; RELOAD();
/* 997f96: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 997f99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997f9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 997f9b: mov ecx, ebx */
  ecx = ebx;
/* 997f9d: call 0x997f60 */
  esp -= 4; W32(esp, 0x997fa2u); SPILL(); f_997f60(); if (g_unwind) return; RELOAD();
/* 997fa2: mov edi, eax */
  edi = eax;
/* 997fa4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997fa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997fa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997fa7: ret 8 */
  esp += 12; SPILL(); return;
L_997faa: /* 997faa: cmp dword ptr [esi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 997fae: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 997fb2: jle 0x997fcc */
  if ((zf || sf != of)) goto L_997fcc;
L_997fb4: /* 997fb4: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 997fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 997fb8: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 997fbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 997fbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997fbd: mov ecx, ebx */
  ecx = ebx;
/* 997fbf: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 997fc1: call 0x997cd0 */
  esp -= 4; W32(esp, 0x997fc6u); SPILL(); f_997cd0(); if (g_unwind) return; RELOAD();
/* 997fc6: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 997fc9: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_997fcc: /* 997fcc: mov eax, edi */
  eax = edi;
/* 997fce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 997fcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 997fd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 997fd1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_997fe0(void) {
  LOAD_REGS();
L_997fe0: /* 997fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997fe1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 997fe5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 997fe7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 997fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 997fe9: mov ebp, ecx */
  ebp = ecx;
/* 997feb: jne 0x998053 */
  if (!zf) goto L_998053;
L_997fed: /* 997fed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 997fee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 997fef: call 0x9978c0 */
  esp -= 4; W32(esp, 0x997ff4u); SPILL(); f_9978c0(); if (g_unwind) return; RELOAD();
/* 997ff4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 997ff8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 997ffc: mov ebx, eax */
  ebx = eax;
/* 997ffe: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 998002: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998004: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 998005: mov ecx, ebp */
  ecx = ebp;
/* 998007: mov dword ptr [ebx + 4], 1 */
  W32((uint32_t)(ebx + 0x4u), 0x1u);
/* 99800e: call 0x997940 */
  esp -= 4; W32(esp, 0x998013u); SPILL(); f_997940(); if (g_unwind) return; RELOAD();
/* 998013: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 998016: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 998018: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 99801b: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 99801e: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 998021: mov eax, ecx */
  eax = ecx;
/* 998023: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 998026: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 998028: mov ecx, eax */
  ecx = eax;
/* 99802a: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 99802d: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 99802f: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 998032: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 998035: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 998039: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99803c: mov edx, ecx */
  edx = ecx;
/* 99803e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 998041: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 998043: mov ecx, edx */
  ecx = edx;
/* 998045: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 998048: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 99804a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99804b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99804c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99804d: mov eax, ebx */
  eax = ebx;
/* 99804f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 998050: ret 0x10 */
  esp += 20; SPILL(); return;
L_998053: /* 998053: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 998055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998057: jne 0x9980d7 */
  if (!zf) goto L_9980d7;
L_998059: /* 998059: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 99805d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99805e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99805f: mov ecx, ebp */
  ecx = ebp;
/* 998061: call 0x9979a0 */
  esp -= 4; W32(esp, 0x998066u); SPILL(); f_9979a0(); if (g_unwind) return; RELOAD();
/* 998066: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998068: jl 0x998094 */
  if ((sf != of)) goto L_998094;
L_99806a: /* 99806a: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 99806d: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 998070: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 998072: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 998076: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 998078: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99807c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 99807e: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 998081: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 998084: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 998087: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998088: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99808a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 99808d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99808e: mov eax, ebx */
  eax = ebx;
/* 998090: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 998091: ret 0x10 */
  esp += 20; SPILL(); return;
L_998094: /* 998094: cmp dword ptr [ebx + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 998099: jge 0x9980b5 */
  if ((sf == of)) goto L_9980b5;
L_99809b: /* 99809b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99809f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9980a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9980a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9980a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9980a6: mov ecx, ebp */
  ecx = ebp;
/* 9980a8: call 0x997f00 */
  esp -= 4; W32(esp, 0x9980adu); SPILL(); f_997f00(); if (g_unwind) return; RELOAD();
/* 9980ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9980ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9980af: mov eax, ebx */
  eax = ebx;
/* 9980b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9980b2: ret 0x10 */
  esp += 20; SPILL(); return;
L_9980b5: /* 9980b5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9980b9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9980bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9980be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9980bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9980c0: mov ecx, ebp */
  ecx = ebp;
/* 9980c2: call 0x997d60 */
  esp -= 4; W32(esp, 0x9980c7u); SPILL(); f_997d60(); if (g_unwind) return; RELOAD();
/* 9980c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9980c8: mov ecx, ebp */
  ecx = ebp;
/* 9980ca: call 0x997fe0 */
  esp -= 4; W32(esp, 0x9980cfu); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 9980cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9980d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9980d1: mov ebx, eax */
  ebx = eax;
/* 9980d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9980d4: ret 0x10 */
  esp += 20; SPILL(); return;
L_9980d7: /* 9980d7: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9980da: jne 0x998122 */
  if (!zf) goto L_998122;
L_9980dc: /* 9980dc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9980e0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9980e3: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 9980e6: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9980e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9980ea: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9980ee: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9980f0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9980f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9980f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9980f6: mov ecx, ebp */
  ecx = ebp;
/* 9980f8: jle 0x99810e */
  if ((zf || sf != of)) goto L_99810e;
L_9980fa: /* 9980fa: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 9980fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9980fe: call 0x997fe0 */
  esp -= 4; W32(esp, 0x998103u); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 998103: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998104: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 998107: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 998108: mov eax, ebx */
  eax = ebx;
/* 99810a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99810b: ret 0x10 */
  esp += 20; SPILL(); return;
L_99810e: /* 99810e: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 998111: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 998112: call 0x997fe0 */
  esp -= 4; W32(esp, 0x998117u); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 998117: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998118: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 99811b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99811c: mov eax, ebx */
  eax = ebx;
/* 99811e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99811f: ret 0x10 */
  esp += 20; SPILL(); return;
L_998122: /* 998122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998123: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 998124: xor eax, eax */
  eax = 0;
/* 998126: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 998127: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_998130(void) {
  LOAD_REGS();
L_998130: /* 998130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 998131: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 998135: cmp dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 998138: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 998139: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99813a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99813b: mov ebp, ecx */
  ebp = ecx;
/* 99813d: jne 0x998207 */
  if (!zf) goto L_998207;
L_998143: /* 998143: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 998146: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 998149: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 99814c: jne 0x99819f */
  if (!zf) goto L_99819f;
L_99814e: /* 99814e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 998151: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998154: jge 0x99819f */
  if ((sf == of)) goto L_99819f;
L_998156: /* 998156: xor ebx, ebx */
  ebx = 0;
/* 998158: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99815a: jle 0x998183 */
  if ((zf || sf != of)) goto L_998183;
L_99815c: /* 99815c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_998160: /* 998160: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 998163: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 998166: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 998169: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 99816c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 99816e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99816f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 998170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998171: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 998172: mov ecx, ebp */
  ecx = ebp;
/* 998174: call 0x997fe0 */
  esp -= 4; W32(esp, 0x998179u); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 998179: mov edi, eax */
  edi = eax;
/* 99817b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 99817e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 99817f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998181: jl 0x998160 */
  if ((sf != of)) goto L_998160;
L_998183: /* 998183: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 998187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998188: mov ecx, ebp */
  ecx = ebp;
/* 99818a: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* 998191: call 0x997c30 */
  esp -= 4; W32(esp, 0x998196u); SPILL(); f_997c30(); if (g_unwind) return; RELOAD();
/* 998196: mov eax, edi */
  eax = edi;
/* 998198: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 998199: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99819a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99819b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99819c: ret 4 */
  esp += 8; SPILL(); return;
L_99819f: /* 99819f: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9981a2: jne 0x9981f1 */
  if (!zf) goto L_9981f1;
L_9981a4: /* 9981a4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9981a7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9981aa: jge 0x9981f1 */
  if ((sf == of)) goto L_9981f1;
L_9981ac: /* 9981ac: xor ebx, ebx */
  ebx = 0;
/* 9981ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9981b0: jle 0x9981d5 */
  if ((zf || sf != of)) goto L_9981d5;
L_9981b2: /* 9981b2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 9981b5: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 9981b8: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9981bb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9981be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9981bf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9981c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9981c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9981c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9981c4: mov ecx, ebp */
  ecx = ebp;
/* 9981c6: call 0x997fe0 */
  esp -= 4; W32(esp, 0x9981cbu); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 9981cb: mov esi, eax */
  esi = eax;
/* 9981cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9981d0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9981d1: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9981d3: jl 0x9981b2 */
  if ((sf != of)) goto L_9981b2;
L_9981d5: /* 9981d5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9981d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9981da: mov ecx, ebp */
  ecx = ebp;
/* 9981dc: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 9981e3: call 0x997c30 */
  esp -= 4; W32(esp, 0x9981e8u); SPILL(); f_997c30(); if (g_unwind) return; RELOAD();
/* 9981e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9981e9: mov eax, esi */
  eax = esi;
/* 9981eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9981ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9981ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9981ee: ret 4 */
  esp += 8; SPILL(); return;
L_9981f1: /* 9981f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9981f2: mov ecx, ebp */
  ecx = ebp;
/* 9981f4: call 0x998130 */
  esp -= 4; W32(esp, 0x9981f9u); SPILL(); f_998130(); if (g_unwind) return; RELOAD();
/* 9981f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9981fa: mov ecx, ebp */
  ecx = ebp;
/* 9981fc: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 9981ff: call 0x998130 */
  esp -= 4; W32(esp, 0x998204u); SPILL(); f_998130(); if (g_unwind) return; RELOAD();
/* 998204: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
L_998207: /* 998207: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 998208: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 998209: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99820a: mov eax, ebx */
  eax = ebx;
/* 99820c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99820d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_998210(void) {
  LOAD_REGS();
L_998210: /* 998210: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 998213: xor eax, eax */
  eax = 0;
/* 998215: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 998219: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 99821a: mov ebx, ecx */
  ebx = ecx;
/* 99821c: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 99821f: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 998222: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 998225: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 998228: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998229: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x998229);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99822b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99822c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99822d: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* 998230: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 998231: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 998234: mov ebp, eax */
  ebp = eax;
/* 998236: mov eax, esi */
  eax = esi;
/* 998238: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998239: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x998239);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99823b: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 99823e: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 998241: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 998244: mov edx, eax */
  edx = eax;
/* 998246: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 998249: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 99824c: mov edi, eax */
  edi = eax;
/* 99824e: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 998251: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 998255: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 998256: idiv dword ptr [esp + 0x24] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x24u)); if (!d) d = (int32_t)guest_divzero(0x998256);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99825a: mov eax, edi */
  eax = edi;
/* 99825c: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 99825e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 998262: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 998264: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 998268: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 99826f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998270: call 0x99cf4e */
  esp -= 4; W32(esp, 0x998275u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 998275: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 998278: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99827b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99827c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 998280: call 0x99cf4e */
  esp -= 4; W32(esp, 0x998285u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 998285: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 998289: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99828c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99828f: xor esi, esi */
  esi = 0;
/* 998291: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998293: jle 0x9982ad */
  if ((zf || sf != of)) goto L_9982ad;
L_998295: /* 998295: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 998296: call 0x99cf4e */
  esp -= 4; W32(esp, 0x99829bu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 99829b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 99829f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9982a2: mov dword ptr [edx + esi*4], eax */
  W32((uint32_t)(edx + esi*4), eax);
/* 9982a5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9982a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9982a9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9982ab: jl 0x998295 */
  if ((sf != of)) goto L_998295;
L_9982ad: /* 9982ad: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9982af: je 0x99838b */
  if (zf) goto L_99838b;
L_9982b5: /* 9982b5: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 9982b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9982c0: /* 9982c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9982c3: xor eax, eax */
  eax = 0;
/* 9982c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9982c7: jle 0x9982fe */
  if ((zf || sf != of)) goto L_9982fe;
L_9982c9: /* 9982c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9982d0: /* 9982d0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9982d4: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 9982d7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9982db: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 9982de: mov edx, ecx */
  edx = ecx;
/* 9982e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9982e3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9982e5: mov ecx, edx */
  ecx = edx;
/* 9982e7: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9982ea: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9982ec: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 9982ef: mov ecx, edx */
  ecx = edx;
/* 9982f1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9982f3: mov dword ptr [ebx + 0x28], esi */
  W32((uint32_t)(ebx + 0x28u), esi);
/* 9982f6: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9982f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9982fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9982fc: jl 0x9982d0 */
  if ((sf != of)) goto L_9982d0;
L_9982fe: /* 9982fe: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 998302: xor esi, esi */
  esi = 0;
/* 998304: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998306: jle 0x998381 */
  if ((zf || sf != of)) goto L_998381;
L_998308: /* 998308: jmp 0x998310 */
  goto L_998310;
L_998310: /* 998310: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 998313: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 998317: xor ebp, ebp */
  ebp = 0;
/* 998319: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99831b: jle 0x99835a */
  if ((zf || sf != of)) goto L_99835a;
L_99831d: /* 99831d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_998320: /* 998320: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998324: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* 998327: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 99832a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99832c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99832e: je 0x998352 */
  if (zf) goto L_998352;
L_998330: /* 998330: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_998334: /* 998334: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 998337: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 998339: je 0x99834c */
  if (zf) goto L_99834c;
L_99833b: /* 99833b: jmp 0x998340 */
  goto L_998340;
L_998340: /* 998340: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 998343: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 998345: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 998348: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 998349: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 99834a: jne 0x998340 */
  if (!zf) goto L_998340;
L_99834c: /* 99834c: dec dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 998350: jne 0x998334 */
  if (!zf) goto L_998334;
L_998352: /* 998352: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 998355: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 998356: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 998358: jl 0x998320 */
  if ((sf != of)) goto L_998320;
L_99835a: /* 99835a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99835e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 998362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 998363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 998365: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 998367: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 998368: mov ecx, ebx */
  ecx = ebx;
/* 99836a: call 0x997fe0 */
  esp -= 4; W32(esp, 0x99836fu); SPILL(); f_997fe0(); if (g_unwind) return; RELOAD();
/* 99836f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 998373: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 998377: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99837b: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99837d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99837f: jl 0x998310 */
  if ((sf != of)) goto L_998310;
L_998381: /* 998381: dec dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 998385: jne 0x9982c0 */
  if (!zf) goto L_9982c0;
L_99838b: /* 99838b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 99838e: xor esi, esi */
  esi = 0;
/* 998390: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 998392: jle 0x9983ac */
  if ((zf || sf != of)) goto L_9983ac;
L_998394: /* 998394: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 998398: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 99839b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99839c: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983a1u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983a1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9983a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983a7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9983a8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9983aa: jl 0x998394 */
  if ((sf != of)) goto L_998394;
L_9983ac: /* 9983ac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9983b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9983b1: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983b6u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983b6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9983ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9983bb: call 0x99cf5a */
  esp -= 4; W32(esp, 0x9983c0u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 9983c0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9983c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9983c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9983c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9983ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9983cb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9983ce: ret  */
  esp += 4; SPILL(); return;
}
