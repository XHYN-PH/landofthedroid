#include "recomp.h"
#include "rec_mod.h"

void f_10002ea(void) {
  LOAD_REGS();
L_10002ea: /* 10002ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10002f0: /* 10002f0: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 10002f3: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10002f6: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 10002f9: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10002fc: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10002ff: fcomp dword ptr [ebx + edx*4] */
  fpu_com(ST0, F32((uint32_t)(ebx + edx*4)));
  FPOP();
/* 1000302: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000304: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000307: jne 0x100030f */
  if (!zf) goto L_100030f;
L_1000309: /* 1000309: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100030c: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
L_100030f: /* 100030f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1000310: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000312: jl 0x10002f0 */
  if ((sf != of)) goto L_10002f0;
L_1000314: /* 1000314: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1000317: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 100031a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 100031d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000320: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1000323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000324: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 1000327: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100032a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100032b: call 0xfff110 */
  esp -= 4; W32(esp, 0x1000330u); SPILL(); f_fff110(); if (g_unwind) return; RELOAD();
/* 1000330: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1000333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000334: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000335: mov edi, ebx */
  edi = ebx;
/* 1000337: call 0xfff3a0 */
  esp -= 4; W32(esp, 0x100033cu); SPILL(); f_fff3a0(); if (g_unwind) return; RELOAD();
/* 100033c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100033f: xor edx, edx */
  edx = 0;
/* 1000341: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000344: jl 0x10003a2 */
  if ((sf != of)) goto L_10003a2;
L_1000346: /* 1000346: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1000349: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100034c: lea ebx, [eax + 0xc] */
  ebx = (uint32_t)(eax + 0xcu);
/* 100034f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000352: sub eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000355: mov edi, 3 */
  edi = 0x3u;
/* 100035a: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_100035d: /* 100035d: fld dword ptr [ebx - 0xc] */
  { double v = F32((uint32_t)(ebx + 0xfffffff4u)); FPUSH(v); }
/* 1000360: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000363: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000365: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000368: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_100036a: /* 100036a: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 100036d: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 1000370: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000372: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000374: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000377: je 0x10003c7 */
  if (zf) goto L_10003c7;
L_1000379: /* 1000379: fld dword ptr [ebx - 4] */
  { double v = F32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 100037c: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100037f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000381: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000384: je 0x10003ca */
  if (zf) goto L_10003ca;
L_1000386: /* 1000386: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1000388: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 100038b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100038d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000390: je 0x10003cf */
  if (zf) goto L_10003cf;
L_1000392: /* 1000392: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000395: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1000398: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100039b: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100039e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a0: jl 0x100035d */
  if ((sf != of)) goto L_100035d;
L_10003a2: /* 10003a2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a4: jge 0x10003d4 */
  if ((sf == of)) goto L_10003d4;
L_10003a6: /* 10003a6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 10003a9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 10003ac: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 10003af: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_10003b1: /* 10003b1: fld dword ptr [ecx + edi] */
  { double v = F32((uint32_t)(ecx + edi)); FPUSH(v); }
/* 10003b4: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 10003b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10003b8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10003bb: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_10003bd: /* 10003bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003be: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10003c1: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003c3: jl 0x10003b1 */
  if ((sf != of)) goto L_10003b1;
L_10003c5: /* 10003c5: jmp 0x10003d2 */
  goto L_10003d2;
L_10003c7: /* 10003c7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003c8: jmp 0x10003d2 */
  goto L_10003d2;
L_10003ca: /* 10003ca: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10003cd: jmp 0x10003d2 */
  goto L_10003d2;
L_10003cf: /* 10003cf: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_10003d2: /* 10003d2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_10003d4: /* 10003d4: jne 0x10003ef */
  if (!zf) goto L_10003ef;
L_10003d6: /* 10003d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10003d8: jle 0x10004ae */
  if ((zf || sf != of)) goto L_10004ae;
L_10003de: /* 10003de: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 10003e1: mov ecx, esi */
  ecx = esi;
/* 10003e3: mov eax, 0xc61c3c00 */
  eax = 0xc61c3c00u;
/* 10003e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10003ea: jmp 0x10004ae */
  goto L_10004ae;
L_10003ef: /* 10003ef: xor ebx, ebx */
  ebx = 0;
/* 10003f1: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003f4: jl 0x1000482 */
  if ((sf != of)) goto L_1000482;
L_10003fa: /* 10003fa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10003fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1000400: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 1000403: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000406: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000409: mov edi, 3 */
  edi = 0x3u;
/* 100040e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_1000411: /* 1000411: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 1000414: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000417: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000419: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100041c: jne 0x1000423 */
  if (!zf) goto L_1000423;
L_100041e: /* 100041e: mov eax, dword ptr [edx - 0xc] */
  eax = R32((uint32_t)(edx + 0xfffffff4u));
/* 1000421: jmp 0x1000426 */
  goto L_1000426;
L_1000423: /* 1000423: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
L_1000426: /* 1000426: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
/* 1000429: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100042c: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 100042f: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000431: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000433: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000436: jne 0x1000440 */
  if (!zf) goto L_1000440;
L_1000438: /* 1000438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100043b: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 100043e: jmp 0x1000442 */
  goto L_1000442;
L_1000440: /* 1000440: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_1000442: /* 1000442: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 1000444: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1000447: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100044a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100044c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100044f: jne 0x1000456 */
  if (!zf) goto L_1000456;
L_1000451: /* 1000451: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* 1000454: jmp 0x1000459 */
  goto L_1000459;
L_1000456: /* 1000456: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
L_1000459: /* 1000459: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 100045c: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 100045e: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 1000461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000463: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000466: jne 0x100046c */
  if (!zf) goto L_100046c;
L_1000468: /* 1000468: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 100046a: jmp 0x100046f */
  goto L_100046f;
L_100046c: /* 100046c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
L_100046f: /* 100046f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 1000472: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000475: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000478: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100047b: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100047e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000480: jl 0x1000411 */
  if ((sf != of)) goto L_1000411;
L_1000482: /* 1000482: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000484: jge 0x10004ae */
  if ((sf == of)) goto L_10004ae;
L_1000486: /* 1000486: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000489: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 100048c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100048e: lea ecx, [eax + ebx*4] */
  ecx = (uint32_t)(eax + ebx*4);
/* 1000491: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_1000493: /* 1000493: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 1000496: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000498: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100049a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100049d: jne 0x10004a4 */
  if (!zf) goto L_10004a4;
L_100049f: /* 100049f: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 10004a2: jmp 0x10004a6 */
  goto L_10004a6;
L_10004a4: /* 10004a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_10004a6: /* 10004a6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 10004a8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10004ab: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10004ac: jne 0x1000493 */
  if (!zf) goto L_1000493;
L_10004ae: /* 10004ae: inc dword ptr [0x100d1f0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x100d1f0u), r);
  }
/* 10004b4: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 10004b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10004b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10004b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10004ba: mov esp, ebp */
  esp = ebp;
/* 10004bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10004bd: ret  */
  esp += 4; SPILL(); return;
}

void f_10004c0(void) {
  LOAD_REGS();
L_10004c0: /* 10004c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10004c1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10004c5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 10004c8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 10004cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10004cc: mov esi, dword ptr [ecx + 0x1c] */
  esi = R32((uint32_t)(ecx + 0x1cu));
/* 10004cf: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 10004d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10004d3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10004d5: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 10004d7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10004db: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10004df: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10004e3: fild dword ptr [ecx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 10004e6: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 10004ea: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10004ee: fdiv dword ptr [esp + 4] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4u)));
/* 10004f2: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10004f6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10004fa: fmul dword ptr [esi + 0xe6c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xe6cu)));
/* 1000500: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1000501: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 1000505: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1000509: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 100050d: fcomp dword ptr [0x100a670] */
  fpu_com(ST0, F32((uint32_t)(0x100a670u)));
  FPOP();
/* 1000513: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000515: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1000518: jp 0x1000522 */
  if (pf) goto L_1000522;
L_100051a: /* 100051a: mov dword ptr [esp + 8], 0xc61c3c00 */
  W32((uint32_t)(esp + 0x8u), 0xc61c3c00u);
L_1000522: /* 1000522: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 1000526: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1000527: ret  */
  esp += 4; SPILL(); return;
}

void f_1000530(void) {
  LOAD_REGS();
L_1000530: /* 1000530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1000531: mov ebp, esp */
  ebp = esp;
/* 1000533: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1000536: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000539: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 100053c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100053f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000542: call 0x1009256 */
  esp -= 4; W32(esp, 0x1000547u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 1000547: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 100054b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 100054e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000551: call 0x1009256 */
  esp -= 4; W32(esp, 0x1000556u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 1000556: fcomp qword ptr [esp + 8] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x8u)));
  FPOP();
/* 100055a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100055d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 1000560: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000563: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 1000566: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000568: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 100056e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1000571: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000574: jp 0x10005d9 */
  if (pf) goto L_10005d9;
L_1000576: /* 1000576: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x100057cu); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 100057c: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 100057f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 1000582: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1000585: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 1000588: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 100058e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000591: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x1000597u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1000597: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 100059a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100059d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 100059f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10005a2: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 10005a5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 10005a8: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 10005ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10005b0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10005b3: jne 0x10005c7 */
  if (!zf) goto L_10005c7;
L_10005b5: /* 10005b5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 10005b8: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 10005bb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 10005bf: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 10005c3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10005c5: jmp 0x1000630 */
  goto L_1000630;
L_10005c7: /* 10005c7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 10005ca: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 10005cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 10005d1: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 10005d5: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 10005d7: jmp 0x1000630 */
  goto L_1000630;
L_10005d9: /* 10005d9: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x10005dfu); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 10005df: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 10005e2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 10005e5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 10005e8: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 10005eb: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 10005f1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10005f4: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x10005fau); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 10005fa: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 10005fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000600: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 1000603: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1000606: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1000609: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 100060f: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 1000611: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000613: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000616: jne 0x1000620 */
  if (!zf) goto L_1000620;
L_1000618: /* 1000618: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 100061b: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 100061e: jmp 0x1000626 */
  goto L_1000626;
L_1000620: /* 1000620: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1000623: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
L_1000626: /* 1000626: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 100062a: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 100062e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_1000630: /* 1000630: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 1000633: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000635: je 0x100067c */
  if (zf) goto L_100067c;
L_1000637: /* 1000637: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1000639: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100063c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1000640: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1000642: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000645: call 0x1009256 */
  esp -= 4; W32(esp, 0x100064au); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 100064a: fmul qword ptr [0x100a6b0] */
  ST0 = ST0 * (F64((uint32_t)(0x100a6b0u)));
/* 1000650: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000653: fcomp qword ptr [esp] */
  fpu_com(ST0, F64((uint32_t)(esp)));
  FPOP();
/* 1000657: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000659: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 100065c: jp 0x100067c */
  if (pf) goto L_100067c;
L_100065e: /* 100065e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1000660: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000663: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000666: call 0x1009256 */
  esp -= 4; W32(esp, 0x100066bu); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 100066b: fmul qword ptr [0x100a6a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a6a8u)));
/* 1000671: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000674: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 1000676: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1000678: fchs  */
  ST0 = -ST0;
/* 100067a: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_100067c: /* 100067c: mov esp, ebp */
  esp = ebp;
/* 100067e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100067f: ret  */
  esp += 4; SPILL(); return;
}

void f_1000680(void) {
  LOAD_REGS();
L_1000680: /* 1000680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1000681: mov ebp, esp */
  ebp = esp;
/* 1000683: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1000686: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000689: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 100068c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100068f: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 1000692: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1000696: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 1000699: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 100069c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 10006a0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 10006a4: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 10006a8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10006ac: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 10006b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10006b2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10006b5: call 0x100924a */
  esp -= 4; W32(esp, 0x10006bau); SPILL(); f_100924a(); if (g_unwind) return; RELOAD();
/* 10006ba: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10006be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10006c1: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 10006c4: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 10006ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10006cc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10006cf: jnp 0x1000786 */
  if (!pf) goto L_1000786;
L_10006d5: /* 10006d5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 10006d8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10006db: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10006de: call 0x1009256 */
  esp -= 4; W32(esp, 0x10006e3u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 10006e3: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 10006e7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 10006ea: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10006ed: call 0x1009256 */
  esp -= 4; W32(esp, 0x10006f2u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 10006f2: fcomp qword ptr [esp + 8] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x8u)));
  FPOP();
/* 10006f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10006f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10006fb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10006fe: jp 0x1000707 */
  if (pf) goto L_1000707;
L_1000700: /* 1000700: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1000703: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1000705: jmp 0x100070c */
  goto L_100070c;
L_1000707: /* 1000707: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 100070a: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_100070c: /* 100070c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 1000710: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000713: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1000717: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 100071a: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 100071d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 1000720: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 1000723: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1000725: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000728: call 0x100924a */
  esp -= 4; W32(esp, 0x100072du); SPILL(); f_100924a(); if (g_unwind) return; RELOAD();
/* 100072d: fdivr qword ptr [esp + 0x10] */
  ST0 = (F64((uint32_t)(esp + 0x10u))) / ST0;
/* 1000731: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000734: mov dword ptr [esp + 8], 0xbf800000 */
  W32((uint32_t)(esp + 0x8u), 0xbf800000u);
/* 100073c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 1000740: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1000742: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 1000748: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100074a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 100074d: jnp 0x1000757 */
  if (!pf) goto L_1000757;
L_100074f: /* 100074f: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
L_1000757: /* 1000757: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 100075b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100075e: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 1000761: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 1000767: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 100076a: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x1000770u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1000770: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 1000774: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000777: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 100077a: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 100077c: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 1000782: mov esp, ebp */
  esp = ebp;
/* 1000784: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1000785: ret  */
  esp += 4; SPILL(); return;
L_1000786: /* 1000786: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 100078c: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 1000792: mov esp, ebp */
  esp = ebp;
/* 1000794: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1000795: ret  */
  esp += 4; SPILL(); return;
}

void f_10007a0(void) {
  LOAD_REGS();
L_10007a0: /* 10007a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10007a1: mov ebp, esp */
  ebp = esp;
/* 10007a3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 10007a6: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10007a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 10007ac: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 10007af: mov edx, dword ptr [ecx + 0x4cc] */
  edx = R32((uint32_t)(ecx + 0x4ccu));
/* 10007b5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10007b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10007b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10007b9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10007bb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 10007be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10007bf: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 10007c3: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 10007cb: jle 0x1000a94 */
  if ((zf || sf != of)) goto L_1000a94;
L_10007d1: /* 10007d1: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 10007d4: imul edx, edx, 0x88 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x88u);
  edx = (uint32_t)r;
  }
/* 10007da: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10007dc: add ecx, 0x8d0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8d0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10007e2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 10007e6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10007ea: jmp 0x10007f0 */
  goto L_10007f0;
L_10007ec: /* 10007ec: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_10007f0: /* 10007f0: mov edx, dword ptr [eax + 0x764] */
  edx = R32((uint32_t)(eax + 0x764u));
/* 10007f6: mov eax, dword ptr [eax + 0x768] */
  eax = R32((uint32_t)(eax + 0x768u));
/* 10007fc: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 10007ff: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 1000803: mov edx, dword ptr [ecx - 0x400] */
  edx = R32((uint32_t)(ecx + 0xfffffc00u));
/* 1000809: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 100080c: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1000810: cmp dword ptr [edx + edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1000814: jne 0x1000822 */
  if (!zf) goto L_1000822;
L_1000816: /* 1000816: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1000818: cmp dword ptr [edi + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100081c: je 0x1000a73 */
  if (zf) goto L_1000a73;
L_1000822: /* 1000822: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1000824: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1000827: mov ebx, dword ptr [edx + eax] */
  ebx = R32((uint32_t)(edx + eax));
/* 100082a: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 100082e: lea ebx, [ebx + esi*4] */
  ebx = (uint32_t)(ebx + esi*4);
/* 1000831: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1000834: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* 1000837: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 100083b: lea ebx, [eax + esi*4] */
  ebx = (uint32_t)(eax + esi*4);
/* 100083e: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 1000842: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 1000845: mov ebx, dword ptr [edx + ebx] */
  ebx = R32((uint32_t)(edx + ebx));
/* 1000848: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 100084c: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 100084f: mov ebx, dword ptr [ecx + ebx] */
  ebx = R32((uint32_t)(ecx + ebx));
/* 1000852: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 1000856: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 1000859: mov ebx, dword ptr [edx + ebx] */
  ebx = R32((uint32_t)(edx + ebx));
/* 100085c: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* 1000860: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 1000863: mov ecx, dword ptr [ecx + ebx] */
  ecx = R32((uint32_t)(ecx + ebx));
/* 1000866: mov dword ptr [edx + edi], 1 */
  W32((uint32_t)(edx + edi), 0x1u);
/* 100086d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1000871: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 1000875: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1000877: mov dword ptr [edi + ecx*4], 1 */
  W32((uint32_t)(edi + ecx*4), 0x1u);
/* 100087e: xor ecx, ecx */
  ecx = 0;
/* 1000880: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000882: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 1000886: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 100088a: jle 0x1000a6f */
  if ((zf || sf != of)) goto L_1000a6f;
L_1000890: /* 1000890: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1000894: add edx, 0x76c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x76cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100089a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 100089e: mov edi, edi */
  edi = edi;
L_10008a0: /* 10008a0: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 10008a3: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 10008a7: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 10008aa: mov dword ptr [esp + 0x74], edi */
  W32((uint32_t)(esp + 0x74u), edi);
/* 10008ae: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10008b0: jge 0x1000a60 */
  if ((sf == of)) goto L_1000a60;
L_10008b6: /* 10008b6: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10008ba: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 10008be: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 10008c2: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10008c4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10008c6: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 10008ca: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10008ce: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10008d0: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 10008d4: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10008d8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10008da: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 10008e1: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 10008e5: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10008e7: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 10008eb: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 10008ef: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10008f1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10008f3: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* 10008f6: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 10008fa: mov dword ptr [esp + 0x6c], esi */
  W32((uint32_t)(esp + 0x6cu), esi);
/* 10008fe: mov dword ptr [esp + 0x84], edx */
  W32((uint32_t)(esp + 0x84u), edx);
/* 1000905: jmp 0x1000910 */
  goto L_1000910;
L_1000907: /* 1000907: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 100090b: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 100090f: nop  */
L_1000910: /* 1000910: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1000913: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000915: jge 0x1000a58 */
  if ((sf == of)) goto L_1000a58;
L_100091b: /* 100091b: fld dword ptr [esi + ebx] */
  { double v = F32((uint32_t)(esi + ebx)); FPUSH(v); }
/* 100091e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000921: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000924: call 0x1009256 */
  esp -= 4; W32(esp, 0x1000929u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 1000929: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 100092d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 100092f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000932: call 0x1009256 */
  esp -= 4; W32(esp, 0x1000937u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 1000937: fcomp qword ptr [esp + 0x28] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x28u)));
  FPOP();
/* 100093b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100093e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000941: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000943: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1000946: jp 0x100094d */
  if (pf) goto L_100094d;
L_1000948: /* 1000948: fld dword ptr [esi + ebx] */
  { double v = F32((uint32_t)(esi + ebx)); FPUSH(v); }
/* 100094b: jmp 0x100094f */
  goto L_100094f;
L_100094d: /* 100094d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
L_100094f: /* 100094f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000952: call 0x1009256 */
  esp -= 4; W32(esp, 0x1000957u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 1000957: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 100095b: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 100095f: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1000963: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000966: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 100096a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 100096e: fcomp dword ptr [eax + 0xc] */
  fpu_com(ST0, F32((uint32_t)(eax + 0xcu)));
  FPOP();
/* 1000971: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000973: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1000976: jp 0x10009ae */
  if (pf) goto L_10009ae;
L_1000978: /* 1000978: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 100097c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1000980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000981: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1000985: lea eax, [ecx + ebx] */
  eax = (uint32_t)(ecx + ebx);
/* 1000988: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 100098c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100098d: mov ecx, dword ptr [eax + edi] */
  ecx = R32((uint32_t)(eax + edi));
/* 1000990: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000991: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1000993: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1000995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000996: mov ecx, dword ptr [esi + ebx] */
  ecx = R32((uint32_t)(esi + ebx));
/* 1000999: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100099a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100099b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100099c: lea edi, [esp + 0x50] */
  edi = (uint32_t)(esp + 0x50u);
/* 10009a0: lea esi, [esp + 0x4c] */
  esi = (uint32_t)(esp + 0x4cu);
/* 10009a4: call 0x1000680 */
  esp -= 4; W32(esp, 0x10009a9u); SPILL(); f_1000680(); if (g_unwind) return; RELOAD();
/* 10009a9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10009ac: jmp 0x10009d4 */
  goto L_10009d4;
L_10009ae: /* 10009ae: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 10009b2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10009b6: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10009ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10009bb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10009bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10009be: mov eax, dword ptr [esi + ebx] */
  eax = R32((uint32_t)(esi + ebx));
/* 10009c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10009c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10009c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10009c4: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* 10009c8: lea esi, [esp + 0x44] */
  esi = (uint32_t)(esp + 0x44u);
/* 10009cc: call 0x1000530 */
  esp -= 4; W32(esp, 0x10009d1u); SPILL(); f_1000530(); if (g_unwind) return; RELOAD();
/* 10009d1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10009d4: /* 10009d4: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 10009d8: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 10009dc: fsub dword ptr [ecx + ebx] */
  ST0 = ST0 - (F32((uint32_t)(ecx + ebx)));
/* 10009df: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 10009e3: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10009ea: fstp dword ptr [ecx + ebx] */
  WF32((uint32_t)(ecx + ebx), ST0); FPOP();
/* 10009ed: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10009f1: fsub dword ptr [edx + ebx] */
  ST0 = ST0 - (F32((uint32_t)(edx + ebx)));
/* 10009f4: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 10009fb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 10009ff: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1000a03: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 1000a07: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 1000a0b: fchs  */
  ST0 = -ST0;
/* 1000a0d: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 1000a11: mov dword ptr [edx + ebx], eax */
  W32((uint32_t)(edx + ebx), eax);
/* 1000a14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000a16: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000a19: je 0x1000a2a */
  if (zf) goto L_1000a2a;
L_1000a1b: /* 1000a1b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 1000a1f: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 1000a23: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000a25: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000a28: jne 0x1000a38 */
  if (!zf) goto L_1000a38;
L_1000a2a: /* 1000a2a: mov dword ptr [ecx + ebx], 0 */
  W32((uint32_t)(ecx + ebx), 0x0u);
/* 1000a31: mov dword ptr [edx + ebx], 0 */
  W32((uint32_t)(edx + ebx), 0x0u);
L_1000a38: /* 1000a38: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1000a3c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1000a40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1000a42: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1000a43: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000a46: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1000a4a: mov ecx, eax */
  ecx = eax;
/* 1000a4c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000a4e: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 1000a52: jl 0x1000907 */
  if ((sf != of)) goto L_1000907;
L_1000a58: /* 1000a58: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1000a5c: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
L_1000a60: /* 1000a60: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1000a63: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000a65: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1000a69: jl 0x10008a0 */
  if ((sf != of)) goto L_10008a0;
L_1000a6f: /* 1000a6f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_1000a73: /* 1000a73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1000a77: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1000a7a: mov edi, dword ptr [edx + 0x4cc] */
  edi = R32((uint32_t)(edx + 0x4ccu));
/* 1000a80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1000a81: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000a84: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000a86: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1000a8a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1000a8e: jl 0x10007ec */
  if ((sf != of)) goto L_10007ec;
L_1000a94: /* 1000a94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1000a95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1000a96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1000a97: mov esp, ebp */
  esp = ebp;
/* 1000a99: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1000a9a: ret  */
  esp += 4; SPILL(); return;
}

