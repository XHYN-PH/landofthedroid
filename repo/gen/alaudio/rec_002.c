#include "recomp.h"
#include "rec_mod.h"

void f_f2a647(void) {
  LOAD_REGS();
L_f2a647: /* f2a647: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* f2a64e: mov edi, edi */
  edi = edi;
L_f2a650: /* f2a650: cmp edi, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a656: jge 0xf2a76d */
  if ((sf == of)) goto L_f2a76d;
L_f2a65c: /* f2a65c: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a65f: mov edx, edi */
  edx = edi;
/* f2a661: imul edx, edx, 0x54 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x54u);
  edx = (uint32_t)r;
  }
/* f2a664: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2a666: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* f2a669: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2a66b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2a66d: jne 0xf2a6f5 */
  if (!zf) goto L_f2a6f5;
L_f2a673: /* f2a673: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* f2a676: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a678: je 0xf2a6f5 */
  if (zf) goto L_f2a6f5;
L_f2a67a: /* f2a67a: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* f2a680: mov eax, dword ptr [0xf38618] */
  eax = R32((uint32_t)(0xf38618u));
/* f2a685: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* f2a688: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* f2a68e: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f2a691: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* f2a697: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f2a69a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f2a69c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f2a69e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* f2a6a0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* f2a6a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a6a4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* f2a6a6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* f2a6a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* f2a6aa: fstp st(3) */
  STI(3) = ST0; FPOP();
/* f2a6ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6b0: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* f2a6b3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* f2a6b5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f2a6b7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f2a6b9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2a6bb: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* f2a6bd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2a6bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a6c1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2a6c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a6c6: je 0xf2a6ec */
  if (zf) goto L_f2a6ec;
L_f2a6c8: /* f2a6c8: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* f2a6ce: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a6d0: jne 0xf2a6ec */
  if (!zf) goto L_f2a6ec;
L_f2a6d2: /* f2a6d2: mov eax, dword ptr [0xf3862c] */
  eax = R32((uint32_t)(0xf3862cu));
/* f2a6d7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a6da: je 0xf2a6f5 */
  if (zf) goto L_f2a6f5;
L_f2a6dc: /* f2a6dc: fld dword ptr [esi + 0x2c4] */
  { double v = F32((uint32_t)(esi + 0x2c4u)); FPUSH(v); }
/* f2a6e2: fcomp dword ptr [edx + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x1cu)));
  FPOP();
/* f2a6e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2a6e7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2a6ea: jnp 0xf2a6f5 */
  if (!pf) goto L_f2a6f5;
L_f2a6ec: /* f2a6ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2a6ed: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2a6f2u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2a6f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a6f5: /* f2a6f5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f2a6f6: jmp 0xf2a650 */
  goto L_f2a650;
L_f2a76d: /* f2a76d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a770: xor esi, esi */
  esi = 0;
/* f2a772: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f2a775: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a779: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* f2a77c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f2a780: /* f2a780: cmp esi, dword ptr [eax + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a786: jge 0xf2b042 */
  if ((sf == of)) goto L_f2b042;
L_f2a78c: /* f2a78c: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a78f: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f2a792: mov ecx, dword ptr [ecx + esi + 8] */
  ecx = R32((uint32_t)(ecx + esi + 0x8u));
/* f2a796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a798: je 0xf2a7bf */
  if (zf) goto L_f2a7bf;
L_f2a79a: /* f2a79a: call dword ptr [0xf38604] */
  esp -= 4; W32(esp, 0xf2a7a0u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* f2a7a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7a2: jne 0xf2a7bc */
  if (!zf) goto L_f2a7bc;
L_f2a7a4: /* f2a7a4: push 0x47f */
  { uint32_t v = 0x47fu; esp -= 4; W32(esp, v); }
/* f2a7a9: push 0xf360cc */
  { uint32_t v = 0xf360ccu; esp -= 4; W32(esp, v); }
/* f2a7ae: push 0xf360e4 */
  { uint32_t v = 0xf360e4u; esp -= 4; W32(esp, v); }
/* f2a7b3: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf2a7b9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f2a7b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2a7bc: /* f2a7bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a7bf: /* f2a7bf: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2a7c2: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* f2a7c5: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* f2a7c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7ca: je 0xf2b034 */
  if (zf) goto L_f2b034;
L_f2a7d0: /* f2a7d0: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* f2a7d3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7d5: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2a7db: /* f2a7db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a7de: test byte ptr [esi + ecx + 0x44], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx + 0x44u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7e3: je 0xf2a9b2 */
  if (zf) goto L_f2a9b2;
L_f2a7e9: /* f2a7e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a7ec: xor ebx, ebx */
  ebx = 0;
/* f2a7ee: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* f2a7f1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f2a7f4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2a7f7: mov ecx, dword ptr [ecx + 0x94] */
  ecx = R32((uint32_t)(ecx + 0x94u));
/* f2a7fd: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f2a800: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f2a802: mov edx, dword ptr [edx + 0x5c] */
  edx = R32((uint32_t)(edx + 0x5cu));
/* f2a805: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* f2a808: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f2a80b: lea edi, [edx + ecx - 0x44] */
  edi = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f2a80f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* f2a812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a813: push 0x1016 */
  { uint32_t v = 0x1016u; esp -= 4; W32(esp, v); }
/* f2a818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a819: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* f2a81d: call dword ptr [0xf370a4] */
  { uint32_t t = R32((uint32_t)(0xf370a4u)); esp -= 4; W32(esp, 0xf2a823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a823: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a826: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a82b: je 0xf2a845 */
  if (zf) goto L_f2a845;
L_f2a82d: /* f2a82d: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* f2a830: mov eax, dword ptr [0xf385f0] */
  eax = R32((uint32_t)(0xf385f0u));
/* f2a835: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2a838: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a839: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2a83b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f2a83c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a83d: call dword ptr [0xf38640] */
  esp -= 4; W32(esp, 0xf2a843u); SPILL(); f_4e28e2(); if (g_unwind) return; /* Core!?QueryStream@FFileStream@@QAEHHAAH@Z */ RELOAD();
/* f2a843: mov ebx, eax */
  ebx = eax;
L_f2a845: /* f2a845: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* f2a848: mov ecx, dword ptr [0xf3863c] */
  ecx = R32((uint32_t)(0xf3863cu));
/* f2a84e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a850: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* f2a853: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* f2a856: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f2a859: cmp ecx, dword ptr [eax + edx - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a85d: je 0xf2a870 */
  if (zf) goto L_f2a870;
L_f2a85f: /* f2a85f: xor ecx, ecx */
  ecx = 0;
/* f2a861: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* f2a864: mov edx, dword ptr [0xf3863c] */
  edx = R32((uint32_t)(0xf3863cu));
/* f2a86a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2a86c: mov dword ptr [eax + edx - 8], ecx */
  W32((uint32_t)(eax + edx + 0xfffffff8u), ecx);
L_f2a870: /* f2a870: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf2a876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a876: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a879: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a87b: je 0xf2a939 */
  if (zf) goto L_f2a939;
L_f2a881: /* f2a881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a886: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a88c: /* f2a88c: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a88f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a891: je 0xf2a91e */
  if (zf) goto L_f2a91e;
L_f2a897: /* f2a897: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a89a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a89d: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* f2a8a0: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2a8a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8a4: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2a8a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8ab: call dword ptr [0xf37170] */
  { uint32_t t = R32((uint32_t)(0xf37170u)); esp -= 4; W32(esp, 0xf2a8b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8b1: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2a8b4: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8b7: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* f2a8ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8be: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* f2a8c1: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* f2a8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8c7: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* f2a8ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8cc: call dword ptr [0xf370b0] */
  { uint32_t t = R32((uint32_t)(0xf370b0u)); esp -= 4; W32(esp, 0xf2a8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8d2: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f2a8d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a8d8: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* f2a8db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a8de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e2: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a8e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e9: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf2a8efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8ef: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8f2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a8f5: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a8fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8ff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a900: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a902: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a903: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a905: call dword ptr [0xf385f8] */
  esp -= 4; W32(esp, 0xf2a90bu); SPILL(); f_4e1573(); if (g_unwind) return; /* Core!?RequestChunks@FFileStream@@QAEXHHPAX@Z */ RELOAD();
/* f2a90b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a90e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f2a90f: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f2a914: jns 0xf2a91b */
  if (!sf) goto L_f2a91b;
L_f2a916: /* f2a916: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f2a917: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f2a91a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f2a91b: /* f2a91b: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
L_f2a91e: /* f2a91e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a920: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a922: /* f2a922: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a925: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a92b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a92c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a92d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a92e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a930: call dword ptr [0xf385ec] */
  esp -= 4; W32(esp, 0xf2a936u); SPILL(); f_4e3f6c(); if (g_unwind) return; /* Core!?DestroyStream@FFileStream@@QAEXHH@Z */ RELOAD();
/* f2a936: mov dword ptr [edi + 0x28], ebx */
  W32((uint32_t)(edi + 0x28u), ebx);
L_f2a939: /* f2a939: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2a93c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a93e: je 0xf2a95b */
  if (zf) goto L_f2a95b;
L_f2a940: /* f2a940: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a943: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a946: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a94a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a94b: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf2a951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a951: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a954: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
L_f2a95b: /* f2a95b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a95e: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* f2a964: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f2a96a: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f2a96d: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* f2a970: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a977: jmp 0xf2a9c4 */
  goto L_f2a9c4;
L_f2a9b2: /* f2a9b2: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2a9b8: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* f2a9be: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2a9c1: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
L_f2a9c4: /* f2a9c4: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2a9c6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a9c9: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* f2a9d0: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* f2a9d7: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* f2a9de: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a9e1: fld dword ptr [eax + esi + 0x34] */
  { double v = F32((uint32_t)(eax + esi + 0x34u)); FPUSH(v); }
/* f2a9e5: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2a9e8: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2a9eb: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* f2a9ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9f0: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2a9f6: /* f2a9f6: test byte ptr [edx + 0x44], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9fa: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2aa00: /* f2aa00: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2aa07: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa0a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f2aa0c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f2aa0f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f2aa12: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa15: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2aa18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aa1b: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa1e: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f2aa21: test byte ptr [eax + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa25: jne 0xf2aa94 */
  if (!zf) goto L_f2aa94;
L_f2aa27: /* f2aa27: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa2a: fld dword ptr [eax + 0x190] */
  { double v = F32((uint32_t)(eax + 0x190u)); FPUSH(v); }
/* f2aa30: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa35: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* f2aa38: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2aa3b: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* f2aa3e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2aa41: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2aa43: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* f2aa46: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* f2aa4c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa52: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aa55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa5b: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* f2aa61: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa67: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* f2aa6d: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* f2aa73: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f2aa76: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* f2aa7c: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* f2aa82: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2aa85: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* f2aa8b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* f2aa91: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_f2aa94: /* f2aa94: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa97: mov al, byte ptr [edx + esi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi + 0x44u))) & 0xffu);
/* f2aa9b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa9d: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa9f: je 0xf2ab10 */
  if (zf) goto L_f2ab10;
L_f2aaa1: /* f2aaa1: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f2aaa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2aaa9: jne 0xf2ab10 */
  if (!zf) goto L_f2ab10;
L_f2aaab: /* f2aaab: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2aaae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2aab0: movzx ecx, byte ptr [eax + 0x2c9] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2c9u)));
/* f2aab7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f2aaba: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aabd: fmul dword ptr [0xf31efc] */
  ST0 = ST0 * (F32((uint32_t)(0xf31efcu)));
/* f2aac3: fcom dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
/* f2aac9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aacb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aace: jp 0xf2aad9 */
  if (pf) goto L_f2aad9;
L_f2aad0: /* f2aad0: mov dword ptr [ebp - 0x60], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f000000u);
/* f2aad7: jmp 0xf2aaf2 */
  goto L_f2aaf2;
L_f2aad9: /* f2aad9: fcom dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
/* f2aadf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aae1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aae4: jp 0xf2aaeb */
  if (pf) goto L_f2aaeb;
L_f2aae6: /* f2aae6: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* f2aae9: jmp 0xf2aaf4 */
  goto L_f2aaf4;
L_f2aaeb: /* f2aaeb: mov dword ptr [ebp - 0x60], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x40000000u);
L_f2aaf2: /* f2aaf2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2aaf4: /* f2aaf4: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* f2aaf7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f2aafa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aafb: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f2ab00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab01: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ab07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab07: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f2ab0a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2ab10: /* f2ab10: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab13: mov eax, dword ptr [edx + esi + 0x48] */
  eax = R32((uint32_t)(edx + esi + 0x48u));
/* f2ab17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab19: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2ab1b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab1d: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2ab1f: /* f2ab1f: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* f2ab25: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ab27: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2ab2a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f2ab2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab2d: mov ecx, edx */
  ecx = edx;
/* f2ab2f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf2ab35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab35: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ab38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab3b: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* f2ab41: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ab44: fst dword ptr [edx + esi + 0x34] */
  WF32((uint32_t)(edx + esi + 0x34u), ST0);
/* f2ab48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab4b: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ab4e: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2ab51: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2ab54: mov bl, byte ptr [eax + 0x28] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x28u))) & 0xffu);
/* f2ab57: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab59: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2ab5b: /* f2ab5b: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* f2ab5e: fmul dword ptr [0xf31e7c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e7cu)));
L_f2ab64: /* f2ab64: cmp dword ptr [edx + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab68: jne 0xf2abad */
  if (!zf) goto L_f2abad;
L_f2ab6a: /* f2ab6a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab6d: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ab73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ab78: jp 0xf2ab86 */
  if (pf) goto L_f2ab86;
L_f2ab7a: /* f2ab7a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab7d: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2ab80: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2ab83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ab86: /* f2ab86: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab89: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2ab8d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab8f: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2ab92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab94: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab97: jne 0xf2aba5 */
  if (!zf) goto L_f2aba5;
L_f2ab99: /* f2ab99: mov dword ptr [edx + 0x40], 0 */
  W32((uint32_t)(edx + 0x40u), 0x0u);
/* f2aba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aba3: jmp 0xf2abad */
  goto L_f2abad;
L_f2aba5: /* f2aba5: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2aba8: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2abab: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2abad: /* f2abad: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2abb0: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2abb3: cmp dword ptr [edx + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2abb7: jne 0xf2ac32 */
  if (!zf) goto L_f2ac32;
L_f2abb9: /* f2abb9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abbc: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2abc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abc4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2abc7: jp 0xf2abd5 */
  if (pf) goto L_f2abd5;
L_f2abc9: /* f2abc9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abcc: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2abcf: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2abd2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2abd5: /* f2abd5: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2abd8: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2abdc: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2abde: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2abe1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abe3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abe6: jne 0xf2ac24 */
  if (!zf) goto L_f2ac24;
L_f2abe8: /* f2abe8: mov al, byte ptr [edx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x44u))) & 0xffu);
/* f2abeb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2abed: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abef: je 0xf2ac0a */
  if (zf) goto L_f2ac0a;
L_f2abf1: /* f2abf1: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2abf3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2abf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2abf6: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf2abf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2abf9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2abfc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2abff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac00: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac03: mov esi, ecx */
  esi = ecx;
/* f2ac05: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac0a: /* f2ac0a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2ac0e: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2ac13u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2ac13: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac1a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac1d: mov esi, ecx */
  esi = ecx;
/* f2ac1f: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac24: /* f2ac24: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2ac27: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2ac2a: fsubr dword ptr [0xf3112c] */
  ST0 = (F32((uint32_t)(0xf3112cu))) - ST0;
/* f2ac30: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2ac32: /* f2ac32: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f2ac38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac3d: jp 0xf2ac48 */
  if (pf) goto L_f2ac48;
L_f2ac3f: /* f2ac3f: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2ac46: jmp 0xf2ac61 */
  goto L_f2ac61;
L_f2ac48: /* f2ac48: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f2ac4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac50: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac53: jp 0xf2ac5a */
  if (pf) goto L_f2ac5a;
L_f2ac55: /* f2ac55: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* f2ac58: jmp 0xf2ac63 */
  goto L_f2ac63;
L_f2ac5a: /* f2ac5a: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
L_f2ac61: /* f2ac61: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2ac63: /* f2ac63: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2ac66: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* f2ac69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ac6a: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f2ac6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ac70: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ac76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ac76: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac79: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ac7c: mov dl, byte ptr [eax + esi + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x44u))) & 0xffu);
/* f2ac80: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2ac82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2ac85: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ac88: jne 0xf2aee9 */
  if (!zf) goto L_f2aee9;
L_f2ac8e: /* f2ac8e: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* f2ac91: mov eax, dword ptr [ecx + 0xf4] */
  eax = R32((uint32_t)(ecx + 0xf4u));
/* f2ac97: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2ac9d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f2aca0: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2aca3: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2aca6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2aca8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f2acaa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2acad: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2acb0: mov eax, dword ptr [ecx + esi + 8] */
  eax = R32((uint32_t)(ecx + esi + 0x8u));
/* f2acb4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2acb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2acb8: je 0xf2acc3 */
  if (zf) goto L_f2acc3;
L_f2acba: /* f2acba: movzx edx, byte ptr [eax + 0x2ca] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f2acc1: jmp 0xf2acc5 */
  goto L_f2acc5;
L_f2acc3: /* f2acc3: xor edx, edx */
  edx = 0;
L_f2acc5: /* f2acc5: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
/* f2accb: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* f2accd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2acce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2accf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2acd2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2acd5: mov edx, esp */
  edx = esp;
/* f2acd7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acd9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2acdc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acdf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2ace2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2ace5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2ace8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2acea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aced: mov edx, esp */
  edx = esp;
/* f2acef: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acf1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f2acf4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2acf7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acfa: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2acfd: mov ecx, edi */
  ecx = edi;
/* f2acff: call dword ptr [ebx + 0xf8] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf8u)); esp -= 4; W32(esp, 0xf2ad05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ad07: jne 0xf2ad91 */
  if (!zf) goto L_f2ad91;
L_f2ad0d: /* f2ad0d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad10: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ad13: lea ecx, [edx + esi + 0xc] */
  ecx = (uint32_t)(edx + esi + 0xcu);
/* f2ad17: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* f2ad19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2ad1c: mov edx, esp */
  edx = esp;
/* f2ad1e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* f2ad20: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* f2ad23: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2ad26: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* f2ad29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2ad2c: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f2ad2f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* f2ad32: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* f2ad38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad39: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* f2ad3f: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* f2ad42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad43: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf2ad49u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f2ad49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad4c: movzx edx, byte ptr [ecx + 0x6c] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x6cu)));
/* f2ad50: movzx ecx, byte ptr [ebp - 0x70] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffff90u)));
/* f2ad54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f2ad56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad58: mov ecx, edi */
  ecx = edi;
/* f2ad5a: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xf2ad60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad63: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad66: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ad69: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f2ad6c: fst dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0);
/* f2ad70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad73: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* f2ad79: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f2ad7f: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2ad84: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2ad87: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* f2ad8a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ad8d: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2ad8f: jmp 0xf2ad9e */
  goto L_f2ad9e;
L_f2ad91: /* f2ad91: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad94: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ad97: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad9a: fstp dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0); FPOP();
L_f2ad9e: /* f2ad9e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ada1: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f2ada7: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2adac: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2adaf: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f2adb2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2adb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2adb6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2adb9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2adbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2adbd: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adc0: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2adc3: fld dword ptr [edx + esi + 0x28] */
  { double v = F32((uint32_t)(edx + esi + 0x28u)); FPUSH(v); }
/* f2adc7: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* f2adca: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f2adcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2adcf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2add2: jnp 0xf2adf9 */
  if (!pf) goto L_f2adf9;
L_f2add4: /* f2add4: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2add7: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2adda: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* f2ade0: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* f2ade3: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* f2ade9: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* f2adec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adef: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2adf2: fstp dword ptr [edx + esi + 0x28] */
  WF32((uint32_t)(edx + esi + 0x28u), ST0); FPOP();
/* f2adf6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2adf9: /* f2adf9: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2adfc: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* f2adff: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2ae05: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* f2ae08: fsub qword ptr [ecx + 0x2c] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x2cu)));
/* f2ae0b: fcom qword ptr [0xf31e70] */
  fpu_com(ST0, F64((uint32_t)(0xf31e70u)));
/* f2ae11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae13: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ae16: jp 0xf2ae28 */
  if (pf) goto L_f2ae28;
L_f2ae18: /* f2ae18: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae1b: fsub dword ptr [ecx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x24u)));
/* f2ae1e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f2ae20: fadd dword ptr [ecx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x24u)));
/* f2ae23: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ae26: jmp 0xf2ae33 */
  goto L_f2ae33;
L_f2ae28: /* f2ae28: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2ae2b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae2d: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* f2ae30: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ae33: /* f2ae33: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae36: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ae3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae3e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae41: je 0xf2ae4a */
  if (zf) goto L_f2ae4a;
L_f2ae43: /* f2ae43: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
L_f2ae4a: /* f2ae4a: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f2ae50: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae53: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae55: jne 0xf2ae70 */
  if (!zf) goto L_f2ae70;
L_f2ae57: /* f2ae57: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2ae5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ae5e: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f2ae61: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2ae65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2ae68: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ae6e: jmp 0xf2aedd */
  goto L_f2aedd;
L_f2ae70: /* f2ae70: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2ae73: fdiv dword ptr [esi + eax + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esi + eax + 0x1cu)));
/* f2ae77: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f2ae7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae7f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae82: je 0xf2ae8c */
  if (zf) goto L_f2ae8c;
L_f2ae84: /* f2ae84: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae86: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f2ae8c: /* f2ae8c: fldln2  */
  FPUSH(0.693147180559945309417);
/* f2ae8e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2ae90: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2ae92: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f2ae98: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf2ae9du); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f2ae9d: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* f2aea3: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2aea6: mov eax, dword ptr [esi + edx + 4] */
  eax = R32((uint32_t)(esi + edx + 0x4u));
/* f2aeaa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2aeac: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* f2aeb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aeb4: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f2aeb6: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f2aebb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2aebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aebd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2aec0: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aec6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2aec9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeca: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aecd: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aed0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2aed3: mov eax, dword ptr [edx + esi + 4] */
  eax = R32((uint32_t)(edx + esi + 0x4u));
/* f2aed7: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2aedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_f2aedd: /* f2aedd: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2aee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aee3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2aee9: /* f2aee9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aeec: mov eax, dword ptr [edx + esi + 0x44] */
  eax = R32((uint32_t)(edx + esi + 0x44u));
/* f2aef0: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* f2aef3: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2aef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aef7: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2aefa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2aefb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aefc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aeff: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* f2af02: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* f2af04: mov eax, esp */
  eax = esp;
/* f2af06: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f2af08: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* f2af0b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2af0e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f2af11: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2af14: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f2af17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2af18: call 0xf21037 */
  esp -= 4; W32(esp, 0xf2af1du); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f2af1d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2af20: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2af23: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* f2af26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2af29: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2af2c: test byte ptr [esi + edx + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af31: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2af37: /* f2af37: mov eax, edx */
  eax = edx;
/* f2af39: fld dword ptr [esi + eax + 0x14] */
  { double v = F32((uint32_t)(esi + eax + 0x14u)); FPUSH(v); }
/* f2af3d: lea eax, [esi + eax + 0xc] */
  eax = (uint32_t)(esi + eax + 0xcu);
/* f2af41: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2af4a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2af4d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2af55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af5b: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* f2af61: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* f2af67: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2af6d: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf2af73u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f2af73: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2af76: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f2af7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2af7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af81: jne 0xf2afbe */
  if (!zf) goto L_f2afbe;
L_f2af83: /* f2af83: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* f2af8d: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* f2af93: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* f2af9d: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* f2afa3: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* f2afad: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* f2afb3: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* f2afb6: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2afb9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f2afbc: jmp 0xf2afe2 */
  goto L_f2afe2;
L_f2afbe: /* f2afbe: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2afc1: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afc7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f2afca: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* f2afcd: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afd3: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* f2afd6: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f2afd9: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afdf: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
L_f2afe2: /* f2afe2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* f2afe8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2afeb: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2aff1: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* f2aff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aff8: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2affd: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2b003: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2b006: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2b00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b00b: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b011: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b014: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2b017: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b01a: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f2b01d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b01e: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2b022: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b028: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b02eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b02e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b031: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b034: /* f2b034: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2b037: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2b038: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2b03b: mov esi, ecx */
  esi = ecx;
/* f2b03d: jmp 0xf2a780 */
  goto L_f2a780;
L_f2b042: /* f2b042: mov ebx, dword ptr [0xf38638] */
  ebx = R32((uint32_t)(0xf38638u));
/* f2b048: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* f2b04f: mov edi, 0xc */
  edi = 0xcu;
/* f2b054: lea esi, [ebp - 0xc4] */
  esi = (uint32_t)(ebp + 0xffffff3cu);
/* f2b05a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f2b060: /* f2b060: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* f2b063: js 0xf2b070 */
  if (sf) goto L_f2b070;
L_f2b065: /* f2b065: mov ecx, esi */
  ecx = esi;
/* f2b067: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2b069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b069: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b06c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f2b06e: jmp 0xf2b060 */
  goto L_f2b060;
L_f2b070: /* f2b070: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* f2b073: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* f2b076: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* f2b079: fchs  */
  ST0 = -ST0;
/* f2b07b: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* f2b081: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* f2b084: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* f2b08a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* f2b08d: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* f2b093: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* f2b099: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* f2b09c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f2b09f: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* f2b0a5: fchs  */
  ST0 = -ST0;
/* f2b0a7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* f2b0aa: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* f2b0b0: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* f2b0b6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* f2b0bc: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* f2b0c6: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* f2b0cc: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* f2b0cf: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* f2b0d9: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* f2b0df: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* f2b0e2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2b0e5: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b0e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* f2b0f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* f2b0f8: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* f2b0fb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f2b0fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2b100: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f2b103: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2b106: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2b109: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f2b10c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b112: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f2b115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b116: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2b11b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f2b11e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f2b121: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b127: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f2b12a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f2b12d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b133: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2b139: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f2b13c: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b142u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b142: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b145: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* f2b14b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b14c: push 0x100f */
  { uint32_t v = 0x100fu; esp -= 4; W32(esp, v); }
/* f2b151: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b157: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b15a: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* f2b15d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b15e: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b163: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b169: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b16c: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* f2b16f: mov edx, dword ptr [eax + 0x394] */
  edx = R32((uint32_t)(eax + 0x394u));
/* f2b175: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b179: call 0xf210f5 */
  esp -= 4; W32(esp, 0xf2b17eu); SPILL(); f_f210f5(); if (g_unwind) return; RELOAD();
/* f2b17e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b181: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b184: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b18a: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b18d: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* f2b18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b194: jp 0xf2b1aa */
  if (pf) goto L_f2b1aa;
L_f2b196: /* f2b196: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b19c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b19e: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1a4: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2b1aa: /* f2b1aa: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b1ad: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b1b3: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b1b6: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* f2b1b8: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* f2b1be: fmul dword ptr [0xf31e68] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e68u)));
/* f2b1c4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2b1c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b1c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b1cb: jp 0xf2b207 */
  if (pf) goto L_f2b207;
L_f2b1cd: /* f2b1cd: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b1d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b1d5: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1db: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1de: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1e1: mov eax, dword ptr [edx + 0xa4] */
  eax = R32((uint32_t)(edx + 0xa4u));
/* f2b1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b1e8: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf2b1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b1ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1f1: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* f2b1f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b1fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b1fb: call dword ptr [0xf370a8] */
  { uint32_t t = R32((uint32_t)(0xf370a8u)); esp -= 4; W32(esp, 0xf2b201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b201: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b204: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b207: /* f2b207: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* f2b20d: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2b213: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2b216: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2b219: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2b21b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2b21d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b220: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2b222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2b224: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f2b227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2b228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2b229: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2b230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2b231: mov esp, ebp */
  esp = ebp;
/* f2b233: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2b234: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f2a6fb(void) {
  LOAD_REGS();
L_f2a6fb: /* f2a6fb: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* f2a701: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2a706: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* f2a70c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a70d: mov dword ptr [ebp - 0xf0], edx */
  W32((uint32_t)(ebp + 0xffffff10u), edx);
/* f2a713: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2a718u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2a718(); return;
}

void f_f2a718(void) {
  LOAD_REGS();
L_f2a718: /* f2a718: push 0xf31ed8 */
  { uint32_t v = 0xf31ed8u; esp -= 4; W32(esp, v); }
/* f2a71d: push 0xf360bc */
  { uint32_t v = 0xf360bcu; esp -= 4; W32(esp, v); }
/* f2a722: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf2a728u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f2a728: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a72b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a72d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a72f: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2a734u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2a734(); return;
}

void f_f2a734(void) {
  LOAD_REGS();
L_f2a734: /* f2a734: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* f2a73a: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2a73f: lea edx, [ebp - 0xd8] */
  edx = (uint32_t)(ebp + 0xffffff28u);
/* f2a745: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a746: mov dword ptr [ebp - 0xd8], ecx */
  W32((uint32_t)(ebp + 0xffffff28u), ecx);
/* f2a74c: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2a751u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2a751(); return;
}

void f_f2a751(void) {
  LOAD_REGS();
L_f2a751: /* f2a751: push 0xf31eb4 */
  { uint32_t v = 0xf31eb4u; esp -= 4; W32(esp, v); }
/* f2a756: push 0xf360c4 */
  { uint32_t v = 0xf360c4u; esp -= 4; W32(esp, v); }
/* f2a75b: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf2a761u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f2a761: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a764: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a766: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a768: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2a76du); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
/* f2a76d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a770: xor esi, esi */
  esi = 0;
/* f2a772: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f2a775: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a779: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* f2a77c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f2a780: /* f2a780: cmp esi, dword ptr [eax + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a786: jge 0xf2b042 */
  if ((sf == of)) goto L_f2b042;
L_f2a78c: /* f2a78c: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a78f: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f2a792: mov ecx, dword ptr [ecx + esi + 8] */
  ecx = R32((uint32_t)(ecx + esi + 0x8u));
/* f2a796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a798: je 0xf2a7bf */
  if (zf) goto L_f2a7bf;
L_f2a79a: /* f2a79a: call dword ptr [0xf38604] */
  esp -= 4; W32(esp, 0xf2a7a0u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* f2a7a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7a2: jne 0xf2a7bc */
  if (!zf) goto L_f2a7bc;
L_f2a7a4: /* f2a7a4: push 0x47f */
  { uint32_t v = 0x47fu; esp -= 4; W32(esp, v); }
/* f2a7a9: push 0xf360cc */
  { uint32_t v = 0xf360ccu; esp -= 4; W32(esp, v); }
/* f2a7ae: push 0xf360e4 */
  { uint32_t v = 0xf360e4u; esp -= 4; W32(esp, v); }
/* f2a7b3: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf2a7b9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f2a7b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2a7bc: /* f2a7bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a7bf: /* f2a7bf: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2a7c2: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* f2a7c5: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* f2a7c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7ca: je 0xf2b034 */
  if (zf) goto L_f2b034;
L_f2a7d0: /* f2a7d0: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* f2a7d3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7d5: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2a7db: /* f2a7db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a7de: test byte ptr [esi + ecx + 0x44], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx + 0x44u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7e3: je 0xf2a9b2 */
  if (zf) goto L_f2a9b2;
L_f2a7e9: /* f2a7e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a7ec: xor ebx, ebx */
  ebx = 0;
/* f2a7ee: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* f2a7f1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f2a7f4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2a7f7: mov ecx, dword ptr [ecx + 0x94] */
  ecx = R32((uint32_t)(ecx + 0x94u));
/* f2a7fd: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f2a800: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f2a802: mov edx, dword ptr [edx + 0x5c] */
  edx = R32((uint32_t)(edx + 0x5cu));
/* f2a805: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* f2a808: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f2a80b: lea edi, [edx + ecx - 0x44] */
  edi = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f2a80f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* f2a812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a813: push 0x1016 */
  { uint32_t v = 0x1016u; esp -= 4; W32(esp, v); }
/* f2a818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a819: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* f2a81d: call dword ptr [0xf370a4] */
  { uint32_t t = R32((uint32_t)(0xf370a4u)); esp -= 4; W32(esp, 0xf2a823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a823: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a826: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a82b: je 0xf2a845 */
  if (zf) goto L_f2a845;
L_f2a82d: /* f2a82d: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* f2a830: mov eax, dword ptr [0xf385f0] */
  eax = R32((uint32_t)(0xf385f0u));
/* f2a835: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2a838: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a839: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2a83b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f2a83c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a83d: call dword ptr [0xf38640] */
  esp -= 4; W32(esp, 0xf2a843u); SPILL(); f_4e28e2(); if (g_unwind) return; /* Core!?QueryStream@FFileStream@@QAEHHAAH@Z */ RELOAD();
/* f2a843: mov ebx, eax */
  ebx = eax;
L_f2a845: /* f2a845: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* f2a848: mov ecx, dword ptr [0xf3863c] */
  ecx = R32((uint32_t)(0xf3863cu));
/* f2a84e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a850: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* f2a853: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* f2a856: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f2a859: cmp ecx, dword ptr [eax + edx - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a85d: je 0xf2a870 */
  if (zf) goto L_f2a870;
L_f2a85f: /* f2a85f: xor ecx, ecx */
  ecx = 0;
/* f2a861: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* f2a864: mov edx, dword ptr [0xf3863c] */
  edx = R32((uint32_t)(0xf3863cu));
/* f2a86a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2a86c: mov dword ptr [eax + edx - 8], ecx */
  W32((uint32_t)(eax + edx + 0xfffffff8u), ecx);
L_f2a870: /* f2a870: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf2a876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a876: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a879: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a87b: je 0xf2a939 */
  if (zf) goto L_f2a939;
L_f2a881: /* f2a881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a886: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a88c: /* f2a88c: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a88f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a891: je 0xf2a91e */
  if (zf) goto L_f2a91e;
L_f2a897: /* f2a897: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a89a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a89d: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* f2a8a0: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2a8a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8a4: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2a8a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8ab: call dword ptr [0xf37170] */
  { uint32_t t = R32((uint32_t)(0xf37170u)); esp -= 4; W32(esp, 0xf2a8b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8b1: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2a8b4: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8b7: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* f2a8ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8be: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* f2a8c1: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* f2a8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8c7: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* f2a8ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8cc: call dword ptr [0xf370b0] */
  { uint32_t t = R32((uint32_t)(0xf370b0u)); esp -= 4; W32(esp, 0xf2a8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8d2: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f2a8d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a8d8: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* f2a8db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a8de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e2: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a8e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e9: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf2a8efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8ef: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8f2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a8f5: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a8fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8ff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a900: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a902: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a903: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a905: call dword ptr [0xf385f8] */
  esp -= 4; W32(esp, 0xf2a90bu); SPILL(); f_4e1573(); if (g_unwind) return; /* Core!?RequestChunks@FFileStream@@QAEXHHPAX@Z */ RELOAD();
/* f2a90b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a90e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f2a90f: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f2a914: jns 0xf2a91b */
  if (!sf) goto L_f2a91b;
L_f2a916: /* f2a916: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f2a917: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f2a91a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f2a91b: /* f2a91b: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
L_f2a91e: /* f2a91e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a920: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a922: /* f2a922: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a925: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a92b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a92c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a92d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a92e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a930: call dword ptr [0xf385ec] */
  esp -= 4; W32(esp, 0xf2a936u); SPILL(); f_4e3f6c(); if (g_unwind) return; /* Core!?DestroyStream@FFileStream@@QAEXHH@Z */ RELOAD();
/* f2a936: mov dword ptr [edi + 0x28], ebx */
  W32((uint32_t)(edi + 0x28u), ebx);
L_f2a939: /* f2a939: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2a93c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a93e: je 0xf2a95b */
  if (zf) goto L_f2a95b;
L_f2a940: /* f2a940: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a943: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a946: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a94a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a94b: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf2a951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a951: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a954: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
L_f2a95b: /* f2a95b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a95e: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* f2a964: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f2a96a: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f2a96d: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* f2a970: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a977: jmp 0xf2a9c4 */
  goto L_f2a9c4;
L_f2a9b2: /* f2a9b2: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2a9b8: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* f2a9be: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2a9c1: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
L_f2a9c4: /* f2a9c4: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2a9c6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a9c9: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* f2a9d0: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* f2a9d7: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* f2a9de: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a9e1: fld dword ptr [eax + esi + 0x34] */
  { double v = F32((uint32_t)(eax + esi + 0x34u)); FPUSH(v); }
/* f2a9e5: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2a9e8: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2a9eb: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* f2a9ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9f0: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2a9f6: /* f2a9f6: test byte ptr [edx + 0x44], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9fa: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2aa00: /* f2aa00: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2aa07: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa0a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f2aa0c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f2aa0f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f2aa12: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa15: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2aa18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aa1b: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa1e: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f2aa21: test byte ptr [eax + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa25: jne 0xf2aa94 */
  if (!zf) goto L_f2aa94;
L_f2aa27: /* f2aa27: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa2a: fld dword ptr [eax + 0x190] */
  { double v = F32((uint32_t)(eax + 0x190u)); FPUSH(v); }
/* f2aa30: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa35: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* f2aa38: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2aa3b: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* f2aa3e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2aa41: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2aa43: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* f2aa46: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* f2aa4c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa52: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aa55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa5b: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* f2aa61: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa67: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* f2aa6d: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* f2aa73: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f2aa76: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* f2aa7c: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* f2aa82: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2aa85: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* f2aa8b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* f2aa91: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_f2aa94: /* f2aa94: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa97: mov al, byte ptr [edx + esi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi + 0x44u))) & 0xffu);
/* f2aa9b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa9d: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa9f: je 0xf2ab10 */
  if (zf) goto L_f2ab10;
L_f2aaa1: /* f2aaa1: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f2aaa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2aaa9: jne 0xf2ab10 */
  if (!zf) goto L_f2ab10;
L_f2aaab: /* f2aaab: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2aaae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2aab0: movzx ecx, byte ptr [eax + 0x2c9] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2c9u)));
/* f2aab7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f2aaba: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aabd: fmul dword ptr [0xf31efc] */
  ST0 = ST0 * (F32((uint32_t)(0xf31efcu)));
/* f2aac3: fcom dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
/* f2aac9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aacb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aace: jp 0xf2aad9 */
  if (pf) goto L_f2aad9;
L_f2aad0: /* f2aad0: mov dword ptr [ebp - 0x60], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f000000u);
/* f2aad7: jmp 0xf2aaf2 */
  goto L_f2aaf2;
L_f2aad9: /* f2aad9: fcom dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
/* f2aadf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aae1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aae4: jp 0xf2aaeb */
  if (pf) goto L_f2aaeb;
L_f2aae6: /* f2aae6: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* f2aae9: jmp 0xf2aaf4 */
  goto L_f2aaf4;
L_f2aaeb: /* f2aaeb: mov dword ptr [ebp - 0x60], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x40000000u);
L_f2aaf2: /* f2aaf2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2aaf4: /* f2aaf4: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* f2aaf7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f2aafa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aafb: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f2ab00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab01: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ab07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab07: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f2ab0a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2ab10: /* f2ab10: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab13: mov eax, dword ptr [edx + esi + 0x48] */
  eax = R32((uint32_t)(edx + esi + 0x48u));
/* f2ab17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab19: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2ab1b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab1d: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2ab1f: /* f2ab1f: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* f2ab25: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ab27: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2ab2a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f2ab2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab2d: mov ecx, edx */
  ecx = edx;
/* f2ab2f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf2ab35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab35: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ab38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab3b: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* f2ab41: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ab44: fst dword ptr [edx + esi + 0x34] */
  WF32((uint32_t)(edx + esi + 0x34u), ST0);
/* f2ab48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab4b: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ab4e: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2ab51: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2ab54: mov bl, byte ptr [eax + 0x28] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x28u))) & 0xffu);
/* f2ab57: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab59: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2ab5b: /* f2ab5b: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* f2ab5e: fmul dword ptr [0xf31e7c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e7cu)));
L_f2ab64: /* f2ab64: cmp dword ptr [edx + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab68: jne 0xf2abad */
  if (!zf) goto L_f2abad;
L_f2ab6a: /* f2ab6a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab6d: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ab73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ab78: jp 0xf2ab86 */
  if (pf) goto L_f2ab86;
L_f2ab7a: /* f2ab7a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab7d: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2ab80: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2ab83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ab86: /* f2ab86: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab89: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2ab8d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab8f: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2ab92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab94: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab97: jne 0xf2aba5 */
  if (!zf) goto L_f2aba5;
L_f2ab99: /* f2ab99: mov dword ptr [edx + 0x40], 0 */
  W32((uint32_t)(edx + 0x40u), 0x0u);
/* f2aba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aba3: jmp 0xf2abad */
  goto L_f2abad;
L_f2aba5: /* f2aba5: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2aba8: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2abab: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2abad: /* f2abad: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2abb0: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2abb3: cmp dword ptr [edx + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2abb7: jne 0xf2ac32 */
  if (!zf) goto L_f2ac32;
L_f2abb9: /* f2abb9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abbc: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2abc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abc4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2abc7: jp 0xf2abd5 */
  if (pf) goto L_f2abd5;
L_f2abc9: /* f2abc9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abcc: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2abcf: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2abd2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2abd5: /* f2abd5: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2abd8: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2abdc: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2abde: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2abe1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abe3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abe6: jne 0xf2ac24 */
  if (!zf) goto L_f2ac24;
L_f2abe8: /* f2abe8: mov al, byte ptr [edx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x44u))) & 0xffu);
/* f2abeb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2abed: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abef: je 0xf2ac0a */
  if (zf) goto L_f2ac0a;
L_f2abf1: /* f2abf1: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2abf3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2abf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2abf6: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf2abf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2abf9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2abfc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2abff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac00: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac03: mov esi, ecx */
  esi = ecx;
/* f2ac05: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac0a: /* f2ac0a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2ac0e: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2ac13u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2ac13: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac1a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac1d: mov esi, ecx */
  esi = ecx;
/* f2ac1f: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac24: /* f2ac24: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2ac27: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2ac2a: fsubr dword ptr [0xf3112c] */
  ST0 = (F32((uint32_t)(0xf3112cu))) - ST0;
/* f2ac30: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2ac32: /* f2ac32: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f2ac38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac3d: jp 0xf2ac48 */
  if (pf) goto L_f2ac48;
L_f2ac3f: /* f2ac3f: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2ac46: jmp 0xf2ac61 */
  goto L_f2ac61;
L_f2ac48: /* f2ac48: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f2ac4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac50: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac53: jp 0xf2ac5a */
  if (pf) goto L_f2ac5a;
L_f2ac55: /* f2ac55: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* f2ac58: jmp 0xf2ac63 */
  goto L_f2ac63;
L_f2ac5a: /* f2ac5a: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
L_f2ac61: /* f2ac61: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2ac63: /* f2ac63: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2ac66: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* f2ac69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ac6a: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f2ac6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ac70: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ac76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ac76: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac79: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ac7c: mov dl, byte ptr [eax + esi + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x44u))) & 0xffu);
/* f2ac80: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2ac82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2ac85: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ac88: jne 0xf2aee9 */
  if (!zf) goto L_f2aee9;
L_f2ac8e: /* f2ac8e: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* f2ac91: mov eax, dword ptr [ecx + 0xf4] */
  eax = R32((uint32_t)(ecx + 0xf4u));
/* f2ac97: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2ac9d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f2aca0: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2aca3: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2aca6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2aca8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f2acaa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2acad: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2acb0: mov eax, dword ptr [ecx + esi + 8] */
  eax = R32((uint32_t)(ecx + esi + 0x8u));
/* f2acb4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2acb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2acb8: je 0xf2acc3 */
  if (zf) goto L_f2acc3;
L_f2acba: /* f2acba: movzx edx, byte ptr [eax + 0x2ca] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f2acc1: jmp 0xf2acc5 */
  goto L_f2acc5;
L_f2acc3: /* f2acc3: xor edx, edx */
  edx = 0;
L_f2acc5: /* f2acc5: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
/* f2accb: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* f2accd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2acce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2accf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2acd2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2acd5: mov edx, esp */
  edx = esp;
/* f2acd7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acd9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2acdc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acdf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2ace2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2ace5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2ace8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2acea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aced: mov edx, esp */
  edx = esp;
/* f2acef: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acf1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f2acf4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2acf7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acfa: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2acfd: mov ecx, edi */
  ecx = edi;
/* f2acff: call dword ptr [ebx + 0xf8] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf8u)); esp -= 4; W32(esp, 0xf2ad05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ad07: jne 0xf2ad91 */
  if (!zf) goto L_f2ad91;
L_f2ad0d: /* f2ad0d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad10: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ad13: lea ecx, [edx + esi + 0xc] */
  ecx = (uint32_t)(edx + esi + 0xcu);
/* f2ad17: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* f2ad19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2ad1c: mov edx, esp */
  edx = esp;
/* f2ad1e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* f2ad20: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* f2ad23: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2ad26: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* f2ad29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2ad2c: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f2ad2f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* f2ad32: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* f2ad38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad39: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* f2ad3f: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* f2ad42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad43: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf2ad49u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f2ad49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad4c: movzx edx, byte ptr [ecx + 0x6c] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x6cu)));
/* f2ad50: movzx ecx, byte ptr [ebp - 0x70] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffff90u)));
/* f2ad54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f2ad56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad58: mov ecx, edi */
  ecx = edi;
/* f2ad5a: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xf2ad60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad63: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad66: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ad69: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f2ad6c: fst dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0);
/* f2ad70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad73: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* f2ad79: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f2ad7f: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2ad84: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2ad87: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* f2ad8a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ad8d: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2ad8f: jmp 0xf2ad9e */
  goto L_f2ad9e;
L_f2ad91: /* f2ad91: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad94: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ad97: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad9a: fstp dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0); FPOP();
L_f2ad9e: /* f2ad9e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ada1: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f2ada7: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2adac: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2adaf: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f2adb2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2adb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2adb6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2adb9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2adbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2adbd: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adc0: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2adc3: fld dword ptr [edx + esi + 0x28] */
  { double v = F32((uint32_t)(edx + esi + 0x28u)); FPUSH(v); }
/* f2adc7: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* f2adca: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f2adcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2adcf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2add2: jnp 0xf2adf9 */
  if (!pf) goto L_f2adf9;
L_f2add4: /* f2add4: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2add7: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2adda: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* f2ade0: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* f2ade3: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* f2ade9: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* f2adec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adef: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2adf2: fstp dword ptr [edx + esi + 0x28] */
  WF32((uint32_t)(edx + esi + 0x28u), ST0); FPOP();
/* f2adf6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2adf9: /* f2adf9: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2adfc: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* f2adff: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2ae05: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* f2ae08: fsub qword ptr [ecx + 0x2c] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x2cu)));
/* f2ae0b: fcom qword ptr [0xf31e70] */
  fpu_com(ST0, F64((uint32_t)(0xf31e70u)));
/* f2ae11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae13: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ae16: jp 0xf2ae28 */
  if (pf) goto L_f2ae28;
L_f2ae18: /* f2ae18: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae1b: fsub dword ptr [ecx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x24u)));
/* f2ae1e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f2ae20: fadd dword ptr [ecx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x24u)));
/* f2ae23: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ae26: jmp 0xf2ae33 */
  goto L_f2ae33;
L_f2ae28: /* f2ae28: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2ae2b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae2d: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* f2ae30: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ae33: /* f2ae33: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae36: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ae3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae3e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae41: je 0xf2ae4a */
  if (zf) goto L_f2ae4a;
L_f2ae43: /* f2ae43: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
L_f2ae4a: /* f2ae4a: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f2ae50: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae53: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae55: jne 0xf2ae70 */
  if (!zf) goto L_f2ae70;
L_f2ae57: /* f2ae57: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2ae5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ae5e: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f2ae61: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2ae65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2ae68: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ae6e: jmp 0xf2aedd */
  goto L_f2aedd;
L_f2ae70: /* f2ae70: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2ae73: fdiv dword ptr [esi + eax + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esi + eax + 0x1cu)));
/* f2ae77: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f2ae7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae7f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae82: je 0xf2ae8c */
  if (zf) goto L_f2ae8c;
L_f2ae84: /* f2ae84: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae86: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f2ae8c: /* f2ae8c: fldln2  */
  FPUSH(0.693147180559945309417);
/* f2ae8e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2ae90: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2ae92: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f2ae98: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf2ae9du); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f2ae9d: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* f2aea3: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2aea6: mov eax, dword ptr [esi + edx + 4] */
  eax = R32((uint32_t)(esi + edx + 0x4u));
/* f2aeaa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2aeac: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* f2aeb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aeb4: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f2aeb6: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f2aebb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2aebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aebd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2aec0: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aec6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2aec9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeca: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aecd: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aed0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2aed3: mov eax, dword ptr [edx + esi + 4] */
  eax = R32((uint32_t)(edx + esi + 0x4u));
/* f2aed7: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2aedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_f2aedd: /* f2aedd: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2aee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aee3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2aee9: /* f2aee9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aeec: mov eax, dword ptr [edx + esi + 0x44] */
  eax = R32((uint32_t)(edx + esi + 0x44u));
/* f2aef0: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* f2aef3: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2aef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aef7: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2aefa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2aefb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aefc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aeff: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* f2af02: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* f2af04: mov eax, esp */
  eax = esp;
/* f2af06: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f2af08: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* f2af0b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2af0e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f2af11: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2af14: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f2af17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2af18: call 0xf21037 */
  esp -= 4; W32(esp, 0xf2af1du); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f2af1d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2af20: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2af23: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* f2af26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2af29: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2af2c: test byte ptr [esi + edx + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af31: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2af37: /* f2af37: mov eax, edx */
  eax = edx;
/* f2af39: fld dword ptr [esi + eax + 0x14] */
  { double v = F32((uint32_t)(esi + eax + 0x14u)); FPUSH(v); }
/* f2af3d: lea eax, [esi + eax + 0xc] */
  eax = (uint32_t)(esi + eax + 0xcu);
/* f2af41: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2af4a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2af4d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2af55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af5b: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* f2af61: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* f2af67: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2af6d: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf2af73u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f2af73: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2af76: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f2af7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2af7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af81: jne 0xf2afbe */
  if (!zf) goto L_f2afbe;
L_f2af83: /* f2af83: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* f2af8d: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* f2af93: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* f2af9d: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* f2afa3: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* f2afad: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* f2afb3: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* f2afb6: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2afb9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f2afbc: jmp 0xf2afe2 */
  goto L_f2afe2;
L_f2afbe: /* f2afbe: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2afc1: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afc7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f2afca: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* f2afcd: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afd3: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* f2afd6: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f2afd9: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afdf: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
L_f2afe2: /* f2afe2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* f2afe8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2afeb: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2aff1: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* f2aff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aff8: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2affd: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2b003: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2b006: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2b00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b00b: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b011: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b014: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2b017: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b01a: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f2b01d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b01e: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2b022: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b028: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b02eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b02e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b031: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b034: /* f2b034: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2b037: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2b038: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2b03b: mov esi, ecx */
  esi = ecx;
/* f2b03d: jmp 0xf2a780 */
  goto L_f2a780;
L_f2b042: /* f2b042: mov ebx, dword ptr [0xf38638] */
  ebx = R32((uint32_t)(0xf38638u));
/* f2b048: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* f2b04f: mov edi, 0xc */
  edi = 0xcu;
/* f2b054: lea esi, [ebp - 0xc4] */
  esi = (uint32_t)(ebp + 0xffffff3cu);
/* f2b05a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f2b060: /* f2b060: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* f2b063: js 0xf2b070 */
  if (sf) goto L_f2b070;
L_f2b065: /* f2b065: mov ecx, esi */
  ecx = esi;
/* f2b067: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2b069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b069: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b06c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f2b06e: jmp 0xf2b060 */
  goto L_f2b060;
L_f2b070: /* f2b070: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* f2b073: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* f2b076: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* f2b079: fchs  */
  ST0 = -ST0;
/* f2b07b: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* f2b081: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* f2b084: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* f2b08a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* f2b08d: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* f2b093: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* f2b099: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* f2b09c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f2b09f: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* f2b0a5: fchs  */
  ST0 = -ST0;
/* f2b0a7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* f2b0aa: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* f2b0b0: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* f2b0b6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* f2b0bc: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* f2b0c6: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* f2b0cc: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* f2b0cf: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* f2b0d9: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* f2b0df: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* f2b0e2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2b0e5: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b0e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* f2b0f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* f2b0f8: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* f2b0fb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f2b0fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2b100: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f2b103: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2b106: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2b109: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f2b10c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b112: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f2b115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b116: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2b11b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f2b11e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f2b121: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b127: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f2b12a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f2b12d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b133: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2b139: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f2b13c: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b142u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b142: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b145: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* f2b14b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b14c: push 0x100f */
  { uint32_t v = 0x100fu; esp -= 4; W32(esp, v); }
/* f2b151: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b157: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b15a: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* f2b15d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b15e: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b163: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b169: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b16c: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* f2b16f: mov edx, dword ptr [eax + 0x394] */
  edx = R32((uint32_t)(eax + 0x394u));
/* f2b175: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b179: call 0xf210f5 */
  esp -= 4; W32(esp, 0xf2b17eu); SPILL(); f_f210f5(); if (g_unwind) return; RELOAD();
/* f2b17e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b181: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b184: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b18a: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b18d: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* f2b18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b194: jp 0xf2b1aa */
  if (pf) goto L_f2b1aa;
L_f2b196: /* f2b196: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b19c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b19e: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1a4: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2b1aa: /* f2b1aa: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b1ad: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b1b3: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b1b6: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* f2b1b8: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* f2b1be: fmul dword ptr [0xf31e68] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e68u)));
/* f2b1c4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2b1c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b1c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b1cb: jp 0xf2b207 */
  if (pf) goto L_f2b207;
L_f2b1cd: /* f2b1cd: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b1d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b1d5: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1db: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1de: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1e1: mov eax, dword ptr [edx + 0xa4] */
  eax = R32((uint32_t)(edx + 0xa4u));
/* f2b1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b1e8: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf2b1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b1ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1f1: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* f2b1f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b1fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b1fb: call dword ptr [0xf370a8] */
  { uint32_t t = R32((uint32_t)(0xf370a8u)); esp -= 4; W32(esp, 0xf2b201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b201: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b204: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b207: /* f2b207: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* f2b20d: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2b213: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2b216: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2b219: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2b21b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2b21d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b220: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2b222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2b224: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f2b227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2b228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2b229: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2b230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2b231: mov esp, ebp */
  esp = ebp;
/* f2b233: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2b234: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f2a979(void) {
  LOAD_REGS();
L_f2a979: /* f2a979: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* f2a97f: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2a984: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* f2a98a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a98b: mov dword ptr [ebp - 0xe8], ecx */
  W32((uint32_t)(ebp + 0xffffff18u), ecx);
/* f2a991: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2a996u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2a996(); return;
}

void f_f2a996(void) {
  LOAD_REGS();
  goto L_f2a996;
L_f2a780: /* f2a780: cmp esi, dword ptr [eax + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x80u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2a786: jge 0xf2b042 */
  if ((sf == of)) goto L_f2b042;
L_f2a78c: /* f2a78c: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a78f: imul esi, esi, 0x54 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x54u);
  esi = (uint32_t)r;
  }
/* f2a792: mov ecx, dword ptr [ecx + esi + 8] */
  ecx = R32((uint32_t)(ecx + esi + 0x8u));
/* f2a796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a798: je 0xf2a7bf */
  if (zf) goto L_f2a7bf;
L_f2a79a: /* f2a79a: call dword ptr [0xf38604] */
  esp -= 4; W32(esp, 0xf2a7a0u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* f2a7a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7a2: jne 0xf2a7bc */
  if (!zf) goto L_f2a7bc;
L_f2a7a4: /* f2a7a4: push 0x47f */
  { uint32_t v = 0x47fu; esp -= 4; W32(esp, v); }
/* f2a7a9: push 0xf360cc */
  { uint32_t v = 0xf360ccu; esp -= 4; W32(esp, v); }
/* f2a7ae: push 0xf360e4 */
  { uint32_t v = 0xf360e4u; esp -= 4; W32(esp, v); }
/* f2a7b3: call dword ptr [0xf38460] */
  esp -= 4; W32(esp, 0xf2a7b9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* f2a7b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2a7bc: /* f2a7bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_f2a7bf: /* f2a7bf: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2a7c2: lea ecx, [esi + edx] */
  ecx = (uint32_t)(esi + edx);
/* f2a7c5: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* f2a7c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7ca: je 0xf2b034 */
  if (zf) goto L_f2b034;
L_f2a7d0: /* f2a7d0: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* f2a7d3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7d5: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2a7db: /* f2a7db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a7de: test byte ptr [esi + ecx + 0x44], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx + 0x44u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a7e3: je 0xf2a9b2 */
  if (zf) goto L_f2a9b2;
L_f2a7e9: /* f2a7e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a7ec: xor ebx, ebx */
  ebx = 0;
/* f2a7ee: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* f2a7f1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f2a7f4: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2a7f7: mov ecx, dword ptr [ecx + 0x94] */
  ecx = R32((uint32_t)(ecx + 0x94u));
/* f2a7fd: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* f2a800: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f2a802: mov edx, dword ptr [edx + 0x5c] */
  edx = R32((uint32_t)(edx + 0x5cu));
/* f2a805: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* f2a808: imul edx, edx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x44u);
  edx = (uint32_t)r;
  }
/* f2a80b: lea edi, [edx + ecx - 0x44] */
  edi = (uint32_t)(edx + ecx + 0xffffffbcu);
/* f2a80f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* f2a812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a813: push 0x1016 */
  { uint32_t v = 0x1016u; esp -= 4; W32(esp, v); }
/* f2a818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a819: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* f2a81d: call dword ptr [0xf370a4] */
  { uint32_t t = R32((uint32_t)(0xf370a4u)); esp -= 4; W32(esp, 0xf2a823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a823: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a826: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a82b: je 0xf2a845 */
  if (zf) goto L_f2a845;
L_f2a82d: /* f2a82d: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* f2a830: mov eax, dword ptr [0xf385f0] */
  eax = R32((uint32_t)(0xf385f0u));
/* f2a835: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f2a838: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a839: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2a83b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f2a83c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a83d: call dword ptr [0xf38640] */
  esp -= 4; W32(esp, 0xf2a843u); SPILL(); f_4e28e2(); if (g_unwind) return; /* Core!?QueryStream@FFileStream@@QAEHHAAH@Z */ RELOAD();
/* f2a843: mov ebx, eax */
  ebx = eax;
L_f2a845: /* f2a845: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* f2a848: mov ecx, dword ptr [0xf3863c] */
  ecx = R32((uint32_t)(0xf3863cu));
/* f2a84e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2a850: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* f2a853: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* f2a856: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f2a859: cmp ecx, dword ptr [eax + edx - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2a85d: je 0xf2a870 */
  if (zf) goto L_f2a870;
L_f2a85f: /* f2a85f: xor ecx, ecx */
  ecx = 0;
/* f2a861: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* f2a864: mov edx, dword ptr [0xf3863c] */
  edx = R32((uint32_t)(0xf3863cu));
/* f2a86a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2a86c: mov dword ptr [eax + edx - 8], ecx */
  W32((uint32_t)(eax + edx + 0xfffffff8u), ecx);
L_f2a870: /* f2a870: call dword ptr [0xf37084] */
  { uint32_t t = R32((uint32_t)(0xf37084u)); esp -= 4; W32(esp, 0xf2a876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a876: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f2a879: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a87b: je 0xf2a939 */
  if (zf) goto L_f2a939;
L_f2a881: /* f2a881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2a884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a886: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a88c: /* f2a88c: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f2a88f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a891: je 0xf2a91e */
  if (zf) goto L_f2a91e;
L_f2a897: /* f2a897: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a89a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a89d: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* f2a8a0: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2a8a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8a4: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2a8a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8ab: call dword ptr [0xf37170] */
  { uint32_t t = R32((uint32_t)(0xf37170u)); esp -= 4; W32(esp, 0xf2a8b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8b1: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2a8b4: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8b7: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* f2a8ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8be: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* f2a8c1: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* f2a8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8c7: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* f2a8ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a8cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8cc: call dword ptr [0xf370b0] */
  { uint32_t t = R32((uint32_t)(0xf370b0u)); esp -= 4; W32(esp, 0xf2a8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8d2: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* f2a8d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a8d8: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* f2a8db: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a8de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e2: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a8e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a8e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a8e9: call dword ptr [0xf37094] */
  { uint32_t t = R32((uint32_t)(0xf37094u)); esp -= 4; W32(esp, 0xf2a8efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a8ef: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2a8f2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a8f5: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a8fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a8fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2a8ff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a900: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f2a902: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a903: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a905: call dword ptr [0xf385f8] */
  esp -= 4; W32(esp, 0xf2a90bu); SPILL(); f_4e1573(); if (g_unwind) return; /* Core!?RequestChunks@FFileStream@@QAEXHHPAX@Z */ RELOAD();
/* f2a90b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* f2a90e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f2a90f: and eax, 0x80000003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f2a914: jns 0xf2a91b */
  if (!sf) goto L_f2a91b;
L_f2a916: /* f2a916: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f2a917: or eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f2a91a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f2a91b: /* f2a91b: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
L_f2a91e: /* f2a91e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a920: jne 0xf2a939 */
  if (!zf) goto L_f2a939;
L_f2a922: /* f2a922: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* f2a925: mov edx, dword ptr [0xf385f0] */
  edx = R32((uint32_t)(0xf385f0u));
/* f2a92b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f2a92c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2a92d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2a92e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f2a930: call dword ptr [0xf385ec] */
  esp -= 4; W32(esp, 0xf2a936u); SPILL(); f_4e3f6c(); if (g_unwind) return; /* Core!?DestroyStream@FFileStream@@QAEXHH@Z */ RELOAD();
/* f2a936: mov dword ptr [edi + 0x28], ebx */
  W32((uint32_t)(edi + 0x28u), ebx);
L_f2a939: /* f2a939: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2a93c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a93e: je 0xf2a95b */
  if (zf) goto L_f2a95b;
L_f2a940: /* f2a940: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a943: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2a946: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2a94a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2a94b: call dword ptr [0xf37128] */
  { uint32_t t = R32((uint32_t)(0xf37128u)); esp -= 4; W32(esp, 0xf2a951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2a951: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a954: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
L_f2a95b: /* f2a95b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a95e: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* f2a964: mov edx, dword ptr [0xf38720] */
  edx = R32((uint32_t)(0xf38720u));
/* f2a96a: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* f2a96d: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* f2a970: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f2a977: jmp 0xf2a9c4 */
  goto L_f2a9c4;
L_f2a996: /* f2a996: push 0xf31e80 */
  { uint32_t v = 0xf31e80u; esp -= 4; W32(esp, v); }
/* f2a99b: push 0xf36124 */
  { uint32_t v = 0xf36124u; esp -= 4; W32(esp, v); }
/* f2a9a0: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf2a9a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f2a9a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2a9a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a9ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2a9ad: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2a9b2u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f2a9b2: /* f2a9b2: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2a9b8: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* f2a9be: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2a9c1: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
L_f2a9c4: /* f2a9c4: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2a9c6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2a9c9: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* f2a9d0: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* f2a9d7: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* f2a9de: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2a9e1: fld dword ptr [eax + esi + 0x34] */
  { double v = F32((uint32_t)(eax + esi + 0x34u)); FPUSH(v); }
/* f2a9e5: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2a9e8: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2a9eb: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* f2a9ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9f0: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2a9f6: /* f2a9f6: test byte ptr [edx + 0x44], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x44u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2a9fa: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2aa00: /* f2aa00: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f2aa07: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa0a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* f2aa0c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f2aa0f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* f2aa12: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa15: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2aa18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aa1b: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa1e: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* f2aa21: test byte ptr [eax + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa25: jne 0xf2aa94 */
  if (!zf) goto L_f2aa94;
L_f2aa27: /* f2aa27: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* f2aa2a: fld dword ptr [eax + 0x190] */
  { double v = F32((uint32_t)(eax + 0x190u)); FPUSH(v); }
/* f2aa30: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2aa35: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* f2aa38: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2aa3b: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* f2aa3e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2aa41: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2aa43: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* f2aa46: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* f2aa4c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa52: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aa55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa5b: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* f2aa61: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aa67: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* f2aa6d: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* f2aa73: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f2aa76: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* f2aa7c: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* f2aa82: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2aa85: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* f2aa8b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* f2aa91: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_f2aa94: /* f2aa94: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aa97: mov al, byte ptr [edx + esi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi + 0x44u))) & 0xffu);
/* f2aa9b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2aa9d: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2aa9f: je 0xf2ab10 */
  if (zf) goto L_f2ab10;
L_f2aaa1: /* f2aaa1: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* f2aaa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2aaa9: jne 0xf2ab10 */
  if (!zf) goto L_f2ab10;
L_f2aaab: /* f2aaab: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2aaae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2aab0: movzx ecx, byte ptr [eax + 0x2c9] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2c9u)));
/* f2aab7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f2aaba: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f2aabd: fmul dword ptr [0xf31efc] */
  ST0 = ST0 * (F32((uint32_t)(0xf31efcu)));
/* f2aac3: fcom dword ptr [0xf31da0] */
  fpu_com(ST0, F32((uint32_t)(0xf31da0u)));
/* f2aac9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aacb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aace: jp 0xf2aad9 */
  if (pf) goto L_f2aad9;
L_f2aad0: /* f2aad0: mov dword ptr [ebp - 0x60], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f000000u);
/* f2aad7: jmp 0xf2aaf2 */
  goto L_f2aaf2;
L_f2aad9: /* f2aad9: fcom dword ptr [0xf31118] */
  fpu_com(ST0, F32((uint32_t)(0xf31118u)));
/* f2aadf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2aae1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2aae4: jp 0xf2aaeb */
  if (pf) goto L_f2aaeb;
L_f2aae6: /* f2aae6: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* f2aae9: jmp 0xf2aaf4 */
  goto L_f2aaf4;
L_f2aaeb: /* f2aaeb: mov dword ptr [ebp - 0x60], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x40000000u);
L_f2aaf2: /* f2aaf2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2aaf4: /* f2aaf4: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* f2aaf7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f2aafa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aafb: push 0x1003 */
  { uint32_t v = 0x1003u; esp -= 4; W32(esp, v); }
/* f2ab00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab01: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ab07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab07: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f2ab0a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2ab10: /* f2ab10: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab13: mov eax, dword ptr [edx + esi + 0x48] */
  eax = R32((uint32_t)(edx + esi + 0x48u));
/* f2ab17: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab19: and al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f2ab1b: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab1d: jne 0xf2ab64 */
  if (!zf) goto L_f2ab64;
L_f2ab1f: /* f2ab1f: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* f2ab25: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ab27: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2ab2a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f2ab2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ab2d: mov ecx, edx */
  ecx = edx;
/* f2ab2f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf2ab35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ab35: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ab38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab3b: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* f2ab41: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ab44: fst dword ptr [edx + esi + 0x34] */
  WF32((uint32_t)(edx + esi + 0x34u), ST0);
/* f2ab48: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ab4b: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ab4e: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2ab51: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* f2ab54: mov bl, byte ptr [eax + 0x28] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x28u))) & 0xffu);
/* f2ab57: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab59: je 0xf2ab64 */
  if (zf) goto L_f2ab64;
L_f2ab5b: /* f2ab5b: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* f2ab5e: fmul dword ptr [0xf31e7c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e7cu)));
L_f2ab64: /* f2ab64: cmp dword ptr [edx + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2ab68: jne 0xf2abad */
  if (!zf) goto L_f2abad;
L_f2ab6a: /* f2ab6a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab6d: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ab73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ab78: jp 0xf2ab86 */
  if (pf) goto L_f2ab86;
L_f2ab7a: /* f2ab7a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2ab7d: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2ab80: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2ab83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ab86: /* f2ab86: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2ab89: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2ab8d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2ab8f: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2ab92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ab94: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ab97: jne 0xf2aba5 */
  if (!zf) goto L_f2aba5;
L_f2ab99: /* f2ab99: mov dword ptr [edx + 0x40], 0 */
  W32((uint32_t)(edx + 0x40u), 0x0u);
/* f2aba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aba3: jmp 0xf2abad */
  goto L_f2abad;
L_f2aba5: /* f2aba5: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2aba8: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2abab: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2abad: /* f2abad: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2abb0: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* f2abb3: cmp dword ptr [edx + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2abb7: jne 0xf2ac32 */
  if (!zf) goto L_f2ac32;
L_f2abb9: /* f2abb9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abbc: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2abc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abc4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2abc7: jp 0xf2abd5 */
  if (pf) goto L_f2abd5;
L_f2abc9: /* f2abc9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f2abcc: fadd dword ptr [edx + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x3cu)));
/* f2abcf: fstp dword ptr [edx + 0x3c] */
  WF32((uint32_t)(edx + 0x3cu), ST0); FPOP();
/* f2abd2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2abd5: /* f2abd5: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2abd8: fld dword ptr [edx + esi + 0x3c] */
  { double v = F32((uint32_t)(edx + esi + 0x3cu)); FPUSH(v); }
/* f2abdc: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2abde: fcomp dword ptr [edx + 0x38] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x38u)));
  FPOP();
/* f2abe1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2abe3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abe6: jne 0xf2ac24 */
  if (!zf) goto L_f2ac24;
L_f2abe8: /* f2abe8: mov al, byte ptr [edx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x44u))) & 0xffu);
/* f2abeb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2abed: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2abef: je 0xf2ac0a */
  if (zf) goto L_f2ac0a;
L_f2abf1: /* f2abf1: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f2abf3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2abf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2abf6: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf2abf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2abf9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2abfc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2abff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac00: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac03: mov esi, ecx */
  esi = ecx;
/* f2ac05: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac0a: /* f2ac0a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2ac0e: call 0xf2116d */
  esp -= 4; W32(esp, 0xf2ac13u); SPILL(); f_f2116d(); if (g_unwind) return; RELOAD();
/* f2ac13: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2ac16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2ac1a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2ac1d: mov esi, ecx */
  esi = ecx;
/* f2ac1f: jmp 0xf2a780 */
  goto L_f2a780;
L_f2ac24: /* f2ac24: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* f2ac27: fdiv dword ptr [edx + 0x38] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x38u)));
/* f2ac2a: fsubr dword ptr [0xf3112c] */
  ST0 = (F32((uint32_t)(0xf3112cu))) - ST0;
/* f2ac30: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_f2ac32: /* f2ac32: fcom dword ptr [0xf31124] */
  fpu_com(ST0, F32((uint32_t)(0xf31124u)));
/* f2ac38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac3d: jp 0xf2ac48 */
  if (pf) goto L_f2ac48;
L_f2ac3f: /* f2ac3f: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* f2ac46: jmp 0xf2ac61 */
  goto L_f2ac61;
L_f2ac48: /* f2ac48: fcom dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
/* f2ac4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ac50: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ac53: jp 0xf2ac5a */
  if (pf) goto L_f2ac5a;
L_f2ac55: /* f2ac55: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* f2ac58: jmp 0xf2ac63 */
  goto L_f2ac63;
L_f2ac5a: /* f2ac5a: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
L_f2ac61: /* f2ac61: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f2ac63: /* f2ac63: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* f2ac66: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* f2ac69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ac6a: push 0x100a */
  { uint32_t v = 0x100au; esp -= 4; W32(esp, v); }
/* f2ac6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ac70: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2ac76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ac76: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ac79: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* f2ac7c: mov dl, byte ptr [eax + esi + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x44u))) & 0xffu);
/* f2ac80: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2ac82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2ac85: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ac88: jne 0xf2aee9 */
  if (!zf) goto L_f2aee9;
L_f2ac8e: /* f2ac8e: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* f2ac91: mov eax, dword ptr [ecx + 0xf4] */
  eax = R32((uint32_t)(ecx + 0xf4u));
/* f2ac97: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2ac9d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f2aca0: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2aca3: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2aca6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2aca8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* f2acaa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2acad: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2acb0: mov eax, dword ptr [ecx + esi + 8] */
  eax = R32((uint32_t)(ecx + esi + 0x8u));
/* f2acb4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2acb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2acb8: je 0xf2acc3 */
  if (zf) goto L_f2acc3;
L_f2acba: /* f2acba: movzx edx, byte ptr [eax + 0x2ca] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2cau)));
/* f2acc1: jmp 0xf2acc5 */
  goto L_f2acc5;
L_f2acc3: /* f2acc3: xor edx, edx */
  edx = 0;
L_f2acc5: /* f2acc5: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
/* f2accb: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* f2accd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2acce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2accf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2acd2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2acd5: mov edx, esp */
  edx = esp;
/* f2acd7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acd9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2acdc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acdf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2ace2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f2ace5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2ace8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f2acea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aced: mov edx, esp */
  edx = esp;
/* f2acef: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f2acf1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f2acf4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2acf7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f2acfa: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2acfd: mov ecx, edi */
  ecx = edi;
/* f2acff: call dword ptr [ebx + 0xf8] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf8u)); esp -= 4; W32(esp, 0xf2ad05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ad07: jne 0xf2ad91 */
  if (!zf) goto L_f2ad91;
L_f2ad0d: /* f2ad0d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad10: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2ad13: lea ecx, [edx + esi + 0xc] */
  ecx = (uint32_t)(edx + esi + 0xcu);
/* f2ad17: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* f2ad19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2ad1c: mov edx, esp */
  edx = esp;
/* f2ad1e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* f2ad20: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* f2ad23: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* f2ad26: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* f2ad29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* f2ad2c: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f2ad2f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* f2ad32: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* f2ad38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad39: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* f2ad3f: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* f2ad42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad43: call dword ptr [0xf3872c] */
  esp -= 4; W32(esp, 0xf2ad49u); SPILL(); f_6c9192(); if (g_unwind) return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */ RELOAD();
/* f2ad49: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad4c: movzx edx, byte ptr [ecx + 0x6c] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x6cu)));
/* f2ad50: movzx ecx, byte ptr [ebp - 0x70] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffff90u)));
/* f2ad54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f2ad56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ad57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ad58: mov ecx, edi */
  ecx = edi;
/* f2ad5a: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xf2ad60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2ad60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad63: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad66: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2ad69: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f2ad6c: fst dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0);
/* f2ad70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad73: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* f2ad79: fmul dword ptr [0xf31d9c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d9cu)));
/* f2ad7f: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2ad84: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2ad87: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* f2ad8a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ad8d: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* f2ad8f: jmp 0xf2ad9e */
  goto L_f2ad9e;
L_f2ad91: /* f2ad91: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ad94: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ad97: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2ad9a: fstp dword ptr [eax + esi + 0x20] */
  WF32((uint32_t)(eax + esi + 0x20u), ST0); FPOP();
L_f2ad9e: /* f2ad9e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2ada1: mov edx, dword ptr [ecx + 0xf4] */
  edx = R32((uint32_t)(ecx + 0xf4u));
/* f2ada7: mov eax, dword ptr [0xf38720] */
  eax = R32((uint32_t)(0xf38720u));
/* f2adac: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* f2adaf: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* f2adb2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2adb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2adb6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2adb9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2adbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2adbd: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adc0: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2adc3: fld dword ptr [edx + esi + 0x28] */
  { double v = F32((uint32_t)(edx + esi + 0x28u)); FPUSH(v); }
/* f2adc7: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* f2adca: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f2adcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2adcf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2add2: jnp 0xf2adf9 */
  if (!pf) goto L_f2adf9;
L_f2add4: /* f2add4: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* f2add7: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2adda: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* f2ade0: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* f2ade3: mov eax, dword ptr [eax + 0x13c] */
  eax = R32((uint32_t)(eax + 0x13cu));
/* f2ade9: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* f2adec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2adef: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2adf2: fstp dword ptr [edx + esi + 0x28] */
  WF32((uint32_t)(edx + esi + 0x28u), ST0); FPOP();
/* f2adf6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2adf9: /* f2adf9: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2adfc: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* f2adff: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2ae05: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* f2ae08: fsub qword ptr [ecx + 0x2c] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x2cu)));
/* f2ae0b: fcom qword ptr [0xf31e70] */
  fpu_com(ST0, F64((uint32_t)(0xf31e70u)));
/* f2ae11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae13: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2ae16: jp 0xf2ae28 */
  if (pf) goto L_f2ae28;
L_f2ae18: /* f2ae18: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae1b: fsub dword ptr [ecx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x24u)));
/* f2ae1e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f2ae20: fadd dword ptr [ecx + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x24u)));
/* f2ae23: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f2ae26: jmp 0xf2ae33 */
  goto L_f2ae33;
L_f2ae28: /* f2ae28: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2ae2b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae2d: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* f2ae30: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_f2ae33: /* f2ae33: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae36: fcomp dword ptr [0xf3112c] */
  fpu_com(ST0, F32((uint32_t)(0xf3112cu)));
  FPOP();
/* f2ae3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae3e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae41: je 0xf2ae4a */
  if (zf) goto L_f2ae4a;
L_f2ae43: /* f2ae43: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
L_f2ae4a: /* f2ae4a: mov ebx, dword ptr [0xf37124] */
  ebx = R32((uint32_t)(0xf37124u));
/* f2ae50: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2ae53: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae55: jne 0xf2ae70 */
  if (!zf) goto L_f2ae70;
L_f2ae57: /* f2ae57: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2ae5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2ae5e: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f2ae61: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2ae65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2ae68: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2ae6e: jmp 0xf2aedd */
  goto L_f2aedd;
L_f2ae70: /* f2ae70: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* f2ae73: fdiv dword ptr [esi + eax + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esi + eax + 0x1cu)));
/* f2ae77: fcom dword ptr [0xf31d1c] */
  fpu_com(ST0, F32((uint32_t)(0xf31d1cu)));
/* f2ae7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2ae7f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2ae82: je 0xf2ae8c */
  if (zf) goto L_f2ae8c;
L_f2ae84: /* f2ae84: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f2ae86: fld dword ptr [0xf31d1c] */
  { double v = F32((uint32_t)(0xf31d1cu)); FPUSH(v); }
L_f2ae8c: /* f2ae8c: fldln2  */
  FPUSH(0.693147180559945309417);
/* f2ae8e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f2ae90: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* f2ae92: fmul qword ptr [0xf31d10] */
  ST0 = ST0 * (F64((uint32_t)(0xf31d10u)));
/* f2ae98: call 0xf2bb70 */
  esp -= 4; W32(esp, 0xf2ae9du); SPILL(); f_f2bb70(); if (g_unwind) return; RELOAD();
/* f2ae9d: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* f2aea3: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* f2aea6: mov eax, dword ptr [esi + edx + 4] */
  eax = R32((uint32_t)(esi + edx + 0x4u));
/* f2aeaa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2aeac: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* f2aeb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aeb4: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f2aeb6: push 0xf3114c */
  { uint32_t v = 0xf3114cu; esp -= 4; W32(esp, v); }
/* f2aebb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2aebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aebd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f2aec0: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2aec6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2aec9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aeca: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aecd: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aed0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2aed3: mov eax, dword ptr [edx + esi + 4] */
  eax = R32((uint32_t)(edx + esi + 0x4u));
/* f2aed7: push 0x1020 */
  { uint32_t v = 0x1020u; esp -= 4; W32(esp, v); }
/* f2aedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_f2aedd: /* f2aedd: call dword ptr [0xf37130] */
  { uint32_t t = R32((uint32_t)(0xf37130u)); esp -= 4; W32(esp, 0xf2aee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2aee3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2aee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2aee9: /* f2aee9: mov edx, dword ptr [ecx + 0x7c] */
  edx = R32((uint32_t)(ecx + 0x7cu));
/* f2aeec: mov eax, dword ptr [edx + esi + 0x44] */
  eax = R32((uint32_t)(edx + esi + 0x44u));
/* f2aef0: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* f2aef3: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* f2aef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aef7: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* f2aefa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2aefb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2aefc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2aeff: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* f2af02: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* f2af04: mov eax, esp */
  eax = esp;
/* f2af06: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f2af08: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* f2af0b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f2af0e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f2af11: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2af14: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f2af17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2af18: call 0xf21037 */
  esp -= 4; W32(esp, 0xf2af1du); SPILL(); f_f21037(); if (g_unwind) return; RELOAD();
/* f2af1d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f2af20: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2af23: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* f2af26: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2af29: mov edx, dword ptr [eax + 0x7c] */
  edx = R32((uint32_t)(eax + 0x7cu));
/* f2af2c: test byte ptr [esi + edx + 0x44], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx + 0x44u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af31: jne 0xf2b034 */
  if (!zf) goto L_f2b034;
L_f2af37: /* f2af37: mov eax, edx */
  eax = edx;
/* f2af39: fld dword ptr [esi + eax + 0x14] */
  { double v = F32((uint32_t)(esi + eax + 0x14u)); FPUSH(v); }
/* f2af3d: lea eax, [esi + eax + 0xc] */
  eax = (uint32_t)(esi + eax + 0xcu);
/* f2af41: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2af4a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* f2af4d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* f2af55: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2af5b: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* f2af61: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* f2af67: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2af6d: call dword ptr [0xf38634] */
  esp -= 4; W32(esp, 0xf2af73u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* f2af73: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f2af76: fcomp dword ptr [0xf31d04] */
  fpu_com(ST0, F32((uint32_t)(0xf31d04u)));
  FPOP();
/* f2af7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2af7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2af81: jne 0xf2afbe */
  if (!zf) goto L_f2afbe;
L_f2af83: /* f2af83: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* f2af8d: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* f2af93: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* f2af9d: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* f2afa3: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* f2afad: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* f2afb3: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* f2afb6: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* f2afb9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f2afbc: jmp 0xf2afe2 */
  goto L_f2afe2;
L_f2afbe: /* f2afbe: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f2afc1: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afc7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* f2afca: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* f2afcd: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afd3: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* f2afd6: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f2afd9: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2afdf: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
L_f2afe2: /* f2afe2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* f2afe8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2afeb: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2aff1: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* f2aff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2aff8: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2affd: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* f2b003: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* f2b006: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* f2b00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b00b: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b011: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b014: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* f2b017: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b01a: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f2b01d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b01e: mov edx, dword ptr [ecx + esi + 4] */
  edx = R32((uint32_t)(ecx + esi + 0x4u));
/* f2b022: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b028: call dword ptr [0xf37080] */
  { uint32_t t = R32((uint32_t)(0xf37080u)); esp -= 4; W32(esp, 0xf2b02eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b02e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b031: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b034: /* f2b034: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f2b037: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f2b038: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f2b03b: mov esi, ecx */
  esi = ecx;
/* f2b03d: jmp 0xf2a780 */
  goto L_f2a780;
L_f2b042: /* f2b042: mov ebx, dword ptr [0xf38638] */
  ebx = R32((uint32_t)(0xf38638u));
/* f2b048: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* f2b04f: mov edi, 0xc */
  edi = 0xcu;
/* f2b054: lea esi, [ebp - 0xc4] */
  esi = (uint32_t)(ebp + 0xffffff3cu);
/* f2b05a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f2b060: /* f2b060: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* f2b063: js 0xf2b070 */
  if (sf) goto L_f2b070;
L_f2b065: /* f2b065: mov ecx, esi */
  ecx = esi;
/* f2b067: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf2b069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b069: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b06c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f2b06e: jmp 0xf2b060 */
  goto L_f2b060;
L_f2b070: /* f2b070: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* f2b073: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* f2b076: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* f2b079: fchs  */
  ST0 = -ST0;
/* f2b07b: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* f2b081: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* f2b084: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* f2b08a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* f2b08d: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* f2b093: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* f2b099: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* f2b09c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* f2b09f: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* f2b0a5: fchs  */
  ST0 = -ST0;
/* f2b0a7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* f2b0aa: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* f2b0b0: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* f2b0b6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* f2b0bc: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* f2b0c6: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* f2b0cc: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* f2b0cf: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* f2b0d9: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* f2b0df: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* f2b0e2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f2b0e5: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b0e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* f2b0f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* f2b0f8: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* f2b0fb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f2b0fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2b100: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f2b103: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2b106: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f2b109: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f2b10c: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b112: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f2b115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b116: push 0x1004 */
  { uint32_t v = 0x1004u; esp -= 4; W32(esp, v); }
/* f2b11b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f2b11e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f2b121: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b127: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f2b12a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f2b12d: fmul dword ptr [0xf31d0c] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d0cu)));
/* f2b133: fmul dword ptr [0xf31d08] */
  ST0 = ST0 * (F32((uint32_t)(0xf31d08u)));
/* f2b139: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f2b13c: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b142u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b142: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b145: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* f2b14b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b14c: push 0x100f */
  { uint32_t v = 0x100fu; esp -= 4; W32(esp, v); }
/* f2b151: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b157: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b15a: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* f2b15d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b15e: push 0x1006 */
  { uint32_t v = 0x1006u; esp -= 4; W32(esp, v); }
/* f2b163: call dword ptr [0xf37114] */
  { uint32_t t = R32((uint32_t)(0xf37114u)); esp -= 4; W32(esp, 0xf2b169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b169: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b16c: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* f2b16f: mov edx, dword ptr [eax + 0x394] */
  edx = R32((uint32_t)(eax + 0x394u));
/* f2b175: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b179: call 0xf210f5 */
  esp -= 4; W32(esp, 0xf2b17eu); SPILL(); f_f210f5(); if (g_unwind) return; RELOAD();
/* f2b17e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b181: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b184: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b18a: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b18d: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* f2b18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b191: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b194: jp 0xf2b1aa */
  if (pf) goto L_f2b1aa;
L_f2b196: /* f2b196: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b19c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b19e: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1a4: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1a7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_f2b1aa: /* f2b1aa: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f2b1ad: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* f2b1b3: lea esi, [ecx + 0x3c] */
  esi = (uint32_t)(ecx + 0x3cu);
/* f2b1b6: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* f2b1b8: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* f2b1be: fmul dword ptr [0xf31e68] */
  ST0 = ST0 * (F32((uint32_t)(0xf31e68u)));
/* f2b1c4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f2b1c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f2b1c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f2b1cb: jp 0xf2b207 */
  if (pf) goto L_f2b207;
L_f2b1cd: /* f2b1cd: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* f2b1d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f2b1d5: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* f2b1db: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* f2b1de: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1e1: mov eax, dword ptr [edx + 0xa4] */
  eax = R32((uint32_t)(edx + 0xa4u));
/* f2b1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b1e8: call dword ptr [0xf370b4] */
  { uint32_t t = R32((uint32_t)(0xf370b4u)); esp -= 4; W32(esp, 0xf2b1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b1ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b1f1: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* f2b1f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b1fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f2b1fb: call dword ptr [0xf370a8] */
  { uint32_t t = R32((uint32_t)(0xf370a8u)); esp -= 4; W32(esp, 0xf2b201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2b201: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f2b204: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f2b207: /* f2b207: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* f2b20d: mov ecx, dword ptr [0xf38720] */
  ecx = R32((uint32_t)(0xf38720u));
/* f2b213: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* f2b216: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* f2b219: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* f2b21b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f2b21d: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f2b220: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f2b222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f2b224: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f2b227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2b228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2b229: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2b230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2b231: mov esp, ebp */
  esp = ebp;
/* f2b233: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2b234: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f2b237(void) {
  LOAD_REGS();
L_f2b237: /* f2b237: mov eax, dword ptr [ebp - 0xf8] */
  eax = R32((uint32_t)(ebp + 0xffffff08u));
/* f2b23d: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2b242: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* f2b248: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2b249: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* f2b24f: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2b254u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2b254(); return;
}

void f_f2b254(void) {
  LOAD_REGS();
L_f2b254: /* f2b254: push 0xf31e48 */
  { uint32_t v = 0xf31e48u; esp -= 4; W32(esp, v); }
/* f2b259: push 0xf3612c */
  { uint32_t v = 0xf3612cu; esp -= 4; W32(esp, v); }
/* f2b25e: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf2b264u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f2b264: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b267: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2b269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2b26b: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2b270u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2b270(); return;
}

void f_f2b270(void) {
  LOAD_REGS();
L_f2b270: /* f2b270: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* f2b276: push 0xf329b4 */
  { uint32_t v = 0xf329b4u; esp -= 4; W32(esp, v); }
/* f2b27b: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* f2b281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2b282: mov dword ptr [ebp - 0xc8], edx */
  W32((uint32_t)(ebp + 0xffffff38u), edx);
/* f2b288: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2b28du); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
  SPILL(); f_f2b28d(); return;
}

void f_f2b28d(void) {
  LOAD_REGS();
L_f2b28d: /* f2b28d: push 0xf31e08 */
  { uint32_t v = 0xf31e08u; esp -= 4; W32(esp, v); }
/* f2b292: push 0xf36134 */
  { uint32_t v = 0xf36134u; esp -= 4; W32(esp, v); }
/* f2b297: call dword ptr [0xf3857c] */
  esp -= 4; W32(esp, 0xf2b29du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f2b29d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2b2a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2b2a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f2b2a4: call 0xf2bc40 */
  esp -= 4; W32(esp, 0xf2b2a9u); SPILL(); f_f2bc40(); if (g_unwind) return; RELOAD();
L_f2b2a9: guest_badaddr(0xf2b2a9); return;
}

void f_f2b75c(void) {
  LOAD_REGS();
L_f2b75c: /* f2b75c: jmp dword ptr [0xf3843c] */
  SPILL(); f_4e3fc1(); return; /* Core!??0FString@@QAE@ABV0@@Z */
}

void f_f2b762(void) {
  LOAD_REGS();
L_f2b762: /* f2b762: jmp dword ptr [0xf38440] */
  SPILL(); f_4e1d20(); return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */
}

void f_f2b768(void) {
  LOAD_REGS();
L_f2b768: /* f2b768: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2b76e(void) {
  LOAD_REGS();
L_f2b76e: /* f2b76e: jmp dword ptr [0xf38448] */
  SPILL(); f_4e2955(); return; /* Core!?Add@FArray@@QAEHHH@Z */
}

void f_f2b774(void) {
  LOAD_REGS();
L_f2b774: /* f2b774: jmp dword ptr [0xf3844c] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_f2b77a(void) {
  LOAD_REGS();
L_f2b77a: /* f2b77a: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2b780(void) {
  LOAD_REGS();
L_f2b780: /* f2b780: jmp dword ptr [0xf38458] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_f2b786(void) {
  LOAD_REGS();
L_f2b786: /* f2b786: jmp dword ptr [0xf3845c] */
  SPILL(); f_4e438b(); return; /* Core!?Remove@FArray@@QAEXHHH@Z */
}

void f_f2b78c(void) {
  LOAD_REGS();
L_f2b78c: /* f2b78c: jmp dword ptr [0xf38460] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_f2b792(void) {
  LOAD_REGS();
L_f2b792: /* f2b792: jmp dword ptr [0xf38464] */
  SPILL(); f_4e44fd(); return; /* Core!?Tick@USubsystem@@UAEXM@Z */
}

void f_f2b798(void) {
  LOAD_REGS();
L_f2b798: /* f2b798: jmp dword ptr [0xf38468] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_f2b79e(void) {
  LOAD_REGS();
L_f2b79e: /* f2b79e: jmp dword ptr [0xf3846c] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_f2b7a4(void) {
  LOAD_REGS();
L_f2b7a4: /* f2b7a4: jmp dword ptr [0xf38470] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_f2b7aa(void) {
  LOAD_REGS();
L_f2b7aa: /* f2b7aa: jmp dword ptr [0xf38474] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_f2b7b0(void) {
  LOAD_REGS();
L_f2b7b0: /* f2b7b0: jmp dword ptr [0xf38478] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_f2b7b6(void) {
  LOAD_REGS();
L_f2b7b6: /* f2b7b6: jmp dword ptr [0xf3847c] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_f2b7bc(void) {
  LOAD_REGS();
L_f2b7bc: /* f2b7bc: jmp dword ptr [0xf38480] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_f2b7c2(void) {
  LOAD_REGS();
L_f2b7c2: /* f2b7c2: jmp dword ptr [0xf38484] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_f2b7c8(void) {
  LOAD_REGS();
L_f2b7c8: /* f2b7c8: jmp dword ptr [0xf38488] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_f2b7ce(void) {
  LOAD_REGS();
L_f2b7ce: /* f2b7ce: jmp dword ptr [0xf3848c] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_f2b7d4(void) {
  LOAD_REGS();
L_f2b7d4: /* f2b7d4: jmp dword ptr [0xf38490] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_f2b7da(void) {
  LOAD_REGS();
L_f2b7da: /* f2b7da: jmp dword ptr [0xf38494] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_f2b7e0(void) {
  LOAD_REGS();
L_f2b7e0: /* f2b7e0: jmp dword ptr [0xf38498] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_f2b7e6(void) {
  LOAD_REGS();
L_f2b7e6: /* f2b7e6: jmp dword ptr [0xf3849c] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_f2b7ec(void) {
  LOAD_REGS();
L_f2b7ec: /* f2b7ec: jmp dword ptr [0xf384a0] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_f2b7f2(void) {
  LOAD_REGS();
L_f2b7f2: /* f2b7f2: jmp dword ptr [0xf384a4] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_f2b7f8(void) {
  LOAD_REGS();
L_f2b7f8: /* f2b7f8: jmp dword ptr [0xf384a8] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_f2b7fe(void) {
  LOAD_REGS();
L_f2b7fe: /* f2b7fe: jmp dword ptr [0xf384ac] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_f2b804(void) {
  LOAD_REGS();
L_f2b804: /* f2b804: jmp dword ptr [0xf384b0] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_f2b80a(void) {
  LOAD_REGS();
L_f2b80a: /* f2b80a: jmp dword ptr [0xf384b4] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_f2b810(void) {
  LOAD_REGS();
L_f2b810: /* f2b810: jmp dword ptr [0xf384b8] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_f2b816(void) {
  LOAD_REGS();
L_f2b816: /* f2b816: jmp dword ptr [0xf384bc] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_f2b81c(void) {
  LOAD_REGS();
L_f2b81c: /* f2b81c: jmp dword ptr [0xf384c0] */
  SPILL(); f_4e1c67(); return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */
}

void f_f2b822(void) {
  LOAD_REGS();
L_f2b822: /* f2b822: jmp dword ptr [0xf384c4] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_f2b828(void) {
  LOAD_REGS();
L_f2b828: /* f2b828: jmp dword ptr [0xf384c8] */
  SPILL(); f_4e40fc(); return; /* Core!?CopyCompleteValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_f2b82e(void) {
  LOAD_REGS();
L_f2b82e: /* f2b82e: jmp dword ptr [0xf384cc] */
  SPILL(); f_4e2527(); return; /* Core!?CopySingleValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_f2b834(void) {
  LOAD_REGS();
L_f2b834: /* f2b834: jmp dword ptr [0xf384d0] */
  SPILL(); f_4e10d2(); return; /* Core!?ImportText@UFloatProperty@@UBEPBGPBGPAEH@Z */
}

void f_f2b83a(void) {
  LOAD_REGS();
L_f2b83a: /* f2b83a: jmp dword ptr [0xf384d4] */
  SPILL(); f_4e3b2f(); return; /* Core!?ExportTextItem@UFloatProperty@@UBEXPAGPAE1H@Z */
}

void f_f2b840(void) {
  LOAD_REGS();
L_f2b840: /* f2b840: jmp dword ptr [0xf384d8] */
  SPILL(); f_4e359e(); return; /* Core!?NetSerializeItem@UFloatProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_f2b846(void) {
  LOAD_REGS();
L_f2b846: /* f2b846: jmp dword ptr [0xf384dc] */
  SPILL(); f_4e30d0(); return; /* Core!?SerializeItem@UFloatProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_f2b84c(void) {
  LOAD_REGS();
L_f2b84c: /* f2b84c: jmp dword ptr [0xf384e0] */
  SPILL(); f_4e235b(); return; /* Core!?ExportCppItem@UFloatProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_f2b852(void) {
  LOAD_REGS();
L_f2b852: /* f2b852: jmp dword ptr [0xf384e4] */
  SPILL(); f_4e2937(); return; /* Core!?Identical@UFloatProperty@@UBEHPBX0@Z */
}

void f_f2b858(void) {
  LOAD_REGS();
L_f2b858: /* f2b858: jmp dword ptr [0xf384e8] */
  SPILL(); f_4e33c3(); return; /* Core!?Link@UFloatProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_f2b85e(void) {
  LOAD_REGS();
L_f2b85e: /* f2b85e: jmp dword ptr [0xf384ec] */
  SPILL(); f_4e3ff3(); return; /* Core!?CopyCompleteValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_f2b864(void) {
  LOAD_REGS();
L_f2b864: /* f2b864: jmp dword ptr [0xf384f0] */
  SPILL(); f_4e2365(); return; /* Core!?CopySingleValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_f2b86a(void) {
  LOAD_REGS();
L_f2b86a: /* f2b86a: jmp dword ptr [0xf384f4] */
  SPILL(); f_4e1140(); return; /* Core!?ImportText@UIntProperty@@UBEPBGPBGPAEH@Z */
}

void f_f2b870(void) {
  LOAD_REGS();
L_f2b870: /* f2b870: jmp dword ptr [0xf384f8] */
  SPILL(); f_4e35f8(); return; /* Core!?ExportTextItem@UIntProperty@@UBEXPAGPAE1H@Z */
}

void f_f2b876(void) {
  LOAD_REGS();
L_f2b876: /* f2b876: jmp dword ptr [0xf384fc] */
  SPILL(); f_4e23d3(); return; /* Core!?NetSerializeItem@UIntProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_f2b87c(void) {
  LOAD_REGS();
L_f2b87c: /* f2b87c: jmp dword ptr [0xf38500] */
  SPILL(); f_4e31bb(); return; /* Core!?SerializeItem@UIntProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_f2b882(void) {
  LOAD_REGS();
L_f2b882: /* f2b882: jmp dword ptr [0xf38504] */
  SPILL(); f_4e439a(); return; /* Core!?ExportCppItem@UIntProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_f2b888(void) {
  LOAD_REGS();
L_f2b888: /* f2b888: jmp dword ptr [0xf38508] */
  SPILL(); f_4e118b(); return; /* Core!?Identical@UIntProperty@@UBEHPBX0@Z */
}

void f_f2b88e(void) {
  LOAD_REGS();
L_f2b88e: /* f2b88e: jmp dword ptr [0xf3850c] */
  SPILL(); f_4e3279(); return; /* Core!?Link@UIntProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_f2b894(void) {
  LOAD_REGS();
L_f2b894: /* f2b894: jmp dword ptr [0xf38510] */
  SPILL(); f_4e12fd(); return; /* Core!?Serialize@UProperty@@UAEXAAVFArchive@@@Z */
}

void f_f2b89a(void) {
  LOAD_REGS();
L_f2b89a: /* f2b89a: jmp dword ptr [0xf38514] */
  SPILL(); f_4e3508(); return; /* Core!?GetID@UProperty@@UBEEXZ */
}

void f_f2b8a0(void) {
  LOAD_REGS();
L_f2b8a0: /* f2b8a0: jmp dword ptr [0xf38518] */
  SPILL(); f_4e1e1f(); return; /* Core!?Port@UProperty@@UBEHXZ */
}

void f_f2b8a6(void) {
  LOAD_REGS();
L_f2b8a6: /* f2b8a6: jmp dword ptr [0xf3851c] */
  SPILL(); f_4e2fa4(); return; /* Core!?DestroyValue@UProperty@@UBEXPAX@Z */
}

void f_f2b8ac(void) {
  LOAD_REGS();
L_f2b8ac: /* f2b8ac: jmp dword ptr [0xf38520] */
  SPILL(); f_4e445d(); return; /* Core!?CopyCompleteValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_f2b8b2(void) {
  LOAD_REGS();
L_f2b8b2: /* f2b8b2: jmp dword ptr [0xf38524] */
  SPILL(); f_4e2b6c(); return; /* Core!?CopySingleValue@UBoolProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_f2b8b8(void) {
  LOAD_REGS();
L_f2b8b8: /* f2b8b8: jmp dword ptr [0xf38528] */
  SPILL(); f_4e1e88(); return; /* Core!?ExportText@UProperty@@UBEHHPAGPAE1H@Z */
}

void f_f2b8be(void) {
  LOAD_REGS();
L_f2b8be: /* f2b8be: jmp dword ptr [0xf3852c] */
  SPILL(); f_4e23ab(); return; /* Core!?ImportText@UBoolProperty@@UBEPBGPBGPAEH@Z */
}

void f_f2b8c4(void) {
  LOAD_REGS();
L_f2b8c4: /* f2b8c4: jmp dword ptr [0xf38530] */
  SPILL(); f_4e17ad(); return; /* Core!?ExportTextItem@UBoolProperty@@UBEXPAGPAE1H@Z */
}

void f_f2b8ca(void) {
  LOAD_REGS();
L_f2b8ca: /* f2b8ca: jmp dword ptr [0xf38534] */
  SPILL(); f_4e1802(); return; /* Core!?NetSerializeItem@UBoolProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_f2b8d0(void) {
  LOAD_REGS();
L_f2b8d0: /* f2b8d0: jmp dword ptr [0xf38538] */
  SPILL(); f_4e20f9(); return; /* Core!?SerializeItem@UBoolProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_f2b8d6(void) {
  LOAD_REGS();
L_f2b8d6: /* f2b8d6: jmp dword ptr [0xf3853c] */
  SPILL(); f_4e20cc(); return; /* Core!?ExportCppItem@UBoolProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_f2b8dc(void) {
  LOAD_REGS();
L_f2b8dc: /* f2b8dc: jmp dword ptr [0xf38540] */
  SPILL(); f_4e269e(); return; /* Core!?ExportCpp@UProperty@@UBEXAAVFOutputDevice@@HHHH@Z */
}

void f_f2b8e2(void) {
  LOAD_REGS();
L_f2b8e2: /* f2b8e2: jmp dword ptr [0xf38544] */
  SPILL(); f_4e3a35(); return; /* Core!?Identical@UBoolProperty@@UBEHPBX0@Z */
}

void f_f2b8e8(void) {
  LOAD_REGS();
L_f2b8e8: /* f2b8e8: jmp dword ptr [0xf38548] */
  SPILL(); f_4e40cf(); return; /* Core!?Link@UBoolProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_f2b8ee(void) {
  LOAD_REGS();
L_f2b8ee: /* f2b8ee: jmp dword ptr [0xf3854c] */
  SPILL(); f_4e34e5(); return; /* Core!?CleanupDestroyed@UProperty@@UBEXPAE@Z */
}

void f_f2b8f4(void) {
  LOAD_REGS();
L_f2b8f4: /* f2b8f4: jmp dword ptr [0xf38550] */
  SPILL(); f_4e1023(); return; /* Core!?GetPropertiesSize@UField@@UAEHXZ */
}

void f_f2b8fa(void) {
  LOAD_REGS();
L_f2b8fa: /* f2b8fa: jmp dword ptr [0xf38554] */
  SPILL(); f_4e1901(); return; /* Core!?GetOwnerClass@UField@@UAEPAVUClass@@XZ */
}

void f_f2b900(void) {
  LOAD_REGS();
L_f2b900: /* f2b900: jmp dword ptr [0xf38558] */
  SPILL(); f_4e2342(); return; /* Core!?Bind@UField@@UAEXXZ */
}

void f_f2b906(void) {
  LOAD_REGS();
L_f2b906: /* f2b906: jmp dword ptr [0xf3855c] */
  SPILL(); f_4e1ee7(); return; /* Core!?MergeBools@UField@@UAEHXZ */
}

void f_f2b90c(void) {
  LOAD_REGS();
L_f2b90c: /* f2b90c: jmp dword ptr [0xf38560] */
  SPILL(); f_4e36f7(); return; /* Core!?AddCppProperty@UField@@UAEXPAVUProperty@@@Z */
}

void f_f2b912(void) {
  LOAD_REGS();
L_f2b912: /* f2b912: jmp dword ptr [0xf38564] */
  SPILL(); f_4e15f0(); return; /* Core!?Register@UField@@UAEXXZ */
}

void f_f2b918(void) {
  LOAD_REGS();
L_f2b918: /* f2b918: jmp dword ptr [0xf38568] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_f2b91e(void) {
  LOAD_REGS();
L_f2b91e: /* f2b91e: jmp dword ptr [0xf3856c] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_f2b924(void) {
  LOAD_REGS();
L_f2b924: /* f2b924: jmp dword ptr [0xf38570] */
  SPILL(); f_4e1e51(); return; /* Core!?Serialize@UBoolProperty@@UAEXAAVFArchive@@@Z */
}

void f_f2b92a(void) {
  LOAD_REGS();
L_f2b92a: /* f2b92a: jmp dword ptr [0xf38574] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_f2b930(void) {
  LOAD_REGS();
L_f2b930: /* f2b930: jmp dword ptr [0xf38578] */
  SPILL(); f_4e3652(); return; /* Core!?PostLoad@UField@@UAEXXZ */
}

void f_f2b936(void) {
  LOAD_REGS();
L_f2b936: /* f2b936: jmp dword ptr [0xf3857c] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_f2b93c(void) {
  LOAD_REGS();
L_f2b93c: /* f2b93c: jmp dword ptr [0xf38580] */
  SPILL(); f_4e24be(); return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_f2b942(void) {
  LOAD_REGS();
L_f2b942: /* f2b942: jmp dword ptr [0xf38588] */
  SPILL(); f_4e29d7(); return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_f2b948(void) {
  LOAD_REGS();
L_f2b948: /* f2b948: jmp dword ptr [0xf38590] */
  SPILL(); f_4e4278(); return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_f2b94e(void) {
  LOAD_REGS();
L_f2b94e: /* f2b94e: jmp dword ptr [0xf38598] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_f2b954(void) {
  LOAD_REGS();
L_f2b954: /* f2b954: jmp dword ptr [0xf3859c] */
  SPILL(); f_4e30df(); return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */
}

void f_f2b95a(void) {
  LOAD_REGS();
L_f2b95a: /* f2b95a: jmp dword ptr [0xf385a4] */
  SPILL(); f_4e1ef1(); return; /* Core!?appFreeDllHandle@@YAXPAX@Z */
}

void f_f2b960(void) {
  LOAD_REGS();
L_f2b960: /* f2b960: jmp dword ptr [0xf385a8] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_f2b966(void) {
  LOAD_REGS();
L_f2b966: /* f2b966: jmp dword ptr [0xf385b0] */
  SPILL(); f_4e150a(); return; /* Core!?appMemset@@YAXPAXHH@Z */
}

void f_f2b96c(void) {
  LOAD_REGS();
L_f2b96c: /* f2b96c: jmp dword ptr [0xf385b4] */
  SPILL(); f_4e2b76(); return; /* Core!?appStrfind@@YAPBGPBG0@Z */
}

void f_f2b972(void) {
  LOAD_REGS();
L_f2b972: /* f2b972: jmp dword ptr [0xf385b8] */
  SPILL(); f_4e161d(); return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */
}

void f_f2b978(void) {
  LOAD_REGS();
L_f2b978: /* f2b978: jmp dword ptr [0xf385bc] */
  SPILL(); f_4e2176(); return; /* Core!?appGetDllExport@@YAPAXPAXPBG@Z */
}

void f_f2b97e(void) {
  LOAD_REGS();
L_f2b97e: /* f2b97e: jmp dword ptr [0xf385c0] */
  SPILL(); f_4e2fd1(); return; /* Core!??1UIntProperty@@UAE@XZ */
}

void f_f2b984(void) {
  LOAD_REGS();
L_f2b984: /* f2b984: jmp dword ptr [0xf385c4] */
  SPILL(); f_4e1988(); return; /* Core!??1UBoolProperty@@UAE@XZ */
}

void f_f2b98a(void) {
  LOAD_REGS();
L_f2b98a: /* f2b98a: jmp dword ptr [0xf385c8] */
  SPILL(); f_4e38a5(); return; /* Core!??1UFloatProperty@@UAE@XZ */
}

void f_f2b990(void) {
  LOAD_REGS();
L_f2b990: /* f2b990: jmp dword ptr [0xf385cc] */
  SPILL(); f_4e33b4(); return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */
}

void f_f2b996(void) {
  LOAD_REGS();
L_f2b996: /* f2b996: jmp dword ptr [0xf385d0] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
}

void f_f2b99c(void) {
  LOAD_REGS();
L_f2b99c: /* f2b99c: jmp dword ptr [0xf385d4] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_f2b9a2(void) {
  LOAD_REGS();
L_f2b9a2: /* f2b9a2: jmp dword ptr [0xf385d8] */
  SPILL(); f_4e280b(); return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */
}

void f_f2b9a8(void) {
  LOAD_REGS();
L_f2b9a8: /* f2b9a8: jmp dword ptr [0xf385dc] */
  SPILL(); f_4e4282(); return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */
}

void f_f2b9ae(void) {
  LOAD_REGS();
L_f2b9ae: /* f2b9ae: jmp dword ptr [0xf385e0] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_f2b9b4(void) {
  LOAD_REGS();
L_f2b9b4: /* f2b9b4: jmp dword ptr [0xf385e4] */
  SPILL(); f_4e3e5e(); return; /* Core!??4FString@@QAEAAV0@PBG@Z */
}

void f_f2b9ba(void) {
  LOAD_REGS();
L_f2b9ba: /* f2b9ba: jmp dword ptr [0xf385e8] */
  SPILL(); f_4e3530(); return; /* Core!??9FString@@QBEHPBG@Z */
}

void f_f2b9c0(void) {
  LOAD_REGS();
L_f2b9c0: /* f2b9c0: jmp dword ptr [0xf385ec] */
  SPILL(); f_4e3f6c(); return; /* Core!?DestroyStream@FFileStream@@QAEXHH@Z */
}

void f_f2b9c6(void) {
  LOAD_REGS();
L_f2b9c6: /* f2b9c6: jmp dword ptr [0xf385f4] */
  SPILL(); f_4e3cd3(); return; /* Core!?appSqrt@@YANN@Z */
}

void f_f2b9cc(void) {
  LOAD_REGS();
L_f2b9cc: /* f2b9cc: jmp dword ptr [0xf385f8] */
  SPILL(); f_4e1573(); return; /* Core!?RequestChunks@FFileStream@@QAEXHHPAX@Z */
}

void f_f2b9d2(void) {
  LOAD_REGS();
L_f2b9d2: /* f2b9d2: jmp dword ptr [0xf385fc] */
  SPILL(); f_4e2cde(); return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */
}

void f_f2b9d8(void) {
  LOAD_REGS();
L_f2b9d8: /* f2b9d8: jmp dword ptr [0xf38600] */
  SPILL(); f_4e1ef6(); return; /* Core!?CreateStream@FFileStream@@QAEHPBGHHPAXW4EFileStreamType@@1@Z */
}

void f_f2b9de(void) {
  LOAD_REGS();
L_f2b9de: /* f2b9de: jmp dword ptr [0xf38604] */
  SPILL(); f_4e1ba9(); return; /* Core!?IsValid@UObject@@QAEHXZ */
}

void f_f2b9e4(void) {
  LOAD_REGS();
L_f2b9e4: /* f2b9e4: jmp dword ptr [0xf3860c] */
  SPILL(); f_4e3d69(); return; /* Core!?appAtof@@YAMPBG@Z */
}

void f_f2b9ea(void) {
  LOAD_REGS();
L_f2b9ea: /* f2b9ea: jmp dword ptr [0xf38610] */
  SPILL(); f_4e4192(); return; /* Core!?appStrcmp@@YAHPBG0@Z */
}

void f_f2b9f0(void) {
  LOAD_REGS();
L_f2b9f0: /* f2b9f0: jmp dword ptr [0xf38614] */
  SPILL(); f_4e32ec(); return; /* Core!?ParseCommand@@YAHPAPBGPBG@Z */
}

void f_f2b9f6(void) {
  LOAD_REGS();
L_f2b9f6: /* f2b9f6: jmp dword ptr [0xf3861c] */
  SPILL(); f_4e2d01(); return; /* Core!??0FString@@QAE@XZ */
}

void f_f2b9fc(void) {
  LOAD_REGS();
L_f2b9fc: /* f2b9fc: jmp dword ptr [0xf38624] */
  SPILL(); f_4e245a(); return; /* Core!??0UObject@@QAE@XZ */
}

void f_f2ba02(void) {
  LOAD_REGS();
L_f2ba02: /* f2ba02: jmp dword ptr [0xf38628] */
  SPILL(); f_4e15b9(); return; /* Core!?appGetDllHandle@@YAPAXPBG@Z */
}

void f_f2ba08(void) {
  LOAD_REGS();
L_f2ba08: /* f2ba08: jmp dword ptr [0xf38630] */
  SPILL(); f_4e3b43(); return; /* Core!??8FString@@QBEHABV0@@Z */
}

void f_f2ba0e(void) {
  LOAD_REGS();
L_f2ba0e: /* f2ba0e: jmp dword ptr [0xf38634] */
  SPILL(); f_4e10c8(); return; /* Core!?Size@FVector@@QBEMXZ */
}

void f_f2ba14(void) {
  LOAD_REGS();
L_f2ba14: /* f2ba14: jmp dword ptr [0xf38638] */
  SPILL(); f_4e35b2(); return; /* Core!??0FVector@@QAE@XZ */
}

void f_f2ba1a(void) {
  LOAD_REGS();
L_f2ba1a: /* f2ba1a: jmp dword ptr [0xf38640] */
  SPILL(); f_4e28e2(); return; /* Core!?QueryStream@FFileStream@@QAEHHAAH@Z */
}

void f_f2ba20(void) {
  LOAD_REGS();
L_f2ba20: /* f2ba20: jmp dword ptr [0xf38644] */
  SPILL(); f_4e10b9(); return; /* Core!?Normalize@FVector@@QAEHXZ */
}

void f_f2ba26(void) {
  LOAD_REGS();
L_f2ba26: /* f2ba26: jmp dword ptr [0xf38648] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_f2ba2c(void) {
  LOAD_REGS();
L_f2ba2c: /* f2ba2c: jmp dword ptr [0xf3864c] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_f2ba32(void) {
  LOAD_REGS();
L_f2ba32: /* f2ba32: jmp dword ptr [0xf38654] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f2ba38(void) {
  LOAD_REGS();
L_f2ba38: /* f2ba38: jmp dword ptr [0xf386f0] */
  SPILL(); f_6ccce3(); return; /* Engine!?CleanUp@UAudioSubsystem@@UAEXXZ */
}

void f_f2ba3e(void) {
  LOAD_REGS();
L_f2ba3e: /* f2ba3e: jmp dword ptr [0xf386f4] */
  SPILL(); f_6c5e89(); return; /* Engine!??1UAudioSubsystem@@UAE@XZ */
}

void f_f2ba44(void) {
  LOAD_REGS();
L_f2ba44: /* f2ba44: jmp dword ptr [0xf386f8] */
  SPILL(); f_6c639d(); return; /* Engine!??0UAudioSubsystem@@QAE@ABV0@@Z */
}

void f_f2ba4a(void) {
  LOAD_REGS();
L_f2ba4a: /* f2ba4a: jmp dword ptr [0xf38700] */
  SPILL(); f_6c837d(); return; /* Engine!?PS2Convert@USound@@UAEXXZ */
}

void f_f2ba50(void) {
  LOAD_REGS();
L_f2ba50: /* f2ba50: jmp dword ptr [0xf38704] */
  SPILL(); f_6c513c(); return; /* Engine!?GetDuration@USound@@UAEMXZ */
}

void f_f2ba56(void) {
  LOAD_REGS();
L_f2ba56: /* f2ba56: jmp dword ptr [0xf38708] */
  SPILL(); f_6c2563(); return; /* Engine!?Serialize@USound@@UAEXAAVFArchive@@@Z */
}

void f_f2ba5c(void) {
  LOAD_REGS();
L_f2ba5c: /* f2ba5c: jmp dword ptr [0xf3870c] */
  SPILL(); f_6cc149(); return; /* Engine!?Destroy@USound@@UAEXXZ */
}

void f_f2ba62(void) {
  LOAD_REGS();
L_f2ba62: /* f2ba62: jmp dword ptr [0xf38710] */
  SPILL(); f_6c42be(); return; /* Engine!?PostLoad@USound@@UAEXXZ */
}

void f_f2ba68(void) {
  LOAD_REGS();
L_f2ba68: /* f2ba68: jmp dword ptr [0xf38714] */
  SPILL(); f_6c1aa0(); return; /* Engine!??0USound@@QAE@PBGH@Z */
}

void f_f2ba6e(void) {
  LOAD_REGS();
L_f2ba6e: /* f2ba6e: jmp dword ptr [0xf3871c] */
  SPILL(); f_6c345e(); return; /* Engine!??1USound@@UAE@XZ */
}

void f_f2ba74(void) {
  LOAD_REGS();
L_f2ba74: /* f2ba74: jmp dword ptr [0xf38724] */
  SPILL(); f_6cae34(); return; /* Engine!?RegisterStats@FStats@@QAEHW4EStatsType@@W4EStatsDataType@@VFString@@2W4EStatsUnit@@@Z */
}

void f_f2ba7a(void) {
  LOAD_REGS();
L_f2ba7a: /* f2ba7a: jmp dword ptr [0xf38728] */
  SPILL(); f_6cb55a(); return; /* Engine!?ReadWaveInfo@FWaveModInfo@@QAEHAAV?$TArray@E@@@Z */
}

void f_f2ba80(void) {
  LOAD_REGS();
L_f2ba80: /* f2ba80: jmp dword ptr [0xf3872c] */
  SPILL(); f_6c9192(); return; /* Engine!?PointRegion@UModel@@QBE?AUFPointRegion@@PAVAZoneInfo@@VFVector@@@Z */
}

void f_f2ba86(void) {
  LOAD_REGS();
L_f2ba86: /* f2ba86: jmp dword ptr [0xf387d4] */
  SPILL(); f_1012070(); return; /* vorbisfile!ov_time_total */
}

void f_f2ba8c(void) {
  LOAD_REGS();
L_f2ba8c: /* f2ba8c: jmp dword ptr [0xf387d0] */
  SPILL(); f_10131f0(); return; /* vorbisfile!ov_info */
}

void f_f2ba92(void) {
  LOAD_REGS();
L_f2ba92: /* f2ba92: jmp dword ptr [0xf387cc] */
  SPILL(); f_1011ff0(); return; /* vorbisfile!ov_pcm_total */
}

void f_f2baa0(void) {
  LOAD_REGS();
L_f2baa0: /* f2baa0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f2baa2: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2baa8: je 0xf2baad */
  if (zf) goto L_f2baad;
L_f2baaa: /* f2baaa: xor eax, eax */
  eax = 0;
/* f2baac: ret  */
  esp += 4; SPILL(); return;
L_f2baad: /* f2baad: jmp 0xf2bdda */
  SPILL(); f_f2bdda(); return;
}

void f_f2bab2(void) {
  LOAD_REGS();
L_f2bab2: /* f2bab2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* f2bab4: push 0xf31f08 */
  { uint32_t v = 0xf31f08u; esp -= 4; W32(esp, v); }
/* f2bab9: call 0xf2bde0 */
  esp -= 4; W32(esp, 0xf2babeu); SPILL(); f_f2bde0(); if (g_unwind) return; RELOAD();
/* f2babe: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_f2bac2: /* f2bac2: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* f2bac5: js 0xf2bad5 */
  if (sf) goto L_f2bad5;
L_f2bac7: /* f2bac7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f2baca: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f2bacd: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f2bad0: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xf2bad3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2bad3: jmp 0xf2bac2 */
  goto L_f2bac2;
L_f2bad5: /* f2bad5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2bad9: call 0xf2be1b */
  esp -= 4; W32(esp, 0xf2badeu); SPILL(); f_f2be1b(); if (g_unwind) return; RELOAD();
/* f2bade: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f2bae1(void) {
  LOAD_REGS();
L_f2bae1: /* f2bae1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f2bae4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f2bae7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2baea: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f2baec: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f2baef: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f2baf2: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2baf8: je 0xf2bb0a */
  if (zf) goto L_f2bb0a;
L_f2bafa: /* f2bafa: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* f2bb01: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f2bb04: ret  */
  esp += 4; SPILL(); return;
L_f2bb0a: /* f2bb0a: call 0xf2bdda */
  esp -= 4; W32(esp, 0xf2bb0fu); SPILL(); f_f2bdda(); if (g_unwind) return; RELOAD();
L_f2bb0f: guest_badaddr(0xf2bb0f); return;
}

void f_f2bb05(void) {
  LOAD_REGS();
  goto L_f2bb05;
L_f2bad5: /* f2bad5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2bad9: call 0xf2be1b */
  esp -= 4; W32(esp, 0xf2badeu); SPILL(); f_f2be1b(); if (g_unwind) return; RELOAD();
/* f2bade: ret 0x10 */
  esp += 20; SPILL(); return;
L_f2bb05: /* f2bb05: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2bb08: jmp 0xf2bad5 */
  goto L_f2bad5;
}

void f_f2bb10(void) {
  LOAD_REGS();
L_f2bb10: /* f2bb10: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f2bb12: push 0xf31f18 */
  { uint32_t v = 0xf31f18u; esp -= 4; W32(esp, v); }
/* f2bb17: call 0xf2bde0 */
  esp -= 4; W32(esp, 0xf2bb1cu); SPILL(); f_f2bde0(); if (g_unwind) return; RELOAD();
/* f2bb1c: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f2bb20: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f2bb23: mov eax, esi */
  eax = esi;
/* f2bb25: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* f2bb29: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f2bb2c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_f2bb30: /* f2bb30: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* f2bb33: js 0xf2bb40 */
  if (sf) goto L_f2bb40;
L_f2bb35: /* f2bb35: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f2bb38: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f2bb3b: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xf2bb3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2bb3e: jmp 0xf2bb30 */
  goto L_f2bb30;
L_f2bb40: /* f2bb40: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* f2bb47: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2bb4b: call 0xf2bb58 */
  esp -= 4; W32(esp, 0xf2bb50u); SPILL(); f_f2bb58(); if (g_unwind) return; RELOAD();
/* f2bb50: call 0xf2be1b */
  esp -= 4; W32(esp, 0xf2bb55u); SPILL(); f_f2be1b(); if (g_unwind) return; RELOAD();
/* f2bb55: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f2bb58(void) {
  LOAD_REGS();
L_f2bb58: /* f2bb58: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bb5c: jne 0xf2bb6f */
  if (!zf) goto L_f2bb6f;
L_f2bb5e: /* f2bb5e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* f2bb61: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* f2bb64: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* f2bb67: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* f2bb6a: call 0xf2bab2 */
  esp -= 4; W32(esp, 0xf2bb6fu); SPILL(); f_f2bab2(); if (g_unwind) return; RELOAD();
L_f2bb6f: /* f2bb6f: ret  */
  esp += 4; SPILL(); return;
}

void f_f2bb70(void) {
  LOAD_REGS();
L_f2bb70: /* f2bb70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f2bb71: mov ebp, esp */
  ebp = esp;
/* f2bb73: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2bb76: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* f2bb79: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f2bb7b: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* f2bb7f: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* f2bb83: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* f2bb87: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f2bb8b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f2bb8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bb91: je 0xf2bbcf */
  if (zf) goto L_f2bbcf;
L_f2bb93: /* f2bb93: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* f2bb95: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* f2bb97: jns 0xf2bbb7 */
  if (!sf) goto L_f2bbb7;
L_f2bb99: /* f2bb99: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2bb9c: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* f2bb9f: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f2bba5: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* f2bbab: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* f2bbae: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f2bbb2: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* f2bbb5: jmp 0xf2bbe3 */
  goto L_f2bbe3;
L_f2bbb7: /* f2bbb7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f2bbba: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* f2bbbd: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* f2bbc3: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* f2bbc6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f2bbca: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* f2bbcd: jmp 0xf2bbe3 */
  goto L_f2bbe3;
L_f2bbcf: /* f2bbcf: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f2bbd3: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bbd9: jne 0xf2bb93 */
  if (!zf) goto L_f2bb93;
L_f2bbdb: /* f2bbdb: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* f2bbdf: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_f2bbe3: /* f2bbe3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* f2bbe4: ret  */
  esp += 4; SPILL(); return;
}

void f_f2bbe5(void) {
  LOAD_REGS();
L_f2bbe5: /* f2bbe5: mov eax, ecx */
  eax = ecx;
/* f2bbe7: mov dword ptr [eax], 0xf31f28 */
  W32((uint32_t)(eax), 0xf31f28u);
/* f2bbed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f2bbf0(void) {
  LOAD_REGS();
L_f2bbf0: /* f2bbf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bbf1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f2bbf5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2bbf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bbf9: mov esi, ecx */
  esi = ecx;
/* f2bbfb: je 0xf2bc21 */
  if (zf) goto L_f2bc21;
L_f2bbfd: /* f2bbfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bbfe: push 0xf2be2c */
  { uint32_t v = 0xf2be2cu; esp -= 4; W32(esp, v); }
/* f2bc03: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f2bc06: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* f2bc08: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f2bc0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bc0b: call 0xf2bb10 */
  esp -= 4; W32(esp, 0xf2bc10u); SPILL(); f_f2bb10(); if (g_unwind) return; RELOAD();
/* f2bc10: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2bc13: je 0xf2bc1c */
  if (zf) goto L_f2bc1c;
L_f2bc15: /* f2bc15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bc16: call 0xf210f0 */
  esp -= 4; W32(esp, 0xf2bc1bu); SPILL(); f_f210f0(); if (g_unwind) return; RELOAD();
/* f2bc1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f2bc1c: /* f2bc1c: mov eax, edi */
  eax = edi;
/* f2bc1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2bc1f: jmp 0xf2bc36 */
  goto L_f2bc36;
L_f2bc21: /* f2bc21: mov ecx, esi */
  ecx = esi;
/* f2bc23: call 0xf2be2c */
  esp -= 4; W32(esp, 0xf2bc28u); SPILL(); f_f2be2c(); if (g_unwind) return; RELOAD();
/* f2bc28: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f2bc2b: je 0xf2bc34 */
  if (zf) goto L_f2bc34;
L_f2bc2d: /* f2bc2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bc2e: call 0xf210f0 */
  esp -= 4; W32(esp, 0xf2bc33u); SPILL(); f_f210f0(); if (g_unwind) return; RELOAD();
/* f2bc33: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f2bc34: /* f2bc34: mov eax, esi */
  eax = esi;
L_f2bc36: /* f2bc36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2bc37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2bc38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f2bc3b(void) {
  LOAD_REGS();
L_f2bc3b: /* f2bc3b: mov eax, ecx */
  eax = ecx;
/* f2bc3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f2bc40(void) {
  LOAD_REGS();
L_f2bc40: /* f2bc40: jmp dword ptr [0xf3877c] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_f2bc46(void) {
  LOAD_REGS();
L_f2bc46: /* f2bc46: cmp dword ptr [0xf3785c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf3785cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bc4d: jne 0xf2bc55 */
  if (!zf) goto L_f2bc55;
L_f2bc4f: /* f2bc4f: jmp dword ptr [0xf3878c] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_f2bc55: /* f2bc55: push 0xf3784c */
  { uint32_t v = 0xf3784cu; esp -= 4; W32(esp, v); }
/* f2bc5a: push 0xf3785c */
  { uint32_t v = 0xf3785cu; esp -= 4; W32(esp, v); }
/* f2bc5f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* f2bc63: call 0xf2be32 */
  esp -= 4; W32(esp, 0xf2bc68u); SPILL(); f_f2be32(); if (g_unwind) return; RELOAD();
/* f2bc68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2bc6b: ret  */
  esp += 4; SPILL(); return;
}

void f_f2bc6c(void) {
  LOAD_REGS();
L_f2bc6c: /* f2bc6c: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* f2bc70: call 0xf2bc46 */
  esp -= 4; W32(esp, 0xf2bc75u); SPILL(); f_f2bc46(); if (g_unwind) return; RELOAD();
/* f2bc75: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* f2bc77: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* f2bc79: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* f2bc7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f2bc7c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f2bc7d: ret  */
  esp += 4; SPILL(); return;
}

void f_f2bc7e(void) {
  LOAD_REGS();
L_f2bc7e: /* f2bc7e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f2bc82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bc84: jne 0xf2bc94 */
  if (!zf) goto L_f2bc94;
L_f2bc86: /* f2bc86: cmp dword ptr [0xf37830], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf37830u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f2bc8c: jle 0xf2bcbc */
  if ((zf || sf != of)) goto L_f2bcbc;
L_f2bc8e: /* f2bc8e: dec dword ptr [0xf37830] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf37830u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xf37830u), r);
  }
L_f2bc94: /* f2bc94: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bc97: mov ecx, dword ptr [0xf38770] */
  ecx = R32((uint32_t)(0xf38770u));
/* f2bc9d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f2bc9f: mov dword ptr [0xf37834], ecx */
  W32((uint32_t)(0xf37834u), ecx);
/* f2bca5: jne 0xf2bcf6 */
  if (!zf) goto L_f2bcf6;
L_f2bca7: /* f2bca7: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* f2bcac: call dword ptr [0xf38774] */
  esp -= 4; W32(esp, 0xf2bcb2u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* f2bcb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bcb4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f2bcb5: mov dword ptr [0xf3785c], eax */
  W32((uint32_t)(0xf3785cu), eax);
/* f2bcba: jne 0xf2bcc0 */
  if (!zf) goto L_f2bcc0;
L_f2bcbc: /* f2bcbc: xor eax, eax */
  eax = 0;
/* f2bcbe: jmp 0xf2bd39 */
  goto L_f2bd39;
L_f2bcc0: /* f2bcc0: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* f2bcc3: mov eax, dword ptr [0xf3785c] */
  eax = R32((uint32_t)(0xf3785cu));
/* f2bcc8: mov dword ptr [0xf3784c], eax */
  W32((uint32_t)(0xf3784cu), eax);
/* f2bccd: call 0xf2be44 */
  esp -= 4; W32(esp, 0xf2bcd2u); SPILL(); f_f2be44(); if (g_unwind) return; RELOAD();
/* f2bcd2: push 0xf2be88 */
  { uint32_t v = 0xf2be88u; esp -= 4; W32(esp, v); }
/* f2bcd7: call 0xf2bc6c */
  esp -= 4; W32(esp, 0xf2bcdcu); SPILL(); f_f2bc6c(); if (g_unwind) return; RELOAD();
/* f2bcdc: mov dword ptr [esp], 0xf35210 */
  W32((uint32_t)(esp), 0xf35210u);
/* f2bce3: push 0xf35000 */
  { uint32_t v = 0xf35000u; esp -= 4; W32(esp, v); }
/* f2bce8: call 0xf2be3e */
  esp -= 4; W32(esp, 0xf2bcedu); SPILL(); f_f2be3e(); if (g_unwind) return; RELOAD();
/* f2bced: inc dword ptr [0xf37830] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf37830u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xf37830u), r);
  }
/* f2bcf3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f2bcf4: jmp 0xf2bd35 */
  goto L_f2bd35;
L_f2bcf6: /* f2bcf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bcf8: jne 0xf2bd36 */
  if (!zf) goto L_f2bd36;
L_f2bcfa: /* f2bcfa: mov eax, dword ptr [0xf3785c] */
  eax = R32((uint32_t)(0xf3785cu));
/* f2bcff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bd01: je 0xf2bd36 */
  if (zf) goto L_f2bd36;
L_f2bd03: /* f2bd03: jmp 0xf2bd18 */
  goto L_f2bd18;
L_f2bd05: /* f2bd05: mov ecx, dword ptr [0xf3784c] */
  ecx = R32((uint32_t)(0xf3784cu));
/* f2bd0b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f2bd0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bd0f: je 0xf2bd18 */
  if (zf) goto L_f2bd18;
L_f2bd11: /* f2bd11: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xf2bd13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2bd13: mov eax, dword ptr [0xf3785c] */
  eax = R32((uint32_t)(0xf3785cu));
L_f2bd18: /* f2bd18: sub dword ptr [0xf3784c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf3784cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xf3784cu), r);
  }
/* f2bd1f: cmp dword ptr [0xf3784c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf3784cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f2bd25: jae 0xf2bd05 */
  if (!cf) goto L_f2bd05;
L_f2bd27: /* f2bd27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2bd28: call dword ptr [0xf38790] */
  esp -= 4; W32(esp, 0xf2bd2eu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* f2bd2e: and dword ptr [0xf3785c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf3785cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xf3785cu), r);
  }
L_f2bd35: /* f2bd35: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f2bd36: /* f2bd36: xor eax, eax */
  eax = 0;
/* f2bd38: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f2bd39: /* f2bd39: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f2bd3c(void) {
  LOAD_REGS();
L_f2bd3c: /* f2bd3c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f2bd3d: mov ebp, esp */
  ebp = esp;
/* f2bd3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bd40: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f2bd43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bd44: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f2bd47: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bd49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bd4a: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* f2bd4d: jne 0xf2bd58 */
  if (!zf) goto L_f2bd58;
L_f2bd4f: /* f2bd4f: cmp dword ptr [0xf37830], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xf37830u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bd56: jmp 0xf2bd7e */
  goto L_f2bd7e;
L_f2bd58: /* f2bd58: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bd5b: je 0xf2bd62 */
  if (zf) goto L_f2bd62;
L_f2bd5d: /* f2bd5d: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bd60: jne 0xf2bd84 */
  if (!zf) goto L_f2bd84;
L_f2bd62: /* f2bd62: mov eax, dword ptr [0xf37840] */
  eax = R32((uint32_t)(0xf37840u));
/* f2bd67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bd69: je 0xf2bd74 */
  if (zf) goto L_f2bd74;
L_f2bd6b: /* f2bd6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bd6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bd6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bd6e: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf2bd70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2bd70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bd72: je 0xf2bd80 */
  if (zf) goto L_f2bd80;
L_f2bd74: /* f2bd74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bd75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bd76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bd77: call 0xf2bc7e */
  esp -= 4; W32(esp, 0xf2bd7cu); SPILL(); f_f2bc7e(); if (g_unwind) return; RELOAD();
/* f2bd7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_f2bd7e: /* f2bd7e: jne 0xf2bd84 */
  if (!zf) goto L_f2bd84;
L_f2bd80: /* f2bd80: xor eax, eax */
  eax = 0;
/* f2bd82: jmp 0xf2bdd2 */
  goto L_f2bdd2;
L_f2bd84: /* f2bd84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bd85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bd86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bd87: call 0xf210aa */
  esp -= 4; W32(esp, 0xf2bd8cu); SPILL(); f_f210aa(); if (g_unwind) return; RELOAD();
/* f2bd8c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bd8f: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f2bd92: jne 0xf2bda0 */
  if (!zf) goto L_f2bda0;
L_f2bd94: /* f2bd94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bd96: jne 0xf2bdcf */
  if (!zf) goto L_f2bdcf;
L_f2bd98: /* f2bd98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bd99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2bd9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bd9b: call 0xf2bc7e */
  esp -= 4; W32(esp, 0xf2bda0u); SPILL(); f_f2bc7e(); if (g_unwind) return; RELOAD();
L_f2bda0: /* f2bda0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bda2: je 0xf2bda9 */
  if (zf) goto L_f2bda9;
L_f2bda4: /* f2bda4: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bda7: jne 0xf2bdcf */
  if (!zf) goto L_f2bdcf;
L_f2bda9: /* f2bda9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bdaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bdab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bdac: call 0xf2bc7e */
  esp -= 4; W32(esp, 0xf2bdb1u); SPILL(); f_f2bc7e(); if (g_unwind) return; RELOAD();
/* f2bdb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bdb3: jne 0xf2bdb8 */
  if (!zf) goto L_f2bdb8;
L_f2bdb5: /* f2bdb5: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_f2bdb8: /* f2bdb8: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f2bdbc: je 0xf2bdcf */
  if (zf) goto L_f2bdcf;
L_f2bdbe: /* f2bdbe: mov eax, dword ptr [0xf37840] */
  eax = R32((uint32_t)(0xf37840u));
/* f2bdc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2bdc5: je 0xf2bdcf */
  if (zf) goto L_f2bdcf;
L_f2bdc7: /* f2bdc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bdc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bdc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bdca: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf2bdccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2bdcc: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_f2bdcf: /* f2bdcf: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_f2bdd2: /* f2bdd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2bdd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2bdd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2bdd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2bdd6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f2bdda(void) {
  LOAD_REGS();
L_f2bdda: /* f2bdda: jmp dword ptr [0xf38780] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_f2bde0(void) {
  LOAD_REGS();
L_f2bde0: /* f2bde0: push 0xf2bed2 */
  { uint32_t v = 0xf2bed2u; esp -= 4; W32(esp, v); }
/* f2bde5: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f2bdeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2bdec: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f2bdf0: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f2bdf4: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* f2bdf8: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2bdfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2bdfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2bdfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2bdfd: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* f2be00: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* f2be03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2be04: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* f2be07: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* f2be0e: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* f2be11: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* f2be14: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* f2be1a: ret  */
  esp += 4; SPILL(); return;
}

void f_f2be1b(void) {
  LOAD_REGS();
L_f2be1b: /* f2be1b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2be1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f2be25: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f2be26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2be27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2be28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2be29: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* f2be2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2be2b: ret  */
  esp += 4; SPILL(); return;
}

void f_f2be2c(void) {
  LOAD_REGS();
L_f2be2c: /* f2be2c: jmp dword ptr [0xf38784] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_f2be32(void) {
  LOAD_REGS();
L_f2be32: /* f2be32: jmp dword ptr [0xf3876c] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_f2be38(void) {
  LOAD_REGS();
L_f2be38: /* f2be38: jmp dword ptr [0xf38790] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_f2be3e(void) {
  LOAD_REGS();
L_f2be3e: /* f2be3e: jmp dword ptr [0xf38794] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_f2be44(void) {
  LOAD_REGS();
L_f2be44: /* f2be44: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f2be46: push 0xf31f30 */
  { uint32_t v = 0xf31f30u; esp -= 4; W32(esp, v); }
/* f2be4b: call 0xf2bde0 */
  esp -= 4; W32(esp, 0xf2be50u); SPILL(); f_f2bde0(); if (g_unwind) return; RELOAD();
/* f2be50: mov dword ptr [ebp - 0x1c], 0xf32378 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xf32378u);
L_f2be57: /* f2be57: cmp dword ptr [ebp - 0x1c], 0xf32478 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf32478u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f2be5e: jae 0xf2be82 */
  if (!cf) goto L_f2be82;
L_f2be60: /* f2be60: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2be64: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2be67: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f2be69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2be6b: je 0xf2be78 */
  if (zf) goto L_f2be78;
L_f2be6d: /* f2be6d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf2be6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2be6f: jmp 0xf2be78 */
  goto L_f2be78;
L_f2be78: /* f2be78: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2be7c: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f2be80: jmp 0xf2be57 */
  goto L_f2be57;
L_f2be82: /* f2be82: call 0xf2be1b */
  esp -= 4; W32(esp, 0xf2be87u); SPILL(); f_f2be1b(); if (g_unwind) return; RELOAD();
/* f2be87: ret  */
  esp += 4; SPILL(); return;
}

void f_f2be71(void) {
  LOAD_REGS();
L_f2be71: /* f2be71: xor eax, eax */
  eax = 0;
/* f2be73: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f2be74: ret  */
  esp += 4; SPILL(); return;
}

void f_f2be75(void) {
  LOAD_REGS();
  goto L_f2be75;
L_f2be57: /* f2be57: cmp dword ptr [ebp - 0x1c], 0xf32478 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf32478u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f2be5e: jae 0xf2be82 */
  if (!cf) goto L_f2be82;
L_f2be60: /* f2be60: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2be64: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2be67: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f2be69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2be6b: je 0xf2be78 */
  if (zf) goto L_f2be78;
L_f2be6d: /* f2be6d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf2be6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2be6f: jmp 0xf2be78 */
  goto L_f2be78;
L_f2be75: /* f2be75: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_f2be78: /* f2be78: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2be7c: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f2be80: jmp 0xf2be57 */
  goto L_f2be57;
L_f2be82: /* f2be82: call 0xf2be1b */
  esp -= 4; W32(esp, 0xf2be87u); SPILL(); f_f2be1b(); if (g_unwind) return; RELOAD();
/* f2be87: ret  */
  esp += 4; SPILL(); return;
}

void f_f2be88(void) {
  LOAD_REGS();
L_f2be88: /* f2be88: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f2be8a: push 0xf31f40 */
  { uint32_t v = 0xf31f40u; esp -= 4; W32(esp, v); }
/* f2be8f: call 0xf2bde0 */
  esp -= 4; W32(esp, 0xf2be94u); SPILL(); f_f2bde0(); if (g_unwind) return; RELOAD();
/* f2be94: mov dword ptr [ebp - 0x1c], 0xf32580 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xf32580u);
L_f2be9b: /* f2be9b: cmp dword ptr [ebp - 0x1c], 0xf32680 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf32680u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f2bea2: jae 0xf2bec6 */
  if (!cf) goto L_f2bec6;
L_f2bea4: /* f2bea4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2bea8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2beab: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f2bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2beaf: je 0xf2bebc */
  if (zf) goto L_f2bebc;
L_f2beb1: /* f2beb1: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf2beb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2beb3: jmp 0xf2bebc */
  goto L_f2bebc;
L_f2bebc: /* f2bebc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2bec0: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f2bec4: jmp 0xf2be9b */
  goto L_f2be9b;
L_f2bec6: /* f2bec6: call 0xf2be1b */
  esp -= 4; W32(esp, 0xf2becbu); SPILL(); f_f2be1b(); if (g_unwind) return; RELOAD();
/* f2becb: ret  */
  esp += 4; SPILL(); return;
}

void f_f2beb5(void) {
  LOAD_REGS();
L_f2beb5: /* f2beb5: xor eax, eax */
  eax = 0;
/* f2beb7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f2beb8: ret  */
  esp += 4; SPILL(); return;
}

void f_f2beb9(void) {
  LOAD_REGS();
  goto L_f2beb9;
L_f2be9b: /* f2be9b: cmp dword ptr [ebp - 0x1c], 0xf32680 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xf32680u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f2bea2: jae 0xf2bec6 */
  if (!cf) goto L_f2bec6;
L_f2bea4: /* f2bea4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2bea8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2beab: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f2bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f2beaf: je 0xf2bebc */
  if (zf) goto L_f2bebc;
L_f2beb1: /* f2beb1: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf2beb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f2beb3: jmp 0xf2bebc */
  goto L_f2bebc;
L_f2beb9: /* f2beb9: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_f2bebc: /* f2bebc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f2bec0: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f2bec4: jmp 0xf2be9b */
  goto L_f2be9b;
L_f2bec6: /* f2bec6: call 0xf2be1b */
  esp -= 4; W32(esp, 0xf2becbu); SPILL(); f_f2be1b(); if (g_unwind) return; RELOAD();
/* f2becb: ret  */
  esp += 4; SPILL(); return;
}

void f_f2becc(void) {
  LOAD_REGS();
L_f2becc: /* f2becc: jmp dword ptr [0xf38774] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_f2bed2(void) {
  LOAD_REGS();
L_f2bed2: /* f2bed2: jmp dword ptr [0xf38788] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_f2cfc0(void) {
  LOAD_REGS();
L_f2cfc0: /* f2cfc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2cfc3: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2cfc9(void) {
  LOAD_REGS();
  goto L_f2cfc9;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2cfc9: /* f2cfc9: mov eax, 0xf3278c */
  eax = 0xf3278cu;
/* f2cfce: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2cfe0(void) {
  LOAD_REGS();
L_f2cfe0: /* f2cfe0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2cfe3: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2cfe9(void) {
  LOAD_REGS();
  goto L_f2cfe9;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2cfe9: /* f2cfe9: mov eax, 0xf327b4 */
  eax = 0xf327b4u;
/* f2cfee: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d000(void) {
  LOAD_REGS();
L_f2d000: /* f2d000: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d003: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2d009(void) {
  LOAD_REGS();
  goto L_f2d009;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d009: /* f2d009: mov eax, 0xf327dc */
  eax = 0xf327dcu;
/* f2d00e: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d020(void) {
  LOAD_REGS();
L_f2d020: /* f2d020: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d023: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2d029(void) {
  LOAD_REGS();
  goto L_f2d029;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d029: /* f2d029: mov eax, 0xf32804 */
  eax = 0xf32804u;
/* f2d02e: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d040(void) {
  LOAD_REGS();
L_f2d040: /* f2d040: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d043: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2d049(void) {
  LOAD_REGS();
  goto L_f2d049;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d049: /* f2d049: mov eax, 0xf3282c */
  eax = 0xf3282cu;
/* f2d04e: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d060(void) {
  LOAD_REGS();
L_f2d060: /* f2d060: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d063: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2d069(void) {
  LOAD_REGS();
  goto L_f2d069;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d069: /* f2d069: mov eax, 0xf32854 */
  eax = 0xf32854u;
/* f2d06e: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d080(void) {
  LOAD_REGS();
L_f2d080: /* f2d080: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d083: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2d089(void) {
  LOAD_REGS();
  goto L_f2d089;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d089: /* f2d089: mov eax, 0xf3287c */
  eax = 0xf3287cu;
/* f2d08e: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d0a0(void) {
  LOAD_REGS();
L_f2d0a0: /* f2d0a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d0a3: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2d0a9(void) {
  LOAD_REGS();
  goto L_f2d0a9;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d0a9: /* f2d0a9: mov eax, 0xf328a4 */
  eax = 0xf328a4u;
/* f2d0ae: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d0c0(void) {
  LOAD_REGS();
L_f2d0c0: /* f2d0c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d0c3: jmp dword ptr [0xf386f4] */
  SPILL(); f_6c5e89(); return; /* Engine!??1UAudioSubsystem@@UAE@XZ */
}

void f_f2d0c9(void) {
  LOAD_REGS();
L_f2d0c9: /* f2d0c9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d0cc: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d0cf: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d0d5(void) {
  LOAD_REGS();
L_f2d0d5: /* f2d0d5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d0d8: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d0db: jmp 0xf2108c */
  SPILL(); f_f2108c(); return;
}

void f_f2d0e0(void) {
  LOAD_REGS();
L_f2d0e0: /* f2d0e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d0e3: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d0e6: jmp 0xf211ef */
  SPILL(); f_f211ef(); return;
}

void f_f2d0eb(void) {
  LOAD_REGS();
L_f2d0eb: /* f2d0eb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d0ee: add ecx, 0x88 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d0f4: jmp 0xf21082 */
  SPILL(); f_f21082(); return;
}

void f_f2d0f9(void) {
  LOAD_REGS();
L_f2d0f9: /* f2d0f9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d0fc: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d102: jmp 0xf21168 */
  SPILL(); f_f21168(); return;
}

void f_f2d107(void) {
  LOAD_REGS();
  goto L_f2d107;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d107: /* f2d107: mov eax, 0xf328f4 */
  eax = 0xf328f4u;
/* f2d10c: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d130(void) {
  LOAD_REGS();
L_f2d130: /* f2d130: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d133: jmp dword ptr [0xf386f4] */
  SPILL(); f_6c5e89(); return; /* Engine!??1UAudioSubsystem@@UAE@XZ */
}

void f_f2d139(void) {
  LOAD_REGS();
L_f2d139: /* f2d139: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d13c: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d13f: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d145(void) {
  LOAD_REGS();
L_f2d145: /* f2d145: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d148: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d14b: jmp 0xf2108c */
  SPILL(); f_f2108c(); return;
}

void f_f2d150(void) {
  LOAD_REGS();
L_f2d150: /* f2d150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d153: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d156: jmp 0xf211ef */
  SPILL(); f_f211ef(); return;
}

void f_f2d15b(void) {
  LOAD_REGS();
L_f2d15b: /* f2d15b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d15e: add ecx, 0x88 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d164: jmp 0xf21082 */
  SPILL(); f_f21082(); return;
}

void f_f2d169(void) {
  LOAD_REGS();
  goto L_f2d169;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d169: /* f2d169: mov eax, 0xf32940 */
  eax = 0xf32940u;
/* f2d16e: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d190(void) {
  LOAD_REGS();
  goto L_f2d190;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d190: /* f2d190: mov eax, 0xf32a0c */
  eax = 0xf32a0cu;
/* f2d195: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d1a0(void) {
  LOAD_REGS();
  goto L_f2d1a0;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d1a0: /* f2d1a0: mov eax, 0xf32a78 */
  eax = 0xf32a78u;
/* f2d1a5: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d1b0(void) {
  LOAD_REGS();
  goto L_f2d1b0;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d1b0: /* f2d1b0: mov eax, 0xf32ae4 */
  eax = 0xf32ae4u;
/* f2d1b5: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d1c0(void) {
  LOAD_REGS();
  goto L_f2d1c0;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d1c0: /* f2d1c0: mov eax, 0xf32b50 */
  eax = 0xf32b50u;
/* f2d1c5: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d1d0(void) {
  LOAD_REGS();
  goto L_f2d1d0;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d1d0: /* f2d1d0: mov eax, 0xf32bbc */
  eax = 0xf32bbcu;
/* f2d1d5: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d1e0(void) {
  LOAD_REGS();
  goto L_f2d1e0;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d1e0: /* f2d1e0: mov eax, 0xf32c28 */
  eax = 0xf32c28u;
/* f2d1e5: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d1f0(void) {
  LOAD_REGS();
  goto L_f2d1f0;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d1f0: /* f2d1f0: mov eax, 0xf32c94 */
  eax = 0xf32c94u;
/* f2d1f5: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d200(void) {
  LOAD_REGS();
  goto L_f2d200;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d200: /* f2d200: mov eax, 0xf32d00 */
  eax = 0xf32d00u;
/* f2d205: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d210(void) {
  LOAD_REGS();
L_f2d210: /* f2d210: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f2d213: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d219(void) {
  LOAD_REGS();
L_f2d219: /* f2d219: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* f2d21c: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d222(void) {
  LOAD_REGS();
L_f2d222: /* f2d222: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* f2d225: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d22b(void) {
  LOAD_REGS();
L_f2d22b: /* f2d22b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* f2d22e: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d234(void) {
  LOAD_REGS();
L_f2d234: /* f2d234: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* f2d237: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d23d(void) {
  LOAD_REGS();
  goto L_f2d23d;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d23d: /* f2d23d: mov eax, 0xf32dac */
  eax = 0xf32dacu;
/* f2d242: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d260(void) {
  LOAD_REGS();
  goto L_f2d260;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d260: /* f2d260: mov eax, 0xf32e1c */
  eax = 0xf32e1cu;
/* f2d265: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d270(void) {
  LOAD_REGS();
  goto L_f2d270;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d270: /* f2d270: mov eax, 0xf32e88 */
  eax = 0xf32e88u;
/* f2d275: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d280(void) {
  LOAD_REGS();
  goto L_f2d280;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d280: /* f2d280: mov eax, 0xf32ef4 */
  eax = 0xf32ef4u;
/* f2d285: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d290(void) {
  LOAD_REGS();
  goto L_f2d290;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d290: /* f2d290: mov eax, 0xf32f60 */
  eax = 0xf32f60u;
/* f2d295: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d2a0(void) {
  LOAD_REGS();
  goto L_f2d2a0;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d2a0: /* f2d2a0: mov eax, 0xf32fcc */
  eax = 0xf32fccu;
/* f2d2a5: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d2b0(void) {
  LOAD_REGS();
L_f2d2b0: /* f2d2b0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2d2b3: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2b9(void) {
  LOAD_REGS();
L_f2d2b9: /* f2d2b9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2d2bc: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2c2(void) {
  LOAD_REGS();
L_f2d2c2: /* f2d2c2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2d2c5: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2cb(void) {
  LOAD_REGS();
L_f2d2cb: /* f2d2cb: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2d2ce: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2d4(void) {
  LOAD_REGS();
L_f2d2d4: /* f2d2d4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2d2d7: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2dd(void) {
  LOAD_REGS();
L_f2d2dd: /* f2d2dd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2d2e0: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2e6(void) {
  LOAD_REGS();
L_f2d2e6: /* f2d2e6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2d2e9: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2ef(void) {
  LOAD_REGS();
L_f2d2ef: /* f2d2ef: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f2d2f2: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d2f8(void) {
  LOAD_REGS();
  goto L_f2d2f8;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d2f8: /* f2d2f8: mov eax, 0xf33078 */
  eax = 0xf33078u;
/* f2d2fd: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d320(void) {
  LOAD_REGS();
  goto L_f2d320;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d320: /* f2d320: mov eax, 0xf330e8 */
  eax = 0xf330e8u;
/* f2d325: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d330(void) {
  LOAD_REGS();
  goto L_f2d330;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d330: /* f2d330: mov eax, 0xf33154 */
  eax = 0xf33154u;
/* f2d335: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d340(void) {
  LOAD_REGS();
  goto L_f2d340;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d340: /* f2d340: mov eax, 0xf331c0 */
  eax = 0xf331c0u;
/* f2d345: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d350(void) {
  LOAD_REGS();
  goto L_f2d350;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d350: /* f2d350: mov eax, 0xf3322c */
  eax = 0xf3322cu;
/* f2d355: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d360(void) {
  LOAD_REGS();
  goto L_f2d360;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d360: /* f2d360: mov eax, 0xf33298 */
  eax = 0xf33298u;
/* f2d365: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d370(void) {
  LOAD_REGS();
  goto L_f2d370;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d370: /* f2d370: mov eax, 0xf33304 */
  eax = 0xf33304u;
/* f2d375: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d380(void) {
  LOAD_REGS();
L_f2d380: /* f2d380: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f2d383: jmp dword ptr [0xf38454] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f2d389(void) {
  LOAD_REGS();
  goto L_f2d389;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d389: /* f2d389: mov eax, 0xf33334 */
  eax = 0xf33334u;
/* f2d38e: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d3a0(void) {
  LOAD_REGS();
L_f2d3a0: /* f2d3a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2d3a3: jmp dword ptr [0xf386f4] */
  SPILL(); f_6c5e89(); return; /* Engine!??1UAudioSubsystem@@UAE@XZ */
}

void f_f2d3a9(void) {
  LOAD_REGS();
L_f2d3a9: /* f2d3a9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2d3ac: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d3af: jmp dword ptr [0xf38444] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f2d3b5(void) {
  LOAD_REGS();
L_f2d3b5: /* f2d3b5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2d3b8: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d3bb: jmp 0xf2108c */
  SPILL(); f_f2108c(); return;
}

void f_f2d3c0(void) {
  LOAD_REGS();
L_f2d3c0: /* f2d3c0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2d3c3: add ecx, 0x7c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d3c6: jmp 0xf211ef */
  SPILL(); f_f211ef(); return;
}

void f_f2d3cb(void) {
  LOAD_REGS();
L_f2d3cb: /* f2d3cb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2d3ce: add ecx, 0x88 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d3d4: jmp 0xf21082 */
  SPILL(); f_f21082(); return;
}

void f_f2d3d9(void) {
  LOAD_REGS();
L_f2d3d9: /* f2d3d9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f2d3dc: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f2d3e2: jmp 0xf21168 */
  SPILL(); f_f21168(); return;
}

void f_f2d3e7(void) {
  LOAD_REGS();
  goto L_f2d3e7;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d3e7: /* f2d3e7: mov eax, 0xf333c8 */
  eax = 0xf333c8u;
/* f2d3ec: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d410(void) {
  LOAD_REGS();
  goto L_f2d410;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d410: /* f2d410: mov eax, 0xf33438 */
  eax = 0xf33438u;
/* f2d415: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d420(void) {
  LOAD_REGS();
  goto L_f2d420;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d420: /* f2d420: mov eax, 0xf3363c */
  eax = 0xf3363cu;
/* f2d425: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d430(void) {
  LOAD_REGS();
  goto L_f2d430;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d430: /* f2d430: mov eax, 0xf336d0 */
  eax = 0xf336d0u;
/* f2d435: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d440(void) {
  LOAD_REGS();
  goto L_f2d440;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d440: /* f2d440: mov eax, 0xf33818 */
  eax = 0xf33818u;
/* f2d445: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d450(void) {
  LOAD_REGS();
  goto L_f2d450;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d450: /* f2d450: mov eax, 0xf33898 */
  eax = 0xf33898u;
/* f2d455: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2d460(void) {
  LOAD_REGS();
L_f2d460: /* f2d460: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f2d463: jmp 0xf21028 */
  SPILL(); f_f21028(); return;
}

void f_f2d468(void) {
  LOAD_REGS();
  goto L_f2d468;
L_f2ba98: /* f2ba98: jmp dword ptr [0xf38778] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f2d468: /* f2d468: mov eax, 0xf33a1c */
  eax = 0xf33a1cu;
/* f2d46d: jmp 0xf2ba98 */
  goto L_f2ba98;
}

void f_f2e4d0(void) {
  LOAD_REGS();
L_f2e4d0: /* f2e4d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2e4d3: mov eax, dword ptr [0xf38650] */
  eax = R32((uint32_t)(0xf38650u));
/* f2e4d8: mov ecx, dword ptr [0xf38730] */
  ecx = R32((uint32_t)(0xf38730u));
/* f2e4de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f2e4df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f2e4e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f2e4e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f2e4e2: push 0xf210c3 */
  { uint32_t v = 0xf210c3u; esp -= 4; W32(esp, v); }
/* f2e4e7: push 0xf21163 */
  { uint32_t v = 0xf21163u; esp -= 4; W32(esp, v); }
/* f2e4ec: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* f2e4f1: xor esi, esi */
  esi = 0;
/* f2e4f3: xor edi, edi */
  edi = 0;
/* f2e4f5: xor ebx, ebx */
  ebx = 0;
/* f2e4f7: xor ebp, ebp */
  ebp = 0;
/* f2e4f9: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f2e4fd: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* f2e501: call dword ptr [0xf3864c] */
  esp -= 4; W32(esp, 0xf2e507u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* f2e507: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* f2e50b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2e50c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f2e510: push 0xf35520 */
  { uint32_t v = 0xf35520u; esp -= 4; W32(esp, v); }
/* f2e515: push 0xf3566a */
  { uint32_t v = 0xf3566au; esp -= 4; W32(esp, v); }
/* f2e51a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f2e51d: mov edx, esp */
  edx = esp;
/* f2e51f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f2e520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f2e521: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* f2e523: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f2e525: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* f2e528: push 0x110 */
  { uint32_t v = 0x110u; esp -= 4; W32(esp, v); }
/* f2e52d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* f2e530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f2e531: mov ecx, 0xf371b8 */
  ecx = 0xf371b8u;
/* f2e536: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* f2e539: call dword ptr [0xf38648] */
  esp -= 4; W32(esp, 0xf2e53fu); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* f2e53f: push 0xf2f5b0 */
  { uint32_t v = 0xf2f5b0u; esp -= 4; W32(esp, v); }
/* f2e544: call 0xf2bc6c */
  esp -= 4; W32(esp, 0xf2e549u); SPILL(); f_f2bc6c(); if (g_unwind) return; RELOAD();
/* f2e549: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2e54c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f2e54d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f2e54e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f2e54f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f2e550: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f2e553: ret  */
  esp += 4; SPILL(); return;
}

void f_f2e590(void) {
  LOAD_REGS();
L_f2e590: /* f2e590: mov dword ptr [0xf371b0], 0xf371b8 */
  W32((uint32_t)(0xf371b0u), 0xf371b8u);
/* f2e59a: ret  */
  esp += 4; SPILL(); return;
}

void f_f2f5b0(void) {
  LOAD_REGS();
L_f2f5b0: /* f2f5b0: mov ecx, 0xf371b8 */
  ecx = 0xf371b8u;
/* f2f5b5: jmp dword ptr [0xf38654] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}
