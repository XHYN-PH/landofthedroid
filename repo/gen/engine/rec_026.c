#include "recomp.h"
#include "rec_mod.h"

void f_7784a9(void) {
  LOAD_REGS();
L_7784a9: /* 7784a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7784b0: /* 7784b0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7784b3: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 7784b6: cmp ecx, dword ptr [edx + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7784b9: jge 0x778735 */
  if ((sf == of)) goto L_778735;
L_7784bf: /* 7784bf: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7784c2: cmp eax, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7784c5: jge 0x7786f2 */
  if ((sf == of)) goto L_7786f2;
L_7784cb: /* 7784cb: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
/* 7784ce: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7784d0: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7784d3: lea ebx, [esi + eax*4] */
  ebx = (uint32_t)(esi + eax*4);
/* 7784d6: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 7784d9: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 7784db: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7784dd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7784e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7784e1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7784e4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7784e7: call 0x928720 */
  esp -= 4; W32(esp, 0x7784ecu); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 7784ec: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7784ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7784f0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7784f3: call 0x928720 */
  esp -= 4; W32(esp, 0x7784f8u); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 7784f8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7784fb: mov ecx, eax */
  ecx = eax;
/* 7784fd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7784ff: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 778501: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 778504: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 778506: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 778508: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77850d: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 778513: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778516: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 778519: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 77851c: je 0x7785ed */
  if (zf) goto L_7785ed;
L_778522: /* 778522: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 778525: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 778528: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 77852b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 77852d: cmp eax, dword ptr [edi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778530: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 778533: jge 0x7786f2 */
  if ((sf == of)) goto L_7786f2;
L_778539: /* 778539: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 77853c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77853f: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 778542: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 778545: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 778547: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 778548: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778549: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 77854c: call 0x928610 */
  esp -= 4; W32(esp, 0x778551u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 778551: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 778554: mov ax, word ptr [ebp - 0x24] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffdcu))) & 0xffffu);
/* 778558: mov word ptr [esi + 0x14], ax */
  W16((uint32_t)(esi + 0x14u), (eax & 0xffffu));
/* 77855c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77855f: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 778562: lea edx, [eax + 0x14] */
  edx = (uint32_t)(eax + 0x14u);
/* 778565: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 778567: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 77856a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77856c: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 77856f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 778572: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 778575: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778576: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 778579: call 0x928610 */
  esp -= 4; W32(esp, 0x77857eu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 77857e: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 778581: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 778584: mov cx, word ptr [ebp - 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd8u))) & 0xffffu);
/* 778588: mov word ptr [esi + 0x2c], cx */
  W16((uint32_t)(esi + 0x2cu), (ecx & 0xffffu));
/* 77858c: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 77858f: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 778592: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 778595: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 778598: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77859a: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 77859d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7785a0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7785a3: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 7785a6: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 7785a9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7785ac: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 7785af: mov dword ptr [esi + 0x5c], ebx */
  W32((uint32_t)(esi + 0x5cu), ebx);
/* 7785b2: xor ecx, ecx */
  ecx = 0;
/* 7785b4: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 7785b7: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 7785ba: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 7785bd: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 7785c0: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 7785c3: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 7785c6: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 7785c9: mov eax, 1 */
  eax = 0x1u;
/* 7785ce: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 7785d1: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 7785d4: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 7785d7: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
L_7785da: /* 7785da: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 7785dd: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7785e0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7785e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7785e2: mov dword ptr [edi + 0x44], ecx */
  W32((uint32_t)(edi + 0x44u), ecx);
/* 7785e5: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 7785e8: jmp 0x7784b0 */
  goto L_7784b0;