void f_1000aa0(void) {
  LOAD_REGS();
L_1000aa0: /* 1000aa0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1000aa4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 1000aa8: mov ecx, dword ptr [eax*4 + 0x100d0fc] */
  ecx = R32((uint32_t)(eax*4 + 0x100d0fcu));
/* 1000aaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000ab0: call dword ptr [ecx + 0x10] */
  { uint32_t t = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, 0x1000ab3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000ab3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1000ab4: ret  */
  esp += 4; SPILL(); return;
}

void f_1000ac0(void) {
  LOAD_REGS();
L_1000ac0: /* 1000ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000ac1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000ac2: push 0x914 */
  { uint32_t v = 0x914u; esp -= 4; W32(esp, v); }
/* 1000ac7: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1000acdu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1000acd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1000ad1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000ad4: mov ecx, 0x245 */
  ecx = 0x245u;
/* 1000ad9: mov edi, eax */
  edi = eax;
/* 1000adb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 1000add: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1000ade: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1000adf: ret  */
  esp += 4; SPILL(); return;
}

void f_1000ae0(void) {
  LOAD_REGS();
L_1000ae0: /* 1000ae0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 1000ae4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000ae6: je 0x1000aff */
  if (zf) goto L_1000aff;
L_1000ae8: /* 1000ae8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000ae9: mov ecx, 0x245 */
  ecx = 0x245u;
/* 1000aee: xor eax, eax */
  eax = 0;
/* 1000af0: mov edi, edx */
  edi = edx;
/* 1000af2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1000af4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1000af5: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 1000af9: jmp dword ptr [0x100a040] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_1000aff: /* 1000aff: ret  */
  esp += 4; SPILL(); return;
}

void f_1000b00(void) {
  LOAD_REGS();
L_1000b00: /* 1000b00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000b01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 1000b05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000b07: je 0x1000b7d */
  if (zf) goto L_1000b7d;
L_1000b09: /* 1000b09: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1000b0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1000b0d: mov ebx, dword ptr [0x100a040] */
  ebx = R32((uint32_t)(0x100a040u));
/* 1000b13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000b14: xor edi, edi */
  edi = 0;
/* 1000b16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000b18: jle 0x1000b38 */
  if ((zf || sf != of)) goto L_1000b38;
L_1000b1a: /* 1000b1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1000b20: /* 1000b20: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 1000b23: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 1000b26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000b28: je 0x1000b30 */
  if (zf) goto L_1000b30;
L_1000b2a: /* 1000b2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000b2b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1000b2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000b2d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1000b30: /* 1000b30: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1000b33: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1000b34: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000b36: jl 0x1000b20 */
  if ((sf != of)) goto L_1000b20;
L_1000b38: /* 1000b38: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 1000b3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000b3c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1000b3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000b3e: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000b41: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000b44: xor edi, edi */
  edi = 0;
/* 1000b46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000b48: jle 0x1000b64 */
  if ((zf || sf != of)) goto L_1000b64;
L_1000b4a: /* 1000b4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1000b50: /* 1000b50: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 1000b53: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 1000b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000b57: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1000b59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000b59: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000b5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000b5f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1000b60: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000b62: jl 0x1000b50 */
  if ((sf != of)) goto L_1000b50;
L_1000b64: /* 1000b64: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 1000b67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000b68: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1000b6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000b6a: xor eax, eax */
  eax = 0;
/* 1000b6c: mov ecx, 0x1d */
  ecx = 0x1du;
/* 1000b71: mov edi, esi */
  edi = esi;
/* 1000b73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000b74: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1000b76: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1000b78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000b78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000b7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1000b7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_1000b7d: /* 1000b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1000b7e: ret  */
  esp += 4; SPILL(); return;
}

void f_1000b80(void) {
  LOAD_REGS();
L_1000b80: /* 1000b80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000b81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1000b82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1000b83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000b84: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 1000b88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000b89: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1000b8d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1000b8f: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 1000b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000b92: xor ebx, ebx */
  ebx = 0;
/* 1000b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000b95: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 1000b99: call 0x100913c */
  esp -= 4; W32(esp, 0x1000b9eu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000b9e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1000ba1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 1000ba3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000ba4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000ba5: call 0x100913c */
  esp -= 4; W32(esp, 0x1000baau); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000baa: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 1000bad: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 1000baf: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1000bb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000bb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000bb2: call 0x100913c */
  esp -= 4; W32(esp, 0x1000bb7u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000bb7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 1000bba: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 1000bbc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1000bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000bbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000bbf: call 0x100913c */
  esp -= 4; W32(esp, 0x1000bc4u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000bc4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 1000bc7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 1000bc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000bca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000bcb: call 0x100913c */
  esp -= 4; W32(esp, 0x1000bd0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000bd0: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 1000bd3: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000bd6: xor ebp, ebp */
  ebp = 0;
/* 1000bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000bda: jle 0x1000c56 */
  if ((zf || sf != of)) goto L_1000c56;
L_1000bdc: /* 1000bdc: lea ebx, [edi + 0x14] */
  ebx = (uint32_t)(edi + 0x14u);
/* 1000bdf: nop  */
L_1000be0: /* 1000be0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1000be2: mov eax, ecx */
  eax = ecx;
/* 1000be4: xor edx, edx */
  edx = 0;
/* 1000be6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000be8: je 0x1000c22 */
  if (zf) goto L_1000c22;
L_1000bea: /* 1000bea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1000bf0: /* 1000bf0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1000bf2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1000bf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000bf5: jne 0x1000bf0 */
  if (!zf) goto L_1000bf0;
L_1000bf7: /* 1000bf7: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000bfa: jle 0x1000c22 */
  if ((zf || sf != of)) goto L_1000c22;
L_1000bfc: /* 1000bfc: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 1000bfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000bff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000c00: call 0x100913c */
  esp -= 4; W32(esp, 0x1000c05u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000c05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1000c07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1000c09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000c0a: call 0x100913c */
  esp -= 4; W32(esp, 0x1000c0fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000c0f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1000c11: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 1000c13: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 1000c16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000c17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000c18: call 0x100913c */
  esp -= 4; W32(esp, 0x1000c1du); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000c1d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000c20: jmp 0x1000c2e */
  goto L_1000c2e;
L_1000c22: /* 1000c22: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1000c24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000c25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000c26: call 0x100913c */
  esp -= 4; W32(esp, 0x1000c2bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000c2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1000c2e: /* 1000c2e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1000c30: xor ecx, ecx */
  ecx = 0;
/* 1000c32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000c34: je 0x1000c43 */
  if (zf) goto L_1000c43;
L_1000c36: /* 1000c36: mov edx, eax */
  edx = eax;
/* 1000c38: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1000c3b: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1000c3d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000c3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000c41: jne 0x1000c36 */
  if (!zf) goto L_1000c36;
L_1000c43: /* 1000c43: add dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 1000c47: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 1000c4a: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1000c4b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000c4e: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000c50: jl 0x1000be0 */
  if ((sf != of)) goto L_1000be0;
L_1000c52: /* 1000c52: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_1000c56: /* 1000c56: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000c58: jle 0x1000c74 */
  if ((zf || sf != of)) goto L_1000c74;
L_1000c5a: /* 1000c5a: add edi, 0x114 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_1000c60: /* 1000c60: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1000c62: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 1000c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000c66: call 0x100913c */
  esp -= 4; W32(esp, 0x1000c6bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* 1000c6b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000c6e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000c71: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1000c72: jne 0x1000c60 */
  if (!zf) goto L_1000c60;
L_1000c74: /* 1000c74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1000c75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1000c76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1000c77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1000c78: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1000c79: ret  */
  esp += 4; SPILL(); return;
}

void f_1000c80(void) {
  LOAD_REGS();
L_1000c80: /* 1000c80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000c83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1000c84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1000c85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000c87: push 0x914 */
  { uint32_t v = 0x914u; esp -= 4; W32(esp, v); }
/* 1000c8c: xor ebx, ebx */
  ebx = 0;
/* 1000c8e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1000c90: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 1000c94: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0x1000c9au); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 1000c9a: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 1000c9e: mov esi, eax */
  esi = eax;
/* 1000ca0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1000ca4: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 1000ca7: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 1000ca9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000caa: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1000cae: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000cb3u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000cb3: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 1000cb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000cb6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1000cb8: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000cbdu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000cbd: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 1000cbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000cc0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1000cc3: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000cc8u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000cc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1000cc9: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 1000ccb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000ccc: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 1000ccf: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000cd4u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000cd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1000cd5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 1000cd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000cd8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 1000cdb: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000ce0u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000ce0: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 1000ce3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1000ce6: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000ce9: xor ebp, ebp */
  ebp = 0;
/* 1000ceb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000ced: jle 0x1000d5a */
  if ((zf || sf != of)) goto L_1000d5a;
L_1000cef: /* 1000cef: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 1000cf2: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_1000cf6: /* 1000cf6: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 1000cf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000cf9: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000cfeu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000cfe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1000d00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000d01: mov ebx, eax */
  ebx = eax;
/* 1000d03: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000d08u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000d08: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000d0d: je 0x1000d1f */
  if (zf) goto L_1000d1f;
L_1000d0f: /* 1000d0f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 1000d11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000d12: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000d17u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000d17: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1000d1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000d1d: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_1000d1f: /* 1000d1f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1000d23: xor ecx, ecx */
  ecx = 0;
/* 1000d25: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000d27: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 1000d29: mov eax, ebx */
  eax = ebx;
/* 1000d2b: je 0x1000d3d */
  if (zf) goto L_1000d3d;
L_1000d2d: /* 1000d2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1000d30: /* 1000d30: mov edx, eax */
  edx = eax;
/* 1000d32: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1000d35: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1000d37: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000d39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000d3b: jne 0x1000d30 */
  if (!zf) goto L_1000d30;
L_1000d3d: /* 1000d3d: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1000d41: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1000d44: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000d46: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1000d4a: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1000d4b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000d4e: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000d50: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 1000d54: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1000d58: jl 0x1000cf6 */
  if ((sf != of)) goto L_1000cf6;
L_1000d5a: /* 1000d5a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000d5c: jle 0x1000d7f */
  if ((zf || sf != of)) goto L_1000d7f;
L_1000d5e: /* 1000d5e: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1000d62: lea ebx, [esi + 0x114] */
  ebx = (uint32_t)(esi + 0x114u);
L_1000d68: /* 1000d68: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 1000d6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000d6b: call 0x1009154 */
  esp -= 4; W32(esp, 0x1000d70u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* 1000d70: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 1000d72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000d75: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000d78: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1000d79: jne 0x1000d68 */
  if (!zf) goto L_1000d68;
L_1000d7b: /* 1000d7b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_1000d7f: /* 1000d7f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1000d83: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 1000d86: cmp dword ptr [esi + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000d89: jge 0x1000dad */
  if ((sf == of)) goto L_1000dad;
L_1000d8b: /* 1000d8b: xor eax, eax */
  eax = 0;
/* 1000d8d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000d8f: jle 0x1000da3 */
  if ((zf || sf != of)) goto L_1000da3;
L_1000d91: /* 1000d91: lea ecx, [esi + 0x114] */
  ecx = (uint32_t)(esi + 0x114u);
L_1000d97: /* 1000d97: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000d99: jge 0x1000dad */
  if ((sf == of)) goto L_1000dad;
L_1000d9b: /* 1000d9b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1000d9c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000d9f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000da1: jl 0x1000d97 */
  if ((sf != of)) goto L_1000d97;
L_1000da3: /* 1000da3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1000da4: mov eax, esi */
  eax = esi;
/* 1000da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1000da7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1000da8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1000da9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000dac: ret  */
  esp += 4; SPILL(); return;
L_1000dad: /* 1000dad: xor eax, eax */
  eax = 0;
/* 1000daf: mov ecx, 0x245 */
  ecx = 0x245u;
/* 1000db4: mov edi, esi */
  edi = esi;
/* 1000db6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000db7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1000db9: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0x1000dbfu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 1000dbf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000dc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1000dc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1000dc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1000dc5: xor eax, eax */
  eax = 0;
/* 1000dc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1000dc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000dcb: ret  */
  esp += 4; SPILL(); return;
}

void f_1000dd0(void) {
  LOAD_REGS();
L_1000dd0: /* 1000dd0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000dd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1000dd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1000dd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1000dd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000dd7: mov edi, dword ptr [0x100a038] */
  edi = R32((uint32_t)(0x100a038u));
/* 1000ddd: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 1000ddf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1000de1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1000de3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000de3: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1000de7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1000deb: mov esi, eax */
  esi = eax;
/* 1000ded: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1000df1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1000df4: mov ebp, dword ptr [ecx + 0x1c] */
  ebp = R32((uint32_t)(ecx + 0x1cu));
/* 1000df7: xor eax, eax */
  eax = 0;
/* 1000df9: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 1000dfb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 1000dff: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1000e03: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 1000e06: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1000e09: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 1000e0c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 1000e0f: mov edx, dword ptr [ebp + 0xd24] */
  edx = R32((uint32_t)(ebp + 0xd24u));
/* 1000e15: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 1000e18: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 1000e1b: mov ecx, dword ptr [ebp + 0xd24] */
  ecx = R32((uint32_t)(ebp + 0xd24u));
/* 1000e21: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 1000e24: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1000e26: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 1000e29: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1000e2b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1000e2e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1000e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000e31: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1000e35: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1000e39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1000e3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1000e3b: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 1000e3e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1000e41: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000e44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000e46: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 1000e4e: jle 0x1000f08 */
  if ((zf || sf != of)) goto L_1000f08;
L_1000e54: /* 1000e54: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000e57: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 1000e5b: jmp 0x1000e60 */
  goto L_1000e60;
L_1000e60: /* 1000e60: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1000e62: xor edi, edi */
  edi = 0;
/* 1000e64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000e66: je 0x1000ee9 */
  if (zf) goto L_1000ee9;
L_1000e6c: /* 1000e6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1000e70: /* 1000e70: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1000e72: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1000e73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000e75: jne 0x1000e70 */
  if (!zf) goto L_1000e70;
L_1000e77: /* 1000e77: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000e79: je 0x1000ee9 */
  if (zf) goto L_1000ee9;
L_1000e7b: /* 1000e7b: cmp edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000e7f: jle 0x1000e85 */
  if ((zf || sf != of)) goto L_1000e85;
L_1000e81: /* 1000e81: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_1000e85: /* 1000e85: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1000e87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000e88: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0x1000e8eu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 1000e8e: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 1000e91: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1000e95: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 1000e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000e9b: xor ecx, ecx */
  ecx = 0;
/* 1000e9d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 1000e9f: jle 0x1000ee9 */
  if ((zf || sf != of)) goto L_1000ee9;
L_1000ea1: /* 1000ea1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1000ea5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1000ea9: lea eax, [eax + edx*4 + 0x114] */
  eax = (uint32_t)(eax + edx*4 + 0x114u);
L_1000eb0: /* 1000eb0: mov edx, 1 */
  edx = 0x1u;
/* 1000eb5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1000eb7: test dword ptr [ebx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000eb9: je 0x1000ee4 */
  if (zf) goto L_1000ee4;
L_1000ebb: /* 1000ebb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1000ebd: mov ebx, dword ptr [ebp + 0xd24] */
  ebx = R32((uint32_t)(ebp + 0xd24u));
/* 1000ec3: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 1000ec6: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 1000eca: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1000ecc: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 1000ecf: mov ebx, dword ptr [ebx + ebp*4] */
  ebx = R32((uint32_t)(ebx + ebp*4));
/* 1000ed2: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 1000ed6: mov dword ptr [ebx + ecx*4], edx */
  W32((uint32_t)(ebx + ecx*4), edx);
/* 1000ed9: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 1000edd: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 1000ee1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1000ee4: /* 1000ee4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1000ee5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000ee7: jl 0x1000eb0 */
  if ((sf != of)) goto L_1000eb0;
L_1000ee9: /* 1000ee9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1000eed: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 1000ef0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1000ef1: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000ef4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000ef6: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1000efa: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 1000efe: jl 0x1000e60 */
  if ((sf != of)) goto L_1000e60;
L_1000f04: /* 1000f04: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
L_1000f08: /* 1000f08: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1000f0c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000f0f: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1000f13: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1000f17: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1000f1b: fild dword ptr [esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 1000f1e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1000f22: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1000f26: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000f29: call 0x1009180 */
  esp -= 4; W32(esp, 0x1000f2eu); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* 1000f2e: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 1000f34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000f37: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000f3a: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x1000f40u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1000f40: call 0x1009188 */
  esp -= 4; W32(esp, 0x1000f45u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 1000f45: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1000f49: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 1000f50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000f51: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 1000f54: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 1000f57: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1000f5du); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1000f5d: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1000f60: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000f63: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000f66: xor ebp, ebp */
  ebp = 0;
/* 1000f68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000f6a: jle 0x1000fdd */
  if ((zf || sf != of)) goto L_1000fdd;
L_1000f6c: /* 1000f6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1000f70: /* 1000f70: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000f73: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000f74: idiv dword ptr [esi + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x1000f74);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000f77: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 1000f7b: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 1000f7f: mov edi, eax */
  edi = eax;
/* 1000f81: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1000f88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000f89: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1000f8fu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1000f8f: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 1000f92: mov dword ptr [ecx + ebp*4], eax */
  W32((uint32_t)(ecx + ebp*4), eax);
/* 1000f95: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000f98: xor ecx, ecx */
  ecx = 0;
/* 1000f9a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000f9c: jle 0x1000fd1 */
  if ((zf || sf != of)) goto L_1000fd1;
L_1000f9e: /* 1000f9e: mov edi, edi */
  edi = edi;
L_1000fa0: /* 1000fa0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1000fa4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000fa5: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x1000fa5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000fa7: mov ebx, eax */
  ebx = eax;
/* 1000fa9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1000fad: mov edx, ebx */
  edx = ebx;
/* 1000faf: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 1000fb2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1000fb8: mov eax, edi */
  eax = edi;
/* 1000fba: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000fbb: idiv dword ptr [esi + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x1000fbb);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000fbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1000fbf: mov edi, eax */
  edi = eax;
/* 1000fc1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1000fc4: mov edx, dword ptr [eax + ebp*4] */
  edx = R32((uint32_t)(eax + ebp*4));
/* 1000fc7: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000fcb: mov dword ptr [edx + ecx*4 - 4], ebx */
  W32((uint32_t)(edx + ecx*4 + 0xfffffffcu), ebx);
/* 1000fcf: jl 0x1000fa0 */
  if ((sf != of)) goto L_1000fa0;
L_1000fd1: /* 1000fd1: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000fd4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1000fd5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000fd7: jl 0x1000f70 */
  if ((sf != of)) goto L_1000f70;
L_1000fd9: /* 1000fd9: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
L_1000fdd: /* 1000fdd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1000fdf: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 1000fe2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000fe4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000fe5: idiv dword ptr [ebx + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x1000fe5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000fe8: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* 1000feb: mov ebp, 0x10 */
  ebp = 0x10u;
/* 1000ff0: mov ebx, eax */
  ebx = eax;
/* 1000ff2: mov ecx, ebx */
  ecx = ebx;
L_1000ff4: /* 1000ff4: mov eax, ecx */
  eax = ecx;
/* 1000ff6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000ff7: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1000ffa: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1000ffc: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1000fff: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 1001001: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001003: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001006: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1001007: jne 0x1000ff4 */
  if (!zf) goto L_1000ff4;
L_1001009: /* 1001009: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100100a: mov dword ptr [esi + 0x70], 0x98967f */
  W32((uint32_t)(esi + 0x70u), 0x98967fu);
/* 1001011: mov eax, esi */
  eax = esi;
/* 1001013: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001014: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001015: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001016: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001019: ret  */
  esp += 4; SPILL(); return;
}

void f_1000e5d(void) {
  LOAD_REGS();
L_1000e5d: /* 1000e5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1000e60: /* 1000e60: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1000e62: xor edi, edi */
  edi = 0;
/* 1000e64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000e66: je 0x1000ee9 */
  if (zf) goto L_1000ee9;
L_1000e6c: /* 1000e6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1000e70: /* 1000e70: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1000e72: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1000e73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000e75: jne 0x1000e70 */
  if (!zf) goto L_1000e70;
L_1000e77: /* 1000e77: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000e79: je 0x1000ee9 */
  if (zf) goto L_1000ee9;
L_1000e7b: /* 1000e7b: cmp edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000e7f: jle 0x1000e85 */
  if ((zf || sf != of)) goto L_1000e85;
L_1000e81: /* 1000e81: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_1000e85: /* 1000e85: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1000e87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000e88: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0x1000e8eu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 1000e8e: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 1000e91: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 1000e95: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 1000e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000e9b: xor ecx, ecx */
  ecx = 0;
/* 1000e9d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 1000e9f: jle 0x1000ee9 */
  if ((zf || sf != of)) goto L_1000ee9;
L_1000ea1: /* 1000ea1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1000ea5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1000ea9: lea eax, [eax + edx*4 + 0x114] */
  eax = (uint32_t)(eax + edx*4 + 0x114u);
L_1000eb0: /* 1000eb0: mov edx, 1 */
  edx = 0x1u;
/* 1000eb5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1000eb7: test dword ptr [ebx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1000eb9: je 0x1000ee4 */
  if (zf) goto L_1000ee4;
L_1000ebb: /* 1000ebb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1000ebd: mov ebx, dword ptr [ebp + 0xd24] */
  ebx = R32((uint32_t)(ebp + 0xd24u));
/* 1000ec3: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 1000ec6: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 1000eca: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1000ecc: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 1000ecf: mov ebx, dword ptr [ebx + ebp*4] */
  ebx = R32((uint32_t)(ebx + ebp*4));
/* 1000ed2: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 1000ed6: mov dword ptr [ebx + ecx*4], edx */
  W32((uint32_t)(ebx + ecx*4), edx);
/* 1000ed9: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 1000edd: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 1000ee1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1000ee4: /* 1000ee4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1000ee5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000ee7: jl 0x1000eb0 */
  if ((sf != of)) goto L_1000eb0;
L_1000ee9: /* 1000ee9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1000eed: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 1000ef0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1000ef1: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000ef4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000ef6: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1000efa: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 1000efe: jl 0x1000e60 */
  if ((sf != of)) goto L_1000e60;
L_1000f04: /* 1000f04: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 1000f08: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1000f0c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1000f0f: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1000f13: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1000f17: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1000f1b: fild dword ptr [esi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 1000f1e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1000f22: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1000f26: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000f29: call 0x1009180 */
  esp -= 4; W32(esp, 0x1000f2eu); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* 1000f2e: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 1000f34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000f37: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1000f3a: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x1000f40u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1000f40: call 0x1009188 */
  esp -= 4; W32(esp, 0x1000f45u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 1000f45: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1000f49: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 1000f50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000f51: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 1000f54: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 1000f57: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1000f5du); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1000f5d: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1000f60: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000f63: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000f66: xor ebp, ebp */
  ebp = 0;
/* 1000f68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000f6a: jle 0x1000fdd */
  if ((zf || sf != of)) goto L_1000fdd;
L_1000f6c: /* 1000f6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1000f70: /* 1000f70: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000f73: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000f74: idiv dword ptr [esi + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x1000f74);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000f77: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 1000f7b: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 1000f7f: mov edi, eax */
  edi = eax;
/* 1000f81: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1000f88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1000f89: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1000f8fu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1000f8f: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 1000f92: mov dword ptr [ecx + ebp*4], eax */
  W32((uint32_t)(ecx + ebp*4), eax);
/* 1000f95: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1000f98: xor ecx, ecx */
  ecx = 0;
/* 1000f9a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1000f9c: jle 0x1000fd1 */
  if ((zf || sf != of)) goto L_1000fd1;
L_1000f9e: /* 1000f9e: mov edi, edi */
  edi = edi;
L_1000fa0: /* 1000fa0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1000fa4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000fa5: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x1000fa5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000fa7: mov ebx, eax */
  ebx = eax;
/* 1000fa9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1000fad: mov edx, ebx */
  edx = ebx;
/* 1000faf: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 1000fb2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000fb4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1000fb8: mov eax, edi */
  eax = edi;
/* 1000fba: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000fbb: idiv dword ptr [esi + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x1000fbb);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000fbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1000fbf: mov edi, eax */
  edi = eax;
/* 1000fc1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1000fc4: mov edx, dword ptr [eax + ebp*4] */
  edx = R32((uint32_t)(eax + ebp*4));
/* 1000fc7: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000fcb: mov dword ptr [edx + ecx*4 - 4], ebx */
  W32((uint32_t)(edx + ecx*4 + 0xfffffffcu), ebx);
/* 1000fcf: jl 0x1000fa0 */
  if ((sf != of)) goto L_1000fa0;
L_1000fd1: /* 1000fd1: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1000fd4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1000fd5: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000fd7: jl 0x1000f70 */
  if ((sf != of)) goto L_1000f70;
L_1000fd9: /* 1000fd9: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
L_1000fdd: /* 1000fdd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1000fdf: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 1000fe2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000fe4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000fe5: idiv dword ptr [ebx + 8] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx + 0x8u)); if (!d) d = (int32_t)guest_divzero(0x1000fe5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1000fe8: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* 1000feb: mov ebp, 0x10 */
  ebp = 0x10u;
/* 1000ff0: mov ebx, eax */
  ebx = eax;
/* 1000ff2: mov ecx, ebx */
  ecx = ebx;
L_1000ff4: /* 1000ff4: mov eax, ecx */
  eax = ecx;
/* 1000ff6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1000ff7: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1000ffa: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1000ffc: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1000fff: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 1001001: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001003: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001006: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1001007: jne 0x1000ff4 */
  if (!zf) goto L_1000ff4;
L_1001009: /* 1001009: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100100a: mov dword ptr [esi + 0x70], 0x98967f */
  W32((uint32_t)(esi + 0x70u), 0x98967fu);
/* 1001011: mov eax, esi */
  eax = esi;
/* 1001013: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001014: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001015: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001016: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001019: ret  */
  esp += 4; SPILL(); return;
}

void f_1001020(void) {
  LOAD_REGS();
L_1001020: /* 1001020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1001021: mov ebp, esp */
  ebp = esp;
/* 1001023: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1001026: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100102c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 100102f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1001031: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001032: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001033: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 1001036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001037: xor edi, edi */
  edi = 0;
/* 1001039: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100103b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 100103f: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 1001043: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1001047: jle 0x1001070 */
  if ((zf || sf != of)) goto L_1001070;
L_1001049: /* 1001049: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 100104c: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 1001050: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_1001052: /* 1001052: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 1001055: fld dword ptr [esp + eax + 0x18] */
  { double v = F32((uint32_t)(esp + eax + 0x18u)); FPUSH(v); }
/* 1001059: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100105c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 100105f: call 0x1009256 */
  esp -= 4; W32(esp, 0x1001064u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 1001064: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001067: fstp dword ptr [esp + edi*4 + 0x18] */
  WF32((uint32_t)(esp + edi*4 + 0x18u), ST0); FPOP();
/* 100106b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100106c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100106e: jl 0x1001052 */
  if ((sf != of)) goto L_1001052;
L_1001070: /* 1001070: xor ecx, ecx */
  ecx = 0;
/* 1001072: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001075: jl 0x10010e2 */
  if ((sf != of)) goto L_10010e2;
L_1001077: /* 1001077: mov edx, 3 */
  edx = 0x3u;
L_100107c: /* 100107c: fld dword ptr [esp + ecx*4 + 0x18] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x18u)); FPUSH(v); }
/* 1001080: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 1001084: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1001086: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1001089: jne 0x1001093 */
  if (!zf) goto L_1001093;
L_100108b: /* 100108b: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 100108f: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_1001093: /* 1001093: fld dword ptr [esp + ecx*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x1cu)); FPUSH(v); }
/* 1001097: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 100109b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100109d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10010a0: jne 0x10010aa */
  if (!zf) goto L_10010aa;
L_10010a2: /* 10010a2: mov eax, dword ptr [esp + ecx*4 + 0x1c] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x1cu));
/* 10010a6: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_10010aa: /* 10010aa: fld dword ptr [esp + ecx*4 + 0x20] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x20u)); FPUSH(v); }
/* 10010ae: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 10010b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10010b4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10010b7: jne 0x10010c1 */
  if (!zf) goto L_10010c1;
L_10010b9: /* 10010b9: mov eax, dword ptr [esp + ecx*4 + 0x20] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x20u));
/* 10010bd: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_10010c1: /* 10010c1: fld dword ptr [esp + ecx*4 + 0x24] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x24u)); FPUSH(v); }
/* 10010c5: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 10010c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10010cb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10010ce: jne 0x10010d8 */
  if (!zf) goto L_10010d8;
L_10010d0: /* 10010d0: mov eax, dword ptr [esp + ecx*4 + 0x24] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x24u));
/* 10010d4: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_10010d8: /* 10010d8: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10010db: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10010de: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10010e0: jl 0x100107c */
  if ((sf != of)) goto L_100107c;
L_10010e2: /* 10010e2: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10010e4: jge 0x1001102 */
  if ((sf == of)) goto L_1001102;
L_10010e6: /* 10010e6: fld dword ptr [esp + ecx*4 + 0x18] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x18u)); FPUSH(v); }
/* 10010ea: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 10010ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10010f0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10010f3: jne 0x10010fd */
  if (!zf) goto L_10010fd;
L_10010f5: /* 10010f5: mov edx, dword ptr [esp + ecx*4 + 0x18] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 10010f9: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_10010fd: /* 10010fd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10010fe: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001100: jl 0x10010e6 */
  if ((sf != of)) goto L_10010e6;
L_1001102: /* 1001102: xor edi, edi */
  edi = 0;
/* 1001104: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001106: jle 0x1001132 */
  if ((zf || sf != of)) goto L_1001132;
L_1001108: /* 1001108: jmp 0x1001110 */
  goto L_1001110;
L_1001110: /* 1001110: fld dword ptr [esp + edi*4 + 0x18] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x18u)); FPUSH(v); }
/* 1001114: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1001117: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 100111d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1001120: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x1001126u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1001126: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001129: fstp dword ptr [esp + edi*4 + 0x18] */
  WF32((uint32_t)(esp + edi*4 + 0x18u), ST0); FPOP();
/* 100112d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100112e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001130: jl 0x1001110 */
  if ((sf != of)) goto L_1001110;
L_1001132: /* 1001132: xor eax, eax */
  eax = 0;
/* 1001134: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001137: jl 0x1001178 */
  if ((sf != of)) goto L_1001178;
L_1001139: /* 1001139: mov ecx, 3 */
  ecx = 0x3u;
L_100113e: /* 100113e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001142: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001145: fadd dword ptr [esp + eax*4 + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x18u)));
/* 1001149: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100114c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100114e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1001152: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001156: fadd dword ptr [esp + eax*4 + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0xcu)));
/* 100115a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100115e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001162: fadd dword ptr [esp + eax*4 + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x10u)));
/* 1001166: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100116a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100116e: fadd dword ptr [esp + eax*4 + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x14u)));
/* 1001172: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1001176: jl 0x100113e */
  if ((sf != of)) goto L_100113e;
L_1001178: /* 1001178: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100117a: jge 0x1001191 */
  if ((sf == of)) goto L_1001191;
L_100117c: /* 100117c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001180: /* 1001180: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001184: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001185: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001187: fadd dword ptr [esp + eax*4 + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x14u)));
/* 100118b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100118f: jl 0x1001180 */
  if ((sf != of)) goto L_1001180;
L_1001191: /* 1001191: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 1001194: xor ecx, ecx */
  ecx = 0;
/* 1001196: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 1001197: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001199: jle 0x10011d6 */
  if ((zf || sf != of)) goto L_10011d6;
L_100119b: /* 100119b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 100119f: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 10011a2: add edx, 0x514 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x514u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_10011a8: /* 10011a8: cmp edi, dword ptr [edx + 0x300] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x300u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10011ae: jge 0x10011ce */
  if ((sf == of)) goto L_10011ce;
L_10011b0: /* 10011b0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10011b4: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 10011b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10011b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10011bb: jp 0x10011ce */
  if (pf) goto L_10011ce;
L_10011bd: /* 10011bd: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10011c1: fcomp dword ptr [edx + 0x100] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x100u)));
  FPOP();
/* 10011c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10011c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10011cc: jnp 0x10011d6 */
  if (!pf) goto L_10011d6;
L_10011ce: /* 10011ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10011cf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10011d2: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10011d4: jl 0x10011a8 */
  if ((sf != of)) goto L_10011a8;
L_10011d6: /* 10011d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10011d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10011d8: mov eax, ecx */
  eax = ecx;
/* 10011da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10011db: mov esp, ebp */
  esp = ebp;
/* 10011dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10011de: ret  */
  esp += 4; SPILL(); return;
}

void f_100110a(void) {
  LOAD_REGS();
L_100110a: /* 100110a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001110: /* 1001110: fld dword ptr [esp + edi*4 + 0x18] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x18u)); FPUSH(v); }
/* 1001114: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1001117: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* 100111d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1001120: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x1001126u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 1001126: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001129: fstp dword ptr [esp + edi*4 + 0x18] */
  WF32((uint32_t)(esp + edi*4 + 0x18u), ST0); FPOP();
/* 100112d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100112e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001130: jl 0x1001110 */
  if ((sf != of)) goto L_1001110;
L_1001132: /* 1001132: xor eax, eax */
  eax = 0;
/* 1001134: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001137: jl 0x1001178 */
  if ((sf != of)) goto L_1001178;
L_1001139: /* 1001139: mov ecx, 3 */
  ecx = 0x3u;
L_100113e: /* 100113e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001142: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001145: fadd dword ptr [esp + eax*4 + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x18u)));
/* 1001149: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100114c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100114e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1001152: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001156: fadd dword ptr [esp + eax*4 + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0xcu)));
/* 100115a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100115e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001162: fadd dword ptr [esp + eax*4 + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x10u)));
/* 1001166: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100116a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100116e: fadd dword ptr [esp + eax*4 + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x14u)));
/* 1001172: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1001176: jl 0x100113e */
  if ((sf != of)) goto L_100113e;
L_1001178: /* 1001178: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100117a: jge 0x1001191 */
  if ((sf == of)) goto L_1001191;
L_100117c: /* 100117c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001180: /* 1001180: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1001184: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001185: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001187: fadd dword ptr [esp + eax*4 + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax*4 + 0x14u)));
/* 100118b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100118f: jl 0x1001180 */
  if ((sf != of)) goto L_1001180;
L_1001191: /* 1001191: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 1001194: xor ecx, ecx */
  ecx = 0;
/* 1001196: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 1001197: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001199: jle 0x10011d6 */
  if ((zf || sf != of)) goto L_10011d6;
L_100119b: /* 100119b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 100119f: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 10011a2: add edx, 0x514 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x514u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_10011a8: /* 10011a8: cmp edi, dword ptr [edx + 0x300] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x300u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10011ae: jge 0x10011ce */
  if ((sf == of)) goto L_10011ce;
L_10011b0: /* 10011b0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10011b4: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 10011b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10011b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10011bb: jp 0x10011ce */
  if (pf) goto L_10011ce;
L_10011bd: /* 10011bd: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10011c1: fcomp dword ptr [edx + 0x100] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x100u)));
  FPOP();
/* 10011c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10011c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10011cc: jnp 0x10011d6 */
  if (!pf) goto L_10011d6;
L_10011ce: /* 10011ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10011cf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10011d2: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10011d4: jl 0x10011a8 */
  if ((sf != of)) goto L_10011a8;
L_10011d6: /* 10011d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10011d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10011d8: mov eax, ecx */
  eax = ecx;
/* 10011da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10011db: mov esp, ebp */
  esp = ebp;
/* 10011dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10011de: ret  */
  esp += 4; SPILL(); return;
}

void f_10011e0(void) {
  LOAD_REGS();
L_10011e0: /* 10011e0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10011e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10011e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10011e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10011e7: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10011eb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10011ec: idiv dword ptr [edi] */
  { int32_t d = (int32_t)R32((uint32_t)(edi)); if (!d) d = (int32_t)guest_divzero(0x10011ec);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10011ee: xor ebp, ebp */
  ebp = 0;
/* 10011f0: mov ebx, eax */
  ebx = eax;
/* 10011f2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10011f4: jle 0x100122a */
  if ((zf || sf != of)) goto L_100122a;
L_10011f6: /* 10011f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10011f7: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 10011fb: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10011ff: nop  */
L_1001200: /* 1001200: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1001202: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001204: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001205: call 0x10039a0 */
  esp -= 4; W32(esp, 0x100120au); SPILL(); f_10039a0(); if (g_unwind) return; RELOAD();
/* 100120a: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 100120e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100120f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001210: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001211: call 0xff4000 */
  esp -= 4; W32(esp, 0x1001216u); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* 1001216: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1001218: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 100121c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100121f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001222: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1001223: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1001227: jne 0x1001200 */
  if (!zf) goto L_1001200;
L_1001229: /* 1001229: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_100122a: /* 100122a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100122b: mov eax, ebp */
  eax = ebp;
/* 100122d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100122e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100122f: ret  */
  esp += 4; SPILL(); return;
}

void f_1001230(void) {
  LOAD_REGS();
L_1001230: /* 1001230: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001231: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1001235: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001237: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 100123b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 100123d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 100123e: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x100123e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1001240: xor esi, esi */
  esi = 0;
/* 1001242: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 1001246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001248: jle 0x1001291 */
  if ((zf || sf != of)) goto L_1001291;
L_100124a: /* 100124a: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 100124e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 100124f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1001250: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 1001257: mov ebx, eax */
  ebx = eax;
/* 1001259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001260: /* 1001260: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1001262: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1001264: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001265: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001266: call 0x10039a0 */
  esp -= 4; W32(esp, 0x100126bu); SPILL(); f_10039a0(); if (g_unwind) return; RELOAD();
/* 100126b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100126f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001271: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001272: call 0xff4000 */
  esp -= 4; W32(esp, 0x1001277u); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* 1001277: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100127b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100127d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001280: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001282: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1001283: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1001287: jne 0x1001260 */
  if (!zf) goto L_1001260;
L_1001289: /* 1001289: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100128a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100128b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100128c: mov eax, edx */
  eax = edx;
/* 100128e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100128f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1001290: ret  */
  esp += 4; SPILL(); return;
L_1001291: /* 1001291: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001292: mov eax, esi */
  eax = esi;
/* 1001294: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001295: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1001296: ret  */
  esp += 4; SPILL(); return;
}

void f_1001550(void) {
  LOAD_REGS();
L_1001550: /* 1001550: sub esp, 0x438 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1001556: mov eax, dword ptr [esp + 0x43c] */
  eax = R32((uint32_t)(esp + 0x43cu));
/* 100155d: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 1001560: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 1001563: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 1001566: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001567: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1001568: mov ebp, dword ptr [esp + 0x448] */
  ebp = R32((uint32_t)(esp + 0x448u));
/* 100156f: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 1001572: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 1001575: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 1001579: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 100157c: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 100157e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1001580: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 1001584: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1001587: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1001589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100158a: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 100158d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 100158e: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x100158e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1001590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001591: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1001595: mov ecx, 0x80 */
  ecx = 0x80u;
/* 100159a: lea edi, [esp + 0x248] */
  edi = (uint32_t)(esp + 0x248u);
/* 10015a1: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 10015a5: mov esi, dword ptr [esp + 0x45c] */
  esi = R32((uint32_t)(esp + 0x45cu));
/* 10015ac: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 10015b0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 10015b4: xor eax, eax */
  eax = 0;
/* 10015b6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10015b8: mov ecx, 0x80 */
  ecx = 0x80u;
/* 10015bd: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* 10015c1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10015c3: xor edi, edi */
  edi = 0;
/* 10015c5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10015c7: jne 0x10015cf */
  if (!zf) goto L_10015cf;
L_10015c9: /* 10015c9: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10015cd: jmp 0x10015de */
  goto L_10015de;
L_10015cf: /* 10015cf: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10015d3: mov ecx, dword ptr [eax + esi*4 + 0x1004] */
  ecx = R32((uint32_t)(eax + esi*4 + 0x1004u));
/* 10015da: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_10015de: /* 10015de: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10015e2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10015e6: cmp edx, dword ptr [eax + esi*4 + 0x1008] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + esi*4 + 0x1008u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10015ed: jge 0x1001893 */
  if ((sf == of)) goto L_1001893;
L_10015f3: /* 10015f3: jmp 0x1001600 */
  goto L_1001600;
L_10015f5: /* 10015f5: xor edi, edi */
  edi = 0;
/* 10015f7: jmp 0x1001600 */
  goto L_1001600;
L_1001600: /* 1001600: mov ecx, dword ptr [esp + 0x468] */
  ecx = R32((uint32_t)(esp + 0x468u));
/* 1001607: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001609: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 100160d: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 1001611: je 0x100161e */
  if (zf) goto L_100161e;
L_1001613: /* 1001613: mov eax, edx */
  eax = edx;
/* 1001615: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1001618: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100161a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_100161e: /* 100161e: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1001622: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001624: jle 0x100187b */
  if ((zf || sf != of)) goto L_100187b;
L_100162a: /* 100162a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001630: /* 1001630: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001632: jne 0x10016ad */
  if (!zf) goto L_10016ad;
L_1001634: /* 1001634: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 100163b: xor esi, esi */
  esi = 0;
/* 100163d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100163f: jle 0x10016ad */
  if ((zf || sf != of)) goto L_10016ad;
L_1001641: /* 1001641: mov ecx, dword ptr [esp + 0x460] */
  ecx = R32((uint32_t)(esp + 0x460u));
/* 1001648: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 100164b: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 100164e: mov ecx, 1 */
  ecx = 0x1u;
/* 1001653: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001655: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1001658: jle 0x100167c */
  if ((zf || sf != of)) goto L_100167c;
L_100165a: /* 100165a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100165d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1001660: /* 1001660: imul eax, dword ptr [esp + 0x3c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x3cu)));
  eax = (uint32_t)r;
  }
/* 1001665: lea ebx, [ecx + edi] */
  ebx = (uint32_t)(ecx + edi);
/* 1001668: cmp ebx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100166c: jge 0x1001670 */
  if ((sf == of)) goto L_1001670;
L_100166e: /* 100166e: add eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1001670: /* 1001670: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 1001674: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001675: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001678: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100167a: jl 0x1001660 */
  if ((sf != of)) goto L_1001660;
L_100167c: /* 100167c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100167f: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001682: jge 0x10016a1 */
  if ((sf == of)) goto L_10016a1;
L_1001684: /* 1001684: mov edx, dword ptr [esp + 0x44c] */
  edx = R32((uint32_t)(esp + 0x44cu));
/* 100168b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100168e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100168f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001691: call 0xff4000 */
  esp -= 4; W32(esp, 0x1001696u); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* 1001696: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 1001699: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100169c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100169e: mov dword ptr [ebp + 0x28], ecx */
  W32((uint32_t)(ebp + 0x28u), ecx);
L_10016a1: /* 10016a1: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 10016a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10016a9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016ab: jl 0x1001641 */
  if ((sf != of)) goto L_1001641;
L_10016ad: /* 10016ad: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10016af: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10016b7: jle 0x100181a */
  if ((zf || sf != of)) goto L_100181a;
L_10016bd: /* 10016bd: mov ecx, edi */
  ecx = edi;
/* 10016bf: imul ecx, dword ptr [esp + 0x1c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x1cu)));
  ecx = (uint32_t)r;
  }
/* 10016c4: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 10016c8: jmp 0x10016d0 */
  goto L_10016d0;
L_10016d0: /* 10016d0: cmp edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016d4: jge 0x100181a */
  if ((sf == of)) goto L_100181a;
L_10016da: /* 10016da: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10016de: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10016e0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10016e2: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 10016e6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10016ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10016ec: je 0x100172a */
  if (zf) goto L_100172a;
L_10016ee: /* 10016ee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10016f2: mov eax, dword ptr [ebp + ecx*4 + 0x30] */
  eax = R32((uint32_t)(ebp + ecx*4 + 0x30u));
/* 10016f6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016f8: lea esi, [ebp + ecx*4 + 0x30] */
  esi = (uint32_t)(ebp + ecx*4 + 0x30u);
/* 10016fc: jl 0x100172a */
  if ((sf != of)) goto L_100172a;
L_10016fe: /* 10016fe: mov ebx, dword ptr [esp + 0x44c] */
  ebx = R32((uint32_t)(esp + 0x44cu));
/* 1001705: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_1001708: /* 1001708: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001709: call 0x100916c */
  esp -= 4; W32(esp, 0x100170eu); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 100170e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1001712: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1001716: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001719: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 100171c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 100171e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001721: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001722: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001724: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1001728: jge 0x1001708 */
  if ((sf == of)) goto L_1001708;
L_100172a: /* 100172a: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 1001731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 1001733: jle 0x10017f6 */
  if ((zf || sf != of)) goto L_10017f6;
L_1001739: /* 1001739: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100173d: mov esi, dword ptr [esp + 0x460] */
  esi = R32((uint32_t)(esp + 0x460u));
/* 1001744: mov ebx, dword ptr [esp + 0x454] */
  ebx = R32((uint32_t)(esp + 0x454u));
/* 100174b: mov edx, 1 */
  edx = 0x1u;
/* 1001750: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1001752: mov eax, esi */
  eax = esi;
/* 1001754: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1001756: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 100175d: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1001761: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_1001765: /* 1001765: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1001769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100176b: jne 0x100177e */
  if (!zf) goto L_100177e;
L_100176d: /* 100176d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 100176f: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 1001772: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1001776: add dword ptr [esp + eax*4 + 0x48], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x48u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + eax*4 + 0x48u), r);
  }
/* 100177a: lea eax, [esp + eax*4 + 0x48] */
  eax = (uint32_t)(esp + eax*4 + 0x48u);
L_100177e: /* 100177e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1001780: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 1001783: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1001787: test dword ptr [ecx + eax*4 + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100178b: je 0x10017e4 */
  if (zf) goto L_10017e4;
L_100178d: /* 100178d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1001790: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 1001793: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1001797: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 100179a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100179c: je 0x10017e4 */
  if (zf) goto L_10017e4;
L_100179e: /* 100179e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10017a2: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10017a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10017a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10017a9: mov eax, dword ptr [ebx + esi] */
  eax = R32((uint32_t)(ebx + esi));
/* 10017ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10017ad: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 10017b0: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 10017b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10017b8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10017bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10017bc: call dword ptr [esp + 0x478] */
  { uint32_t t = R32((uint32_t)(esp + 0x478u)); esp -= 4; W32(esp, 0x10017c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10017c3: add dword ptr [ebp + 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x24u), r);
  }
/* 10017c6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10017c8: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 10017cb: mov edx, dword ptr [esp + ecx*4 + 0x25c] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x25cu));
/* 10017d2: lea ecx, [esp + ecx*4 + 0x25c] */
  ecx = (uint32_t)(esp + ecx*4 + 0x25cu);
/* 10017d9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10017dc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10017de: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 10017e0: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
L_10017e4: /* 10017e4: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10017e8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10017eb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10017ec: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 10017f0: jne 0x1001765 */
  if (!zf) goto L_1001765;
L_10017f6: /* 10017f6: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10017fa: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 10017fe: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1001802: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1001806: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001807: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001809: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100180a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100180c: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 1001810: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1001814: jl 0x10016d0 */
  if ((sf != of)) goto L_10016d0;
L_100181a: /* 100181a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 100181e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001820: je 0x1001862 */
  if (zf) goto L_1001862;
L_1001822: /* 1001822: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1001826: mov eax, dword ptr [ebp + edx*4 + 0x30] */
  eax = R32((uint32_t)(ebp + edx*4 + 0x30u));
/* 100182a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100182c: lea esi, [ebp + edx*4 + 0x30] */
  esi = (uint32_t)(ebp + edx*4 + 0x30u);
/* 1001830: jl 0x1001862 */
  if ((sf != of)) goto L_1001862;
L_1001832: /* 1001832: mov ebx, dword ptr [esp + 0x44c] */
  ebx = R32((uint32_t)(esp + 0x44cu));
/* 1001839: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100183c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001840: /* 1001840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001841: call 0x100916c */
  esp -= 4; W32(esp, 0x1001846u); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 1001846: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 100184a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100184e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001851: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 1001854: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1001856: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001859: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 100185a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100185c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1001860: jge 0x1001840 */
  if ((sf == of)) goto L_1001840;
L_1001862: /* 1001862: cmp edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001866: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 100186a: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 100186e: jl 0x1001630 */
  if ((sf != of)) goto L_1001630;
L_1001874: /* 1001874: mov esi, dword ptr [esp + 0x45c] */
  esi = R32((uint32_t)(esp + 0x45cu));
L_100187b: /* 100187b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 100187f: mov ecx, dword ptr [eax + esi*4 + 0x1008] */
  ecx = R32((uint32_t)(eax + esi*4 + 0x1008u));
/* 1001886: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1001887: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001889: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 100188d: jl 0x10015f5 */
  if ((sf != of)) goto L_10015f5;
L_1001893: /* 1001893: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001894: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001895: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001896: xor eax, eax */
  eax = 0;
/* 1001898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001899: add esp, 0x438 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100189f: ret  */
  esp += 4; SPILL(); return;
}

void f_10015f9(void) {
  LOAD_REGS();
  goto L_10015f9;
L_10015f5: /* 10015f5: xor edi, edi */
  edi = 0;
/* 10015f7: jmp 0x1001600 */
  goto L_1001600;
L_10015f9: /* 10015f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001600: /* 1001600: mov ecx, dword ptr [esp + 0x468] */
  ecx = R32((uint32_t)(esp + 0x468u));
/* 1001607: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001609: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 100160d: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 1001611: je 0x100161e */
  if (zf) goto L_100161e;
L_1001613: /* 1001613: mov eax, edx */
  eax = edx;
/* 1001615: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1001618: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100161a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_100161e: /* 100161e: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1001622: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001624: jle 0x100187b */
  if ((zf || sf != of)) goto L_100187b;
L_100162a: /* 100162a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001630: /* 1001630: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001632: jne 0x10016ad */
  if (!zf) goto L_10016ad;
L_1001634: /* 1001634: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 100163b: xor esi, esi */
  esi = 0;
/* 100163d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100163f: jle 0x10016ad */
  if ((zf || sf != of)) goto L_10016ad;
L_1001641: /* 1001641: mov ecx, dword ptr [esp + 0x460] */
  ecx = R32((uint32_t)(esp + 0x460u));
/* 1001648: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 100164b: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 100164e: mov ecx, 1 */
  ecx = 0x1u;
/* 1001653: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001655: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1001658: jle 0x100167c */
  if ((zf || sf != of)) goto L_100167c;
L_100165a: /* 100165a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100165d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1001660: /* 1001660: imul eax, dword ptr [esp + 0x3c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x3cu)));
  eax = (uint32_t)r;
  }
/* 1001665: lea ebx, [ecx + edi] */
  ebx = (uint32_t)(ecx + edi);
/* 1001668: cmp ebx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100166c: jge 0x1001670 */
  if ((sf == of)) goto L_1001670;
L_100166e: /* 100166e: add eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1001670: /* 1001670: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 1001674: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001675: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001678: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100167a: jl 0x1001660 */
  if ((sf != of)) goto L_1001660;
L_100167c: /* 100167c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100167f: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001682: jge 0x10016a1 */
  if ((sf == of)) goto L_10016a1;
L_1001684: /* 1001684: mov edx, dword ptr [esp + 0x44c] */
  edx = R32((uint32_t)(esp + 0x44cu));
/* 100168b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100168e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100168f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001691: call 0xff4000 */
  esp -= 4; W32(esp, 0x1001696u); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* 1001696: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 1001699: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100169c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100169e: mov dword ptr [ebp + 0x28], ecx */
  W32((uint32_t)(ebp + 0x28u), ecx);
L_10016a1: /* 10016a1: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 10016a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10016a9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016ab: jl 0x1001641 */
  if ((sf != of)) goto L_1001641;
L_10016ad: /* 10016ad: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10016af: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10016b7: jle 0x100181a */
  if ((zf || sf != of)) goto L_100181a;
L_10016bd: /* 10016bd: mov ecx, edi */
  ecx = edi;
/* 10016bf: imul ecx, dword ptr [esp + 0x1c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x1cu)));
  ecx = (uint32_t)r;
  }
/* 10016c4: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 10016c8: jmp 0x10016d0 */
  goto L_10016d0;
L_10016d0: /* 10016d0: cmp edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016d4: jge 0x100181a */
  if ((sf == of)) goto L_100181a;
L_10016da: /* 10016da: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10016de: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10016e0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10016e2: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 10016e6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10016ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10016ec: je 0x100172a */
  if (zf) goto L_100172a;
L_10016ee: /* 10016ee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10016f2: mov eax, dword ptr [ebp + ecx*4 + 0x30] */
  eax = R32((uint32_t)(ebp + ecx*4 + 0x30u));
/* 10016f6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016f8: lea esi, [ebp + ecx*4 + 0x30] */
  esi = (uint32_t)(ebp + ecx*4 + 0x30u);
/* 10016fc: jl 0x100172a */
  if ((sf != of)) goto L_100172a;
L_10016fe: /* 10016fe: mov ebx, dword ptr [esp + 0x44c] */
  ebx = R32((uint32_t)(esp + 0x44cu));
/* 1001705: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_1001708: /* 1001708: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001709: call 0x100916c */
  esp -= 4; W32(esp, 0x100170eu); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 100170e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1001712: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1001716: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001719: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 100171c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 100171e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001721: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001722: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001724: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1001728: jge 0x1001708 */
  if ((sf == of)) goto L_1001708;
L_100172a: /* 100172a: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 1001731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 1001733: jle 0x10017f6 */
  if ((zf || sf != of)) goto L_10017f6;
L_1001739: /* 1001739: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100173d: mov esi, dword ptr [esp + 0x460] */
  esi = R32((uint32_t)(esp + 0x460u));
/* 1001744: mov ebx, dword ptr [esp + 0x454] */
  ebx = R32((uint32_t)(esp + 0x454u));
/* 100174b: mov edx, 1 */
  edx = 0x1u;
/* 1001750: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1001752: mov eax, esi */
  eax = esi;
/* 1001754: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1001756: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 100175d: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1001761: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_1001765: /* 1001765: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1001769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100176b: jne 0x100177e */
  if (!zf) goto L_100177e;
L_100176d: /* 100176d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 100176f: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 1001772: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1001776: add dword ptr [esp + eax*4 + 0x48], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x48u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + eax*4 + 0x48u), r);
  }
/* 100177a: lea eax, [esp + eax*4 + 0x48] */
  eax = (uint32_t)(esp + eax*4 + 0x48u);
L_100177e: /* 100177e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1001780: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 1001783: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1001787: test dword ptr [ecx + eax*4 + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100178b: je 0x10017e4 */
  if (zf) goto L_10017e4;
L_100178d: /* 100178d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1001790: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 1001793: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1001797: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 100179a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100179c: je 0x10017e4 */
  if (zf) goto L_10017e4;
L_100179e: /* 100179e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10017a2: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10017a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10017a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10017a9: mov eax, dword ptr [ebx + esi] */
  eax = R32((uint32_t)(ebx + esi));
/* 10017ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10017ad: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 10017b0: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 10017b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10017b8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10017bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10017bc: call dword ptr [esp + 0x478] */
  { uint32_t t = R32((uint32_t)(esp + 0x478u)); esp -= 4; W32(esp, 0x10017c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10017c3: add dword ptr [ebp + 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x24u), r);
  }
/* 10017c6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10017c8: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 10017cb: mov edx, dword ptr [esp + ecx*4 + 0x25c] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x25cu));
/* 10017d2: lea ecx, [esp + ecx*4 + 0x25c] */
  ecx = (uint32_t)(esp + ecx*4 + 0x25cu);
/* 10017d9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10017dc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10017de: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 10017e0: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
L_10017e4: /* 10017e4: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10017e8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10017eb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10017ec: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 10017f0: jne 0x1001765 */
  if (!zf) goto L_1001765;
L_10017f6: /* 10017f6: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10017fa: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 10017fe: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1001802: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1001806: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001807: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001809: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100180a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100180c: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 1001810: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1001814: jl 0x10016d0 */
  if ((sf != of)) goto L_10016d0;
L_100181a: /* 100181a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 100181e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001820: je 0x1001862 */
  if (zf) goto L_1001862;
L_1001822: /* 1001822: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1001826: mov eax, dword ptr [ebp + edx*4 + 0x30] */
  eax = R32((uint32_t)(ebp + edx*4 + 0x30u));
/* 100182a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100182c: lea esi, [ebp + edx*4 + 0x30] */
  esi = (uint32_t)(ebp + edx*4 + 0x30u);
/* 1001830: jl 0x1001862 */
  if ((sf != of)) goto L_1001862;
L_1001832: /* 1001832: mov ebx, dword ptr [esp + 0x44c] */
  ebx = R32((uint32_t)(esp + 0x44cu));
/* 1001839: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100183c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001840: /* 1001840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001841: call 0x100916c */
  esp -= 4; W32(esp, 0x1001846u); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 1001846: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 100184a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100184e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001851: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 1001854: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1001856: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001859: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 100185a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100185c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1001860: jge 0x1001840 */
  if ((sf == of)) goto L_1001840;
L_1001862: /* 1001862: cmp edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001866: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 100186a: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 100186e: jl 0x1001630 */
  if ((sf != of)) goto L_1001630;
L_1001874: /* 1001874: mov esi, dword ptr [esp + 0x45c] */
  esi = R32((uint32_t)(esp + 0x45cu));
L_100187b: /* 100187b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 100187f: mov ecx, dword ptr [eax + esi*4 + 0x1008] */
  ecx = R32((uint32_t)(eax + esi*4 + 0x1008u));
/* 1001886: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1001887: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001889: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 100188d: jl 0x10015f5 */
  if ((sf != of)) goto L_10015f5;
L_1001893: /* 1001893: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001894: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001895: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001896: xor eax, eax */
  eax = 0;
/* 1001898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001899: add esp, 0x438 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100189f: ret  */
  esp += 4; SPILL(); return;
}

void f_10016ca(void) {
  LOAD_REGS();
  goto L_10016ca;
L_10015f5: /* 10015f5: xor edi, edi */
  edi = 0;
/* 10015f7: jmp 0x1001600 */
  goto L_1001600;
L_1001600: /* 1001600: mov ecx, dword ptr [esp + 0x468] */
  ecx = R32((uint32_t)(esp + 0x468u));
/* 1001607: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001609: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 100160d: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 1001611: je 0x100161e */
  if (zf) goto L_100161e;
L_1001613: /* 1001613: mov eax, edx */
  eax = edx;
/* 1001615: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1001618: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100161a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_100161e: /* 100161e: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1001622: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001624: jle 0x100187b */
  if ((zf || sf != of)) goto L_100187b;
L_100162a: /* 100162a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001630: /* 1001630: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001632: jne 0x10016ad */
  if (!zf) goto L_10016ad;
L_1001634: /* 1001634: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 100163b: xor esi, esi */
  esi = 0;
/* 100163d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100163f: jle 0x10016ad */
  if ((zf || sf != of)) goto L_10016ad;
L_1001641: /* 1001641: mov ecx, dword ptr [esp + 0x460] */
  ecx = R32((uint32_t)(esp + 0x460u));
/* 1001648: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 100164b: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 100164e: mov ecx, 1 */
  ecx = 0x1u;
/* 1001653: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001655: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1001658: jle 0x100167c */
  if ((zf || sf != of)) goto L_100167c;
L_100165a: /* 100165a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100165d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1001660: /* 1001660: imul eax, dword ptr [esp + 0x3c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x3cu)));
  eax = (uint32_t)r;
  }
/* 1001665: lea ebx, [ecx + edi] */
  ebx = (uint32_t)(ecx + edi);
/* 1001668: cmp ebx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100166c: jge 0x1001670 */
  if ((sf == of)) goto L_1001670;
L_100166e: /* 100166e: add eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1001670: /* 1001670: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 1001674: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001675: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001678: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100167a: jl 0x1001660 */
  if ((sf != of)) goto L_1001660;
L_100167c: /* 100167c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100167f: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001682: jge 0x10016a1 */
  if ((sf == of)) goto L_10016a1;
L_1001684: /* 1001684: mov edx, dword ptr [esp + 0x44c] */
  edx = R32((uint32_t)(esp + 0x44cu));
/* 100168b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100168e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100168f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001691: call 0xff4000 */
  esp -= 4; W32(esp, 0x1001696u); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* 1001696: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 1001699: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100169c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100169e: mov dword ptr [ebp + 0x28], ecx */
  W32((uint32_t)(ebp + 0x28u), ecx);
L_10016a1: /* 10016a1: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 10016a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10016a9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016ab: jl 0x1001641 */
  if ((sf != of)) goto L_1001641;
L_10016ad: /* 10016ad: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10016af: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10016b7: jle 0x100181a */
  if ((zf || sf != of)) goto L_100181a;
L_10016bd: /* 10016bd: mov ecx, edi */
  ecx = edi;
/* 10016bf: imul ecx, dword ptr [esp + 0x1c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x1cu)));
  ecx = (uint32_t)r;
  }
/* 10016c4: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 10016c8: jmp 0x10016d0 */
  goto L_10016d0;
L_10016ca: /* 10016ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10016d0: /* 10016d0: cmp edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016d4: jge 0x100181a */
  if ((sf == of)) goto L_100181a;
L_10016da: /* 10016da: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10016de: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 10016e0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10016e2: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 10016e6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10016ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10016ec: je 0x100172a */
  if (zf) goto L_100172a;
L_10016ee: /* 10016ee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10016f2: mov eax, dword ptr [ebp + ecx*4 + 0x30] */
  eax = R32((uint32_t)(ebp + ecx*4 + 0x30u));
/* 10016f6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10016f8: lea esi, [ebp + ecx*4 + 0x30] */
  esi = (uint32_t)(ebp + ecx*4 + 0x30u);
/* 10016fc: jl 0x100172a */
  if ((sf != of)) goto L_100172a;
L_10016fe: /* 10016fe: mov ebx, dword ptr [esp + 0x44c] */
  ebx = R32((uint32_t)(esp + 0x44cu));
/* 1001705: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_1001708: /* 1001708: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001709: call 0x100916c */
  esp -= 4; W32(esp, 0x100170eu); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 100170e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1001712: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1001716: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001719: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 100171c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 100171e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001721: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001722: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001724: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1001728: jge 0x1001708 */
  if ((sf == of)) goto L_1001708;
L_100172a: /* 100172a: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 1001731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 1001733: jle 0x10017f6 */
  if ((zf || sf != of)) goto L_10017f6;
L_1001739: /* 1001739: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100173d: mov esi, dword ptr [esp + 0x460] */
  esi = R32((uint32_t)(esp + 0x460u));
/* 1001744: mov ebx, dword ptr [esp + 0x454] */
  ebx = R32((uint32_t)(esp + 0x454u));
/* 100174b: mov edx, 1 */
  edx = 0x1u;
/* 1001750: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1001752: mov eax, esi */
  eax = esi;
/* 1001754: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1001756: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 100175d: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1001761: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_1001765: /* 1001765: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1001769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100176b: jne 0x100177e */
  if (!zf) goto L_100177e;
L_100176d: /* 100176d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 100176f: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 1001772: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1001776: add dword ptr [esp + eax*4 + 0x48], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x48u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + eax*4 + 0x48u), r);
  }
/* 100177a: lea eax, [esp + eax*4 + 0x48] */
  eax = (uint32_t)(esp + eax*4 + 0x48u);
L_100177e: /* 100177e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1001780: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 1001783: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1001787: test dword ptr [ecx + eax*4 + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4 + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100178b: je 0x10017e4 */
  if (zf) goto L_10017e4;
L_100178d: /* 100178d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1001790: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 1001793: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1001797: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 100179a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100179c: je 0x10017e4 */
  if (zf) goto L_10017e4;
L_100179e: /* 100179e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10017a2: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10017a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10017a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10017a9: mov eax, dword ptr [ebx + esi] */
  eax = R32((uint32_t)(ebx + esi));
/* 10017ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10017ad: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 10017b0: mov eax, dword ptr [esp + 0x458] */
  eax = R32((uint32_t)(esp + 0x458u));
/* 10017b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10017b8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10017bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10017bc: call dword ptr [esp + 0x478] */
  { uint32_t t = R32((uint32_t)(esp + 0x478u)); esp -= 4; W32(esp, 0x10017c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10017c3: add dword ptr [ebp + 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x24u), r);
  }
/* 10017c6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10017c8: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 10017cb: mov edx, dword ptr [esp + ecx*4 + 0x25c] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x25cu));
/* 10017d2: lea ecx, [esp + ecx*4 + 0x25c] */
  ecx = (uint32_t)(esp + ecx*4 + 0x25cu);
/* 10017d9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10017dc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10017de: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 10017e0: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
L_10017e4: /* 10017e4: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10017e8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10017eb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10017ec: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 10017f0: jne 0x1001765 */
  if (!zf) goto L_1001765;
L_10017f6: /* 10017f6: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10017fa: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 10017fe: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1001802: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1001806: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001807: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001809: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100180a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100180c: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 1001810: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 1001814: jl 0x10016d0 */
  if ((sf != of)) goto L_10016d0;
L_100181a: /* 100181a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 100181e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001820: je 0x1001862 */
  if (zf) goto L_1001862;
L_1001822: /* 1001822: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1001826: mov eax, dword ptr [ebp + edx*4 + 0x30] */
  eax = R32((uint32_t)(ebp + edx*4 + 0x30u));
/* 100182a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100182c: lea esi, [ebp + edx*4 + 0x30] */
  esi = (uint32_t)(ebp + edx*4 + 0x30u);
/* 1001830: jl 0x1001862 */
  if ((sf != of)) goto L_1001862;
L_1001832: /* 1001832: mov ebx, dword ptr [esp + 0x44c] */
  ebx = R32((uint32_t)(esp + 0x44cu));
/* 1001839: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100183c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001840: /* 1001840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001841: call 0x100916c */
  esp -= 4; W32(esp, 0x1001846u); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 1001846: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 100184a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100184e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001851: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 1001854: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1001856: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001859: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 100185a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100185c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1001860: jge 0x1001840 */
  if ((sf == of)) goto L_1001840;
L_1001862: /* 1001862: cmp edi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001866: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 100186a: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 100186e: jl 0x1001630 */
  if ((sf != of)) goto L_1001630;
L_1001874: /* 1001874: mov esi, dword ptr [esp + 0x45c] */
  esi = R32((uint32_t)(esp + 0x45cu));
L_100187b: /* 100187b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 100187f: mov ecx, dword ptr [eax + esi*4 + 0x1008] */
  ecx = R32((uint32_t)(eax + esi*4 + 0x1008u));
/* 1001886: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1001887: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001889: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 100188d: jl 0x10015f5 */
  if ((sf != of)) goto L_10015f5;
L_1001893: /* 1001893: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001894: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001895: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001896: xor eax, eax */
  eax = 0;
/* 1001898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001899: add esp, 0x438 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100189f: ret  */
  esp += 4; SPILL(); return;
}

void f_1001ab0(void) {
  LOAD_REGS();
  goto L_1001ab0;
L_10012a0: /* 10012a0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10012a3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10012a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10012a8: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 10012aa: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10012ad: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10012b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 10012b3: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 10012b7: sub eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10012b9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10012ba: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x10012ba);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10012bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10012bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10012be: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 10012c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10012c3: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10012c7: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10012cb: mov edi, eax */
  edi = eax;
/* 10012cd: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* 10012d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10012d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10012d6: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 10012da: call 0xff2840 */
  esp -= 4; W32(esp, 0x10012dfu); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 10012df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10012e2: xor ebp, ebp */
  ebp = 0;
/* 10012e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10012e6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10012ea: jle 0x1001325 */
  if ((zf || sf != of)) goto L_1001325;
L_10012ec: /* 10012ec: lea esi, [edi*4] */
  esi = (uint32_t)(edi*4);
L_10012f3: /* 10012f3: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 10012f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10012f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10012f9: call 0xff2840 */
  esp -= 4; W32(esp, 0x10012feu); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 10012fe: mov edi, eax */
  edi = eax;
/* 1001300: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1001304: mov dword ptr [eax + ebp*4], edi */
  W32((uint32_t)(eax + ebp*4), edi);
/* 1001307: mov ecx, esi */
  ecx = esi;
/* 1001309: mov edx, ecx */
  edx = ecx;
/* 100130b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 100130e: xor eax, eax */
  eax = 0;
/* 1001310: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1001312: mov ecx, edx */
  ecx = edx;
/* 1001314: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1001317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100131a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 100131c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 1001320: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1001321: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001323: jl 0x10012f3 */
  if ((sf != of)) goto L_10012f3;
L_1001325: /* 1001325: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1001329: xor edi, edi */
  edi = 0;
/* 100132b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100132d: jle 0x100139e */
  if ((zf || sf != of)) goto L_100139e;
L_100132f: /* 100132f: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_1001333: /* 1001333: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 1001337: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001339: jle 0x1001387 */
  if ((zf || sf != of)) goto L_1001387;
L_100133b: /* 100133b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 100133f: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 1001343: mov eax, esi */
  eax = esi;
/* 1001345: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1001347: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 100134b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 100134f: nop  */
L_1001350: /* 1001350: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1001354: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1001358: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 100135c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 100135d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100135e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1001360: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001361: add ecx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001365: mov edx, dword ptr [esi + ebp] */
  edx = R32((uint32_t)(esi + ebp));
/* 1001368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001369: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 100136c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100136d: call dword ptr [esp + 0x50] */
  { uint32_t t = R32((uint32_t)(esp + 0x50u)); esp -= 4; W32(esp, 0x1001371u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1001371: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1001373: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 1001376: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 100137a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100137d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001380: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1001381: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 1001385: jne 0x1001350 */
  if (!zf) goto L_1001350;
L_1001387: /* 1001387: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 100138b: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100138f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1001393: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1001394: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001396: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001398: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 100139c: jl 0x1001333 */
  if ((sf != of)) goto L_1001333;
L_100139e: /* 100139e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10013a2: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 10013a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10013a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10013a7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10013a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10013a9: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 10013ac: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10013b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10013b1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10013b4: ret  */
  esp += 4; SPILL(); return;
L_1001ab0: /* 1001ab0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001ab1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1001ab5: xor edx, edx */
  edx = 0;
/* 1001ab7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001ab9: jle 0x1001afe */
  if ((zf || sf != of)) goto L_1001afe;
L_1001abb: /* 1001abb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1001abf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001ac1: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1001ac5: mov eax, ecx */
  eax = ecx;
/* 1001ac7: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1001ac9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001ad0: /* 1001ad0: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001ad4: je 0x1001adc */
  if (zf) goto L_1001adc;
L_1001ad6: /* 1001ad6: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 1001ad8: mov dword ptr [ecx + edx*4], ebx */
  W32((uint32_t)(ecx + edx*4), ebx);
/* 1001adb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_1001adc: /* 1001adc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001adf: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1001ae0: jne 0x1001ad0 */
  if (!zf) goto L_1001ad0;
L_1001ae2: /* 1001ae2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001ae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001ae5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001ae6: je 0x1001afe */
  if (zf) goto L_1001afe;
L_1001ae8: /* 1001ae8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001ae9: mov dword ptr [esp + 0x14], 0x1001020 */
  W32((uint32_t)(esp + 0x14u), 0x1001020u);
/* 1001af1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1001af5: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1001af9: jmp 0x10012a0 */
  goto L_10012a0;
L_1001afe: /* 1001afe: xor eax, eax */
  eax = 0;
/* 1001b00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001b01: ret  */
  esp += 4; SPILL(); return;
}

void f_1001b10(void) {
  LOAD_REGS();
L_1001b10: /* 1001b10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1001b13: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1001b17: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 1001b1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001b1b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1001b1c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1001b1d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1001b1f: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1001b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001b24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001b25: mov edi, eax */
  edi = eax;
/* 1001b27: xor ebx, ebx */
  ebx = 0;
/* 1001b29: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 1001b2b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001b2d: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 1001b31: jle 0x1001cf9 */
  if ((zf || sf != of)) goto L_1001cf9;
L_1001b37: /* 1001b37: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1001b3b: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 1001b3f: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 1001b43: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1001b45: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1001b47: mov ecx, esi */
  ecx = esi;
/* 1001b49: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1001b4d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1001b51: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1001b55: jmp 0x1001b60 */
  goto L_1001b60;
L_1001b60: /* 1001b60: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 1001b63: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001b67: je 0x1001bfa */
  if (zf) goto L_1001bfa;
L_1001b6d: /* 1001b6d: xor eax, eax */
  eax = 0;
/* 1001b6f: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001b72: jl 0x1001bcb */
  if ((sf != of)) goto L_1001bcb;
L_1001b74: /* 1001b74: mov esi, 3 */
  esi = 0x3u;
L_1001b79: /* 1001b79: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001b7b: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001b7f: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001b81: fadd dword ptr [ebx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4)));
/* 1001b84: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001b87: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001b8a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001b8c: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001b8e: fld dword ptr [ebp + eax*4 + 4] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x4u)); FPUSH(v); }
/* 1001b92: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001b94: fadd dword ptr [ebx + eax*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x4u)));
/* 1001b98: lea ebx, [ebx + eax*4 + 4] */
  ebx = (uint32_t)(ebx + eax*4 + 0x4u);
/* 1001b9c: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001b9e: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001ba0: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001ba2: fld dword ptr [ebp + eax*4 + 8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x8u)); FPUSH(v); }
/* 1001ba6: fadd dword ptr [ebx + eax*4 + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x8u)));
/* 1001baa: lea ebx, [ebx + eax*4 + 8] */
  ebx = (uint32_t)(ebx + eax*4 + 0x8u);
/* 1001bae: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001bb0: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001bb2: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001bb4: fld dword ptr [ebp + eax*4 + 0xc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xcu)); FPUSH(v); }
/* 1001bb8: lea ebx, [ebx + eax*4 + 0xc] */
  ebx = (uint32_t)(ebx + eax*4 + 0xcu);
/* 1001bbc: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001bbe: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001bc1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001bc3: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001bc5: jl 0x1001b79 */
  if ((sf != of)) goto L_1001b79;
L_1001bc7: /* 1001bc7: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_1001bcb: /* 1001bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001bcd: jge 0x1001be4 */
  if ((sf == of)) goto L_1001be4;
L_1001bcf: /* 1001bcf: nop  */
L_1001bd0: /* 1001bd0: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001bd2: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001bd4: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001bd8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001bdb: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001bdd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001bde: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001be0: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001be2: jl 0x1001bd0 */
  if ((sf != of)) goto L_1001bd0;
L_1001be4: /* 1001be4: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1001be8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1001bea: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001bee: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001bf2: mov dword ptr [esi + ebx*4], edx */
  W32((uint32_t)(esi + ebx*4), edx);
/* 1001bf5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1001bf6: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_1001bfa: /* 1001bfa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1001bfe: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001c01: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1001c02: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1001c06: jne 0x1001b60 */
  if (!zf) goto L_1001b60;
L_1001c0c: /* 1001c0c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001c0e: je 0x1001cf9 */
  if (zf) goto L_1001cf9;
L_1001c14: /* 1001c14: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1001c18: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1001c1c: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1001c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001c21: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1001c25: push 0x10011e0 */
  { uint32_t v = 0x10011e0u; esp -= 4; W32(esp, v); }
/* 1001c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001c2b: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 1001c2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001c31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001c32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001c34: call 0x1001550 */
  esp -= 4; W32(esp, 0x1001c39u); SPILL(); f_1001550(); if (g_unwind) return; RELOAD();
/* 1001c39: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1001c3d: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1001c41: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 1001c45: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001c48: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001c4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001c50: /* 1001c50: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001c54: je 0x1001cdb */
  if (zf) goto L_1001cdb;
L_1001c5a: /* 1001c5a: xor ecx, ecx */
  ecx = 0;
/* 1001c5c: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001c5f: jl 0x1001cb6 */
  if ((sf != of)) goto L_1001cb6;
L_1001c61: /* 1001c61: mov eax, 3 */
  eax = 0x3u;
L_1001c66: /* 1001c66: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c68: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 1001c6b: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001c6d: fsub dword ptr [ebp + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4)));
/* 1001c71: lea ebx, [ebx + ecx*4] */
  ebx = (uint32_t)(ebx + ecx*4);
/* 1001c74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001c77: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001c79: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c7b: fld dword ptr [ebx + ecx*4 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x4u)); FPUSH(v); }
/* 1001c7f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001c81: fsub dword ptr [ebp + ecx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x4u)));
/* 1001c85: lea ebx, [ebx + ecx*4 + 4] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x4u);
/* 1001c89: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001c8b: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c8d: fld dword ptr [ebx + ecx*4 + 8] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x8u)); FPUSH(v); }
/* 1001c91: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001c93: fsub dword ptr [ebp + ecx*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x8u)));
/* 1001c97: lea ebx, [ebx + ecx*4 + 8] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x8u);
/* 1001c9b: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001c9d: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c9f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001ca1: fld dword ptr [ebx + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0xcu)); FPUSH(v); }
/* 1001ca5: fsub dword ptr [ebp + ecx*4 + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0xcu)));
/* 1001ca9: lea ebx, [ebx + ecx*4 + 0xc] */
  ebx = (uint32_t)(ebx + ecx*4 + 0xcu);
/* 1001cad: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001cb0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001cb2: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001cb4: jl 0x1001c66 */
  if ((sf != of)) goto L_1001c66;
L_1001cb6: /* 1001cb6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001cb8: jge 0x1001cd4 */
  if ((sf == of)) goto L_1001cd4;
L_1001cba: /* 1001cba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001cc0: /* 1001cc0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1001cc2: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 1001cc4: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 1001cc7: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1001cca: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 1001ccd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001cce: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001cd0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 1001cd2: jl 0x1001cc0 */
  if ((sf != of)) goto L_1001cc0;
L_1001cd4: /* 1001cd4: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001cd8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_1001cdb: /* 1001cdb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1001cdf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001ce2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1001ce3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001ce7: jne 0x1001c50 */
  if (!zf) goto L_1001c50;
L_1001ced: /* 1001ced: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001cf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001cf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001cf3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001cf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001cf5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001cf8: ret  */
  esp += 4; SPILL(); return;
L_1001cf9: /* 1001cf9: xor esi, esi */
  esi = 0;
/* 1001cfb: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001d00u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001d00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001d02: jle 0x1001d26 */
  if ((zf || sf != of)) goto L_1001d26;
L_1001d04: /* 1001d04: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1001d08: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 1001d0c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001d0f: nop  */
L_1001d10: /* 1001d10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001d11: call 0x100916c */
  esp -= 4; W32(esp, 0x1001d16u); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 1001d16: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001d19: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 1001d1c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1001d1d: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001d22u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001d22: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001d24: jl 0x1001d10 */
  if ((sf != of)) goto L_1001d10;
L_1001d26: /* 1001d26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001d27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001d28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001d29: xor eax, eax */
  eax = 0;
/* 1001d2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001d2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001d2f: ret  */
  esp += 4; SPILL(); return;
}

void f_1001b57(void) {
  LOAD_REGS();
L_1001b57: /* 1001b57: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1001b5e: mov edi, edi */
  edi = edi;
L_1001b60: /* 1001b60: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 1001b63: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001b67: je 0x1001bfa */
  if (zf) goto L_1001bfa;
L_1001b6d: /* 1001b6d: xor eax, eax */
  eax = 0;
/* 1001b6f: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001b72: jl 0x1001bcb */
  if ((sf != of)) goto L_1001bcb;
L_1001b74: /* 1001b74: mov esi, 3 */
  esi = 0x3u;
L_1001b79: /* 1001b79: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001b7b: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001b7f: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001b81: fadd dword ptr [ebx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4)));
/* 1001b84: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001b87: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001b8a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001b8c: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001b8e: fld dword ptr [ebp + eax*4 + 4] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x4u)); FPUSH(v); }
/* 1001b92: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001b94: fadd dword ptr [ebx + eax*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x4u)));
/* 1001b98: lea ebx, [ebx + eax*4 + 4] */
  ebx = (uint32_t)(ebx + eax*4 + 0x4u);
/* 1001b9c: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001b9e: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001ba0: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001ba2: fld dword ptr [ebp + eax*4 + 8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x8u)); FPUSH(v); }
/* 1001ba6: fadd dword ptr [ebx + eax*4 + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x8u)));
/* 1001baa: lea ebx, [ebx + eax*4 + 8] */
  ebx = (uint32_t)(ebx + eax*4 + 0x8u);
/* 1001bae: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001bb0: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001bb2: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001bb4: fld dword ptr [ebp + eax*4 + 0xc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xcu)); FPUSH(v); }
/* 1001bb8: lea ebx, [ebx + eax*4 + 0xc] */
  ebx = (uint32_t)(ebx + eax*4 + 0xcu);
/* 1001bbc: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001bbe: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001bc1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001bc3: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001bc5: jl 0x1001b79 */
  if ((sf != of)) goto L_1001b79;
L_1001bc7: /* 1001bc7: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_1001bcb: /* 1001bcb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001bcd: jge 0x1001be4 */
  if ((sf == of)) goto L_1001be4;
L_1001bcf: /* 1001bcf: nop  */
L_1001bd0: /* 1001bd0: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001bd2: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001bd4: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001bd8: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001bdb: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001bdd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001bde: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001be0: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001be2: jl 0x1001bd0 */
  if ((sf != of)) goto L_1001bd0;
L_1001be4: /* 1001be4: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1001be8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1001bea: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001bee: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001bf2: mov dword ptr [esi + ebx*4], edx */
  W32((uint32_t)(esi + ebx*4), edx);
/* 1001bf5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1001bf6: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_1001bfa: /* 1001bfa: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1001bfe: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001c01: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1001c02: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1001c06: jne 0x1001b60 */
  if (!zf) goto L_1001b60;
L_1001c0c: /* 1001c0c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001c0e: je 0x1001cf9 */
  if (zf) goto L_1001cf9;
L_1001c14: /* 1001c14: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1001c18: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1001c1c: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1001c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001c21: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1001c25: push 0x10011e0 */
  { uint32_t v = 0x10011e0u; esp -= 4; W32(esp, v); }
/* 1001c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001c2b: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 1001c2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001c31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001c32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001c34: call 0x1001550 */
  esp -= 4; W32(esp, 0x1001c39u); SPILL(); f_1001550(); if (g_unwind) return; RELOAD();
/* 1001c39: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1001c3d: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1001c41: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 1001c45: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001c48: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001c4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001c50: /* 1001c50: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001c54: je 0x1001cdb */
  if (zf) goto L_1001cdb;
L_1001c5a: /* 1001c5a: xor ecx, ecx */
  ecx = 0;
/* 1001c5c: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001c5f: jl 0x1001cb6 */
  if ((sf != of)) goto L_1001cb6;
L_1001c61: /* 1001c61: mov eax, 3 */
  eax = 0x3u;
L_1001c66: /* 1001c66: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c68: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 1001c6b: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001c6d: fsub dword ptr [ebp + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4)));
/* 1001c71: lea ebx, [ebx + ecx*4] */
  ebx = (uint32_t)(ebx + ecx*4);
/* 1001c74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001c77: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001c79: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c7b: fld dword ptr [ebx + ecx*4 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x4u)); FPUSH(v); }
/* 1001c7f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001c81: fsub dword ptr [ebp + ecx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x4u)));
/* 1001c85: lea ebx, [ebx + ecx*4 + 4] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x4u);
/* 1001c89: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001c8b: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c8d: fld dword ptr [ebx + ecx*4 + 8] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x8u)); FPUSH(v); }
/* 1001c91: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001c93: fsub dword ptr [ebp + ecx*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x8u)));
/* 1001c97: lea ebx, [ebx + ecx*4 + 8] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x8u);
/* 1001c9b: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001c9d: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001c9f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001ca1: fld dword ptr [ebx + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0xcu)); FPUSH(v); }
/* 1001ca5: fsub dword ptr [ebp + ecx*4 + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0xcu)));
/* 1001ca9: lea ebx, [ebx + ecx*4 + 0xc] */
  ebx = (uint32_t)(ebx + ecx*4 + 0xcu);
/* 1001cad: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001cb0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001cb2: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001cb4: jl 0x1001c66 */
  if ((sf != of)) goto L_1001c66;
L_1001cb6: /* 1001cb6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001cb8: jge 0x1001cd4 */
  if ((sf == of)) goto L_1001cd4;
L_1001cba: /* 1001cba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001cc0: /* 1001cc0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1001cc2: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 1001cc4: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 1001cc7: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1001cca: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 1001ccd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001cce: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001cd0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 1001cd2: jl 0x1001cc0 */
  if ((sf != of)) goto L_1001cc0;
L_1001cd4: /* 1001cd4: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001cd8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_1001cdb: /* 1001cdb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1001cdf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001ce2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1001ce3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001ce7: jne 0x1001c50 */
  if (!zf) goto L_1001c50;
L_1001ced: /* 1001ced: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001cf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001cf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001cf3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001cf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001cf5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001cf8: ret  */
  esp += 4; SPILL(); return;
L_1001cf9: /* 1001cf9: xor esi, esi */
  esi = 0;
/* 1001cfb: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001d00u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001d00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001d02: jle 0x1001d26 */
  if ((zf || sf != of)) goto L_1001d26;
L_1001d04: /* 1001d04: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1001d08: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 1001d0c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001d0f: nop  */
L_1001d10: /* 1001d10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001d11: call 0x100916c */
  esp -= 4; W32(esp, 0x1001d16u); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 1001d16: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001d19: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 1001d1c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1001d1d: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001d22u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001d22: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001d24: jl 0x1001d10 */
  if ((sf != of)) goto L_1001d10;
L_1001d26: /* 1001d26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001d27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001d28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001d29: xor eax, eax */
  eax = 0;
/* 1001d2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001d2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001d2f: ret  */
  esp += 4; SPILL(); return;
}

void f_1001d30(void) {
  LOAD_REGS();
  goto L_1001d30;
L_10018a0: /* 10018a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10018a1: mov ebp, esp */
  ebp = esp;
/* 10018a3: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10018a6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10018a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10018ab: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10018ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10018af: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 10018b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10018b2: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10018b4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 10018b7: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10018b9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10018ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10018bb: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 10018be: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x10018be);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10018c0: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 10018c3: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 10018c6: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 10018c9: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 10018cc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 10018cf: lea eax, [eax + esi - 1] */
  eax = (uint32_t)(eax + esi + 0xffffffffu);
/* 10018d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10018d4: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x10018d4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10018d6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 10018d9: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 10018e0: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10018e3: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10018e6: call 0x1009200 */
  esp -= 4; W32(esp, 0x10018ebu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* 10018eb: mov ebx, esp */
  ebx = esp;
/* 10018ed: xor esi, esi */
  esi = 0;
/* 10018ef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10018f1: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 10018f4: jle 0x100191b */
  if ((zf || sf != of)) goto L_100191b;
L_10018f6: /* 10018f6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 10018f9: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 1001900: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_1001903: /* 1001903: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1001906: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1001909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100190a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100190b: call 0xff2840 */
  esp -= 4; W32(esp, 0x1001910u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 1001910: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001913: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 1001916: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1001917: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001919: jl 0x1001903 */
  if ((sf != of)) goto L_1001903;
L_100191b: /* 100191b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 100191e: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 1001921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001923: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 100192a: jle 0x1001aa3 */
  if ((zf || sf != of)) goto L_1001aa3;
L_1001930: /* 1001930: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1001933: xor eax, eax */
  eax = 0;
/* 1001935: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001937: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 100193a: jle 0x1001a8e */
  if ((zf || sf != of)) goto L_1001a8e;
L_1001940: /* 1001940: xor edi, edi */
  edi = 0;
/* 1001942: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
L_1001945: /* 1001945: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1001948: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100194a: jne 0x10019a3 */
  if (!zf) goto L_10019a3;
L_100194c: /* 100194c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100194f: xor esi, esi */
  esi = 0;
/* 1001951: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001953: jle 0x10019a3 */
  if ((zf || sf != of)) goto L_10019a3;
L_1001955: /* 1001955: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1001958: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100195b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 100195e: mov edi, edi */
  edi = edi;
L_1001960: /* 1001960: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1001963: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1001966: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 1001969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100196a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100196b: call 0xff41d0 */
  esp -= 4; W32(esp, 0x1001970u); SPILL(); f_ff41d0(); if (g_unwind) return; RELOAD();
/* 1001970: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001973: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001976: je 0x1001aa3 */
  if (zf) goto L_1001aa3;
L_100197c: /* 100197c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 100197f: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 1001982: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* 1001985: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 1001988: mov dword ptr [edi + ecx], edx */
  W32((uint32_t)(edi + ecx), edx);
/* 100198b: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 100198e: cmp dword ptr [edi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001992: je 0x1001aa3 */
  if (zf) goto L_1001aa3;
L_1001998: /* 1001998: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 100199b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 100199c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100199e: jl 0x1001960 */
  if ((sf != of)) goto L_1001960;
L_10019a0: /* 10019a0: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
L_10019a3: /* 10019a3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 10019a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10019a8: mov dword ptr [ebp - 8], 0 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x0u);
/* 10019af: jle 0x1001a7d */
  if ((zf || sf != of)) goto L_1001a7d;
L_10019b5: /* 10019b5: mov ecx, eax */
  ecx = eax;
/* 10019b7: imul ecx, dword ptr [ebp - 0x10] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  ecx = (uint32_t)r;
  }
/* 10019bb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 10019be: mov edi, edi */
  edi = edi;
L_10019c0: /* 10019c0: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10019c3: jge 0x1001a7d */
  if ((sf == of)) goto L_1001a7d;
L_10019c9: /* 10019c9: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 10019cc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10019ce: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 10019d5: jle 0x1001a5c */
  if ((zf || sf != of)) goto L_1001a5c;
L_10019db: /* 10019db: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10019de: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 10019e1: mov esi, ebx */
  esi = ebx;
/* 10019e3: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 10019e6: mov edi, 1 */
  edi = 0x1u;
/* 10019eb: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10019ed: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10019ef: nop  */
L_10019f0: /* 10019f0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10019f3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 10019f5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 10019f8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10019fa: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10019fc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10019ff: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 1001a02: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1001a05: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 1001a08: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1001a0b: test dword ptr [edx + ecx*4 + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4 + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001a0f: je 0x1001a42 */
  if (zf) goto L_1001a42;
L_1001a11: /* 1001a11: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1001a14: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 1001a17: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 1001a1a: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1001a1d: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 1001a20: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001a22: je 0x1001a42 */
  if (zf) goto L_1001a42;
L_1001a24: /* 1001a24: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1001a27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001a28: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1001a2b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001a2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001a2f: mov edx, dword ptr [ebx + esi] */
  edx = R32((uint32_t)(ebx + esi));
/* 1001a32: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 1001a35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001a37: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x1001a3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1001a3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001a3d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001a40: je 0x1001aa3 */
  if (zf) goto L_1001aa3;
L_1001a42: /* 1001a42: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1001a45: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 1001a48: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001a49: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001a4c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a4e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 1001a51: jl 0x10019f0 */
  if ((sf != of)) goto L_10019f0;
L_1001a53: /* 1001a53: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 1001a56: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1001a59: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
L_1001a5c: /* 1001a5c: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1001a5f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1001a62: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1001a65: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001a67: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1001a6a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001a6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001a6c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a6e: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 1001a71: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 1001a74: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 1001a77: jl 0x10019c0 */
  if ((sf != of)) goto L_10019c0;
L_1001a7d: /* 1001a7d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1001a80: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001a83: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a85: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 1001a88: jl 0x1001945 */
  if ((sf != of)) goto L_1001945;
L_1001a8e: /* 1001a8e: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1001a91: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1001a94: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 1001a97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001a98: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a9a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 1001a9d: jl 0x1001930 */
  if ((sf != of)) goto L_1001930;
L_1001aa3: /* 1001aa3: xor eax, eax */
  eax = 0;
/* 1001aa5: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 1001aa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001aa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001aaa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001aab: mov esp, ebp */
  esp = ebp;
/* 1001aad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001aae: ret  */
  esp += 4; SPILL(); return;
L_1001d30: /* 1001d30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001d31: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1001d35: xor edx, edx */
  edx = 0;
/* 1001d37: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001d39: jle 0x1001d7e */
  if ((zf || sf != of)) goto L_1001d7e;
L_1001d3b: /* 1001d3b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1001d3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001d41: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1001d45: mov eax, ecx */
  eax = ecx;
/* 1001d47: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1001d49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001d50: /* 1001d50: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001d54: je 0x1001d5c */
  if (zf) goto L_1001d5c;
L_1001d56: /* 1001d56: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 1001d58: mov dword ptr [ecx + edx*4], ebx */
  W32((uint32_t)(ecx + edx*4), ebx);
/* 1001d5b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_1001d5c: /* 1001d5c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001d5f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1001d60: jne 0x1001d50 */
  if (!zf) goto L_1001d50;
L_1001d62: /* 1001d62: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001d64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001d65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001d66: je 0x1001d7e */
  if (zf) goto L_1001d7e;
L_1001d68: /* 1001d68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001d69: mov dword ptr [esp + 0x14], 0xff41f0 */
  W32((uint32_t)(esp + 0x14u), 0xff41f0u);
/* 1001d71: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1001d75: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1001d79: jmp 0x10018a0 */
  goto L_10018a0;
L_1001d7e: /* 1001d7e: xor eax, eax */
  eax = 0;
/* 1001d80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001d81: ret  */
  esp += 4; SPILL(); return;
}

void f_1001d90(void) {
  LOAD_REGS();
L_1001d90: /* 1001d90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1001d93: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1001d97: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 1001d9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001d9b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1001d9c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1001d9d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1001d9f: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 1001da3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001da4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001da5: mov edi, eax */
  edi = eax;
/* 1001da7: xor ebx, ebx */
  ebx = 0;
/* 1001da9: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 1001dab: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001dad: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 1001db1: jle 0x1001f79 */
  if ((zf || sf != of)) goto L_1001f79;
L_1001db7: /* 1001db7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1001dbb: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 1001dbf: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 1001dc3: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1001dc5: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1001dc7: mov ecx, esi */
  ecx = esi;
/* 1001dc9: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1001dcd: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1001dd1: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1001dd5: jmp 0x1001de0 */
  goto L_1001de0;
L_1001de0: /* 1001de0: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 1001de3: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001de7: je 0x1001e7a */
  if (zf) goto L_1001e7a;
L_1001ded: /* 1001ded: xor eax, eax */
  eax = 0;
/* 1001def: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001df2: jl 0x1001e4b */
  if ((sf != of)) goto L_1001e4b;
L_1001df4: /* 1001df4: mov esi, 3 */
  esi = 0x3u;
L_1001df9: /* 1001df9: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001dfb: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001dff: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e01: fadd dword ptr [ebx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4)));
/* 1001e04: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001e07: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001e0a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e0c: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e0e: fld dword ptr [ebp + eax*4 + 4] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x4u)); FPUSH(v); }
/* 1001e12: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e14: fadd dword ptr [ebx + eax*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x4u)));
/* 1001e18: lea ebx, [ebx + eax*4 + 4] */
  ebx = (uint32_t)(ebx + eax*4 + 0x4u);
/* 1001e1c: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e1e: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e20: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e22: fld dword ptr [ebp + eax*4 + 8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x8u)); FPUSH(v); }
/* 1001e26: fadd dword ptr [ebx + eax*4 + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x8u)));
/* 1001e2a: lea ebx, [ebx + eax*4 + 8] */
  ebx = (uint32_t)(ebx + eax*4 + 0x8u);
/* 1001e2e: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e30: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e32: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e34: fld dword ptr [ebp + eax*4 + 0xc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xcu)); FPUSH(v); }
/* 1001e38: lea ebx, [ebx + eax*4 + 0xc] */
  ebx = (uint32_t)(ebx + eax*4 + 0xcu);
/* 1001e3c: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001e3e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001e41: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001e43: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e45: jl 0x1001df9 */
  if ((sf != of)) goto L_1001df9;
L_1001e47: /* 1001e47: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_1001e4b: /* 1001e4b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001e4d: jge 0x1001e64 */
  if ((sf == of)) goto L_1001e64;
L_1001e4f: /* 1001e4f: nop  */
L_1001e50: /* 1001e50: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e52: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e54: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001e58: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001e5b: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001e5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001e5e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001e60: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e62: jl 0x1001e50 */
  if ((sf != of)) goto L_1001e50;
L_1001e64: /* 1001e64: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1001e68: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1001e6a: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001e6e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001e72: mov dword ptr [esi + ebx*4], edx */
  W32((uint32_t)(esi + ebx*4), edx);
/* 1001e75: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1001e76: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_1001e7a: /* 1001e7a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1001e7e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001e81: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1001e82: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1001e86: jne 0x1001de0 */
  if (!zf) goto L_1001de0;
L_1001e8c: /* 1001e8c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001e8e: je 0x1001f79 */
  if (zf) goto L_1001f79;
L_1001e94: /* 1001e94: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1001e98: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1001e9c: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1001ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001ea1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1001ea5: push 0x1001230 */
  { uint32_t v = 0x1001230u; esp -= 4; W32(esp, v); }
/* 1001eaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001eab: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 1001eaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001eb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001eb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001eb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001eb4: call 0x1001550 */
  esp -= 4; W32(esp, 0x1001eb9u); SPILL(); f_1001550(); if (g_unwind) return; RELOAD();
/* 1001eb9: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1001ebd: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1001ec1: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 1001ec5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001ec8: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001ecc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001ed0: /* 1001ed0: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001ed4: je 0x1001f5b */
  if (zf) goto L_1001f5b;
L_1001eda: /* 1001eda: xor ecx, ecx */
  ecx = 0;
/* 1001edc: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001edf: jl 0x1001f36 */
  if ((sf != of)) goto L_1001f36;
L_1001ee1: /* 1001ee1: mov eax, 3 */
  eax = 0x3u;
L_1001ee6: /* 1001ee6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001ee8: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 1001eeb: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001eed: fsub dword ptr [ebp + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4)));
/* 1001ef1: lea ebx, [ebx + ecx*4] */
  ebx = (uint32_t)(ebx + ecx*4);
/* 1001ef4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001ef7: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001ef9: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001efb: fld dword ptr [ebx + ecx*4 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x4u)); FPUSH(v); }
/* 1001eff: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001f01: fsub dword ptr [ebp + ecx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x4u)));
/* 1001f05: lea ebx, [ebx + ecx*4 + 4] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x4u);
/* 1001f09: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001f0b: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001f0d: fld dword ptr [ebx + ecx*4 + 8] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x8u)); FPUSH(v); }
/* 1001f11: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001f13: fsub dword ptr [ebp + ecx*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x8u)));
/* 1001f17: lea ebx, [ebx + ecx*4 + 8] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x8u);
/* 1001f1b: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001f1d: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001f1f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001f21: fld dword ptr [ebx + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0xcu)); FPUSH(v); }
/* 1001f25: fsub dword ptr [ebp + ecx*4 + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0xcu)));
/* 1001f29: lea ebx, [ebx + ecx*4 + 0xc] */
  ebx = (uint32_t)(ebx + ecx*4 + 0xcu);
/* 1001f2d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001f30: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001f32: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001f34: jl 0x1001ee6 */
  if ((sf != of)) goto L_1001ee6;
L_1001f36: /* 1001f36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001f38: jge 0x1001f54 */
  if ((sf == of)) goto L_1001f54;
L_1001f3a: /* 1001f3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001f40: /* 1001f40: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1001f42: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 1001f44: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 1001f47: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1001f4a: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 1001f4d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001f4e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001f50: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 1001f52: jl 0x1001f40 */
  if ((sf != of)) goto L_1001f40;
L_1001f54: /* 1001f54: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001f58: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_1001f5b: /* 1001f5b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1001f5f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001f62: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1001f63: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001f67: jne 0x1001ed0 */
  if (!zf) goto L_1001ed0;
L_1001f6d: /* 1001f6d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001f71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001f72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001f73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001f74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001f75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001f78: ret  */
  esp += 4; SPILL(); return;
L_1001f79: /* 1001f79: xor esi, esi */
  esi = 0;
/* 1001f7b: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001f80u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001f80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001f82: jle 0x1001fa6 */
  if ((zf || sf != of)) goto L_1001fa6;
L_1001f84: /* 1001f84: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1001f88: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 1001f8c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001f8f: nop  */
L_1001f90: /* 1001f90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001f91: call 0x100916c */
  esp -= 4; W32(esp, 0x1001f96u); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 1001f96: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001f99: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 1001f9c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1001f9d: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001fa2u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001fa2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001fa4: jl 0x1001f90 */
  if ((sf != of)) goto L_1001f90;
L_1001fa6: /* 1001fa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001fa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001fa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001fa9: xor eax, eax */
  eax = 0;
/* 1001fab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001fac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001faf: ret  */
  esp += 4; SPILL(); return;
}

void f_1001dd7(void) {
  LOAD_REGS();
L_1001dd7: /* 1001dd7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1001dde: mov edi, edi */
  edi = edi;
L_1001de0: /* 1001de0: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 1001de3: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001de7: je 0x1001e7a */
  if (zf) goto L_1001e7a;
L_1001ded: /* 1001ded: xor eax, eax */
  eax = 0;
/* 1001def: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001df2: jl 0x1001e4b */
  if ((sf != of)) goto L_1001e4b;
L_1001df4: /* 1001df4: mov esi, 3 */
  esi = 0x3u;
L_1001df9: /* 1001df9: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001dfb: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001dff: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e01: fadd dword ptr [ebx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4)));
/* 1001e04: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001e07: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001e0a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e0c: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e0e: fld dword ptr [ebp + eax*4 + 4] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x4u)); FPUSH(v); }
/* 1001e12: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e14: fadd dword ptr [ebx + eax*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x4u)));
/* 1001e18: lea ebx, [ebx + eax*4 + 4] */
  ebx = (uint32_t)(ebx + eax*4 + 0x4u);
/* 1001e1c: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e1e: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e20: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e22: fld dword ptr [ebp + eax*4 + 8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0x8u)); FPUSH(v); }
/* 1001e26: fadd dword ptr [ebx + eax*4 + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + eax*4 + 0x8u)));
/* 1001e2a: lea ebx, [ebx + eax*4 + 8] */
  ebx = (uint32_t)(ebx + eax*4 + 0x8u);
/* 1001e2e: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e30: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e32: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e34: fld dword ptr [ebp + eax*4 + 0xc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xcu)); FPUSH(v); }
/* 1001e38: lea ebx, [ebx + eax*4 + 0xc] */
  ebx = (uint32_t)(ebx + eax*4 + 0xcu);
/* 1001e3c: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001e3e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001e41: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001e43: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e45: jl 0x1001df9 */
  if ((sf != of)) goto L_1001df9;
L_1001e47: /* 1001e47: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_1001e4b: /* 1001e4b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001e4d: jge 0x1001e64 */
  if ((sf == of)) goto L_1001e64;
L_1001e4f: /* 1001e4f: nop  */
L_1001e50: /* 1001e50: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001e52: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1001e54: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1001e58: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1001e5b: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1001e5d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001e5e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001e60: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001e62: jl 0x1001e50 */
  if ((sf != of)) goto L_1001e50;
L_1001e64: /* 1001e64: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1001e68: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1001e6a: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001e6e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001e72: mov dword ptr [esi + ebx*4], edx */
  W32((uint32_t)(esi + ebx*4), edx);
/* 1001e75: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1001e76: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_1001e7a: /* 1001e7a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1001e7e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001e81: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1001e82: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1001e86: jne 0x1001de0 */
  if (!zf) goto L_1001de0;
L_1001e8c: /* 1001e8c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001e8e: je 0x1001f79 */
  if (zf) goto L_1001f79;
L_1001e94: /* 1001e94: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1001e98: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1001e9c: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1001ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001ea1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1001ea5: push 0x1001230 */
  { uint32_t v = 0x1001230u; esp -= 4; W32(esp, v); }
/* 1001eaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001eab: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 1001eaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001eb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001eb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001eb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001eb4: call 0x1001550 */
  esp -= 4; W32(esp, 0x1001eb9u); SPILL(); f_1001550(); if (g_unwind) return; RELOAD();
/* 1001eb9: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1001ebd: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1001ec1: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 1001ec5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001ec8: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001ecc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001ed0: /* 1001ed0: cmp dword ptr [edx + ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001ed4: je 0x1001f5b */
  if (zf) goto L_1001f5b;
L_1001eda: /* 1001eda: xor ecx, ecx */
  ecx = 0;
/* 1001edc: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001edf: jl 0x1001f36 */
  if ((sf != of)) goto L_1001f36;
L_1001ee1: /* 1001ee1: mov eax, 3 */
  eax = 0x3u;
L_1001ee6: /* 1001ee6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001ee8: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* 1001eeb: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001eed: fsub dword ptr [ebp + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4)));
/* 1001ef1: lea ebx, [ebx + ecx*4] */
  ebx = (uint32_t)(ebx + ecx*4);
/* 1001ef4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001ef7: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001ef9: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001efb: fld dword ptr [ebx + ecx*4 + 4] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x4u)); FPUSH(v); }
/* 1001eff: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001f01: fsub dword ptr [ebp + ecx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x4u)));
/* 1001f05: lea ebx, [ebx + ecx*4 + 4] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x4u);
/* 1001f09: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001f0b: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001f0d: fld dword ptr [ebx + ecx*4 + 8] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0x8u)); FPUSH(v); }
/* 1001f11: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001f13: fsub dword ptr [ebp + ecx*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0x8u)));
/* 1001f17: lea ebx, [ebx + ecx*4 + 8] */
  ebx = (uint32_t)(ebx + ecx*4 + 0x8u);
/* 1001f1b: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001f1d: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 1001f1f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1001f21: fld dword ptr [ebx + ecx*4 + 0xc] */
  { double v = F32((uint32_t)(ebx + ecx*4 + 0xcu)); FPUSH(v); }
/* 1001f25: fsub dword ptr [ebp + ecx*4 + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ecx*4 + 0xcu)));
/* 1001f29: lea ebx, [ebx + ecx*4 + 0xc] */
  ebx = (uint32_t)(ebx + ecx*4 + 0xcu);
/* 1001f2d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1001f30: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001f32: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1001f34: jl 0x1001ee6 */
  if ((sf != of)) goto L_1001ee6;
L_1001f36: /* 1001f36: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001f38: jge 0x1001f54 */
  if ((sf == of)) goto L_1001f54;
L_1001f3a: /* 1001f3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1001f40: /* 1001f40: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1001f42: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 1001f44: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 1001f47: fsub dword ptr [ebx + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + ecx*4)));
/* 1001f4a: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 1001f4d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001f4e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001f50: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 1001f52: jl 0x1001f40 */
  if ((sf != of)) goto L_1001f40;
L_1001f54: /* 1001f54: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1001f58: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_1001f5b: /* 1001f5b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1001f5f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001f62: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1001f63: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1001f67: jne 0x1001ed0 */
  if (!zf) goto L_1001ed0;
L_1001f6d: /* 1001f6d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1001f71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001f72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001f73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001f74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001f75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001f78: ret  */
  esp += 4; SPILL(); return;
L_1001f79: /* 1001f79: xor esi, esi */
  esi = 0;
/* 1001f7b: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001f80u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001f80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001f82: jle 0x1001fa6 */
  if ((zf || sf != of)) goto L_1001fa6;
L_1001f84: /* 1001f84: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1001f88: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 1001f8c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001f8f: nop  */
L_1001f90: /* 1001f90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001f91: call 0x100916c */
  esp -= 4; W32(esp, 0x1001f96u); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 1001f96: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001f99: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 1001f9c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1001f9d: call 0xff16f0 */
  esp -= 4; W32(esp, 0x1001fa2u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 1001fa2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001fa4: jl 0x1001f90 */
  if ((sf != of)) goto L_1001f90;
L_1001fa6: /* 1001fa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001fa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001fa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001fa9: xor eax, eax */
  eax = 0;
/* 1001fab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001fac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001faf: ret  */
  esp += 4; SPILL(); return;
}

void f_1001fb0(void) {
  LOAD_REGS();
  goto L_1001fb0;
L_10018a0: /* 10018a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10018a1: mov ebp, esp */
  ebp = esp;
/* 10018a3: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10018a6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10018a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10018ab: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10018ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10018af: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 10018b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10018b2: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 10018b4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 10018b7: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10018b9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10018ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10018bb: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 10018be: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x10018be);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10018c0: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 10018c3: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 10018c6: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 10018c9: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 10018cc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 10018cf: lea eax, [eax + esi - 1] */
  eax = (uint32_t)(eax + esi + 0xffffffffu);
/* 10018d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10018d4: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x10018d4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10018d6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 10018d9: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 10018e0: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10018e3: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10018e6: call 0x1009200 */
  esp -= 4; W32(esp, 0x10018ebu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* 10018eb: mov ebx, esp */
  ebx = esp;
/* 10018ed: xor esi, esi */
  esi = 0;
/* 10018ef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10018f1: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 10018f4: jle 0x100191b */
  if ((zf || sf != of)) goto L_100191b;
L_10018f6: /* 10018f6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 10018f9: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 1001900: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_1001903: /* 1001903: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1001906: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1001909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100190a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100190b: call 0xff2840 */
  esp -= 4; W32(esp, 0x1001910u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 1001910: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001913: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 1001916: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1001917: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001919: jl 0x1001903 */
  if ((sf != of)) goto L_1001903;
L_100191b: /* 100191b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 100191e: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 1001921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001923: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 100192a: jle 0x1001aa3 */
  if ((zf || sf != of)) goto L_1001aa3;
L_1001930: /* 1001930: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1001933: xor eax, eax */
  eax = 0;
/* 1001935: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001937: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 100193a: jle 0x1001a8e */
  if ((zf || sf != of)) goto L_1001a8e;
L_1001940: /* 1001940: xor edi, edi */
  edi = 0;
/* 1001942: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
L_1001945: /* 1001945: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1001948: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100194a: jne 0x10019a3 */
  if (!zf) goto L_10019a3;
L_100194c: /* 100194c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100194f: xor esi, esi */
  esi = 0;
/* 1001951: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001953: jle 0x10019a3 */
  if ((zf || sf != of)) goto L_10019a3;
L_1001955: /* 1001955: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1001958: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100195b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 100195e: mov edi, edi */
  edi = edi;
L_1001960: /* 1001960: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1001963: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1001966: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 1001969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100196a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100196b: call 0xff41d0 */
  esp -= 4; W32(esp, 0x1001970u); SPILL(); f_ff41d0(); if (g_unwind) return; RELOAD();
/* 1001970: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001973: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001976: je 0x1001aa3 */
  if (zf) goto L_1001aa3;
L_100197c: /* 100197c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 100197f: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 1001982: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* 1001985: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 1001988: mov dword ptr [edi + ecx], edx */
  W32((uint32_t)(edi + ecx), edx);
/* 100198b: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 100198e: cmp dword ptr [edi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001992: je 0x1001aa3 */
  if (zf) goto L_1001aa3;
L_1001998: /* 1001998: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 100199b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 100199c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100199e: jl 0x1001960 */
  if ((sf != of)) goto L_1001960;
L_10019a0: /* 10019a0: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
L_10019a3: /* 10019a3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 10019a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10019a8: mov dword ptr [ebp - 8], 0 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x0u);
/* 10019af: jle 0x1001a7d */
  if ((zf || sf != of)) goto L_1001a7d;
L_10019b5: /* 10019b5: mov ecx, eax */
  ecx = eax;
/* 10019b7: imul ecx, dword ptr [ebp - 0x10] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  ecx = (uint32_t)r;
  }
/* 10019bb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 10019be: mov edi, edi */
  edi = edi;
L_10019c0: /* 10019c0: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10019c3: jge 0x1001a7d */
  if ((sf == of)) goto L_1001a7d;
L_10019c9: /* 10019c9: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 10019cc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10019ce: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 10019d5: jle 0x1001a5c */
  if ((zf || sf != of)) goto L_1001a5c;
L_10019db: /* 10019db: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10019de: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 10019e1: mov esi, ebx */
  esi = ebx;
/* 10019e3: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 10019e6: mov edi, 1 */
  edi = 0x1u;
/* 10019eb: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 10019ed: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10019ef: nop  */
L_10019f0: /* 10019f0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10019f3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 10019f5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 10019f8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10019fa: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10019fc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10019ff: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 1001a02: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1001a05: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 1001a08: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1001a0b: test dword ptr [edx + ecx*4 + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4 + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001a0f: je 0x1001a42 */
  if (zf) goto L_1001a42;
L_1001a11: /* 1001a11: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1001a14: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 1001a17: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 1001a1a: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1001a1d: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 1001a20: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001a22: je 0x1001a42 */
  if (zf) goto L_1001a42;
L_1001a24: /* 1001a24: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1001a27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001a28: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1001a2b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1001a2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1001a2f: mov edx, dword ptr [ebx + esi] */
  edx = R32((uint32_t)(ebx + esi));
/* 1001a32: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 1001a35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1001a37: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x1001a3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1001a3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001a3d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001a40: je 0x1001aa3 */
  if (zf) goto L_1001aa3;
L_1001a42: /* 1001a42: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1001a45: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 1001a48: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001a49: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001a4c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a4e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 1001a51: jl 0x10019f0 */
  if ((sf != of)) goto L_10019f0;
L_1001a53: /* 1001a53: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 1001a56: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1001a59: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
L_1001a5c: /* 1001a5c: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1001a5f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1001a62: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1001a65: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1001a67: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1001a6a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001a6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001a6c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a6e: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 1001a71: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 1001a74: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 1001a77: jl 0x10019c0 */
  if ((sf != of)) goto L_10019c0;
L_1001a7d: /* 1001a7d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1001a80: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1001a83: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a85: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 1001a88: jl 0x1001945 */
  if ((sf != of)) goto L_1001945;
L_1001a8e: /* 1001a8e: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1001a91: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1001a94: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 1001a97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1001a98: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001a9a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 1001a9d: jl 0x1001930 */
  if ((sf != of)) goto L_1001930;
L_1001aa3: /* 1001aa3: xor eax, eax */
  eax = 0;
/* 1001aa5: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 1001aa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001aa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001aaa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001aab: mov esp, ebp */
  esp = ebp;
/* 1001aad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001aae: ret  */
  esp += 4; SPILL(); return;
L_1001fb0: /* 1001fb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1001fb1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1001fb5: xor edx, edx */
  edx = 0;
/* 1001fb7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1001fb9: jle 0x1001ffe */
  if ((zf || sf != of)) goto L_1001ffe;
L_1001fbb: /* 1001fbb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1001fbf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1001fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001fc1: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1001fc5: mov eax, ecx */
  eax = ecx;
/* 1001fc7: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1001fc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1001fd0: /* 1001fd0: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1001fd4: je 0x1001fdc */
  if (zf) goto L_1001fdc;
L_1001fd6: /* 1001fd6: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 1001fd8: mov dword ptr [ecx + edx*4], ebx */
  W32((uint32_t)(ecx + edx*4), ebx);
/* 1001fdb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_1001fdc: /* 1001fdc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001fdf: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1001fe0: jne 0x1001fd0 */
  if (!zf) goto L_1001fd0;
L_1001fe2: /* 1001fe2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1001fe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1001fe5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1001fe6: je 0x1001ffe */
  if (zf) goto L_1001ffe;
L_1001fe8: /* 1001fe8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1001fe9: mov dword ptr [esp + 0x14], 0xff4360 */
  W32((uint32_t)(esp + 0x14u), 0xff4360u);
/* 1001ff1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1001ff5: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1001ff9: jmp 0x10018a0 */
  goto L_10018a0;
L_1001ffe: /* 1001ffe: xor eax, eax */
  eax = 0;
/* 1002000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002001: ret  */
  esp += 4; SPILL(); return;
}

void f_1002010(void) {
  LOAD_REGS();
  goto L_1002010;
L_10013c0: /* 10013c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10013c1: mov ebp, esp */
  ebp = esp;
/* 10013c3: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10013c6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10013c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10013ca: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 10013cc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10013ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10013cf: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 10013d2: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10013d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10013d5: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 10013d8: mov eax, esi */
  eax = esi;
/* 10013da: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10013db: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x10013db);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10013dd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 10013e0: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10013e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10013e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10013e6: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 10013e9: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 10013ec: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 10013ef: call 0xff2840 */
  esp -= 4; W32(esp, 0x10013f4u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 10013f4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 10013f7: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 10013fe: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1001401: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1001404: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1001407: call 0x1009200 */
  esp -= 4; W32(esp, 0x100140cu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* 100140c: mov eax, esi */
  eax = esi;
/* 100140e: imul eax, dword ptr [ebp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x14u)));
  eax = (uint32_t)r;
  }
/* 1001412: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1001413: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x1001413);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1001415: mov dword ptr [ebp - 8], esp */
  W32((uint32_t)(ebp + 0xfffffff8u), esp);
/* 1001418: mov esi, eax */
  esi = eax;
/* 100141a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100141d: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1001420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1001421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001422: call 0xff2840 */
  esp -= 4; W32(esp, 0x1001427u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 1001427: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 100142a: mov edx, eax */
  edx = eax;
/* 100142c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 100142e: mov ecx, esi */
  ecx = esi;
/* 1001430: mov edi, edx */
  edi = edx;
/* 1001432: mov edx, ecx */
  edx = ecx;
/* 1001434: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1001437: xor eax, eax */
  eax = 0;
/* 1001439: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 100143b: mov ecx, edx */
  ecx = edx;
/* 100143d: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1001440: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 1001442: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1001445: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 1001447: xor esi, esi */
  esi = 0;
/* 1001449: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100144c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100144e: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 1001451: jle 0x100152f */
  if ((zf || sf != of)) goto L_100152f;
L_1001457: /* 1001457: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 100145a: xor eax, eax */
  eax = 0;
/* 100145c: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100145f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 1001462: jl 0x10014db */
  if ((sf != of)) goto L_10014db;
L_1001464: /* 1001464: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1001467: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 100146e: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1001471: /* 1001471: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 1001474: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1001477: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 100147a: mov dword ptr [eax - 8], ecx */
  W32((uint32_t)(eax + 0xfffffff8u), ecx);
/* 100147d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 1001480: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1001481: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001483: jl 0x1001488 */
  if ((sf != of)) goto L_1001488;
L_1001485: /* 1001485: xor esi, esi */
  esi = 0;
/* 1001487: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1001488: /* 1001488: mov ebx, dword ptr [edx + esi*4] */
  ebx = R32((uint32_t)(edx + esi*4));
/* 100148b: mov ebx, dword ptr [ebx + edi*4] */
  ebx = R32((uint32_t)(ebx + edi*4));
/* 100148e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 100148f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001491: mov dword ptr [eax - 4], ebx */
  W32((uint32_t)(eax + 0xfffffffcu), ebx);
/* 1001494: jl 0x1001499 */
  if ((sf != of)) goto L_1001499;
L_1001496: /* 1001496: xor esi, esi */
  esi = 0;
/* 1001498: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_1001499: /* 1001499: mov ebx, dword ptr [edx + esi*4] */
  ebx = R32((uint32_t)(edx + esi*4));
/* 100149c: mov ebx, dword ptr [ebx + edi*4] */
  ebx = R32((uint32_t)(ebx + edi*4));
/* 100149f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10014a0: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10014a2: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 10014a4: jl 0x10014a9 */
  if ((sf != of)) goto L_10014a9;
L_10014a6: /* 10014a6: xor esi, esi */
  esi = 0;
/* 10014a8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_10014a9: /* 10014a9: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 10014ac: mov edx, dword ptr [edx + edi*4] */
  edx = R32((uint32_t)(edx + edi*4));
/* 10014af: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10014b0: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10014b2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 10014b5: jl 0x10014ba */
  if ((sf != of)) goto L_10014ba;
L_10014b7: /* 10014b7: xor esi, esi */
  esi = 0;
/* 10014b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_10014ba: /* 10014ba: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10014bd: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10014c0: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10014c3: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 10014c6: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10014c9: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10014cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10014cf: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10014d1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 10014d4: jl 0x1001471 */
  if ((sf != of)) goto L_1001471;
L_10014d6: /* 10014d6: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10014d9: jmp 0x10014de */
  goto L_10014de;
L_10014db: /* 10014db: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
L_10014de: /* 10014de: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10014e0: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 10014e3: jge 0x1001501 */
  if ((sf == of)) goto L_1001501;
L_10014e5: /* 10014e5: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 10014e8: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 10014eb: mov edx, dword ptr [edx + edi*4] */
  edx = R32((uint32_t)(edx + edi*4));
/* 10014ee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10014ef: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10014f1: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
/* 10014f4: jl 0x10014f9 */
  if ((sf != of)) goto L_10014f9;
L_10014f6: /* 10014f6: xor esi, esi */
  esi = 0;
/* 10014f8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_10014f9: /* 10014f9: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10014fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10014fd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10014ff: jl 0x10014e5 */
  if ((sf != of)) goto L_10014e5;
L_1001501: /* 1001501: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1001504: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1001507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1001508: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 100150b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100150c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100150d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100150e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 100150f: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0x1001512u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1001512: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1001515: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1001517: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 100151a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100151d: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 1001520: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1001523: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1001524: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1001526: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 1001529: jl 0x1001457 */
  if ((sf != of)) goto L_1001457;
L_100152f: /* 100152f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1001532: inc dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x2cu), r);
  }
/* 1001535: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1001538: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* 100153b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100153c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100153d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100153e: mov esp, ebp */
  esp = ebp;
/* 1001540: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1001541: ret  */
  esp += 4; SPILL(); return;
L_1002010: /* 1002010: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1002011: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1002015: xor edx, edx */
  edx = 0;
/* 1002017: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002019: jle 0x100205e */
  if ((zf || sf != of)) goto L_100205e;
L_100201b: /* 100201b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100201f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002021: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1002025: mov eax, ecx */
  eax = ecx;
/* 1002027: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1002029: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1002030: /* 1002030: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002034: je 0x100203c */
  if (zf) goto L_100203c;
L_1002036: /* 1002036: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 1002038: mov dword ptr [ecx + edx*4], ebx */
  W32((uint32_t)(ecx + edx*4), ebx);
/* 100203b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_100203c: /* 100203c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100203f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1002040: jne 0x1002030 */
  if (!zf) goto L_1002030;
L_1002042: /* 1002042: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002044: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1002045: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002046: je 0x100205e */
  if (zf) goto L_100205e;
L_1002048: /* 1002048: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002049: mov dword ptr [esp + 0x14], 0x1001020 */
  W32((uint32_t)(esp + 0x14u), 0x1001020u);
/* 1002051: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1002055: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 1002059: jmp 0x10013c0 */
  goto L_10013c0;
L_100205e: /* 100205e: xor eax, eax */
  eax = 0;
/* 1002060: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002061: ret  */
  esp += 4; SPILL(); return;
}

void f_1002070(void) {
  LOAD_REGS();
L_1002070: /* 1002070: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1002073: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002074: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1002075: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002076: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 100207a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 100207d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 100207e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1002080: mov ebp, eax */
  ebp = eax;
/* 1002082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1002083: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1002087: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 1002089: mov eax, ebp */
  eax = ebp;
/* 100208b: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 100208e: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002092: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002093: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 1002097: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 100209f: call 0xff2840 */
  esp -= 4; W32(esp, 0x10020a4u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 10020a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10020a7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10020a9: mov ebx, eax */
  ebx = eax;
/* 10020ab: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 10020af: jle 0x1002296 */
  if ((zf || sf != of)) goto L_1002296;
L_10020b5: /* 10020b5: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10020b9: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 10020bd: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10020bf: mov esi, ebx */
  esi = ebx;
/* 10020c1: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10020c3: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 10020c7: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 10020cb: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 10020cf: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_10020d3: /* 10020d3: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* 10020d6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 10020da: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10020dd: je 0x10020e3 */
  if (zf) goto L_10020e3;
L_10020df: /* 10020df: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_10020e3: /* 10020e3: xor eax, eax */
  eax = 0;
/* 10020e5: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10020e7: jle 0x100210e */
  if ((zf || sf != of)) goto L_100210e;
L_10020e9: /* 10020e9: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 10020f0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10020f2: /* 10020f2: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 10020f6: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* 10020f9: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 10020fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10020fc: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10020fe: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002100: jl 0x10020f2 */
  if ((sf != of)) goto L_10020f2;
L_1002102: /* 1002102: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1002106: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 100210a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
L_100210e: /* 100210e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1002112: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1002115: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1002116: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 100211a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 100211e: jne 0x10020d3 */
  if (!zf) goto L_10020d3;
L_1002120: /* 1002120: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1002124: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002126: je 0x1002292 */
  if (zf) goto L_1002292;
L_100212c: /* 100212c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 1002130: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1002134: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1002138: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002139: push 0x1001230 */
  { uint32_t v = 0x1001230u; esp -= 4; W32(esp, v); }
/* 100213e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100213f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1002143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002144: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1002148: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 100214a: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 100214e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100214f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002151: call 0x1001550 */
  esp -= 4; W32(esp, 0x1002156u); SPILL(); f_1001550(); if (g_unwind) return; RELOAD();
/* 1002156: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 100215a: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 100215e: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 1002162: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002165: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1002167: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 100216f: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1002173: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1002177: jmp 0x1002181 */
  goto L_1002181;
L_1002179: /* 1002179: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 100217d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_1002181: /* 1002181: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 1002184: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1002186: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 100218a: xor esi, esi */
  esi = 0;
/* 100218c: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100218f: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1002193: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1002197: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 100219b: jl 0x1002224 */
  if ((sf != of)) goto L_1002224;
L_10021a1: /* 10021a1: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 10021a5: lea esi, [eax + 0xc] */
  esi = (uint32_t)(eax + 0xcu);
/* 10021a8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10021ab: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10021ad: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 10021b1: mov dword ptr [esp + 0x1c], 3 */
  W32((uint32_t)(esp + 0x1cu), 0x3u);
/* 10021b9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10021bd: jmp 0x10021c3 */
  goto L_10021c3;
L_10021bf: /* 10021bf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_10021c3: /* 10021c3: fld dword ptr [esi - 0xc] */
  { double v = F32((uint32_t)(esi + 0xfffffff4u)); FPUSH(v); }
/* 10021c6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10021c9: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 10021cc: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10021ce: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10021d1: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 10021d4: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 10021d7: fld dword ptr [eax + ecx - 0x10] */
  { double v = F32((uint32_t)(eax + ecx + 0xfffffff0u)); FPUSH(v); }
/* 10021db: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10021df: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 10021e2: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10021e4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10021e7: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 10021eb: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10021ee: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10021f2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10021f5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 10021f9: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 10021fc: fld dword ptr [esi - 0x14] */
  { double v = F32((uint32_t)(esi + 0xffffffecu)); FPUSH(v); }
/* 10021ff: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 1002202: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002204: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1002207: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 100220a: fld dword ptr [esi - 0x10] */
  { double v = F32((uint32_t)(esi + 0xfffffff0u)); FPUSH(v); }
/* 100220d: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 1002210: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002212: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002214: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1002217: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 100221a: jl 0x10021bf */
  if ((sf != of)) goto L_10021bf;
L_100221c: /* 100221c: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 1002220: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
L_1002224: /* 1002224: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002226: jge 0x100226a */
  if ((sf == of)) goto L_100226a;
L_1002228: /* 1002228: lea eax, [ecx + esi*4] */
  eax = (uint32_t)(ecx + esi*4);
/* 100222b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 100222f: lea esi, [ebx + edx*4] */
  esi = (uint32_t)(ebx + edx*4);
/* 1002232: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1002236: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1002238: mov ecx, ebp */
  ecx = ebp;
/* 100223a: sub ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100223e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1002242: jmp 0x1002250 */
  goto L_1002250;
L_1002244: /* 1002244: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1002248: jmp 0x1002250 */
  goto L_1002250;
L_1002250: /* 1002250: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 1002253: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 100225a: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 100225c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100225f: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1002261: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1002262: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1002265: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 1002268: jne 0x1002244 */
  if (!zf) goto L_1002244;
L_100226a: /* 100226a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100226e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1002272: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002273: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002276: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002278: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 100227c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 1002280: jl 0x1002179 */
  if ((sf != of)) goto L_1002179;
L_1002286: /* 1002286: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 100228a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100228b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100228c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100228d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100228e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002291: ret  */
  esp += 4; SPILL(); return;
L_1002292: /* 1002292: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
L_1002296: /* 1002296: xor edi, edi */
  edi = 0;
/* 1002298: call 0xff16f0 */
  esp -= 4; W32(esp, 0x100229du); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 100229d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100229f: jle 0x10022be */
  if ((zf || sf != of)) goto L_10022be;
L_10022a1: /* 10022a1: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 10022a5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_10022a8: /* 10022a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10022a9: call 0x100916c */
  esp -= 4; W32(esp, 0x10022aeu); SPILL(); f_100916c(); if (g_unwind) return; RELOAD();
/* 10022ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10022b1: mov dword ptr [ebx + edi*4], eax */
  W32((uint32_t)(ebx + edi*4), eax);
/* 10022b4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10022b5: call 0xff16f0 */
  esp -= 4; W32(esp, 0x10022bau); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* 10022ba: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10022bc: jl 0x10022a8 */
  if ((sf != of)) goto L_10022a8;
L_10022be: /* 10022be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10022bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10022c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10022c1: xor eax, eax */
  eax = 0;
/* 10022c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10022c4: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10022c7: ret  */
  esp += 4; SPILL(); return;
}

void f_100224a(void) {
  LOAD_REGS();
  goto L_100224a;
L_1002179: /* 1002179: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 100217d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1002181: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 1002184: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1002186: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 100218a: xor esi, esi */
  esi = 0;
/* 100218c: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100218f: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1002193: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1002197: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 100219b: jl 0x1002224 */
  if ((sf != of)) goto L_1002224;
L_10021a1: /* 10021a1: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 10021a5: lea esi, [eax + 0xc] */
  esi = (uint32_t)(eax + 0xcu);
/* 10021a8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10021ab: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10021ad: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 10021b1: mov dword ptr [esp + 0x1c], 3 */
  W32((uint32_t)(esp + 0x1cu), 0x3u);
/* 10021b9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10021bd: jmp 0x10021c3 */
  goto L_10021c3;
L_10021bf: /* 10021bf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_10021c3: /* 10021c3: fld dword ptr [esi - 0xc] */
  { double v = F32((uint32_t)(esi + 0xfffffff4u)); FPUSH(v); }
/* 10021c6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10021c9: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 10021cc: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10021ce: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10021d1: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 10021d4: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 10021d7: fld dword ptr [eax + ecx - 0x10] */
  { double v = F32((uint32_t)(eax + ecx + 0xfffffff0u)); FPUSH(v); }
/* 10021db: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10021df: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 10021e2: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10021e4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10021e7: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 10021eb: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10021ee: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10021f2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10021f5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 10021f9: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 10021fc: fld dword ptr [esi - 0x14] */
  { double v = F32((uint32_t)(esi + 0xffffffecu)); FPUSH(v); }
/* 10021ff: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 1002202: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002204: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1002207: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 100220a: fld dword ptr [esi - 0x10] */
  { double v = F32((uint32_t)(esi + 0xfffffff0u)); FPUSH(v); }
/* 100220d: fsub dword ptr [ebx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4)));
/* 1002210: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002212: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002214: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1002217: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 100221a: jl 0x10021bf */
  if ((sf != of)) goto L_10021bf;
L_100221c: /* 100221c: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 1002220: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
L_1002224: /* 1002224: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002226: jge 0x100226a */
  if ((sf == of)) goto L_100226a;
L_1002228: /* 1002228: lea eax, [ecx + esi*4] */
  eax = (uint32_t)(ecx + esi*4);
/* 100222b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 100222f: lea esi, [ebx + edx*4] */
  esi = (uint32_t)(ebx + edx*4);
/* 1002232: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1002236: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1002238: mov ecx, ebp */
  ecx = ebp;
/* 100223a: sub ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100223e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1002242: jmp 0x1002250 */
  goto L_1002250;
L_1002244: /* 1002244: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1002248: jmp 0x1002250 */
  goto L_1002250;
L_100224a: /* 100224a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1002250: /* 1002250: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 1002253: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 100225a: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 100225c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100225f: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1002261: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1002262: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1002265: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 1002268: jne 0x1002244 */
  if (!zf) goto L_1002244;
L_100226a: /* 100226a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100226e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1002272: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002273: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002276: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002278: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 100227c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 1002280: jl 0x1002179 */
  if ((sf != of)) goto L_1002179;
L_1002286: /* 1002286: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 100228a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100228b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100228c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100228d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100228e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002291: ret  */
  esp += 4; SPILL(); return;
}

void f_10022d0(void) {
  LOAD_REGS();
L_10022d0: /* 10022d0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10022d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10022d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10022d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10022d6: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 10022da: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 10022dc: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 10022df: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10022e1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10022e4: mov ebp, dword ptr [ebx + 8] */
  ebp = R32((uint32_t)(ebx + 0x8u));
/* 10022e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10022e8: sub eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10022ea: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10022eb: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x10022eb);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10022ed: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 10022f1: mov edi, eax */
  edi = eax;
/* 10022f3: lea eax, [edi + ecx - 1] */
  eax = (uint32_t)(edi + ecx + 0xffffffffu);
/* 10022f7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10022f8: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x10022f8);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 10022fa: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10022fe: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 1002302: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002306: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002307: call 0xff2840 */
  esp -= 4; W32(esp, 0x100230cu); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* 100230c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1002310: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1002314: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002317: xor eax, eax */
  eax = 0;
/* 1002319: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100231b: jle 0x100232c */
  if ((zf || sf != of)) goto L_100232c;
L_100231d: /* 100231d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
L_1002321: /* 1002321: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002325: jne 0x100232c */
  if (!zf) goto L_100232c;
L_1002327: /* 1002327: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002328: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100232a: jl 0x1002321 */
  if ((sf != of)) goto L_1002321;
L_100232c: /* 100232c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100232e: je 0x100245a */
  if (zf) goto L_100245a;
L_1002334: /* 1002334: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1002337: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002339: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 1002341: jle 0x100245a */
  if ((zf || sf != of)) goto L_100245a;
L_1002347: /* 1002347: jmp 0x1002350 */
  goto L_1002350;
L_1002350: /* 1002350: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002352: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 100235a: jle 0x1002446 */
  if ((zf || sf != of)) goto L_1002446;
L_1002360: /* 1002360: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1002364: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_1002368: /* 1002368: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100236c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100236e: jne 0x10023a1 */
  if (!zf) goto L_10023a1;
L_1002370: /* 1002370: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1002374: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 1002377: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100237a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100237b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100237c: call 0xff41d0 */
  esp -= 4; W32(esp, 0x1002381u); SPILL(); f_ff41d0(); if (g_unwind) return; RELOAD();
/* 1002381: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002384: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002387: je 0x100245a */
  if (zf) goto L_100245a;
L_100238d: /* 100238d: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 1002390: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1002393: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002395: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1002399: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 100239b: je 0x100245a */
  if (zf) goto L_100245a;
L_10023a1: /* 10023a1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10023a5: xor edi, edi */
  edi = 0;
/* 10023a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10023a9: jle 0x1002429 */
  if ((zf || sf != of)) goto L_1002429;
L_10023ab: /* 10023ab: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 10023af: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
L_10023b2: /* 10023b2: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10023b6: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10023ba: jge 0x1002425 */
  if ((sf == of)) goto L_1002425;
L_10023bc: /* 10023bc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10023c0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10023c2: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 10023c5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10023c9: mov edx, 1 */
  edx = 0x1u;
/* 10023ce: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10023d0: test dword ptr [ebx + eax*4 + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax*4 + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10023d4: je 0x1002411 */
  if (zf) goto L_1002411;
L_10023d6: /* 10023d6: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10023da: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 10023dd: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 10023e0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10023e4: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 10023e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10023e9: je 0x1002411 */
  if (zf) goto L_1002411;
L_10023eb: /* 10023eb: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 10023ef: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10023f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10023f4: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10023f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10023f8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10023fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10023fb: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10023ff: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002401: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002402: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002404: call 0xff4510 */
  esp -= 4; W32(esp, 0x1002409u); SPILL(); f_ff4510(); if (g_unwind) return; RELOAD();
/* 1002409: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100240c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100240f: je 0x100245a */
  if (zf) goto L_100245a;
L_1002411: /* 1002411: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1002415: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1002419: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100241a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100241b: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100241d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100241f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1002423: jl 0x10023b2 */
  if ((sf != of)) goto L_10023b2;
L_1002425: /* 1002425: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
L_1002429: /* 1002429: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 100242d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1002431: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1002435: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1002438: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100243a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 100243e: jl 0x1002368 */
  if ((sf != of)) goto L_1002368;
L_1002444: /* 1002444: mov edi, edx */
  edi = edx;
L_1002446: /* 1002446: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100244a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 100244d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 100244e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002450: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1002454: jl 0x1002350 */
  if ((sf != of)) goto L_1002350;
L_100245a: /* 100245a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100245b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100245c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100245d: xor eax, eax */
  eax = 0;
/* 100245f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002460: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002463: ret  */
  esp += 4; SPILL(); return;
}

void f_1002349(void) {
  LOAD_REGS();
L_1002349: /* 1002349: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1002350: /* 1002350: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002352: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 100235a: jle 0x1002446 */
  if ((zf || sf != of)) goto L_1002446;
L_1002360: /* 1002360: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1002364: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_1002368: /* 1002368: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100236c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100236e: jne 0x10023a1 */
  if (!zf) goto L_10023a1;
L_1002370: /* 1002370: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1002374: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 1002377: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100237a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100237b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100237c: call 0xff41d0 */
  esp -= 4; W32(esp, 0x1002381u); SPILL(); f_ff41d0(); if (g_unwind) return; RELOAD();
/* 1002381: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002384: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002387: je 0x100245a */
  if (zf) goto L_100245a;
L_100238d: /* 100238d: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 1002390: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1002393: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002395: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1002399: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 100239b: je 0x100245a */
  if (zf) goto L_100245a;
L_10023a1: /* 10023a1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10023a5: xor edi, edi */
  edi = 0;
/* 10023a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10023a9: jle 0x1002429 */
  if ((zf || sf != of)) goto L_1002429;
L_10023ab: /* 10023ab: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 10023af: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
L_10023b2: /* 10023b2: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10023b6: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10023ba: jge 0x1002425 */
  if ((sf == of)) goto L_1002425;
L_10023bc: /* 10023bc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10023c0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10023c2: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 10023c5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10023c9: mov edx, 1 */
  edx = 0x1u;
/* 10023ce: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10023d0: test dword ptr [ebx + eax*4 + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax*4 + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10023d4: je 0x1002411 */
  if (zf) goto L_1002411;
L_10023d6: /* 10023d6: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10023da: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 10023dd: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 10023e0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10023e4: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 10023e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10023e9: je 0x1002411 */
  if (zf) goto L_1002411;
L_10023eb: /* 10023eb: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 10023ef: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10023f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10023f4: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10023f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10023f8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10023fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10023fb: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10023ff: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002401: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002402: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002404: call 0xff4510 */
  esp -= 4; W32(esp, 0x1002409u); SPILL(); f_ff4510(); if (g_unwind) return; RELOAD();
/* 1002409: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100240c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100240f: je 0x100245a */
  if (zf) goto L_100245a;
L_1002411: /* 1002411: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1002415: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1002419: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100241a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100241b: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100241d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100241f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1002423: jl 0x10023b2 */
  if ((sf != of)) goto L_10023b2;
L_1002425: /* 1002425: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
L_1002429: /* 1002429: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 100242d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1002431: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1002435: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1002438: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100243a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 100243e: jl 0x1002368 */
  if ((sf != of)) goto L_1002368;
L_1002444: /* 1002444: mov edi, edx */
  edi = edx;
L_1002446: /* 1002446: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100244a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 100244d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 100244e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002450: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1002454: jl 0x1002350 */
  if ((sf != of)) goto L_1002350;
L_100245a: /* 100245a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100245b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100245c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100245d: xor eax, eax */
  eax = 0;
/* 100245f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002460: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002463: ret  */
  esp += 4; SPILL(); return;
}

void f_1002470(void) {
  LOAD_REGS();
L_1002470: /* 1002470: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 1002474: xor eax, eax */
  eax = 0;
/* 1002476: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002478: je 0x1002487 */
  if (zf) goto L_1002487;
L_100247a: /* 100247a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1002480: /* 1002480: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002482: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002483: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002485: jne 0x1002480 */
  if (!zf) goto L_1002480;
L_1002487: /* 1002487: ret  */
  esp += 4; SPILL(); return;
}

void f_1002490(void) {
  LOAD_REGS();
L_1002490: /* 1002490: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1002493: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1002497: mov eax, ecx */
  eax = ecx;
/* 1002499: and eax, 0x1fffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 100249e: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 10024a2: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10024a6: mov eax, ecx */
  eax = ecx;
/* 10024a8: sar eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 10024ab: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10024b0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 10024b2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10024b6: jns 0x10024c2 */
  if (!sf) goto L_10024c2;
L_10024b8: /* 10024b8: fld qword ptr [esp] */
  { double v = F64((uint32_t)(esp)); FPUSH(v); }
/* 10024bc: fchs  */
  ST0 = -ST0;
/* 10024be: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
L_10024c2: /* 10024c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10024c6: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 10024ca: add eax, 0xfffffcec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffcecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10024cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10024d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10024d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10024d2: call dword ptr [0x100a01c] */
  esp -= 4; W32(esp, 0x10024d8u); SPILL(); f_434033(); if (g_unwind) return; /* MSVCR70!ldexp */ RELOAD();
/* 10024d8: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10024dc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 10024e0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10024e3: ret  */
  esp += 4; SPILL(); return;
}

void f_10024f0(void) {
  LOAD_REGS();
L_10024f0: /* 10024f0: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10024f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10024f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10024f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10024f9: mov esi, dword ptr [esp + 0xa0] */
  esi = R32((uint32_t)(esp + 0xa0u));
/* 1002500: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002502: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1002503: mov eax, esi */
  eax = esi;
/* 1002505: jne 0x100250e */
  if (!zf) goto L_100250e;
L_1002507: /* 1002507: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_100250e: /* 100250e: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002512: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1002518u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1002518: mov ebp, dword ptr [esp + 0xa0] */
  ebp = R32((uint32_t)(esp + 0xa0u));
/* 100251f: mov edx, eax */
  edx = eax;
/* 1002521: xor eax, eax */
  eax = 0;
/* 1002523: mov ecx, 0x21 */
  ecx = 0x21u;
/* 1002528: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* 100252c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 100252e: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 1002535: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002538: xor ebx, ebx */
  ebx = 0;
/* 100253a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100253c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 1002540: jle 0x10025eb */
  if ((zf || sf != of)) goto L_10025eb;
L_1002546: /* 1002546: mov edi, edx */
  edi = edx;
/* 1002548: jmp 0x1002551 */
  goto L_1002551;
L_100254a: /* 100254a: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
L_1002551: /* 1002551: mov ecx, dword ptr [ebp + ebx*4] */
  ecx = R32((uint32_t)(ebp + ebx*4));
/* 1002555: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002557: jle 0x10025d0 */
  if ((zf || sf != of)) goto L_10025d0;
L_1002559: /* 1002559: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100255c: mov esi, dword ptr [esp + ecx*4 + 0x14] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x14u));
/* 1002560: jge 0x100256e */
  if ((sf == of)) goto L_100256e;
L_1002562: /* 1002562: mov edx, esi */
  edx = esi;
/* 1002564: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 1002566: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002568: jne 0x1002649 */
  if (!zf) goto L_1002649;
L_100256e: /* 100256e: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 1002570: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1002573: mov eax, ecx */
  eax = ecx;
L_1002575: /* 1002575: mov edx, dword ptr [esp + eax*4 + 0x14] */
  edx = R32((uint32_t)(esp + eax*4 + 0x14u));
/* 1002579: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100257c: jne 0x100258a */
  if (!zf) goto L_100258a;
L_100257e: /* 100257e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100257f: mov dword ptr [esp + eax*4 + 0x14], edx */
  W32((uint32_t)(esp + eax*4 + 0x14u), edx);
/* 1002583: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1002584: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002586: jg 0x1002575 */
  if ((!zf && sf == of)) goto L_1002575;
L_1002588: /* 1002588: jmp 0x10025a1 */
  goto L_10025a1;
L_100258a: /* 100258a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100258d: jne 0x1002595 */
  if (!zf) goto L_1002595;
L_100258f: /* 100258f: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1002593: jmp 0x10025a1 */
  goto L_10025a1;
L_1002595: /* 1002595: mov edx, dword ptr [esp + eax*4 + 0x10] */
  edx = R32((uint32_t)(esp + eax*4 + 0x10u));
/* 1002599: lea eax, [esp + eax*4 + 0x14] */
  eax = (uint32_t)(esp + eax*4 + 0x14u);
/* 100259d: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 100259f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_10025a1: /* 10025a1: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 10025a4: cmp eax, 0x21 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x21u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10025a7: jge 0x10025d7 */
  if ((sf == of)) goto L_10025d7;
L_10025a9: /* 10025a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10025b0: /* 10025b0: mov ecx, dword ptr [esp + eax*4 + 0x14] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x14u));
/* 10025b4: mov edx, ecx */
  edx = ecx;
/* 10025b6: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10025b8: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10025ba: jne 0x10025d7 */
  if (!zf) goto L_10025d7;
L_10025bc: /* 10025bc: mov esi, ecx */
  esi = ecx;
/* 10025be: mov ecx, dword ptr [esp + eax*4 + 0x10] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x10u));
/* 10025c2: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10025c4: mov dword ptr [esp + eax*4 + 0x14], ecx */
  W32((uint32_t)(esp + eax*4 + 0x14u), ecx);
/* 10025c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10025c9: cmp eax, 0x21 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x21u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10025cc: jl 0x10025b0 */
  if ((sf != of)) goto L_10025b0;
L_10025ce: /* 10025ce: jmp 0x10025d7 */
  goto L_10025d7;
L_10025d0: /* 10025d0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10025d2: jne 0x10025d7 */
  if (!zf) goto L_10025d7;
L_10025d4: /* 10025d4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_10025d7: /* 10025d7: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 10025de: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10025df: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10025e1: jl 0x100254a */
  if ((sf != of)) goto L_100254a;
L_10025e7: /* 10025e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_10025eb: /* 10025eb: xor ebx, ebx */
  ebx = 0;
/* 10025ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10025ef: jle 0x100263c */
  if ((zf || sf != of)) goto L_100263c;
L_10025f1: /* 10025f1: mov edi, edx */
  edi = edx;
L_10025f3: /* 10025f3: mov edx, dword ptr [ebp + ebx*4] */
  edx = R32((uint32_t)(ebp + ebx*4));
/* 10025f7: xor eax, eax */
  eax = 0;
/* 10025f9: xor ecx, ecx */
  ecx = 0;
/* 10025fb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 10025fd: jle 0x1002618 */
  if ((zf || sf != of)) goto L_1002618;
L_10025ff: /* 10025ff: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
L_1002601: /* 1002601: mov ebp, esi */
  ebp = esi;
/* 1002603: shr ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
  }
/* 1002605: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002607: and ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 100260a: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 100260c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 100260d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100260f: jl 0x1002601 */
  if ((sf != of)) goto L_1002601;
L_1002611: /* 1002611: mov ebp, dword ptr [esp + 0x9c] */
  ebp = R32((uint32_t)(esp + 0x9cu));
L_1002618: /* 1002618: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 100261f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002621: je 0x1002627 */
  if (zf) goto L_1002627;
L_1002623: /* 1002623: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002625: je 0x100262c */
  if (zf) goto L_100262c;
L_1002627: /* 1002627: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 1002629: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_100262c: /* 100262c: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1002633: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1002634: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002636: jl 0x10025f3 */
  if ((sf != of)) goto L_10025f3;
L_1002638: /* 1002638: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_100263c: /* 100263c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100263d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100263e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100263f: mov eax, edx */
  eax = edx;
/* 1002641: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002642: add esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002648: ret  */
  esp += 4; SPILL(); return;
L_1002649: /* 1002649: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 100264d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100264e: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0x1002654u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 1002654: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002657: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002658: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1002659: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100265a: xor eax, eax */
  eax = 0;
/* 100265c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100265d: add esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002663: ret  */
  esp += 4; SPILL(); return;
}

void f_1002670(void) {
  LOAD_REGS();
L_1002670: /* 1002670: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002671: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1002672: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002673: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1002677: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* 1002679: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 100267a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100267d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1002681: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* 1002687: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 100268b: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 100268f: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 1002692: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1002696: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100269a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 100269d: call 0x1009180 */
  esp -= 4; W32(esp, 0x10026a2u); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* 10026a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10026a5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10026a8: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0x10026aeu); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 10026ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10026b1: call 0x1009188 */
  esp -= 4; W32(esp, 0x10026b6u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 10026b6: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 10026b8: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 10026bb: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 10026bf: nop  */
L_10026c0: /* 10026c0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10026c2: mov ecx, 1 */
  ecx = 0x1u;
/* 10026c7: mov edx, ecx */
  edx = ecx;
/* 10026c9: jle 0x10026df */
  if ((zf || sf != of)) goto L_10026df;
L_10026cb: /* 10026cb: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 10026ce: mov esi, ebx */
  esi = ebx;
L_10026d0: /* 10026d0: mov ebp, edi */
  ebp = edi;
/* 10026d2: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 10026d5: imul edx, ebp */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebp);
  edx = (uint32_t)r;
  }
/* 10026d8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10026d9: jne 0x10026d0 */
  if (!zf) goto L_10026d0;
L_10026db: /* 10026db: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_10026df: /* 10026df: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10026e1: jg 0x10026ea */
  if ((!zf && sf == of)) goto L_10026ea;
L_10026e3: /* 10026e3: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10026e5: jg 0x10026ed */
  if ((!zf && sf == of)) goto L_10026ed;
L_10026e7: /* 10026e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10026e8: jmp 0x10026c0 */
  goto L_10026c0;
L_10026ea: /* 10026ea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10026eb: jmp 0x10026c0 */
  goto L_10026c0;
L_10026ed: /* 10026ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10026ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10026ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10026f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10026f1: ret  */
  esp += 4; SPILL(); return;
}

void f_1002700(void) {
  LOAD_REGS();
L_1002700: /* 1002700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1002701: mov ebp, esp */
  ebp = esp;
/* 1002703: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1002706: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1002709: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 100270a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100270b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 100270e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1002711: xor ebx, ebx */
  ebx = 0;
/* 1002713: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1002717: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 100271b: je 0x100272b */
  if (zf) goto L_100272b;
L_100271d: /* 100271d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002720: je 0x100272b */
  if (zf) goto L_100272b;
L_1002722: /* 1002722: xor eax, eax */
  eax = 0;
/* 1002724: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1002726: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002727: mov esp, ebp */
  esp = ebp;
/* 1002729: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100272a: ret  */
  esp += 4; SPILL(); return;
L_100272b: /* 100272b: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 100272e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100272f: call 0x1002490 */
  esp -= 4; W32(esp, 0x1002734u); SPILL(); f_1002490(); if (g_unwind) return; RELOAD();
/* 1002734: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1002738: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 100273b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100273c: call 0x1002490 */
  esp -= 4; W32(esp, 0x1002741u); SPILL(); f_1002490(); if (g_unwind) return; RELOAD();
/* 1002741: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1002745: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1002747: imul edx, dword ptr [ebp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xcu)));
  edx = (uint32_t)r;
  }
/* 100274b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 100274d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 100274e: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0x1002754u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 1002754: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1002758: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 100275b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100275e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100275f: je 0x1002824 */
  if (zf) goto L_1002824;
L_1002765: /* 1002765: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1002766: jne 0x10028ef */
  if (!zf) goto L_10028ef;
L_100276c: /* 100276c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 100276f: xor ecx, ecx */
  ecx = 0;
/* 1002771: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002773: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1002777: jle 0x10028ef */
  if ((zf || sf != of)) goto L_10028ef;
L_100277d: /* 100277d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1002780: /* 1002780: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1002783: xor edi, edi */
  edi = 0;
/* 1002785: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002787: je 0x1002791 */
  if (zf) goto L_1002791;
L_1002789: /* 1002789: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 100278c: cmp dword ptr [eax + ecx*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100278f: je 0x1002809 */
  if (zf) goto L_1002809;
L_1002791: /* 1002791: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1002793: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002795: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 1002799: jle 0x1002808 */
  if ((zf || sf != of)) goto L_1002808;
L_100279b: /* 100279b: jmp 0x10027a0 */
  goto L_10027a0;
L_10027a0: /* 10027a0: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 10027a3: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 10027a6: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10027a8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10027ab: fild dword ptr [ecx + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 10027ae: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 10027b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 10027b6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10027b9: call 0x1009256 */
  esp -= 4; W32(esp, 0x10027beu); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 10027be: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 10027c2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10027c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10027c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10027ca: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 10027ce: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 10027d2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10027d6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10027da: je 0x10027e0 */
  if (zf) goto L_10027e0;
L_10027dc: /* 10027dc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_10027e0: /* 10027e0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 10027e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10027e5: je 0x10027ef */
  if (zf) goto L_10027ef;
L_10027e7: /* 10027e7: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 10027ea: imul edx, dword ptr [esi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi)));
  edx = (uint32_t)r;
  }
/* 10027ed: jmp 0x10027f4 */
  goto L_10027f4;
L_10027ef: /* 10027ef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10027f1: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
L_10027f4: /* 10027f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10027f8: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10027fa: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 10027fd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10027ff: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1002803: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1002804: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002806: jl 0x10027a0 */
  if ((sf != of)) goto L_10027a0;
L_1002808: /* 1002808: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_1002809: /* 1002809: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 100280c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 100280d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100280f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1002813: jl 0x1002780 */
  if ((sf != of)) goto L_1002780;
L_1002819: /* 1002819: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100281d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100281e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100281f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002820: mov esp, ebp */
  esp = ebp;
/* 1002822: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1002823: ret  */
  esp += 4; SPILL(); return;
L_1002824: /* 1002824: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002825: call 0x1002670 */
  esp -= 4; W32(esp, 0x100282au); SPILL(); f_1002670(); if (g_unwind) return; RELOAD();
/* 100282a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 100282d: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 1002831: xor eax, eax */
  eax = 0;
/* 1002833: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002836: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002838: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 100283c: jle 0x10028ef */
  if ((zf || sf != of)) goto L_10028ef;
L_1002842: /* 1002842: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1002845: xor edi, edi */
  edi = 0;
/* 1002847: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002849: je 0x1002857 */
  if (zf) goto L_1002857;
L_100284b: /* 100284b: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 100284e: cmp dword ptr [edx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002851: je 0x10028df */
  if (zf) goto L_10028df;
L_1002857: /* 1002857: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100285a: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 100285e: mov ebx, 1 */
  ebx = 0x1u;
/* 1002863: jle 0x10028db */
  if ((zf || sf != of)) goto L_10028db;
L_1002865: /* 1002865: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1002866: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x1002866);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1002868: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 100286b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 100286c: idiv dword ptr [esp + 0x34] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x34u)); if (!d) d = (int32_t)guest_divzero(0x100286c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1002870: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1002873: fild dword ptr [eax + edx*4] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 1002876: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 100287a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100287e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1002881: call 0x1009256 */
  esp -= 4; W32(esp, 0x1002886u); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 1002886: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 100288a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 100288d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002892: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 1002896: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 100289a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 100289e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 10028a2: je 0x10028a8 */
  if (zf) goto L_10028a8;
L_10028a4: /* 10028a4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_10028a8: /* 10028a8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 10028ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10028ad: je 0x10028bb */
  if (zf) goto L_10028bb;
L_10028af: /* 10028af: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10028b3: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 10028b6: imul ecx, dword ptr [esi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi)));
  ecx = (uint32_t)r;
  }
/* 10028b9: jmp 0x10028c2 */
  goto L_10028c2;
L_10028bb: /* 10028bb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10028bd: imul ecx, dword ptr [esp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x18u)));
  ecx = (uint32_t)r;
  }
L_10028c2: /* 10028c2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10028c6: imul ebx, dword ptr [esp + 0x2c] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x2cu)));
  ebx = (uint32_t)r;
  }
/* 10028cb: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10028cd: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 10028d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10028d2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10028d3: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10028d5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10028d9: jl 0x1002865 */
  if ((sf != of)) goto L_1002865;
L_10028db: /* 10028db: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
L_10028df: /* 10028df: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 10028e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10028e3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10028e5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10028e9: jl 0x1002842 */
  if ((sf != of)) goto L_1002842;
L_10028ef: /* 10028ef: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10028f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10028f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10028f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10028f6: mov esp, ebp */
  esp = ebp;
/* 10028f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10028f9: ret  */
  esp += 4; SPILL(); return;
}

void f_100279d(void) {
  LOAD_REGS();
  goto L_100279d;
L_1002780: /* 1002780: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1002783: xor edi, edi */
  edi = 0;
/* 1002785: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002787: je 0x1002791 */
  if (zf) goto L_1002791;
L_1002789: /* 1002789: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 100278c: cmp dword ptr [eax + ecx*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100278f: je 0x1002809 */
  if (zf) goto L_1002809;
L_1002791: /* 1002791: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1002793: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002795: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 1002799: jle 0x1002808 */
  if ((zf || sf != of)) goto L_1002808;
L_100279b: /* 100279b: jmp 0x10027a0 */
  goto L_10027a0;
L_100279d: /* 100279d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10027a0: /* 10027a0: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 10027a3: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 10027a6: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10027a8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10027ab: fild dword ptr [ecx + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 10027ae: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 10027b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 10027b6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 10027b9: call 0x1009256 */
  esp -= 4; W32(esp, 0x10027beu); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* 10027be: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 10027c2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 10027c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10027c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10027ca: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 10027ce: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 10027d2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10027d6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10027da: je 0x10027e0 */
  if (zf) goto L_10027e0;
L_10027dc: /* 10027dc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_10027e0: /* 10027e0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 10027e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10027e5: je 0x10027ef */
  if (zf) goto L_10027ef;
L_10027e7: /* 10027e7: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 10027ea: imul edx, dword ptr [esi] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi)));
  edx = (uint32_t)r;
  }
/* 10027ed: jmp 0x10027f4 */
  goto L_10027f4;
L_10027ef: /* 10027ef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10027f1: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
L_10027f4: /* 10027f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10027f8: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10027fa: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 10027fd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10027ff: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1002803: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1002804: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002806: jl 0x10027a0 */
  if ((sf != of)) goto L_10027a0;
L_1002808: /* 1002808: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_1002809: /* 1002809: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 100280c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 100280d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100280f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1002813: jl 0x1002780 */
  if ((sf != of)) goto L_1002780;
L_1002819: /* 1002819: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100281d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100281e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100281f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002820: mov esp, ebp */
  esp = ebp;
/* 1002822: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1002823: ret  */
  esp += 4; SPILL(); return;
}

void f_1002900(void) {
  LOAD_REGS();
L_1002900: /* 1002900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002901: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 1002905: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 1002908: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100290a: je 0x10029a9 */
  if (zf) goto L_10029a9;
L_1002910: /* 1002910: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1002913: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002916: mov ebx, dword ptr [0x100a040] */
  ebx = R32((uint32_t)(0x100a040u));
/* 100291c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 100291d: je 0x1002925 */
  if (zf) goto L_1002925;
L_100291f: /* 100291f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002920: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1002922u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002922: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002925: /* 1002925: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1002928: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 100292a: je 0x1002932 */
  if (zf) goto L_1002932;
L_100292c: /* 100292c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100292d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x100292fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 100292f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002932: /* 1002932: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 1002935: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002937: je 0x100296e */
  if (zf) goto L_100296e;
L_1002939: /* 1002939: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 100293b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100293c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x100293eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 100293e: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002941: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 1002944: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002945: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1002947u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002947: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 100294a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 100294d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100294e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1002950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002950: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 1002953: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 1002956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002957: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1002959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002959: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 100295c: xor eax, eax */
  eax = 0;
/* 100295e: mov ecx, 6 */
  ecx = 0x6u;
/* 1002963: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1002965: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002968: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002969: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x100296bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 100296b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_100296e: /* 100296e: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 1002971: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002973: je 0x100299c */
  if (zf) goto L_100299c;
L_1002975: /* 1002975: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1002977: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002978: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x100297au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 100297a: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 100297d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1002980: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002981: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1002983u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002983: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 1002986: xor edx, edx */
  edx = 0;
/* 1002988: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 100298a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 100298d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 1002990: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 1002993: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 1002996: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002997: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1002999u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002999: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_100299c: /* 100299c: mov ecx, 0xd */
  ecx = 0xdu;
/* 10029a1: xor eax, eax */
  eax = 0;
/* 10029a3: mov edi, esi */
  edi = esi;
/* 10029a5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10029a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10029a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_10029a9: /* 10029a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10029aa: ret  */
  esp += 4; SPILL(); return;
}

void f_10029b0(void) {
  LOAD_REGS();
L_10029b0: /* 10029b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10029b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 10029b5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 10029b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10029ba: je 0x10029cc */
  if (zf) goto L_10029cc;
L_10029bc: /* 10029bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10029bd: call 0x1002900 */
  esp -= 4; W32(esp, 0x10029c2u); SPILL(); f_1002900(); if (g_unwind) return; RELOAD();
/* 10029c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10029c3: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0x10029c9u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 10029c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10029cc: /* 10029cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10029cd: ret  */
  esp += 4; SPILL(); return;
}

void f_10029d0(void) {
  LOAD_REGS();
L_10029d0: /* 10029d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10029d1: mov esi, dword ptr [0x100a040] */
  esi = R32((uint32_t)(0x100a040u));
/* 10029d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10029d8: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 10029dc: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 10029df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10029e1: je 0x10029e9 */
  if (zf) goto L_10029e9;
L_10029e3: /* 10029e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10029e4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10029e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10029e6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10029e9: /* 10029e9: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 10029ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10029ee: je 0x10029f6 */
  if (zf) goto L_10029f6;
L_10029f0: /* 10029f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10029f1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10029f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10029f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10029f6: /* 10029f6: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 10029f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10029fb: je 0x1002a03 */
  if (zf) goto L_1002a03;
L_10029fd: /* 10029fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10029fe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1002a00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002a00: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002a03: /* 1002a03: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 1002a06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002a08: je 0x1002a10 */
  if (zf) goto L_1002a10;
L_1002a0a: /* 1002a0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002a0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1002a0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002a0d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002a10: /* 1002a10: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 1002a13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002a15: je 0x1002a1d */
  if (zf) goto L_1002a1d;
L_1002a17: /* 1002a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002a18: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1002a1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002a1a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002a1d: /* 1002a1d: mov ecx, 0xb */
  ecx = 0xbu;
/* 1002a22: xor eax, eax */
  eax = 0;
/* 1002a24: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1002a26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002a27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1002a28: ret  */
  esp += 4; SPILL(); return;
}

void f_1002a30(void) {
  LOAD_REGS();
L_1002a30: /* 1002a30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002a31: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 1002a35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002a36: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1002a3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1002a3b: xor eax, eax */
  eax = 0;
/* 1002a3d: mov ecx, 0xb */
  ecx = 0xbu;
/* 1002a42: mov edi, ebx */
  edi = ebx;
/* 1002a44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1002a46: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* 1002a49: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1002a4c: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 1002a4f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 1002a52: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 1002a55: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1002a57: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 1002a59: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1002a5c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 1002a5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1002a61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002a62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002a63: call 0x10024f0 */
  esp -= 4; W32(esp, 0x1002a68u); SPILL(); f_10024f0(); if (g_unwind) return; RELOAD();
/* 1002a68: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 1002a6b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 1002a6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1002a70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002a71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002a72: call 0x1002700 */
  esp -= 4; W32(esp, 0x1002a77u); SPILL(); f_1002700(); if (g_unwind) return; RELOAD();
/* 1002a77: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002a7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002a7b: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 1002a7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1002a7f: xor eax, eax */
  eax = 0;
/* 1002a81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002a82: ret  */
  esp += 4; SPILL(); return;
}

void f_1002a90(void) {
  LOAD_REGS();
L_1002a90: /* 1002a90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1002a94: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1002a96: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 1002a9a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1002a9c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1002a9e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1002aa0: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1002aa2: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 1002aa4: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1002aa6: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 1002aaa: ret  */
  esp += 4; SPILL(); return;
}

void f_1002ab0(void) {
  LOAD_REGS();
L_1002ab0: /* 1002ab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1002ab1: mov ebp, esp */
  ebp = esp;
/* 1002ab3: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1002ab6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002ab7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1002ab8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 1002abb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1002abc: xor eax, eax */
  eax = 0;
/* 1002abe: mov ecx, 0xb */
  ecx = 0xbu;
/* 1002ac3: mov edi, esi */
  edi = esi;
/* 1002ac5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1002ac7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 1002aca: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1002acd: xor ebx, ebx */
  ebx = 0;
/* 1002acf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002ad1: jle 0x1002ae4 */
  if ((zf || sf != of)) goto L_1002ae4;
L_1002ad3: /* 1002ad3: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1002ad6: mov edx, eax */
  edx = eax;
L_1002ad8: /* 1002ad8: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002adb: jle 0x1002ade */
  if ((zf || sf != of)) goto L_1002ade;
L_1002add: /* 1002add: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_1002ade: /* 1002ade: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1002ae1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1002ae2: jne 0x1002ad8 */
  if (!zf) goto L_1002ad8;
L_1002ae4: /* 1002ae4: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 1002ae7: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 1002aea: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1002aec: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1002aee: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1002af1: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 1002af4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002af5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002af6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002af7: call 0x10024f0 */
  esp -= 4; W32(esp, 0x1002afcu); SPILL(); f_10024f0(); if (g_unwind) return; RELOAD();
/* 1002afc: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 1002aff: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1002b06: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 1002b09: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002b0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002b0f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002b12: call 0x1009200 */
  esp -= 4; W32(esp, 0x1002b17u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* 1002b17: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1002b1a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002b1c: mov eax, esp */
  eax = esp;
/* 1002b1e: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 1002b21: jne 0x1002b82 */
  if (!zf) goto L_1002b82;
L_1002b23: /* 1002b23: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 1002b26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002b28: mov edi, dword ptr [0x100a040] */
  edi = R32((uint32_t)(0x100a040u));
/* 1002b2e: je 0x1002b36 */
  if (zf) goto L_1002b36;
L_1002b30: /* 1002b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002b31: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1002b33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002b33: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002b36: /* 1002b36: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 1002b39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002b3b: je 0x1002b43 */
  if (zf) goto L_1002b43;
L_1002b3d: /* 1002b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002b3e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1002b40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002b40: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002b43: /* 1002b43: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 1002b46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002b48: je 0x1002b50 */
  if (zf) goto L_1002b50;
L_1002b4a: /* 1002b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002b4b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1002b4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002b4d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002b50: /* 1002b50: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1002b53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002b55: je 0x1002b5d */
  if (zf) goto L_1002b5d;
L_1002b57: /* 1002b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002b58: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1002b5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002b5a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002b5d: /* 1002b5d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1002b60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1002b62: je 0x1002b6a */
  if (zf) goto L_1002b6a;
L_1002b64: /* 1002b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002b65: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1002b67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1002b67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1002b6a: /* 1002b6a: xor eax, eax */
  eax = 0;
/* 1002b6c: mov ecx, 0xb */
  ecx = 0xbu;
/* 1002b71: mov edi, esi */
  edi = esi;
/* 1002b73: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1002b75: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1002b78: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* 1002b7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1002b7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1002b7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1002b7e: mov esp, ebp */
  esp = ebp;
/* 1002b80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1002b81: ret  */
  esp += 4; SPILL(); return;
L_1002b82: /* 1002b82: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002b84: jle 0x1002c10 */
  if ((zf || sf != of)) goto L_1002c10;
L_1002b8a: /* 1002b8a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1002b8c: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 1002b8f: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
L_1002b92: /* 1002b92: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1002b94: mov ecx, eax */
  ecx = eax;
/* 1002b96: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002b99: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002b9c: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1002b9e: mov eax, ecx */
  eax = ecx;
/* 1002ba0: mov edi, ecx */
  edi = ecx;
/* 1002ba2: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002ba5: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002ba8: shl edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1002bab: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002bad: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002bb2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002bb4: mov ecx, eax */
  ecx = eax;
/* 1002bb6: mov edi, eax */
  edi = eax;
/* 1002bb8: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002bbb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002bbe: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1002bc1: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002bc3: and ecx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1002bc9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002bcb: mov eax, ecx */
  eax = ecx;
/* 1002bcd: lea edi, [ecx*4] */
  edi = (uint32_t)(ecx*4);
/* 1002bd4: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002bd7: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002bd9: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002bdc: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002be1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002be3: mov ecx, eax */
  ecx = eax;
/* 1002be5: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002be7: lea edi, [eax + eax] */
  edi = (uint32_t)(eax + eax);
/* 1002bea: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002bec: and ecx, 0x55555555 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1002bf2: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002bf4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002bf6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1002bf9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 1002bfb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1002bfe: mov dword ptr [ecx + edx], edx */
  W32((uint32_t)(ecx + edx), edx);
/* 1002c01: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002c04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1002c05: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 1002c08: jne 0x1002b92 */
  if (!zf) goto L_1002b92;
L_1002c0a: /* 1002c0a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 1002c0d: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
L_1002c10: /* 1002c10: push 0x1002a90 */
  { uint32_t v = 0x1002a90u; esp -= 4; W32(esp, v); }
/* 1002c15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1002c17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002c18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002c19: call dword ptr [0x100a05c] */
  esp -= 4; W32(esp, 0x1002c1fu); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 1002c1f: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002c22: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002c25: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002c28: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002c2b: call 0x1009200 */
  esp -= 4; W32(esp, 0x1002c30u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* 1002c30: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002c33: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 1002c36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002c37: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1002c3du); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1002c3d: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 1002c40: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002c43: xor eax, eax */
  eax = 0;
/* 1002c45: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002c47: jle 0x1002c9a */
  if ((zf || sf != of)) goto L_1002c9a;
L_1002c49: /* 1002c49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1002c50: /* 1002c50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1002c53: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 1002c56: sub edx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1002c59: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1002c5c: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 1002c5f: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 1002c62: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002c63: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002c65: jl 0x1002c50 */
  if ((sf != of)) goto L_1002c50;
L_1002c67: /* 1002c67: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002c69: jle 0x1002c9a */
  if ((zf || sf != of)) goto L_1002c9a;
L_1002c6b: /* 1002c6b: mov eax, ecx */
  eax = ecx;
/* 1002c6d: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1002c70: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1002c72: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 1002c75: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 1002c78: jmp 0x1002c80 */
  goto L_1002c80;
L_1002c7a: /* 1002c7a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1002c7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1002c80: /* 1002c80: mov ecx, dword ptr [ecx + eax] */
  ecx = R32((uint32_t)(ecx + eax));
/* 1002c83: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1002c85: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 1002c88: mov dword ptr [edi + edx*4], ecx */
  W32((uint32_t)(edi + edx*4), ecx);
/* 1002c8b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1002c8e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002c91: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1002c92: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 1002c95: jne 0x1002c7a */
  if (!zf) goto L_1002c7a;
L_1002c97: /* 1002c97: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_1002c9a: /* 1002c9a: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1002c9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1002c9e: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0x1002ca4u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 1002ca4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1002ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002ca8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1002ca9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1002caa: call 0x1002700 */
  esp -= 4; W32(esp, 0x1002cafu); SPILL(); f_1002700(); if (g_unwind) return; RELOAD();
/* 1002caf: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002cb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002cb3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 1002cb6: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1002cbcu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1002cbc: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 1002cbf: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 1002cc2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002cc5: xor ecx, ecx */
  ecx = 0;
/* 1002cc7: xor eax, eax */
  eax = 0;
/* 1002cc9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002ccb: jle 0x1002cee */
  if ((zf || sf != of)) goto L_1002cee;
L_1002ccd: /* 1002ccd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1002cd0: /* 1002cd0: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 1002cd3: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002cd7: jle 0x1002ce6 */
  if ((zf || sf != of)) goto L_1002ce6;
L_1002cd9: /* 1002cd9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002cdc: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 1002cdf: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 1002ce2: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
/* 1002ce5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_1002ce6: /* 1002ce6: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 1002ce9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002cea: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002cec: jl 0x1002cd0 */
  if ((sf != of)) goto L_1002cd0;
L_1002cee: /* 1002cee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1002cef: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0x1002cf5u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 1002cf5: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 1002cf8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1002cfb: xor ecx, ecx */
  ecx = 0;
/* 1002cfd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002d00: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002d02: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 1002d05: jle 0x1002d30 */
  if ((zf || sf != of)) goto L_1002d30;
L_1002d07: /* 1002d07: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 1002d0a: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 1002d0d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002d0f: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 1002d12: jle 0x1002d28 */
  if ((zf || sf != of)) goto L_1002d28;
L_1002d14: /* 1002d14: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 1002d17: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002d1a: mov edx, dword ptr [edx + ebx*4] */
  edx = R32((uint32_t)(edx + ebx*4));
/* 1002d1d: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 1002d1f: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 1002d22: mov byte ptr [edx + ebx], al */
  W8((uint32_t)(edx + ebx), (eax & 0xffu));
/* 1002d25: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_1002d28: /* 1002d28: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1002d2b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1002d2c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002d2e: jl 0x1002d07 */
  if ((sf != of)) goto L_1002d07;
L_1002d30: /* 1002d30: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 1002d33: xor ebx, ebx */
  ebx = 0;
/* 1002d35: xor ecx, ecx */
  ecx = 0;
/* 1002d37: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002d39: je 0x1002d47 */
  if (zf) goto L_1002d47;
L_1002d3b: /* 1002d3b: jmp 0x1002d40 */
  goto L_1002d40;
L_1002d40: /* 1002d40: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002d42: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1002d43: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002d45: jne 0x1002d40 */
  if (!zf) goto L_1002d40;
L_1002d47: /* 1002d47: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 1002d4a: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002d4d: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 1002d50: jge 0x1002d59 */
  if ((sf == of)) goto L_1002d59;
L_1002d52: /* 1002d52: mov dword ptr [esi + 0x24], 5 */
  W32((uint32_t)(esi + 0x24u), 0x5u);
L_1002d59: /* 1002d59: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002d5c: mov eax, 8 */
  eax = 0x8u;
/* 1002d61: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002d63: jle 0x1002d68 */
  if ((zf || sf != of)) goto L_1002d68;
L_1002d65: /* 1002d65: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
L_1002d68: /* 1002d68: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002d6b: mov eax, 1 */
  eax = 0x1u;
/* 1002d70: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002d72: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1002d74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002d75: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 1002d78: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0x1002d7eu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 1002d7e: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1002d81: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1002d84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002d87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002d89: mov dword ptr [esi + 0x28], ebx */
  W32((uint32_t)(esi + 0x28u), ebx);
/* 1002d8c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1002d8f: jle 0x1002e76 */
  if ((zf || sf != of)) goto L_1002e76;
L_1002d95: /* 1002d95: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1002d98: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 1002d9b: lea eax, [ecx + ebx] */
  eax = (uint32_t)(ecx + ebx);
/* 1002d9e: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 1002da1: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002da3: jge 0x1002da8 */
  if ((sf == of)) goto L_1002da8;
L_1002da5: /* 1002da5: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
L_1002da8: /* 1002da8: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 1002dab: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002dae: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002db0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 1002db3: jg 0x1002e67 */
  if ((!zf && sf == of)) goto L_1002e67;
L_1002db9: /* 1002db9: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 1002dbc: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 1002dbf: mov edx, eax */
  edx = eax;
/* 1002dc1: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002dc4: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002dc7: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1002dc9: mov eax, edx */
  eax = edx;
/* 1002dcb: mov edi, edx */
  edi = edx;
/* 1002dcd: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002dd0: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002dd3: shl edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1002dd6: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002dd8: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ddd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ddf: mov edx, eax */
  edx = eax;
/* 1002de1: mov edi, eax */
  edi = eax;
/* 1002de3: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002de6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002de9: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1002dec: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002dee: and edx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002df4: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002df6: mov eax, edx */
  eax = edx;
/* 1002df8: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002dfb: lea edi, [edx*4] */
  edi = (uint32_t)(edx*4);
/* 1002e02: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002e04: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002e07: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002e0c: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002e0e: mov edx, eax */
  edx = eax;
/* 1002e10: lea edi, [eax + eax] */
  edi = (uint32_t)(eax + eax);
/* 1002e13: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002e15: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002e17: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002e19: and edx, 0x55555555 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002e1f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002e21: sub ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002e24: mov eax, 1 */
  eax = 0x1u;
/* 1002e29: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e2b: xor edi, edi */
  edi = 0;
/* 1002e2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 1002e2f: jle 0x1002e67 */
  if ((zf || sf != of)) goto L_1002e67;
L_1002e31: /* 1002e31: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1002e34: mov cl, byte ptr [ebx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ecx))) & 0xffu);
/* 1002e37: mov eax, edi */
  eax = edi;
/* 1002e39: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e3b: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 1002e3e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1002e40: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 1002e43: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 1002e46: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1002e49: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* 1002e4c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1002e4f: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1002e52: movsx eax, byte ptr [ebx + eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx + eax)));
/* 1002e56: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002e59: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002e5b: mov eax, 1 */
  eax = 0x1u;
/* 1002e60: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e62: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1002e63: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002e65: jl 0x1002e31 */
  if ((sf != of)) goto L_1002e31;
L_1002e67: /* 1002e67: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1002e6a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1002e6b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002e6d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1002e70: jl 0x1002d95 */
  if ((sf != of)) goto L_1002d95;
L_1002e76: /* 1002e76: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 1002e79: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 1002e7e: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002e80: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1002e85: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e87: xor edi, edi */
  edi = 0;
/* 1002e89: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 1002e8c: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 1002e8f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1002e92: cmp dword ptr [ebp - 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002e95: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1002e98: jle 0x1003029 */
  if ((zf || sf != of)) goto L_1003029;
L_1002e9e: /* 1002e9e: mov edi, edi */
  edi = edi;
L_1002ea0: /* 1002ea0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 1002ea3: mov ecx, 0x20 */
  ecx = 0x20u;
/* 1002ea8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002eaa: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 1002eac: mov ecx, edi */
  ecx = edi;
/* 1002eae: mov edx, edi */
  edx = edi;
/* 1002eb0: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002eb3: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002eb6: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1002eb8: mov eax, ecx */
  eax = ecx;
/* 1002eba: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002ebd: mov edx, ecx */
  edx = ecx;
/* 1002ebf: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ec2: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ec4: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ec9: mov edx, ecx */
  edx = ecx;
/* 1002ecb: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ece: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ed0: mov edx, eax */
  edx = eax;
/* 1002ed2: mov ebx, eax */
  ebx = eax;
/* 1002ed4: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002ed7: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002eda: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002edc: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002edf: and edx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002ee5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002ee7: mov eax, edx */
  eax = edx;
/* 1002ee9: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 1002ef0: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002ef3: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ef5: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ef8: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002efd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002eff: mov edx, eax */
  edx = eax;
/* 1002f01: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002f03: lea ebx, [eax + eax] */
  ebx = (uint32_t)(eax + eax);
/* 1002f06: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002f08: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002f0a: and edx, 0x55555555 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002f10: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002f12: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1002f15: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002f19: jne 0x1003017 */
  if (!zf) goto L_1003017;
L_1002f1f: /* 1002f1f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002f22: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 1002f25: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 1002f28: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f2a: jge 0x1002f5b */
  if ((sf == of)) goto L_1002f5b;
L_1002f2c: /* 1002f2c: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 1002f2f: lea edx, [ebx + edx*4 + 4] */
  edx = (uint32_t)(ebx + edx*4 + 0x4u);
/* 1002f33: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 1002f36: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1002f40: /* 1002f40: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f43: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002f45: ja 0x1002f58 */
  if ((!cf && !zf)) goto L_1002f58;
L_1002f47: /* 1002f47: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 1002f4a: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f4d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002f50: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002f51: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f53: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f56: jl 0x1002f40 */
  if ((sf != of)) goto L_1002f40;
L_1002f58: /* 1002f58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_1002f5b: /* 1002f5b: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1002f5e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f60: jge 0x1002f90 */
  if ((sf == of)) goto L_1002f90;
L_1002f62: /* 1002f62: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 1002f65: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1002f68: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f6b: jmp 0x1002f70 */
  goto L_1002f70;
L_1002f70: /* 1002f70: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f73: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 1002f75: and edx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002f78: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1002f7a: jb 0x1002f8a */
  if (cf) goto L_1002f8a;
L_1002f7c: /* 1002f7c: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002f80: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002f83: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f85: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f88: jl 0x1002f70 */
  if ((sf != of)) goto L_1002f70;
L_1002f8a: /* 1002f8a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002f8d: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_1002f90: /* 1002f90: mov edi, ebx */
  edi = ebx;
/* 1002f92: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1002f94: cmp edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002f9a: jbe 0x1002fa1 */
  if ((cf | zf)) goto L_1002fa1;
L_1002f9c: /* 1002f9c: mov edx, 0x7fff */
  edx = 0x7fffu;
L_1002fa1: /* 1002fa1: cmp edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002fa7: jbe 0x1002fae */
  if ((cf | zf)) goto L_1002fae;
L_1002fa9: /* 1002fa9: mov edi, 0x7fff */
  edi = 0x7fffu;
L_1002fae: /* 1002fae: mov eax, ecx */
  eax = ecx;
/* 1002fb0: mov ebx, ecx */
  ebx = ecx;
/* 1002fb2: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002fb5: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002fb8: shl ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002fbb: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fbd: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002fc2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fc4: mov ecx, eax */
  ecx = eax;
/* 1002fc6: mov ebx, eax */
  ebx = eax;
/* 1002fc8: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002fcb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002fce: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002fd1: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002fd3: and ecx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1002fd9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002fdb: mov eax, ecx */
  eax = ecx;
/* 1002fdd: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 1002fe4: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002fe7: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fe9: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002fec: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ff1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ff3: or edx, 0xffff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1002ff9: shl edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ffc: mov ecx, eax */
  ecx = eax;
/* 1002ffe: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1003000: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1003002: lea edi, [eax + eax] */
  edi = (uint32_t)(eax + eax);
/* 1003005: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1003007: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003009: and ecx, 0x55555555 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 100300f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1003011: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1003014: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
L_1003017: /* 1003017: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100301a: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 100301d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100301e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003020: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1003023: jl 0x1002ea0 */
  if ((sf != of)) goto L_1002ea0;
L_1003029: /* 1003029: xor eax, eax */
  eax = 0;
/* 100302b: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* 100302e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100302f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003030: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003031: mov esp, ebp */
  esp = ebp;
/* 1003033: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003034: ret  */
  esp += 4; SPILL(); return;
}

void f_1002d3d(void) {
  LOAD_REGS();
L_1002d3d: /* 1002d3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1002d40: /* 1002d40: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002d42: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1002d43: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002d45: jne 0x1002d40 */
  if (!zf) goto L_1002d40;
L_1002d47: /* 1002d47: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 1002d4a: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002d4d: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 1002d50: jge 0x1002d59 */
  if ((sf == of)) goto L_1002d59;
L_1002d52: /* 1002d52: mov dword ptr [esi + 0x24], 5 */
  W32((uint32_t)(esi + 0x24u), 0x5u);
L_1002d59: /* 1002d59: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002d5c: mov eax, 8 */
  eax = 0x8u;
/* 1002d61: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002d63: jle 0x1002d68 */
  if ((zf || sf != of)) goto L_1002d68;
L_1002d65: /* 1002d65: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
L_1002d68: /* 1002d68: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002d6b: mov eax, 1 */
  eax = 0x1u;
/* 1002d70: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002d72: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1002d74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1002d75: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 1002d78: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0x1002d7eu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 1002d7e: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1002d81: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1002d84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1002d87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1002d89: mov dword ptr [esi + 0x28], ebx */
  W32((uint32_t)(esi + 0x28u), ebx);
/* 1002d8c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1002d8f: jle 0x1002e76 */
  if ((zf || sf != of)) goto L_1002e76;
L_1002d95: /* 1002d95: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1002d98: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 1002d9b: lea eax, [ecx + ebx] */
  eax = (uint32_t)(ecx + ebx);
/* 1002d9e: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 1002da1: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002da3: jge 0x1002da8 */
  if ((sf == of)) goto L_1002da8;
L_1002da5: /* 1002da5: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
L_1002da8: /* 1002da8: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 1002dab: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002dae: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002db0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 1002db3: jg 0x1002e67 */
  if ((!zf && sf == of)) goto L_1002e67;
L_1002db9: /* 1002db9: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 1002dbc: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 1002dbf: mov edx, eax */
  edx = eax;
/* 1002dc1: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002dc4: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002dc7: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1002dc9: mov eax, edx */
  eax = edx;
/* 1002dcb: mov edi, edx */
  edi = edx;
/* 1002dcd: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002dd0: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002dd3: shl edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1002dd6: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002dd8: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ddd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ddf: mov edx, eax */
  edx = eax;
/* 1002de1: mov edi, eax */
  edi = eax;
/* 1002de3: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002de6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002de9: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1002dec: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002dee: and edx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002df4: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002df6: mov eax, edx */
  eax = edx;
/* 1002df8: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002dfb: lea edi, [edx*4] */
  edi = (uint32_t)(edx*4);
/* 1002e02: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002e04: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002e07: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002e0c: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002e0e: mov edx, eax */
  edx = eax;
/* 1002e10: lea edi, [eax + eax] */
  edi = (uint32_t)(eax + eax);
/* 1002e13: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002e15: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002e17: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002e19: and edx, 0x55555555 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002e1f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002e21: sub ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002e24: mov eax, 1 */
  eax = 0x1u;
/* 1002e29: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e2b: xor edi, edi */
  edi = 0;
/* 1002e2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 1002e2f: jle 0x1002e67 */
  if ((zf || sf != of)) goto L_1002e67;
L_1002e31: /* 1002e31: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 1002e34: mov cl, byte ptr [ebx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + ecx))) & 0xffu);
/* 1002e37: mov eax, edi */
  eax = edi;
/* 1002e39: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e3b: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 1002e3e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1002e40: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 1002e43: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 1002e46: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1002e49: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* 1002e4c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 1002e4f: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1002e52: movsx eax, byte ptr [ebx + eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx + eax)));
/* 1002e56: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1002e59: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002e5b: mov eax, 1 */
  eax = 0x1u;
/* 1002e60: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e62: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1002e63: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002e65: jl 0x1002e31 */
  if ((sf != of)) goto L_1002e31;
L_1002e67: /* 1002e67: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1002e6a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1002e6b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002e6d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1002e70: jl 0x1002d95 */
  if ((sf != of)) goto L_1002d95;
L_1002e76: /* 1002e76: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 1002e79: mov ecx, 0x1f */
  ecx = 0x1fu;
/* 1002e7e: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002e80: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 1002e85: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1002e87: xor edi, edi */
  edi = 0;
/* 1002e89: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 1002e8c: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 1002e8f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1002e92: cmp dword ptr [ebp - 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002e95: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1002e98: jle 0x1003029 */
  if ((zf || sf != of)) goto L_1003029;
L_1002e9e: /* 1002e9e: mov edi, edi */
  edi = edi;
L_1002ea0: /* 1002ea0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 1002ea3: mov ecx, 0x20 */
  ecx = 0x20u;
/* 1002ea8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002eaa: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 1002eac: mov ecx, edi */
  ecx = edi;
/* 1002eae: mov edx, edi */
  edx = edi;
/* 1002eb0: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002eb3: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002eb6: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1002eb8: mov eax, ecx */
  eax = ecx;
/* 1002eba: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002ebd: mov edx, ecx */
  edx = ecx;
/* 1002ebf: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ec2: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ec4: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ec9: mov edx, ecx */
  edx = ecx;
/* 1002ecb: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ece: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ed0: mov edx, eax */
  edx = eax;
/* 1002ed2: mov ebx, eax */
  ebx = eax;
/* 1002ed4: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002ed7: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002eda: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002edc: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002edf: and edx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002ee5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002ee7: mov eax, edx */
  eax = edx;
/* 1002ee9: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 1002ef0: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002ef3: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ef5: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ef8: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002efd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002eff: mov edx, eax */
  edx = eax;
/* 1002f01: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002f03: lea ebx, [eax + eax] */
  ebx = (uint32_t)(eax + eax);
/* 1002f06: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002f08: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002f0a: and edx, 0x55555555 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002f10: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002f12: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1002f15: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002f19: jne 0x1003017 */
  if (!zf) goto L_1003017;
L_1002f1f: /* 1002f1f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002f22: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 1002f25: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 1002f28: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f2a: jge 0x1002f5b */
  if ((sf == of)) goto L_1002f5b;
L_1002f2c: /* 1002f2c: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 1002f2f: lea edx, [ebx + edx*4 + 4] */
  edx = (uint32_t)(ebx + edx*4 + 0x4u);
/* 1002f33: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 1002f36: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1002f40: /* 1002f40: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f43: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002f45: ja 0x1002f58 */
  if ((!cf && !zf)) goto L_1002f58;
L_1002f47: /* 1002f47: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 1002f4a: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f4d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002f50: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002f51: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f53: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f56: jl 0x1002f40 */
  if ((sf != of)) goto L_1002f40;
L_1002f58: /* 1002f58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_1002f5b: /* 1002f5b: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1002f5e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f60: jge 0x1002f90 */
  if ((sf == of)) goto L_1002f90;
L_1002f62: /* 1002f62: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 1002f65: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1002f68: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f6b: jmp 0x1002f70 */
  goto L_1002f70;
L_1002f70: /* 1002f70: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f73: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 1002f75: and edx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002f78: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1002f7a: jb 0x1002f8a */
  if (cf) goto L_1002f8a;
L_1002f7c: /* 1002f7c: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002f80: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002f83: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f85: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f88: jl 0x1002f70 */
  if ((sf != of)) goto L_1002f70;
L_1002f8a: /* 1002f8a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002f8d: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_1002f90: /* 1002f90: mov edi, ebx */
  edi = ebx;
/* 1002f92: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1002f94: cmp edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002f9a: jbe 0x1002fa1 */
  if ((cf | zf)) goto L_1002fa1;
L_1002f9c: /* 1002f9c: mov edx, 0x7fff */
  edx = 0x7fffu;
L_1002fa1: /* 1002fa1: cmp edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002fa7: jbe 0x1002fae */
  if ((cf | zf)) goto L_1002fae;
L_1002fa9: /* 1002fa9: mov edi, 0x7fff */
  edi = 0x7fffu;
L_1002fae: /* 1002fae: mov eax, ecx */
  eax = ecx;
/* 1002fb0: mov ebx, ecx */
  ebx = ecx;
/* 1002fb2: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002fb5: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002fb8: shl ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002fbb: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fbd: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002fc2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fc4: mov ecx, eax */
  ecx = eax;
/* 1002fc6: mov ebx, eax */
  ebx = eax;
/* 1002fc8: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002fcb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002fce: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002fd1: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002fd3: and ecx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1002fd9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002fdb: mov eax, ecx */
  eax = ecx;
/* 1002fdd: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 1002fe4: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002fe7: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fe9: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002fec: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ff1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ff3: or edx, 0xffff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1002ff9: shl edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ffc: mov ecx, eax */
  ecx = eax;
/* 1002ffe: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1003000: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1003002: lea edi, [eax + eax] */
  edi = (uint32_t)(eax + eax);
/* 1003005: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1003007: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003009: and ecx, 0x55555555 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 100300f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1003011: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1003014: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
L_1003017: /* 1003017: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100301a: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 100301d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100301e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003020: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1003023: jl 0x1002ea0 */
  if ((sf != of)) goto L_1002ea0;
L_1003029: /* 1003029: xor eax, eax */
  eax = 0;
/* 100302b: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* 100302e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100302f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003030: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003031: mov esp, ebp */
  esp = ebp;
/* 1003033: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003034: ret  */
  esp += 4; SPILL(); return;
}

void f_1002f6d(void) {
  LOAD_REGS();
  goto L_1002f6d;
L_1002ea0: /* 1002ea0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 1002ea3: mov ecx, 0x20 */
  ecx = 0x20u;
/* 1002ea8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 1002eaa: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 1002eac: mov ecx, edi */
  ecx = edi;
/* 1002eae: mov edx, edi */
  edx = edi;
/* 1002eb0: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002eb3: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002eb6: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1002eb8: mov eax, ecx */
  eax = ecx;
/* 1002eba: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002ebd: mov edx, ecx */
  edx = ecx;
/* 1002ebf: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ec2: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ec4: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ec9: mov edx, ecx */
  edx = ecx;
/* 1002ecb: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ece: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ed0: mov edx, eax */
  edx = eax;
/* 1002ed2: mov ebx, eax */
  ebx = eax;
/* 1002ed4: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002ed7: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002eda: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002edc: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002edf: and edx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002ee5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002ee7: mov eax, edx */
  eax = edx;
/* 1002ee9: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 1002ef0: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002ef3: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ef5: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ef8: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002efd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002eff: mov edx, eax */
  edx = eax;
/* 1002f01: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1002f03: lea ebx, [eax + eax] */
  ebx = (uint32_t)(eax + eax);
/* 1002f06: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002f08: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1002f0a: and edx, 0x55555555 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002f10: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 1002f12: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1002f15: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1002f19: jne 0x1003017 */
  if (!zf) goto L_1003017;
L_1002f1f: /* 1002f1f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002f22: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 1002f25: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 1002f28: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f2a: jge 0x1002f5b */
  if ((sf == of)) goto L_1002f5b;
L_1002f2c: /* 1002f2c: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 1002f2f: lea edx, [ebx + edx*4 + 4] */
  edx = (uint32_t)(ebx + edx*4 + 0x4u);
/* 1002f33: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 1002f36: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1002f40: /* 1002f40: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f43: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002f45: ja 0x1002f58 */
  if ((!cf && !zf)) goto L_1002f58;
L_1002f47: /* 1002f47: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 1002f4a: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f4d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002f50: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002f51: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f53: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f56: jl 0x1002f40 */
  if ((sf != of)) goto L_1002f40;
L_1002f58: /* 1002f58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_1002f5b: /* 1002f5b: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1002f5e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f60: jge 0x1002f90 */
  if ((sf == of)) goto L_1002f90;
L_1002f62: /* 1002f62: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 1002f65: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 1002f68: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f6b: jmp 0x1002f70 */
  goto L_1002f70;
L_1002f6d: /* 1002f6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1002f70: /* 1002f70: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f73: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 1002f75: and edx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1002f78: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1002f7a: jb 0x1002f8a */
  if (cf) goto L_1002f8a;
L_1002f7c: /* 1002f7c: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1002f7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1002f80: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1002f83: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1002f85: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 1002f88: jl 0x1002f70 */
  if ((sf != of)) goto L_1002f70;
L_1002f8a: /* 1002f8a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1002f8d: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_1002f90: /* 1002f90: mov edi, ebx */
  edi = ebx;
/* 1002f92: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1002f94: cmp edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002f9a: jbe 0x1002fa1 */
  if ((cf | zf)) goto L_1002fa1;
L_1002f9c: /* 1002f9c: mov edx, 0x7fff */
  edx = 0x7fffu;
L_1002fa1: /* 1002fa1: cmp edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1002fa7: jbe 0x1002fae */
  if ((cf | zf)) goto L_1002fae;
L_1002fa9: /* 1002fa9: mov edi, 0x7fff */
  edi = 0x7fffu;
L_1002fae: /* 1002fae: mov eax, ecx */
  eax = ecx;
/* 1002fb0: mov ebx, ecx */
  ebx = ecx;
/* 1002fb2: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002fb5: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002fb8: shl ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002fbb: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fbd: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002fc2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fc4: mov ecx, eax */
  ecx = eax;
/* 1002fc6: mov ebx, eax */
  ebx = eax;
/* 1002fc8: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1002fcb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1002fce: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 1002fd1: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002fd3: and ecx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1002fd9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1002fdb: mov eax, ecx */
  eax = ecx;
/* 1002fdd: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 1002fe4: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1002fe7: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002fe9: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1002fec: and eax, 0x33333333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1002ff1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 1002ff3: or edx, 0xffff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1002ff9: shl edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1002ffc: mov ecx, eax */
  ecx = eax;
/* 1002ffe: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 1003000: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1003002: lea edi, [eax + eax] */
  edi = (uint32_t)(eax + eax);
/* 1003005: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1003007: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003009: and ecx, 0x55555555 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 100300f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 1003011: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 1003014: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
L_1003017: /* 1003017: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100301a: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 100301d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 100301e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003020: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1003023: jl 0x1002ea0 */
  if ((sf != of)) goto L_1002ea0;
L_1003029: /* 1003029: xor eax, eax */
  eax = 0;
/* 100302b: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* 100302e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 100302f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003030: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003031: mov esp, ebp */
  esp = ebp;
/* 1003033: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003034: ret  */
  esp += 4; SPILL(); return;
}

void f_1003040(void) {
  LOAD_REGS();
L_1003040: /* 1003040: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1003043: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1003047: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1003048: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1003049: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 100304d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100304e: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 1003052: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1003053: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1003057: xor edx, edx */
  edx = 0;
/* 1003059: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100305c: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1003060: jl 0x100312f */
  if ((sf != of)) goto L_100312f;
L_1003066: /* 1003066: lea edi, [ebp + ebp*2] */
  edi = (uint32_t)(ebp + ebp*2);
/* 100306a: lea edi, [esi + edi*4] */
  edi = (uint32_t)(esi + edi*4);
/* 100306d: mov ecx, ebp */
  ecx = ebp;
/* 100306f: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1003072: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 1003076: mov dword ptr [esp + 0x1c], 3 */
  W32((uint32_t)(esp + 0x1cu), 0x3u);
/* 100307e: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003081: lea ebx, [esi + ebp*8] */
  ebx = (uint32_t)(esi + ebp*8);
/* 1003084: lea edi, [esi + ebp*4] */
  edi = (uint32_t)(esi + ebp*4);
L_1003087: /* 1003087: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 100308a: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 100308e: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 1003090: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003093: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003095: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003098: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100309c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10030a0: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 10030a4: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 10030a8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 10030ac: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 10030af: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 10030b1: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10030b3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10030b7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10030bb: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 10030bf: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 10030c3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 10030c7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10030ca: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 10030cc: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10030ce: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10030d2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10030d6: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 10030da: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 10030de: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 10030e2: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 10030e5: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 10030e8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 10030ec: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10030ef: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 10030f3: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10030f7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10030fb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10030ff: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1003101: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 1003105: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 1003109: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 100310d: cmp ebp, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003111: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 1003115: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1003119: jl 0x1003087 */
  if ((sf != of)) goto L_1003087;
L_100311f: /* 100311f: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1003123: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 1003127: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 100312b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_100312f: /* 100312f: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003131: jge 0x1003162 */
  if ((sf == of)) goto L_1003162;
L_1003133: /* 1003133: mov ecx, edx */
  ecx = edx;
/* 1003135: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 1003138: lea ebx, [ebp*4] */
  ebx = (uint32_t)(ebp*4);
/* 100313f: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
L_1003142: /* 1003142: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 1003145: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1003146: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 1003148: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100314a: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100314c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1003150: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1003154: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 1003158: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 100315c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 1003160: jl 0x1003142 */
  if ((sf != of)) goto L_1003142;
L_1003162: /* 1003162: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 1003166: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1003167: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003168: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003169: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100316a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100316d: ret  */
  esp += 4; SPILL(); return;
}

void f_1003170(void) {
  LOAD_REGS();
L_1003170: /* 1003170: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1003173: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 1003177: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 100317a: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 100317d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 100317f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1003180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1003181: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1003185: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1003186: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 1003189: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 100318d: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 1003190: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1003192: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1003193: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 1003197: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 100319b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 100319f: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 10031a7: je 0x100323e */
  if (zf) goto L_100323e;
L_10031ad: /* 10031ad: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 10031b0: imul ebx, edi */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(edi);
  ebx = (uint32_t)r;
  }
/* 10031b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10031b5: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 10031bd: jle 0x100322d */
  if ((zf || sf != of)) goto L_100322d;
L_10031bf: /* 10031bf: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 10031c2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10031c3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 10031c7: lea eax, [ebp + ebx*4] */
  eax = (uint32_t)(ebp + ebx*4);
/* 10031cb: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 10031cf: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
L_10031d3: /* 10031d3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10031d7: xor ecx, ecx */
  ecx = 0;
/* 10031d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10031db: jle 0x10031fb */
  if ((zf || sf != of)) goto L_10031fb;
L_10031dd: /* 10031dd: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 10031df: nop  */
L_10031e0: /* 10031e0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10031e4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 10031e6: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 10031e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10031ea: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10031ed: jnp 0x10031fb */
  if (!pf) goto L_10031fb;
L_10031ef: /* 10031ef: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10031f3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10031f4: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10031f7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10031f9: jl 0x10031e0 */
  if ((sf != of)) goto L_10031e0;
L_10031fb: /* 10031fb: mov ebx, dword ptr [edx + 8] */
  ebx = R32((uint32_t)(edx + 0x8u));
/* 10031fe: imul ebx, dword ptr [esp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x24u)));
  ebx = (uint32_t)r;
  }
/* 1003203: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 1003206: add ebx, dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1003209: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100320d: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 1003214: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1003216: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 100321a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100321b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 100321f: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1003223: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1003227: jne 0x10031d3 */
  if (!zf) goto L_10031d3;
L_1003229: /* 1003229: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
L_100322d: /* 100322d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1003230: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 1003234: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003238: jg 0x1003993 */
  if ((!zf && sf == of)) goto L_1003993;
L_100323e: /* 100323e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1003240: je 0x1003738 */
  if (zf) goto L_1003738;
L_1003246: /* 1003246: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 100324a: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 100324d: xor ebx, ebx */
  ebx = 0;
/* 100324f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1003251: mov dword ptr [esp + 0x30], 0xffffffff */
  W32((uint32_t)(esp + 0x30u), 0xffffffffu);
/* 1003259: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 100325d: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 1003261: je 0x10034e2 */
  if (zf) goto L_10034e2;
L_1003267: /* 1003267: cmp dword ptr [esp + 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100326c: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 1003274: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 1003278: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 100327c: jl 0x1003443 */
  if ((sf != of)) goto L_1003443;
L_1003282: /* 1003282: mov dword ptr [esp + 0x3c], 3 */
  W32((uint32_t)(esp + 0x3cu), 0x3u);
L_100328a: /* 100328a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 100328e: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1003292: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1003296: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 1003298: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 100329b: call 0x1009188 */
  esp -= 4; W32(esp, 0x10032a0u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 10032a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10032a2: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 10032a6: jl 0x1003686 */
  if ((sf != of)) goto L_1003686;
L_10032ac: /* 10032ac: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10032af: jge 0x1003686 */
  if ((sf == of)) goto L_1003686;
L_10032b5: /* 10032b5: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10032b8: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10032bc: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 10032bf: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10032c3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 10032c6: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 10032ca: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 10032cd: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10032d1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 10032d4: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 10032d6: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 10032da: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 10032de: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 10032e1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10032e5: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10032e9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10032ed: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10032ef: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10032f1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10032f5: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 10032f9: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 10032fd: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 10032ff: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 1003302: call 0x1009188 */
  esp -= 4; W32(esp, 0x1003307u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 1003307: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003309: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 100330d: jl 0x100366b */
  if ((sf != of)) goto L_100366b;
L_1003313: /* 1003313: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003316: jge 0x100366b */
  if ((sf == of)) goto L_100366b;
L_100331c: /* 100331c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 100331f: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003323: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 1003326: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 100332a: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 100332d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1003331: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003335: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 1003338: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 100333a: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 100333e: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1003340: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1003344: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 1003347: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 100334b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 100334f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1003353: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003355: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1003359: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 100335d: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 1003361: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 1003363: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 1003366: call 0x1009188 */
  esp -= 4; W32(esp, 0x100336bu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 100336b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100336d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 1003371: jl 0x1003672 */
  if ((sf != of)) goto L_1003672;
L_1003377: /* 1003377: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100337a: jge 0x1003672 */
  if ((sf == of)) goto L_1003672;
L_1003380: /* 1003380: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1003383: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003387: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 100338a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 100338e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1003392: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1003396: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 1003399: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100339d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 10033a0: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 10033a2: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 10033a6: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 10033a9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10033ad: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10033b1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10033b5: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10033b7: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10033b9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10033bd: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 10033c1: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 10033c5: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 10033c7: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 10033ca: call 0x1009188 */
  esp -= 4; W32(esp, 0x10033cfu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 10033cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10033d1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 10033d5: jl 0x100367b */
  if ((sf != of)) goto L_100367b;
L_10033db: /* 10033db: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10033de: jge 0x100367b */
  if ((sf == of)) goto L_100367b;
L_10033e4: /* 10033e4: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10033e7: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10033eb: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 10033ee: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10033f2: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 10033f5: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10033f7: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10033fb: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 10033fe: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1003402: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1003406: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 1003409: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 100340b: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 100340f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1003413: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1003417: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 100341b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 100341f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003422: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003424: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003428: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 100342c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1003430: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1003434: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003437: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003439: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 100343d: jl 0x100328a */
  if ((sf != of)) goto L_100328a;
L_1003443: /* 1003443: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1003447: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100344b: jge 0x1003686 */
  if ((sf == of)) goto L_1003686;
L_1003451: /* 1003451: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1003455: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 1003459: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 100345d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1003460: /* 1003460: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1003464: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1003466: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 100346a: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 100346c: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 100346f: call 0x1009188 */
  esp -= 4; W32(esp, 0x1003474u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 1003474: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003476: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 100347a: jl 0x1003686 */
  if ((sf != of)) goto L_1003686;
L_1003480: /* 1003480: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003483: jge 0x1003686 */
  if ((sf == of)) goto L_1003686;
L_1003489: /* 1003489: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 100348c: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003490: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 1003493: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1003497: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 100349a: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 100349d: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 10034a1: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 10034a5: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 10034a8: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 10034aa: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 10034ae: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 10034b1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10034b5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10034b9: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10034bb: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 10034bf: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10034c3: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 10034ca: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10034cc: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10034d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10034d1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10034d3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10034d7: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 10034db: jl 0x1003460 */
  if ((sf != of)) goto L_1003460;
L_10034dd: /* 10034dd: jmp 0x1003686 */
  goto L_1003686;
L_10034e2: /* 10034e2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10034e6: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 10034e9: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 10034ec: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10034ef: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10034f3: jl 0x100360c */
  if ((sf != of)) goto L_100360c;
L_10034f9: /* 10034f9: mov dword ptr [esp + 0x3c], 3 */
  W32((uint32_t)(esp + 0x3cu), 0x3u);
L_1003501: /* 1003501: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1003505: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1003509: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 100350b: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 100350e: call 0x1009188 */
  esp -= 4; W32(esp, 0x1003513u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 1003513: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003515: jl 0x1003686 */
  if ((sf != of)) goto L_1003686;
L_100351b: /* 100351b: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100351e: jge 0x1003686 */
  if ((sf == of)) goto L_1003686;
L_1003524: /* 1003524: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 1003527: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 100352a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 100352e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 1003531: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 1003534: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1003538: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 100353a: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100353c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1003540: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 1003544: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 1003546: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 1003549: call 0x1009188 */
  esp -= 4; W32(esp, 0x100354eu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 100354e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003550: jl 0x100366b */
  if ((sf != of)) goto L_100366b;
L_1003556: /* 1003556: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003559: jge 0x100366b */
  if ((sf == of)) goto L_100366b;
L_100355f: /* 100355f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1003563: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1003566: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 1003569: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 100356c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1003570: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1003572: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1003574: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1003578: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 100357c: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 100357e: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 1003581: call 0x1009188 */
  esp -= 4; W32(esp, 0x1003586u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 1003586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003588: jl 0x1003672 */
  if ((sf != of)) goto L_1003672;
L_100358e: /* 100358e: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003591: jge 0x1003672 */
  if ((sf == of)) goto L_1003672;
L_1003597: /* 1003597: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 100359b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 100359e: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 10035a1: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 10035a4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10035a8: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10035aa: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10035ac: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10035b0: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 10035b4: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 10035b6: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 10035b9: call 0x1009188 */
  esp -= 4; W32(esp, 0x10035beu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 10035be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10035c0: jl 0x100367b */
  if ((sf != of)) goto L_100367b;
L_10035c6: /* 10035c6: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10035c9: jge 0x100367b */
  if ((sf == of)) goto L_100367b;
L_10035cf: /* 10035cf: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10035d3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 10035d6: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 10035d9: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 10035dc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10035e0: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10035e2: mov ebx, ecx */
  ebx = ecx;
/* 10035e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10035e8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10035eb: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10035ed: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10035f1: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 10035f5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10035f9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10035fd: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003600: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003602: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1003606: jl 0x1003501 */
  if ((sf != of)) goto L_1003501;
L_100360c: /* 100360c: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003610: jge 0x1003686 */
  if ((sf == of)) goto L_1003686;
L_1003612: /* 1003612: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1003616: lea ecx, [ebp + eax*4] */
  ecx = (uint32_t)(ebp + eax*4);
/* 100361a: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 100361e: mov edi, edi */
  edi = edi;
L_1003620: /* 1003620: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1003624: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 1003626: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 1003628: fdiv dword ptr [esi + 4] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4u)));
/* 100362b: call 0x1009188 */
  esp -= 4; W32(esp, 0x1003630u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 1003630: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003632: jl 0x1003686 */
  if ((sf != of)) goto L_1003686;
L_1003634: /* 1003634: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003637: jge 0x1003686 */
  if ((sf == of)) goto L_1003686;
L_1003639: /* 1003639: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 100363c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 100363f: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 1003642: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 1003645: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1003649: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100364b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 100364f: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 1003656: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1003658: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 100365c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 100365d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100365f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003663: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1003667: jl 0x1003620 */
  if ((sf != of)) goto L_1003620;
L_1003669: /* 1003669: jmp 0x1003686 */
  goto L_1003686;
L_100366b: /* 100366b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 100366f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1003670: jmp 0x1003682 */
  goto L_1003682;
L_1003672: /* 1003672: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1003676: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003679: jmp 0x1003682 */
  goto L_1003682;
L_100367b: /* 100367b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 100367f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_1003682: /* 1003682: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_1003686: /* 1003686: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 100368a: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 100368e: jne 0x1003738 */
  if (!zf) goto L_1003738;
L_1003694: /* 1003694: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 1003697: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 100369a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100369c: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 10036a0: je 0x1003738 */
  if (zf) goto L_1003738;
L_10036a6: /* 10036a6: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 10036a9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 10036ac: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 10036af: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 10036b2: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 10036b6: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 10036be: jle 0x100372c */
  if ((zf || sf != of)) goto L_100372c;
L_10036c0: /* 10036c0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10036c4: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 10036c7: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 10036cb: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 10036cf: nop  */
L_10036d0: /* 10036d0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10036d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 10036d8: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 10036db: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10036df: mov eax, esi */
  eax = esi;
/* 10036e1: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 10036e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10036e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10036e6: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 10036e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10036ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10036eb: call 0x1003040 */
  esp -= 4; W32(esp, 0x10036f0u); SPILL(); f_1003040(); if (g_unwind) return; RELOAD();
/* 10036f0: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 10036f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10036f7: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 10036fb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10036fe: je 0x100370f */
  if (zf) goto L_100370f;
L_1003700: /* 1003700: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 1003704: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 1003708: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100370a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 100370d: jp 0x100371b */
  if (pf) goto L_100371b;
L_100370f: /* 100370f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1003713: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 1003717: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
L_100371b: /* 100371b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 100371f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 1003723: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1003724: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003726: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 100372a: jl 0x10036d0 */
  if ((sf != of)) goto L_10036d0;
L_100372c: /* 100372c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1003730: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1003731: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003732: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003733: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003734: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1003737: ret  */
  esp += 4; SPILL(); return;
L_1003738: /* 1003738: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 100373c: xor ebx, ebx */
  ebx = 0;
/* 100373e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1003740: je 0x10038fc */
  if (zf) goto L_10038fc;
L_1003746: /* 1003746: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1003749: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 100374c: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1003750: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 1003753: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 1003757: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 100375b: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 100375f: jmp 0x1003765 */
  goto L_1003765;
L_1003761: /* 1003761: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
L_1003765: /* 1003765: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1003769: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 100376d: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 1003770: lea esi, [ebx + edx*4] */
  esi = (uint32_t)(ebx + edx*4);
/* 1003773: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 1003777: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 100377a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100377e: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 1003781: xor ecx, ecx */
  ecx = 0;
/* 1003783: xor eax, eax */
  eax = 0;
/* 1003785: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003788: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 100378c: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 1003790: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 1003794: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003798: jl 0x100387a */
  if ((sf != of)) goto L_100387a;
L_100379e: /* 100379e: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 10037a1: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10037a3: mov dword ptr [esp + 0x38], 3 */
  W32((uint32_t)(esp + 0x38u), 0x3u);
/* 10037ab: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 10037ae: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 10037b2: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 10037b6: jmp 0x10037bc */
  goto L_10037bc;
L_10037b8: /* 10037b8: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
L_10037bc: /* 10037bc: fld dword ptr [ebp + ecx*4] */
  { double v = F32((uint32_t)(ebp + ecx*4)); FPUSH(v); }
/* 10037c0: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10037c2: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 10037c5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10037c8: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 10037cb: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10037ce: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10037d1: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* 10037d7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10037d9: fld dword ptr [edx - 0x1c] */
  { double v = F32((uint32_t)(edx + 0xffffffe4u)); FPUSH(v); }
/* 10037dc: fsub dword ptr [eax - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xffffffecu)));
/* 10037df: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 10037e1: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 10037e5: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 10037e9: fld dword ptr [ebp + ecx*4] */
  { double v = F32((uint32_t)(ebp + ecx*4)); FPUSH(v); }
/* 10037ed: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10037ef: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10037f2: fadd dword ptr [esi + eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax + 0xfffffff0u)));
/* 10037f6: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* 10037fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10037fe: fld dword ptr [esi + eax - 0x10] */
  { double v = F32((uint32_t)(esi + eax + 0xfffffff0u)); FPUSH(v); }
/* 1003802: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1003806: fsub dword ptr [eax - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff0u)));
/* 1003809: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100380c: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 1003810: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 1003812: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 1003816: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 100381a: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 100381e: fld dword ptr [ebp + ecx*4] */
  { double v = F32((uint32_t)(ebp + ecx*4)); FPUSH(v); }
/* 1003822: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003824: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 1003827: fadd dword ptr [edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffecu)));
/* 100382a: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* 1003830: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1003832: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* 1003835: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1003838: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 100383a: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 100383e: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 1003842: fld dword ptr [ebp + ecx*4] */
  { double v = F32((uint32_t)(ebp + ecx*4)); FPUSH(v); }
/* 1003846: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003848: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100384a: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 100384d: fadd dword ptr [edx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff0u)));
/* 1003850: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* 1003856: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1003858: fld dword ptr [edx - 0x10] */
  { double v = F32((uint32_t)(edx + 0xfffffff0u)); FPUSH(v); }
/* 100385b: fsub dword ptr [eax - 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff8u)));
/* 100385e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 1003860: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 1003864: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 1003868: jl 0x10037b8 */
  if ((sf != of)) goto L_10037b8;
L_100386e: /* 100386e: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1003872: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 1003876: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_100387a: /* 100387a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 100387e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003880: jge 0x10038c1 */
  if ((sf == of)) goto L_10038c1;
L_1003882: /* 1003882: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1003884: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 1003887: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 100388b: lea ecx, [ebp + ecx*4] */
  ecx = (uint32_t)(ebp + ecx*4);
/* 100388f: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_1003891: /* 1003891: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1003893: lea ebx, [edi*4] */
  ebx = (uint32_t)(edi*4);
/* 100389a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 100389c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100389f: fadd dword ptr [esi + eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax + 0xfffffffcu)));
/* 10038a3: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10038a5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10038a6: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* 10038ac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10038ae: fld dword ptr [esi + eax - 4] */
  { double v = F32((uint32_t)(esi + eax + 0xfffffffcu)); FPUSH(v); }
/* 10038b2: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10038b5: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 10038b7: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 10038bb: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 10038bf: jne 0x1003891 */
  if (!zf) goto L_1003891;
L_10038c1: /* 10038c1: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 10038c5: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10038c9: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 10038cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10038d1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10038d4: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10038d8: jne 0x10038de */
  if (!zf) goto L_10038de;
L_10038da: /* 10038da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10038dc: jmp 0x10038e1 */
  goto L_10038e1;
L_10038de: /* 10038de: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
L_10038e1: /* 10038e1: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 10038e4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 10038e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10038e8: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10038ec: jg 0x1003761 */
  if ((!zf && sf == of)) goto L_1003761;
L_10038f2: /* 10038f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10038f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10038f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10038f5: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 10038f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10038f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10038fb: ret  */
  esp += 4; SPILL(); return;
L_10038fc: /* 10038fc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1003900: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 1003903: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1003906: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003908: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* 1003910: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 1003914: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1003918: jle 0x100398f */
  if ((zf || sf != of)) goto L_100398f;
L_100391a: /* 100391a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 100391e: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 1003922: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 1003929: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 100392c: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 1003930: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
L_1003934: /* 1003934: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1003938: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100393b: jle 0x1003975 */
  if ((zf || sf != of)) goto L_1003975;
L_100393d: /* 100393d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1003941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1003942: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1003943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1003944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1003945: call 0x1003040 */
  esp -= 4; W32(esp, 0x100394au); SPILL(); f_1003040(); if (g_unwind) return; RELOAD();
/* 100394a: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 100394e: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 1003952: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1003955: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1003958: je 0x1003969 */
  if (zf) goto L_1003969;
L_100395a: /* 100395a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 100395e: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 1003962: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1003964: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1003967: jp 0x1003975 */
  if (pf) goto L_1003975;
L_1003969: /* 1003969: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 100396d: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1003971: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
L_1003975: /* 1003975: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1003979: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 100397d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100397f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1003983: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1003984: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003987: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003989: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 100398d: jl 0x1003934 */
  if ((sf != of)) goto L_1003934;
L_100398f: /* 100398f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
L_1003993: /* 1003993: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1003994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003995: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003996: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003997: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100399a: ret  */
  esp += 4; SPILL(); return;
}