L_7785ed: /* 7785ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7785ee: call 0x928610 */
  esp -= 4; W32(esp, 0x7785f3u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 7785f3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7785f6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7785f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7785fa: call 0x928610 */
  esp -= 4; W32(esp, 0x7785ffu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 7785ff: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 778602: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 778605: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 778608: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 77860b: mov esi, eax */
  esi = eax;
/* 77860d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 778610: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 778613: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 778616: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 778619: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77861b: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77861e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77861f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 778622: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 778625: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 778628: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778629: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 77862c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77862f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778631: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778633: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778634: call 0x928a50 */
  esp -= 4; W32(esp, 0x778639u); SPILL(); f_928a50(); if (g_unwind) return; RELOAD();
/* 778639: xor edx, edx */
  edx = 0;
/* 77863b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77863e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778640: je 0x7786a0 */
  if (zf) goto L_7786a0;
L_778642: /* 778642: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 778645: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 778648: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77864a: jle 0x778654 */
  if ((zf || sf != of)) goto L_778654;
L_77864c: /* 77864c: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 77864f: cmp ecx, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778652: jge 0x7786a0 */
  if ((sf == of)) goto L_7786a0;
L_778654: /* 778654: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 778656: xor ecx, ecx */
  ecx = 0;
/* 778658: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77865a: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 77865d: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 778660: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 778663: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 778664: or ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 778667: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77866a: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 77866d: jle 0x778678 */
  if ((zf || sf != of)) goto L_778678;
L_77866f: /* 77866f: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 778672: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 778675: mov dword ptr [edi + 0x3c], eax */
  W32((uint32_t)(edi + 0x3cu), eax);
L_778678: /* 778678: xor ecx, ecx */
  ecx = 0;
/* 77867a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_778680: /* 778680: cmp ecx, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778683: jge 0x7785da */
  if ((sf == of)) goto L_7785da;
L_778689: /* 778689: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 77868c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 77868f: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 778692: mov dword ptr [esi + eax + 0x5c], ebx */
  W32((uint32_t)(esi + eax + 0x5cu), ebx);
/* 778696: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 778699: mov dword ptr [esi + eax + 0x50], edx */
  W32((uint32_t)(esi + eax + 0x50u), edx);
/* 77869d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 77869e: jmp 0x778680 */
  goto L_778680;
L_7786a0: /* 7786a0: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
L_7786a3: /* 7786a3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7786a4: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7786a6: jl 0x7786cd */
  if ((sf != of)) goto L_7786cd;
L_7786a8: /* 7786a8: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 7786ab: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7786ae: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7786b1: movzx ebx, word ptr [eax + edx + 0x2c] */
  ebx = (uint32_t)(R16((uint32_t)(eax + edx + 0x2cu)));
/* 7786b6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7786b8: movzx edx, word ptr [eax + 0x14] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x14u)));
/* 7786bc: imul edx, dword ptr [edi + 0xc] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0xcu)));
  edx = (uint32_t)r;
  }
/* 7786c0: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 7786c3: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7786c5: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 7786c8: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
/* 7786cb: jmp 0x7786a3 */
  goto L_7786a3;
L_7786cd: /* 7786cd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7786d0: mov dword ptr [edi + 0x28], esi */
  W32((uint32_t)(edi + 0x28u), esi);
/* 7786d3: mov eax, ecx */
  eax = ecx;
L_7786d5: /* 7786d5: cmp eax, dword ptr [edi + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7786d8: jge 0x7786e9 */
  if ((sf == of)) goto L_7786e9;
L_7786da: /* 7786da: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 7786dd: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 7786e0: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 7786e6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7786e7: jmp 0x7786d5 */
  goto L_7786d5;
L_7786e9: /* 7786e9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7786ec: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 7786ef: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
L_7786f2: /* 7786f2: xor eax, eax */
  eax = 0;
/* 7786f4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7786f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7786fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7786ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778700: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778701: mov esp, ebp */
  esp = ebp;
/* 778703: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778704: ret  */
  esp += 4; SPILL(); return;
L_778735: /* 778735: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778738: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77873a: mov eax, 1 */
  eax = 0x1u;
/* 77873f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778746: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778747: mov esp, ebp */
  esp = ebp;
/* 778749: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77874a: ret  */
  esp += 4; SPILL(); return;
}

void f_778705(void) {
  LOAD_REGS();
L_778705: /* 778705: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 778708: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77870d: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 778710: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778711: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 778714: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778719u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_778719(); return;
}

void f_778719(void) {
  LOAD_REGS();
L_778719: /* 778719: push 0xa08224 */
  { uint32_t v = 0xa08224u; esp -= 4; W32(esp, v); }
/* 77871e: push 0xac5510 */
  { uint32_t v = 0xac5510u; esp -= 4; W32(esp, v); }
/* 778723: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x778729u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 778729: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77872c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77872e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778730: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778735u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 778735: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778738: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77873a: mov eax, 1 */
  eax = 0x1u;
/* 77873f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778746: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778747: mov esp, ebp */
  esp = ebp;
/* 778749: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77874a: ret  */
  esp += 4; SPILL(); return;
}

void f_778820(void) {
  LOAD_REGS();
L_778820: /* 778820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 778824: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 778826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778827: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x77882du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 77882d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_778840(void) {
  LOAD_REGS();
L_778840: /* 778840: mov eax, ecx */
  eax = ecx;
/* 778842: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 778846: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 778848: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77884b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 77884e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 778852: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 778855: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 778857: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 77885a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_778870(void) {
  LOAD_REGS();
L_778870: /* 778870: mov eax, ecx */
  eax = ecx;
/* 778872: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 778876: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 778878: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77887b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 77887e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 778882: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 778885: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 778887: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 77888a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7788a0(void) {
  LOAD_REGS();
L_7788a0: /* 7788a0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7788a2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7788a4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7788a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7788aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7788ad: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7788b0: ret  */
  esp += 4; SPILL(); return;
}

void f_7788d0(void) {
  LOAD_REGS();
L_7788d0: /* 7788d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7788d1: mov ebp, esp */
  ebp = esp;
/* 7788d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7788d5: push 0x9cc410 */
  { uint32_t v = 0x9cc410u; esp -= 4; W32(esp, v); }
/* 7788da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7788e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7788e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7788e8: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7788ee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7788f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7788f2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 7788f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7788f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7788f7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7788fa: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* 7788fd: imul esi, eax */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(eax);
  esi = (uint32_t)r;
  }
/* 778900: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 778903: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778905: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 778908: xor ecx, ecx */
  ecx = 0;
/* 77890a: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 77890c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77890d: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 778910: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 778913: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 778916: call 0x929e60 */
  esp -= 4; W32(esp, 0x77891bu); SPILL(); f_929e60(); if (g_unwind) return; RELOAD();
/* 77891b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77891e: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 778921: cmp dword ptr [edx + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778925: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 778928: jne 0x778942 */
  if (!zf) goto L_778942;
L_77892a: /* 77892a: push 0x3ae */
  { uint32_t v = 0x3aeu; esp -= 4; W32(esp, v); }
/* 77892f: push 0xac5488 */
  { uint32_t v = 0xac5488u; esp -= 4; W32(esp, v); }
/* 778934: push 0xac5498 */
  { uint32_t v = 0xac5498u; esp -= 4; W32(esp, v); }
/* 778939: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77893fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77893f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_778942: /* 778942: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 778945: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778947: jne 0x778993 */
  if (!zf) goto L_778993;
L_778949: /* 778949: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77894c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 77894f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778951: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778952: call 0x929e80 */
  esp -= 4; W32(esp, 0x778957u); SPILL(); f_929e80(); if (g_unwind) return; RELOAD();
/* 778957: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778959: jne 0x778993 */
  if (!zf) goto L_778993;
L_77895b: /* 77895b: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 77895e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77895f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778960: call 0x929c40 */
  esp -= 4; W32(esp, 0x778965u); SPILL(); f_929c40(); if (g_unwind) return; RELOAD();
/* 778965: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 778968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778969: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77896c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77896d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77896e: call 0x929c40 */
  esp -= 4; W32(esp, 0x778973u); SPILL(); f_929c40(); if (g_unwind) return; RELOAD();
/* 778973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778974: push 0xac54b4 */
  { uint32_t v = 0xac54b4u; esp -= 4; W32(esp, v); }
/* 778979: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77897b: call 0x971e20 */
  esp -= 4; W32(esp, 0x778980u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 778980: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 778983: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 778986: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778989: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77898b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77898c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77898d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77898e: call 0x929ea0 */
  esp -= 4; W32(esp, 0x778993u); SPILL(); f_929ea0(); if (g_unwind) return; RELOAD();
L_778993: /* 778993: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 778996: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 778999: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7789a0: /* 7789a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7789a2: je 0x778b86 */
  if (zf) goto L_778b86;
L_7789a8: /* 7789a8: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 7789ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7789ad: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 7789b0: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 7789b3: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7789b6: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 7789b9: jne 0x7789de */
  if (!zf) goto L_7789de;
L_7789bb: /* 7789bb: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 7789be: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 7789c1: add edx, 0x191 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x191u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7789c7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7789c9: jge 0x7789de */
  if ((sf == of)) goto L_7789de;
L_7789cb: /* 7789cb: xor eax, eax */
  eax = 0;
/* 7789cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7789d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7789d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7789d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7789d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7789da: mov esp, ebp */
  esp = ebp;
/* 7789dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7789dd: ret  */
  esp += 4; SPILL(); return;
L_7789de: /* 7789de: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7789e1: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 7789e7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7789ea: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7789f0: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 7789f3: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 7789f9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7789fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7789fd: mov edx, dword ptr [ecx + 0x74] */
  edx = R32((uint32_t)(ecx + 0x74u));
/* 778a00: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 778a03: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 778a06: mov dword ptr [ebp - 0x110], eax */
  W32((uint32_t)(ebp + 0xfffffef0u), eax);
/* 778a0c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 778a0f: mov dword ptr [ebp - 0x114], ecx */
  W32((uint32_t)(ebp + 0xfffffeecu), ecx);
/* 778a15: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 778a18: mov dword ptr [ebp - 0x13c], edx */
  W32((uint32_t)(ebp + 0xfffffec4u), edx);
/* 778a1e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a20: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 778a23: mov edx, dword ptr [ecx + 0x74] */
  edx = R32((uint32_t)(ecx + 0x74u));
/* 778a26: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 778a29: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 778a2c: mov dword ptr [ebp - 0xe0], edx */
  W32((uint32_t)(ebp + 0xffffff20u), edx);
/* 778a32: mov dword ptr [ebp - 0x154], eax */
  W32((uint32_t)(ebp + 0xfffffeacu), eax);
/* 778a38: mov dword ptr [ebp - 0xdc], eax */
  W32((uint32_t)(ebp + 0xffffff24u), eax);
/* 778a3e: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 778a44: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 778a47: lea edx, [ebp - 0x154] */
  edx = (uint32_t)(ebp + 0xfffffeacu);
/* 778a4d: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 778a50: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a52: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 778a55: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 778a58: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a5a: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 778a5d: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 778a60: test byte ptr [edi + 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x10u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778a64: je 0x778a6f */
  if (zf) goto L_778a6f;
L_778a66: /* 778a66: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 778a6d: jmp 0x778a77 */
  goto L_778a77;
L_778a6f: /* 778a6f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a71: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 778a74: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
L_778a77: /* 778a77: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 778a7a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 778a7c: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 778a7f: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 778a82: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 778a85: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 778a88: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 778a8b: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 778a8d: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 778a90: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 778a93: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 778a96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778a98: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 778a9b: je 0x778afb */
  if (zf) goto L_778afb;
L_778a9d: /* 778a9d: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 778aa0: sub edx, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 778aa3: cmp edx, 0x190 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778aa9: jle 0x778afb */
  if ((zf || sf != of)) goto L_778afb;
L_778aab: /* 778aab: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 778aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778aaf: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 778ab2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778ab3: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x778ab5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 778ab5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 778ab8: jmp 0x778b03 */
  goto L_778b03;
L_778afb: /* 778afb: xor eax, eax */
  eax = 0;
/* 778afd: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 778b00: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
L_778b03: /* 778b03: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 778b06: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 778b08: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 778b0b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 778b0e: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 778b11: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 778b13: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 778b16: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 778b19: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 778b1c: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 778b1f: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* 778b26: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 778b29: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 778b2c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 778b2d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778b2f: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 778b32: jne 0x778b40 */
  if (!zf) goto L_778b40;
L_778b34: /* 778b34: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 778b37: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 778b3a: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 778b3d: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
L_778b40: /* 778b40: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 778b43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778b45: je 0x778b65 */
  if (zf) goto L_778b65;
L_778b47: /* 778b47: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 778b4a: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 778b4d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 778b50: add dword ptr [ebx + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x4u), r);
  }
/* 778b53: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 778b56: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 778b59: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 778b5c: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 778b5f: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 778b62: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
L_778b65: /* 778b65: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 778b68: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 778b6b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 778b6e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 778b71: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 778b74: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 778b77: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 778b7a: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 778b7d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 778b7e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 778b81: jmp 0x7789a0 */
  goto L_7789a0;
L_778b86: /* 778b86: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778b89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778b8b: mov eax, 1 */
  eax = 0x1u;
/* 778b90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778b97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778b98: mov esp, ebp */
  esp = ebp;
/* 778b9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778b9b: ret  */
  esp += 4; SPILL(); return;
}

void f_778aba(void) {
  LOAD_REGS();
L_778aba: /* 778aba: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 778abd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 778ac2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 778ac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778ac6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 778ac9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778aceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_778ace(); return;
}

void f_778ace(void) {
  LOAD_REGS();
  goto L_778ace;
L_7789a0: /* 7789a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7789a2: je 0x778b86 */
  if (zf) goto L_778b86;
L_7789a8: /* 7789a8: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 7789ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7789ad: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 7789b0: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 7789b3: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7789b6: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 7789b9: jne 0x7789de */
  if (!zf) goto L_7789de;
L_7789bb: /* 7789bb: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 7789be: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 7789c1: add edx, 0x191 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x191u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7789c7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7789c9: jge 0x7789de */
  if ((sf == of)) goto L_7789de;
L_7789cb: /* 7789cb: xor eax, eax */
  eax = 0;
/* 7789cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7789d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7789d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7789d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7789d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7789da: mov esp, ebp */
  esp = ebp;
/* 7789dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7789dd: ret  */
  esp += 4; SPILL(); return;
L_7789de: /* 7789de: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7789e1: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 7789e7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7789ea: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7789f0: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 7789f3: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 7789f9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7789fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7789fd: mov edx, dword ptr [ecx + 0x74] */
  edx = R32((uint32_t)(ecx + 0x74u));
/* 778a00: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 778a03: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 778a06: mov dword ptr [ebp - 0x110], eax */
  W32((uint32_t)(ebp + 0xfffffef0u), eax);
/* 778a0c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 778a0f: mov dword ptr [ebp - 0x114], ecx */
  W32((uint32_t)(ebp + 0xfffffeecu), ecx);
/* 778a15: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 778a18: mov dword ptr [ebp - 0x13c], edx */
  W32((uint32_t)(ebp + 0xfffffec4u), edx);
/* 778a1e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a20: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 778a23: mov edx, dword ptr [ecx + 0x74] */
  edx = R32((uint32_t)(ecx + 0x74u));
/* 778a26: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 778a29: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 778a2c: mov dword ptr [ebp - 0xe0], edx */
  W32((uint32_t)(ebp + 0xffffff20u), edx);
/* 778a32: mov dword ptr [ebp - 0x154], eax */
  W32((uint32_t)(ebp + 0xfffffeacu), eax);
/* 778a38: mov dword ptr [ebp - 0xdc], eax */
  W32((uint32_t)(ebp + 0xffffff24u), eax);
/* 778a3e: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 778a44: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 778a47: lea edx, [ebp - 0x154] */
  edx = (uint32_t)(ebp + 0xfffffeacu);
/* 778a4d: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 778a50: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a52: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 778a55: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 778a58: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a5a: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 778a5d: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 778a60: test byte ptr [edi + 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x10u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778a64: je 0x778a6f */
  if (zf) goto L_778a6f;
L_778a66: /* 778a66: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 778a6d: jmp 0x778a77 */
  goto L_778a77;
L_778a6f: /* 778a6f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 778a71: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 778a74: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
L_778a77: /* 778a77: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 778a7a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 778a7c: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 778a7f: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 778a82: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 778a85: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 778a88: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 778a8b: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 778a8d: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 778a90: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 778a93: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 778a96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778a98: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 778a9b: je 0x778afb */
  if (zf) goto L_778afb;
L_778a9d: /* 778a9d: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 778aa0: sub edx, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 778aa3: cmp edx, 0x190 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778aa9: jle 0x778afb */
  if ((zf || sf != of)) goto L_778afb;
L_778aab: /* 778aab: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 778aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778aaf: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 778ab2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778ab3: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x778ab5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 778ab5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 778ab8: jmp 0x778b03 */
  goto L_778b03;
L_778ace: /* 778ace: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 778ad4: push 0xa08248 */
  { uint32_t v = 0xa08248u; esp -= 4; W32(esp, v); }
/* 778ad9: push 0xac54dc */
  { uint32_t v = 0xac54dcu; esp -= 4; W32(esp, v); }
/* 778ade: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x778ae0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 778ae0: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 778ae3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 778ae6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778ae8: push 0xac54e4 */
  { uint32_t v = 0xac54e4u; esp -= 4; W32(esp, v); }
/* 778aed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x778aefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 778aef: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778af2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778af4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778af6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778afbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_778afb: /* 778afb: xor eax, eax */
  eax = 0;
/* 778afd: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 778b00: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
L_778b03: /* 778b03: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 778b06: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 778b08: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 778b0b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 778b0e: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 778b11: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 778b13: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 778b16: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 778b19: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 778b1c: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 778b1f: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* 778b26: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 778b29: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 778b2c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 778b2d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778b2f: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 778b32: jne 0x778b40 */
  if (!zf) goto L_778b40;
L_778b34: /* 778b34: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 778b37: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 778b3a: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 778b3d: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
L_778b40: /* 778b40: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 778b43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778b45: je 0x778b65 */
  if (zf) goto L_778b65;
L_778b47: /* 778b47: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 778b4a: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 778b4d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 778b50: add dword ptr [ebx + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x4u), r);
  }
/* 778b53: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 778b56: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 778b59: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 778b5c: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 778b5f: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 778b62: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
L_778b65: /* 778b65: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 778b68: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 778b6b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 778b6e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 778b71: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 778b74: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 778b77: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 778b7a: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 778b7d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 778b7e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 778b81: jmp 0x7789a0 */
  goto L_7789a0;
L_778b86: /* 778b86: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778b89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778b8b: mov eax, 1 */
  eax = 0x1u;
/* 778b90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778b97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778b98: mov esp, ebp */
  esp = ebp;
/* 778b9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778b9b: ret  */
  esp += 4; SPILL(); return;
}

void f_778c60(void) {
  LOAD_REGS();
L_778c60: /* 778c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 778c61: mov ebp, esp */
  ebp = esp;
/* 778c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 778c65: push 0x9cc420 */
  { uint32_t v = 0x9cc420u; esp -= 4; W32(esp, v); }
/* 778c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 778c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 778c78: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 778c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778c7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778c7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778c7e: mov edi, ecx */
  edi = ecx;
/* 778c80: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 778c83: xor ecx, ecx */
  ecx = 0;
/* 778c85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 778c88: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 778c8b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 778c8e: xor ebx, ebx */
  ebx = 0;
L_778c90: /* 778c90: cmp ebx, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 778c93: jae 0x778d51 */
  if (!cf) goto L_778d51;
L_778c99: /* 778c99: xor esi, esi */
  esi = 0;
/* 778c9b: jmp 0x778ca0 */
  goto L_778ca0;
L_778ca0: /* 778ca0: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 778ca3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 778ca5: jae 0x778d4b */
  if (!cf) goto L_778d4b;
L_778cab: /* 778cab: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 778cae: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 778cb1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 778cb3: cmp dword ptr [edx + eax*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778cb6: je 0x778d42 */
  if (zf) goto L_778d42;
L_778cbc: /* 778cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778cbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778cbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778cbf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 778cc3: call 0x7788d0 */
  esp -= 4; W32(esp, 0x778cc8u); SPILL(); f_7788d0(); if (g_unwind) return; RELOAD();
/* 778cc8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778ccd: jne 0x778d40 */
  if (!zf) goto L_778d40;
L_778ccf: /* 778ccf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778cd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778cd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778cdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778cdc: mov esp, ebp */
  esp = ebp;
/* 778cde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778cdf: ret  */
  esp += 4; SPILL(); return;
L_778d40: /* 778d40: xor ecx, ecx */
  ecx = 0;
L_778d42: /* 778d42: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 778d45: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 778d46: jmp 0x778ca0 */
  goto L_778ca0;
L_778d4b: /* 778d4b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 778d4c: jmp 0x778c90 */
  goto L_778c90;
L_778d51: /* 778d51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778d54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778d55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778d56: mov eax, 1 */
  eax = 0x1u;
/* 778d5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778d62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778d63: mov esp, ebp */
  esp = ebp;
/* 778d65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778d66: ret  */
  esp += 4; SPILL(); return;
}

void f_778c9d(void) {
  LOAD_REGS();
  goto L_778c9d;
L_778c90: /* 778c90: cmp ebx, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 778c93: jae 0x778d51 */
  if (!cf) goto L_778d51;
L_778c99: /* 778c99: xor esi, esi */
  esi = 0;
/* 778c9b: jmp 0x778ca0 */
  goto L_778ca0;
L_778c9d: /* 778c9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_778ca0: /* 778ca0: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 778ca3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 778ca5: jae 0x778d4b */
  if (!cf) goto L_778d4b;
L_778cab: /* 778cab: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 778cae: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 778cb1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 778cb3: cmp dword ptr [edx + eax*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778cb6: je 0x778d42 */
  if (zf) goto L_778d42;
L_778cbc: /* 778cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778cbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778cbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778cbf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 778cc3: call 0x7788d0 */
  esp -= 4; W32(esp, 0x778cc8u); SPILL(); f_7788d0(); if (g_unwind) return; RELOAD();
/* 778cc8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778ccd: jne 0x778d40 */
  if (!zf) goto L_778d40;
L_778ccf: /* 778ccf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778cd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778cd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778cdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778cdc: mov esp, ebp */
  esp = ebp;
/* 778cde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778cdf: ret  */
  esp += 4; SPILL(); return;
L_778d40: /* 778d40: xor ecx, ecx */
  ecx = 0;
L_778d42: /* 778d42: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 778d45: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 778d46: jmp 0x778ca0 */
  goto L_778ca0;
L_778d4b: /* 778d4b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 778d4c: jmp 0x778c90 */
  goto L_778c90;
L_778d51: /* 778d51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778d54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778d55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778d56: mov eax, 1 */
  eax = 0x1u;
/* 778d5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778d62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778d63: mov esp, ebp */
  esp = ebp;
/* 778d65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778d66: ret  */
  esp += 4; SPILL(); return;
}

void f_778ce0(void) {
  LOAD_REGS();
L_778ce0: /* 778ce0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 778ce3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 778ce8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 778ceb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778cec: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 778cef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778cf4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_778cf4(); return;
}

void f_778cf4(void) {
  LOAD_REGS();
L_778cf4: /* 778cf4: push 0xa08298 */
  { uint32_t v = 0xa08298u; esp -= 4; W32(esp, v); }
/* 778cf9: push 0xac5500 */
  { uint32_t v = 0xac5500u; esp -= 4; W32(esp, v); }
/* 778cfe: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x778d04u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 778d04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778d0b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778d10u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_778d10(); return;
}

void f_778d10(void) {
  LOAD_REGS();
L_778d10: /* 778d10: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 778d13: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 778d18: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 778d1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778d1c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 778d1f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778d24u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_778d24(); return;
}

void f_778d24(void) {
  LOAD_REGS();
  goto L_778d24;
L_778c90: /* 778c90: cmp ebx, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 778c93: jae 0x778d51 */
  if (!cf) goto L_778d51;
L_778c99: /* 778c99: xor esi, esi */
  esi = 0;
/* 778c9b: jmp 0x778ca0 */
  goto L_778ca0;
L_778ca0: /* 778ca0: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 778ca3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 778ca5: jae 0x778d4b */
  if (!cf) goto L_778d4b;
L_778cab: /* 778cab: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 778cae: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 778cb1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 778cb3: cmp dword ptr [edx + eax*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778cb6: je 0x778d42 */
  if (zf) goto L_778d42;
L_778cbc: /* 778cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778cbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778cbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778cbf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 778cc3: call 0x7788d0 */
  esp -= 4; W32(esp, 0x778cc8u); SPILL(); f_7788d0(); if (g_unwind) return; RELOAD();
/* 778cc8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778ccd: jne 0x778d40 */
  if (!zf) goto L_778d40;
L_778ccf: /* 778ccf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778cd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778cd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778cdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778cdc: mov esp, ebp */
  esp = ebp;
/* 778cde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778cdf: ret  */
  esp += 4; SPILL(); return;
L_778d24: /* 778d24: push 0xa0827c */
  { uint32_t v = 0xa0827cu; esp -= 4; W32(esp, v); }
/* 778d29: push 0xac5508 */
  { uint32_t v = 0xac5508u; esp -= 4; W32(esp, v); }
/* 778d2e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x778d34u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 778d34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778d37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778d39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778d3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778d40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_778d40: /* 778d40: xor ecx, ecx */
  ecx = 0;
L_778d42: /* 778d42: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 778d45: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 778d46: jmp 0x778ca0 */
  goto L_778ca0;
L_778d4b: /* 778d4b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 778d4c: jmp 0x778c90 */
  goto L_778c90;
L_778d51: /* 778d51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778d54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778d55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778d56: mov eax, 1 */
  eax = 0x1u;
/* 778d5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778d62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778d63: mov esp, ebp */
  esp = ebp;
/* 778d65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778d66: ret  */
  esp += 4; SPILL(); return;
}

void f_778dc0(void) {
  LOAD_REGS();
L_778dc0: /* 778dc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 778dc1: mov ebp, esp */
  ebp = esp;
/* 778dc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 778dc5: push 0x9cc430 */
  { uint32_t v = 0x9cc430u; esp -= 4; W32(esp, v); }
/* 778dca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 778dd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778dd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 778dd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 778ddb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778ddc: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 778ddf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778de0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 778de3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778de4: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 778de7: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 778ded: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 778df3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 778df5: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778df7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 778dfa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 778e01: jne 0x778e51 */
  if (!zf) goto L_778e51;
L_778e03: /* 778e03: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778e05: jne 0x778e32 */
  if (!zf) goto L_778e32;
L_778e07: /* 778e07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778e09: jne 0x778e14 */
  if (!zf) goto L_778e14;
L_778e0b: /* 778e0b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 778e0e: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 778e11: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
L_778e14: /* 778e14: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 778e17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778e18: mov ecx, esi */
  ecx = esi;
/* 778e1a: call 0x778440 */
  esp -= 4; W32(esp, 0x778e1fu); SPILL(); f_778440(); if (g_unwind) return; RELOAD();
/* 778e1f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778e22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778e24: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 778e26: je 0x778e2d */
  if (zf) goto L_778e2d;
L_778e28: /* 778e28: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 778e2b: jmp 0x778e30 */
  goto L_778e30;
L_778e2d: /* 778e2d: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_778e30: /* 778e30: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_778e32: /* 778e32: mov ecx, esi */
  ecx = esi;
/* 778e34: call 0x778c60 */
  esp -= 4; W32(esp, 0x778e39u); SPILL(); f_778c60(); if (g_unwind) return; RELOAD();
/* 778e39: xor ecx, ecx */
  ecx = 0;
/* 778e3b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778e3d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 778e3f: je 0x778e46 */
  if (zf) goto L_778e46;
L_778e41: /* 778e41: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 778e44: jmp 0x778e49 */
  goto L_778e49;
L_778e46: /* 778e46: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_778e49: /* 778e49: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 778e4b: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 778e4e: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
L_778e51: /* 778e51: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 778e54: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 778e57: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 778e5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778e5b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 778e5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778e5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778e60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778e61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778e62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778e63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778e64: call 0x9294d0 */
  esp -= 4; W32(esp, 0x778e69u); SPILL(); f_9294d0(); if (g_unwind) return; RELOAD();
/* 778e69: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778e6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778e6e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 778e70: je 0x778e77 */
  if (zf) goto L_778e77;
L_778e72: /* 778e72: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 778e75: jmp 0x778e7a */
  goto L_778e7a;
L_778e77: /* 778e77: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_778e7a: /* 778e7a: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778e7c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 778e7e: jne 0x778ec2 */
  if (!zf) goto L_778ec2;
L_778e80: /* 778e80: xor eax, eax */
  eax = 0;
L_778e82: /* 778e82: cmp eax, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778e85: jge 0x778e96 */
  if ((sf == of)) goto L_778e96;
L_778e87: /* 778e87: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 778e8a: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 778e8d: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 778e93: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 778e94: jmp 0x778e82 */
  goto L_778e82;
L_778e96: /* 778e96: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778e99: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 778ea0: jne 0x778ec2 */
  if (!zf) goto L_778ec2;
L_778ea2: /* 778ea2: xor eax, eax */
  eax = 0;
L_778ea4: /* 778ea4: cmp eax, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778ea7: jge 0x778eac */
  if ((sf == of)) goto L_778eac;
L_778ea9: /* 778ea9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 778eaa: jmp 0x778ea4 */
  goto L_778ea4;
L_778eac: /* 778eac: mov eax, 1 */
  eax = 0x1u;
/* 778eb1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778eb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778ebb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778ebc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778ebd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778ebe: mov esp, ebp */
  esp = ebp;
/* 778ec0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778ec1: ret  */
  esp += 4; SPILL(); return;
L_778ec2: /* 778ec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 778ec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778ec6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778ec7: xor eax, eax */
  eax = 0;
/* 778ec9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 778ed0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778ed1: mov esp, ebp */
  esp = ebp;
/* 778ed3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778ed4: ret  */
  esp += 4; SPILL(); return;
}

void f_778ed5(void) {
  LOAD_REGS();
L_778ed5: /* 778ed5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 778ed8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 778edd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 778ee0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778ee1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 778ee4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778ee9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_778ee9(); return;
}

void f_778ee9(void) {
  LOAD_REGS();
L_778ee9: /* 778ee9: push 0xa082d4 */
  { uint32_t v = 0xa082d4u; esp -= 4; W32(esp, v); }
/* 778eee: push 0xac5518 */
  { uint32_t v = 0xac5518u; esp -= 4; W32(esp, v); }
/* 778ef3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x778ef9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 778ef9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778efe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 778f00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x778f05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_778f05: guest_badaddr(0x778f05); return;
}

void f_778f70(void) {
  LOAD_REGS();
L_778f70: /* 778f70: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 778f73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778f74: xor eax, eax */
  eax = 0;
/* 778f76: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 778f78: jle 0x778f8e */
  if ((zf || sf != of)) goto L_778f8e;
L_778f7a: /* 778f7a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 778f7e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 778f80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_778f82: /* 778f82: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778f84: je 0x778f91 */
  if (zf) goto L_778f91;
L_778f86: /* 778f86: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 778f87: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 778f8a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 778f8c: jl 0x778f82 */
  if ((sf != of)) goto L_778f82;
L_778f8e: /* 778f8e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_778f91: /* 778f91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778f92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_778fb0(void) {
  LOAD_REGS();
L_778fb0: /* 778fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778fb1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 778fb3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 778fb5: mov esi, ecx */
  esi = ecx;
/* 778fb7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x778fbdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 778fbd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 778fc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 778fc3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 778fc5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 778fc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778fc9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_778fe0(void) {
  LOAD_REGS();
L_778fe0: /* 778fe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 778fe4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 778fe6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778fe7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778fe8: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 778feb: mov eax, esi */
  eax = esi;
/* 778fed: imul eax, eax, 0x17 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x17u);
  eax = (uint32_t)r;
  }
/* 778ff0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778ff1: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* 778ff4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 778ff6: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 778ff7: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 778ff9: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 778ffc: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* 778fff: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779002: je 0x779023 */
  if (zf) goto L_779023;
L_779004: /* 779004: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
L_779006: /* 779006: mov ecx, eax */
  ecx = eax;
/* 779008: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 77900b: mov ebx, dword ptr [ecx + edi + 4] */
  ebx = R32((uint32_t)(ecx + edi + 0x4u));
/* 77900f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 779011: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779013: jne 0x77901c */
  if (!zf) goto L_77901c;
L_779015: /* 779015: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 779018: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77901a: je 0x77902b */
  if (zf) goto L_77902b;
L_77901c: /* 77901c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77901e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779021: jne 0x779006 */
  if (!zf) goto L_779006;
L_779023: /* 779023: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779024: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779025: xor eax, eax */
  eax = 0;
/* 779027: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779028: ret 4 */
  esp += 8; SPILL(); return;
L_77902b: /* 77902b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 77902e: lea eax, [eax + edi + 0xc] */
  eax = (uint32_t)(eax + edi + 0xcu);
/* 779032: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779033: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779034: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779035: ret 4 */
  esp += 8; SPILL(); return;
}

void f_779060(void) {
  LOAD_REGS();
L_779060: /* 779060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 779064: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 779066: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779067: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779068: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 77906b: mov eax, esi */
  eax = esi;
/* 77906d: imul eax, eax, 0x17 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x17u);
  eax = (uint32_t)r;
  }
/* 779070: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779071: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* 779074: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 779076: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 779077: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 779079: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 77907c: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* 77907f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779082: je 0x7790a3 */
  if (zf) goto L_7790a3;
L_779084: /* 779084: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
L_779086: /* 779086: mov ecx, eax */
  ecx = eax;
/* 779088: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 77908b: mov ebx, dword ptr [ecx + edi + 4] */
  ebx = R32((uint32_t)(ecx + edi + 0x4u));
/* 77908f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 779091: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779093: jne 0x77909c */
  if (!zf) goto L_77909c;
L_779095: /* 779095: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 779098: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77909a: je 0x7790ab */
  if (zf) goto L_7790ab;
L_77909c: /* 77909c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77909e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7790a1: jne 0x779086 */
  if (!zf) goto L_779086;
L_7790a3: /* 7790a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7790a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7790a5: xor eax, eax */
  eax = 0;
/* 7790a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7790a8: ret 4 */
  esp += 8; SPILL(); return;
L_7790ab: /* 7790ab: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7790ae: lea eax, [eax + edi + 0xc] */
  eax = (uint32_t)(eax + edi + 0xcu);
/* 7790b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7790b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7790b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7790b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7790e0(void) {
  LOAD_REGS();
L_7790e0: /* 7790e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7790e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7790e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7790e7: je 0x7790fe */
  if (zf) goto L_7790fe;
L_7790e9: /* 7790e9: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7790ee: mov ecx, esi */
  ecx = esi;
/* 7790f0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7790f6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7790f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7790f8: je 0x7790fe */
  if (zf) goto L_7790fe;
L_7790fa: /* 7790fa: mov eax, esi */
  eax = esi;
/* 7790fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7790fd: ret  */
  esp += 4; SPILL(); return;
L_7790fe: /* 7790fe: xor eax, eax */
  eax = 0;
/* 779100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779101: ret  */
  esp += 4; SPILL(); return;
}

void f_779120(void) {
  LOAD_REGS();
L_779120: /* 779120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779121: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 779125: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779127: je 0x77913e */
  if (zf) goto L_77913e;
L_779129: /* 779129: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 77912e: mov ecx, esi */
  ecx = esi;
/* 779130: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x779136u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 779136: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779138: je 0x77913e */
  if (zf) goto L_77913e;
L_77913a: /* 77913a: mov eax, esi */
  eax = esi;
/* 77913c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77913d: ret  */
  esp += 4; SPILL(); return;
L_77913e: /* 77913e: xor eax, eax */
  eax = 0;
/* 779140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779141: ret  */
  esp += 4; SPILL(); return;
}

void f_779160(void) {
  LOAD_REGS();
L_779160: /* 779160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 779161: mov ebp, esp */
  ebp = esp;
/* 779163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 779165: push 0x9cc440 */
  { uint32_t v = 0x9cc440u; esp -= 4; W32(esp, v); }
/* 77916a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 779170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 779178: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77917b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77917c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77917d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 779180: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779181: mov ebx, ecx */
  ebx = ecx;
/* 779183: mov edi, edx */
  edi = edx;
/* 779185: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 77918b: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 779191: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 779193: mov ecx, esi */
  ecx = esi;
/* 779195: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 779198: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77919f: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x7791a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7791a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7791a7: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7791a9: jne 0x77921f */
  if (!zf) goto L_77921f;
L_7791ab: /* 7791ab: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 7791b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7791b3: je 0x779209 */
  if (zf) goto L_779209;
L_7791b5: /* 7791b5: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7791ba: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7791c0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7791c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7791c2: je 0x779209 */
  if (zf) goto L_779209;
L_7791c4: /* 7791c4: mov edi, dword ptr [esi + 0xd0] */
  edi = R32((uint32_t)(esi + 0xd0u));
/* 7791ca: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7791cc: je 0x7791e3 */
  if (zf) goto L_7791e3;
L_7791ce: /* 7791ce: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7791d3: mov ecx, edi */
  ecx = edi;
/* 7791d5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7791dbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7791db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7791dd: je 0x7791e3 */
  if (zf) goto L_7791e3;
L_7791df: /* 7791df: mov ecx, edi */
  ecx = edi;
/* 7791e1: jmp 0x7791e5 */
  goto L_7791e5;
L_7791e3: /* 7791e3: xor ecx, ecx */
  ecx = 0;
L_7791e5: /* 7791e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7791e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7791e8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7791eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7791ee: mov esi, eax */
  esi = eax;
/* 7791f0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7791f2: je 0x779205 */
  if (zf) goto L_779205;
L_7791f4: /* 7791f4: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 7791f9: mov ecx, esi */
  ecx = esi;
/* 7791fb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x779201u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 779201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779203: jne 0x779207 */
  if (!zf) goto L_779207;
L_779205: /* 779205: xor esi, esi */
  esi = 0;
L_779207: /* 779207: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
L_779209: /* 779209: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 77920b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77920d: je 0x77921f */
  if (zf) goto L_77921f;
L_77920f: /* 77920f: mov ecx, dword ptr [eax + 0x2f4] */
  ecx = R32((uint32_t)(eax + 0x2f4u));
/* 779215: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779217: jne 0x77921f */
  if (!zf) goto L_77921f;
L_779219: /* 779219: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
L_77921f: /* 77921f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779222: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779223: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779224: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77922b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77922c: mov esp, ebp */
  esp = ebp;
/* 77922e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77922f: ret  */
  esp += 4; SPILL(); return;
}

void f_779230(void) {
  LOAD_REGS();
L_779230: /* 779230: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 779233: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 779238: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77923b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77923c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77923f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779244u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_779244(); return;
}

void f_779244(void) {
  LOAD_REGS();
L_779244: /* 779244: push 0xa08304 */
  { uint32_t v = 0xa08304u; esp -= 4; W32(esp, v); }
/* 779249: push 0xac4d10 */
  { uint32_t v = 0xac4d10u; esp -= 4; W32(esp, v); }
/* 77924e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x779254u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 779254: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779257: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779259: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77925b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779260u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_779260: guest_badaddr(0x779260); return;
}

void f_7792c0(void) {
  LOAD_REGS();
L_7792c0: /* 7792c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7792c1: mov ebp, esp */
  ebp = esp;
/* 7792c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7792c5: push 0x9cc450 */
  { uint32_t v = 0x9cc450u; esp -= 4; W32(esp, v); }
/* 7792ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7792d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7792d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7792d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7792db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7792dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7792dd: mov esi, edx */
  esi = edx;
/* 7792df: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 7792e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7792e3: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 7792e5: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7792e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7792ea: mov edi, ecx */
  edi = ecx;
/* 7792ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7792f3: je 0x7792fa */
  if (zf) goto L_7792fa;
L_7792f5: /* 7792f5: cmp byte ptr [edi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7792f8: jne 0x779333 */
  if (!zf) goto L_779333;
L_7792fa: /* 7792fa: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7792fc: je 0x7793c5 */
  if (zf) goto L_7793c5;
L_779302: /* 779302: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 779306: je 0x7793c5 */
  if (zf) goto L_7793c5;
L_77930c: /* 77930c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77930e: jne 0x779325 */
  if (!zf) goto L_779325;
L_779310: /* 779310: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 779312: push 0xac4d20 */
  { uint32_t v = 0xac4d20u; esp -= 4; W32(esp, v); }
/* 779317: push 0xac4d30 */
  { uint32_t v = 0xac4d30u; esp -= 4; W32(esp, v); }
/* 77931c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x779322u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 779322: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_779325: /* 779325: cmp byte ptr [esi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 779328: jne 0x779333 */
  if (!zf) goto L_779333;
L_77932a: /* 77932a: cmp byte ptr [edi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77932d: je 0x7793c5 */
  if (zf) goto L_7793c5;
L_779333: /* 779333: mov esi, dword ptr [esi + 0x30c] */
  esi = R32((uint32_t)(esi + 0x30cu));
/* 779339: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77933b: je 0x779351 */
  if (zf) goto L_779351;
L_77933d: /* 77933d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 779342: mov ecx, esi */
  ecx = esi;
/* 779344: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77934au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77934a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77934c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 77934f: jne 0x779358 */
  if (!zf) goto L_779358;
L_779351: /* 779351: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_779358: /* 779358: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 77935e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779360: je 0x77938c */
  if (zf) goto L_77938c;
L_779362: /* 779362: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 779367: mov ecx, esi */
  ecx = esi;
/* 779369: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77936fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77936f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779371: je 0x77938c */
  if (zf) goto L_77938c;
L_779373: /* 779373: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_779376: /* 779376: mov eax, 1 */
  eax = 0x1u;
/* 77937b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77937e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 779385: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779386: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779387: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779388: mov esp, ebp */
  esp = ebp;
/* 77938a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77938b: ret  */
  esp += 4; SPILL(); return;
L_77938c: /* 77938c: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 779393: jmp 0x779376 */
  goto L_779376;
L_7793c5: /* 7793c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7793c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7793c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7793ca: xor eax, eax */
  eax = 0;
/* 7793cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7793d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7793d4: mov esp, ebp */
  esp = ebp;
/* 7793d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7793d7: ret  */
  esp += 4; SPILL(); return;
}

void f_779395(void) {
  LOAD_REGS();
L_779395: /* 779395: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 779398: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77939d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7793a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7793a1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7793a4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7793a9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7793a9(); return;
}

void f_7793a9(void) {
  LOAD_REGS();
L_7793a9: /* 7793a9: push 0xa0831c */
  { uint32_t v = 0xa0831cu; esp -= 4; W32(esp, v); }
/* 7793ae: push 0xac4de8 */
  { uint32_t v = 0xac4de8u; esp -= 4; W32(esp, v); }
/* 7793b3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7793b9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7793b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7793bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7793be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7793c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7793c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7793c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7793c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7793c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7793ca: xor eax, eax */
  eax = 0;
/* 7793cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7793d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7793d4: mov esp, ebp */
  esp = ebp;
/* 7793d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7793d7: ret  */
  esp += 4; SPILL(); return;
}

void f_779430(void) {
  LOAD_REGS();
L_779430: /* 779430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 779431: mov ebp, esp */
  ebp = esp;
/* 779433: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 779435: push 0x9cc460 */
  { uint32_t v = 0x9cc460u; esp -= 4; W32(esp, v); }
/* 77943a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 779440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779441: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 779448: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77944b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77944c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77944d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77944e: mov ebx, ecx */
  ebx = ecx;
/* 779450: mov esi, dword ptr [ebx + 0x328] */
  esi = R32((uint32_t)(ebx + 0x328u));
/* 779456: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 779459: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_779460: /* 779460: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 779466: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 779467: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779469: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 77946c: jg 0x77955c */
  if ((!zf && sf == of)) goto L_77955c;
L_779472: /* 779472: mov ecx, dword ptr [ebx + 0x2dc] */
  ecx = R32((uint32_t)(ebx + 0x2dcu));
/* 779478: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 77947b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77947d: je 0x779556 */
  if (zf) goto L_779556;
L_779483: /* 779483: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779484: call 0x9287f0 */
  esp -= 4; W32(esp, 0x779489u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 779489: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77948c: je 0x779556 */
  if (zf) goto L_779556;
L_779492: /* 779492: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
L_779495: /* 779495: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77949b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77949e: jg 0x779556 */
  if ((!zf && sf == of)) goto L_779556;
L_7794a4: /* 7794a4: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7794aa: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7794ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7794af: je 0x77951a */
  if (zf) goto L_77951a;
L_7794b1: /* 7794b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7794b2: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7794b7u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7794b7: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7794ba: je 0x77951a */
  if (zf) goto L_77951a;
L_7794bc: /* 7794bc: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7794be: mov eax, esi */
  eax = esi;
/* 7794c0: mov ecx, edi */
  ecx = edi;
/* 7794c2: jbe 0x7794c8 */
  if ((cf | zf)) goto L_7794c8;
L_7794c4: /* 7794c4: mov eax, edi */
  eax = edi;
/* 7794c6: mov ecx, esi */
  ecx = esi;
L_7794c8: /* 7794c8: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7794cb: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7794ce: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7794d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7794d2: lea ecx, [ebx + 0x330] */
  ecx = (uint32_t)(ebx + 0x330u);
/* 7794d8: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7794ddu); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7794dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7794df: jne 0x77951a */
  if (!zf) goto L_77951a;
L_7794e1: /* 7794e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7794e2: mov edx, edi */
  edx = edi;
/* 7794e4: call 0x778140 */
  esp -= 4; W32(esp, 0x7794e9u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7794e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7794ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7794ee: je 0x77951a */
  if (zf) goto L_77951a;
L_7794f0: /* 7794f0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7794f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7794f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7794f7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7794fdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7794fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 779500: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779502: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 779505: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 779507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779509: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 77950c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779512u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779512: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 779515: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779517: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_77951a: /* 77951a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77951d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779520: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 779521: jmp 0x779495 */
  goto L_779495;
L_779556: /* 779556: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 779557: jmp 0x779460 */
  goto L_779460;
L_77955c: /* 77955c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77955f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779560: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779561: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 779568: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779569: mov esp, ebp */
  esp = ebp;
/* 77956b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77956c: ret  */
  esp += 4; SPILL(); return;
}

void f_779526(void) {
  LOAD_REGS();
L_779526: /* 779526: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779529: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77952e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 779531: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779532: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 779535: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77953au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77953a(); return;
}

void f_77953a(void) {
  LOAD_REGS();
  goto L_77953a;
L_779460: /* 779460: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 779466: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 779467: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779469: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 77946c: jg 0x77955c */
  if ((!zf && sf == of)) goto L_77955c;
L_779472: /* 779472: mov ecx, dword ptr [ebx + 0x2dc] */
  ecx = R32((uint32_t)(ebx + 0x2dcu));
/* 779478: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 77947b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77947d: je 0x779556 */
  if (zf) goto L_779556;
L_779483: /* 779483: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779484: call 0x9287f0 */
  esp -= 4; W32(esp, 0x779489u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 779489: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77948c: je 0x779556 */
  if (zf) goto L_779556;
L_779492: /* 779492: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
L_779495: /* 779495: cmp eax, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77949b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77949e: jg 0x779556 */
  if ((!zf && sf == of)) goto L_779556;
L_7794a4: /* 7794a4: mov edx, dword ptr [ebx + 0x2dc] */
  edx = R32((uint32_t)(ebx + 0x2dcu));
/* 7794aa: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7794ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7794af: je 0x77951a */
  if (zf) goto L_77951a;
L_7794b1: /* 7794b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7794b2: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7794b7u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7794b7: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7794ba: je 0x77951a */
  if (zf) goto L_77951a;
L_7794bc: /* 7794bc: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7794be: mov eax, esi */
  eax = esi;
/* 7794c0: mov ecx, edi */
  ecx = edi;
/* 7794c2: jbe 0x7794c8 */
  if ((cf | zf)) goto L_7794c8;
L_7794c4: /* 7794c4: mov eax, edi */
  eax = edi;
/* 7794c6: mov ecx, esi */
  ecx = esi;
L_7794c8: /* 7794c8: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7794cb: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7794ce: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7794d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7794d2: lea ecx, [ebx + 0x330] */
  ecx = (uint32_t)(ebx + 0x330u);
/* 7794d8: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7794ddu); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7794dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7794df: jne 0x77951a */
  if (!zf) goto L_77951a;
L_7794e1: /* 7794e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7794e2: mov edx, edi */
  edx = edi;
/* 7794e4: call 0x778140 */
  esp -= 4; W32(esp, 0x7794e9u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7794e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7794ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7794ee: je 0x77951a */
  if (zf) goto L_77951a;
L_7794f0: /* 7794f0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7794f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7794f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7794f7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7794fdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7794fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 779500: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779502: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 779505: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 779507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779509: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 77950c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779512u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779512: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 779515: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779517: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_77951a: /* 77951a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77951d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779520: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 779521: jmp 0x779495 */
  goto L_779495;
L_77953a: /* 77953a: push 0xa0834c */
  { uint32_t v = 0xa0834cu; esp -= 4; W32(esp, v); }
/* 77953f: push 0xac4df0 */
  { uint32_t v = 0xac4df0u; esp -= 4; W32(esp, v); }
/* 779544: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77954au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77954a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77954d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77954f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779551: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779556u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_779556: /* 779556: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 779557: jmp 0x779460 */
  goto L_779460;
L_77955c: /* 77955c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77955f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779560: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779561: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 779568: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779569: mov esp, ebp */
  esp = ebp;
/* 77956b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77956c: ret  */
  esp += 4; SPILL(); return;
}

void f_7795c0(void) {
  LOAD_REGS();
L_7795c0: /* 7795c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7795c1: mov ebp, esp */
  ebp = esp;
/* 7795c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7795c5: push 0x9cc470 */
  { uint32_t v = 0x9cc470u; esp -= 4; W32(esp, v); }
/* 7795ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7795d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7795d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7795d8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7795db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7795dc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7795df: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7795e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7795e2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7795e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7795e6: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7795e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7795ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7795f3: je 0x779612 */
  if (zf) goto L_779612;
L_7795f5: /* 7795f5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7795f7: je 0x779612 */
  if (zf) goto L_779612;
L_7795f9: /* 7795f9: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7795fc: mov eax, esi */
  eax = esi;
/* 7795fe: mov esi, edi */
  esi = edi;
/* 779600: mov ecx, ebx */
  ecx = ebx;
/* 779602: mov edi, eax */
  edi = eax;
/* 779604: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 779607: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 77960a: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 77960d: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 779610: mov ebx, edx */
  ebx = edx;
L_779612: /* 779612: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779614: je 0x77972b */
  if (zf) goto L_77972b;
L_77961a: /* 77961a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77961b: call 0x9287f0 */
  esp -= 4; W32(esp, 0x779620u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 779620: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 779623: je 0x77967f */
  if (zf) goto L_77967f;
L_779625: /* 779625: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779627: je 0x77967f */
  if (zf) goto L_77967f;
L_779629: /* 779629: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77962a: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77962fu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77962f: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 779632: je 0x77967f */
  if (zf) goto L_77967f;
L_779634: /* 779634: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 779636: mov eax, edi */
  eax = edi;
/* 779638: mov ecx, esi */
  ecx = esi;
/* 77963a: jbe 0x779640 */
  if ((cf | zf)) goto L_779640;
L_77963c: /* 77963c: mov eax, esi */
  eax = esi;
/* 77963e: mov ecx, edi */
  ecx = edi;
L_779640: /* 779640: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 779643: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 779646: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 779649: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 77964c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77964d: call 0x6c1735 */
  esp -= 4; W32(esp, 0x779652u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 779652: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779654: jne 0x77966e */
  if (!zf) goto L_77966e;
L_779656: /* 779656: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 779659: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77965a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 77965d: call 0x6c5beb */
  esp -= 4; W32(esp, 0x779662u); SPILL(); f_6c5beb(); if (g_unwind) return; RELOAD();
/* 779662: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 779665: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 779668: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779669: call 0x6c5beb */
  esp -= 4; W32(esp, 0x77966eu); SPILL(); f_6c5beb(); if (g_unwind) return; RELOAD();
L_77966e: /* 77966e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779671: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779672: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779673: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77967a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77967b: mov esp, ebp */
  esp = ebp;
/* 77967d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77967e: ret  */
  esp += 4; SPILL(); return;
L_77967f: /* 77967f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779680: call 0x9287f0 */
  esp -= 4; W32(esp, 0x779685u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 779685: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 779688: je 0x77972b */
  if (zf) goto L_77972b;
L_77968e: /* 77968e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 779691: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779693: je 0x77972b */
  if (zf) goto L_77972b;
L_779699: /* 779699: mov ebx, dword ptr [eax + 0x328] */
  ebx = R32((uint32_t)(eax + 0x328u));
/* 77969f: nop  */
L_7796a0: /* 7796a0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7796a3: cmp ebx, dword ptr [eax + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7796a9: jg 0x77966e */
  if ((!zf && sf == of)) goto L_77966e;
L_7796ab: /* 7796ab: mov ecx, dword ptr [eax + 0x2dc] */
  ecx = R32((uint32_t)(eax + 0x2dcu));
/* 7796b1: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 7796b4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796b6: je 0x779725 */
  if (zf) goto L_779725;
L_7796b8: /* 7796b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7796b9: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7796beu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7796be: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7796c1: je 0x779725 */
  if (zf) goto L_779725;
L_7796c3: /* 7796c3: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7796c5: mov eax, edi */
  eax = edi;
/* 7796c7: mov ecx, esi */
  ecx = esi;
/* 7796c9: jbe 0x7796cf */
  if ((cf | zf)) goto L_7796cf;
L_7796cb: /* 7796cb: mov eax, esi */
  eax = esi;
/* 7796cd: mov ecx, edi */
  ecx = edi;
L_7796cf: /* 7796cf: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7796d2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7796d5: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7796d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7796d9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7796dc: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7796e1u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7796e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796e3: jne 0x779725 */
  if (!zf) goto L_779725;
L_7796e5: /* 7796e5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7796e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796ea: je 0x7796fb */
  if (zf) goto L_7796fb;
L_7796ec: /* 7796ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7796ed: mov edx, esi */
  edx = esi;
/* 7796ef: call 0x778140 */
  esp -= 4; W32(esp, 0x7796f4u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7796f4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7796f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796f9: je 0x779725 */
  if (zf) goto L_779725;
L_7796fb: /* 7796fb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7796fe: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 779700: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779702: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779708u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779708: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 77970b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77970d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 779710: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 779712: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779714: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 779717: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x77971du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 77971d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 779720: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779722: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_779725: /* 779725: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 779726: jmp 0x7796a0 */
  goto L_7796a0;
L_77972b: /* 77972b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77972d: je 0x77966e */
  if (zf) goto L_77966e;
L_779733: /* 779733: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 779736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779738: je 0x77966e */
  if (zf) goto L_77966e;
L_77973e: /* 77973e: mov esi, dword ptr [ebx + 0x328] */
  esi = R32((uint32_t)(ebx + 0x328u));
L_779744: /* 779744: cmp esi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77974a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 77974d: jg 0x77966e */
  if ((!zf && sf == of)) goto L_77966e;
L_779753: /* 779753: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 779759: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 77975c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77975e: je 0x779847 */
  if (zf) goto L_779847;
L_779764: /* 779764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779765: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77976au); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77976a: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77976d: je 0x779847 */
  if (zf) goto L_779847;
L_779773: /* 779773: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 779776: mov ebx, dword ptr [ecx + 0x328] */
  ebx = R32((uint32_t)(ecx + 0x328u));
L_77977c: /* 77977c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 77977f: cmp ebx, dword ptr [edx + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779785: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 779788: jg 0x779841 */
  if ((!zf && sf == of)) goto L_779841;
L_77978e: /* 77978e: mov eax, edx */
  eax = edx;
/* 779790: mov ecx, dword ptr [eax + 0x2dc] */
  ecx = R32((uint32_t)(eax + 0x2dcu));
/* 779796: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 779799: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77979b: je 0x77980b */
  if (zf) goto L_77980b;
L_77979d: /* 77979d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77979e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7797a3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7797a3: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7797a6: je 0x77980b */
  if (zf) goto L_77980b;
L_7797a8: /* 7797a8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7797aa: mov eax, esi */
  eax = esi;
/* 7797ac: mov ecx, edi */
  ecx = edi;
/* 7797ae: jbe 0x7797b4 */
  if ((cf | zf)) goto L_7797b4;
L_7797b0: /* 7797b0: mov eax, edi */
  eax = edi;
/* 7797b2: mov ecx, esi */
  ecx = esi;
L_7797b4: /* 7797b4: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7797b7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7797ba: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7797bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7797be: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7797c1: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7797c6u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7797c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797c8: jne 0x77980b */
  if (!zf) goto L_77980b;
L_7797ca: /* 7797ca: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7797cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797cf: je 0x7797e0 */
  if (zf) goto L_7797e0;
L_7797d1: /* 7797d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7797d2: mov edx, edi */
  edx = edi;
/* 7797d4: call 0x778140 */
  esp -= 4; W32(esp, 0x7797d9u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7797d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7797dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797de: je 0x77980b */
  if (zf) goto L_77980b;
L_7797e0: /* 7797e0: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 7797e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797e7: mov ecx, ebx */
  ecx = ebx;
/* 7797e9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7797efu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7797ef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7797f1: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 7797f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797f6: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7797f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797fb: mov ecx, ebx */
  ecx = ebx;
/* 7797fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779803u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779803: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 779805: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 779808: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_77980b: /* 77980b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 77980c: jmp 0x77977c */
  goto L_77977c;
L_779841: /* 779841: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 779844: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_779847: /* 779847: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 779848: jmp 0x779744 */
  goto L_779744;
}

void f_77967f(void) {
  LOAD_REGS();
  goto L_77967f;
L_77966e: /* 77966e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779671: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779672: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779673: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77967a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77967b: mov esp, ebp */
  esp = ebp;
/* 77967d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77967e: ret  */
  esp += 4; SPILL(); return;
L_77967f: /* 77967f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779680: call 0x9287f0 */
  esp -= 4; W32(esp, 0x779685u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 779685: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 779688: je 0x77972b */
  if (zf) goto L_77972b;
L_77968e: /* 77968e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 779691: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779693: je 0x77972b */
  if (zf) goto L_77972b;
L_779699: /* 779699: mov ebx, dword ptr [eax + 0x328] */
  ebx = R32((uint32_t)(eax + 0x328u));
/* 77969f: nop  */
L_7796a0: /* 7796a0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7796a3: cmp ebx, dword ptr [eax + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7796a9: jg 0x77966e */
  if ((!zf && sf == of)) goto L_77966e;
L_7796ab: /* 7796ab: mov ecx, dword ptr [eax + 0x2dc] */
  ecx = R32((uint32_t)(eax + 0x2dcu));
/* 7796b1: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 7796b4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796b6: je 0x779725 */
  if (zf) goto L_779725;
L_7796b8: /* 7796b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7796b9: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7796beu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7796be: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7796c1: je 0x779725 */
  if (zf) goto L_779725;
L_7796c3: /* 7796c3: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7796c5: mov eax, edi */
  eax = edi;
/* 7796c7: mov ecx, esi */
  ecx = esi;
/* 7796c9: jbe 0x7796cf */
  if ((cf | zf)) goto L_7796cf;
L_7796cb: /* 7796cb: mov eax, esi */
  eax = esi;
/* 7796cd: mov ecx, edi */
  ecx = edi;
L_7796cf: /* 7796cf: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7796d2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7796d5: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7796d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7796d9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7796dc: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7796e1u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7796e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796e3: jne 0x779725 */
  if (!zf) goto L_779725;
L_7796e5: /* 7796e5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7796e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796ea: je 0x7796fb */
  if (zf) goto L_7796fb;
L_7796ec: /* 7796ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7796ed: mov edx, esi */
  edx = esi;
/* 7796ef: call 0x778140 */
  esp -= 4; W32(esp, 0x7796f4u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7796f4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7796f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7796f9: je 0x779725 */
  if (zf) goto L_779725;
L_7796fb: /* 7796fb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7796fe: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 779700: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779702: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779708u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779708: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 77970b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77970d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 779710: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 779712: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779714: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 779717: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x77971du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 77971d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 779720: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779722: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_779725: /* 779725: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 779726: jmp 0x7796a0 */
  goto L_7796a0;
L_77972b: /* 77972b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77972d: je 0x77966e */
  if (zf) goto L_77966e;
L_779733: /* 779733: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 779736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779738: je 0x77966e */
  if (zf) goto L_77966e;
L_77973e: /* 77973e: mov esi, dword ptr [ebx + 0x328] */
  esi = R32((uint32_t)(ebx + 0x328u));
L_779744: /* 779744: cmp esi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77974a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 77974d: jg 0x77966e */
  if ((!zf && sf == of)) goto L_77966e;
L_779753: /* 779753: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 779759: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 77975c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77975e: je 0x779847 */
  if (zf) goto L_779847;
L_779764: /* 779764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779765: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77976au); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77976a: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77976d: je 0x779847 */
  if (zf) goto L_779847;
L_779773: /* 779773: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 779776: mov ebx, dword ptr [ecx + 0x328] */
  ebx = R32((uint32_t)(ecx + 0x328u));
L_77977c: /* 77977c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 77977f: cmp ebx, dword ptr [edx + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779785: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 779788: jg 0x779841 */
  if ((!zf && sf == of)) goto L_779841;
L_77978e: /* 77978e: mov eax, edx */
  eax = edx;
/* 779790: mov ecx, dword ptr [eax + 0x2dc] */
  ecx = R32((uint32_t)(eax + 0x2dcu));
/* 779796: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 779799: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77979b: je 0x77980b */
  if (zf) goto L_77980b;
L_77979d: /* 77979d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77979e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7797a3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7797a3: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7797a6: je 0x77980b */
  if (zf) goto L_77980b;
L_7797a8: /* 7797a8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7797aa: mov eax, esi */
  eax = esi;
/* 7797ac: mov ecx, edi */
  ecx = edi;
/* 7797ae: jbe 0x7797b4 */
  if ((cf | zf)) goto L_7797b4;
L_7797b0: /* 7797b0: mov eax, edi */
  eax = edi;
/* 7797b2: mov ecx, esi */
  ecx = esi;
L_7797b4: /* 7797b4: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7797b7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7797ba: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7797bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7797be: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7797c1: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7797c6u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7797c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797c8: jne 0x77980b */
  if (!zf) goto L_77980b;
L_7797ca: /* 7797ca: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7797cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797cf: je 0x7797e0 */
  if (zf) goto L_7797e0;
L_7797d1: /* 7797d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7797d2: mov edx, edi */
  edx = edi;
/* 7797d4: call 0x778140 */
  esp -= 4; W32(esp, 0x7797d9u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7797d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7797dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797de: je 0x77980b */
  if (zf) goto L_77980b;
L_7797e0: /* 7797e0: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 7797e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797e7: mov ecx, ebx */
  ecx = ebx;
/* 7797e9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7797efu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7797ef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7797f1: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 7797f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797f6: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7797f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797fb: mov ecx, ebx */
  ecx = ebx;
/* 7797fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779803u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779803: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 779805: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 779808: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_77980b: /* 77980b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 77980c: jmp 0x77977c */
  goto L_77977c;
L_779841: /* 779841: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 779844: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_779847: /* 779847: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 779848: jmp 0x779744 */
  goto L_779744;
}

void f_77972b(void) {
  LOAD_REGS();
  goto L_77972b;
L_77966e: /* 77966e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779671: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779672: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779673: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77967a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77967b: mov esp, ebp */
  esp = ebp;
/* 77967d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77967e: ret  */
  esp += 4; SPILL(); return;
L_77972b: /* 77972b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77972d: je 0x77966e */
  if (zf) goto L_77966e;
L_779733: /* 779733: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 779736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779738: je 0x77966e */
  if (zf) goto L_77966e;
L_77973e: /* 77973e: mov esi, dword ptr [ebx + 0x328] */
  esi = R32((uint32_t)(ebx + 0x328u));
L_779744: /* 779744: cmp esi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77974a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 77974d: jg 0x77966e */
  if ((!zf && sf == of)) goto L_77966e;
L_779753: /* 779753: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 779759: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 77975c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77975e: je 0x779847 */
  if (zf) goto L_779847;
L_779764: /* 779764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779765: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77976au); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77976a: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77976d: je 0x779847 */
  if (zf) goto L_779847;
L_779773: /* 779773: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 779776: mov ebx, dword ptr [ecx + 0x328] */
  ebx = R32((uint32_t)(ecx + 0x328u));
L_77977c: /* 77977c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 77977f: cmp ebx, dword ptr [edx + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779785: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 779788: jg 0x779841 */
  if ((!zf && sf == of)) goto L_779841;
L_77978e: /* 77978e: mov eax, edx */
  eax = edx;
/* 779790: mov ecx, dword ptr [eax + 0x2dc] */
  ecx = R32((uint32_t)(eax + 0x2dcu));
/* 779796: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 779799: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77979b: je 0x77980b */
  if (zf) goto L_77980b;
L_77979d: /* 77979d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77979e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7797a3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7797a3: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7797a6: je 0x77980b */
  if (zf) goto L_77980b;
L_7797a8: /* 7797a8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7797aa: mov eax, esi */
  eax = esi;
/* 7797ac: mov ecx, edi */
  ecx = edi;
/* 7797ae: jbe 0x7797b4 */
  if ((cf | zf)) goto L_7797b4;
L_7797b0: /* 7797b0: mov eax, edi */
  eax = edi;
/* 7797b2: mov ecx, esi */
  ecx = esi;
L_7797b4: /* 7797b4: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7797b7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7797ba: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7797bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7797be: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7797c1: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7797c6u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7797c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797c8: jne 0x77980b */
  if (!zf) goto L_77980b;
L_7797ca: /* 7797ca: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7797cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797cf: je 0x7797e0 */
  if (zf) goto L_7797e0;
L_7797d1: /* 7797d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7797d2: mov edx, edi */
  edx = edi;
/* 7797d4: call 0x778140 */
  esp -= 4; W32(esp, 0x7797d9u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7797d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7797dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797de: je 0x77980b */
  if (zf) goto L_77980b;
L_7797e0: /* 7797e0: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 7797e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797e7: mov ecx, ebx */
  ecx = ebx;
/* 7797e9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7797efu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7797ef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7797f1: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 7797f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797f6: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7797f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797fb: mov ecx, ebx */
  ecx = ebx;
/* 7797fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779803u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779803: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 779805: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 779808: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_77980b: /* 77980b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 77980c: jmp 0x77977c */
  goto L_77977c;
L_779841: /* 779841: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 779844: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_779847: /* 779847: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 779848: jmp 0x779744 */
  goto L_779744;
}

void f_779811(void) {
  LOAD_REGS();
L_779811: /* 779811: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779814: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 779819: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 77981c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77981d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 779820: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779825u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_779825(); return;
}

void f_779825(void) {
  LOAD_REGS();
  goto L_779825;
L_77966e: /* 77966e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779671: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779672: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779673: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77967a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77967b: mov esp, ebp */
  esp = ebp;
/* 77967d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77967e: ret  */
  esp += 4; SPILL(); return;
L_779744: /* 779744: cmp esi, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77974a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 77974d: jg 0x77966e */
  if ((!zf && sf == of)) goto L_77966e;
L_779753: /* 779753: mov eax, dword ptr [ebx + 0x2dc] */
  eax = R32((uint32_t)(ebx + 0x2dcu));
/* 779759: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 77975c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77975e: je 0x779847 */
  if (zf) goto L_779847;
L_779764: /* 779764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779765: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77976au); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77976a: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77976d: je 0x779847 */
  if (zf) goto L_779847;
L_779773: /* 779773: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 779776: mov ebx, dword ptr [ecx + 0x328] */
  ebx = R32((uint32_t)(ecx + 0x328u));
L_77977c: /* 77977c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 77977f: cmp ebx, dword ptr [edx + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779785: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 779788: jg 0x779841 */
  if ((!zf && sf == of)) goto L_779841;
L_77978e: /* 77978e: mov eax, edx */
  eax = edx;
/* 779790: mov ecx, dword ptr [eax + 0x2dc] */
  ecx = R32((uint32_t)(eax + 0x2dcu));
/* 779796: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 779799: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77979b: je 0x77980b */
  if (zf) goto L_77980b;
L_77979d: /* 77979d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77979e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7797a3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7797a3: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7797a6: je 0x77980b */
  if (zf) goto L_77980b;
L_7797a8: /* 7797a8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7797aa: mov eax, esi */
  eax = esi;
/* 7797ac: mov ecx, edi */
  ecx = edi;
/* 7797ae: jbe 0x7797b4 */
  if ((cf | zf)) goto L_7797b4;
L_7797b0: /* 7797b0: mov eax, edi */
  eax = edi;
/* 7797b2: mov ecx, esi */
  ecx = esi;
L_7797b4: /* 7797b4: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7797b7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7797ba: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7797bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7797be: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7797c1: call 0x6c1735 */
  esp -= 4; W32(esp, 0x7797c6u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 7797c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797c8: jne 0x77980b */
  if (!zf) goto L_77980b;
L_7797ca: /* 7797ca: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7797cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797cf: je 0x7797e0 */
  if (zf) goto L_7797e0;
L_7797d1: /* 7797d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7797d2: mov edx, edi */
  edx = edi;
/* 7797d4: call 0x778140 */
  esp -= 4; W32(esp, 0x7797d9u); SPILL(); f_778140(); if (g_unwind) return; RELOAD();
/* 7797d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7797dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7797de: je 0x77980b */
  if (zf) goto L_77980b;
L_7797e0: /* 7797e0: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 7797e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797e7: mov ecx, ebx */
  ecx = ebx;
/* 7797e9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7797efu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7797ef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7797f1: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 7797f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7797f6: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7797f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7797fb: mov ecx, ebx */
  ecx = ebx;
/* 7797fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779803u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779803: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 779805: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 779808: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_77980b: /* 77980b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 77980c: jmp 0x77977c */
  goto L_77977c;
L_779825: /* 779825: push 0xa08388 */
  { uint32_t v = 0xa08388u; esp -= 4; W32(esp, v); }
/* 77982a: push 0xac4df8 */
  { uint32_t v = 0xac4df8u; esp -= 4; W32(esp, v); }
/* 77982f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x779835u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 779835: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779838: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77983a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77983c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779841u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_779841: /* 779841: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 779844: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_779847: /* 779847: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 779848: jmp 0x779744 */
  goto L_779744;
}

void f_779900(void) {
  LOAD_REGS();
L_779900: /* 779900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 779901: mov ebp, esp */
  ebp = esp;
/* 779903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 779905: push 0x9cc480 */
  { uint32_t v = 0x9cc480u; esp -= 4; W32(esp, v); }
/* 77990a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 779910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 779918: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77991b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77991e: mov ecx, dword ptr [eax + 0x115c] */
  ecx = R32((uint32_t)(eax + 0x115cu));
/* 779924: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779925: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779926: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 779929: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77992a: mov edi, dword ptr [eax + 0x1160] */
  edi = R32((uint32_t)(eax + 0x1160u));
/* 779930: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 779933: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 779936: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 779939: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77993c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77993f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 779942: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 779949: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 77994c: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 77994f: call 0x99cc00 */
  esp -= 4; W32(esp, 0x779954u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 779954: mov ebx, esp */
  ebx = esp;
/* 779956: mov eax, 0x9c40 */
  eax = 0x9c40u;
/* 77995b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77995e: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 779961: call 0x99cc00 */
  esp -= 4; W32(esp, 0x779966u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 779966: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 779969: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 77996c: cmp edx, dword ptr [esi + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77996f: mov dword ptr [ebp - 0x28], esp */
  W32((uint32_t)(ebp + 0xffffffd8u), esp);
/* 779972: je 0x779cc3 */
  if (zf) goto L_779cc3;
L_779978: /* 779978: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 77997b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77997c: call 0x9297b0 */
  esp -= 4; W32(esp, 0x779981u); SPILL(); f_9297b0(); if (g_unwind) return; RELOAD();
/* 779981: xor eax, eax */
  eax = 0;
L_779983: /* 779983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779985: jne 0x779cc3 */
  if (!zf) goto L_779cc3;
L_77998b: /* 77998b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77998e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 779991: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 779996: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 779999: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77999a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77999b: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 77999e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77999f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7799a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7799a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7799a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7799a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7799a6: call 0x6c8ada */
  esp -= 4; W32(esp, 0x7799abu); SPILL(); f_6c8ada(); if (g_unwind) return; RELOAD();
/* 7799ab: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7799ae: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 7799b1: xor eax, eax */
  eax = 0;
/* 7799b3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_7799b6: /* 7799b6: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7799b9: jge 0x779c88 */
  if ((sf == of)) goto L_779c88;
L_7799bf: /* 7799bf: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7799c2: mov edi, dword ptr [ebx + eax*4] */
  edi = R32((uint32_t)(ebx + eax*4));
/* 7799c5: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7799c7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7799ca: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 7799cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7799ce: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7799d1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7799d4: call 0x9289c0 */
  esp -= 4; W32(esp, 0x7799d9u); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 7799d9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7799dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7799dd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7799e0: call 0x9289c0 */
  esp -= 4; W32(esp, 0x7799e5u); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 7799e5: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7799e8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7799ea: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7799ed: je 0x779a23 */
  if (zf) goto L_779a23;
L_7799ef: /* 7799ef: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7799f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7799f3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7799f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7799f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7799f8: call 0x925fe0 */
  esp -= 4; W32(esp, 0x7799fdu); SPILL(); f_925fe0(); if (g_unwind) return; RELOAD();
/* 7799fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 779a00: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 779a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a05: je 0x779a0b */
  if (zf) goto L_779a0b;
L_779a07: /* 779a07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779a09: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a0b: /* 779a0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 779a0e: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 779a11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a13: je 0x779a19 */
  if (zf) goto L_779a19;
L_779a15: /* 779a15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a17: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a19: /* 779a19: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 779a1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a1e: je 0x779a23 */
  if (zf) goto L_779a23;
L_779a20: /* 779a20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a21: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a23: /* 779a23: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 779a26: mov ebx, dword ptr [edi + 0x18] */
  ebx = R32((uint32_t)(edi + 0x18u));
/* 779a29: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a2b: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 779a2e: jne 0x779a47 */
  if (!zf) goto L_779a47;
L_779a30: /* 779a30: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 779a33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779a35: call 0x778290 */
  esp -= 4; W32(esp, 0x779a3au); SPILL(); f_778290(); if (g_unwind) return; RELOAD();
/* 779a3a: mov ebx, eax */
  ebx = eax;
/* 779a3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779a3f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a41: je 0x779c6f */
  if (zf) goto L_779c6f;
L_779a47: /* 779a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a48: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 779a4c: call 0x90fe20 */
  esp -= 4; W32(esp, 0x779a51u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 779a51: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779a54: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 779a57: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 779a5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779a5d: mov esi, eax */
  esi = eax;
/* 779a5f: call 0x925ea0 */
  esp -= 4; W32(esp, 0x779a64u); SPILL(); f_925ea0(); if (g_unwind) return; RELOAD();
/* 779a64: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 779a67: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 779a6a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779a6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a70: call 0x925f70 */
  esp -= 4; W32(esp, 0x779a75u); SPILL(); f_925f70(); if (g_unwind) return; RELOAD();
/* 779a75: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 779a78: xor edi, edi */
  edi = 0;
L_779a7a: /* 779a7a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779a7d: cmp edi, dword ptr [edx + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779a80: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 779a83: jge 0x779b60 */
  if ((sf == of)) goto L_779b60;
L_779a89: /* 779a89: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779a8f: jne 0x779a99 */
  if (!zf) goto L_779a99;
L_779a91: /* 779a91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a92: call 0x90ff80 */
  esp -= 4; W32(esp, 0x779a97u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
/* 779a97: mov esi, eax */
  esi = eax;
L_779a99: /* 779a99: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a9b: je 0x779b40 */
  if (zf) goto L_779b40;
L_779aa1: /* 779aa1: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779aa7: je 0x779b40 */
  if (zf) goto L_779b40;
L_779aad: /* 779aad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779aae: call 0x90fe40 */
  esp -= 4; W32(esp, 0x779ab3u); SPILL(); f_90fe40(); if (g_unwind) return; RELOAD();
/* 779ab3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779ab5: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 779ab8: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 779abb: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 779abe: je 0x779adf */
  if (zf) goto L_779adf;
L_779ac0: /* 779ac0: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 779ac3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 779ac6: fchs  */
  ST0 = -ST0;
/* 779ac8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 779acc: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 779acf: fchs  */
  ST0 = -ST0;
/* 779ad1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 779ad5: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 779ad8: fchs  */
  ST0 = -ST0;
/* 779ada: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 779add: jmp 0x779aeb */
  goto L_779aeb;
L_779adf: /* 779adf: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 779ae2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 779ae5: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 779ae8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779ae9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779aea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_779aeb: /* 779aeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779aec: call 0x90fb10 */
  esp -= 4; W32(esp, 0x779af1u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 779af1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 779af4: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 779af7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 779af9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779afa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779afb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779afd: call 0x90fae0 */
  esp -= 4; W32(esp, 0x779b02u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 779b02: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 779b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b06: fchs  */
  ST0 = -ST0;
/* 779b08: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 779b0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b0c: call 0x90fb40 */
  esp -= 4; W32(esp, 0x779b11u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 779b11: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 779b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b16: call 0x90fb60 */
  esp -= 4; W32(esp, 0x779b1bu); SPILL(); f_90fb60(); if (g_unwind) return; RELOAD();
/* 779b1b: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 779b1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b20: je 0x779b2e */
  if (zf) goto L_779b2e;
L_779b22: /* 779b22: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779b25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779b27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b28: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779b2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 779b2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b2c: je 0x779b37 */
  if (zf) goto L_779b37;
L_779b2e: /* 779b2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b30: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779b35u); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779b35: mov esi, eax */
  esi = eax;
L_779b37: /* 779b37: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 779b3a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 779b3b: jmp 0x779a7a */
  goto L_779a7a;
L_779b40: /* 779b40: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 779b46: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 779b48: push 0xac5418 */
  { uint32_t v = 0xac5418u; esp -= 4; W32(esp, v); }
/* 779b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b4e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x779b54u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 779b54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779b57: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 779b58: jmp 0x779a7a */
  goto L_779a7a;
L_779b60: /* 779b60: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779b66: je 0x779b7c */
  if (zf) goto L_779b7c;
L_779b68: /* 779b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b6a: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779b6fu); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779b6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b71: mov edi, eax */
  edi = eax;
/* 779b73: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x779b78u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 779b78: mov esi, edi */
  esi = edi;
/* 779b7a: jmp 0x779b60 */
  goto L_779b60;
L_779b7c: /* 779b7c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779b7f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 779b82: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 779b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779b87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b88: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 779b8c: call 0x925f00 */
  esp -= 4; W32(esp, 0x779b91u); SPILL(); f_925f00(); if (g_unwind) return; RELOAD();
/* 779b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b93: je 0x779c2c */
  if (zf) goto L_779c2c;
L_779b99: /* 779b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779b9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b9e: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 779ba0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779ba2: jne 0x779c2c */
  if (!zf) goto L_779c2c;
L_779ba8: /* 779ba8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779ba9: call 0x90fe20 */
  esp -= 4; W32(esp, 0x779baeu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 779bae: mov esi, eax */
  esi = eax;
L_779bb0: /* 779bb0: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779bb6: je 0x779c2c */
  if (zf) goto L_779c2c;
L_779bb8: /* 779bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779bb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779bba: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779bbfu); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779bc1: mov edi, eax */
  edi = eax;
/* 779bc3: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x779bc8u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 779bc8: mov esi, edi */
  esi = edi;
/* 779bca: jmp 0x779bb0 */
  goto L_779bb0;
L_779c2c: /* 779c2c: mov eax, dword ptr [ebx + 0x160] */
  eax = R32((uint32_t)(ebx + 0x160u));
/* 779c32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 779c34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c35: jle 0x779c54 */
  if ((zf || sf != of)) goto L_779c54;
L_779c37: /* 779c37: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c3cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c3d: call 0x90bd20 */
  esp -= 4; W32(esp, 0x779c42u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 779c42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779c44: jne 0x779c6f */
  if (!zf) goto L_779c6f;
L_779c46: /* 779c46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c47: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c4cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c4d: call 0x90bc20 */
  esp -= 4; W32(esp, 0x779c52u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 779c52: jmp 0x779c6f */
  goto L_779c6f;
L_779c54: /* 779c54: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c59u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c5a: call 0x90bd20 */
  esp -= 4; W32(esp, 0x779c5fu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 779c5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779c61: je 0x779c6f */
  if (zf) goto L_779c6f;
L_779c63: /* 779c63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c64: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c69u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c6a: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x779c6fu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_779c6f: /* 779c6f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 779c72: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 779c75: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 779c78: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 779c79: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 779c80: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 779c83: jmp 0x7799b6 */
  goto L_7799b6;
L_779c88: /* 779c88: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 779c8b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 779c8e: jmp 0x779983 */
  goto L_779983;
L_779cc3: /* 779cc3: lea esp, [ebp - 0x6c] */
  esp = (uint32_t)(ebp + 0xffffff94u);
/* 779cc6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779cc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 779cd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779cd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779cd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779cd3: mov esp, ebp */
  esp = ebp;
/* 779cd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 779cd6: ret  */
  esp += 4; SPILL(); return;
}

void f_779b5d(void) {
  LOAD_REGS();
  goto L_779b5d;
L_779983: /* 779983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779985: jne 0x779cc3 */
  if (!zf) goto L_779cc3;
L_77998b: /* 77998b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77998e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 779991: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 779996: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 779999: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77999a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77999b: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 77999e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77999f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7799a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7799a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7799a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7799a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7799a6: call 0x6c8ada */
  esp -= 4; W32(esp, 0x7799abu); SPILL(); f_6c8ada(); if (g_unwind) return; RELOAD();
/* 7799ab: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7799ae: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 7799b1: xor eax, eax */
  eax = 0;
/* 7799b3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_7799b6: /* 7799b6: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7799b9: jge 0x779c88 */
  if ((sf == of)) goto L_779c88;
L_7799bf: /* 7799bf: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7799c2: mov edi, dword ptr [ebx + eax*4] */
  edi = R32((uint32_t)(ebx + eax*4));
/* 7799c5: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7799c7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7799ca: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 7799cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7799ce: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7799d1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7799d4: call 0x9289c0 */
  esp -= 4; W32(esp, 0x7799d9u); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 7799d9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7799dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7799dd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7799e0: call 0x9289c0 */
  esp -= 4; W32(esp, 0x7799e5u); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 7799e5: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7799e8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7799ea: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7799ed: je 0x779a23 */
  if (zf) goto L_779a23;
L_7799ef: /* 7799ef: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7799f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7799f3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7799f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7799f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7799f8: call 0x925fe0 */
  esp -= 4; W32(esp, 0x7799fdu); SPILL(); f_925fe0(); if (g_unwind) return; RELOAD();
/* 7799fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 779a00: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 779a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a05: je 0x779a0b */
  if (zf) goto L_779a0b;
L_779a07: /* 779a07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779a09: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a0b: /* 779a0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 779a0e: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 779a11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a13: je 0x779a19 */
  if (zf) goto L_779a19;
L_779a15: /* 779a15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a17: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a19: /* 779a19: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 779a1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a1e: je 0x779a23 */
  if (zf) goto L_779a23;
L_779a20: /* 779a20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a21: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a23: /* 779a23: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 779a26: mov ebx, dword ptr [edi + 0x18] */
  ebx = R32((uint32_t)(edi + 0x18u));
/* 779a29: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a2b: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 779a2e: jne 0x779a47 */
  if (!zf) goto L_779a47;
L_779a30: /* 779a30: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 779a33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779a35: call 0x778290 */
  esp -= 4; W32(esp, 0x779a3au); SPILL(); f_778290(); if (g_unwind) return; RELOAD();
/* 779a3a: mov ebx, eax */
  ebx = eax;
/* 779a3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779a3f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a41: je 0x779c6f */
  if (zf) goto L_779c6f;
L_779a47: /* 779a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a48: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 779a4c: call 0x90fe20 */
  esp -= 4; W32(esp, 0x779a51u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 779a51: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779a54: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 779a57: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 779a5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779a5d: mov esi, eax */
  esi = eax;
/* 779a5f: call 0x925ea0 */
  esp -= 4; W32(esp, 0x779a64u); SPILL(); f_925ea0(); if (g_unwind) return; RELOAD();
/* 779a64: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 779a67: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 779a6a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779a6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a70: call 0x925f70 */
  esp -= 4; W32(esp, 0x779a75u); SPILL(); f_925f70(); if (g_unwind) return; RELOAD();
/* 779a75: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 779a78: xor edi, edi */
  edi = 0;
L_779a7a: /* 779a7a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779a7d: cmp edi, dword ptr [edx + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779a80: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 779a83: jge 0x779b60 */
  if ((sf == of)) goto L_779b60;
L_779a89: /* 779a89: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779a8f: jne 0x779a99 */
  if (!zf) goto L_779a99;
L_779a91: /* 779a91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a92: call 0x90ff80 */
  esp -= 4; W32(esp, 0x779a97u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
/* 779a97: mov esi, eax */
  esi = eax;
L_779a99: /* 779a99: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a9b: je 0x779b40 */
  if (zf) goto L_779b40;
L_779aa1: /* 779aa1: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779aa7: je 0x779b40 */
  if (zf) goto L_779b40;
L_779aad: /* 779aad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779aae: call 0x90fe40 */
  esp -= 4; W32(esp, 0x779ab3u); SPILL(); f_90fe40(); if (g_unwind) return; RELOAD();
/* 779ab3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779ab5: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 779ab8: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 779abb: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 779abe: je 0x779adf */
  if (zf) goto L_779adf;
L_779ac0: /* 779ac0: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 779ac3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 779ac6: fchs  */
  ST0 = -ST0;
/* 779ac8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 779acc: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 779acf: fchs  */
  ST0 = -ST0;
/* 779ad1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 779ad5: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 779ad8: fchs  */
  ST0 = -ST0;
/* 779ada: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 779add: jmp 0x779aeb */
  goto L_779aeb;
L_779adf: /* 779adf: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 779ae2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 779ae5: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 779ae8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779ae9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779aea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_779aeb: /* 779aeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779aec: call 0x90fb10 */
  esp -= 4; W32(esp, 0x779af1u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 779af1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 779af4: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 779af7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 779af9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779afa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779afb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779afd: call 0x90fae0 */
  esp -= 4; W32(esp, 0x779b02u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 779b02: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 779b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b06: fchs  */
  ST0 = -ST0;
/* 779b08: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 779b0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b0c: call 0x90fb40 */
  esp -= 4; W32(esp, 0x779b11u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 779b11: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 779b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b16: call 0x90fb60 */
  esp -= 4; W32(esp, 0x779b1bu); SPILL(); f_90fb60(); if (g_unwind) return; RELOAD();
/* 779b1b: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 779b1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b20: je 0x779b2e */
  if (zf) goto L_779b2e;
L_779b22: /* 779b22: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779b25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779b27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b28: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779b2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 779b2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b2c: je 0x779b37 */
  if (zf) goto L_779b37;
L_779b2e: /* 779b2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b30: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779b35u); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779b35: mov esi, eax */
  esi = eax;
L_779b37: /* 779b37: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 779b3a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 779b3b: jmp 0x779a7a */
  goto L_779a7a;
L_779b40: /* 779b40: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 779b46: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 779b48: push 0xac5418 */
  { uint32_t v = 0xac5418u; esp -= 4; W32(esp, v); }
/* 779b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b4e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x779b54u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 779b54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779b57: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 779b58: jmp 0x779a7a */
  goto L_779a7a;
L_779b5d: /* 779b5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_779b60: /* 779b60: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779b66: je 0x779b7c */
  if (zf) goto L_779b7c;
L_779b68: /* 779b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b6a: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779b6fu); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779b6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b71: mov edi, eax */
  edi = eax;
/* 779b73: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x779b78u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 779b78: mov esi, edi */
  esi = edi;
/* 779b7a: jmp 0x779b60 */
  goto L_779b60;
L_779b7c: /* 779b7c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779b7f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 779b82: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 779b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779b87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b88: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 779b8c: call 0x925f00 */
  esp -= 4; W32(esp, 0x779b91u); SPILL(); f_925f00(); if (g_unwind) return; RELOAD();
/* 779b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b93: je 0x779c2c */
  if (zf) goto L_779c2c;
L_779b99: /* 779b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779b9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b9e: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 779ba0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779ba2: jne 0x779c2c */
  if (!zf) goto L_779c2c;
L_779ba8: /* 779ba8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779ba9: call 0x90fe20 */
  esp -= 4; W32(esp, 0x779baeu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 779bae: mov esi, eax */
  esi = eax;
L_779bb0: /* 779bb0: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779bb6: je 0x779c2c */
  if (zf) goto L_779c2c;
L_779bb8: /* 779bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779bb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779bba: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779bbfu); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779bc1: mov edi, eax */
  edi = eax;
/* 779bc3: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x779bc8u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 779bc8: mov esi, edi */
  esi = edi;
/* 779bca: jmp 0x779bb0 */
  goto L_779bb0;
L_779c2c: /* 779c2c: mov eax, dword ptr [ebx + 0x160] */
  eax = R32((uint32_t)(ebx + 0x160u));
/* 779c32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 779c34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c35: jle 0x779c54 */
  if ((zf || sf != of)) goto L_779c54;
L_779c37: /* 779c37: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c3cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c3d: call 0x90bd20 */
  esp -= 4; W32(esp, 0x779c42u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 779c42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779c44: jne 0x779c6f */
  if (!zf) goto L_779c6f;
L_779c46: /* 779c46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c47: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c4cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c4d: call 0x90bc20 */
  esp -= 4; W32(esp, 0x779c52u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 779c52: jmp 0x779c6f */
  goto L_779c6f;
L_779c54: /* 779c54: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c59u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c5a: call 0x90bd20 */
  esp -= 4; W32(esp, 0x779c5fu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 779c5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779c61: je 0x779c6f */
  if (zf) goto L_779c6f;
L_779c63: /* 779c63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c64: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c69u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c6a: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x779c6fu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_779c6f: /* 779c6f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 779c72: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 779c75: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 779c78: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 779c79: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 779c80: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 779c83: jmp 0x7799b6 */
  goto L_7799b6;
L_779c88: /* 779c88: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 779c8b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 779c8e: jmp 0x779983 */
  goto L_779983;
L_779cc3: /* 779cc3: lea esp, [ebp - 0x6c] */
  esp = (uint32_t)(ebp + 0xffffff94u);
/* 779cc6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779cc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 779cd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779cd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779cd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779cd3: mov esp, ebp */
  esp = ebp;
/* 779cd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 779cd6: ret  */
  esp += 4; SPILL(); return;
}

void f_779bcc(void) {
  LOAD_REGS();
L_779bcc: /* 779bcc: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 779bcf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 779bd4: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 779bd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779bd8: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 779bdb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779be0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_779be0(); return;
}

void f_779be0(void) {
  LOAD_REGS();
L_779be0: /* 779be0: push 0xa08408 */
  { uint32_t v = 0xa08408u; esp -= 4; W32(esp, v); }
/* 779be5: push 0xac5470 */
  { uint32_t v = 0xac5470u; esp -= 4; W32(esp, v); }
/* 779bea: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x779bf0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 779bf0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779bf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779bf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779bf7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779bfcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_779bfc(); return;
}

void f_779bfc(void) {
  LOAD_REGS();
L_779bfc: /* 779bfc: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 779bff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 779c04: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 779c07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779c08: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 779c0b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779c10u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_779c10(); return;
}

void f_779c10(void) {
  LOAD_REGS();
  goto L_779c10;
L_779983: /* 779983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779985: jne 0x779cc3 */
  if (!zf) goto L_779cc3;
L_77998b: /* 77998b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77998e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 779991: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 779996: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 779999: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77999a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77999b: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 77999e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77999f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7799a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7799a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7799a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7799a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7799a6: call 0x6c8ada */
  esp -= 4; W32(esp, 0x7799abu); SPILL(); f_6c8ada(); if (g_unwind) return; RELOAD();
/* 7799ab: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7799ae: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 7799b1: xor eax, eax */
  eax = 0;
/* 7799b3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_7799b6: /* 7799b6: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7799b9: jge 0x779c88 */
  if ((sf == of)) goto L_779c88;
L_7799bf: /* 7799bf: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7799c2: mov edi, dword ptr [ebx + eax*4] */
  edi = R32((uint32_t)(ebx + eax*4));
/* 7799c5: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7799c7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7799ca: lea ebx, [ebx + eax*4] */
  ebx = (uint32_t)(ebx + eax*4);
/* 7799cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7799ce: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7799d1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7799d4: call 0x9289c0 */
  esp -= 4; W32(esp, 0x7799d9u); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 7799d9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7799dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7799dd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7799e0: call 0x9289c0 */
  esp -= 4; W32(esp, 0x7799e5u); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 7799e5: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7799e8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7799ea: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7799ed: je 0x779a23 */
  if (zf) goto L_779a23;
L_7799ef: /* 7799ef: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7799f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7799f3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7799f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7799f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7799f8: call 0x925fe0 */
  esp -= 4; W32(esp, 0x7799fdu); SPILL(); f_925fe0(); if (g_unwind) return; RELOAD();
/* 7799fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 779a00: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 779a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a05: je 0x779a0b */
  if (zf) goto L_779a0b;
L_779a07: /* 779a07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779a09: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a0b: /* 779a0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 779a0e: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 779a11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a13: je 0x779a19 */
  if (zf) goto L_779a19;
L_779a15: /* 779a15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a17: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a19: /* 779a19: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 779a1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a1e: je 0x779a23 */
  if (zf) goto L_779a23;
L_779a20: /* 779a20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a21: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779a23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_779a23: /* 779a23: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 779a26: mov ebx, dword ptr [edi + 0x18] */
  ebx = R32((uint32_t)(edi + 0x18u));
/* 779a29: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a2b: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 779a2e: jne 0x779a47 */
  if (!zf) goto L_779a47;
L_779a30: /* 779a30: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 779a33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779a35: call 0x778290 */
  esp -= 4; W32(esp, 0x779a3au); SPILL(); f_778290(); if (g_unwind) return; RELOAD();
/* 779a3a: mov ebx, eax */
  ebx = eax;
/* 779a3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779a3f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a41: je 0x779c6f */
  if (zf) goto L_779c6f;
L_779a47: /* 779a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a48: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 779a4c: call 0x90fe20 */
  esp -= 4; W32(esp, 0x779a51u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 779a51: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779a54: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 779a57: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 779a5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779a5d: mov esi, eax */
  esi = eax;
/* 779a5f: call 0x925ea0 */
  esp -= 4; W32(esp, 0x779a64u); SPILL(); f_925ea0(); if (g_unwind) return; RELOAD();
/* 779a64: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 779a67: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 779a6a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779a6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779a6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779a70: call 0x925f70 */
  esp -= 4; W32(esp, 0x779a75u); SPILL(); f_925f70(); if (g_unwind) return; RELOAD();
/* 779a75: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 779a78: xor edi, edi */
  edi = 0;
L_779a7a: /* 779a7a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779a7d: cmp edi, dword ptr [edx + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779a80: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 779a83: jge 0x779b60 */
  if ((sf == of)) goto L_779b60;
L_779a89: /* 779a89: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779a8f: jne 0x779a99 */
  if (!zf) goto L_779a99;
L_779a91: /* 779a91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779a92: call 0x90ff80 */
  esp -= 4; W32(esp, 0x779a97u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
/* 779a97: mov esi, eax */
  esi = eax;
L_779a99: /* 779a99: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779a9b: je 0x779b40 */
  if (zf) goto L_779b40;
L_779aa1: /* 779aa1: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779aa7: je 0x779b40 */
  if (zf) goto L_779b40;
L_779aad: /* 779aad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779aae: call 0x90fe40 */
  esp -= 4; W32(esp, 0x779ab3u); SPILL(); f_90fe40(); if (g_unwind) return; RELOAD();
/* 779ab3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779ab5: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 779ab8: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 779abb: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 779abe: je 0x779adf */
  if (zf) goto L_779adf;
L_779ac0: /* 779ac0: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 779ac3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 779ac6: fchs  */
  ST0 = -ST0;
/* 779ac8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 779acc: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 779acf: fchs  */
  ST0 = -ST0;
/* 779ad1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 779ad5: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 779ad8: fchs  */
  ST0 = -ST0;
/* 779ada: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 779add: jmp 0x779aeb */
  goto L_779aeb;
L_779adf: /* 779adf: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 779ae2: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 779ae5: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 779ae8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779ae9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779aea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_779aeb: /* 779aeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779aec: call 0x90fb10 */
  esp -= 4; W32(esp, 0x779af1u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 779af1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 779af4: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 779af7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 779af9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779afa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779afb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779afd: call 0x90fae0 */
  esp -= 4; W32(esp, 0x779b02u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 779b02: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 779b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b06: fchs  */
  ST0 = -ST0;
/* 779b08: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 779b0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b0c: call 0x90fb40 */
  esp -= 4; W32(esp, 0x779b11u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 779b11: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 779b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b16: call 0x90fb60 */
  esp -= 4; W32(esp, 0x779b1bu); SPILL(); f_90fb60(); if (g_unwind) return; RELOAD();
/* 779b1b: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 779b1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b20: je 0x779b2e */
  if (zf) goto L_779b2e;
L_779b22: /* 779b22: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779b25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779b27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b28: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779b2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 779b2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b2c: je 0x779b37 */
  if (zf) goto L_779b37;
L_779b2e: /* 779b2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b30: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779b35u); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779b35: mov esi, eax */
  esi = eax;
L_779b37: /* 779b37: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 779b3a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 779b3b: jmp 0x779a7a */
  goto L_779a7a;
L_779b40: /* 779b40: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 779b46: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 779b48: push 0xac5418 */
  { uint32_t v = 0xac5418u; esp -= 4; W32(esp, v); }
/* 779b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b4e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x779b54u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 779b54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779b57: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 779b58: jmp 0x779a7a */
  goto L_779a7a;
L_779b60: /* 779b60: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779b66: je 0x779b7c */
  if (zf) goto L_779b7c;
L_779b68: /* 779b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b6a: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779b6fu); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779b6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779b70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b71: mov edi, eax */
  edi = eax;
/* 779b73: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x779b78u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 779b78: mov esi, edi */
  esi = edi;
/* 779b7a: jmp 0x779b60 */
  goto L_779b60;
L_779b7c: /* 779b7c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 779b7f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 779b82: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 779b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 779b87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779b88: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 779b8c: call 0x925f00 */
  esp -= 4; W32(esp, 0x779b91u); SPILL(); f_925f00(); if (g_unwind) return; RELOAD();
/* 779b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779b93: je 0x779c2c */
  if (zf) goto L_779c2c;
L_779b99: /* 779b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 779b9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779b9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779b9e: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x779ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 779ba0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779ba2: jne 0x779c2c */
  if (!zf) goto L_779c2c;
L_779ba8: /* 779ba8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779ba9: call 0x90fe20 */
  esp -= 4; W32(esp, 0x779baeu); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 779bae: mov esi, eax */
  esi = eax;
L_779bb0: /* 779bb0: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779bb6: je 0x779c2c */
  if (zf) goto L_779c2c;
L_779bb8: /* 779bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779bb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779bba: call 0x90fe60 */
  esp -= 4; W32(esp, 0x779bbfu); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 779bbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779bc1: mov edi, eax */
  edi = eax;
/* 779bc3: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x779bc8u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 779bc8: mov esi, edi */
  esi = edi;
/* 779bca: jmp 0x779bb0 */
  goto L_779bb0;
L_779c10: /* 779c10: push 0xa083e8 */
  { uint32_t v = 0xa083e8u; esp -= 4; W32(esp, v); }
/* 779c15: push 0xac5478 */
  { uint32_t v = 0xac5478u; esp -= 4; W32(esp, v); }
/* 779c1a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x779c20u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 779c20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779c23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779c25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779c27: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779c2cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_779c2c: /* 779c2c: mov eax, dword ptr [ebx + 0x160] */
  eax = R32((uint32_t)(ebx + 0x160u));
/* 779c32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 779c34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c35: jle 0x779c54 */
  if ((zf || sf != of)) goto L_779c54;
L_779c37: /* 779c37: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c3cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c3d: call 0x90bd20 */
  esp -= 4; W32(esp, 0x779c42u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 779c42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779c44: jne 0x779c6f */
  if (!zf) goto L_779c6f;
L_779c46: /* 779c46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c47: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c4cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c4d: call 0x90bc20 */
  esp -= 4; W32(esp, 0x779c52u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 779c52: jmp 0x779c6f */
  goto L_779c6f;
L_779c54: /* 779c54: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c59u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c5a: call 0x90bd20 */
  esp -= 4; W32(esp, 0x779c5fu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 779c5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779c61: je 0x779c6f */
  if (zf) goto L_779c6f;
L_779c63: /* 779c63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779c64: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x779c69u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 779c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 779c6a: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x779c6fu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_779c6f: /* 779c6f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 779c72: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 779c75: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 779c78: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 779c79: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 779c80: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 779c83: jmp 0x7799b6 */
  goto L_7799b6;
L_779c88: /* 779c88: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 779c8b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 779c8e: jmp 0x779983 */
  goto L_779983;
L_779cc3: /* 779cc3: lea esp, [ebp - 0x6c] */
  esp = (uint32_t)(ebp + 0xffffff94u);
/* 779cc6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779cc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 779cd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779cd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779cd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779cd3: mov esp, ebp */
  esp = ebp;
/* 779cd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 779cd6: ret  */
  esp += 4; SPILL(); return;
}

void f_779c93(void) {
  LOAD_REGS();
L_779c93: /* 779c93: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 779c96: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 779c9b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 779c9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 779c9f: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 779ca2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779ca7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_779ca7(); return;
}

void f_779ca7(void) {
  LOAD_REGS();
L_779ca7: /* 779ca7: push 0xa083bc */
  { uint32_t v = 0xa083bcu; esp -= 4; W32(esp, v); }
/* 779cac: push 0xac5480 */
  { uint32_t v = 0xac5480u; esp -= 4; W32(esp, v); }
/* 779cb1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x779cb7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 779cb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 779cba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779cbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 779cbe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x779cc3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 779cc3: lea esp, [ebp - 0x6c] */
  esp = (uint32_t)(ebp + 0xffffff94u);
/* 779cc6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 779cc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 779cd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779cd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779cd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 779cd3: mov esp, ebp */
  esp = ebp;
/* 779cd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 779cd6: ret  */
  esp += 4; SPILL(); return;
}

void f_779de0(void) {
  LOAD_REGS();
L_779de0: /* 779de0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 779de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779de2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779de3: mov edi, ecx */
  edi = ecx;
/* 779de5: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 779de8: xor esi, esi */
  esi = 0;
/* 779dea: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 779dec: jle 0x779e10 */
  if ((zf || sf != of)) goto L_779e10;
L_779dee: /* 779dee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 779def: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_779df3: /* 779df3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 779df5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 779df8: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 779dfa: jne 0x779e07 */
  if (!zf) goto L_779e07;
L_779dfc: /* 779dfc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779dfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779dff: mov ecx, edi */
  ecx = edi;
/* 779e01: call 0x6c26b2 */
  esp -= 4; W32(esp, 0x779e06u); SPILL(); f_6c26b2(); if (g_unwind) return; RELOAD();
/* 779e06: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_779e07: /* 779e07: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 779e0a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 779e0b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779e0d: jl 0x779df3 */
  if ((sf != of)) goto L_779df3;
L_779e0f: /* 779e0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_779e10: /* 779e10: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 779e13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779e14: mov eax, ebp */
  eax = ebp;
/* 779e16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779e17: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 779e19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 779e1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_779e30(void) {
  LOAD_REGS();
L_779e30: /* 779e30: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 779e33: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 779e37: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779e3a: jle 0x779e57 */
  if ((zf || sf != of)) goto L_779e57;
L_779e3c: /* 779e3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_779e40: /* 779e40: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 779e43: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 779e44: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 779e46: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 779e48: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 779e4b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 779e4e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 779e52: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779e55: jg 0x779e40 */
  if ((!zf && sf == of)) goto L_779e40;
L_779e57: /* 779e57: jmp 0x6c3fda */
  SPILL(); f_6c3fda(); return;
}

void f_779e70(void) {
  LOAD_REGS();
L_779e70: /* 779e70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779e71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779e72: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 779e74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779e76: mov esi, ecx */
  esi = ecx;
/* 779e78: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779e7eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779e7e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 779e80: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 779e83: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 779e85: je 0x779ea3 */
  if (zf) goto L_779ea3;
L_779e87: /* 779e87: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 779e8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779e8d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 779e90: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 779e93: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 779e97: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 779e9a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 779e9c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 779e9f: mov edi, eax */
  edi = eax;
/* 779ea1: jmp 0x779ea5 */
  goto L_779ea5;
L_779ea3: /* 779ea3: xor edi, edi */
  edi = 0;
L_779ea5: /* 779ea5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 779ea8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 779eab: imul eax, eax, 0x17 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x17u);
  eax = (uint32_t)r;
  }
/* 779eae: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 779eb1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 779eb3: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 779eb6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 779eb7: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 779eb9: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 779ebc: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 779ebe: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 779ec1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 779ec4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 779ec5: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 779ec8: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 779ecb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 779ece: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 779ed2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779ed4: jge 0x779ee3 */
  if ((sf == of)) goto L_779ee3;
L_779ed6: /* 779ed6: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 779ed9: mov ecx, esi */
  ecx = esi;
/* 779edb: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 779ede: call 0x6c3fda */
  esp -= 4; W32(esp, 0x779ee3u); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
L_779ee3: /* 779ee3: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 779ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779ee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779ee8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_779f10(void) {
  LOAD_REGS();
L_779f10: /* 779f10: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 779f13: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 779f17: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779f1a: jle 0x779f37 */
  if ((zf || sf != of)) goto L_779f37;
L_779f1c: /* 779f1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_779f20: /* 779f20: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 779f23: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 779f24: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 779f26: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 779f28: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 779f2b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 779f2e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 779f32: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779f35: jg 0x779f20 */
  if ((!zf && sf == of)) goto L_779f20;
L_779f37: /* 779f37: jmp 0x6ca2bd */
  SPILL(); f_6ca2bd(); return;
}

void f_779f50(void) {
  LOAD_REGS();
L_779f50: /* 779f50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779f51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779f52: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 779f54: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 779f56: mov esi, ecx */
  esi = ecx;
/* 779f58: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x779f5eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 779f5e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 779f60: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 779f63: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 779f65: je 0x779f83 */
  if (zf) goto L_779f83;
L_779f67: /* 779f67: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 779f6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 779f6d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 779f70: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 779f73: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 779f77: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 779f7a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 779f7c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 779f7f: mov edi, eax */
  edi = eax;
/* 779f81: jmp 0x779f85 */
  goto L_779f85;
L_779f83: /* 779f83: xor edi, edi */
  edi = 0;
L_779f85: /* 779f85: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 779f88: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 779f8b: imul eax, eax, 0x17 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x17u);
  eax = (uint32_t)r;
  }
/* 779f8e: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 779f91: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 779f93: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 779f96: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 779f97: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 779f99: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 779f9c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 779f9e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 779fa1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 779fa4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 779fa5: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 779fa8: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 779fab: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 779fae: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 779fb2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 779fb4: jge 0x779fc3 */
  if ((sf == of)) goto L_779fc3;
L_779fb6: /* 779fb6: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 779fb9: mov ecx, esi */
  ecx = esi;
/* 779fbb: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 779fbe: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x779fc3u); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
L_779fc3: /* 779fc3: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 779fc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 779fc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 779fc8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_779ff0(void) {
  LOAD_REGS();
L_779ff0: /* 779ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 779ff1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 779ff5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 779ff7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 779ff8: jne 0x77a056 */
  if (!zf) goto L_77a056;
L_779ffa: /* 779ffa: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 779ffe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a000: jne 0x77a01a */
  if (!zf) goto L_77a01a;
L_77a002: /* 77a002: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 77a007: push 0xac4e30 */
  { uint32_t v = 0xac4e30u; esp -= 4; W32(esp, v); }
/* 77a00c: push 0xac4e40 */
  { uint32_t v = 0xac4e40u; esp -= 4; W32(esp, v); }
/* 77a011: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a017u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a017: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a01a: /* 77a01a: mov esi, dword ptr [edi + 0x328] */
  esi = R32((uint32_t)(edi + 0x328u));
/* 77a020: cmp esi, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a026: jg 0x77a053 */
  if ((!zf && sf == of)) goto L_77a053;
L_77a028: /* 77a028: jmp 0x77a030 */
  goto L_77a030;
L_77a030: /* 77a030: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 77a036: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 77a039: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a03b: je 0x77a048 */
  if (zf) goto L_77a048;
L_77a03d: /* 77a03d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a03f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a040: call 0x779ff0 */
  esp -= 4; W32(esp, 0x77a045u); SPILL(); f_779ff0(); if (g_unwind) return; RELOAD();
/* 77a045: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a048: /* 77a048: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 77a04e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 77a04f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a051: jle 0x77a030 */
  if ((zf || sf != of)) goto L_77a030;
L_77a053: /* 77a053: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a054: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a055: ret  */
  esp += 4; SPILL(); return;
L_77a056: /* 77a056: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 77a05a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a05c: je 0x77a076 */
  if (zf) goto L_77a076;
L_77a05e: /* 77a05e: push 0x11d */
  { uint32_t v = 0x11du; esp -= 4; W32(esp, v); }
/* 77a063: push 0xac4e50 */
  { uint32_t v = 0xac4e50u; esp -= 4; W32(esp, v); }
/* 77a068: push 0xac4e60 */
  { uint32_t v = 0xac4e60u; esp -= 4; W32(esp, v); }
/* 77a06d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a073u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a073: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a076: /* 77a076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a077: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a07cu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a07c: mov esi, eax */
  esi = eax;
/* 77a07e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a080: lea edi, [esi + 0x10] */
  edi = (uint32_t)(esi + 0x10u);
/* 77a083: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 77a085: mov ecx, edi */
  ecx = edi;
/* 77a087: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x77a08du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 77a08d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 77a090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a091: mov ecx, edi */
  ecx = edi;
/* 77a093: call 0x6ccd38 */
  esp -= 4; W32(esp, 0x77a098u); SPILL(); f_6ccd38(); if (g_unwind) return; RELOAD();
/* 77a098: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a099: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a09a: ret  */
  esp += 4; SPILL(); return;
}

void f_77a02a(void) {
  LOAD_REGS();
L_77a02a: /* 77a02a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_77a030: /* 77a030: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 77a036: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 77a039: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a03b: je 0x77a048 */
  if (zf) goto L_77a048;
L_77a03d: /* 77a03d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a03f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a040: call 0x779ff0 */
  esp -= 4; W32(esp, 0x77a045u); SPILL(); f_779ff0(); if (g_unwind) return; RELOAD();
/* 77a045: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a048: /* 77a048: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 77a04e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 77a04f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a051: jle 0x77a030 */
  if ((zf || sf != of)) goto L_77a030;
L_77a053: /* 77a053: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a054: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a055: ret  */
  esp += 4; SPILL(); return;
}

void f_77a0d0(void) {
  LOAD_REGS();
L_77a0d0: /* 77a0d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a0d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 77a0d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a0d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a0d7: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 77a0d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a0da: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 77a0dd: mov eax, edi */
  eax = edi;
/* 77a0df: imul eax, eax, 0x17 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x17u);
  eax = (uint32_t)r;
  }
/* 77a0e2: mov edx, esi */
  edx = esi;
/* 77a0e4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77a0e6: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 77a0e9: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 77a0ea: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77a0ec: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 77a0ef: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 77a0f2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a0f5: je 0x77a121 */
  if (zf) goto L_77a121;
L_77a0f7: /* 77a0f7: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 77a0f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_77a100: /* 77a100: mov edx, eax */
  edx = eax;
/* 77a102: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 77a105: mov ebp, dword ptr [edx + ebx + 4] */
  ebp = R32((uint32_t)(edx + ebx + 0x4u));
/* 77a109: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 77a10b: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a10d: jne 0x77a116 */
  if (!zf) goto L_77a116;
L_77a10f: /* 77a10f: mov ebp, dword ptr [edx + 8] */
  ebp = R32((uint32_t)(edx + 0x8u));
/* 77a112: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a114: je 0x77a133 */
  if (zf) goto L_77a133;
L_77a116: /* 77a116: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 77a118: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a11b: jne 0x77a100 */
  if (!zf) goto L_77a100;
L_77a11d: /* 77a11d: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_77a121: /* 77a121: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 77a125: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77a126: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a127: call 0x6c98a9 */
  esp -= 4; W32(esp, 0x77a12cu); SPILL(); f_6c98a9(); if (g_unwind) return; RELOAD();
/* 77a12c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a12d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a12e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a12f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a130: ret 8 */
  esp += 12; SPILL(); return;
L_77a133: /* 77a133: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 77a137: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 77a139: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a13a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 77a13d: mov dword ptr [ebx + eax + 0xc], edx */
  W32((uint32_t)(ebx + eax + 0xcu), edx);
/* 77a141: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77a143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a144: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a145: lea eax, [eax + ecx + 0xc] */
  eax = (uint32_t)(eax + ecx + 0xcu);
/* 77a149: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a14a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77a170(void) {
  LOAD_REGS();
L_77a170: /* 77a170: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77a171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a172: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a173: mov edi, ecx */
  edi = ecx;
/* 77a175: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 77a178: xor ecx, ecx */
  ecx = 0;
/* 77a17a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 77a17b: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 77a17f: js 0x77a1fd */
  if (sf) goto L_77a1fd;
L_77a181: /* 77a181: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a182: mov ebx, esi */
  ebx = esi;
/* 77a184: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a185: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 77a189: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 77a18c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_77a190: /* 77a190: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77a192: mov edx, dword ptr [ebx + eax + 4] */
  edx = R32((uint32_t)(ebx + eax + 0x4u));
/* 77a196: cmp edx, dword ptr [ebp] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a199: jne 0x77a1b9 */
  if (!zf) goto L_77a1b9;
L_77a19b: /* 77a19b: mov eax, dword ptr [ebx + eax + 8] */
  eax = R32((uint32_t)(ebx + eax + 0x8u));
/* 77a19f: cmp eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a1a2: jne 0x77a1b9 */
  if (!zf) goto L_77a1b9;
L_77a1a4: /* 77a1a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77a1a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a1a7: mov ecx, edi */
  ecx = edi;
/* 77a1a9: call 0x6c94fd */
  esp -= 4; W32(esp, 0x77a1aeu); SPILL(); f_6c94fd(); if (g_unwind) return; RELOAD();
/* 77a1ae: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 77a1b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77a1b3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 77a1b7: mov ecx, eax */
  ecx = eax;
L_77a1b9: /* 77a1b9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 77a1ba: sub ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 77a1bd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77a1bf: jge 0x77a190 */
  if ((sf == of)) goto L_77a190;
L_77a1c1: /* 77a1c1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a1c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a1c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a1c5: je 0x77a1fd */
  if (zf) goto L_77a1fd;
L_77a1c7: /* 77a1c7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 77a1ca: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 77a1cd: lea edx, [ecx + ecx + 8] */
  edx = (uint32_t)(ecx + ecx + 0x8u);
/* 77a1d1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a1d3: jle 0x77a1ec */
  if ((zf || sf != of)) goto L_77a1ec;
L_77a1d5: /* 77a1d5: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 77a1d8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 77a1d9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 77a1db: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 77a1dd: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 77a1e0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 77a1e3: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 77a1e7: cmp dword ptr [edi + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a1ea: jg 0x77a1d5 */
  if ((!zf && sf == of)) goto L_77a1d5;
L_77a1ec: /* 77a1ec: mov ecx, edi */
  ecx = edi;
/* 77a1ee: call 0x6c3fda */
  esp -= 4; W32(esp, 0x77a1f3u); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 77a1f3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 77a1f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a1f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a1f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 77a1fa: ret 4 */
  esp += 8; SPILL(); return;
L_77a1fd: /* 77a1fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a1fe: mov eax, ecx */
  eax = ecx;
/* 77a200: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a201: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 77a202: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77a240(void) {
  LOAD_REGS();
L_77a240: /* 77a240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a241: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 77a245: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a247: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 77a249: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a24a: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 77a24d: mov eax, edi */
  eax = edi;
/* 77a24f: imul eax, eax, 0x17 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x17u);
  eax = (uint32_t)r;
  }
/* 77a252: mov edx, esi */
  edx = esi;
/* 77a254: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77a256: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 77a259: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 77a25a: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77a25c: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 77a25f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 77a262: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a265: je 0x77a291 */
  if (zf) goto L_77a291;
L_77a267: /* 77a267: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 77a269: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_77a270: /* 77a270: mov edx, eax */
  edx = eax;
/* 77a272: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 77a275: mov ebp, dword ptr [edx + ebx + 4] */
  ebp = R32((uint32_t)(edx + ebx + 0x4u));
/* 77a279: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 77a27b: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a27d: jne 0x77a286 */
  if (!zf) goto L_77a286;
L_77a27f: /* 77a27f: mov ebp, dword ptr [edx + 8] */
  ebp = R32((uint32_t)(edx + 0x8u));
/* 77a282: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a284: je 0x77a2a3 */
  if (zf) goto L_77a2a3;
L_77a286: /* 77a286: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 77a288: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a28b: jne 0x77a270 */
  if (!zf) goto L_77a270;
L_77a28d: /* 77a28d: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_77a291: /* 77a291: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 77a295: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77a296: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a297: call 0x6ca8f3 */
  esp -= 4; W32(esp, 0x77a29cu); SPILL(); f_6ca8f3(); if (g_unwind) return; RELOAD();
/* 77a29c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a29d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a29e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a29f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a2a0: ret 8 */
  esp += 12; SPILL(); return;
L_77a2a3: /* 77a2a3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 77a2a7: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 77a2a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a2aa: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 77a2ad: mov dword ptr [ebx + eax + 0xc], edx */
  W32((uint32_t)(ebx + eax + 0xcu), edx);
/* 77a2b1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77a2b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a2b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a2b5: lea eax, [eax + ecx + 0xc] */
  eax = (uint32_t)(eax + ecx + 0xcu);
/* 77a2b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a2ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77a2e0(void) {
  LOAD_REGS();
L_77a2e0: /* 77a2e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77a2e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a2e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a2e3: mov edi, ecx */
  edi = ecx;
/* 77a2e5: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 77a2e8: xor ecx, ecx */
  ecx = 0;
/* 77a2ea: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 77a2eb: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 77a2ef: js 0x77a36d */
  if (sf) goto L_77a36d;
L_77a2f1: /* 77a2f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a2f2: mov ebx, esi */
  ebx = esi;
/* 77a2f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a2f5: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 77a2f9: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 77a2fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_77a300: /* 77a300: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77a302: mov edx, dword ptr [ebx + eax + 4] */
  edx = R32((uint32_t)(ebx + eax + 0x4u));
/* 77a306: cmp edx, dword ptr [ebp] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a309: jne 0x77a329 */
  if (!zf) goto L_77a329;
L_77a30b: /* 77a30b: mov eax, dword ptr [ebx + eax + 8] */
  eax = R32((uint32_t)(ebx + eax + 0x8u));
/* 77a30f: cmp eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a312: jne 0x77a329 */
  if (!zf) goto L_77a329;
L_77a314: /* 77a314: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77a316: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a317: mov ecx, edi */
  ecx = edi;
/* 77a319: call 0x6c6a55 */
  esp -= 4; W32(esp, 0x77a31eu); SPILL(); f_6c6a55(); if (g_unwind) return; RELOAD();
/* 77a31e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 77a322: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77a323: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 77a327: mov ecx, eax */
  ecx = eax;
L_77a329: /* 77a329: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 77a32a: sub ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 77a32d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77a32f: jge 0x77a300 */
  if ((sf == of)) goto L_77a300;
L_77a331: /* 77a331: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a333: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a334: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a335: je 0x77a36d */
  if (zf) goto L_77a36d;
L_77a337: /* 77a337: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 77a33a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 77a33d: lea edx, [ecx + ecx + 8] */
  edx = (uint32_t)(ecx + ecx + 0x8u);
/* 77a341: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a343: jle 0x77a35c */
  if ((zf || sf != of)) goto L_77a35c;
L_77a345: /* 77a345: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 77a348: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 77a349: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 77a34b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 77a34d: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 77a350: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 77a353: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 77a357: cmp dword ptr [edi + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a35a: jg 0x77a345 */
  if ((!zf && sf == of)) goto L_77a345;
L_77a35c: /* 77a35c: mov ecx, edi */
  ecx = edi;
/* 77a35e: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x77a363u); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 77a363: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 77a367: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a368: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a369: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 77a36a: ret 4 */
  esp += 8; SPILL(); return;
L_77a36d: /* 77a36d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a36e: mov eax, ecx */
  eax = ecx;
/* 77a370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a371: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 77a372: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77a3b0(void) {
  LOAD_REGS();
L_77a3b0: /* 77a3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a3b1: mov ebp, esp */
  ebp = esp;
/* 77a3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77a3b5: push 0x9cc490 */
  { uint32_t v = 0x9cc490u; esp -= 4; W32(esp, v); }
/* 77a3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77a3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77a3c8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77a3cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a3cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a3cd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77a3d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 77a3d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a3d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77a3d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a3d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77a3de: call 0x928a30 */
  esp -= 4; W32(esp, 0x77a3e3u); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 77a3e3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 77a3e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77a3e7: movsx ebx, ax */
  ebx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 77a3ea: call 0x928a30 */
  esp -= 4; W32(esp, 0x77a3efu); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 77a3ef: movsx edx, ax */
  edx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 77a3f2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 77a3f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a3f5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 77a3f8: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77a3fdu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77a3fd: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 77a400: xor ecx, ecx */
  ecx = 0;
/* 77a402: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 77a404: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77a405: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 77a40b: mov edi, ecx */
  edi = ecx;
/* 77a40d: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77a412u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77a412: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 77a415: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77a41a: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 77a41d: jne 0x77a42e */
  if (!zf) goto L_77a42e;
L_77a41f: /* 77a41f: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a422: jge 0x77a42e */
  if ((sf == of)) goto L_77a42e;
L_77a424: /* 77a424: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 77a427: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 77a429: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 77a42b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_77a42e: /* 77a42e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a42f: call 0x929f70 */
  esp -= 4; W32(esp, 0x77a434u); SPILL(); f_929f70(); if (g_unwind) return; RELOAD();
/* 77a434: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77a436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77a437: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a43cu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a43c: mov edi, eax */
  edi = eax;
/* 77a43e: xor eax, eax */
  eax = 0;
L_77a440: /* 77a440: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a443: jge 0x77a470 */
  if ((sf == of)) goto L_77a470;
L_77a445: /* 77a445: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 77a448: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 77a44b: cmp edx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a44e: je 0x77a453 */
  if (zf) goto L_77a453;
L_77a450: /* 77a450: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77a451: jmp 0x77a440 */
  goto L_77a440;
L_77a453: /* 77a453: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a456: je 0x77a470 */
  if (zf) goto L_77a470;
L_77a458: /* 77a458: push 0x1f1 */
  { uint32_t v = 0x1f1u; esp -= 4; W32(esp, v); }
/* 77a45d: push 0xac5110 */
  { uint32_t v = 0xac5110u; esp -= 4; W32(esp, v); }
/* 77a462: push 0xac5120 */
  { uint32_t v = 0xac5120u; esp -= 4; W32(esp, v); }
/* 77a467: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a46du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a46d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a470: /* 77a470: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 77a472: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 77a475: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77a477: mov ecx, edi */
  ecx = edi;
/* 77a479: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x77a47fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 77a47f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 77a481: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 77a484: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 77a487: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 77a48a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a48b: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a490u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a490: mov edi, eax */
  edi = eax;
/* 77a492: xor eax, eax */
  eax = 0;
L_77a494: /* 77a494: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a497: jge 0x77a4c3 */
  if ((sf == of)) goto L_77a4c3;
L_77a499: /* 77a499: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 77a49c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 77a49f: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a4a1: je 0x77a4a6 */
  if (zf) goto L_77a4a6;
L_77a4a3: /* 77a4a3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77a4a4: jmp 0x77a494 */
  goto L_77a494;
L_77a4a6: /* 77a4a6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a4a9: je 0x77a4c3 */
  if (zf) goto L_77a4c3;
L_77a4ab: /* 77a4ab: push 0x1f5 */
  { uint32_t v = 0x1f5u; esp -= 4; W32(esp, v); }
/* 77a4b0: push 0xac515c */
  { uint32_t v = 0xac515cu; esp -= 4; W32(esp, v); }
/* 77a4b5: push 0xac516c */
  { uint32_t v = 0xac516cu; esp -= 4; W32(esp, v); }
/* 77a4ba: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a4c0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a4c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a4c3: /* 77a4c3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 77a4c5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 77a4c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77a4ca: mov ecx, edi */
  ecx = edi;
/* 77a4cc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x77a4d2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 77a4d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77a4d4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 77a4d6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 77a4d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 77a4dc: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 77a4de: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 77a4e0: jbe 0x77a4e8 */
  if ((cf | zf)) goto L_77a4e8;
L_77a4e2: /* 77a4e2: mov ecx, eax */
  ecx = eax;
/* 77a4e4: mov eax, esi */
  eax = esi;
/* 77a4e6: mov esi, ecx */
  esi = ecx;
L_77a4e8: /* 77a4e8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77a4eb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 77a4ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a4ef: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77a4f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77a4f3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77a4f6: add ecx, 0x1190 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1190u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 77a4fc: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 77a4ff: call 0x6cbfbe */
  esp -= 4; W32(esp, 0x77a504u); SPILL(); f_6cbfbe(); if (g_unwind) return; RELOAD();
/* 77a504: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77a507: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a508: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a509: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77a510: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a511: mov esp, ebp */
  esp = ebp;
/* 77a513: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a514: ret  */
  esp += 4; SPILL(); return;
}

void f_77a515(void) {
  LOAD_REGS();
L_77a515: /* 77a515: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77a518: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77a51d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 77a520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a521: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 77a524: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a529u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77a529(); return;
}

void f_77a529(void) {
  LOAD_REGS();
L_77a529: /* 77a529: push 0xa08420 */
  { uint32_t v = 0xa08420u; esp -= 4; W32(esp, v); }
/* 77a52e: push 0xac51a8 */
  { uint32_t v = 0xac51a8u; esp -= 4; W32(esp, v); }
/* 77a533: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77a539u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77a539: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77a53c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a53e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a540: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a545u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77a545: guest_badaddr(0x77a545); return;
}

void f_77a5c0(void) {
  LOAD_REGS();
L_77a5c0: /* 77a5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a5c1: mov ebp, esp */
  ebp = esp;
/* 77a5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77a5c5: push 0x9cc4a0 */
  { uint32_t v = 0x9cc4a0u; esp -= 4; W32(esp, v); }
/* 77a5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77a5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77a5d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77a5db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a5dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77a5e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 77a5e3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 77a5e5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 77a5e7: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 77a5ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a5eb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77a5ee: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77a5f5: jbe 0x77a5fd */
  if ((cf | zf)) goto L_77a5fd;
L_77a5f7: /* 77a5f7: mov edx, eax */
  edx = eax;
/* 77a5f9: mov eax, ecx */
  eax = ecx;
/* 77a5fb: mov ecx, edx */
  ecx = edx;
L_77a5fd: /* 77a5fd: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 77a600: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77a603: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77a606: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 77a609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a60a: add ecx, 0x1190 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1190u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 77a610: call 0x6cbe2e */
  esp -= 4; W32(esp, 0x77a615u); SPILL(); f_6cbe2e(); if (g_unwind) return; RELOAD();
/* 77a615: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 77a618: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a61a: je 0x77a62f */
  if (zf) goto L_77a62f;
L_77a61c: /* 77a61c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a61d: call 0x90fd20 */
  esp -= 4; W32(esp, 0x77a622u); SPILL(); f_90fd20(); if (g_unwind) return; RELOAD();
/* 77a622: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a623: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x77a628u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 77a628: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
L_77a62f: /* 77a62f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a630: call 0x929fd0 */
  esp -= 4; W32(esp, 0x77a635u); SPILL(); f_929fd0(); if (g_unwind) return; RELOAD();
/* 77a635: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 77a637: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77a638: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a63du); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a63d: mov edi, eax */
  edi = eax;
/* 77a63f: xor eax, eax */
  eax = 0;
L_77a641: /* 77a641: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a644: jge 0x77a658 */
  if ((sf == of)) goto L_77a658;
L_77a646: /* 77a646: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 77a649: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 77a64c: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a64e: je 0x77a653 */
  if (zf) goto L_77a653;
L_77a650: /* 77a650: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77a651: jmp 0x77a641 */
  goto L_77a641;
L_77a653: /* 77a653: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a656: jne 0x77a670 */
  if (!zf) goto L_77a670;
L_77a658: /* 77a658: push 0x21c */
  { uint32_t v = 0x21cu; esp -= 4; W32(esp, v); }
/* 77a65d: push 0xac51b0 */
  { uint32_t v = 0xac51b0u; esp -= 4; W32(esp, v); }
/* 77a662: push 0xac51c0 */
  { uint32_t v = 0xac51c0u; esp -= 4; W32(esp, v); }
/* 77a667: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a66du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a66d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a670: /* 77a670: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a671: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 77a674: call 0x6c79a5 */
  esp -= 4; W32(esp, 0x77a679u); SPILL(); f_6c79a5(); if (g_unwind) return; RELOAD();
/* 77a679: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 77a67b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77a67c: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a681u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a681: mov edi, eax */
  edi = eax;
/* 77a683: xor eax, eax */
  eax = 0;
L_77a685: /* 77a685: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a688: jge 0x77a69c */
  if ((sf == of)) goto L_77a69c;
L_77a68a: /* 77a68a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 77a68d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 77a690: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a692: je 0x77a697 */
  if (zf) goto L_77a697;
L_77a694: /* 77a694: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77a695: jmp 0x77a685 */
  goto L_77a685;
L_77a697: /* 77a697: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a69a: jne 0x77a6b4 */
  if (!zf) goto L_77a6b4;
L_77a69c: /* 77a69c: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 77a6a1: push 0xac51fc */
  { uint32_t v = 0xac51fcu; esp -= 4; W32(esp, v); }
/* 77a6a6: push 0xac520c */
  { uint32_t v = 0xac520cu; esp -= 4; W32(esp, v); }
/* 77a6ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a6b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a6b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a6b4: /* 77a6b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a6b5: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 77a6b8: call 0x6c79a5 */
  esp -= 4; W32(esp, 0x77a6bdu); SPILL(); f_6c79a5(); if (g_unwind) return; RELOAD();
/* 77a6bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a6be: call 0x92a440 */
  esp -= 4; W32(esp, 0x77a6c3u); SPILL(); f_92a440(); if (g_unwind) return; RELOAD();
/* 77a6c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77a6c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a6c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a6c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77a6cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a6d0: mov esp, ebp */
  esp = ebp;
/* 77a6d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a6d3: ret  */
  esp += 4; SPILL(); return;
}

void f_77a6d4(void) {
  LOAD_REGS();
L_77a6d4: /* 77a6d4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77a6d7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77a6dc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77a6df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77a6e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77a6e3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a6e8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77a6e8(); return;
}

void f_77a6e8(void) {
  LOAD_REGS();
L_77a6e8: /* 77a6e8: push 0xa08448 */
  { uint32_t v = 0xa08448u; esp -= 4; W32(esp, v); }
/* 77a6ed: push 0xac5248 */
  { uint32_t v = 0xac5248u; esp -= 4; W32(esp, v); }
/* 77a6f2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77a6f8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77a6f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77a6fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a6fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a6ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a704u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77a704: guest_badaddr(0x77a704); return;
}

void f_77a770(void) {
  LOAD_REGS();
L_77a770: /* 77a770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a771: mov ebp, esp */
  ebp = esp;
/* 77a773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77a775: push 0x9cc4b0 */
  { uint32_t v = 0x9cc4b0u; esp -= 4; W32(esp, v); }
/* 77a77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77a780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77a788: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77a78b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a78c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a78d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 77a790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a791: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 77a794: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 77a796: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77a799: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77a7a0: mov eax, esi */
  eax = esi;
/* 77a7a2: mov ecx, edi */
  ecx = edi;
/* 77a7a4: jbe 0x77a7aa */
  if ((cf | zf)) goto L_77a7aa;
L_77a7a6: /* 77a7a6: mov eax, edi */
  eax = edi;
/* 77a7a8: mov ecx, esi */
  ecx = esi;
L_77a7aa: /* 77a7aa: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 77a7ad: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77a7b0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 77a7b3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 77a7b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a7b7: lea ecx, [ebx + 0x1190] */
  ecx = (uint32_t)(ebx + 0x1190u);
/* 77a7bd: call 0x6c1a46 */
  esp -= 4; W32(esp, 0x77a7c2u); SPILL(); f_6c1a46(); if (g_unwind) return; RELOAD();
/* 77a7c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a7c4: jne 0x77a843 */
  if (!zf) goto L_77a843;
L_77a7c6: /* 77a7c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a7c7: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a7ccu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a7cc: xor ecx, ecx */
  ecx = 0;
/* 77a7ce: mov edi, edi */
  edi = edi;
L_77a7d0: /* 77a7d0: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a7d3: jge 0x77a7fd */
  if ((sf == of)) goto L_77a7fd;
L_77a7d5: /* 77a7d5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77a7d8: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a7db: je 0x77a7e0 */
  if (zf) goto L_77a7e0;
L_77a7dd: /* 77a7dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 77a7de: jmp 0x77a7d0 */
  goto L_77a7d0;
L_77a7e0: /* 77a7e0: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a7e3: je 0x77a7fd */
  if (zf) goto L_77a7fd;
L_77a7e5: /* 77a7e5: push 0x239 */
  { uint32_t v = 0x239u; esp -= 4; W32(esp, v); }
/* 77a7ea: push 0xac5250 */
  { uint32_t v = 0xac5250u; esp -= 4; W32(esp, v); }
/* 77a7ef: push 0xac5260 */
  { uint32_t v = 0xac5260u; esp -= 4; W32(esp, v); }
/* 77a7f4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a7fau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a7fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a7fd: /* 77a7fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a7fe: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a803u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a803: xor ecx, ecx */
  ecx = 0;
L_77a805: /* 77a805: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77a808: jge 0x77a832 */
  if ((sf == of)) goto L_77a832;
L_77a80a: /* 77a80a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77a80d: cmp dword ptr [edx + ecx*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a810: je 0x77a815 */
  if (zf) goto L_77a815;
L_77a812: /* 77a812: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 77a813: jmp 0x77a805 */
  goto L_77a805;
L_77a815: /* 77a815: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77a818: je 0x77a832 */
  if (zf) goto L_77a832;
L_77a81a: /* 77a81a: push 0x23c */
  { uint32_t v = 0x23cu; esp -= 4; W32(esp, v); }
/* 77a81f: push 0xac5298 */
  { uint32_t v = 0xac5298u; esp -= 4; W32(esp, v); }
/* 77a824: push 0xac52a8 */
  { uint32_t v = 0xac52a8u; esp -= 4; W32(esp, v); }
/* 77a829: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a82fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a82f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a832: /* 77a832: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77a835: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77a83c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a83d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a83e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a83f: mov esp, ebp */
  esp = ebp;
/* 77a841: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a842: ret  */
  esp += 4; SPILL(); return;
L_77a843: /* 77a843: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77a845: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a846: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a847: call 0x6cc55e */
  esp -= 4; W32(esp, 0x77a84cu); SPILL(); f_6cc55e(); if (g_unwind) return; RELOAD();
/* 77a84c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77a84f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77a852: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a853: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a854: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77a85b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a85c: mov esp, ebp */
  esp = ebp;
/* 77a85e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a85f: ret  */
  esp += 4; SPILL(); return;
}

void f_77a860(void) {
  LOAD_REGS();
L_77a860: /* 77a860: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77a863: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77a868: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77a86b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77a86c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77a86f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a874u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77a874(); return;
}

void f_77a874(void) {
  LOAD_REGS();
L_77a874: /* 77a874: push 0xa08474 */
  { uint32_t v = 0xa08474u; esp -= 4; W32(esp, v); }
/* 77a879: push 0xac52e0 */
  { uint32_t v = 0xac52e0u; esp -= 4; W32(esp, v); }
/* 77a87e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77a884u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77a884: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77a887: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a88b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a890u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77a890: guest_badaddr(0x77a890); return;
}

void f_77a8f0(void) {
  LOAD_REGS();
L_77a8f0: /* 77a8f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77a8f1: mov ebp, esp */
  ebp = esp;
/* 77a8f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77a8f5: push 0x9cc4c0 */
  { uint32_t v = 0x9cc4c0u; esp -= 4; W32(esp, v); }
/* 77a8fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77a900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a901: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77a908: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77a90b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a90c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a90d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a90e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 77a911: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77a914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a915: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77a91c: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77a921u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77a921: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 77a924: mov esi, eax */
  esi = eax;
L_77a926: /* 77a926: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 77a929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77a92b: jle 0x77a96f */
  if ((zf || sf != of)) goto L_77a96f;
L_77a92d: /* 77a92d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 77a930: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77a932: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77a934: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a935: call 0x6c8f1c */
  esp -= 4; W32(esp, 0x77a93au); SPILL(); f_6c8f1c(); if (g_unwind) return; RELOAD();
/* 77a93a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77a93d: jmp 0x77a926 */
  goto L_77a926;
L_77a96f: /* 77a96f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77a972: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a973: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a974: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77a97b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a97c: mov esp, ebp */
  esp = ebp;
/* 77a97e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a97f: ret  */
  esp += 4; SPILL(); return;
}

void f_77a93f(void) {
  LOAD_REGS();
L_77a93f: /* 77a93f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77a942: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77a947: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77a94a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77a94b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77a94e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a953u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77a953(); return;
}

void f_77a953(void) {
  LOAD_REGS();
L_77a953: /* 77a953: push 0xa08494 */
  { uint32_t v = 0xa08494u; esp -= 4; W32(esp, v); }
/* 77a958: push 0xac52e8 */
  { uint32_t v = 0xac52e8u; esp -= 4; W32(esp, v); }
/* 77a95d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77a963u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77a963: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77a966: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a968: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77a96a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77a96fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 77a96f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77a972: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77a973: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77a974: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77a97b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77a97c: mov esp, ebp */
  esp = ebp;
/* 77a97e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77a97f: ret  */
  esp += 4; SPILL(); return;
}

void f_77a9b0(void) {
  LOAD_REGS();
L_77a9b0: /* 77a9b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77a9b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a9b4: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 77a9b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77a9b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77a9ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77a9bb: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 77a9bf: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 77a9c3: call 0x779160 */
  esp -= 4; W32(esp, 0x77a9c8u); SPILL(); f_779160(); if (g_unwind) return; RELOAD();
/* 77a9c8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 77a9cc: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 77a9d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77a9d3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a9d5: je 0x77a9f3 */
  if (zf) goto L_77a9f3;
L_77a9d7: /* 77a9d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a9d9: je 0x77aa3f */
  if (zf) goto L_77aa3f;
L_77a9db: /* 77a9db: push 0x25e */
  { uint32_t v = 0x25eu; esp -= 4; W32(esp, v); }
/* 77a9e0: push 0xac52f0 */
  { uint32_t v = 0xac52f0u; esp -= 4; W32(esp, v); }
/* 77a9e5: push 0xac5300 */
  { uint32_t v = 0xac5300u; esp -= 4; W32(esp, v); }
/* 77a9ea: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77a9f0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77a9f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77a9f3: /* 77a9f3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a9f5: je 0x77aa3f */
  if (zf) goto L_77aa3f;
L_77a9f7: /* 77a9f7: mov eax, dword ptr [esi + 0x2f4] */
  eax = R32((uint32_t)(esi + 0x2f4u));
/* 77a9fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77a9ff: je 0x77aa53 */
  if (zf) goto L_77aa53;
L_77aa01: /* 77aa01: mov eax, dword ptr [esi + 0x2e0] */
  eax = R32((uint32_t)(esi + 0x2e0u));
/* 77aa07: xor edi, edi */
  edi = 0;
/* 77aa09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77aa0b: jle 0x77aa53 */
  if ((zf || sf != of)) goto L_77aa53;
L_77aa0d: /* 77aa0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_77aa10: /* 77aa10: mov eax, dword ptr [esi + 0x2dc] */
  eax = R32((uint32_t)(esi + 0x2dcu));
/* 77aa16: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 77aa19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77aa1b: je 0x77aa2d */
  if (zf) goto L_77aa2d;
L_77aa1d: /* 77aa1d: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 77aa23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77aa24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77aa25: call 0x6c619f */
  esp -= 4; W32(esp, 0x77aa2au); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 77aa2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77aa2d: /* 77aa2d: mov eax, dword ptr [esi + 0x2e0] */
  eax = R32((uint32_t)(esi + 0x2e0u));
/* 77aa33: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 77aa34: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77aa36: jl 0x77aa10 */
  if ((sf != of)) goto L_77aa10;
L_77aa38: /* 77aa38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77aa39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77aa3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77aa3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77aa3e: ret  */
  esp += 4; SPILL(); return;
L_77aa3f: /* 77aa3f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77aa41: je 0x77aa53 */
  if (zf) goto L_77aa53;
L_77aa43: /* 77aa43: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 77aa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77aa4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77aa4b: call 0x6c619f */
  esp -= 4; W32(esp, 0x77aa50u); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 77aa50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77aa53: /* 77aa53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77aa54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77aa55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77aa56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77aa59: ret  */
  esp += 4; SPILL(); return;
}

void f_77aa90(void) {
  LOAD_REGS();
L_77aa90: /* 77aa90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77aa91: mov ebp, esp */
  ebp = esp;
/* 77aa93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77aa95: push 0x9cc4d0 */
  { uint32_t v = 0x9cc4d0u; esp -= 4; W32(esp, v); }
/* 77aa9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77aaa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77aaa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77aaa8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77aaab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77aaae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77aab1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 77aab3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77aab4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77aab5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77aab6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77aab9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77aac0: mov edx, eax */
  edx = eax;
/* 77aac2: jbe 0x77aac8 */
  if ((cf | zf)) goto L_77aac8;
L_77aac4: /* 77aac4: mov edx, ecx */
  edx = ecx;
/* 77aac6: mov ecx, eax */
  ecx = eax;
L_77aac8: /* 77aac8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 77aacb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 77aace: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 77aad1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77aad2: add ecx, 0x11a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 77aad8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 77aadb: call 0x6c93c2 */
  esp -= 4; W32(esp, 0x77aae0u); SPILL(); f_6c93c2(); if (g_unwind) return; RELOAD();
/* 77aae0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77aae3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77aae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77aae5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77aaec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77aaed: mov esp, ebp */
  esp = ebp;
/* 77aaef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77aaf0: ret  */
  esp += 4; SPILL(); return;
}

void f_77aaf1(void) {
  LOAD_REGS();
L_77aaf1: /* 77aaf1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77aaf4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77aaf9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77aafc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77aafd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77ab00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ab05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77ab05(); return;
}

void f_77ab05(void) {
  LOAD_REGS();
L_77ab05: /* 77ab05: push 0xa084c8 */
  { uint32_t v = 0xa084c8u; esp -= 4; W32(esp, v); }
/* 77ab0a: push 0xac5314 */
  { uint32_t v = 0xac5314u; esp -= 4; W32(esp, v); }
/* 77ab0f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ab15u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ab15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ab18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ab1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ab1c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ab21u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ab21: guest_badaddr(0x77ab21); return;
}

void f_77ab60(void) {
  LOAD_REGS();
L_77ab60: /* 77ab60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77ab61: mov ebp, esp */
  ebp = esp;
/* 77ab63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77ab65: push 0x9cc4e0 */
  { uint32_t v = 0x9cc4e0u; esp -= 4; W32(esp, v); }
/* 77ab6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77ab70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ab71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77ab78: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77ab7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ab7c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 77ab7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ab80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ab81: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 77ab84: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 77ab86: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ab89: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77ab90: mov eax, edi */
  eax = edi;
/* 77ab92: mov ecx, ebx */
  ecx = ebx;
/* 77ab94: jbe 0x77ab9a */
  if ((cf | zf)) goto L_77ab9a;
L_77ab96: /* 77ab96: mov eax, ebx */
  eax = ebx;
/* 77ab98: mov ecx, edi */
  ecx = edi;
L_77ab9a: /* 77ab9a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 77ab9d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77aba0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 77aba3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 77aba6: add esi, 0x11a4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x11a4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 77abac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77abad: mov ecx, esi */
  ecx = esi;
/* 77abaf: call 0x6c1735 */
  esp -= 4; W32(esp, 0x77abb4u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 77abb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77abb6: jne 0x77abd8 */
  if (!zf) goto L_77abd8;
L_77abb8: /* 77abb8: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 77abbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77abbc: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 77abbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77abc0: mov ecx, esi */
  ecx = esi;
/* 77abc2: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 77abc5: call 0x6c30c6 */
  esp -= 4; W32(esp, 0x77abcau); SPILL(); f_6c30c6(); if (g_unwind) return; RELOAD();
/* 77abca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 77abcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77abce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77abcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77abd0: call 0x6c8f1c */
  esp -= 4; W32(esp, 0x77abd5u); SPILL(); f_6c8f1c(); if (g_unwind) return; RELOAD();
/* 77abd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77abd8: /* 77abd8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77abdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77abdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77abdd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77abe4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77abe5: mov esp, ebp */
  esp = ebp;
/* 77abe7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77abe8: ret  */
  esp += 4; SPILL(); return;
}

void f_77abe9(void) {
  LOAD_REGS();
L_77abe9: /* 77abe9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77abec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77abf1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77abf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77abf5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77abf8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77abfdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77abfd(); return;
}

void f_77abfd(void) {
  LOAD_REGS();
L_77abfd: /* 77abfd: push 0xa084fc */
  { uint32_t v = 0xa084fcu; esp -= 4; W32(esp, v); }
/* 77ac02: push 0xac531c */
  { uint32_t v = 0xac531cu; esp -= 4; W32(esp, v); }
/* 77ac07: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ac0du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ac0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ac10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ac12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ac14: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ac19u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ac19: guest_badaddr(0x77ac19); return;
}

void f_77ac50(void) {
  LOAD_REGS();
L_77ac50: /* 77ac50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77ac51: mov ebp, esp */
  ebp = esp;
/* 77ac53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77ac55: push 0x9cc4f0 */
  { uint32_t v = 0x9cc4f0u; esp -= 4; W32(esp, v); }
/* 77ac5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77ac60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ac61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77ac68: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77ac6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ac6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ac6d: xor eax, eax */
  eax = 0;
/* 77ac6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ac70: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ac73: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 77ac76: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77ac79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_77ac80: /* 77ac80: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 77ac83: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77ac86: jge 0x77adea */
  if ((sf == of)) goto L_77adea;
L_77ac8c: /* 77ac8c: lea esi, [eax*4] */
  esi = (uint32_t)(eax*4);
/* 77ac93: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77ac95: cmp dword ptr [esi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ac99: je 0x77aca6 */
  if (zf) goto L_77aca6;
L_77ac9b: /* 77ac9b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77ac9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77aca0: cmp dword ptr [esi + edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77aca4: jne 0x77acbe */
  if (!zf) goto L_77acbe;
L_77aca6: /* 77aca6: push 0xef */
  { uint32_t v = 0xefu; esp -= 4; W32(esp, v); }
/* 77acab: push 0xac4e00 */
  { uint32_t v = 0xac4e00u; esp -= 4; W32(esp, v); }
/* 77acb0: push 0xac4e10 */
  { uint32_t v = 0xac4e10u; esp -= 4; W32(esp, v); }
/* 77acb5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77acbbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77acbb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77acbe: /* 77acbe: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77acc0: mov ecx, dword ptr [eax + esi] */
  ecx = R32((uint32_t)(eax + esi));
/* 77acc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77acc4: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77acc9u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77acc9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77accc: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 77acce: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 77acd0: lea ebx, [eax + 0x10] */
  ebx = (uint32_t)(eax + 0x10u);
/* 77acd3: xor esi, esi */
  esi = 0;
L_77acd5: /* 77acd5: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77acd8: jge 0x77acf1 */
  if ((sf == of)) goto L_77acf1;
L_77acda: /* 77acda: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 77acdc: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 77acdf: cmp ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ace1: jne 0x77acee */
  if (!zf) goto L_77acee;
L_77ace3: /* 77ace3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77ace5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ace6: mov ecx, ebx */
  ecx = ebx;
/* 77ace8: call 0x6c26b2 */
  esp -= 4; W32(esp, 0x77acedu); SPILL(); f_6c26b2(); if (g_unwind) return; RELOAD();
/* 77aced: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_77acee: /* 77acee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 77acef: jmp 0x77acd5 */
  goto L_77acd5;
L_77acf1: /* 77acf1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77acf4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 77acf7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 77acf9: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 77acfc: mov ecx, dword ptr [eax + esi] */
  ecx = R32((uint32_t)(eax + esi));
/* 77acff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ad00: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77ad05u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77ad05: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 77ad08: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 77ad0a: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 77ad0c: lea ebx, [eax + 0x10] */
  ebx = (uint32_t)(eax + 0x10u);
/* 77ad0f: xor esi, esi */
  esi = 0;
L_77ad11: /* 77ad11: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77ad14: jge 0x77ad2d */
  if ((sf == of)) goto L_77ad2d;
L_77ad16: /* 77ad16: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 77ad18: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 77ad1b: cmp ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ad1d: jne 0x77ad2a */
  if (!zf) goto L_77ad2a;
L_77ad1f: /* 77ad1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77ad21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ad22: mov ecx, ebx */
  ecx = ebx;
/* 77ad24: call 0x6c26b2 */
  esp -= 4; W32(esp, 0x77ad29u); SPILL(); f_6c26b2(); if (g_unwind) return; RELOAD();
/* 77ad29: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_77ad2a: /* 77ad2a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 77ad2b: jmp 0x77ad11 */
  goto L_77ad11;
L_77ad2d: /* 77ad2d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77ad30: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 77ad32: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77ad35: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77ad38: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77ad3a: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 77ad3d: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
/* 77ad40: mov eax, esi */
  eax = esi;
/* 77ad42: mov ecx, edi */
  ecx = edi;
/* 77ad44: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 77ad46: jbe 0x77ad4e */
  if ((cf | zf)) goto L_77ad4e;
L_77ad48: /* 77ad48: mov edx, eax */
  edx = eax;
/* 77ad4a: mov eax, ecx */
  eax = ecx;
/* 77ad4c: mov ecx, edx */
  ecx = edx;
L_77ad4e: /* 77ad4e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 77ad51: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 77ad54: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 77ad57: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 77ad5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ad5b: call 0x6c1735 */
  esp -= 4; W32(esp, 0x77ad60u); SPILL(); f_6c1735(); if (g_unwind) return; RELOAD();
/* 77ad60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ad62: jne 0x77adaf */
  if (!zf) goto L_77adaf;
L_77ad64: /* 77ad64: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 77ad67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ad68: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 77ad6b: call 0x6c1a46 */
  esp -= 4; W32(esp, 0x77ad70u); SPILL(); f_6c1a46(); if (g_unwind) return; RELOAD();
/* 77ad70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ad72: jne 0x77ad8c */
  if (!zf) goto L_77ad8c;
L_77ad74: /* 77ad74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ad75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ad76: call 0x92a3e0 */
  esp -= 4; W32(esp, 0x77ad7bu); SPILL(); f_92a3e0(); if (g_unwind) return; RELOAD();
/* 77ad7b: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 77ad7e: mov esi, eax */
  esi = eax;
/* 77ad80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77ad81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ad82: call 0x6c4a20 */
  esp -= 4; W32(esp, 0x77ad87u); SPILL(); f_6c4a20(); if (g_unwind) return; RELOAD();
/* 77ad87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ad8a: jmp 0x77ad8e */
  goto L_77ad8e;
L_77ad8c: /* 77ad8c: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
L_77ad8e: /* 77ad8e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 77ad91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ad92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ad93: call 0x92a5d0 */
  esp -= 4; W32(esp, 0x77ad98u); SPILL(); f_92a5d0(); if (g_unwind) return; RELOAD();
/* 77ad98: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77ad9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ad9c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 77ad9f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 77ada2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77ada3: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77adaa: call 0x6c30c6 */
  esp -= 4; W32(esp, 0x77adafu); SPILL(); f_6c30c6(); if (g_unwind) return; RELOAD();
L_77adaf: /* 77adaf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 77adb0: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 77adb3: mov eax, ebx */
  eax = ebx;
/* 77adb5: jmp 0x77ac80 */
  goto L_77ac80;
L_77adea: /* 77adea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77aded: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77adee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77adef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77adf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77adf7: mov esp, ebp */
  esp = ebp;
/* 77adf9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77adfa: ret  */
  esp += 4; SPILL(); return;
}

void f_77adba(void) {
  LOAD_REGS();
L_77adba: /* 77adba: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77adbd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77adc2: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77adc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77adc6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77adc9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77adceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77adce(); return;
}

void f_77adce(void) {
  LOAD_REGS();
L_77adce: /* 77adce: push 0xa08530 */
  { uint32_t v = 0xa08530u; esp -= 4; W32(esp, v); }
/* 77add3: push 0xac4e28 */
  { uint32_t v = 0xac4e28u; esp -= 4; W32(esp, v); }
/* 77add8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77addeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77adde: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ade1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ade3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ade5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77adeau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 77adea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77aded: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77adee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77adef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77adf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77adf7: mov esp, ebp */
  esp = ebp;
/* 77adf9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77adfa: ret  */
  esp += 4; SPILL(); return;
}

void f_77ae70(void) {
  LOAD_REGS();
L_77ae70: /* 77ae70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ae71: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 77ae75: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ae77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ae78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ae79: jne 0x77aed8 */
  if (!zf) goto L_77aed8;
L_77ae7b: /* 77ae7b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 77ae7f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ae81: jne 0x77ae9b */
  if (!zf) goto L_77ae9b;
L_77ae83: /* 77ae83: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 77ae88: push 0xac4e74 */
  { uint32_t v = 0xac4e74u; esp -= 4; W32(esp, v); }
/* 77ae8d: push 0xac4e84 */
  { uint32_t v = 0xac4e84u; esp -= 4; W32(esp, v); }
/* 77ae92: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77ae98u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77ae98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77ae9b: /* 77ae9b: mov esi, dword ptr [edi + 0x328] */
  esi = R32((uint32_t)(edi + 0x328u));
/* 77aea1: cmp esi, dword ptr [edi + 0x32c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77aea7: jg 0x77aed4 */
  if ((!zf && sf == of)) goto L_77aed4;
L_77aea9: /* 77aea9: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 77aead: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_77aeb0: /* 77aeb0: mov edx, dword ptr [edi + 0x2dc] */
  edx = R32((uint32_t)(edi + 0x2dcu));
/* 77aeb6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 77aeb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77aebb: je 0x77aec9 */
  if (zf) goto L_77aec9;
L_77aebd: /* 77aebd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77aebe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77aec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77aec1: call 0x77ae70 */
  esp -= 4; W32(esp, 0x77aec6u); SPILL(); f_77ae70(); if (g_unwind) return; RELOAD();
/* 77aec6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77aec9: /* 77aec9: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 77aecf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 77aed0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77aed2: jle 0x77aeb0 */
  if ((zf || sf != of)) goto L_77aeb0;
L_77aed4: /* 77aed4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77aed5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77aed6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77aed7: ret  */
  esp += 4; SPILL(); return;
L_77aed8: /* 77aed8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 77aedc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77aede: je 0x77aef8 */
  if (zf) goto L_77aef8;
L_77aee0: /* 77aee0: push 0x135 */
  { uint32_t v = 0x135u; esp -= 4; W32(esp, v); }
/* 77aee5: push 0xac4e94 */
  { uint32_t v = 0xac4e94u; esp -= 4; W32(esp, v); }
/* 77aeea: push 0xac4ea4 */
  { uint32_t v = 0xac4ea4u; esp -= 4; W32(esp, v); }
/* 77aeef: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77aef5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77aef5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77aef8: /* 77aef8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77aef9: call 0x9287a0 */
  esp -= 4; W32(esp, 0x77aefeu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 77aefe: mov edi, eax */
  edi = eax;
/* 77af00: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 77af03: xor esi, esi */
  esi = 0;
/* 77af05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77af07: jle 0x77aed4 */
  if ((zf || sf != of)) goto L_77aed4;
L_77af09: /* 77af09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77af0a: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 77af0e: mov edi, edi */
  edi = edi;
L_77af10: /* 77af10: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 77af13: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 77af16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77af17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77af18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77af19: call 0x6c8f1c */
  esp -= 4; W32(esp, 0x77af1eu); SPILL(); f_6c8f1c(); if (g_unwind) return; RELOAD();
/* 77af1e: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 77af21: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77af24: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 77af25: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77af27: jl 0x77af10 */
  if ((sf != of)) goto L_77af10;
L_77af29: /* 77af29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77af2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77af2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77af2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77af2d: ret  */
  esp += 4; SPILL(); return;
}

void f_77af60(void) {
  LOAD_REGS();
L_77af60: /* 77af60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77af61: mov ebp, esp */
  ebp = esp;
/* 77af63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77af65: push 0x9cc518 */
  { uint32_t v = 0x9cc518u; esp -= 4; W32(esp, v); }
/* 77af6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77af70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77af71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77af78: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77af7b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77af7e: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 77af84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77af86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77af87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77af88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77af89: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77af8c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77af93: je 0x77b414 */
  if (zf) goto L_77b414;
L_77af99: /* 77af99: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 77af9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77afa0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 77afa3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x77afa9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 77afa9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77afac: call 0x6c7054 */
  esp -= 4; W32(esp, 0x77afb1u); SPILL(); f_6c7054(); if (g_unwind) return; RELOAD();
/* 77afb1: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 77afb7: mov eax, dword ptr [edx + 0x15238] */
  eax = R32((uint32_t)(edx + 0x15238u));
/* 77afbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77afbe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 77afc2: call 0x92a500 */
  esp -= 4; W32(esp, 0x77afc7u); SPILL(); f_92a500(); if (g_unwind) return; RELOAD();
/* 77afc7: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 77afcd: xor eax, eax */
  eax = 0;
/* 77afcf: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_77afd2: /* 77afd2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77afd5: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77afd8: jge 0x77b38f */
  if ((sf == of)) goto L_77b38f;
L_77afde: /* 77afde: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77afe0: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 77afe3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77afe5: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 77afe8: jne 0x77affe */
  if (!zf) goto L_77affe;
L_77afea: /* 77afea: push 0x168 */
  { uint32_t v = 0x168u; esp -= 4; W32(esp, v); }
/* 77afef: push 0xac4eb8 */
  { uint32_t v = 0xac4eb8u; esp -= 4; W32(esp, v); }
/* 77aff4: push 0xac4ec8 */
  { uint32_t v = 0xac4ec8u; esp -= 4; W32(esp, v); }
/* 77aff9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77affbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77affb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77affe: /* 77affe: mov eax, dword ptr [ebx + 0x30c] */
  eax = R32((uint32_t)(ebx + 0x30cu));
/* 77b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b006: jne 0x77b01c */
  if (!zf) goto L_77b01c;
L_77b008: /* 77b008: push 0x169 */
  { uint32_t v = 0x169u; esp -= 4; W32(esp, v); }
/* 77b00d: push 0xac4ed0 */
  { uint32_t v = 0xac4ed0u; esp -= 4; W32(esp, v); }
/* 77b012: push 0xac4ee0 */
  { uint32_t v = 0xac4ee0u; esp -= 4; W32(esp, v); }
/* 77b017: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b019: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b01c: /* 77b01c: mov esi, dword ptr [ebx + 0x30c] */
  esi = R32((uint32_t)(ebx + 0x30cu));
/* 77b022: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b024: je 0x77b037 */
  if (zf) goto L_77b037;
L_77b026: /* 77b026: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77b02b: mov ecx, esi */
  ecx = esi;
/* 77b02d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77b033u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77b033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b035: jne 0x77b04d */
  if (!zf) goto L_77b04d;
L_77b037: /* 77b037: push 0x16d */
  { uint32_t v = 0x16du; esp -= 4; W32(esp, v); }
/* 77b03c: push 0xac4ef0 */
  { uint32_t v = 0xac4ef0u; esp -= 4; W32(esp, v); }
/* 77b041: push 0xac4f00 */
  { uint32_t v = 0xac4f00u; esp -= 4; W32(esp, v); }
/* 77b046: xor esi, esi */
  esi = 0;
/* 77b048: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b04au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b04a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b04d: /* 77b04d: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* 77b053: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 77b056: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 77b059: je 0x77b066 */
  if (zf) goto L_77b066;
L_77b05b: /* 77b05b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 77b05e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b060: je 0x77b383 */
  if (zf) goto L_77b383;
L_77b066: /* 77b066: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b068: jne 0x77b075 */
  if (!zf) goto L_77b075;
L_77b06a: /* 77b06a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 77b06d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b06f: jne 0x77b383 */
  if (!zf) goto L_77b383;
L_77b075: /* 77b075: and dword ptr [esi + 0x48], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x48u), r);
  }
/* 77b079: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 77b07b: mov ecx, ebx */
  ecx = ebx;
/* 77b07d: call dword ptr [edx + 0x14c] */
  { uint32_t t = R32((uint32_t)(edx + 0x14cu)); esp -= 4; W32(esp, 0x77b083u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b083: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 77b089: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77b08c: je 0x77b0a2 */
  if (zf) goto L_77b0a2;
L_77b08e: /* 77b08e: push 0x179 */
  { uint32_t v = 0x179u; esp -= 4; W32(esp, v); }
/* 77b093: push 0xac4f08 */
  { uint32_t v = 0xac4f08u; esp -= 4; W32(esp, v); }
/* 77b098: push 0xac4f18 */
  { uint32_t v = 0xac4f18u; esp -= 4; W32(esp, v); }
/* 77b09d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b09fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b09f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b0a2: /* 77b0a2: mov al, byte ptr [ebx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x50u))) & 0xffu);
/* 77b0a5: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77b0a7: je 0x77b0c1 */
  if (zf) goto L_77b0c1;
L_77b0a9: /* 77b0a9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77b0ab: je 0x77b0c1 */
  if (zf) goto L_77b0c1;
L_77b0ad: /* 77b0ad: push 0x17a */
  { uint32_t v = 0x17au; esp -= 4; W32(esp, v); }
/* 77b0b2: push 0xac4f2c */
  { uint32_t v = 0xac4f2cu; esp -= 4; W32(esp, v); }
/* 77b0b7: push 0xac4f40 */
  { uint32_t v = 0xac4f40u; esp -= 4; W32(esp, v); }
/* 77b0bc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b0beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b0be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b0c1: /* 77b0c1: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 77b0c7: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77b0ca: jne 0x77b0e0 */
  if (!zf) goto L_77b0e0;
L_77b0cc: /* 77b0cc: push 0x17b */
  { uint32_t v = 0x17bu; esp -= 4; W32(esp, v); }
/* 77b0d1: push 0xac4f84 */
  { uint32_t v = 0xac4f84u; esp -= 4; W32(esp, v); }
/* 77b0d6: push 0xac4f94 */
  { uint32_t v = 0xac4f94u; esp -= 4; W32(esp, v); }
/* 77b0db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b0ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b0dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b0e0: /* 77b0e0: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77b0e7: jne 0x77b0fd */
  if (!zf) goto L_77b0fd;
L_77b0e9: /* 77b0e9: push 0x17c */
  { uint32_t v = 0x17cu; esp -= 4; W32(esp, v); }
/* 77b0ee: push 0xac4fa8 */
  { uint32_t v = 0xac4fa8u; esp -= 4; W32(esp, v); }
/* 77b0f3: push 0xac4fb8 */
  { uint32_t v = 0xac4fb8u; esp -= 4; W32(esp, v); }
/* 77b0f8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b0fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b0fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b0fd: /* 77b0fd: xor esi, esi */
  esi = 0;
/* 77b0ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b100: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77b103: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77b106: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 77b109: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 77b10c: call 0x779160 */
  esp -= 4; W32(esp, 0x77b111u); SPILL(); f_779160(); if (g_unwind) return; RELOAD();
/* 77b111: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77b114: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b117: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77b119: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77b11c: jne 0x77b128 */
  if (!zf) goto L_77b128;
L_77b11e: /* 77b11e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b120: je 0x77b383 */
  if (zf) goto L_77b383;
L_77b126: /* 77b126: jmp 0x77b140 */
  goto L_77b140;
L_77b128: /* 77b128: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b12a: je 0x77b140 */
  if (zf) goto L_77b140;
L_77b12c: /* 77b12c: push 0x185 */
  { uint32_t v = 0x185u; esp -= 4; W32(esp, v); }
/* 77b131: push 0xac4fd0 */
  { uint32_t v = 0xac4fd0u; esp -= 4; W32(esp, v); }
/* 77b136: push 0xac4fe0 */
  { uint32_t v = 0xac4fe0u; esp -= 4; W32(esp, v); }
/* 77b13b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b13du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b13d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b140: /* 77b140: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77b143: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b144: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b145: call 0x779ff0 */
  esp -= 4; W32(esp, 0x77b14au); SPILL(); f_779ff0(); if (g_unwind) return; RELOAD();
/* 77b14a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 77b14c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b14f: mov ecx, ebx */
  ecx = ebx;
/* 77b151: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x77b157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b157: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77b159: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b15a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 77b160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b161: mov ecx, eax */
  ecx = eax;
/* 77b163: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x77b166u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b166: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 77b169: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 77b16f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77b171: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77b173: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 77b179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b17a: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 77b17f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b181: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x77b184u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b184: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 77b187: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 77b18a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x77b190u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 77b190: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 77b193: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77b197: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x77b19du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 77b19d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77b1a0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 77b1a4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_77b1a7: /* 77b1a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b1a9: je 0x77b2d8 */
  if (zf) goto L_77b2d8;
L_77b1af: /* 77b1af: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 77b1b2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b1b4: jne 0x77b1ca */
  if (!zf) goto L_77b1ca;
L_77b1b6: /* 77b1b6: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 77b1bb: push 0xac4ff4 */
  { uint32_t v = 0xac4ff4u; esp -= 4; W32(esp, v); }
/* 77b1c0: push 0xac5004 */
  { uint32_t v = 0xac5004u; esp -= 4; W32(esp, v); }
/* 77b1c5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b1c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b1c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b1ca: /* 77b1ca: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 77b1d0: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77b1d3: jne 0x77b1e9 */
  if (!zf) goto L_77b1e9;
L_77b1d5: /* 77b1d5: push 0x198 */
  { uint32_t v = 0x198u; esp -= 4; W32(esp, v); }
/* 77b1da: push 0xac5010 */
  { uint32_t v = 0xac5010u; esp -= 4; W32(esp, v); }
/* 77b1df: push 0xac5020 */
  { uint32_t v = 0xac5020u; esp -= 4; W32(esp, v); }
/* 77b1e4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b1e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b1e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b1e9: /* 77b1e9: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 77b1ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b1f1: jne 0x77b207 */
  if (!zf) goto L_77b207;
L_77b1f3: /* 77b1f3: push 0x199 */
  { uint32_t v = 0x199u; esp -= 4; W32(esp, v); }
/* 77b1f8: push 0xac5038 */
  { uint32_t v = 0xac5038u; esp -= 4; W32(esp, v); }
/* 77b1fd: push 0xac5048 */
  { uint32_t v = 0xac5048u; esp -= 4; W32(esp, v); }
/* 77b202: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b204u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b204: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b207: /* 77b207: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 77b20d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77b210: je 0x77b226 */
  if (zf) goto L_77b226;
L_77b212: /* 77b212: push 0x19a */
  { uint32_t v = 0x19au; esp -= 4; W32(esp, v); }
/* 77b217: push 0xac505c */
  { uint32_t v = 0xac505cu; esp -= 4; W32(esp, v); }
/* 77b21c: push 0xac506c */
  { uint32_t v = 0xac506cu; esp -= 4; W32(esp, v); }
/* 77b221: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b223u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b223: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b226: /* 77b226: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77b228: je 0x77b2c3 */
  if (zf) goto L_77b2c3;
L_77b22e: /* 77b22e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77b231: mov ecx, esi */
  ecx = esi;
/* 77b233: call 0x7792c0 */
  esp -= 4; W32(esp, 0x77b238u); SPILL(); f_7792c0(); if (g_unwind) return; RELOAD();
/* 77b238: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b23a: je 0x77b2c3 */
  if (zf) goto L_77b2c3;
L_77b240: /* 77b240: xor eax, eax */
  eax = 0;
/* 77b242: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b243: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 77b246: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 77b249: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77b24c: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 77b24f: call 0x779160 */
  esp -= 4; W32(esp, 0x77b254u); SPILL(); f_779160(); if (g_unwind) return; RELOAD();
/* 77b254: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77b257: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77b25a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b25d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b25f: jne 0x77b267 */
  if (!zf) goto L_77b267;
L_77b261: /* 77b261: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b263: je 0x77b2c3 */
  if (zf) goto L_77b2c3;
L_77b265: /* 77b265: jmp 0x77b27f */
  goto L_77b27f;
L_77b267: /* 77b267: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b269: je 0x77b27f */
  if (zf) goto L_77b27f;
L_77b26b: /* 77b26b: push 0x1a8 */
  { uint32_t v = 0x1a8u; esp -= 4; W32(esp, v); }
/* 77b270: push 0xac5084 */
  { uint32_t v = 0xac5084u; esp -= 4; W32(esp, v); }
/* 77b275: push 0xac5094 */
  { uint32_t v = 0xac5094u; esp -= 4; W32(esp, v); }
/* 77b27a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b27cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b27c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b27f: /* 77b27f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77b282: add ecx, 0x11a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 77b288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b289: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77b28c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77b28e: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 77b291: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b292: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77b295: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 77b298: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b299: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b29a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b29b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b29c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b29d: call 0x7795c0 */
  esp -= 4; W32(esp, 0x77b2a2u); SPILL(); f_7795c0(); if (g_unwind) return; RELOAD();
/* 77b2a2: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 77b2a5: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 77b2a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b2ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77b2ad: je 0x77b2c3 */
  if (zf) goto L_77b2c3;
L_77b2af: /* 77b2af: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 77b2b4: push 0xac50a8 */
  { uint32_t v = 0xac50a8u; esp -= 4; W32(esp, v); }
/* 77b2b9: push 0xac50b8 */
  { uint32_t v = 0xac50b8u; esp -= 4; W32(esp, v); }
/* 77b2be: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b2c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b2c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b2c3: /* 77b2c3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77b2c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77b2c8: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77b2cb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 77b2ce: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 77b2d1: mov eax, edx */
  eax = edx;
/* 77b2d3: jmp 0x77b1a7 */
  goto L_77b1a7;
L_77b2d8: /* 77b2d8: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77b2db: lea eax, [esi + 0x11a4] */
  eax = (uint32_t)(esi + 0x11a4u);
/* 77b2e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b2e2: mov eax, dword ptr [esi + 0x1168] */
  eax = R32((uint32_t)(esi + 0x1168u));
/* 77b2e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b2ea: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 77b2ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b2ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77b2f1: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 77b2f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b2f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b2f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b2f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b2f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b2fa: call 0x7795c0 */
  esp -= 4; W32(esp, 0x77b2ffu); SPILL(); f_7795c0(); if (g_unwind) return; RELOAD();
/* 77b2ff: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b302: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b304: je 0x77b318 */
  if (zf) goto L_77b318;
L_77b306: /* 77b306: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 77b309: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b30a: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 77b30d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b30e: mov ecx, ebx */
  ecx = ebx;
/* 77b310: call 0x779430 */
  esp -= 4; W32(esp, 0x77b315u); SPILL(); f_779430(); if (g_unwind) return; RELOAD();
/* 77b315: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b318: /* 77b318: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 77b31b: cmp ecx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77b31e: je 0x77b334 */
  if (zf) goto L_77b334;
L_77b320: /* 77b320: push 0x1ba */
  { uint32_t v = 0x1bau; esp -= 4; W32(esp, v); }
/* 77b325: push 0xac50d8 */
  { uint32_t v = 0xac50d8u; esp -= 4; W32(esp, v); }
/* 77b32a: push 0xac50e8 */
  { uint32_t v = 0xac50e8u; esp -= 4; W32(esp, v); }
/* 77b32f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77b331u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b331: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b334: /* 77b334: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 77b33a: mov eax, dword ptr [edx + 0x15238] */
  eax = R32((uint32_t)(edx + 0x15238u));
/* 77b340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b342: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77b345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b346: lea edx, [esi + 0x1190] */
  edx = (uint32_t)(esi + 0x1190u);
/* 77b34c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b34d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 77b350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b351: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 77b354: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b355: call 0x77ac50 */
  esp -= 4; W32(esp, 0x77b35au); SPILL(); f_77ac50(); if (g_unwind) return; RELOAD();
/* 77b35a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77b35d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b361: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b362: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b363: call 0x77ae70 */
  esp -= 4; W32(esp, 0x77b368u); SPILL(); f_77ae70(); if (g_unwind) return; RELOAD();
/* 77b368: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b36b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 77b36e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77b372: call 0x6c117c */
  esp -= 4; W32(esp, 0x77b377u); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 77b377: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 77b37a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 77b37e: call 0x6c117c */
  esp -= 4; W32(esp, 0x77b383u); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
L_77b383: /* 77b383: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77b386: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77b387: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 77b38a: jmp 0x77afd2 */
  goto L_77afd2;
L_77b38f: /* 77b38f: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 77b392: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x77b398u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 77b398: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 77b39d: mov ecx, dword ptr [0xce8320] */
  ecx = R32((uint32_t)(0xce8320u));
/* 77b3a3: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 77b3a6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 77b3a8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 77b3aa: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 77b3b0: mov eax, dword ptr [edx + 0x15238] */
  eax = R32((uint32_t)(edx + 0x15238u));
/* 77b3b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b3b7: call 0x92a560 */
  esp -= 4; W32(esp, 0x77b3bcu); SPILL(); f_92a560(); if (g_unwind) return; RELOAD();
/* 77b3bc: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 77b3c2: mov edx, dword ptr [ecx + 0x15238] */
  edx = R32((uint32_t)(ecx + 0x15238u));
/* 77b3c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b3c9: mov esi, eax */
  esi = eax;
/* 77b3cb: call 0x92a550 */
  esp -= 4; W32(esp, 0x77b3d0u); SPILL(); f_92a550(); if (g_unwind) return; RELOAD();
/* 77b3d0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 77b3d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77b3d4: jle 0x77b3ef */
  if ((zf || sf != of)) goto L_77b3ef;
L_77b3d6: /* 77b3d6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77b3d9: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 77b3df: mov edx, dword ptr [ecx + 0x15238] */
  edx = R32((uint32_t)(ecx + 0x15238u));
/* 77b3e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b3e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b3e7: call 0x6c2d42 */
  esp -= 4; W32(esp, 0x77b3ecu); SPILL(); f_6c2d42(); if (g_unwind) return; RELOAD();
/* 77b3ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b3ef: /* 77b3ef: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 77b3f4: mov ecx, dword ptr [0xce8320] */
  ecx = R32((uint32_t)(0xce8320u));
/* 77b3fa: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 77b3fd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 77b3ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77b401: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77b404: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 77b406: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 77b408: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77b40b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77b40f: call 0x6c8959 */
  esp -= 4; W32(esp, 0x77b414u); SPILL(); f_6c8959(); if (g_unwind) return; RELOAD();
L_77b414: /* 77b414: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77b417: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77b418: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77b419: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77b420: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77b421: mov esp, ebp */
  esp = ebp;
/* 77b423: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77b424: ret  */
  esp += 4; SPILL(); return;
}

void f_77b425(void) {
  LOAD_REGS();
L_77b425: /* 77b425: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 77b428: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77b42d: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 77b430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b431: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 77b434: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b439u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77b439(); return;
}

void f_77b439(void) {
  LOAD_REGS();
L_77b439: /* 77b439: push 0xa08558 */
  { uint32_t v = 0xa08558u; esp -= 4; W32(esp, v); }
/* 77b43e: push 0xac5108 */
  { uint32_t v = 0xac5108u; esp -= 4; W32(esp, v); }
/* 77b443: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77b449u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77b449: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b44c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b44e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b450: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b455u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77b455: guest_badaddr(0x77b455); return;
}

void f_77b5a0(void) {
  LOAD_REGS();
L_77b5a0: /* 77b5a0: mov eax, dword ptr [ecx + 0x30c] */
  eax = R32((uint32_t)(ecx + 0x30cu));
/* 77b5a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b5a8: jne 0x77b5ab */
  if (!zf) goto L_77b5ab;
L_77b5aa: /* 77b5aa: ret  */
  esp += 4; SPILL(); return;
L_77b5ab: /* 77b5ab: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 77b5ae: ret  */
  esp += 4; SPILL(); return;
}

void f_77b5c0(void) {
  LOAD_REGS();
L_77b5c0: /* 77b5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77b5c1: mov ebp, esp */
  ebp = esp;
/* 77b5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77b5c5: push 0x9cc530 */
  { uint32_t v = 0x9cc530u; esp -= 4; W32(esp, v); }
/* 77b5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77b5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77b5d8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77b5db: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77b5dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b5de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b5df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b5e0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77b5e3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77b5ea: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77b5f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b5f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b5f2: je 0x77b600 */
  if (zf) goto L_77b600;
L_77b5f4: /* 77b5f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b5f5: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77b5fau); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77b5fa: mov edi, eax */
  edi = eax;
/* 77b5fc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b5fe: jne 0x77b62b */
  if (!zf) goto L_77b62b;
L_77b600: /* 77b600: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77b603: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 77b605: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b608: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x77b60eu); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 77b60e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b611: mov dword ptr [esi + 0x18], 0x3f800000 */
  W32((uint32_t)(esi + 0x18u), 0x3f800000u);
/* 77b618: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77b61b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77b622: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77b623: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77b624: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77b625: mov esp, ebp */
  esp = ebp;
/* 77b627: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77b628: ret 4 */
  esp += 8; SPILL(); return;
L_77b62b: /* 77b62b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 77b62e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b62f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b630: call 0x90e1f0 */
  esp -= 4; W32(esp, 0x77b635u); SPILL(); f_90e1f0(); if (g_unwind) return; RELOAD();
/* 77b635: fld dword ptr [0xa08584] */
  { double v = F32((uint32_t)(0xa08584u)); FPUSH(v); }
/* 77b63b: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77b63e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77b641: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 77b644: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b645: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 77b647: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b648: fld dword ptr [0xa08584] */
  { double v = F32((uint32_t)(0xa08584u)); FPUSH(v); }
/* 77b64e: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 77b651: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 77b654: fld dword ptr [0xa08584] */
  { double v = F32((uint32_t)(0xa08584u)); FPUSH(v); }
/* 77b65a: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 77b65d: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 77b660: call 0x90e220 */
  esp -= 4; W32(esp, 0x77b665u); SPILL(); f_90e220(); if (g_unwind) return; RELOAD();
/* 77b665: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77b668: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 77b66b: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77b66e: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 77b671: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 77b674: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 77b677: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77b67a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b67b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b67c: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 77b67f: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 77b682: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x77b687u); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 77b687: fld dword ptr [0xa08584] */
  { double v = F32((uint32_t)(0xa08584u)); FPUSH(v); }
/* 77b68d: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77b690: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 77b693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b694: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b695: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 77b698: fld dword ptr [0xa08584] */
  { double v = F32((uint32_t)(0xa08584u)); FPUSH(v); }
/* 77b69e: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 77b6a1: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 77b6a4: fld dword ptr [0xa08584] */
  { double v = F32((uint32_t)(0xa08584u)); FPUSH(v); }
/* 77b6aa: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 77b6ad: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* 77b6b0: call 0x90e2f0 */
  esp -= 4; W32(esp, 0x77b6b5u); SPILL(); f_90e2f0(); if (g_unwind) return; RELOAD();
/* 77b6b5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77b6b8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77b6bb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77b6be: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 77b6c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77b6c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77b6c5: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 77b6c8: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 77b6cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77b6cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77b6d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77b6d4: mov esp, ebp */
  esp = ebp;
/* 77b6d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77b6d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77b6da(void) {
  LOAD_REGS();
L_77b6da: /* 77b6da: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77b6dd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77b6e2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77b6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b6e6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77b6e9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b6eeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77b6ee(); return;
}

void f_77b6ee(void) {
  LOAD_REGS();
L_77b6ee: /* 77b6ee: push 0xa0858c */
  { uint32_t v = 0xa0858cu; esp -= 4; W32(esp, v); }
/* 77b6f3: push 0xac579c */
  { uint32_t v = 0xac579cu; esp -= 4; W32(esp, v); }
/* 77b6f8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77b6feu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77b6fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b701: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b703: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b705: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b70au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77b70a: guest_badaddr(0x77b70a); return;
}

void f_77b770(void) {
  LOAD_REGS();
L_77b770: /* 77b770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77b771: mov ebp, esp */
  ebp = esp;
/* 77b773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77b775: push 0x9cc540 */
  { uint32_t v = 0x9cc540u; esp -= 4; W32(esp, v); }
/* 77b77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77b780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77b788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77b78b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77b78d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b78e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b78f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b790: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77b793: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77b79a: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77b7a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b7a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b7a2: jne 0x77b7b7 */
  if (!zf) goto L_77b7b7;
L_77b7a4: /* 77b7a4: xor eax, eax */
  eax = 0;
/* 77b7a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77b7a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77b7b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77b7b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77b7b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77b7b3: mov esp, ebp */
  esp = ebp;
/* 77b7b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77b7b6: ret  */
  esp += 4; SPILL(); return;
L_77b7b7: /* 77b7b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b7b8: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77b7bdu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77b7bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b7bf: je 0x77b7a4 */
  if (zf) goto L_77b7a4;
L_77b7c1: /* 77b7c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b7c2: call 0x90f170 */
  esp -= 4; W32(esp, 0x77b7c7u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 77b7c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77b7ca: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 77b7cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77b7cd: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 77b7cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77b7d0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 77b7d2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77b7d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77b7da: mov esp, ebp */
  esp = ebp;
/* 77b7dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77b7dd: ret  */
  esp += 4; SPILL(); return;
}

void f_77b7de(void) {
  LOAD_REGS();
L_77b7de: /* 77b7de: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77b7e1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77b7e6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77b7e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b7ea: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77b7ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b7f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77b7f2(); return;
}

void f_77b7f2(void) {
  LOAD_REGS();
L_77b7f2: /* 77b7f2: push 0xa085cc */
  { uint32_t v = 0xa085ccu; esp -= 4; W32(esp, v); }
/* 77b7f7: push 0xac57a4 */
  { uint32_t v = 0xac57a4u; esp -= 4; W32(esp, v); }
/* 77b7fc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77b802u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77b802: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b805: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b807: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b809: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b80eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77b80e: guest_badaddr(0x77b80e); return;
}

void f_77b840(void) {
  LOAD_REGS();
L_77b840: /* 77b840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77b841: mov ebp, esp */
  ebp = esp;
/* 77b843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77b845: push 0x9cc550 */
  { uint32_t v = 0x9cc550u; esp -= 4; W32(esp, v); }
/* 77b84a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77b850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77b858: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77b85b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77b85d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b85e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b85f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b860: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77b863: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77b86a: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77b870u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77b870: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b872: je 0x77b8a4 */
  if (zf) goto L_77b8a4;
L_77b874: /* 77b874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b875: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77b87au); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77b87a: mov esi, eax */
  esi = eax;
/* 77b87c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77b87e: je 0x77b8a4 */
  if (zf) goto L_77b8a4;
L_77b880: /* 77b880: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 77b883: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77b886: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77b889: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b88a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b88b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b88c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b88d: call 0x90f380 */
  esp -= 4; W32(esp, 0x77b892u); SPILL(); f_90f380(); if (g_unwind) return; RELOAD();
/* 77b892: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 77b895: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 77b898: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 77b89b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b89c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b89d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b89e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b89f: call 0x90f450 */
  esp -= 4; W32(esp, 0x77b8a4u); SPILL(); f_90f450(); if (g_unwind) return; RELOAD();
L_77b8a4: /* 77b8a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77b8a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77b8a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77b8a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77b8b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77b8b1: mov esp, ebp */
  esp = ebp;
/* 77b8b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77b8b4: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_77b8b7(void) {
  LOAD_REGS();
L_77b8b7: /* 77b8b7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77b8ba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77b8bf: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77b8c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b8c3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77b8c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b8cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77b8cb(); return;
}

void f_77b8cb(void) {
  LOAD_REGS();
L_77b8cb: /* 77b8cb: push 0xa085f4 */
  { uint32_t v = 0xa085f4u; esp -= 4; W32(esp, v); }
/* 77b8d0: push 0xac57b4 */
  { uint32_t v = 0xac57b4u; esp -= 4; W32(esp, v); }
/* 77b8d5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77b8dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77b8db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b8de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b8e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b8e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b8e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77b8e7: guest_badaddr(0x77b8e7); return;
}

void f_77b920(void) {
  LOAD_REGS();
L_77b920: /* 77b920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77b921: mov ebp, esp */
  ebp = esp;
/* 77b923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77b925: push 0x9cc560 */
  { uint32_t v = 0x9cc560u; esp -= 4; W32(esp, v); }
/* 77b92a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77b930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77b938: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77b93b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77b93c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77b93d: mov esi, ecx */
  esi = ecx;
/* 77b93f: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77b943: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77b944: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77b947: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77b94e: je 0x77b968 */
  if (zf) goto L_77b968;
L_77b950: /* 77b950: push 0x28f */
  { uint32_t v = 0x28fu; esp -= 4; W32(esp, v); }
/* 77b955: push 0xac5a70 */
  { uint32_t v = 0xac5a70u; esp -= 4; W32(esp, v); }
/* 77b95a: push 0xac5a7c */
  { uint32_t v = 0xac5a7cu; esp -= 4; W32(esp, v); }
/* 77b95f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77b965u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77b965: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b968: /* 77b968: mov bl, byte ptr [ebp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 77b96b: cmp bl, 0xd */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77b96e: je 0x77b994 */
  if (zf) goto L_77b994;
L_77b970: /* 77b970: mov ecx, esi */
  ecx = esi;
/* 77b972: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x77b978u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 77b978: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 77b97e: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 77b981: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77b982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b983: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 77b985: push 0xac5a98 */
  { uint32_t v = 0xac5a98u; esp -= 4; W32(esp, v); }
/* 77b98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77b98b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77b991u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77b991: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77b994: /* 77b994: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77b997: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77b998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77b999: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77b9a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77b9a1: mov esp, ebp */
  esp = ebp;
/* 77b9a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77b9a4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_77b9a7(void) {
  LOAD_REGS();
L_77b9a7: /* 77b9a7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77b9aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77b9af: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77b9b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77b9b3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77b9b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b9bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77b9bb(); return;
}

void f_77b9bb(void) {
  LOAD_REGS();
L_77b9bb: /* 77b9bb: push 0xa08624 */
  { uint32_t v = 0xa08624u; esp -= 4; W32(esp, v); }
/* 77b9c0: push 0xac5b20 */
  { uint32_t v = 0xac5b20u; esp -= 4; W32(esp, v); }
/* 77b9c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77b9cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77b9cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77b9ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b9d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77b9d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77b9d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77b9d7: guest_badaddr(0x77b9d7); return;
}

void f_77ba10(void) {
  LOAD_REGS();
L_77ba10: /* 77ba10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77ba11: mov ebp, esp */
  ebp = esp;
/* 77ba13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77ba15: push 0x9cc570 */
  { uint32_t v = 0x9cc570u; esp -= 4; W32(esp, v); }
/* 77ba1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77ba20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ba21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77ba28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77ba2b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 77ba2e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77ba30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ba31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ba32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ba33: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ba36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77ba37: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77ba3e: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x77ba44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ba44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ba47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ba48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ba49: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ba50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ba51: mov esp, ebp */
  esp = ebp;
/* 77ba53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77ba54: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77ba57(void) {
  LOAD_REGS();
L_77ba57: /* 77ba57: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77ba5a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77ba5f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77ba62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ba63: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77ba66: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ba6bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77ba6b(); return;
}

void f_77ba6b(void) {
  LOAD_REGS();
L_77ba6b: /* 77ba6b: push 0xa08658 */
  { uint32_t v = 0xa08658u; esp -= 4; W32(esp, v); }
/* 77ba70: push 0xac5b54 */
  { uint32_t v = 0xac5b54u; esp -= 4; W32(esp, v); }
/* 77ba75: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ba7bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ba7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ba7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ba80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ba82: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ba87u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ba87: guest_badaddr(0x77ba87); return;
}

void f_77bab0(void) {
  LOAD_REGS();
L_77bab0: /* 77bab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77bab1: mov ebp, esp */
  ebp = esp;
/* 77bab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77bab5: push 0x9cc592 */
  { uint32_t v = 0x9cc592u; esp -= 4; W32(esp, v); }
/* 77baba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77bac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77bac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77bac8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77bacb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77bacc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77bacd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77bace: mov edi, ecx */
  edi = ecx;
/* 77bad0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 77bad3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77bad6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77badd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x77bae3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 77bae3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77bae6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77bae9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77baec: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77baef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77baf0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77baf3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 77baf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77baf7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77bafc: mov ebx, 1 */
  ebx = 0x1u;
/* 77bb01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77bb02: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 77bb05: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77bb08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77bb08: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77bb0b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77bb0e: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77bb15: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77bb18: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77bb19: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77bb1c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77bb1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77bb20: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77bb25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77bb26: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77bb29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77bb29: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77bb2c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77bb2d: mov eax, edx */
  eax = edx;
/* 77bb2f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77bb32: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77bb35: jne 0x77bb4d */
  if (!zf) goto L_77bb4d;
L_77bb37: /* 77bb37: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77bb3a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77bb3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77bb3d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77bb40: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77bb46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77bb47: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77bb4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77bb4d: /* 77bb4d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 77bb50: call dword ptr [0xcfa548] */
  esp -= 4; W32(esp, 0x77bb56u); SPILL(); f_4e35e9(); if (g_unwind) return; /* Core!?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */ RELOAD();
/* 77bb56: mov ecx, eax */
  ecx = eax;
/* 77bb58: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x77bb5eu); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 77bb5e: mov ecx, edi */
  ecx = edi;
/* 77bb60: mov esi, eax */
  esi = eax;
/* 77bb62: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x77bb68u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 77bb68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77bb69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77bb6a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 77bb6d: push 0xac5b5c */
  { uint32_t v = 0xac5b5cu; esp -= 4; W32(esp, v); }
/* 77bb72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77bb73: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x77bb79u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 77bb79: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77bb7c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77bb7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77bb80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77bb81: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77bb84: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 77bb87: mov ecx, esp */
  ecx = esp;
/* 77bb89: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 77bb8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77bb8d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77bb91: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x77bb97u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 77bb97: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 77bb9d: call 0x6ca8df */
  esp -= 4; W32(esp, 0x77bba2u); SPILL(); f_6ca8df(); if (g_unwind) return; RELOAD();
/* 77bba2: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 77bba5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 77bba8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x77bbaeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 77bbae: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 77bbb1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77bbb5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x77bbbbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 77bbbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77bbbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77bbbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77bbc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77bbc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77bbc8: mov esp, ebp */
  esp = ebp;
/* 77bbca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77bbcb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77bbce(void) {
  LOAD_REGS();
L_77bbce: /* 77bbce: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77bbd1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77bbd6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77bbd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77bbda: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77bbdd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77bbe2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77bbe2(); return;
}

void f_77bbe2(void) {
  LOAD_REGS();
L_77bbe2: /* 77bbe2: push 0xa08694 */
  { uint32_t v = 0xa08694u; esp -= 4; W32(esp, v); }
/* 77bbe7: push 0xac5b68 */
  { uint32_t v = 0xac5b68u; esp -= 4; W32(esp, v); }
/* 77bbec: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77bbf2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77bbf2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77bbf5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77bbf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77bbf9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77bbfeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77bbfe: guest_badaddr(0x77bbfe); return;
}

void f_77bc60(void) {
  LOAD_REGS();
L_77bc60: /* 77bc60: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77bc64: fabs  */
  ST0 = fabs(ST0);
/* 77bc66: ret  */
  esp += 4; SPILL(); return;
}

void f_77bc80(void) {
  LOAD_REGS();
L_77bc80: /* 77bc80: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77bc82: jle 0x77bc8c */
  if ((zf || sf != of)) goto L_77bc8c;
L_77bc84: /* 77bc84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77bc85: xor eax, eax */
  eax = 0;
/* 77bc87: mov edi, edx */
  edi = edx;
/* 77bc89: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 77bc8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_77bc8c: /* 77bc8c: ret  */
  esp += 4; SPILL(); return;
}

void f_77bca0(void) {
  LOAD_REGS();
L_77bca0: /* 77bca0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77bca2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 77bca4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77bca7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 77bcaa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77bcad: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 77bcb0: ret  */
  esp += 4; SPILL(); return;
}

void f_77bcd0(void) {
  LOAD_REGS();
L_77bcd0: /* 77bcd0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 77bcd2: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 77bcd4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 77bcd6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 77bcd9: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 77bcdc: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 77bcdf: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 77bce2: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 77bce5: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 77bce8: ret  */
  esp += 4; SPILL(); return;
}

void f_77bd00(void) {
  LOAD_REGS();
L_77bd00: /* 77bd00: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 77bd03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 77bd05: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 77bd08: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77bd0a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77bd0c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77bd0e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 77bd10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77bd12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77bd14: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77bd16: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77bd18: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 77bd1a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77bd1c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77bd1e: ret  */
  esp += 4; SPILL(); return;
}

void f_77bd30(void) {
  LOAD_REGS();
L_77bd30: /* 77bd30: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77bd34: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 77bd36: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 77bd38: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77bd3c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 77bd3f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 77bd42: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77bd46: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 77bd49: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 77bd4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77bd60(void) {
  LOAD_REGS();
L_77bd60: /* 77bd60: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 77bd62: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 77bd65: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 77bd68: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77bd6a: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 77bd6c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77bd6e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77bd70: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 77bd72: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77bd74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77bd76: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 77bd78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77bd7a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77bd7c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 77bd82: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77bd84: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77bd87: jne 0x77bda8 */
  if (!zf) goto L_77bda8;
L_77bd89: /* 77bd89: fsqrt  */
  ST0 = sqrt(ST0);
/* 77bd8b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 77bd91: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 77bd93: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77bd95: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 77bd97: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 77bd99: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77bd9b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 77bd9e: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 77bda1: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 77bda4: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 77bda7: ret  */
  esp += 4; SPILL(); return;
L_77bda8: /* 77bda8: xor eax, eax */
  eax = 0;
/* 77bdaa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77bdac: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 77bdb2: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 77bdb8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 77bdbb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 77bdbe: ret  */
  esp += 4; SPILL(); return;
}

void f_77bde0(void) {
  LOAD_REGS();
L_77bde0: /* 77bde0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 77bde3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 77bde5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 77bde8: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 77bdeb: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77bded: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 77bdef: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 77bdf1: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 77bdf3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77bdf5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77bdf7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 77bdf9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77bdfb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77bdfd: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77bdff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77be01: fstp st(4) */
  STI(4) = ST0; FPOP();
/* 77be03: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77be05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77be07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77be09: ret  */
  esp += 4; SPILL(); return;
}

void f_77be20(void) {
  LOAD_REGS();
L_77be20: /* 77be20: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77be23: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 77be25: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77be27: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 77be29: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 77be2c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77be2e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 77be30: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 77be33: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77be35: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77be37: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 77be3b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77be3d: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 77be40: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77be42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77be44: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 77be48: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77be4a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 77be4c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77be4e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 77be51: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77be53: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77be55: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 77be58: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 77be5c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77be5e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 77be61: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 77be65: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77be67: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 77be6a: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 77be6e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77be70: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 77be73: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 77be77: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 77be7a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 77be7e: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 77be81: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 77be84: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77be86: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 77be8a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77be8c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 77be8e: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 77be92: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 77be96: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 77be98: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 77be9c: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 77bea0: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 77bea3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 77bea7: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 77beab: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 77beae: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 77beb2: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 77beb6: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 77beb9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77bebb: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 77bebf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77bec1: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 77bec5: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 77bec8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 77becc: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 77bed0: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 77bed3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 77bed7: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 77bedb: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 77bede: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 77bee2: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 77bee6: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 77bee9: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 77beed: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 77bef1: fstp dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 77bef4: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77bef7: ret  */
  esp += 4; SPILL(); return;
}

void f_77bf40(void) {
  LOAD_REGS();
L_77bf40: /* 77bf40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77bf41: mov ebp, esp */
  ebp = esp;
/* 77bf43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77bf45: push 0x9cc5b0 */
  { uint32_t v = 0x9cc5b0u; esp -= 4; W32(esp, v); }
/* 77bf4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77bf50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77bf51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77bf58: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77bf5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77bf5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77bf60: mov esi, ecx */
  esi = ecx;
/* 77bf62: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 77bf68: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77bf6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77bf6c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77bf6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77bf76: jne 0x77bf99 */
  if (!zf) goto L_77bf99;
L_77bf78: /* 77bf78: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 77bf7b: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77bf7d: je 0x77bfaa */
  if (zf) goto L_77bfaa;
L_77bf7f: /* 77bf7f: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77bf81: je 0x77bfae */
  if (zf) goto L_77bfae;
L_77bf83: /* 77bf83: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 77bf88: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77bf8a: push 0xac5870 */
  { uint32_t v = 0xac5870u; esp -= 4; W32(esp, v); }
/* 77bf8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77bf90: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77bf96u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77bf96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77bf99: /* 77bf99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77bf9c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77bfa3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77bfa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77bfa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77bfa6: mov esp, ebp */
  esp = ebp;
/* 77bfa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77bfa9: ret  */
  esp += 4; SPILL(); return;
L_77bfaa: /* 77bfaa: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77bfac: jne 0x77bfc6 */
  if (!zf) goto L_77bfc6;
L_77bfae: /* 77bfae: mov ecx, esi */
  ecx = esi;
/* 77bfb0: call 0x6c4b0b */
  esp -= 4; W32(esp, 0x77bfb5u); SPILL(); f_6c4b0b(); if (g_unwind) return; RELOAD();
/* 77bfb5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77bfb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77bfbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77bfc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77bfc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77bfc2: mov esp, ebp */
  esp = ebp;
/* 77bfc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77bfc5: ret  */
  esp += 4; SPILL(); return;
L_77bfc6: /* 77bfc6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77bfc8: mov ecx, esi */
  ecx = esi;
/* 77bfca: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x77bfd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77bfd0: mov edi, eax */
  edi = eax;
/* 77bfd2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77bfd4: je 0x77bf99 */
  if (zf) goto L_77bf99;
L_77bfd6: /* 77bfd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77bfd7: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77bfdcu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77bfdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77bfde: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77bfe1: je 0x77bf99 */
  if (zf) goto L_77bf99;
L_77bfe3: /* 77bfe3: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 77bfe9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77bfea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77bfeb: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x77bff0u); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 77bff0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 77bff3: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x77bff9u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 77bff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77bffb: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77c000: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 77c003: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x77c008u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 77c008: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 77c00e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77c00f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 77c012: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c013: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 77c016: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c017: call 0x6c2fb3 */
  esp -= 4; W32(esp, 0x77c01cu); SPILL(); f_6c2fb3(); if (g_unwind) return; RELOAD();
/* 77c01c: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77c01f: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 77c025: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 77c02b: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77c02e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c031: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 77c037: and ebx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 77c03a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 77c03d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c03e: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 77c044: mov dword ptr [esi + 0x88], ebx */
  W32((uint32_t)(esi + 0x88u), ebx);
/* 77c04a: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77c04d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 77c050: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77c053: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77c058u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77c058: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77c05b: je 0x77c063 */
  if (zf) goto L_77c063;
L_77c05d: /* 77c05d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c05e: call 0x928630 */
  esp -= 4; W32(esp, 0x77c063u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_77c063: /* 77c063: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 77c066: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 77c06c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c06e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77c070: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c072: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c074: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c076: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 77c079: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c07a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c07d: mov eax, esp */
  eax = esp;
/* 77c07f: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 77c081: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 77c084: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 77c087: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 77c08a: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 77c08d: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77c090: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c093: mov eax, esp */
  eax = esp;
/* 77c095: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 77c097: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77c09a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 77c09d: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77c0a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c0a1: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 77c0a4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x77c0aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c0aa: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 77c0b0: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77c0b3: jne 0x77bf99 */
  if (!zf) goto L_77bf99;
L_77c0b9: /* 77c0b9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77c0bb: mov ecx, esi */
  ecx = esi;
/* 77c0bd: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x77c0c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c0c3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77c0c5: jne 0x77bf99 */
  if (!zf) goto L_77bf99;
L_77c0cb: /* 77c0cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c0cc: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77c0d1u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77c0d1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 77c0d4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77c0d6: jne 0x77bf99 */
  if (!zf) goto L_77bf99;
L_77c0dc: /* 77c0dc: fld dword ptr [0xa08580] */
  { double v = F32((uint32_t)(0xa08580u)); FPUSH(v); }
/* 77c0e2: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 77c0e5: fmul dword ptr [0xa08704] */
  ST0 = ST0 * (F32((uint32_t)(0xa08704u)));
/* 77c0eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c0ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c0ed: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77c0f0: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x77c0f5u); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 77c0f5: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 77c0f8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77c0fb: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 77c0fe: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 77c101: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77c103: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 77c105: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77c107: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77c109: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77c10b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77c10d: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 77c10f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77c111: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77c114: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77c117: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77c119: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 77c11b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77c11d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77c120: jne 0x77c159 */
  if (!zf) goto L_77c159;
L_77c122: /* 77c122: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 77c125: call 0x77bd60 */
  esp -= 4; W32(esp, 0x77c12au); SPILL(); f_77bd60(); if (g_unwind) return; RELOAD();
/* 77c12a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77c12c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 77c12f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77c132: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 77c135: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77c138: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 77c13b: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77c13e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77c141: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77c144: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77c147: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77c14a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77c14d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77c150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c151: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77c152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c153: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c154: call 0x90ea10 */
  esp -= 4; W32(esp, 0x77c159u); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
L_77c159: /* 77c159: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 77c15c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c15d: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 77c163: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c164: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x77c169u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 77c169: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c16c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c16f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c170: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c171: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c178: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c179: mov esp, ebp */
  esp = ebp;
/* 77c17b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c17c: ret  */
  esp += 4; SPILL(); return;
}

void f_77c17d(void) {
  LOAD_REGS();
L_77c17d: /* 77c17d: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 77c180: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77c185: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 77c188: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c189: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 77c18c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c191u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77c191(); return;
}

void f_77c191(void) {
  LOAD_REGS();
L_77c191: /* 77c191: push 0xa086d0 */
  { uint32_t v = 0xa086d0u; esp -= 4; W32(esp, v); }
/* 77c196: push 0xac58e0 */
  { uint32_t v = 0xac58e0u; esp -= 4; W32(esp, v); }
/* 77c19b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77c1a1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77c1a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c1a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c1a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c1a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c1adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77c1ad: guest_badaddr(0x77c1ad); return;
}

void f_77c250(void) {
  LOAD_REGS();
L_77c250: /* 77c250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77c251: mov ebp, esp */
  ebp = esp;
/* 77c253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77c255: push 0x9cc5c0 */
  { uint32_t v = 0x9cc5c0u; esp -= 4; W32(esp, v); }
/* 77c25a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77c260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77c268: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c26b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77c26c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c26d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c26e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77c271: mov esi, ecx */
  esi = ecx;
/* 77c273: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77c27a: call 0x6c7649 */
  esp -= 4; W32(esp, 0x77c27fu); SPILL(); f_6c7649(); if (g_unwind) return; RELOAD();
/* 77c27f: mov eax, dword ptr [0xb7e4e0] */
  eax = R32((uint32_t)(0xb7e4e0u));
/* 77c284: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c287: mov ecx, esi */
  ecx = esi;
/* 77c289: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x77c28fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 77c28f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77c291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c293: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c296: mov ecx, esi */
  ecx = esi;
/* 77c298: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x77c29bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c29b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c29e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c29f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c2a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c2a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c2a8: mov esp, ebp */
  esp = ebp;
/* 77c2aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c2ab: ret  */
  esp += 4; SPILL(); return;
}

void f_77c2ac(void) {
  LOAD_REGS();
L_77c2ac: /* 77c2ac: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77c2af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77c2b4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77c2b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c2b8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77c2bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c2c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77c2c0(); return;
}

void f_77c2c0(void) {
  LOAD_REGS();
L_77c2c0: /* 77c2c0: push 0xa08708 */
  { uint32_t v = 0xa08708u; esp -= 4; W32(esp, v); }
/* 77c2c5: push 0xac5a60 */
  { uint32_t v = 0xac5a60u; esp -= 4; W32(esp, v); }
/* 77c2ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77c2d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77c2d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c2d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c2d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c2d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c2dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77c2dc: guest_badaddr(0x77c2dc); return;
}

void f_77c310(void) {
  LOAD_REGS();
L_77c310: /* 77c310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77c311: mov ebp, esp */
  ebp = esp;
/* 77c313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77c315: push 0x9cc5d0 */
  { uint32_t v = 0x9cc5d0u; esp -= 4; W32(esp, v); }
/* 77c31a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77c320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77c328: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c32b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77c32c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c32d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c32e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77c331: mov esi, ecx */
  esi = ecx;
/* 77c333: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77c33a: call 0x6c45ed */
  esp -= 4; W32(esp, 0x77c33fu); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 77c33f: mov eax, dword ptr [0xb7e484] */
  eax = R32((uint32_t)(0xb7e484u));
/* 77c344: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c346: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c347: mov ecx, esi */
  ecx = esi;
/* 77c349: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x77c34fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 77c34f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77c351: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c353: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c356: mov ecx, esi */
  ecx = esi;
/* 77c358: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x77c35bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c35b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c35e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c35f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c360: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c367: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c368: mov esp, ebp */
  esp = ebp;
/* 77c36a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c36b: ret  */
  esp += 4; SPILL(); return;
}

void f_77c36c(void) {
  LOAD_REGS();
L_77c36c: /* 77c36c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77c36f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77c374: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77c377: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c378: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77c37b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c380u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77c380(); return;
}

void f_77c380(void) {
  LOAD_REGS();
L_77c380: /* 77c380: push 0xa08748 */
  { uint32_t v = 0xa08748u; esp -= 4; W32(esp, v); }
/* 77c385: push 0xac5a68 */
  { uint32_t v = 0xac5a68u; esp -= 4; W32(esp, v); }
/* 77c38a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77c390u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77c390: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c393: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c395: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c397: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c39cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77c39c: guest_badaddr(0x77c39c); return;
}

void f_77c3d0(void) {
  LOAD_REGS();
L_77c3d0: /* 77c3d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77c3d1: mov ebp, esp */
  ebp = esp;
/* 77c3d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77c3d5: push 0x9cc5e0 */
  { uint32_t v = 0x9cc5e0u; esp -= 4; W32(esp, v); }
/* 77c3da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77c3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c3e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77c3e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c3eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77c3ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c3ed: mov esi, ecx */
  esi = ecx;
/* 77c3ef: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77c3f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c3f4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77c3f7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77c3fe: je 0x77c418 */
  if (zf) goto L_77c418;
L_77c400: /* 77c400: push 0x29e */
  { uint32_t v = 0x29eu; esp -= 4; W32(esp, v); }
/* 77c405: push 0xac5b28 */
  { uint32_t v = 0xac5b28u; esp -= 4; W32(esp, v); }
/* 77c40a: push 0xac5b34 */
  { uint32_t v = 0xac5b34u; esp -= 4; W32(esp, v); }
/* 77c40f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77c415u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77c415: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77c418: /* 77c418: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c419: mov ecx, esp */
  ecx = esp;
/* 77c41b: push 0x150 */
  { uint32_t v = 0x150u; esp -= 4; W32(esp, v); }
/* 77c420: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x77c426u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 77c426: mov ecx, esi */
  ecx = esi;
/* 77c428: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x77c42eu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 77c42e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c430: je 0x77c457 */
  if (zf) goto L_77c457;
L_77c432: /* 77c432: mov ecx, dword ptr [0xb7e2fc] */
  ecx = R32((uint32_t)(0xb7e2fcu));
/* 77c438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77c43b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c43d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c43e: mov ecx, esi */
  ecx = esi;
/* 77c440: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77c443: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x77c449u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 77c449: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77c44b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c44d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77c450: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c451: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c452: mov ecx, esi */
  ecx = esi;
/* 77c454: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x77c457u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77c457: /* 77c457: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 77c45a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77c45c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c45d: mov ecx, esi */
  ecx = esi;
/* 77c45f: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x77c462u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c462: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c463: mov ecx, esi */
  ecx = esi;
/* 77c465: call 0x6c8350 */
  esp -= 4; W32(esp, 0x77c46au); SPILL(); f_6c8350(); if (g_unwind) return; RELOAD();
/* 77c46a: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 77c470: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 77c476: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77c478: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 77c47b: jnp 0x77c4bd */
  if (!pf) goto L_77c4bd;
L_77c47d: /* 77c47d: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 77c483: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 77c486: fst dword ptr [esi + 0xb8] */
  WF32((uint32_t)(esi + 0xb8u), ST0);
/* 77c48c: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 77c492: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77c494: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 77c497: jp 0x77c4bd */
  if (pf) goto L_77c4bd;
L_77c499: /* 77c499: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 77c49f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77c4a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c4a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c4a4: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x77c4aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77c4aa: /* 77c4aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c4ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c4b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c4b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c4b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c4b7: mov esp, ebp */
  esp = ebp;
/* 77c4b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c4ba: ret 4 */
  esp += 8; SPILL(); return;
L_77c4bd: /* 77c4bd: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 77c4c3: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77c4c6: jne 0x77c4aa */
  if (!zf) goto L_77c4aa;
L_77c4c8: /* 77c4c8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77c4ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c4cb: mov ecx, esi */
  ecx = esi;
/* 77c4cd: call dword ptr [edx + 0x118] */
  { uint32_t t = R32((uint32_t)(edx + 0x118u)); esp -= 4; W32(esp, 0x77c4d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c4d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c4d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c4d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c4d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c4df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c4e0: mov esp, ebp */
  esp = ebp;
/* 77c4e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c4e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77c4e6(void) {
  LOAD_REGS();
L_77c4e6: /* 77c4e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77c4e9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77c4ee: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77c4f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c4f2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77c4f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c4fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77c4fa(); return;
}

void f_77c4fa(void) {
  LOAD_REGS();
L_77c4fa: /* 77c4fa: push 0xa08788 */
  { uint32_t v = 0xa08788u; esp -= 4; W32(esp, v); }
/* 77c4ff: push 0xac5b4c */
  { uint32_t v = 0xac5b4cu; esp -= 4; W32(esp, v); }
/* 77c504: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77c50au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77c50a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c50d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c50f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c511: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c516u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77c516: guest_badaddr(0x77c516); return;
}

void f_77c580(void) {
  LOAD_REGS();
L_77c580: /* 77c580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c581: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 77c585: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77c58a: mov ecx, esi */
  ecx = esi;
/* 77c58c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x77c592u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 77c592: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c594: jne 0x77c5ae */
  if (!zf) goto L_77c5ae;
L_77c596: /* 77c596: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 77c59b: push 0xac5b70 */
  { uint32_t v = 0xac5b70u; esp -= 4; W32(esp, v); }
/* 77c5a0: push 0xac5bb4 */
  { uint32_t v = 0xac5bb4u; esp -= 4; W32(esp, v); }
/* 77c5a5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77c5abu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77c5ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77c5ae: /* 77c5ae: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 77c5b2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77c5b5: jne 0x77c5bd */
  if (!zf) goto L_77c5bd;
L_77c5b7: /* 77c5b7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x77c5bdu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_77c5bd: /* 77c5bd: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 77c5c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77c5c5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 77c5c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c5cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77c5cc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 77c5d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c5d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c5d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77c5d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c5d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c5d6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x77c5dcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 77c5dc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c5df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c5e0: ret  */
  esp += 4; SPILL(); return;
}

void f_77c610(void) {
  LOAD_REGS();
L_77c610: /* 77c610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c611: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 77c615: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c617: je 0x77c62e */
  if (zf) goto L_77c62e;
L_77c619: /* 77c619: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 77c61e: mov ecx, esi */
  ecx = esi;
/* 77c620: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77c626u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77c626: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c628: je 0x77c62e */
  if (zf) goto L_77c62e;
L_77c62a: /* 77c62a: mov eax, esi */
  eax = esi;
/* 77c62c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c62d: ret  */
  esp += 4; SPILL(); return;
L_77c62e: /* 77c62e: xor eax, eax */
  eax = 0;
/* 77c630: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c631: ret  */
  esp += 4; SPILL(); return;
}

void f_77c650(void) {
  LOAD_REGS();
L_77c650: /* 77c650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77c651: mov ebp, esp */
  ebp = esp;
/* 77c653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77c655: push 0x9cc5f0 */
  { uint32_t v = 0x9cc5f0u; esp -= 4; W32(esp, v); }
/* 77c65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77c660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77c668: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c66b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77c66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c66d: mov esi, ecx */
  esi = ecx;
/* 77c66f: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 77c675: xor ebx, ebx */
  ebx = 0;
/* 77c677: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77c679: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c67a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77c67d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 77c680: je 0x77c7bf */
  if (zf) goto L_77c7bf;
L_77c686: /* 77c686: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 77c68b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77c691u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77c691: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77c693: je 0x77c7bf */
  if (zf) goto L_77c7bf;
L_77c699: /* 77c699: mov edi, dword ptr [esi + 0xec] */
  edi = R32((uint32_t)(esi + 0xecu));
/* 77c69f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77c6a1: je 0x77c6b6 */
  if (zf) goto L_77c6b6;
L_77c6a3: /* 77c6a3: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 77c6a8: mov ecx, edi */
  ecx = edi;
/* 77c6aa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77c6b0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77c6b0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77c6b2: je 0x77c6b6 */
  if (zf) goto L_77c6b6;
L_77c6b4: /* 77c6b4: mov ebx, edi */
  ebx = edi;
L_77c6b6: /* 77c6b6: mov eax, dword ptr [ebx + 0x2f4] */
  eax = R32((uint32_t)(ebx + 0x2f4u));
/* 77c6bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c6be: jne 0x77c6e7 */
  if (!zf) goto L_77c6e7;
L_77c6c0: /* 77c6c0: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 77c6c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77c6c7: push 0xac5720 */
  { uint32_t v = 0xac5720u; esp -= 4; W32(esp, v); }
/* 77c6cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_77c6cd: /* 77c6cd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77c6d3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77c6d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77c6d6: /* 77c6d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c6d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c6e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c6e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c6e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c6e3: mov esp, ebp */
  esp = ebp;
/* 77c6e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c6e6: ret  */
  esp += 4; SPILL(); return;
L_77c6e7: /* 77c6e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77c6e8: call 0x6c458e */
  esp -= 4; W32(esp, 0x77c6edu); SPILL(); f_6c458e(); if (g_unwind) return; RELOAD();
/* 77c6ed: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77c6f1: jne 0x77c758 */
  if (!zf) goto L_77c758;
L_77c6f3: /* 77c6f3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77c6f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c6f8: mov eax, esp */
  eax = esp;
/* 77c6fa: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 77c701: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77c704: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 77c706: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 77c70d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77c710: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 77c713: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 77c71a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77c71d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c71f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77c722: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 77c724: mov ecx, esi */
  ecx = esi;
/* 77c726: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x77c72cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c72c: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 77c733: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77c736: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 77c73c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 77c73e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 77c745: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77c748: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 77c74f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77c752: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 77c755: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_77c758: /* 77c758: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77c75f: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 77c765: je 0x77c77b */
  if (zf) goto L_77c77b;
L_77c767: /* 77c767: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c769: je 0x77c77b */
  if (zf) goto L_77c77b;
L_77c76b: /* 77c76b: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 77c771: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c773: je 0x77c77b */
  if (zf) goto L_77c77b;
L_77c775: /* 77c775: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77c777: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c778: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x77c77bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77c77b: /* 77c77b: mov dword ptr [ebx + 0x318], 1 */
  W32((uint32_t)(ebx + 0x318u), 0x1u);
/* 77c785: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77c78c: je 0x77c6d6 */
  if (zf) goto L_77c6d6;
L_77c792: /* 77c792: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c794: je 0x77c6d6 */
  if (zf) goto L_77c6d6;
L_77c79a: /* 77c79a: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 77c7a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c7a2: je 0x77c6d6 */
  if (zf) goto L_77c6d6;
L_77c7a8: /* 77c7a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77c7aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c7ab: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x77c7aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c7ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c7b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c7b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c7b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c7ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c7bb: mov esp, ebp */
  esp = ebp;
/* 77c7bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c7be: ret  */
  esp += 4; SPILL(); return;
L_77c7bf: /* 77c7bf: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 77c7c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77c7c7: push 0xac56c8 */
  { uint32_t v = 0xac56c8u; esp -= 4; W32(esp, v); }
/* 77c7cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77c7cd: jmp 0x77c6cd */
  goto L_77c6cd;
}

void f_77c7d2(void) {
  LOAD_REGS();
L_77c7d2: /* 77c7d2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77c7d5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77c7da: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77c7dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c7de: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77c7e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c7e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77c7e6(); return;
}

void f_77c7e6(void) {
  LOAD_REGS();
L_77c7e6: /* 77c7e6: push 0xa087d4 */
  { uint32_t v = 0xa087d4u; esp -= 4; W32(esp, v); }
/* 77c7eb: push 0xac5784 */
  { uint32_t v = 0xac5784u; esp -= 4; W32(esp, v); }
/* 77c7f0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77c7f6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77c7f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c7f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c7fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c7fd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c802u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77c802: guest_badaddr(0x77c802); return;
}

void f_77c880(void) {
  LOAD_REGS();
L_77c880: /* 77c880: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77c881: mov ebp, esp */
  ebp = esp;
/* 77c883: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77c885: push 0x9cc600 */
  { uint32_t v = 0x9cc600u; esp -= 4; W32(esp, v); }
/* 77c88a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77c890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c891: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77c898: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c89b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77c89c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c89d: mov esi, ecx */
  esi = ecx;
/* 77c89f: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 77c8a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c8a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c8a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77c8ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77c8b2: jne 0x77c8ed */
  if (!zf) goto L_77c8ed;
L_77c8b4: /* 77c8b4: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 77c8b9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77c8bfu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77c8bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c8c1: jne 0x77c8ed */
  if (!zf) goto L_77c8ed;
L_77c8c3: /* 77c8c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c8c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c8c5: mov ecx, esp */
  ecx = esp;
/* 77c8c7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 77c8ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c8cb: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x77c8d1u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 77c8d1: mov ecx, esi */
  ecx = esi;
/* 77c8d3: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x77c8d9u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 77c8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c8da: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77c8df: call 0x6cb14a */
  esp -= 4; W32(esp, 0x77c8e4u); SPILL(); f_6cb14a(); if (g_unwind) return; RELOAD();
/* 77c8e4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c8e7: mov dword ptr [esi + 0x30c], eax */
  W32((uint32_t)(esi + 0x30cu), eax);
L_77c8ed: /* 77c8ed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c8f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c8f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c8f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c8f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c8fa: mov esp, ebp */
  esp = ebp;
/* 77c8fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c8fd: ret  */
  esp += 4; SPILL(); return;
}

void f_77c8fe(void) {
  LOAD_REGS();
L_77c8fe: /* 77c8fe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77c901: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77c906: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77c909: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77c90a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77c90d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c912u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77c912(); return;
}

void f_77c912(void) {
  LOAD_REGS();
L_77c912: /* 77c912: push 0xa0880c */
  { uint32_t v = 0xa0880cu; esp -= 4; W32(esp, v); }
/* 77c917: push 0xac578c */
  { uint32_t v = 0xac578cu; esp -= 4; W32(esp, v); }
/* 77c91c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77c922u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77c922: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77c925: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c927: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77c929: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77c92eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77c92e: guest_badaddr(0x77c92e); return;
}

void f_77c960(void) {
  LOAD_REGS();
L_77c960: /* 77c960: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77c961: mov ebp, esp */
  ebp = esp;
/* 77c963: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77c965: push 0x9cc610 */
  { uint32_t v = 0x9cc610u; esp -= 4; W32(esp, v); }
/* 77c96a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77c970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c971: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77c978: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77c97b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77c97c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77c97d: mov esi, ecx */
  esi = ecx;
/* 77c97f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 77c981: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c982: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77c985: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77c98c: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77c992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77c992: mov edi, eax */
  edi = eax;
/* 77c994: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c996: je 0x77c9cf */
  if (zf) goto L_77c9cf;
L_77c998: /* 77c998: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c999: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77c99eu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77c99e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c9a0: je 0x77c9cf */
  if (zf) goto L_77c9cf;
L_77c9a2: /* 77c9a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77c9a3: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77c9a8u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77c9a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c9a9: call 0x90f170 */
  esp -= 4; W32(esp, 0x77c9aeu); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 77c9ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c9b0: jne 0x77c9be */
  if (!zf) goto L_77c9be;
L_77c9b2: /* 77c9b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_77c9b3: /* 77c9b3: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77c9b8u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77c9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77c9b9: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x77c9beu); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_77c9be: /* 77c9be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77c9c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77c9c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77c9c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77c9ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77c9cb: mov esp, ebp */
  esp = ebp;
/* 77c9cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77c9ce: ret  */
  esp += 4; SPILL(); return;
L_77c9cf: /* 77c9cf: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77c9d3: jne 0x77c9be */
  if (!zf) goto L_77c9be;
L_77c9d5: /* 77c9d5: mov esi, dword ptr [esi + 0xec] */
  esi = R32((uint32_t)(esi + 0xecu));
/* 77c9db: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c9dd: je 0x77c9be */
  if (zf) goto L_77c9be;
L_77c9df: /* 77c9df: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 77c9e4: mov ecx, esi */
  ecx = esi;
/* 77c9e6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77c9ecu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77c9ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c9ee: je 0x77c9be */
  if (zf) goto L_77c9be;
L_77c9f0: /* 77c9f0: mov eax, dword ptr [esi + 0x2f4] */
  eax = R32((uint32_t)(esi + 0x2f4u));
/* 77c9f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77c9f8: je 0x77c9be */
  if (zf) goto L_77c9be;
L_77c9fa: /* 77c9fa: mov ecx, dword ptr [esi + 0x2dc] */
  ecx = R32((uint32_t)(esi + 0x2dcu));
/* 77ca00: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 77ca02: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ca04: je 0x77c9be */
  if (zf) goto L_77c9be;
L_77ca06: /* 77ca06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ca07: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77ca0cu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77ca0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ca0e: je 0x77c9be */
  if (zf) goto L_77c9be;
L_77ca10: /* 77ca10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ca11: jmp 0x77c9b3 */
  goto L_77c9b3;
}

void f_77ca13(void) {
  LOAD_REGS();
L_77ca13: /* 77ca13: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77ca16: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77ca1b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77ca1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ca1f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 77ca22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ca27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77ca27(); return;
}

void f_77ca27(void) {
  LOAD_REGS();
L_77ca27: /* 77ca27: push 0xa08834 */
  { uint32_t v = 0xa08834u; esp -= 4; W32(esp, v); }
/* 77ca2c: push 0xac5794 */
  { uint32_t v = 0xac5794u; esp -= 4; W32(esp, v); }
/* 77ca31: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ca37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ca37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ca3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ca3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ca3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ca43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ca43: guest_badaddr(0x77ca43); return;
}

void f_77ca90(void) {
  LOAD_REGS();
L_77ca90: /* 77ca90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77ca91: mov ebp, esp */
  ebp = esp;
/* 77ca93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77ca95: push 0x9cc620 */
  { uint32_t v = 0x9cc620u; esp -= 4; W32(esp, v); }
/* 77ca9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77caa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77caa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77caa8: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77caab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77caac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77caad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77caae: xor edi, edi */
  edi = 0;
/* 77cab0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77cab3: mov esi, ecx */
  esi = ecx;
/* 77cab5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 77cab8: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x77cabeu); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 77cabe: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 77cac1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77cac3: je 0x77ccec */
  if (zf) goto L_77ccec;
L_77cac9: /* 77cac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77caca: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77cacfu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77cacf: mov ebx, eax */
  ebx = eax;
/* 77cad1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77cad3: je 0x77ccec */
  if (zf) goto L_77ccec;
L_77cad9: /* 77cad9: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 77cade: mov ecx, esi */
  ecx = esi;
/* 77cae0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77cae6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77cae6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77cae8: je 0x77cbec */
  if (zf) goto L_77cbec;
L_77caee: /* 77caee: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 77caf1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77caf4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77caf6: mov eax, esp */
  eax = esp;
/* 77caf8: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 77cafb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77cafe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77cb00: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 77cb03: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77cb06: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 77cb09: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77cb0c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77cb0f: fmul dword ptr [esi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xacu)));
/* 77cb15: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77cb18: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 77cb1b: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 77cb1e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77cb21: fmul dword ptr [esi + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xb0u)));
/* 77cb27: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77cb2a: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 77cb2d: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 77cb30: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 77cb33: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77cb36: fmul dword ptr [esi + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xb4u)));
/* 77cb3c: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77cb3f: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 77cb42: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 77cb45: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 77cb48: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77cb4b: fmul dword ptr [esi + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xb8u)));
/* 77cb51: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77cb54: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 77cb57: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 77cb5a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77cb5d: fmul dword ptr [esi + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xbcu)));
/* 77cb63: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77cb66: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 77cb69: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 77cb6c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 77cb6f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77cb72: fmul dword ptr [esi + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc0u)));
/* 77cb78: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77cb7b: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 77cb7e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77cb81: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77cb84: fmul dword ptr [esi + 0xcc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xccu)));
/* 77cb8a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77cb8d: fmul dword ptr [esi + 0xc8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc8u)));
/* 77cb93: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 77cb96: fmul dword ptr [esi + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc4u)));
/* 77cb9c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77cb9f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77cba2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 77cba4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 77cba7: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77cbaa: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77cbad: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77cbb0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77cbb3: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 77cbb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77cbb7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77cbba: call 0x6c1965 */
  esp -= 4; W32(esp, 0x77cbbfu); SPILL(); f_6c1965(); if (g_unwind) return; RELOAD();
/* 77cbbf: lea eax, [ebx + 0x1fc] */
  eax = (uint32_t)(ebx + 0x1fcu);
/* 77cbc5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77cbc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cbc9: call 0x972710 */
  esp -= 4; W32(esp, 0x77cbceu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 77cbce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77cbd1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77cbd3: jne 0x77cbdf */
  if (!zf) goto L_77cbdf;
L_77cbd5: /* 77cbd5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 77cbd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77cbd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cbda: call 0x90eea0 */
  esp -= 4; W32(esp, 0x77cbdfu); SPILL(); f_90eea0(); if (g_unwind) return; RELOAD();
L_77cbdf: /* 77cbdf: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 77cbe2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77cbe3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cbe4: call 0x6c75d6 */
  esp -= 4; W32(esp, 0x77cbe9u); SPILL(); f_6c75d6(); if (g_unwind) return; RELOAD();
/* 77cbe9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77cbec: /* 77cbec: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 77cbef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cbf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cbf1: call 0x6caf74 */
  esp -= 4; W32(esp, 0x77cbf6u); SPILL(); f_6caf74(); if (g_unwind) return; RELOAD();
/* 77cbf6: mov al, byte ptr [esi + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x84u))) & 0xffu);
/* 77cbfc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77cbff: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77cc01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cc02: je 0x77cc0b */
  if (zf) goto L_77cc0b;
L_77cc04: /* 77cc04: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x77cc09u); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 77cc09: jmp 0x77cc10 */
  goto L_77cc10;
L_77cc0b: /* 77cc0b: call 0x90f6b0 */
  esp -= 4; W32(esp, 0x77cc10u); SPILL(); f_90f6b0(); if (g_unwind) return; RELOAD();
L_77cc10: /* 77cc10: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 77cc13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77cc14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cc15: call 0x90ea90 */
  esp -= 4; W32(esp, 0x77cc1au); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 77cc1a: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 77cc1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77cc1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cc1f: call 0x90ea70 */
  esp -= 4; W32(esp, 0x77cc24u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 77cc24: test byte ptr [esi + 0x90], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77cc2b: je 0x77ccfd */
  if (zf) goto L_77ccfd;
L_77cc31: /* 77cc31: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 77cc34: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77cc36: jne 0x77cca0 */
  if (!zf) goto L_77cca0;
L_77cc38: /* 77cc38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cc39: call 0x90e0c0 */
  esp -= 4; W32(esp, 0x77cc3eu); SPILL(); f_90e0c0(); if (g_unwind) return; RELOAD();
/* 77cc3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cc3f: call 0x911c00 */
  esp -= 4; W32(esp, 0x77cc44u); SPILL(); f_911c00(); if (g_unwind) return; RELOAD();
/* 77cc44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc46: mov edi, eax */
  edi = eax;
/* 77cc48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cc49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cc4a: call 0x911cb0 */
  esp -= 4; W32(esp, 0x77cc4fu); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 77cc4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cc50: call 0x90c130 */
  esp -= 4; W32(esp, 0x77cc55u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 77cc55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cc56: call 0x911cb0 */
  esp -= 4; W32(esp, 0x77cc5bu); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 77cc5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc5f: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77cc64: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77cc69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc6d: mov ebx, eax */
  ebx = eax;
/* 77cc6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cc72: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x77cc77u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 77cc77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc7b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77cc80: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77cc85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cc89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77cc8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cc8c: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x77cc91u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 77cc91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cc92: call 0x911cb0 */
  esp -= 4; W32(esp, 0x77cc97u); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 77cc97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cc98: call 0x90bc20 */
  esp -= 4; W32(esp, 0x77cc9du); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 77cc9d: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
L_77cca0: /* 77cca0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cca1: call 0x911d00 */
  esp -= 4; W32(esp, 0x77cca6u); SPILL(); f_911d00(); if (g_unwind) return; RELOAD();
/* 77cca6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77cca8: je 0x77ccb7 */
  if (zf) goto L_77ccb7;
L_77ccaa: /* 77ccaa: test byte ptr [esi + 0x90], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77ccb1: jne 0x77ccb7 */
  if (!zf) goto L_77ccb7;
L_77ccb3: /* 77ccb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ccb5: jmp 0x77cccc */
  goto L_77cccc;
L_77ccb7: /* 77ccb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ccb8: call 0x911d00 */
  esp -= 4; W32(esp, 0x77ccbdu); SPILL(); f_911d00(); if (g_unwind) return; RELOAD();
/* 77ccbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ccbf: jne 0x77ccd2 */
  if (!zf) goto L_77ccd2;
L_77ccc1: /* 77ccc1: test byte ptr [esi + 0x90], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77ccc8: je 0x77ccd2 */
  if (zf) goto L_77ccd2;
L_77ccca: /* 77ccca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_77cccc: /* 77cccc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cccd: call 0x911d70 */
  esp -= 4; W32(esp, 0x77ccd2u); SPILL(); f_911d70(); if (g_unwind) return; RELOAD();
L_77ccd2: /* 77ccd2: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 77ccd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ccd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ccda: call 0x911d90 */
  esp -= 4; W32(esp, 0x77ccdfu); SPILL(); f_911d90(); if (g_unwind) return; RELOAD();
/* 77ccdf: mov ecx, dword ptr [esi + 0x98] */
  ecx = R32((uint32_t)(esi + 0x98u));
/* 77cce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77cce6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cce7: call 0x911db0 */
  esp -= 4; W32(esp, 0x77ccecu); SPILL(); f_911db0(); if (g_unwind) return; RELOAD();
L_77ccec: /* 77ccec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ccef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ccf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ccf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ccf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ccf9: mov esp, ebp */
  esp = ebp;
/* 77ccfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77ccfc: ret  */
  esp += 4; SPILL(); return;
L_77ccfd: /* 77ccfd: mov ebx, dword ptr [esi + 0x4c] */
  ebx = R32((uint32_t)(esi + 0x4cu));
/* 77cd00: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77cd02: je 0x77ccec */
  if (zf) goto L_77ccec;
L_77cd04: /* 77cd04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cd05: call 0x911cb0 */
  esp -= 4; W32(esp, 0x77cd0au); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 77cd0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cd0b: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x77cd10u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 77cd10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77cd11: call 0x911cb0 */
  esp -= 4; W32(esp, 0x77cd16u); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 77cd16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cd17: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x77cd1cu); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 77cd1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77cd1f: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 77cd22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77cd23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77cd24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77cd2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77cd2c: mov esp, ebp */
  esp = ebp;
/* 77cd2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77cd2f: ret  */
  esp += 4; SPILL(); return;
}
